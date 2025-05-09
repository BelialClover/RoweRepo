#include "global.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "gpu_regs.h"
#include "battle_setup.h"
#include "graphics.h"
#include "field_specials.h"
#include "item.h"
#include "level_scaling.h"
#include "item_menu.h"
#include "item_menu_icons.h"
#include "list_menu.h"
#include "item_icon.h"
#include "item_use.h"
#include "main.h"
#include "pokedex.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "quests.h"
#include "overworld.h"
#include "event_data.h"
#include "ui_trainer_skills_menu.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "rtc.h"
#include "mgba.h"

#define tCount          data[2]
#define tPageItems      data[4]
#define tItemPcParam    data[6]
#define tWindowId       data[10]
#define tListMenuTaskId data[11]

#define tState          data[0]
#define tXSpeed         data[1]
#define tYSpeed         data[2]
#define tWin0Left       data[3]
#define tWin0Right      data[4]
#define tWin0Top        data[5]
#define tWin0Bottom     data[6]
#define tBldCntBak      data[7]
#define tBldYBak        data[8]

// Defines
#define NO_ACTIVE_QUEST -1

struct QuestMenuResources
{
    /*0x00*/ MainCallback savedCallback;
    /*0x04*/ u8 moveModeOrigPos;
    /*0x05*/ u8 itemMenuIconSlot;
    /*0x06*/ u8 maxShowed;
    /*0x07*/ u8 nItems;
    /*0x08*/ u8 scrollIndicatorArrowPairId;
    /*0x0A*/ u16 withdrawQuantitySubmenuCursorPos;
    /*0x0C*/ s16 data[3];
}; /* size = 0x14 */

struct QuestMenuStaticResources
{
    /*0x00*/ MainCallback savedCallback;
    /*0x04*/ u16 scroll;
    /*0x06*/ u16 row;
    /*0x08*/ u8 initialized;
};  /* size = 0xC */

// RAM
EWRAM_DATA static struct QuestMenuResources *sStateDataPtr = NULL;
EWRAM_DATA static u8 *sBg1TilemapBuffer = NULL;
EWRAM_DATA static struct ListMenuItem *sListMenuItems = NULL;
EWRAM_DATA static struct QuestMenuStaticResources sListMenuState = {0};
EWRAM_DATA static u8 sSubmenuWindowIds[3] = {0};
EWRAM_DATA static u8 gUnknown_2039878[12] = {0};        // from pokefirered src/item_menu_icons.c

// This File's Functions
static void UnlockQuestMenu(void);
static void HandleAchievementUnlock(u8 questIndex);
static void QuestMenu_RunSetup(void);
static bool8 QuestMenu_DoGfxSetup(void);
static void QuestMenu_FadeAndBail(void);
static void Task_QuestMenuWaitFadeAndBail(u8 taskId);
static bool8 QuestMenu_InitBgs(void);
static bool8 QuestMenu_LoadGraphics(void);
static bool8 QuestMenu_AllocateResourcesForListMenu(void);
static void QuestMenu_BuildListMenuTemplate(void);
static void QuestMenu_MoveCursorFunc(s32 itemIndex, bool8 onInit, struct ListMenu * list);
static void QuestMenu_ItemPrintFunc(u8 windowId, u32 itemId, u8 y);
static void QuestMenu_PrintOrRemoveCursorAt(u8 y, u8 state);
static void QuestMenu_PrintHeader(void);
static void QuestMenu_PlaceTopMenuScrollIndicatorArrows(void);
static void QuestMenu_SetCursorPosition(void);
static void QuestMenu_FreeResources(void);
static void Task_QuestMenuTurnOff2(u8 taskId);
static void QuestMenu_InitItems(void);
static void QuestMenu_SetScrollPosition(void);
static void Task_QuestMenuMain(u8 taskId);
static void QuestMenu_InsertItemIntoNewSlot(u8 taskId, u32 pos);
static void Task_QuestMenuSubmenuInit(u8 taskId);
static void Task_QuestMenuSubmenuRun(u8 taskId);
static void Task_QuestMenuHint(u8 taskId);
static void Task_QuestMenuProgress(u8 taskId);
static void Task_QuestMenuRewardInfo(u8 taskId);
static void Task_QuestMenuGetReward(u8 taskId);
static void Task_QuestMenuBeginQuest(u8 taskId);
static void Task_QuestMenuEndQuest(u8 taskId);
static void QuestMenu_DisplaySubMenuMessage(u8 taskId);
static void Task_QuestMenuRefreshAfterAcknowledgement(u8 taskId);
static void Task_QuestMenuCleanUp(u8 taskId);
static void QuestMenu_WithdrawMultipleInitWindow(u16 slotId);
static void Task_QuestMenuCancel(u8 taskId);
static void QuestMenu_InitWindows(void);
static void QuestMenu_AddTextPrinterParameterized(u8 windowId, u8 fontId, const u8 * str, u8 x, u8 y, u8 letterSpacing, u8 lineSpacing, u8 speed, u8 colorIdx);
static void QuestMenu_SetBorderStyleOnWindow(u8 windowId);
static u8 QuestMenu_GetOrCreateSubwindow(u8 idx);
static void QuestMenu_DestroySubwindow(u8 idx);
static void QuestMenu_SetInitializedFlag(u8 a0);
static bool8 IsActiveQuest(u8 AchievementId);

// Data
// graphics
static const u32 sQuestMenuTiles[]   = INCBIN_U32("graphics/quest_menu/menu.4bpp.lz");
static const u32 sQuestMenuBgPals[]  = INCBIN_U32("graphics/quest_menu/menu_pal.gbapal.lz");
static const u32 sQuestMenuTilemap[] = INCBIN_U32("graphics/quest_menu/tilemap.bin.lz");
static const u16 sMainWindowPal[]    = INCBIN_U16("graphics/quest_menu/main_window.gbapal");

// text window from firered
static const u16 sFR_StdFrame0[] = INCBIN_U16("graphics/text_window/fr_std0.4bpp");
//static const u16 sFR_StdFrame1[] = INCBIN_U16("graphics/text_window/fr_std1.4bpp");
static const u16 sFR_MessageBoxTiles[] = INCBIN_U16("graphics/text_window/fr_message_box.4bpp");

// strings
const u8 sText_Empty[] = _("");
const u8 sText_Quests[] = _("Achievement");
const u8 sText_QuestMenu_Begin[] = _("Begin");
const u8 sText_QuestMenu_End[] = _("End");
const u8 sText_QuestMenu_Hint[] = _("Hint");
const u8 sText_QuestMenu_Progress[] = _("Progress");
const u8 sText_QuestMenu_Reward[] = _("Reward");
const u8 sText_QuestMenu_Get_Reward[] = _("Prize");
const u8 sText_QuestMenu_Complete[] = _("{COLOR}{BLUE}Done");
const u8 sText_QuestMenu_Exit[] = _("Exit the Quest Menu");
const u8 sText_QuestMenu_SelectedQuest[] = _("Do what with\nthis quest?");
const u8 sText_QuestMenu_DisplayDetails[] = _("Hint: {STR_VAR_1}");
const u8 sText_QuestMenu_DisplayProgress[] = _("Progress: {STR_VAR_1}/{STR_VAR_2}");
const u8 sText_QuestMenu_DisplayReward[] = _("Reward: {STR_VAR_1}\nQuantity: {STR_VAR_2}");
const u8 sText_QuestMenu_DisplayRewardDisabled[] = _("Reward: ?\nQuantity: Unknown");
const u8 sText_QuestMenu_YouAlreadyHaveReward[] = _("You already got this prize");
const u8 sText_QuestMenu_GotReward[] = _("Achievement Completed, You got\n{STR_VAR_1} x{STR_VAR_2} as a Reward.");
const u8 sText_QuestMenu_Unable_To_Get_Reward[] = _("Achievement Completed, unable\nto get Reward.");
const u8 sText_QuestMenu_BeginQuest[] = _("Initiating Quest:\n{STR_VAR_1}");
const u8 sText_QuestMenu_EndQuest[] = _("Cancelling Quest:\n{STR_VAR_1}");
const u8 sText_QuestMenu_GotReward_Other[] = _("Achievement Completed, You got\nyour Reward.");

//Quest Status
const u8 sText_QuestMenu_QuestNumber[] = _("{STR_VAR_1} - {STR_VAR_2}");
const u8 sText_QuestMenu_Unk[] = _("?????????");
const u8 sText_QuestMenu_Locked[] = _("Status: {COLOR}{LIGHT_RED}{SHADOW RED}Locked");
const u8 sText_QuestMenu_Unlocked[] = _("Status: {COLOR}{LIGHT_BLUE}{SHADOW BLUE}Unlocked");
const u8 sText_QuestMenu_Completed[] = _("Status: {COLOR}{LIGHT_GREEN}{SHADOW GREEN}Completed");
const u8 sText_QuestMenu_GetYourReward[] = _("{COLOR}{LIGHT_GREEN}{SHADOW GREEN}Get your Reward!");

//Quest Difficulty
const u8 sText_QuestMenu_Difficulty_Easy[] = _("Difficulty: {COLOR}{LIGHT_GREEN}{SHADOW GREEN}Easy");
const u8 sText_QuestMenu_Difficulty_Medium[] = _("Difficulty: {COLOR}{LIGHT_BLUE}{SHADOW BLUE}Medium");
const u8 sText_QuestMenu_Difficulty_Hard[] = _("Difficulty: {COLOR}{LIGHT_RED}{SHADOW RED}Hard");
const u8 sText_QuestMenu_Difficulty_Extreme[] = _("Difficulty: {COLOR}{LIGHT_RED}{SHADOW RED}Extreme");
const u8 sText_QuestMenu_Difficulty_Impossible[] = _("Difficulty: {COLOR}{LIGHT_RED}{SHADOW RED}Impossible");
const u8 sText_QuestMenu_Difficulty_Disabled[] = _("{COLOR}{LIGHT_RED}{SHADOW RED}Disabled");

const struct Achievements sAchievementsData[MAX_ACHIEVEMENTS_NUM] =
{
    [ACHIEVEMENT_FIRST_BADGE] = 
    {
        .name              = _("The Start of the Journey"),
        .desc              = _("Win your first Gym Badge"),
        .hint              = _("Badge"),
        .rewardName        = _(""),
        .rewardType        = REWARD_TYPE_OTHER,
        .reward            = REWARD_TYPE_BP,
        .reward_qty        = 10,
        .difficulty        = QUEST_DIFFICULTY_EASY,
        .completedVar      = VAR_NUM_BADGES,
        .varCompletedValue = 1,
    },
    [ACHIEVEMENT_FOURTH_BADGE] = 
    {
        .name              = _("Get 4 Badges"),
        .desc              = _("Defeat 4 Different Gym Leaders."),
        .hint              = _("Four"),
        .rewardName        = _(""),
        .rewardType        = REWARD_TYPE_OTHER,
        .reward            = REWARD_TYPE_BP,
        .reward_qty        = 20,
        .difficulty        = QUEST_DIFFICULTY_EASY,
        .completedVar      = VAR_NUM_BADGES,
        .varCompletedValue = 4,
    },
    [ACHIEVEMENT_EIGHT_BADGE] = 
    {
        .name              = _("Half way there"),
        .desc              = _("Defeat 8 Different Gym Leaders."),
        .hint              = _("Eight"),
        .rewardName        = _(""),
        .rewardType        = REWARD_TYPE_OTHER,
        .reward            = REWARD_TYPE_BP,
        .reward_qty        = 50,
        .difficulty        = QUEST_DIFFICULTY_MEDIUM,
        .completedVar      = VAR_NUM_BADGES,
        .varCompletedValue = 8,
    },
    [ACHIEVEMENT_FINAL_BADGE] = 
    {
        .name          = _("Ready for Victory"),
        .desc          = _("Defeat every Gym Leader in Hoenn."),
        .hint          = _("Eight"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_BP,
        .reward_qty    = 100,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_DEFEATED_ALL_GYMS,
    },
    [ACHIEVEMENT_SEVII_1_COMPLETE] = 
    {
        .name          = _("Sevii Research 1"),
        .desc          = _("Find Colress at the end of Sevii 1."),
        .hint          = _("One Isle"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_EASY,
        .completedFlag = FLAG_GOT_SEVII_TICKET_1,
    },
    [ACHIEVEMENT_SEVII_2_COMPLETE] = 
    {
        .name          = _("Sevii Research 2"),
        .desc          = _("Find Colress at the end of Sevii 2."),
        .hint          = _("Two Isle"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_EASY,
        .completedFlag = FLAG_GOT_SEVII_TICKET_2,
    },
    [ACHIEVEMENT_SEVII_3_COMPLETE] = 
    {
        .name          = _("Sevii Research 3"),
        .desc          = _("Find Colress at the end of Sevii 3."),
        .hint          = _("Three Isle"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_3,
    },
    [ACHIEVEMENT_SEVII_4_COMPLETE] = 
    {
        .name          = _("Sevii Research 4"),
        .desc          = _("Find Colress at the end of Sevii 4."),
        .hint          = _("Four Isle"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_4,
    },
    [ACHIEVEMENT_SEVII_5_COMPLETE] = 
    {
        .name          = _("Sevii Research 5"),
        .desc          = _("Find Colress at the end of Sevii 5."),
        .hint          = _("Five Isle"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_5,
    },
    [ACHIEVEMENT_SEVII_6_COMPLETE] = 
    {
        .name          = _("Sevii Research 6"),
        .desc          = _("Find Colress at the end of Sevii 6."),
        .hint          = _("Six Isle"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_6,
    },
    [ACHIEVEMENT_SEVII_7_COMPLETE] = 
    {
        .name          = _("Sevii Research 7"),
        .desc          = _("Find Colress at the end of Sevii 7."),
        .hint          = _("Seven Isle"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_7,
    },
    [ACHIEVEMENT_SEVII_8_COMPLETE] = 
    {
        .name          = _("Sevii Research 8"),
        .desc          = _("Find Colress at the end of Sevii 8."),
        .hint          = _("Eight Isle"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 80,
        .difficulty    = QUEST_DIFFICULTY_MEDIUM,
        .completedFlag = FLAG_GOT_SEVII_TICKET_8,
    },
    [ACHIEVEMENT_DEFEAT_WALLY] = 
    {
        .name            = _("Frail Boy"),
        .desc            = _("Defeat the Pokémon Trainer Wally in\nthe Victory Road."),
        .hint            = _("Green Hair"),
        .rewardName      = _(""),
        .rewardType      = REWARD_TYPE_OTHER,
        .reward          = REWARD_TYPE_TRAINER_EXP,
        .reward_qty      = 1000,
        .difficulty      = QUEST_DIFFICULTY_MEDIUM,
        .defeatedTrainer = TRAINER_WALLY_VR_1,
    },
    [ACHIEVEMENT_DEFEAT_WALLACE] = 
    {
        .name          = _("Hoenn Champion"),
        .desc          = _("Enter the Hall of Fame for the first\ntime."),
        .hint          = _("Champion"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_TRAINER_EXP,
        .reward_qty    = 2500,
        .difficulty    = QUEST_DIFFICULTY_HARD,
        .completedFlag = FLAG_SYS_GAME_CLEAR,
    },
    [ACHIEVEMENT_DEFEAT_RAYQUAZA] = 
    {
        .name          = _("Fry HIGHER"),
        .desc          = _("Defeat or Catch the Sky High Pokémon\nRayquaza."),
        .hint          = _("Sky High"),
        .rewardName    = _(""),
        .rewardType    = REWARD_TYPE_OTHER,
        .reward        = REWARD_TYPE_BP,
        .reward_qty    = 50,
        .difficulty    = QUEST_DIFFICULTY_HARD,
        .completedFlag = FLAG_ENABLE_POST_RAYQUAZA_CONTENT,
    },
    [ACHIEVEMENT_COMPLETE_TRADES] = 
    {
        .name       = _("Trader"),
        .desc       = _("Complete All the in-game trades not counting wonder trade."),
        .hint       = _("Trade"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_ELECTIRIZER,
        .reward_qty = 1,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_FOSSILS] = 
    {
        .name       = _("Fossil Hunter"),
        .desc       = _("Catch and Register every fossil\nin your Pokedex."),
        .hint       = _("Fossil"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_AERODACTYLITE,
        .reward_qty = 1,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_MAX_HAPPINESS] = 
    {
        .name       = _("Friendly Trainer"),
        .desc       = _("Have 6 Pokemon with Max\nHappiness."),
        .hint       = _("Friendship"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 100,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_STEP_COUNT] = 
    {
        .name       = _("I need new Shoes"),
        .desc       = _("Max out your step count."),
        .hint       = _("Steps"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 100,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_150_EVOS] = 
    {
        .name       = _("Evolving Master"),
        .desc       = _("Evolve 150 Pokemon."),
        .hint       = _("Evo"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_DUSK_STONE,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_VISIT_ALL_OF_HOENN] = 
    {
        .name       = _("Seasoned Traveler"),
        .desc       = _("Visit every city in Hoenn."),
        .hint       = _("Map"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_FLYING_GEM,
        .reward_qty  = 6,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_VISIT_ALL_OF_SEVII] = 
    {
        .name       = _("Ferry enthusiast"),
        .desc       = _("Get all the Sevii Tickets."),
        .hint       = _("Sevii"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_WATER_GEM,
        .reward_qty = 6,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_GET_777_20_TIMES] = 
    {
        .name       = _("JACKPOT"),
        .desc       = _("Match three 7 in the slot machines\n20 times."),
        .hint       = _("Seven"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 7777,
        .difficulty = QUEST_DIFFICULTY_EXTREME,
    },
    [ACHIEVEMENT_GET_LOTTERY] = 
    {
        .name       = _("Big Prize"),
        .desc       = _("Win the Lottery for the first time."),
        .hint       = _("Lottery"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_SHOCK_DRIVE,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_EXTREME,
    },
    [ACHIEVEMENT_GET_6_GREEN_SHINIES] = 
    {
        .name       = _("That thing's green"),
        .desc       = _("Get a green Shiny."),
        .hint       = _("Green"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_GREEN_SHARD,
        .reward_qty  = 12,
        .difficulty = QUEST_DIFFICULTY_HARD,
    },
    [ACHIEVEMENT_GET_5_SHINIES] = 
    {
        .name       = _("Shiny Hunter"),
        .desc       = _("Have 5 Shiny Pokemon in your party."),
        .hint       = _("Sparkle"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_PLANT_50_BERRIES] = 
    {
        .name       = _("A farmer's life"),
        .desc       = _("Plant 50 Berries."),
        .hint       = _("Berry"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_ENIGMA_BERRY,
        .reward_qty  = 10,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_USE_THE_DEXNAV_500_TIMES] = 
    {
        .name       = _("Detective"),
        .desc       = _("Use the Dexnav 500 times."),
        .hint       = _("Dexnav"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_GET_RAINY_WEATHER_50_TIMES] = 
    {
        .name       = _("I need an Umbrella"),
        .desc       = _("Get in a rainy weather 50 times."),
        .hint       = _("Rain"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_UTILITY_UMBRELLA,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_USE_THE_DAYCARE_50_TIMES] = 
    {
        .name       = _("Caretaker"),
        .desc       = _("Use the daycare 50 times."),
        .hint       = _("Daycare"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LUCKY_EGG,
        .reward_qty  = 5,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_USE_THE_CLOCK_75_TIMES] = 
    {
        //.name       = _("The concept of time is scary"),
        .name       = _("Time is a scary thing"),
        .desc       = _("Check the clock 75 times."),
        .hint       = _("Clock"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_WIN_25_POKEMON_CONTESTS] = 
    {
        .name       = _("True Coordinator"),
        .desc       = _("Win 25 Pokémon Contests."),
        .hint       = _("Contest"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LATIASITE,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_CAPTURE_50_FISHED_MONS] = 
    {
        .name       = _("One with the Rod"),
        .desc       = _("Fish and Capture 25 Pokémon."),
        .hint       = _("Fish"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_USE_THE_SAFARI_ZONE_50_TIMES] = 
    {
        .name       = _("Rock or Bait"),
        .desc       = _("Go to the Safari Zone 50 times."),
        .hint       = _("Safari"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_USE_STRUGGLE_20_TIMES] = 
    {
        .name       = _("Out of PP"),
        .desc       = _("Use struggle 20 times."),
        .hint       = _("PP"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_CATCH_75_MONS] = 
    {
        .name       = _("Gotta catch 'em all! 1"),
        .desc       = _("Catch 75 Pokemon."),
        .hint       = _("Catch"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_CATCH_150_MONS] = 
    {
        .name       = _("Gotta catch 'em all! 2"),
        .desc       = _("Catch 150 Pokemon."),
        .hint       = _("Catch"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_CATCH_500_MONS] = 
    {
        .name       = _("Gotta catch 'em all! 3"),
        .desc       = _("Catch 500 Pokemon."),
        .hint       = _("Catch"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_LOTERY_MATCH_1] =
    {
        .name       = _("Lucky Number 1"),
        .desc       = _("Match 2 number in the Lottery."),
        .hint       = _("Lottery"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LUCKY_EGG,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_LOTERY_MATCH_2] =
    {
        .name       = _("Lucky Number 2"),
        .desc       = _("Match 3 number in the Lottery."),
        .hint       = _("Lottery"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LUCKY_EGG,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_LOTERY_MATCH_3] =
    {
        .name       = _("Lucky Number 3"),
        .desc       = _("Match 4 number in the Lottery."),
        .hint       = _("Lottery"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LUCKY_EGG,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_LOTERY_MATCH_4] =
    {
        .name       = _("Lucky Number 4"),
        .desc       = _("Hit the Jackpot prize."),
        .hint       = _("Jackpot"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_ITEM,
        .reward     = ITEM_LUCKY_EGG,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_EASY,
    },
    [ACHIEVEMENT_START_30_MOCK_BATTLES_NORMAL] = 
    {
        .name       = _("Battle Enthusiast"),
        .desc       = _("Start 30 Normal Mock Battles."),
        .hint       = _("Mock"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_DO_2500_DAMAGE] = 
    {
        .name       = _("Powerful"),
        .desc       = _("Do 2500 Damage in a single hit."),
        .hint       = _("Damage"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_DO_7500_DAMAGE] = 
    {
        .name       = _("Unstoppable"),
        .desc       = _("Do 7500 Damage in a single hit."),
        .hint       = _("Damage"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_DO_12500_DAMAGE] = 
    {
        .name       = _("Overkill"),
        .desc       = _("Do 9999 Damage in a single hit."),
        .hint       = _("Damage"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_UPDATE_YOUR_GAME_5_TIMES] = 
    {
        .name       = _("Here we go Again"),
        .desc       = _("Update your game 5 times."),
        .hint       = _("Update"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_YEAR_OLD_SAVE] = 
    {
        .name       = _("Happy Birthday!"),
        .desc       = _("Have a Year old Save File."),
        .hint       = _("Year"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_START_30_TRENDS] = 
    {
        .name       = _("Trendy"),
        .desc       = _("Start 30 Trends."),
        .hint       = _("Trend"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_MAKE_30_POKEBLOCKS] = 
    {
        .name       = _("Blockhead"),
        .desc       = _("Start 30 Trends."),
        .hint       = _("Blocks"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_SCANNER_QUEST] = 
    {
        .name       = _("Sea-man"),
        .desc       = _("Gave the scanner to Capt. Stern."),
        .hint       = _("Scanner"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_DEFEAT_RED_AND_STEVEN] = 
    {
        .name       = _("Pokémon Master"),
        .desc       = _("Defeat the Pokémon Master Red and the\nEx-Champion Steven."),
        .hint       = _("Master"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_GET_SILVER_SYMBOLS] = 
    {
        .name       = _("Silver Symbols"),
        .desc       = _("Get all the Silver Symbols in the\nBattle Frontier."),
        .hint       = _("Silver"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_GET_SHINY_TITLESCREEN] = 
    {
        .name       = _("Ambition"),
        .desc       = _("Get a Shiny Rayquaza at the Title Screen."),
        .hint       = _("Nobunaga"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_START_50_MOCK_BATTLES_HARD] = 
    {
        .name       = _("Hard Battler"),
        .desc       = _("Fight 50 Hard Mock battles."),
        .hint       = _("Mock"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_GET_POKERUS] = 
    {
        .name       = _("Virus Detected"),
        .desc       = _("Get Pokerus atleast once."),
        .hint       = _("Pokerus"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_START_NEW_GAME_PLUS] = 
    {
        .name       = _("Two times the fun"),
        .desc       = _("Start a New Game+ Save."),
        .hint       = _("Plus"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_START_MENU_AT_3AM] = 
    {
        .name       = _("Spooky Time"),
        .desc       = _("Open this menu at 3AM."),
        .hint       = _("Ghost"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_WIN_MOCK_BATTLE_WITH_ONLY_METRONOME] = 
    {
        .name       = _("Luck's on my Side"),
        .desc       = _("Win a Hard Mock Battle with a Party of 6\nPokémon that only know Metronome."),
        .hint       = _("Metronome"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_TM_COLLECTION] = 
    {
        .name       = _("Double Platinum"),
        .desc       = _("Complete your TM Collection."),
        .hint       = _("Discs"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_GOLD_SYMBOLS] = 
    {
        .name       = _("Gold Symbols"),
        .desc       = _("Get all the Gold Symbols in the\nBattle Frontier."),
        .hint       = _("Gold"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_MEDIUM,
    },
    [ACHIEVEMENT_COMPLETE_POKEDEX] = 
    {
        .name       = _("Complete Researcher"),
        .desc       = _("Complete your Pokedex."),
        .hint       = _("Dex"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_DISABLED,
    },
    [ACHIEVEMENT_DEFEAT_ARCEUS] = 
    {
        .name       = _("The last challenge"),
        .desc       = _("Defeat or Catch the Alpha Pokémon \nArceus."),
        .hint       = _("Alpha"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_DISABLED,
    },
    [ACHIEVEMENT_COMPLETE_ALL_ACHIVEMENTS] = 
    {
        .name       = _("My deepest apologies"),
        .desc       = _("Complete every mission in the game."),
        .hint       = _("The End"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1000,
        .difficulty = QUEST_DIFFICULTY_DISABLED,
    },
    [NUM_ACHIEVEMENTS] = 
    {
        .name       = _("Disabled Quest"),
        .desc       = _("This Quest is Disabled."),
        .hint       = _("Wait"),
        .rewardName = _(""),
        .rewardType = REWARD_TYPE_OTHER,
        .reward     = REWARD_TYPE_TRAINER_EXP,
        .reward_qty  = 1,
        .difficulty = QUEST_DIFFICULTY_DISABLED,
    },
};

static const u16 sSideQuestDifficultyItemIds[] = 
{
	ITEM_POKE_BALL,
	ITEM_GREAT_BALL,
	ITEM_ULTRA_BALL,
	ITEM_MASTER_BALL,
};

// Selected an incomplete quest
static const struct MenuAction sQuestSubmenuOptions[] =
{
    {sText_QuestMenu_Hint,           	{.void_u8 = Task_QuestMenuHint}},
	{sText_QuestMenu_Reward,            {.void_u8 = Task_QuestMenuRewardInfo}},
    {gText_Cancel,                      {.void_u8 = Task_QuestMenuCancel}},
};

// Selected the active quest
static const struct MenuAction sActiveQuestSubmenuOptions[] =
{
    {sText_QuestMenu_Progress,          {.void_u8 = Task_QuestMenuProgress}},
    {sText_QuestMenu_Reward,           	{.void_u8 = Task_QuestMenuRewardInfo}},
    {gText_Cancel,                      {.void_u8 = Task_QuestMenuCancel}},
};

// completed quest selection
static const struct MenuAction sCompletedQuestSubmenuOptions[] =
{
    {sText_QuestMenu_Get_Reward,        {.void_u8 = Task_QuestMenuGetReward}},
    {sText_QuestMenu_Reward,           	{.void_u8 = Task_QuestMenuRewardInfo}},
    {gText_Cancel,                      {.void_u8 = Task_QuestMenuCancel}},
};

static const struct BgTemplate sQuestMenuBgTemplates[2] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0
    }, 
    {
        .bg = 1,
        .charBaseIndex = 3,
        .mapBaseIndex = 30,
        .priority = 1
    }
};

const u8 sQuestMenuWindowFontColors[][3] = 
{
    {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_WHITE,      TEXT_COLOR_DARK_GREY},
    {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_DARK_GREY,  TEXT_COLOR_LIGHT_GREY},
    {TEXT_COLOR_TRANSPARENT,  TEXT_COLOR_LIGHT_GREY, TEXT_COLOR_DARK_GREY},
    {TEXT_COLOR_TRANSPARENT,  TEXT_DYNAMIC_COLOR_1,  TEXT_COLOR_DARK_GREY}
};

static const struct WindowTemplate sQuestMenuHeaderWindowTemplates[] =
{
    {//Quest name
        .bg = 0,
        .tilemapLeft = 0x02,
        .tilemapTop = 0x01,
        .width = 0x14,
        .height = 0x0b,
        .paletteNum = 0x0f,
        .baseBlock = 0x02bf
    }, 
    {//Quest Description
        .bg = 0,
        .tilemapLeft = 0x05,
        .tilemapTop = 0x0e,
        .width = 0x19,
        .height = 0x06,
        .paletteNum = 0x0d,
        .baseBlock = 0x0229
    },//Disabled
    {
        .bg = 0,
        .tilemapLeft = 0x01,
        .tilemapTop = 0x02,
        .width = 0x00,
        .height = 0x00,
        .paletteNum = 15,
        .baseBlock = 0x0215
    }, 
    {
        .bg = 0,
        .tilemapLeft = 0x18,
        .tilemapTop = 0x0f,
        .width = 0x05,
        .height = 0x04,
        .paletteNum = 15,
        .baseBlock = 0x0201
    }, 
    {   // submenu cursor selection window
        .bg = 0,
        .tilemapLeft = 0x16,
        .tilemapTop = 0xD,  //+2 for 4 options
        .width = 0x07,
        .height = 0x06,     //+2 for 4 options
        .paletteNum = 15,
        .baseBlock = 0x01d7
    }, 
    {
        .bg = 0,
        .tilemapLeft = 0x02,
        .tilemapTop = 0x0f,
        .width = 0x1a,
        .height = 0x04,
        .paletteNum = 0x0b,
        .baseBlock = 0x016f
    }, 
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sQuestMenuSubWindowTemplates[] =
{
    {
        .bg = 0,
        .tilemapLeft = 0x06,
        .tilemapTop = 0x0f,
        .width = 0x0e,
        .height = 0x04,
        .paletteNum = 12,
        .baseBlock = 0x0137
    }, 
    {
        .bg = 0,
        .tilemapLeft = 0x06,
        .tilemapTop = 0x0f,
        .width = 0x10,
        .height = 0x04,
        .paletteNum = 12,
        .baseBlock = 0x0137
    }, 
    {
        .bg = 0,
        .tilemapLeft = 0x06,
        .tilemapTop = 0x0f,
        .width = 0x17,
        .height = 0x04,
        .paletteNum = 12,
        .baseBlock = 0x009b
    }
};

// Functions -> ported from pokefirered
void QuestMenu_Init(u8 a0, MainCallback callback)
{
    u8 i;

    if (a0 >= 2)
    {
        SetMainCallback2(callback);
        return;
    }
    
    if ((sStateDataPtr = Alloc(sizeof(struct QuestMenuResources))) == NULL)
    {
        SetMainCallback2(callback);
        return;
    }
    
    if (a0 != 1)
    {
        sListMenuState.savedCallback = callback;
        sListMenuState.scroll = sListMenuState.row = 0;
    }
    
    sStateDataPtr->moveModeOrigPos = 0xFF;
    sStateDataPtr->itemMenuIconSlot = 0;
    sStateDataPtr->scrollIndicatorArrowPairId = 0xFF;
    sStateDataPtr->savedCallback = 0;
    for (i = 0; i < 3; i++)
    {
        sStateDataPtr->data[i] = 0;
    }
    
    SetMainCallback2(QuestMenu_RunSetup);
}

static void QuestMenu_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void QuestMenu_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void QuestMenu_RunSetup(void)
{
    while (1)
    {
        if (QuestMenu_DoGfxSetup() == TRUE)
            break;
    }
}

// from pc_screen_effect
static void BeginPCScreenEffect(TaskFunc task, u16 a1, u16 a2, u16 priority)
{
    u8 taskId = CreateTask(task, priority);
    gTasks[taskId].data[0] = 0;
    if (a1 == 0)
        gTasks[taskId].data[1] = 16;
    else
        gTasks[taskId].data[1] = 0;
    
    if (a1 == 0)
        gTasks[taskId].data[2] = 20;
    else
        gTasks[taskId].data[2] = 0;
    
    gTasks[taskId].func(taskId);
}

/// from pc_screen_effect
static void Task_PCScreenEffect_TurnOn(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    switch (task->tState)
    {
    case 0:
        task->tWin0Left = 120;
        task->tWin0Right = 120;
        task->tWin0Top = 80;
        task->tWin0Bottom = 81;
        SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
        SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(task->tWin0Left, task->tWin0Right));
        SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(task->tWin0Top, task->tWin0Bottom));
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_OBJ | WININ_WIN0_CLR);
        SetGpuReg(REG_OFFSET_WINOUT, 0);
        break;
    case 1:
        task->tBldCntBak = GetGpuReg(REG_OFFSET_BLDCNT);
        task->tBldYBak = GetGpuReg(REG_OFFSET_BLDY);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG0 | BLDCNT_TGT1_BG1 | BLDCNT_TGT1_BG2 | BLDCNT_TGT1_BG3 | BLDCNT_TGT1_OBJ | BLDCNT_TGT1_BD | BLDCNT_EFFECT_LIGHTEN);
        SetGpuReg(REG_OFFSET_BLDY, 16);
        break;
    case 2:
        task->tWin0Left -= task->tXSpeed;
        task->tWin0Right += task->tXSpeed;
        if (task->tWin0Left <= 0 || task->tWin0Right >= DISPLAY_WIDTH)
        {
            task->tWin0Left = 0;
            task->tWin0Right = DISPLAY_WIDTH;
            SetGpuReg(REG_OFFSET_BLDY, 0);
            SetGpuReg(REG_OFFSET_BLDCNT, task->tBldCntBak);
            BlendPalettes(0xFFFFFFFF, 0, RGB_BLACK);
            gPlttBufferFaded[0] = 0;
        }
        SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(task->tWin0Left, task->tWin0Right));
        if (task->tWin0Left)
            return;
        break;
    case 3:
        task->tWin0Top -= task->tYSpeed;
        task->tWin0Bottom += task->tYSpeed;
        if (task->tWin0Top <= 0 || task->tWin0Bottom >= DISPLAY_HEIGHT)
        {
            task->tWin0Top = 0;
            task->tWin0Bottom = DISPLAY_HEIGHT;
            ClearGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
        }
        SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(task->tWin0Top, task->tWin0Bottom));
        if (task->tWin0Top)
            return;
        break;
    default:
        SetGpuReg(REG_OFFSET_BLDCNT, task->tBldCntBak);
        DestroyTask(taskId);
        return;
    }
    ++task->tState;
}

// from pc_screen_effect
static void BeginPCScreenEffect_TurnOn(u16 a0, u16 a1, u16 a2)
{
    BeginPCScreenEffect(Task_PCScreenEffect_TurnOn, a0, a1, a2);
}

static bool8 QuestMenu_DoGfxSetup(void)
{
    u8 taskId;
    switch (gMain.state)
    {
    case 0:
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        gMain.state++;
        break;
    case 2:
        FreeAllSpritePalettes();
        gMain.state++;
        break;
    case 3:
        ResetPaletteFade();
        gMain.state++;
        break;
    case 4:
        ResetSpriteData();
        gMain.state++;
        break;
    case 5:
        ResetItemMenuIconState();
        gMain.state++;
        break;
    case 6:
        ResetTasks();
        gMain.state++;
        break;
    case 7:
        if (QuestMenu_InitBgs())
        {
            sStateDataPtr->data[0] = 0;
            gMain.state++;
        }
        else
        {
            QuestMenu_FadeAndBail();
            return TRUE;
        }
        break;
    case 8:
        if (QuestMenu_LoadGraphics() == TRUE)
            gMain.state++;
        break;
    case 9:
        QuestMenu_InitWindows();
        gMain.state++;
        break;
    case 10:
        QuestMenu_InitItems();
        QuestMenu_SetCursorPosition();
        QuestMenu_SetScrollPosition();
        gMain.state++;
        break;
    case 11:
        if (QuestMenu_AllocateResourcesForListMenu())
        {
            gMain.state++;
        }
        else
        {
            QuestMenu_FadeAndBail();
            return TRUE;
        }
        break;
    case 12:
        QuestMenu_BuildListMenuTemplate();
        gMain.state++;
        break;
    case 13:
        QuestMenu_PrintHeader();
        gMain.state++;
        break;
    case 14:
        //sub_80985E4();
        gMain.state++;
        break;
    case 15:
        taskId = CreateTask(Task_QuestMenuMain, 0);
        gTasks[taskId].data[0] = ListMenuInit(&gMultiuseListMenuTemplate, sListMenuState.scroll, sListMenuState.row);
        gMain.state++;
        break;
    case 16:
        QuestMenu_PlaceTopMenuScrollIndicatorArrows();
        gMain.state++;
        break;
    case 17:
        //HelpSystem_SetSomeVariable2(29);
        gMain.state++;
        break;
    case 18:
        if (sListMenuState.initialized == 1)
        {
            BlendPalettes(0xFFFFFFFF, 16, RGB_BLACK);
        }
        gMain.state++;
        break;
    case 19:
        if (sListMenuState.initialized == 1)
        {
            BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
        }
        else
        {
            BeginPCScreenEffect_TurnOn(0, 0, 0);
            QuestMenu_SetInitializedFlag(1);
            PlaySE(SE_PC_LOGIN);
        }
        gMain.state++;
        break;
    case 20:
        //if ((u8)sub_80BF72C() != TRUE)
            //gMain.state++;
        gMain.state++;
        break;
    default:
        SetVBlankCallback(QuestMenu_VBlankCB);
        SetMainCallback2(QuestMenu_MainCB);
        return TRUE;
    }
    return FALSE;
}

static void QuestMenu_FadeAndBail(void)
{
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_QuestMenuWaitFadeAndBail, 0);
    SetVBlankCallback(QuestMenu_VBlankCB);
    SetMainCallback2(QuestMenu_MainCB);
}

static void Task_QuestMenuWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sListMenuState.savedCallback);
        QuestMenu_FreeResources();
        DestroyTask(taskId);
    }
}

static bool8 QuestMenu_InitBgs(void)
{
    ResetAllBgsCoordinatesAndBgCntRegs();
    sBg1TilemapBuffer = Alloc(0x800);
    if (sBg1TilemapBuffer == NULL)
        return FALSE;
    
    memset(sBg1TilemapBuffer, 0, 0x800);
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sQuestMenuBgTemplates, NELEMS(sQuestMenuBgTemplates));
    SetBgTilemapBuffer(1, sBg1TilemapBuffer);
    ScheduleBgCopyTilemapToVram(1);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
    SetGpuReg(REG_OFFSET_BLDCNT , 0);
    ShowBg(0);
    ShowBg(1);
    return TRUE;
}

static bool8 QuestMenu_LoadGraphics(void)
{
    switch (sStateDataPtr->data[0])
    {
    case 0:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(1, sQuestMenuTiles, 0, 0, 0);
        sStateDataPtr->data[0]++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            LZDecompressWram(sQuestMenuTilemap, sBg1TilemapBuffer);
            sStateDataPtr->data[0]++;
        }
        break;
    case 2:
        LoadCompressedPalette(sQuestMenuBgPals, 0x00, 0x60);
        sStateDataPtr->data[0]++;
        break;
    case 3:
        //LoadCompressedSpriteSheet(&gBagSwapSpriteSheet);
        sStateDataPtr->data[0]++;
        break;
    default:
        //LoadCompressedSpritePalette(&gBagSwapSpritePalette);
        sStateDataPtr->data[0] = 0;
        return TRUE;
    }
    return FALSE;
}

#define try_alloc(ptr__, size) ({ \
    void ** ptr = (void **)&(ptr__);             \
    *ptr = Alloc(size);                 \
    if (*ptr == NULL)                   \
    {                                   \
        QuestMenu_FreeResources();                  \
        QuestMenu_FadeAndBail();                  \
        return FALSE;                   \
    }                                   \
})

static bool8 QuestMenu_AllocateResourcesForListMenu(void)
{
    try_alloc(sListMenuItems, sizeof(struct ListMenuItem) * (NUM_ACHIEVEMENTS + 1));
    //try_alloc(sUnusedStringAllocation, 14 * (PC_ITEMS_COUNT + 1));
    return TRUE;
}

static void QuestMenu_BuildListMenuTemplate(void)
{
    u16 i;
	const u8 * questName;
    for (i = 0; i < sStateDataPtr->nItems; i++)
    {
        if (GetSetQuestFlag(i, ACHIEVEMENTS_FLAG_GET_UNLOCKED))
            sListMenuItems[i].name = sAchievementsData[i].name;
        else
			sListMenuItems[i].name = sText_QuestMenu_Unk;
        sListMenuItems[i].id = i;
    }
    sListMenuItems[i].name = gText_Cancel;
    sListMenuItems[i].id = LIST_CANCEL;

    gMultiuseListMenuTemplate.items = sListMenuItems;
    gMultiuseListMenuTemplate.totalItems = sStateDataPtr->nItems + 1;
    gMultiuseListMenuTemplate.windowId = 0;
    gMultiuseListMenuTemplate.header_X = 0;
    gMultiuseListMenuTemplate.item_X = 12;
    gMultiuseListMenuTemplate.cursor_X = 1;
    gMultiuseListMenuTemplate.lettersSpacing = 1;
    gMultiuseListMenuTemplate.itemVerticalPadding = 2;
    gMultiuseListMenuTemplate.upText_Y = 2;
    gMultiuseListMenuTemplate.maxShowed = sStateDataPtr->maxShowed;
    gMultiuseListMenuTemplate.fontId = 0;
    gMultiuseListMenuTemplate.cursorPal = 2;
    gMultiuseListMenuTemplate.fillValue = 0;
    gMultiuseListMenuTemplate.cursorShadowPal = 3;
    gMultiuseListMenuTemplate.moveCursorFunc = QuestMenu_MoveCursorFunc;
	gMultiuseListMenuTemplate.itemPrintFunc = 0;
  //gMultiuseListMenuTemplate.itemPrintFunc = QuestMenu_ItemPrintFunc; tofix
    gMultiuseListMenuTemplate.scrollMultiple = 0;
    gMultiuseListMenuTemplate.cursorKind = 0;
}

void CreateItemMenuIcon(u16 itemId, u8 idx)
{
    u8 * ptr = &gUnknown_2039878[10];
    u8 spriteId;

    if (ptr[idx] == 0xFF)
    {
        FreeSpriteTilesByTag(102 + idx);
        FreeSpritePaletteByTag(102 + idx);
        spriteId = AddItemIconSprite(102 + idx, 102 + idx, itemId);
        if (spriteId != MAX_SPRITES)
        {
            ptr[idx] = spriteId;
            gSprites[spriteId].pos2.x = 24;
            gSprites[spriteId].pos2.y = 144;
        }
    }
}

void ResetItemMenuIconState(void)
{
    u16 i;

    for (i = 0; i < NELEMS(gUnknown_2039878); i++)
        gUnknown_2039878[i] = 0xFF;
}

void DestroyItemMenuIcon(u8 idx)
{
    u8 * ptr = &gUnknown_2039878[10];

    if (ptr[idx] != 0xFF)
    {
        DestroySpriteAndFreeResources(&gSprites[ptr[idx]]);
        ptr[idx] = 0xFF;
    }
}

bool8 isAchievementDisabled(u8 achievementIdx){
    if(sAchievementsData[achievementIdx].difficulty != QUEST_DIFFICULTY_DISABLED && sAchievementsData[achievementIdx].difficulty != QUEST_DIFFICULTY_IMPOSSIBLE)
        return FALSE;

    return TRUE;
}

static void QuestMenu_MoveCursorFunc(s32 itemIndex, bool8 onInit, struct ListMenu * list)
{
    u16 itemId;
    const u8 * desc;
	const u8 * difficulty;
	const u8 * status;
	u8 itemQty;
	u8 posX = 0;
	u8 posY = 3;
    
    if (onInit != TRUE)
        PlaySE(SE_SELECT);

    if (sStateDataPtr->moveModeOrigPos == 0xFF)
    {
        DestroyItemMenuIcon(sStateDataPtr->itemMenuIconSlot ^ 1);
        if (itemIndex != LIST_CANCEL)
        {
            if (GetSetQuestFlag(itemIndex, ACHIEVEMENTS_FLAG_GET_UNLOCKED) || !isAchievementDisabled(itemIndex))
            {
                if(sAchievementsData[itemIndex].rewardType == REWARD_TYPE_ITEM){
                    itemId  = sAchievementsData[itemIndex].reward;
                    itemQty = sAchievementsData[itemIndex].reward_qty;
                    desc    = sAchievementsData[itemIndex].desc;
                }
                else{
                    switch(sAchievementsData[itemIndex].reward){
                        case REWARD_TYPE_FLAG_SET:
                        case REWARD_TYPE_FLAG_CLEAR:
                            itemId = ITEM_NONE;	
                            itemQty = 0;
				            desc = sText_QuestMenu_Unk;
                        break;
                        case REWARD_TYPE_TRAINER_EXP:
                            itemId = ITEM_EXP_SHARE;	
                            itemQty = sAchievementsData[itemIndex].reward_qty;
                            desc    = sAchievementsData[itemIndex].desc;
                        break;
                        case REWARD_TYPE_BP:
                            itemId = ITEM_BP_TICKET;	
                            itemQty = sAchievementsData[itemIndex].reward_qty;
                            desc    = sAchievementsData[itemIndex].desc;
                        break;
                        case REWARD_TYPE_MONEY:
                            itemId = ITEM_AMULET_COIN;	
                            itemQty = sAchievementsData[itemIndex].reward_qty;
                            desc    = sAchievementsData[itemIndex].desc;
                        break;
                    }
                }

                if(!GetSetQuestFlag(itemIndex, ACHIEVEMENTS_FLAG_GET_UNLOCKED))
				    desc = sText_QuestMenu_Unk;
            }
            else
            {
				itemId = ITEM_NONE;	
				itemQty = 0;
				desc = sText_QuestMenu_Unk;
            }
            
            CreateItemMenuIcon(itemId, sStateDataPtr->itemMenuIconSlot);
        }
        else
        {
            CreateItemMenuIcon(ITEM_NONE, sStateDataPtr->itemMenuIconSlot);
            desc = sText_QuestMenu_Exit;
        }
        
        sStateDataPtr->itemMenuIconSlot ^= 1;
        FillWindowPixelBuffer(1, 0);
		
		if (itemIndex != LIST_CANCEL)
        {
			switch(sAchievementsData[itemIndex].difficulty){
				case QUEST_DIFFICULTY_EASY:
					difficulty = sText_QuestMenu_Difficulty_Easy;
				break;
				case QUEST_DIFFICULTY_MEDIUM:
					difficulty = sText_QuestMenu_Difficulty_Medium;
				break;
				case QUEST_DIFFICULTY_HARD:
					difficulty = sText_QuestMenu_Difficulty_Hard;
				break;
				case QUEST_DIFFICULTY_EXTREME:
					difficulty = sText_QuestMenu_Difficulty_Extreme;
				break;
				case QUEST_DIFFICULTY_IMPOSSIBLE:
					difficulty = sText_QuestMenu_Difficulty_Impossible;
				break;
				case QUEST_DIFFICULTY_DISABLED:
					difficulty = sText_QuestMenu_Difficulty_Disabled;
				break;
			}
			
			QuestMenu_AddTextPrinterParameterized(1, 0, difficulty, posX, posY, 2, 0, 0, 3);
			
			posX = posX + 110;

            if(GetSetQuestFlag(itemIndex, ACHIEVEMENTS_FLAG_GET_REWARDED))
				status = sText_QuestMenu_Completed;
            else if(GetSetQuestFlag(itemIndex, ACHIEVEMENTS_FLAG_GET_COMPLETED))
				status = sText_QuestMenu_GetYourReward;
			else if (GetSetQuestFlag(itemIndex, ACHIEVEMENTS_FLAG_GET_UNLOCKED))
				status = sText_QuestMenu_Unlocked;
			else
				status = sText_QuestMenu_Locked;
			
			QuestMenu_AddTextPrinterParameterized(1, 0, status, posX, posY, 2, 0, 0, 3);
			
			posY = posY + 10;
			posX = 0;
		}
		
        QuestMenu_AddTextPrinterParameterized(1, 0, desc, posX, posY, 2, 0, 0, 3);
    }
}

static void QuestMenu_ItemPrintFunc(u8 windowId, u32 itemId, u8 y)
{
    if (sStateDataPtr->moveModeOrigPos != 0xFF)
    {
        if (sStateDataPtr->moveModeOrigPos == (u8)itemId)
            QuestMenu_PrintOrRemoveCursorAt(y, 2);
        else
            QuestMenu_PrintOrRemoveCursorAt(y, 0xFF);
    }
    if (itemId != LIST_CANCEL)
    {
        if (GetSetQuestFlag(itemId, ACHIEVEMENTS_FLAG_GET_COMPLETED))
            StringCopy(gStringVar4, sText_QuestMenu_Complete);
        else if (IsActiveQuest(itemId))
            StringCopy(gStringVar4, sText_QuestMenu_Unlocked);
        else
            StringCopy(gStringVar4, sText_Empty);
        
        QuestMenu_AddTextPrinterParameterized(windowId, 0, gStringVar4, 110, y, 0, 0, 0xFF, 1);
    }
}

static void QuestMenu_PrintOrRemoveCursor(u8 listMenuId, u8 colorIdx)
{
    QuestMenu_PrintOrRemoveCursorAt(ListMenuGetYCoordForPrintingArrowCursor(listMenuId), colorIdx);
}

static void QuestMenu_PrintOrRemoveCursorAt(u8 y, u8 colorIdx)
{
    if (colorIdx == 0xFF)
    {
        u8 maxWidth = GetFontAttribute(1, FONTATTR_MAX_LETTER_WIDTH);
        u8 maxHeight = GetFontAttribute(1, FONTATTR_MAX_LETTER_HEIGHT);
        FillWindowPixelRect(0, 0, 0, y, maxWidth, maxHeight);
    }
    else
    {
        QuestMenu_AddTextPrinterParameterized(0, 0, gText_SelectorArrow, 0, y, 0, 0, 0, colorIdx);
    }
}

static void QuestMenu_PrintHeader(void)
{
    QuestMenu_AddTextPrinterParameterized(2, 0, sText_Quests, 0, 1, 0, 1, 0, 0);
}

static void QuestMenu_PlaceTopMenuScrollIndicatorArrows(void)
{
    sStateDataPtr->scrollIndicatorArrowPairId = AddScrollIndicatorArrowPairParameterized(2, 128, 8, 104, sStateDataPtr->nItems - sStateDataPtr->maxShowed + 1, 110, 110, &sListMenuState.scroll);
}

static void QuestMenu_PlaceWithdrawQuantityScrollIndicatorArrows(void)
{
    sStateDataPtr->withdrawQuantitySubmenuCursorPos = 1;
    sStateDataPtr->scrollIndicatorArrowPairId = AddScrollIndicatorArrowPairParameterized(2, 212, 120, 152, 2, 110, 110, &sStateDataPtr->withdrawQuantitySubmenuCursorPos);
}

static void QuestMenu_RemoveScrollIndicatorArrowPair(void)
{
    if (sStateDataPtr->scrollIndicatorArrowPairId != 0xFF)
    {
        RemoveScrollIndicatorArrowPair(sStateDataPtr->scrollIndicatorArrowPairId);
        sStateDataPtr->scrollIndicatorArrowPairId = 0xFF;
    }
}

static void QuestMenu_SetCursorPosition(void)
{
    if (sListMenuState.scroll != 0 && sListMenuState.scroll + sStateDataPtr->maxShowed > sStateDataPtr->nItems + 1)
        sListMenuState.scroll = (sStateDataPtr->nItems + 1) - sStateDataPtr->maxShowed;
    if (sListMenuState.scroll + sListMenuState.row >= sStateDataPtr->nItems + 1)
    {
        if (sStateDataPtr->nItems + 1 < 2)
            sListMenuState.row = 0;
        else
            sListMenuState.row = sStateDataPtr->nItems;
    }
}

#define try_free(ptr) ({        \
    void ** ptr__ = (void **)&(ptr);   \
    if (*ptr__ != NULL)                \
        Free(*ptr__);                  \
})

static void QuestMenu_FreeResources(void)
{
    try_free(sStateDataPtr);
    try_free(sBg1TilemapBuffer);
    try_free(sListMenuItems);
    FreeAllWindowBuffers();
}

// pc_screen_effect
static void Task_PCScreenEffect_TurnOff(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    switch (task->tState)
    {
    case 0:
        gPlttBufferFaded[0] = 0;
        break;
    case 1:
        task->tWin0Left = 0;
        task->tWin0Right = DISPLAY_WIDTH;
        task->tWin0Top = 0;
        task->tWin0Bottom = DISPLAY_HEIGHT;
        SetGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
        SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(task->tWin0Left, task->tWin0Right));
        SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(task->tWin0Top, task->tWin0Bottom));
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG_ALL | WININ_WIN0_OBJ | WININ_WIN0_CLR);
        SetGpuReg(REG_OFFSET_WINOUT, 0);
        break;
    case 2:
        task->tWin0Top += task->tYSpeed;
        task->tWin0Bottom -= task->tYSpeed;
        if (task->tWin0Top >= 80 || task->tWin0Bottom <= 81)
        {
            task->tWin0Top = 80;
            task->tWin0Bottom = 81;
            SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG0 | BLDCNT_TGT1_BG1 | BLDCNT_TGT1_BG2 | BLDCNT_TGT1_BG3 | BLDCNT_TGT1_OBJ | BLDCNT_TGT1_BD | BLDCNT_EFFECT_LIGHTEN);
            SetGpuReg(REG_OFFSET_BLDY, 16);
        }
        SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(task->tWin0Top, task->tWin0Bottom));
        if (task->tWin0Top != 80)
            return;
        break;
    case 3:
        task->tWin0Left += task->tXSpeed;
        task->tWin0Right -= task->tXSpeed;
        if (task->tWin0Left >= 120 || task->tWin0Right <= 120)
        {
            task->tWin0Left = 120;
            task->tWin0Right = 120;
            BlendPalettes(0xFFFFFFFF, 0x10, RGB_BLACK);
            gPlttBufferFaded[0] = 0;
        }
        SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(task->tWin0Left, task->tWin0Right));
        if (task->tWin0Left != 120)
            return;
        break;
    default:
        ClearGpuRegBits(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        DestroyTask(taskId);
        return;
    }
    ++task->tState;
}

// pc_screen_effect
static void BeginPCScreenEffect_TurnOff(u16 a0, u16 a1, u16 a2)
{
    BeginPCScreenEffect(Task_PCScreenEffect_TurnOff, a0, a1, a2);
}

static void Task_QuestMenuTurnOff1(u8 taskId)
{
    if (sListMenuState.initialized == 1)
    {
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    }
    else
    {
        BeginPCScreenEffect_TurnOff(0, 0, 0);
        PlaySE(SE_PC_OFF);
    }
    
    gTasks[taskId].func = Task_QuestMenuTurnOff2;
}

// pc_screen_effect
static bool8 IsPCScreenEffectRunning_TurnOff(void)
{
    return FuncIsActiveTask(Task_PCScreenEffect_TurnOff);
}

static void Task_QuestMenuTurnOff2(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    if (!gPaletteFade.active && !IsPCScreenEffectRunning_TurnOff())
    {
        DestroyListMenuTask(data[0], &sListMenuState.scroll, &sListMenuState.row);
        if (sStateDataPtr->savedCallback != NULL)
            SetMainCallback2(sStateDataPtr->savedCallback);
        else
            SetMainCallback2(sListMenuState.savedCallback);
        
        QuestMenu_RemoveScrollIndicatorArrowPair();
        QuestMenu_FreeResources();
        DestroyTask(taskId);
    }
}

static u8 QuestMenu_GetCursorPosition(void)
{
    return sListMenuState.scroll + sListMenuState.row;
}


static void QuestMenu_InitItems(void)
{
    sStateDataPtr->nItems = NUM_ACHIEVEMENTS;
    sStateDataPtr->maxShowed = sStateDataPtr->nItems + 1 <= 6 ? sStateDataPtr->nItems + 1 : 6;
    UnlockQuestMenu();
}

static void QuestMenu_SetScrollPosition(void)
{
    u8 i;

    if (sListMenuState.row > 3)
    {
        for (i = 0; i <= sListMenuState.row - 3; sListMenuState.row--, sListMenuState.scroll++, i++)
        {
            if (sListMenuState.scroll + sStateDataPtr->maxShowed == sStateDataPtr->nItems + 1)
                break;
        }
    }
}

static void QuestMenu_SetMessageWindowPalette(int a0)
{
    SetBgTilemapPalette(1, 0, 14, 30, 6, a0 + 1);
    //SetBgTilemapPalette(1, 0, 14, 30, 6, 15);
    ScheduleBgCopyTilemapToVram(1);
}

static void QuestMenu_SetInitializedFlag(u8 a0)
{
    sListMenuState.initialized = a0;
}

static bool8 IsPCScreenEffectRunning_TurnOn(void)
{
    return FuncIsActiveTask(Task_PCScreenEffect_TurnOn);
}

static void Task_QuestMenuMain(u8 taskId)
{
    s16 * data = gTasks[taskId].data;
    u16 scroll;
    u16 row;
    s32 input;

    if (!gPaletteFade.active && !IsPCScreenEffectRunning_TurnOn())
    {
        /*
        if (JOY_NEW(SELECT_BUTTON))
        {
            ListMenuGetScrollAndRow(data[0], &scroll, &row);
            if (scroll + row != sStateDataPtr->nItems)
            {
                PlaySE(SE_SELECT);
                QuestMenu_MoveItemModeInit(taskId, scroll + row);
                return;
            }
        }
        */
        input = ListMenu_ProcessInput(data[0]);
        ListMenuGetScrollAndRow(data[0], &sListMenuState.scroll, &sListMenuState.row);
        switch (input)
        {
        case LIST_NOTHING_CHOSEN:
            break;
            
        case LIST_CANCEL:
            PlaySE(SE_SELECT);
            QuestMenu_SetInitializedFlag(0);
            gTasks[taskId].func = Task_QuestMenuTurnOff1;
            break;
            
        default:
            if (GetSetQuestFlag(input, ACHIEVEMENTS_FLAG_GET_UNLOCKED))
            {
                PlaySE(SE_SELECT);
                QuestMenu_SetMessageWindowPalette(1);
                QuestMenu_RemoveScrollIndicatorArrowPair();
                data[1] = input;
                //data[2] = QuestMenu_GetItemQuantityBySlotId(input);
                data[2] = 0;
                QuestMenu_PrintOrRemoveCursor(data[0], 2);            
                gTasks[taskId].func = Task_QuestMenuSubmenuInit;
            }
            else
            {
                PlaySE(SE_SELECT);
                QuestMenu_SetMessageWindowPalette(1);
                QuestMenu_RemoveScrollIndicatorArrowPair();
                data[1] = input;
                //data[2] = QuestMenu_GetItemQuantityBySlotId(input);
                data[2] = 0;
                QuestMenu_PrintOrRemoveCursor(data[0], 2);            
                gTasks[taskId].func = Task_QuestMenuSubmenuInit;
				//PlaySE(SE_FAILURE);
            }
            break;
        }
    }
}

static void QuestMenu_ReturnFromSubmenu(u8 taskId)
{
    QuestMenu_SetMessageWindowPalette(0);
    QuestMenu_PlaceTopMenuScrollIndicatorArrows();
    gTasks[taskId].func = Task_QuestMenuMain;
}

// pokefirered item_menu_icon
static void sub_8098660(u8 flag)
{
    u8 i;
    u8 * ptr = &gUnknown_2039878[1];

    for (i = 0; i < 9; i++)
    {
        gSprites[ptr[i]].invisible = flag;
    }
}

// pokefirered item_menu_icon
static void sub_80986A8(s16 x, u16 y)
{
    u8 i;
    u8 * ptr = &gUnknown_2039878[1];

    for (i = 0; i < 9; i++)
    {
        gSprites[ptr[i]].pos2.x = x;
        gSprites[ptr[i]].pos1.y = y + 7;
    }
}



static void Task_QuestMenuSubmenuInit(u8 taskId)
{
    s16 * data = gTasks[taskId].data;
    u8 windowId;

    QuestMenu_SetBorderStyleOnWindow(4);    //for sub menu list items
    windowId = QuestMenu_GetOrCreateSubwindow(0);
    
    if (GetSetQuestFlag(data[1], ACHIEVEMENTS_FLAG_GET_COMPLETED))
    {
        // completed
        PrintTextArray(4, 2, 8, 2, GetFontAttribute(2, FONTATTR_MAX_LETTER_HEIGHT) + 2, NELEMS(sCompletedQuestSubmenuOptions), sCompletedQuestSubmenuOptions);
        Menu_InitCursor(4, 2, 0, 2, GetFontAttribute(2, FONTATTR_MAX_LETTER_HEIGHT) + 2, NELEMS(sCompletedQuestSubmenuOptions), 0);

    }
    else if (GetSetQuestFlag(data[1], ACHIEVEMENTS_FLAG_GET_UNLOCKED))
    {
        // active
        PrintTextArray(4, 2, 8, 2, GetFontAttribute(2, FONTATTR_MAX_LETTER_HEIGHT) + 2, NELEMS(sActiveQuestSubmenuOptions), sActiveQuestSubmenuOptions);
        Menu_InitCursor(4, 2, 0, 2, GetFontAttribute(2, FONTATTR_MAX_LETTER_HEIGHT) + 2, NELEMS(sActiveQuestSubmenuOptions), 0);
    }
    else
    {
        // unlocked
        PrintTextArray(4, 2, 8, 2, GetFontAttribute(2, FONTATTR_MAX_LETTER_HEIGHT) + 2, NELEMS(sQuestSubmenuOptions), sQuestSubmenuOptions);
        Menu_InitCursor(4, 2, 0, 2, GetFontAttribute(2, FONTATTR_MAX_LETTER_HEIGHT) + 2, NELEMS(sQuestSubmenuOptions), 0);
    }    
    //CopyItemName(QuestMenu_GetItemIdBySlotId(data[1]), gStringVar1);
    //StringExpandPlaceholders(gStringVar4, gText_StrVar1);
    
    StringCopy(gStringVar4, sText_QuestMenu_SelectedQuest);
    //StringExpandPlaceholders(gStringVar4, sText_QuestMenu_SelectedQuest);
    
    QuestMenu_AddTextPrinterParameterized(windowId, 0, gStringVar4, 0, 2, 1, 0, 0, 1);
    ScheduleBgCopyTilemapToVram(0);
    gTasks[taskId].func = Task_QuestMenuSubmenuRun;
}

static void Task_QuestMenuSubmenuRun(u8 taskId)
{
    u8 questIndex = QuestMenu_GetCursorPosition();
    s8 input = Menu_ProcessInputNoWrapAround_other();
    
    switch (input)
    {
    case LIST_NOTHING_CHOSEN:
        PlaySE(SE_SELECT);
        Task_QuestMenuCancel(taskId);
        break;
    case LIST_CANCEL:
        break;
    default:
        PlaySE(SE_SELECT);
        if (GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_GET_COMPLETED))
            sCompletedQuestSubmenuOptions[input].func.void_u8(taskId);
        else if (GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_GET_UNLOCKED))
            sActiveQuestSubmenuOptions[input].func.void_u8(taskId);
        else       
            sQuestSubmenuOptions[input].func.void_u8(taskId);
    }
}

static void QuestMenuSubmenuSelectionMessage(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    ClearStdWindowAndFrameToTransparent(4, FALSE);
    QuestMenu_DestroySubwindow(0);
    ClearWindowTilemap(4);
    data[8] = 1;
    PutWindowTilemap(0);
    ScheduleBgCopyTilemapToVram(0);
}

static void Task_QuestMenuHint(u8 taskId)
{
    u8 questIndex = QuestMenu_GetCursorPosition();
	QuestMenuSubmenuSelectionMessage(taskId);
    StringCopy(gStringVar1, sAchievementsData[questIndex].hint);
    StringExpandPlaceholders(gStringVar4, sText_QuestMenu_DisplayDetails);
    QuestMenu_DisplaySubMenuMessage(taskId);
}

const u8 sText_QuestMenu_Reward_Other[]       = _("Other");
const u8 sText_QuestMenu_Reward_Money[]       = _("Money");
const u8 sText_QuestMenu_Reward_Trainer_Exp[] = _("Trainer Exp");
const u8 sText_QuestMenu_Reward_BP[]          = _("Battle Points");

static void Task_QuestMenuRewardInfo(u8 taskId)
{
    u8 questIndex = QuestMenu_GetCursorPosition();
	u16 reward = sAchievementsData[questIndex].reward;
	u16 reward_quantity = sAchievementsData[questIndex].reward_qty;
    
    QuestMenuSubmenuSelectionMessage(taskId);

    if(sAchievementsData[questIndex].rewardType == REWARD_TYPE_ITEM)
        CopyItemName(reward, gStringVar1);
    else{
        switch(sAchievementsData[questIndex].reward){
            case REWARD_TYPE_FLAG_SET:
                StringCopy(gStringVar1, sText_QuestMenu_Reward_Other);
            break;
            case REWARD_TYPE_FLAG_CLEAR:
                StringCopy(gStringVar1, sText_QuestMenu_Reward_Other);
            break;
            case REWARD_TYPE_TRAINER_EXP:
                StringCopy(gStringVar1, sText_QuestMenu_Reward_Trainer_Exp);
            break;
            case REWARD_TYPE_BP:
                StringCopy(gStringVar1, sText_QuestMenu_Reward_BP);
            break;
        }
    }
    ConvertIntToDecimalStringN(gStringVar2, reward_quantity, STR_CONV_MODE_LEFT_ALIGN, 5);
	
	if(sAchievementsData[questIndex].difficulty != QUEST_DIFFICULTY_DISABLED)
		StringExpandPlaceholders(gStringVar4, sText_QuestMenu_DisplayReward);
	else
		StringExpandPlaceholders(gStringVar4, sText_QuestMenu_DisplayRewardDisabled);
    
    QuestMenu_DisplaySubMenuMessage(taskId);
}


const u8 sText_QuestMenu_GotReward_TrainerSkill[] = _("Achievement Completed, You got\n{STR_VAR_1} Trainer Exp as a Reward.");
const u8 sText_QuestMenu_GotReward_TrainerSkill_LevelUp[] = _("You got {STR_VAR_1} Trainer Exp as a Reward,\nleveling up in the process.");
const u8 sText_QuestMenu_GotReward_BattlePoints[] = _("Achievement Completed, You got\n{STR_VAR_1} BP as a Reward.");

static void Task_QuestMenuGetReward(u8 taskId)
{
    u8 questIndex       = QuestMenu_GetCursorPosition();
	u16 reward          = sAchievementsData[questIndex].reward;
	u16 reward_quantity = sAchievementsData[questIndex].reward_qty;
    u8  rewardType      = sAchievementsData[questIndex].rewardType;
    u16 tempValue;

	QuestMenuSubmenuSelectionMessage(taskId);

    if(!GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_GET_REWARDED)){
        if(rewardType == REWARD_TYPE_ITEM){
            CopyItemName(reward, gStringVar1);
            ConvertIntToDecimalStringN(gStringVar2, reward_quantity, STR_CONV_MODE_LEFT_ALIGN, 5);
            StringExpandPlaceholders(gStringVar4, sText_QuestMenu_GotReward);
            AddBagItem(reward, reward_quantity);
            PlaySE(MUS_LEVEL_UP);
            GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_REWARDED);
        }
        else{
            switch(reward){
                case REWARD_TYPE_FLAG_SET:
                    FlagSet(reward_quantity);
                    PlaySE(MUS_LEVEL_UP);
                    GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_REWARDED);
                    StringCopy(gStringVar4, sText_QuestMenu_GotReward_Other);
                break;
                case REWARD_TYPE_FLAG_CLEAR:
                    FlagClear(reward_quantity);
                    PlaySE(MUS_LEVEL_UP);
                    GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_REWARDED);
                    StringCopy(gStringVar4, sText_QuestMenu_GotReward_Other);
                break;
                case REWARD_TYPE_TRAINER_EXP:
                    ConvertIntToDecimalStringN(gStringVar1, reward_quantity, STR_CONV_MODE_LEFT_ALIGN, 5);
                    if(tryToGivePlayerExp(reward_quantity))
                        StringExpandPlaceholders(gStringVar4, sText_QuestMenu_GotReward_TrainerSkill_LevelUp);
                    else
                        StringExpandPlaceholders(gStringVar4, sText_QuestMenu_GotReward_TrainerSkill);
                    PlaySE(MUS_LEVEL_UP);
                    GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_REWARDED);
                break;
                case REWARD_TYPE_BP:
                    tempValue = gSpecialVar_0x8004;
                    gSpecialVar_0x8004 = reward_quantity;
                    GiveFrontierBattlePoints();
                    ConvertIntToDecimalStringN(gStringVar1, reward_quantity, STR_CONV_MODE_LEFT_ALIGN, 5);
                    StringExpandPlaceholders(gStringVar4, sText_QuestMenu_GotReward_BattlePoints);
                    PlaySE(MUS_LEVEL_UP);
                    GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_REWARDED);
                    gSpecialVar_0x8004 = tempValue;
                break;
                default:
                    StringExpandPlaceholders(gStringVar4, sText_QuestMenu_Unable_To_Get_Reward);
                break;

            }
        }
	}
	else{
		StringExpandPlaceholders(gStringVar4, sText_QuestMenu_YouAlreadyHaveReward);
		PlaySE(SE_FAILURE);
	}
    QuestMenu_DisplaySubMenuMessage(taskId);
}

static void Task_QuestMenuEndQuest(u8 taskId)
{
    u8 questIndex = QuestMenu_GetCursorPosition();
    
    ResetActiveQuest();
    QuestMenuSubmenuSelectionMessage(taskId);
    StringCopy(gStringVar1, sAchievementsData[questIndex].name);
    StringExpandPlaceholders(gStringVar4, sText_QuestMenu_EndQuest);
    QuestMenu_DisplaySubMenuMessage(taskId);
}

static void Task_QuestMenuBeginQuest(u8 taskId)
{
    u8 questIndex = QuestMenu_GetCursorPosition();
    
    SetActiveQuest(questIndex);
    QuestMenuSubmenuSelectionMessage(taskId);
    StringCopy(gStringVar1, sAchievementsData[questIndex].name);
    StringExpandPlaceholders(gStringVar4, sText_QuestMenu_BeginQuest);
    QuestMenu_DisplaySubMenuMessage(taskId);
}

static void QuestMenu_DisplaySubMenuMessage(u8 taskId)
{
    s16 * data = gTasks[taskId].data;
    u8 windowId;
    
    windowId = QuestMenu_GetOrCreateSubwindow(2);
    AddTextPrinterParameterized(windowId, 2, gStringVar4, 0, 2, 0, NULL);
    gTasks[taskId].func = Task_QuestMenuRefreshAfterAcknowledgement;
}

static void Task_QuestMenuRefreshAfterAcknowledgement(u8 taskId)
{
    if (JOY_NEW(A_BUTTON) || JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        Task_QuestMenuCleanUp(taskId);
    }
}

static void Task_QuestMenuCleanUp(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    QuestMenu_DestroySubwindow(2);
    PutWindowTilemap(1);
    DestroyListMenuTask(data[0], &sListMenuState.scroll, &sListMenuState.row);
    
    QuestMenu_InitItems();
    
    QuestMenu_SetCursorPosition();
    QuestMenu_BuildListMenuTemplate();
    data[0] = ListMenuInit(&gMultiuseListMenuTemplate, sListMenuState.scroll, sListMenuState.row);
    ScheduleBgCopyTilemapToVram(0);
    QuestMenu_ReturnFromSubmenu(taskId);
}

static void Task_QuestMenuCancel(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    ClearStdWindowAndFrameToTransparent(4, FALSE);
    QuestMenu_DestroySubwindow(0);
    ClearWindowTilemap(4);
    PutWindowTilemap(0);
    PutWindowTilemap(1);
    QuestMenu_PrintOrRemoveCursor(data[0], 1);
    ScheduleBgCopyTilemapToVram(0);
    QuestMenu_ReturnFromSubmenu(taskId);
}

// pokefirered text_window.c
void TextWindow_SetStdFrame0_WithPal(u8 windowId, u16 destOffset, u8 palIdx)
{
    LoadBgTiles(GetWindowAttribute(windowId, WINDOW_BG), sFR_StdFrame0, 0x120, destOffset);
    LoadPalette(GetTextWindowPalette(3), palIdx, 32);
}
void TextWindow_LoadResourcesStdFrame0(u8 windowId, u16 destOffset, u8 palIdx)
{
    LoadBgTiles(GetWindowAttribute(windowId, WINDOW_BG), sFR_MessageBoxTiles, 0x280, destOffset);
    LoadPalette(GetTextWindowPalette(0), palIdx, 32);
}

static void QuestMenu_InitWindows(void)
{
    u8 i;

    InitWindows(sQuestMenuHeaderWindowTemplates);
    DeactivateAllTextPrinters();
    LoadUserWindowBorderGfx(0, 0x3C0, 0xE0);
    
    TextWindow_SetStdFrame0_WithPal(0, 0x3A3, 0xC0); 
    TextWindow_LoadResourcesStdFrame0(0, 0x3AC, 0xB0);
    //LoadMessageBoxGfx(0, 0x3A3, 0xC0);
    //LoadMessageBoxGfx(0, 0x3AC, 0xB0);
    
    LoadPalette(GetTextWindowPalette(2), 0xD0, 0x20);
    LoadPalette(sMainWindowPal, 0xF0, 0x20);
    for (i = 0; i < 3; i++)
    {
        FillWindowPixelBuffer(i, 0x00);
        PutWindowTilemap(i);
    }
    
    ScheduleBgCopyTilemapToVram(0);
    for (i = 0; i < 3; i++)
        sSubmenuWindowIds[i] = 0xFF;
}

static void QuestMenu_AddTextPrinterParameterized(u8 windowId, u8 fontId, const u8 * str, u8 x, u8 y, u8 letterSpacing, u8 lineSpacing, u8 speed, u8 colorIdx)
{
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sQuestMenuWindowFontColors[colorIdx], speed, str);
}

static void QuestMenu_SetBorderStyleOnWindow(u8 windowId)
{
    DrawStdFrameWithCustomTileAndPalette(windowId, FALSE, 0x3C0, 14);
}

static u8 QuestMenu_GetOrCreateSubwindow(u8 idx)
{
    if (sSubmenuWindowIds[idx] == 0xFF)
    {
        sSubmenuWindowIds[idx] = AddWindow(&sQuestMenuSubWindowTemplates[idx]);
        DrawStdFrameWithCustomTileAndPalette(sSubmenuWindowIds[idx], TRUE, 0x3A3, 0x0C);
    }

    return sSubmenuWindowIds[idx];
}

static void QuestMenu_DestroySubwindow(u8 idx)
{
    ClearStdWindowAndFrameToTransparent(sSubmenuWindowIds[idx], FALSE);
    ClearWindowTilemap(sSubmenuWindowIds[idx]); // redundant
    RemoveWindow(sSubmenuWindowIds[idx]);
    sSubmenuWindowIds[idx] = 0xFF;
}

// Start Menu Function
void Task_OpenQuestMenuFromStartMenu(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        QuestMenu_Init(tItemPcParam, CB2_ReturnToUIMenu);
        DestroyTask(taskId);
    }
}


bool8 GetSetQuestFlag(u8 quest, u8 caseId)
{
    u8 status = gSaveBlock2Ptr->achievementStatus[quest];
    //mgba_printf(MGBA_LOG_WARN, "GetSetQuestFlag quest %d, caseId %d, status %d", quest, caseId, status);

    switch (caseId)
    {
    case ACHIEVEMENTS_FLAG_GET_UNLOCKED:
        return (gSaveBlock2Ptr->achievementStatus[quest] >= QUEST_STATUS_UNLOCKED);
    break;
    case ACHIEVEMENTS_FLAG_SET_UNLOCKED:
        if(gSaveBlock2Ptr->achievementStatus[quest] == QUEST_STATUS_LOCKED)
            gSaveBlock2Ptr->achievementStatus[quest] = QUEST_STATUS_UNLOCKED;
        return TRUE;
    break;
    case ACHIEVEMENTS_FLAG_GET_COMPLETED:
        return (gSaveBlock2Ptr->achievementStatus[quest] >= QUEST_STATUS_COMPLETED);
    break;
    case ACHIEVEMENTS_FLAG_SET_COMPLETED:
        if(gSaveBlock2Ptr->achievementStatus[quest] < QUEST_STATUS_COMPLETED)
            gSaveBlock2Ptr->achievementStatus[quest] = QUEST_STATUS_COMPLETED;
        return TRUE;
    break;
    case ACHIEVEMENTS_FLAG_GET_REWARDED:
        return (gSaveBlock2Ptr->achievementStatus[quest] == QUEST_STATUS_REWARD_OBTAINED);
    break;
    case ACHIEVEMENTS_FLAG_SET_REWARDED:
        if(gSaveBlock2Ptr->achievementStatus[quest] != QUEST_STATUS_REWARD_OBTAINED)
            gSaveBlock2Ptr->achievementStatus[quest] = QUEST_STATUS_REWARD_OBTAINED;
        return TRUE;
    break;
    }
    
    return FALSE;  //failure
}

s8 GetActiveQuestIndex(void)
{
    return NO_ACTIVE_QUEST;
}

static bool8 IsActiveQuest(u8 AchievementId)
{
    if ((u8)GetActiveQuestIndex() == AchievementId)
        return TRUE;
    
    return FALSE;
}

void SetActiveQuest(u8 AchievementId)
{
    //gSaveBlock2Ptr->activeQuest = AchievementId + 1;  // 1-indexed
}

void ResetActiveQuest(void)
{
    //gSaveBlock2Ptr->activeQuest = 0;
}

void ResetQuestFlags(void)
{
    u8 i;
    if(!FlagGet(FLAG_ACHIEVEMENT_DATA_CREATED)){
        for (i = 0; i < MAX_ACHIEVEMENTS_NUM; i++)
        {
            gSaveBlock2Ptr->achievementStatus[i] = QUEST_STATUS_LOCKED;
        }
	}
}

#define VAR_NONE     0
#define TRAINER_NONE 0

static void UnlockQuestMenu(void)
{
	u8 i;
	
    for(i = 0; i < NUM_ACHIEVEMENTS; i++){
        if(gSaveBlock2Ptr->achievementStatus[i] < QUEST_STATUS_COMPLETED){
            if(sAchievementsData[i].completedFlag != FLAG_NONE && FlagGet(sAchievementsData[i].completedFlag))
                GetSetQuestFlag(i, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(sAchievementsData[i].completedVar != VAR_NONE && VarGet(sAchievementsData[i].completedVar) >= sAchievementsData[i].varCompletedValue)
                GetSetQuestFlag(i, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(sAchievementsData[i].defeatedTrainer != TRAINER_NONE && HasTrainerBeenFought(sAchievementsData[i].defeatedTrainer))
                GetSetQuestFlag(i, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else
                HandleAchievementUnlock(i);
        }
    };
    
    /* 
	//Quest 28 Update -------------------------------------------
	if(VarGet(VAR_UPDATED_TIMES) >= 1)
		GetSetQuestFlag(SIDE_QUEST_28, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
	
	if(VarGet(VAR_UPDATED_TIMES) >= 5)
		GetSetQuestFlag(SIDE_QUEST_28, ACHIEVEMENTS_FLAG_SET_COMPLETED);
	
	//Quest 29 Happy Birthday -------------------------------------------
	if(gLocalTime.days >= 100)
		GetSetQuestFlag(SIDE_QUEST_29, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
	
	if(gLocalTime.days >= 365)
		GetSetQuestFlag(SIDE_QUEST_29, ACHIEVEMENTS_FLAG_SET_COMPLETED);
	//Quest 30 Catch -------------------------------------------
	if(GetGameStat(GAME_STAT_STARTED_TRENDS) >= 3)
		GetSetQuestFlag(SIDE_QUEST_30, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
	
	if(GetGameStat(GAME_STAT_STARTED_TRENDS) >= 5)
		GetSetQuestFlag(SIDE_QUEST_30, ACHIEVEMENTS_FLAG_SET_COMPLETED);
	//Quest 31 Pokeblocks -------------------------------------------
	if(GetGameStat(GAME_STAT_POKEBLOCKS) >= 5)
		GetSetQuestFlag(SIDE_QUEST_31, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
	
	if(GetGameStat(GAME_STAT_POKEBLOCKS) >= 30)
		GetSetQuestFlag(SIDE_QUEST_31, ACHIEVEMENTS_FLAG_SET_COMPLETED);
    //Quest 31 Pokeblocks -------------------------------------------
	if(CheckBagHasItem(ITEM_SCANNER, 1))
		GetSetQuestFlag(SIDE_QUEST_32, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
	
	if(FlagGet(FLAG_EXCHANGED_SCANNER))
		GetSetQuestFlag(SIDE_QUEST_32, ACHIEVEMENTS_FLAG_SET_COMPLETED);
	//Quest 49----------------------------------------------------------
	//Red and Steven Fight
	if(FlagGet(FLAG_DEFEATED_METEOR_FALLS_STEVEN))
		GetSetQuestFlag(SIDE_QUEST_49, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
	
	if(FlagGet(FLAG_ENABLE_RED_FIGHT))
		GetSetQuestFlag(SIDE_QUEST_49, ACHIEVEMENTS_FLAG_SET_COMPLETED);
	//Achievement 50----------------------------------------------------------
	if(FlagGet(FLAG_SYS_GAME_CLEAR))
		GetSetQuestFlag(SIDE_QUEST_50, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
	
	//Achievement 51----------------------------------------------------------
	if(FlagGet(FLAG_SHINY_RAYQUAZA_TITLE_SCREEN))
		GetSetQuestFlag(SIDE_QUEST_51, ACHIEVEMENTS_FLAG_SET_COMPLETED);
	
	//Achievement 52----------------------------------------------------------
	if (VarGet(VAR_HARD_MOCK_BATTLES) >= 10 || FlagGet(FLAG_DEBUG_MODE))
		GetSetQuestFlag(SIDE_QUEST_52, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
	
	if (VarGet(VAR_HARD_MOCK_BATTLES) >= 50)
		GetSetQuestFlag(SIDE_QUEST_52, ACHIEVEMENTS_FLAG_SET_COMPLETED);
	
	//Achievement 53----------------------------------------------------------
	if(FlagGet(FLAG_DEBUG_MODE))
		GetSetQuestFlag(SIDE_QUEST_53, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
	
	if(FlagGet(FLAG_POKERUS_EXPLAINED))
		GetSetQuestFlag(SIDE_QUEST_53, ACHIEVEMENTS_FLAG_SET_COMPLETED);
	//Achievement 54----------------------------------------------------------
	if(FlagGet(FLAG_SYS_GAME_CLEAR))
		GetSetQuestFlag(SIDE_QUEST_54, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
	
	if(FlagGet(FLAG_NEW_GAME_PLUS))
		GetSetQuestFlag(SIDE_QUEST_54, ACHIEVEMENTS_FLAG_SET_COMPLETED);
	//Quest 66----------------------------------------------------------
	//3 AM
	if(FlagGet(FLAG_DEBUG_MODE))
		GetSetQuestFlag(SIDE_QUEST_66, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
	
	if(gLocalTime.hours == 3)
		GetSetQuestFlag(SIDE_QUEST_66, ACHIEVEMENTS_FLAG_SET_COMPLETED);
	//Quest 67----------------------------------------------------------
	if(FlagGet(FLAG_DEBUG_MODE))
		GetSetQuestFlag(SIDE_QUEST_67, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
	
	if(FlagGet(FLAG_WON_METRONOME_HARD_BATTLE))
		GetSetQuestFlag(SIDE_QUEST_67, ACHIEVEMENTS_FLAG_SET_COMPLETED);
	
	//Quest 96----------------------------------------------------------
	//TMs and HMs
	for(i = 0; i < 120; i++){
		if (CheckBagHasItem(ITEM_TM01_FOCUS_PUNCH + i, 1))
			tmCount++;
	}
	
	if(tmCount >= 60)
		GetSetQuestFlag(SIDE_QUEST_96, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
	
	if(tmCount >= 120)
		GetSetQuestFlag(SIDE_QUEST_96, ACHIEVEMENTS_FLAG_SET_COMPLETED);
	//----------------------------------------------------------*/

   /*/GetSetQuestFlag(SIDE_QUEST_1, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
    GetSetQuestFlag(SIDE_QUEST_2, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
    GetSetQuestFlag(SIDE_QUEST_3, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
    GetSetQuestFlag(SIDE_QUEST_5, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
    GetSetQuestFlag(SIDE_QUEST_5, ACHIEVEMENTS_FLAG_SET_COMPLETED);    
    SetActiveQuest(SIDE_QUEST_2);/*/
}

static void HandleAchievementUnlock(u8 questIndex){
    u8 i, j, previousAchievement;
	u8 count = 0;

    previousAchievement = questIndex - 1;

    switch(questIndex){
        case ACHIEVEMENT_FIRST_BADGE:
            //Achievement 1 is always unlocked
            GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_FOURTH_BADGE:
        case ACHIEVEMENT_EIGHT_BADGE:
        case ACHIEVEMENT_FINAL_BADGE:
        case ACHIEVEMENT_DEFEAT_WALLY:
        case ACHIEVEMENT_DEFEAT_WALLACE:
            //Mark as unlocked if the previous achievement is completed
            if(GetSetQuestFlag(previousAchievement, ACHIEVEMENTS_FLAG_GET_COMPLETED))
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_SEVII_1_COMPLETE:
        case ACHIEVEMENT_SEVII_2_COMPLETE:
        case ACHIEVEMENT_SEVII_3_COMPLETE:
        case ACHIEVEMENT_SEVII_4_COMPLETE:
        case ACHIEVEMENT_SEVII_5_COMPLETE:
        case ACHIEVEMENT_SEVII_6_COMPLETE:
        case ACHIEVEMENT_SEVII_7_COMPLETE:
        case ACHIEVEMENT_SEVII_8_COMPLETE:
            count = questIndex - ACHIEVEMENT_SEVII_1_COMPLETE;
            if(FlagGet(FLAG_VISITED_ONE_ISLAND + count) && VarGet(VAR_VISITED_SEVII) != 0)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_DEFEAT_RAYQUAZA:
            //Unlocked after you defeat Groudon and Kyogre
            //Completed after you defeat Rayquaza
            if(FlagGet(FLAG_DEFEATED_KYOGRE) && FlagGet(FLAG_DEFEATED_GROUDON))
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_COMPLETE_TRADES:
            //Unlocked after you trade with an NPC once
            //Completed after you trade with all the NPC
            if( FlagGet(FLAG_RUSTBORO_NPC_TRADE_COMPLETED) 	|| 
                FlagGet(FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED)||
                FlagGet(FLAG_FORTREE_NPC_TRADE_COMPLETED)	||
                FlagGet(FLAG_BATTLE_FRONTIER_TRADE_DONE))
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        
            if( FlagGet(FLAG_RUSTBORO_NPC_TRADE_COMPLETED) 	&&
                FlagGet(FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED)&&
                FlagGet(FLAG_FORTREE_NPC_TRADE_COMPLETED)	&&
                FlagGet(FLAG_BATTLE_FRONTIER_TRADE_DONE))
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
        break;
        case ACHIEVEMENT_COMPLETE_FOSSILS:
            //Unlocked after you have 1 fossil marked as caught
            //Completed after you have all the fossils marked as caught
            if(	GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_OMANYTE), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_OMASTAR), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_KABUTO), 		FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_KABUTOPS), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_AERODACTYL), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_LILEEP), 		FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_ANORITH), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_ARMALDO), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_CRANIDOS), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_RAMPARDOS), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_SHIELDON), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_BASTIODON), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_TIRTOUGA), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_CARRACOSTA), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_ARCHEN), 		FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_ARCHEOPS), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_TYRUNT), 		FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_TYRANTRUM), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_AMAURA), 		FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_AURORUS), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_DRACOZOLT), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_ARCTOZOLT), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_DRACOVISH), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_ARCTOVISH), 	FLAG_GET_CAUGHT)	||
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_RELICANTH), 	FLAG_GET_CAUGHT))
                    GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
                                    
            if(	GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_OMANYTE), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_OMASTAR), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_KABUTO), 		FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_KABUTOPS), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_AERODACTYL), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_LILEEP), 		FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_ANORITH), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_ARMALDO), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_CRANIDOS), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_RAMPARDOS), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_SHIELDON), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_BASTIODON), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_TIRTOUGA), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_CARRACOSTA), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_ARCHEN), 		FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_ARCHEOPS), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_TYRUNT), 		FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_TYRANTRUM), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_AMAURA), 		FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_AURORUS), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_DRACOZOLT), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_ARCTOZOLT), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_DRACOVISH), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_ARCTOVISH), 	FLAG_GET_CAUGHT)	&&
                GetSetPokedexFlag(SpeciesToNationalPokedexNum(SPECIES_RELICANTH), 	FLAG_GET_CAUGHT))
                    GetSetQuestFlag(i, ACHIEVEMENTS_FLAG_SET_COMPLETED);
        break;
        break;
        case ACHIEVEMENT_COMPLETE_MAX_HAPPINESS:
            for(i = 0; i < PARTY_SIZE; i++){
                if(GetMonData(&gPlayerParty[i], MON_DATA_FRIENDSHIP) >= 220)
                    count++;
            }
            if(count >= PARTY_SIZE)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(count >= 2)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_COMPLETE_150_EVOS:
            if(GetGameStat(GAME_STAT_EVOLVED_POKEMON) >= 30)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
                            
            if(GetGameStat(GAME_STAT_EVOLVED_POKEMON) >= 150)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
        break;
        case ACHIEVEMENT_VISIT_ALL_OF_HOENN:
            //Achievement is always unlocked
            GetSetQuestFlag(i, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
                            
            if( FlagGet(FLAG_VISITED_LITTLEROOT_TOWN) 	&&
                FlagGet(FLAG_VISITED_OLDALE_TOWN) 		&&
                FlagGet(FLAG_VISITED_DEWFORD_TOWN) 		&&
                FlagGet(FLAG_VISITED_LAVARIDGE_TOWN) 	&&
                FlagGet(FLAG_VISITED_FALLARBOR_TOWN) 	&&
                FlagGet(FLAG_VISITED_VERDANTURF_TOWN) 	&&
                FlagGet(FLAG_VISITED_PACIFIDLOG_TOWN) 	&&
                FlagGet(FLAG_VISITED_PETALBURG_CITY) 	&&
                FlagGet(FLAG_VISITED_SLATEPORT_CITY) 	&&
                FlagGet(FLAG_VISITED_MAUVILLE_CITY) 	&&
                FlagGet(FLAG_VISITED_RUSTBORO_CITY) 	&&
                FlagGet(FLAG_VISITED_FORTREE_CITY) 		&&
                FlagGet(FLAG_VISITED_LILYCOVE_CITY) 	&&
                FlagGet(FLAG_VISITED_MOSSDEEP_CITY) 	&&
                FlagGet(FLAG_VISITED_SOOTOPOLIS_CITY) 	&&
                FlagGet(FLAG_VISITED_EVER_GRANDE_CITY))
                    GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
        break;
        case ACHIEVEMENT_VISIT_ALL_OF_SEVII:
            //Achievement is always unlocked
            GetSetQuestFlag(i, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
                            
            if( CheckBagHasItem(ITEM_SEVII_TICKET_1, 1) && 
			    CheckBagHasItem(ITEM_SEVII_TICKET_2, 1) &&
			    CheckBagHasItem(ITEM_SEVII_TICKET_3, 1) &&
			    CheckBagHasItem(ITEM_SEVII_TICKET_4, 1) &&
			    CheckBagHasItem(ITEM_SEVII_TICKET_5, 1) &&
			    CheckBagHasItem(ITEM_SEVII_TICKET_6, 1) &&
			    CheckBagHasItem(ITEM_SEVII_TICKET_7, 1) &&
			    CheckBagHasItem(ITEM_SEVII_TICKET_8, 1))
                    GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
        break;
        case ACHIEVEMENT_COMPLETE_STEP_COUNT:
            if(GetGameStat(GAME_STAT_STEPS) >= 1000)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
                            
            if(GetGameStat(GAME_STAT_STEPS) >= 9999)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
        break;
        case ACHIEVEMENT_GET_777_20_TIMES:
            if(GetGameStat(GAME_STAT_SLOT_JACKPOTS) >= 20)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(GetGameStat(GAME_STAT_SLOT_JACKPOTS) >= 7)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_GET_LOTTERY:
            if(GetGameStat(GAME_STAT_WON_POKEMON_LOTTERY) >= 1)
            GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
        break;
        case ACHIEVEMENT_GET_5_SHINIES:
            for(i = 0; i < PARTY_SIZE; i++){
                if(IsMonShiny(&gPlayerParty[i]) && 
                    GetMonData(&gPlayerParty[i], MON_DATA_POKEBALL, NULL) != ITEM_CHERISH_BALL && 
                    GetMonData(&gPlayerParty[i], MON_DATA_SPECIES2, NULL) != SPECIES_NONE)
                    count++;
                }
                    
            if(count >= 5)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(count >= 1)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_PLANT_50_BERRIES:
            if(GetGameStat(GAME_STAT_PLANTED_BERRIES) >= 50)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(GetGameStat(GAME_STAT_PLANTED_BERRIES) >= 10)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_USE_THE_DEXNAV_500_TIMES:
            if(GetGameStat(GAME_STAT_DEXNAV_SCANNED) >= 500)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(GetGameStat(GAME_STAT_DEXNAV_SCANNED) >= 100)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_GET_RAINY_WEATHER_50_TIMES:
            if(GetGameStat(GAME_STAT_GOT_RAINED_ON) >= 50)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(GetGameStat(GAME_STAT_GOT_RAINED_ON) >= 10)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_USE_THE_DAYCARE_50_TIMES:
            if(GetGameStat(GAME_STAT_USED_DAYCARE) >= 50)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(GetGameStat(GAME_STAT_USED_DAYCARE) >= 10)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_USE_THE_CLOCK_75_TIMES:
            if(GetGameStat(GAME_STAT_CHECKED_CLOCK) >= 75)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(GetGameStat(GAME_STAT_CHECKED_CLOCK) >= 15)
		        GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_WIN_25_POKEMON_CONTESTS:
            if(GetGameStat(GAME_STAT_WON_CONTEST) >= 25)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(GetGameStat(GAME_STAT_WON_CONTEST) >= 5)
		        GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_CAPTURE_50_FISHED_MONS:
            if(GetGameStat(GAME_STAT_FISHING_CAPTURES) >= 25)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(GetGameStat(GAME_STAT_FISHING_CAPTURES) >= 5)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_USE_THE_SAFARI_ZONE_50_TIMES:
            if(GetGameStat(GAME_STAT_ENTERED_SAFARI_ZONE) >= 10)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
            else if(GetGameStat(GAME_STAT_ENTERED_SAFARI_ZONE) >= 50)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
        break;
        case ACHIEVEMENT_USE_STRUGGLE_20_TIMES:
            if(GetGameStat(GAME_STAT_USED_STRUGGLE) >= 10)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(GetGameStat(GAME_STAT_USED_STRUGGLE) >= 2)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_CATCH_75_MONS:
            if(GetGameStat(GAME_STAT_POKEMON_CAPTURES) >= 75)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(GetGameStat(GAME_STAT_POKEMON_CAPTURES) >= 25)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_CATCH_150_MONS:
            if(GetGameStat(GAME_STAT_POKEMON_CAPTURES) >= 150)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(GetGameStat(GAME_STAT_POKEMON_CAPTURES) >= 75)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_CATCH_500_MONS:
            if(GetGameStat(GAME_STAT_POKEMON_CAPTURES) >= 500)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(GetGameStat(GAME_STAT_POKEMON_CAPTURES) >= 150)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_LOTERY_MATCH_1:
            if(VarGet(VAR_MAX_LOTERY_DIGITS) >= 1)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            //Achievement  is always unlocked
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_LOTERY_MATCH_2:
            if(VarGet(VAR_MAX_LOTERY_DIGITS) >= 2)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(GetSetQuestFlag(previousAchievement, ACHIEVEMENTS_FLAG_GET_COMPLETED))
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_LOTERY_MATCH_3:
            if(VarGet(VAR_MAX_LOTERY_DIGITS) >= 3)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(GetSetQuestFlag(previousAchievement, ACHIEVEMENTS_FLAG_GET_COMPLETED))
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_LOTERY_MATCH_4:
            if(VarGet(VAR_MAX_LOTERY_DIGITS) >= 4)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(GetSetQuestFlag(previousAchievement, ACHIEVEMENTS_FLAG_GET_COMPLETED))
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_START_30_MOCK_BATTLES_NORMAL:
            if (VarGet(VAR_NORMAL_MOCK_BATTLES) >= 30)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if (VarGet(VAR_NORMAL_MOCK_BATTLES) >= 5)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_DO_2500_DAMAGE:
            if (VarGet(VAR_MAX_DAMAGE_DONE) >= 2500)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if (VarGet(VAR_MAX_DAMAGE_DONE) >= 500)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_DO_7500_DAMAGE:
            if (VarGet(VAR_MAX_DAMAGE_DONE) >= 7500)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(GetSetQuestFlag(previousAchievement, ACHIEVEMENTS_FLAG_GET_COMPLETED))
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
        case ACHIEVEMENT_DO_12500_DAMAGE:
            if (VarGet(VAR_MAX_DAMAGE_DONE) >= 9999)
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_COMPLETED);
            else if(GetSetQuestFlag(previousAchievement, ACHIEVEMENTS_FLAG_GET_COMPLETED))
                GetSetQuestFlag(questIndex, ACHIEVEMENTS_FLAG_SET_UNLOCKED);
        break;
    }

    /*
    /*case ACHIEVEMENT_GET_6_GREEN_SHINIES:
        for(i = 0; i < PARTY_SIZE; i++){
        if(IsMonShiny(&gPlayerParty[i]) && GetMonData(&gPlayerParty[i], MON_DATA_POKEBALL, NULL) != ITEM_CHERISH_BALL){
            switch(GetMonData(&gPlayerParty[i], MON_DATA_SPECIES2)){
                case SPECIES_MANKEY:
                case SPECIES_MARILL:
                case SPECIES_SWELLOW:
                case SPECIES_ESPEON:
                case SPECIES_BEEDRILL:
                case SPECIES_DODRIO:
                case SPECIES_DRAGONITE:
                case SPECIES_HUNTAIL:
                case SPECIES_SUDOWOODO:
                case SPECIES_VENUSAUR:
                case SPECIES_HITMONCHAN:
                case SPECIES_MUK:
                case SPECIES_GRIMER:
                case SPECIES_BRONZONG:
                case SPECIES_CRUSTLE:
                case SPECIES_HYDREIGON:
                case SPECIES_KARRABLAST:
                case SPECIES_SKARMORY:
                case SPECIES_TANGROWTH:
                case SPECIES_TANGELA:
                case SPECIES_MEWTWO:
                case SPECIES_POLIWRATH:
                case SPECIES_ZUBAT:
                case SPECIES_GOLBAT:
                case SPECIES_SPINDA:
                case SPECIES_TORTERRA:
                case SPECIES_HOPPIP:
                case SPECIES_SANDSHREW:
                case SPECIES_MR_MIME:
                case SPECIES_WOOBAT:
                case SPECIES_SWOOBAT:
                case SPECIES_KELDEO:
                case SPECIES_DIALGA:
                case SPECIES_MACHAMP:
                case SPECIES_PELIPPER:
                case SPECIES_WINGULL:
                case SPECIES_SALAMENCE:
                case SPECIES_BAGON:
                case SPECIES_SCIZOR:
                case SPECIES_PRIMEAPE:
                case SPECIES_MAROWAK:
                case SPECIES_HITMONLEE:
                case SPECIES_TAUROS:
                case SPECIES_KABUTO:
                case SPECIES_KABUTOPS:
                case SPECIES_JOLTEON:
                case SPECIES_DRUDDIGON:
                case SPECIES_KINGLER:
                case SPECIES_LEAFEON:
                case SPECIES_NIDOQUEEN:
                case SPECIES_REGISTEEL:
                case SPECIES_STANTLER:
                case SPECIES_URSARING:
                case SPECIES_TEDDIURSA:
                case SPECIES_LARVITAR:
                case SPECIES_AZURILL:
                case SPECIES_CUBONE:
                case SPECIES_CHIMECHO:
                case SPECIES_SANDILE:
                case SPECIES_KAKUNA:
                case SPECIES_DEINO:
                case SPECIES_ZWEILOUS:
                case SPECIES_TURTWIG:
                case SPECIES_LURANTIS:
                case SPECIES_BRONZOR:
                case SPECIES_DODUO:
                case SPECIES_TAILLOW:
                case SPECIES_MIMEJR:
                case SPECIES_NINCADA:
                case SPECIES_MACHOKE:
                case SPECIES_VICTREEBEL:
                case SPECIES_CHANSEY:
                case SPECIES_SILCOON:
                case SPECIES_MINUN:
                case SPECIES_LILEEP:
                case SPECIES_TROPIUS:
                case SPECIES_SHELGON:
                case SPECIES_MUNNA:
                case SPECIES_PETILIL:
                case SPECIES_ARCHEN:
                    GetSetQuestFlag(SIDE_QUEST_15, ACHIEVEMENTS_FLAG_SET_COMPLETED);
                break;
                }
            }
        }
    */
}

static void Task_QuestMenuProgress(u8 taskId)
{
	u8 i;
    u8 questIndex = QuestMenu_GetCursorPosition();
	u16 currentProgress = 0;
	u16 Objetive = 1;

	QuestMenuSubmenuSelectionMessage(taskId);

    if(sAchievementsData[i].completedFlag != FLAG_NONE){
        currentProgress = 0;
        Objetive = 1;
    }
    else if(sAchievementsData[i].completedVar != VAR_NONE){
        currentProgress = VarGet(sAchievementsData[i].completedVar);
        Objetive = sAchievementsData[i].varCompletedValue;
    }
    else if(sAchievementsData[i].defeatedTrainer != TRAINER_NONE && HasTrainerBeenFought(sAchievementsData[i].defeatedTrainer)){
        currentProgress = 0;
        Objetive = 1;
    }
    else{
        currentProgress = 0;
        Objetive = 1;
    }

    
    /*else{
        switch(questIndex){
            //--------------------------------------------------------------------------
            case SIDE_QUEST_2://4 Badges
                currentProgress = GetNumBadges();
                Objetive = 4;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_3://4 Badges
                currentProgress = GetNumBadges();
                Objetive = 8;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_7:
                currentProgress = 0;
                Objetive = 4;
                
                if(FlagGet(FLAG_RUSTBORO_NPC_TRADE_COMPLETED))
                    currentProgress++;
                if(FlagGet(FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED))
                    currentProgress++;
                if(FlagGet(FLAG_FORTREE_NPC_TRADE_COMPLETED))
                    currentProgress++;
                if(FlagGet(FLAG_BATTLE_FRONTIER_TRADE_DONE))
                    currentProgress++;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_8:
                if(TRUE){
                u16 fossilMons[] = {
                    SPECIES_OMANYTE,
                    SPECIES_OMASTAR,
                    SPECIES_KABUTO,
                    SPECIES_KABUTOPS,
                    SPECIES_AERODACTYL,
                    SPECIES_LILEEP,
                    SPECIES_ANORITH,
                    SPECIES_ARMALDO,
                    SPECIES_CRANIDOS,
                    SPECIES_RAMPARDOS,
                    SPECIES_SHIELDON,
                    SPECIES_BASTIODON,
                    SPECIES_TIRTOUGA,
                    SPECIES_CARRACOSTA,
                    SPECIES_ARCHEN,
                    SPECIES_ARCHEOPS,
                    SPECIES_TYRUNT,
                    SPECIES_TYRANTRUM,
                    SPECIES_AMAURA,
                    SPECIES_AURORUS,
                    SPECIES_DRACOZOLT,
                    SPECIES_ARCTOZOLT,
                    SPECIES_DRACOVISH,
                    SPECIES_ARCTOVISH,
                    SPECIES_RELICANTH};
                
                currentProgress = 0;
                Objetive = (sizeof(fossilMons)/sizeof(fossilMons[0]));
                
                for(i = 0; i < Objetive; i++){
                    if(GetSetPokedexFlag(SpeciesToNationalPokedexNum(fossilMons[i]), FLAG_GET_CAUGHT))
                        currentProgress++;
                }
                
            }
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_9:
                for(i = 0; i < PARTY_SIZE; i++){
                    if(GetMonData(&gPlayerParty[i], MON_DATA_FRIENDSHIP) >= 220)
                        currentProgress++;
                }
                Objetive = PARTY_SIZE;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_10:
                currentProgress = GetGameStat(GAME_STAT_EVOLVED_POKEMON);
                Objetive = 150;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_11:
                currentProgress = GetGameStat(GAME_STAT_STEPS);
                Objetive = 9999;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_12:
                if( FlagGet(FLAG_VISITED_LITTLEROOT_TOWN))
                    currentProgress++;
                if( FlagGet(FLAG_VISITED_OLDALE_TOWN))
                    currentProgress++;
                if( FlagGet(FLAG_VISITED_DEWFORD_TOWN))
                    currentProgress++;
                if( FlagGet(FLAG_VISITED_LAVARIDGE_TOWN))
                    currentProgress++;
                if( FlagGet(FLAG_VISITED_FALLARBOR_TOWN))
                    currentProgress++;
                if( FlagGet(FLAG_VISITED_VERDANTURF_TOWN))
                    currentProgress++;
                if( FlagGet(FLAG_VISITED_PACIFIDLOG_TOWN))
                    currentProgress++;
                if( FlagGet(FLAG_VISITED_PETALBURG_CITY))
                    currentProgress++;
                if( FlagGet(FLAG_VISITED_SLATEPORT_CITY))
                    currentProgress++;
                if( FlagGet(FLAG_VISITED_MAUVILLE_CITY))
                    currentProgress++;
                if( FlagGet(FLAG_VISITED_RUSTBORO_CITY))
                    currentProgress++;
                if( FlagGet(FLAG_VISITED_FORTREE_CITY))
                    currentProgress++;
                if( FlagGet(FLAG_VISITED_LILYCOVE_CITY))
                    currentProgress++;
                if( FlagGet(FLAG_VISITED_MOSSDEEP_CITY))
                    currentProgress++;
                if( FlagGet(FLAG_VISITED_SOOTOPOLIS_CITY))
                    currentProgress++;
                if( FlagGet(FLAG_VISITED_EVER_GRANDE_CITY))
                    currentProgress++;
            
                
                Objetive = 16;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_13:
                currentProgress = GetGameStat(GAME_STAT_SLOT_JACKPOTS);
                Objetive = 20;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_16:
                currentProgress = GetGameStat(GAME_STAT_CAUGHT_SHINIES);
                Objetive = 5;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_17:
                currentProgress = GetGameStat(GAME_STAT_PLANTED_BERRIES);
                Objetive = 50;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_18:
                currentProgress = GetGameStat(GAME_STAT_DEXNAV_SCANNED);
                Objetive = 500;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_19:
                currentProgress = GetGameStat(GAME_STAT_GOT_RAINED_ON);
                Objetive = 50;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_20:
                currentProgress = GetGameStat(GAME_STAT_USED_DAYCARE);
                Objetive = 50;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_21:
                currentProgress = GetGameStat(GAME_STAT_CHECKED_CLOCK);
                Objetive = 75;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_22:
                currentProgress = GetGameStat(GAME_STAT_WON_CONTEST);
                Objetive = 25;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_23:
                currentProgress = GetGameStat(GAME_STAT_FISHING_CAPTURES);
                Objetive = 25;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_24:
                currentProgress = GetGameStat(GAME_STAT_ENTERED_SAFARI_ZONE);
                Objetive = 50;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_25:
                currentProgress = GetGameStat(GAME_STAT_USED_STRUGGLE);
                Objetive = 5;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_26:
                currentProgress = GetGameStat(GAME_STAT_POKEMON_CAPTURES);
                Objetive = 200;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_27:
                currentProgress = VarGet(VAR_NORMAL_MOCK_BATTLES);
                Objetive = 30;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_28:
                currentProgress = VarGet(VAR_UPDATED_TIMES);
                Objetive = 5;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_29:
                currentProgress = gLocalTime.days;
                Objetive = 365;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_30:
                currentProgress = GetGameStat(GAME_STAT_STARTED_TRENDS);
                Objetive = 5;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_31:
                currentProgress = GetGameStat(GAME_STAT_POKEBLOCKS);
                Objetive = 30;
            break;
            //--------------------------------------------------------------------------
            case SIDE_QUEST_52:
                currentProgress = VarGet(VAR_HARD_MOCK_BATTLES);
                Objetive = 50;
            break;
            //--------------------------------------------------------------------------
            default:
                currentProgress = 0;
                Objetive = 1;
            break;
        }

    }*/
	
	if(currentProgress > Objetive)
		currentProgress = Objetive;
	
	ConvertIntToDecimalStringN(gStringVar1, currentProgress, STR_CONV_MODE_LEFT_ALIGN, 5);
	ConvertIntToDecimalStringN(gStringVar2, Objetive, STR_CONV_MODE_LEFT_ALIGN, 5);
    StringExpandPlaceholders(gStringVar4, sText_QuestMenu_DisplayProgress);
    QuestMenu_DisplaySubMenuMessage(taskId);
}

void SetQuestMenuActive(void)
{
    FlagSet(FLAG_QUEST_MENU_ACTIVE);
}

void CopyQuestName(u8 *dst, u8 AchievementId)
{
    StringCopy(dst, sAchievementsData[AchievementId].name);
}

void GetQuestName(u8 *dst, u8 AchievementId)
{
    ConvertIntToDecimalStringN(gStringVar1, AchievementId, STR_CONV_MODE_LEFT_ALIGN, 5);
	
	if (GetSetQuestFlag(AchievementId, ACHIEVEMENTS_FLAG_GET_UNLOCKED))
		StringCopy(gStringVar2, sAchievementsData[AchievementId].name);
    else
		StringCopy(gStringVar2, sText_QuestMenu_Unk);
	
	StringExpandPlaceholders(gStringVar4, sText_QuestMenu_QuestNumber);
	StringCopy(dst, gStringVar4);
	
	//return gStringVar4;
}

#undef tBldYBak
#undef tBldCntBak
#undef tWin0Bottom
#undef tWin0Top
#undef tWin0Right
#undef tWin0Left
#undef tYSpeed
#undef tXSpeed
#undef tState