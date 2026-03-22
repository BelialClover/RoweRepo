#ifndef GUARD_GLOBAL_H
#define GUARD_GLOBAL_H

#include <string.h>
#include <limits.h>
#include "config.h" // we need to define config before gba headers as print stuff needs the functions nulled before defines.
#include "gba/gba.h"
#include "constants/global.h"
#include "constants/flags.h"
#include "constants/vars.h"
#include "constants/species.h"

// Custom Definitions --------------------------------------------------------------------------------------------------------------------------------------------------------
#define DISABLE_EXTRA_SAVE_SPACE
#ifndef RELEASE_BUILD
#define DEBUG_BUILD
#endif
//#define MONOPOLY_BUILD
//#define GBA_PRINTF
//#define DISABLE_CHECK_FOR_DEBUG
//#define EXTRA_ANTI_CHEAT
//#define CHECK_CHEATS

//Configuration
#define CURRENT_GAME_VERSION    1957
#define NUM_STARTERS            10

#ifdef DEBUG_BUILD
#define DEBUG_POKEMON_MENU      TRUE
#else
#define DEBUG_POKEMON_MENU      FALSE
#endif

#define GBA_CPU_HZ        16777216
#define GBA_FRAME_CYCLES  280896

/* Converts a string to a compound literal, essentially making it a pointer to const u8 */
#define COMPOUND_STRING(str) (const u8[]) _(str)
#define COMPOUND_STRING_SIZE_LIMIT(str, limit) (const u8[COMPOUND_STRING_CHECK_SIZE(str, limit)]) _(str)

/* Auto-formatting compound strings: wraps text at build time to fit pixel width.
 * The preproc tool handles _f(fontId, maxWidth, "text") at compile time.
 * fontId: 0=Small, 1=Normal, 2=Short, 7=Narrow, 8=SmallNarrow */
#define FORMAT_STRING(fontId, maxWidth, str) (const u8[]) _f(fontId, maxWidth, str)

#define RANDOM_FROM_LIST(list) \
    ((list)[Random() % ARRAY_COUNT(list)])

/* Used for COMPOUND_STRING_SIZE_LIMIT. Stupid, but makes sure we only get
 * one error message regardless of how many characters over the limit we are.
 * Otherwise, GCC gives an error for each and every character (which is annoying). */
#define COMPOUND_STRING_CHECK_SIZE(str, limit) (sizeof(COMPOUND_STRING(str)) > limit ? sizeof(COMPOUND_STRING(str)) - 1 : sizeof(COMPOUND_STRING(str)))

// Prevent cross-jump optimization.
#define BLOCK_CROSS_JUMP asm("");

// to help in decompiling
#define asm_comment(x) asm volatile("@ -- " x " -- ")
#define asm_unified(x) asm(".syntax unified\n" x "\n.syntax divided")
#define NAKED __attribute__((naked))

// IDE support
#if defined (__APPLE__) || defined (__CYGWIN__) || defined (_MSC_VER)
#define _(x) x
#define __(x) x
#define _f(f, w, x) x

// Fool CLion IDE
#define INCBIN(x) {0}
#define INCBIN_U8 INCBIN
#define INCBIN_U16 INCBIN
#define INCBIN_U32 INCBIN
#define INCBIN_S8 INCBIN
#define INCBIN_S16 INCBIN
#define INCBIN_S32 INCBIN
#endif // IDE support

#define ARRAY_COUNT(array) (size_t)(sizeof(array) / sizeof((array)[0]))

// GameFreak used a macro called "NELEMS", as evidenced by
// AgbAssert calls.
#define NELEMS(arr) (sizeof(arr)/sizeof(*(arr)))

#define SWAP(a, b, temp)    \
{                           \
    temp = a;               \
    a = b;                  \
    b = temp;               \
}

#ifdef DEBUG_BUILD
static inline void CycleCountStart()
{
    REG_TM2CNT_H = 0;
    REG_TM3CNT_H = 0;

    REG_TM2CNT_L = 0;
    REG_TM3CNT_L = 0;

    // init timers (tim3 count up mode, tim2 every clock cycle)
    REG_TM3CNT_H = TIMER_ENABLE | TIMER_COUNTUP;
    REG_TM2CNT_H = TIMER_1CLK | TIMER_ENABLE;
}

static inline u32 CycleCountEnd()
{
    // stop timers
    REG_TM2CNT_H = 0;
    REG_TM3CNT_H = 0;

    // return result
    return REG_TM2CNT_L | (REG_TM3CNT_L << 16u);
}
#else
static inline void CycleCountStart(void){}

static inline u32 CycleCountEnd(void)
{
    return 0;
}

#endif

// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// free saveblock 1 defines
#define FREE_EXTRA_SEEN_FLAGS           //free up extra pokedex seen flags. Frees up 104 bytes
#define FREE_FIELD_3598                 //frees up unused saveblock data. 384 bytes
#define FREE_TRAINER_HILL               //frees up trainer hill data. 28 bytes.                          WARNING THIS HAS BEEN SHOWN TO BREAK MULTI BATTLES
#define FREE_MYSTERY_EVENT_BUFFERS      //frees up mystery event and ramScript. roughly 1880 bytes       Needed by FREE_BATTLE_TOWER_E_READER
#define FREE_MATCH_CALL                 //frees up match call data. 104 bytes
#define FREE_UNION_ROOM_CHAT            //frees up field unk3C88. 210 bytes
#define FREE_ENIGMA_BERRY               //frees up enigma berry. 52 bytes
#define FREE_LINK_BATTLE_RECORDS        //frees link battle record data. 88 bytes
                                        // saveblock1 total: 1846 bytes
//free saveblock 2 defines
#define FREE_BATTLE_TOWER_E_READER      //frees up battle tower e reader trainer data. 188 bytes.        WARNING THIS HAS BEEN SHOWN TO BREAK THE POKÉ MARTS' QUESTIONNAIRE
#define FREE_POKEMON_JUMP               //frees up pokemon jump data. 16 bytes
#define FREE_RECORD_MIXING_HALL_RECORDS //frees up hall records for record mixing. 1032 bytes
                                        // saveblock2 total: 1236 bytes
                                        
                                        //grand total: 3082

// useful math macros

// Converts a number to Q8.8 fixed-point format
#define Q_8_8(n) ((s16)((n) * 256))

// Converts a number to Q4.12 fixed-point format
#define Q_4_12(n)  ((s16)((n) * 4096))
#define UQ_4_12(n)  ((u16)((n) * 4096))

// Converts a number to Q24.8 fixed-point format
#define Q_24_8(n)  ((s32)((n) << 8))

// Converts a Q8.8 fixed-point format number to a regular integer
#define Q_8_8_TO_INT(n) ((int)((n) / 256))

// Converts a Q4.12 fixed-point format number to a regular integer
#define Q_4_12_TO_INT(n)  ((int)((n) / 4096))
#define UQ_4_12_TO_INT(n)  ((int)((n) / 4096))

// Converts a Q24.8 fixed-point format number to a regular integer
#define Q_24_8_TO_INT(n) ((int)((n) >> 8))

// Rounding value for Q4.12 fixed-point format
#define Q_4_12_ROUND ((1) << (12 - 1))
#define UQ_4_12_ROUND ((1) << (12 - 1))

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) >= (b) ? (a) : (b))

#if MODERN
#define abs(x) (((x) < 0) ? -(x) : (x))
#endif

// Extracts the upper 16 bits of a 32-bit number
#define HIHALF(n) (((n) & 0xFFFF0000) >> 16)

// Extracts the lower 16 bits of a 32-bit number
#define LOHALF(n) ((n) & 0xFFFF)

// There are many quirks in the source code which have overarching behavioral differences from
// a number of other files. For example, diploma.c seems to declare rodata before each use while
// other files declare out of order and must be at the beginning. There are also a number of
// macros which differ from one file to the next due to the method of obtaining the result, such
// as these below. Because of this, there is a theory (Two Team Theory) that states that these
// programming projects had more than 1 "programming team" which utilized different macros for
// each of the files that were worked on.
#define T1_READ_8(ptr)  ((ptr)[0])
#define T1_READ_16(ptr) ((ptr)[0] | ((ptr)[1] << 8))
#define T1_READ_32(ptr) ((ptr)[0] | ((ptr)[1] << 8) | ((ptr)[2] << 16) | ((ptr)[3] << 24))
#define T1_READ_PTR(ptr) (u8*) T1_READ_32(ptr)

// T2_READ_8 is a duplicate to remain consistent with each group.
#define T2_READ_8(ptr)  ((ptr)[0])
#define T2_READ_16(ptr) ((ptr)[0] + ((ptr)[1] << 8))
#define T2_READ_32(ptr) ((ptr)[0] + ((ptr)[1] << 8) + ((ptr)[2] << 16) + ((ptr)[3] << 24))
#define T2_READ_PTR(ptr) (void*) T2_READ_32(ptr)

// Macros for checking the joypad
#define TEST_BUTTON(field, button) ({(field) & (button);})
#define JOY_NEW(button) TEST_BUTTON(gMain.newKeys,  button)
#define JOY_HELD(button)  TEST_BUTTON(gMain.heldKeys, button)
#define JOY_HELD_RAW(button) TEST_BUTTON(gMain.heldKeysRaw, button)
#define JOY_REPEAT(button) TEST_BUTTON(gMain.newAndRepeatedKeys, button)

#define S16TOPOSFLOAT(val)   \
({                           \
    s16 v = (val);           \
    float f = (float)v;      \
    if(v < 0) f += 65536.0f; \
    f;                       \
})

// Branch defines: Used by other branches to detect each other.
// Each define must be here for each of RHH's branch you have pulled.
// e.g. If you have both the battle_engine and pokemon_expansion branch,
//      then both BATTLE_ENGINE and POKEMON_EXPANSION must be defined here.
#define BATTLE_ENGINE
#define POKEMON_EXPANSION
#define ITEM_EXPANSION

#define ROUND_BITS_TO_BYTES(numBits)(((numBits) / 8) + (((numBits) % 8) ? 1 : 0))

#define DEX_FLAGS_NO (ROUND_BITS_TO_BYTES(POKEMON_SLOTS_NUMBER))
#define NUM_FLAG_BYTES (ROUND_BITS_TO_BYTES(FLAGS_COUNT))

#define MESSAGEBOX_BACKGROUND_COLOR 1
#define MESSAGEBOX_FONT_COLOR 2
#define MESSAGEBOX_FONT_SHADOW_COLOR 3

#define STRINGLIST_MAX_LENGHT 20
#define STRINGLIST_LONG_MAX_LENGHT 75
struct StringList
{
    const u8 string[STRINGLIST_MAX_LENGHT];
};

struct StringList_Long
{
    const u8 string[STRINGLIST_LONG_MAX_LENGHT];
};

struct Coords8
{
    s8 x;
    s8 y;
};

struct UCoords8
{
    u8 x;
    u8 y;
};

struct Coords16
{
    s16 x;
    s16 y;
};

struct UCoords16
{
    u16 x;
    u16 y;
};

struct Coords32
{
    s32 x;
    s32 y;
};

struct UCoords32
{
    u32 x;
    u32 y;
};

struct Time
{
    /*0x00*/ s16 days;
    /*0x02*/ s8 hours;
    /*0x03*/ s8 minutes;
    /*0x04*/ s8 seconds;
    /*0x05*/ s8 dayOfWeek;
};

#define NUM_MAX_OUTBREAK          10
#define NUM_MAX_SPECIAL_OUTBREAKS 3
#define NUM_MAX_ROAMERS           5

struct RoamerData
{
    u16 species;
    u32 personality;
    u16 currentHp;
    u8  level;
};

struct OutbreakData
{
    u16 species;
    u16 mapNum;
    u16 mapGroup;
    u8  rate;
    u16 specialMove;
    u16 heldItem;
    u8  heldItem_Rate;
    u8  shinyBoost:7;
    u8  isWaterEncounter:1;
    u8  daysLeft;
};

struct Pokedex
{
    /*0x00*/ u8 order;
    /*0x01*/ u8 mode;
    /*0x02*/ u8 nationalMagic; // must equal 0xDA in order to have National mode
    /*0x03*/ u8 unknown2;
    /*0x04*/ u32 unownPersonality; // set when you first see Unown
    /*0x08*/ u32 spindaPersonality; // set when you first see Spinda
    /*0x0C*/ u32 unknown3;
};

struct PokemonJumpResults
{
    u16 jumpsInRow;
    u16 field2;
    u16 excellentsInRow;
    u16 field6;
    u32 field8;
    u32 bestJumpScore;
};

struct BerryPickingResults
{
    u32 bestScore;
    u16 berriesPicked;
    u16 berriesPickedInRow;
    u8 field_8;
    u8 field_9;
    u8 field_A;
    u8 field_B;
    u8 field_C;
    u8 field_D;
    u8 field_E;
    u8 field_F;
};

// two arrays for lvl50 and open level
struct PyramidBag
{
    u16 itemId[2][PYRAMID_BAG_ITEMS_COUNT];
    u8 quantity[2][PYRAMID_BAG_ITEMS_COUNT];
};

struct BerryCrush
{
    u16 berryCrushResults[4];
    u32 berryPowderAmount;
    u32 unk;
};

struct ApprenticeMon
{
    u16 species;
    u16 moves[MAX_MON_MOVES];
    u16 item;
};

// This is for past players Apprentices or Apprentices received via Record Mix.
// For the current Apprentice, see struct PlayersApprentice
struct Apprentice
{
    u8 id:5;
    u8 lvlMode:2; // + 1
    u8 numQuestions;
    u8 number;
    struct ApprenticeMon party[MULTI_PARTY_SIZE];
    u16 speechWon[EASY_CHAT_BATTLE_WORDS_COUNT];
    u8 playerId[TRAINER_ID_LENGTH];
    u8 playerName[PLAYER_NAME_LENGTH];
    u8 language;
    u32 checksum;
};

struct BattleTowerPokemon
{
    u16 species;
    u16 heldItem;
    u16 moves[4];
    u8 level;
    u8 ppBonuses;
    u8 hpEV;
    u8 attackEV;
    u8 defenseEV;
    u8 speedEV;
    u8 spAttackEV;
    u8 spDefenseEV;
    u32 otId;
    u32 hpIV:5;
    u32 attackIV:5;
    u32 defenseIV:5;
    u32 speedIV:5;
    u32 spAttackIV:5;
    u32 spDefenseIV:5;
    u32 gap:1;
    u32 altAbility:1;
    u32 personality;
    u8 nickname[POKEMON_NAME_LENGTH + 1];
    u8 friendship;
    u8 nature;
    u8 hpType;
    u8 abilityNum;
};

#define NULL_BATTLE_TOWER_POKEMON { .nickname = __("$$$$$$$$$$$") }

struct EmeraldBattleTowerRecord
{
    /*0x00*/ u8 lvlMode; // 0 = level 50, 1 = level 100
    /*0x01*/ u8 facilityClass;
    /*0x02*/ u16 winStreak;
    /*0x04*/ u8 name[PLAYER_NAME_LENGTH + 1];
    /*0x0C*/ u8 trainerId[TRAINER_ID_LENGTH];
    /*0x10*/ u16 greeting[EASY_CHAT_BATTLE_WORDS_COUNT];
    /*0x1C*/ u16 speechWon[EASY_CHAT_BATTLE_WORDS_COUNT];
    /*0x28*/ u16 speechLost[EASY_CHAT_BATTLE_WORDS_COUNT];
    /*0x34*/ struct BattleTowerPokemon party[MAX_FRONTIER_PARTY_SIZE];
    /*0xE4*/ u8 language;
    /*0xE8*/ u32 checksum;
};

struct BattleTowerInterview
{
    u16 playerSpecies;
    u16 opponentSpecies;
    u8 opponentName[PLAYER_NAME_LENGTH + 1];
    u8 opponentMonNickname[POKEMON_NAME_LENGTH + 1];
    u8 opponentLanguage;
};

struct BattleTowerEReaderTrainer
{
    /*0x00*/ u8 unk0;
    /*0x01*/ u8 facilityClass;
    /*0x02*/ u16 winStreak;
    /*0x04*/ u8 name[PLAYER_NAME_LENGTH + 1];
    /*0x0C*/ u8 trainerId[TRAINER_ID_LENGTH];
    /*0x10*/ u16 greeting[EASY_CHAT_BATTLE_WORDS_COUNT];
    /*0x1C*/ u16 farewellPlayerLost[EASY_CHAT_BATTLE_WORDS_COUNT];
    /*0x28*/ u16 farewellPlayerWon[EASY_CHAT_BATTLE_WORDS_COUNT];
    /*0x34*/ struct BattleTowerPokemon party[FRONTIER_PARTY_SIZE];
    /*0xB8*/ u32 checksum;
};

// For displaying party information on the player's Battle Dome tourney page
struct DomeMonData
{
    u16 moves[MAX_MON_MOVES];
    u8 evs[NUM_STATS];
    u8 nature;
};

struct RentalMon
{
    u16 monId;
    u32 personality;
    u8 ivs;
    u8 abilityNum;
};

struct BattleDomeTrainer
{
    u16 trainerId:10;
    u16 isEliminated:1;
    u16 eliminatedAt:2;
    u16 forfeited:3;
};

#define DOME_TOURNAMENT_TRAINERS_COUNT 16

struct BattleFrontier
{
    /*0x64C*/ struct EmeraldBattleTowerRecord towerPlayer;
    /*0x738*/ struct EmeraldBattleTowerRecord towerRecords[5]; // From record mixing.
    /*0xBEB*/ struct BattleTowerInterview towerInterview;
    #ifndef FREE_BATTLE_TOWER_E_READER
    /*0xBEC*/ struct BattleTowerEReaderTrainer ereaderTrainer; //DO NOT DELETE, YOU DUMMY.
    #endif
    /*0xCA8*/ u8 challengeStatus;
    /*0xCA9*/ u8 lvlMode:2;
    /*0xCA9*/ u8 challengePaused:1;
    /*0xCA9*/ u8 disableRecordBattle:1;
    /*0xCAA*/ u16 selectedPartyMons[MAX_FRONTIER_PARTY_SIZE];
    /*0xCB2*/ u16 curChallengeBattleNum; // Battle number / room number (Pike) / floor number (Pyramid)
    /*0xCB4*/ u16 trainerIds[20];
    /*0xCDC*/ u32 winStreakActiveFlags;
    /*0xCE0*/ u16 towerWinStreaks[4][2];
    /*0xCF0*/ u16 towerRecordWinStreaks[4][2];
    /*0xD00*/ u16 battledBrainFlags;
    /*0xD02*/ u16 towerSinglesStreak; // Never read
    /*0xD04*/ u16 towerNumWins; // Increments to MAX_STREAK but never read otherwise
    /*0xD06*/ u8 towerBattleOutcome;
    /*0xD07*/ u8 towerLvlMode;
    /*0xD08*/ u8 domeAttemptedSingles50:1;
    /*0xD08*/ u8 domeAttemptedSinglesOpen:1;
    /*0xD08*/ u8 domeHasWonSingles50:1;
    /*0xD08*/ u8 domeHasWonSinglesOpen:1;
    /*0xD08*/ u8 domeAttemptedDoubles50:1;
    /*0xD08*/ u8 domeAttemptedDoublesOpen:1;
    /*0xD08*/ u8 domeHasWonDoubles50:1;
    /*0xD08*/ u8 domeHasWonDoublesOpen:1;
    /*0xD09*/ u8 domeUnused;
    /*0xD0A*/ u8 domeLvlMode;
    /*0xD0B*/ u8 domeBattleMode;
    /*0xD0C*/ u16 domeWinStreaks[2][2];
    /*0xD14*/ u16 domeRecordWinStreaks[2][2];
    /*0xD1C*/ u16 domeTotalChampionships[2][2];
    /*0xD24*/ struct BattleDomeTrainer domeTrainers[DOME_TOURNAMENT_TRAINERS_COUNT];
    /*0xD64*/ u16 domeMonIds[DOME_TOURNAMENT_TRAINERS_COUNT][FRONTIER_PARTY_SIZE];
    /*0xDC6*/ u16 palacePrize;
    /*0xDC8*/ u16 palaceWinStreaks[2][2];
    /*0xDD0*/ u16 palaceRecordWinStreaks[2][2];
    /*0xDD8*/ u16 arenaPrize;
    /*0xDDA*/ u16 arenaWinStreaks[2];
    /*0xDDE*/ u16 arenaRecordStreaks[2];
    /*0xDE2*/ u16 factoryWinStreaks[2][2];
    /*0xDEA*/ u16 factoryRecordWinStreaks[2][2];
    /*0xDF6*/ u16 factoryRentsCount[2][2];
    /*0xDFA*/ u16 factoryRecordRentsCount[2][2];
    /*0xE02*/ u16 pikePrize;
    /*0xE04*/ u16 pikeWinStreaks[2];
    /*0xE08*/ u16 pikeRecordStreaks[2];
    /*0xE0C*/ u16 pikeTotalStreaks[2];
    /*0xE10*/ u8 pikeHintedRoomIndex:3;
    /*0xE10*/ u8 pikeHintedRoomType:4;
    /*0xE10*/ u8 pikeHealingRoomsDisabled:1;
    /*0xE12*/ u16 pikeHeldItemsBackup[FRONTIER_PARTY_SIZE];
    /*0xE18*/ u16 pyramidPrize;
    /*0xE1A*/ u16 pyramidWinStreaks[2];
    /*0xE1E*/ u16 pyramidRecordStreaks[2];
    /*0xE22*/ u16 pyramidRandoms[4];
    /*0xE2A*/ u8 pyramidTrainerFlags;
    /*0xE2C*/ struct PyramidBag pyramidBag;
    /*0xE68*/ u8 pyramidLightRadius;
    /*0xE6A*/ u16 verdanturfTentPrize;
    /*0xE6C*/ u16 fallarborTentPrize;
    /*0xE6E*/ u16 slateportTentPrize;
    /*0xE70*/ struct RentalMon rentalMons[FRONTIER_PARTY_SIZE * 2];
    /*0xEB8*/ u16 battlePoints;
    /*0xEBA*/ u16 cardBattlePoints;
    /*0xEBC*/ u32 battlesCount;
    /*0xEC0*/ u16 domeWinningMoves[DOME_TOURNAMENT_TRAINERS_COUNT];
    /*0xEE0*/ u8 trainerFlags;
    /*0xEE1*/ u8 opponentNames[2][PLAYER_NAME_LENGTH + 1];
    /*0xEF1*/ u8 opponentTrainerIds[2][TRAINER_ID_LENGTH];
    /*0xEF9*/ u8 unk_EF9:7; // Never read
    /*0xEF9*/ u8 savedGame:1;
    /*0xEFC*/ struct DomeMonData domePlayerPartyData[FRONTIER_PARTY_SIZE];
};

struct ApprenticeQuestion
{
    u8 questionId:2;
    u8 monId:2;
    u8 moveSlot:2;
    u8 suggestedChange:2; // TRUE if told to use held item or second move, FALSE if told to use no item or first move
    u16 data; // used both as an itemId and a moveId
};

struct PlayersApprentice
{
    /*0xB0*/ u8 id;
    /*0xB1*/ u8 lvlMode:2;  //0: Unassigned, 1: Lv 50, 2: Open Lv
    /*0xB1*/ u8 questionsAnswered:4;
    /*0xB1*/ u8 leadMonId:2;
    /*0xB2*/ u8 party:3;
    /*0xB2*/ u8 saveId:2;
    /*0xB4*/ u8 speciesIds[MULTI_PARTY_SIZE];
    /*0xB8*/ struct ApprenticeQuestion questions[APPRENTICE_MAX_QUESTIONS];
};

struct RankingHall1P
{
    u8 id[TRAINER_ID_LENGTH];
    u16 winStreak;
    u8 name[PLAYER_NAME_LENGTH + 1];
    u8 language;
};

struct RankingHall2P
{
    u8 id1[TRAINER_ID_LENGTH];
    u8 id2[TRAINER_ID_LENGTH];
    u16 winStreak;
    u8 name1[PLAYER_NAME_LENGTH + 1];
    u8 name2[PLAYER_NAME_LENGTH + 1];
    u8 language;
};

#include "constants/items.h"
#define ITEM_FLAGS_COUNT ((ITEMS_COUNT / 8) + ((ITEMS_COUNT % 8) ? 1 : 0))

// tx_pokemon_follower
struct PokemonFollowerMapData
{
    /*0x0*/ u8 id;
    /*0x1*/ u8 number;
    /*0x2*/ u8 group;
}; /* size = 0x4 */

struct WildPokemonTiles
{
    struct Coords16 position;
    u16 species;
    u8 other;
    u8 stepsLeft:6;
    u8 enabled:1;
    u8 isShiny:1;
};

struct PokemonFollower
{
    /*0x00*/ u8 inProgress:1;
             u8 warpEnd:1;
             u8 createSurfBlob:2;
             u8 hidden:1;
             u8 comeOutDoorStairs:3;
    /*0x01*/ u8 currentSprite:5;
             u8 partySlotId:3;
    /*0x02*/ u8 objId;
    /*0x03*/ u8 delayedState;
    /*0x04*/ struct PokemonFollowerMapData map;
    /*0x08*/ struct Coords16 log;
    /*0x0C*/ const u8* script;
    /*0x10*/ u16 flag;
    /*0x12*/ u16 graphicsId;
    /*0x14*/ u16 flags;
    /*0x15*/ u8 locked;
}; /* size = 0x18 */

// quest menu
#include "constants/quests.h"
#define ROAMER_COUNT 200

#define RGB_COLORS_COUNT     3
#define MAX_SKILL_NUM        100
#define MAX_ACHIEVEMENTS_NUM 100

struct SaveBlock2
{
	u8 playerName[PLAYER_NAME_LENGTH + 1];
	u8 playerGender; // MALE, FEMALE
	u8 specialSaveWarpFlags;
	u8 playerTrainerId[TRAINER_ID_LENGTH];
	u16 playTimeHours;
	u8 playTimeMinutes;
	u8 playTimeSeconds;
	u8 playTimeVBlanks;
	u8 optionsButtonMode;  // OPTIONS_BUTTON_MODE_[NORMAL/LR/L_EQUALS_A]

	u16 optionsTextSpeed:3; // OPTIONS_TEXT_SPEED_[SLOW/MID/FAST]
	u16 optionsWindowFrameType:5; // Specifies one of the 20 decorative borders for text boxes
	u16 optionsSound:2; // OPTIONS_SOUND_[MONO/STEREO/OFF]
	u16 optionsBattleStyle:1; // OPTIONS_BATTLE_STYLE_[SHIFT/SET]
	u16 optionsBattleSceneOff:1; // whether battle animations are disabled
	u16 regionMapZoom:1; // whether the map is zoomed in
	u16 expShare:1; //Gen 6 Exp Share
	u16 tmItemSort:2; //TM Sorting mode
	u16 optionsHpBarSpeed:4;
	u16 optionsExpBarSpeed:4;
	u16 optionsOpponentHp:2; // Show Hp text in the opponent healthbox OPTIONS_OPPONENT_HP_[NONE/TEXT/PERCENTAGE]
	u16 optionsTransitionSpeed:2;
	u16 optionsAutomaticFollower:1;//Followers

	struct Pokedex pokedex;
	u16 lastUsedBall;
	u8 playerRGB[RGB_COLORS_COUNT];
	struct Time localTimeOffset;
	struct Time lastBerryTreeUpdate;
	u32 encryptionKey;
	struct PlayersApprentice playerApprentice;
	struct Apprentice apprentices[APPRENTICE_COUNT]; //272 bytes
	struct BerryCrush berryCrush;
	struct BerryPickingResults berryPick;

    #ifndef FREE_RECORD_MIXING_HALL_RECORDS
	struct RankingHall1P hallRecords1P[HALL_FACILITIES_COUNT][2][3]; // From record mixing.
	struct RankingHall2P hallRecords2P[2][3]; // From record mixing.
    #endif

	u16 contestLinkResults[CONTEST_CATEGORIES_COUNT][CONTESTANT_COUNT];
	struct BattleFrontier frontier;
	u8 itemFlags[ITEM_FLAGS_COUNT];
	struct PokemonFollower pokemonFollower;
	u8 titleScreen:4;
	u8 optionsDamageDoneMessageEnabled:1;
	u8 optionsGenericCry:1;
	u8 optionsBikeType:1;
	u8 optionsEnableEmuCheck:1;
	u8 optionsMgbaMode:1;
	//bool8 roamerFlag[ROAMER_COUNT];
    //struct WildPokemonTiles gWildPokemonTiles[MAX_WILD_POKEMON_TILES];
    //struct WildPokemonTiles gTempWildPokemonTile;
    
    u8 trainerSkillLevel[MAX_SKILL_NUM];
    u8 achievementStatus[MAX_ACHIEVEMENTS_NUM];
    u8 activeOutbreak[NUM_MAX_OUTBREAK];
    struct RoamerData activeRoamers[NUM_MAX_ROAMERS];
    struct OutbreakData activeSpecialOutbreak[NUM_MAX_SPECIAL_OUTBREAKS];
};

extern struct SaveBlock2 *gSaveBlock2Ptr;

struct SecretBaseParty
{
    u32 personality[PARTY_SIZE];
    u16 moves[PARTY_SIZE * MAX_MON_MOVES];
    u16 species[PARTY_SIZE];
    u16 heldItems[PARTY_SIZE];
    u8 levels[PARTY_SIZE];
    u8 EVs[PARTY_SIZE];
};

struct SecretBase
{
    /*0x1A9C*/ u8 secretBaseId;
    /*0x1A9D*/ u8 sbr_field_1_0:4;
    /*0x1A9D*/ u8 gender:1;
    /*0x1A9D*/ u8 battledOwnerToday:1;
    /*0x1A9D*/ u8 registryStatus:2;
    /*0x1A9E*/ u8 trainerName[PLAYER_NAME_LENGTH];
    /*0x1AA5*/ u8 trainerId[TRAINER_ID_LENGTH]; // byte 0 is used for determining trainer class
    /*0x1AA9*/ u8 language;
    /*0x1AAA*/ u16 numSecretBasesReceived;
    /*0x1AAC*/ u8 numTimesEntered;
    /*0x1AAD*/ u8 sbr_field_11;
    /*0x1AAE*/ u8 decorations[DECOR_MAX_SECRET_BASE];
    /*0x1ABE*/ u8 decorationPositions[DECOR_MAX_SECRET_BASE];
    /*0x1AD0*/ struct SecretBaseParty party;
};

#include "constants/game_stat.h"
#include "global.fieldmap.h"
#include "global.berry.h"
#include "global.tv.h"
#include "pokemon.h"

struct WarpData
{
    s8 mapGroup;
    s8 mapNum;
    s8 warpId;
    s16 x, y;
};

struct ItemSlot
{
    u16 itemId;
    u16 quantity;
};

struct Pokeblock
{
    u8 color;
    u8 spicy;
    u8 dry;
    u8 sweet;
    u8 bitter;
    u8 sour;
    u8 feel;
};

struct Roamer
{
    u32 ivs;
    u32 personality;
    u16 species;
    u16 hp;
    u8 level;
    u8 status;
    u8 cool;
    u8 beauty;
    u8 cute;
    u8 formId;
    u8 isShiny;
    bool8 active;
};

struct RamScriptData
{
    u8 magic;
    u8 mapGroup;
    u8 mapNum;
    u8 objectId;
    u8 script[995];
};

struct RamScript
{
    u32 checksum;
    struct RamScriptData data;
};

struct EasyChatPair
{
    u16 unk0_0:7;
    u16 unk0_7:7;
    u16 unk1_6:1;
    u16 unk2;
    u16 words[2];
}; /*size = 0x8*/

struct MailStruct
{
    /*0x00*/ u16 words[MAIL_WORDS_COUNT];
    /*0x12*/ u8 playerName[PLAYER_NAME_LENGTH + 1];
    /*0x1A*/ u8 trainerId[TRAINER_ID_LENGTH];
    /*0x1E*/ u16 species;
    /*0x20*/ u16 itemId;
};

struct MauvilleManCommon
{
    u8 id;
};

struct MauvilleManBard
{
    u8 id;
    u16 songLyrics[BARD_SONG_LENGTH];
    u16 temporaryLyrics[BARD_SONG_LENGTH];
    u8 playerName[PLAYER_NAME_LENGTH + 1];
    u8 playerTrainerId[TRAINER_ID_LENGTH];
    bool8 hasChangedSong;
    u8 language;
};

struct MauvilleManStoryteller
{
    u8 id;
    bool8 alreadyRecorded;
    u8 gameStatIDs[NUM_STORYTELLER_TALES];
    u8 trainerNames[NUM_STORYTELLER_TALES][PLAYER_NAME_LENGTH];
    u8 statValues[NUM_STORYTELLER_TALES][4];
    u8 language[NUM_STORYTELLER_TALES];
};

struct MauvilleManGiddy
{
    u8 id;
    u8 taleCounter;
    u8 questionNum;
    u16 randomWords[10];
    u8 questionList[8];
    u8 language;
};

struct MauvilleManHipster
{
    u8 id;
    bool8 alreadySpoken;
    u8 language;
};

struct MauvilleOldManTrader
{
    u8 id;
    u8 decorations[NUM_TRADER_ITEMS];
    u8 playerNames[NUM_TRADER_ITEMS][11];
    u8 alreadyTraded;
    u8 language[NUM_TRADER_ITEMS];
};

typedef union OldMan
{
    struct MauvilleManCommon common;
    struct MauvilleManBard bard;
    struct MauvilleManGiddy giddy;
    struct MauvilleManHipster hipster;
    struct MauvilleOldManTrader trader;
    struct MauvilleManStoryteller storyteller;
} OldMan;

struct RecordMixing_UnknownStructSub
{
    u32 unk0;
    u8 data[0x34];
    //u8 data[0x38];
};

struct RecordMixing_UnknownStruct
{
    struct RecordMixing_UnknownStructSub data[2];
    u32 unk70;
    u16 unk74[0x2];
};

#define LINK_B_RECORDS_COUNT 5

struct LinkBattleRecord
{
    u8 name[PLAYER_NAME_LENGTH + 1];
    u16 trainerId;
    u16 wins;
    u16 losses;
    u16 draws;
};

struct LinkBattleRecords
{
    struct LinkBattleRecord entries[LINK_B_RECORDS_COUNT];
    u8 languages[LINK_B_RECORDS_COUNT];
};

struct RecordMixingGiftData
{
    u8 unk0;
    u8 quantity;
    u16 itemId;
};

struct RecordMixingGift
{
    int checksum;
    struct RecordMixingGiftData data;
};

struct ContestWinner
{
    u32 personality;
    u32 trainerId;
    u16 species;
    u8 contestCategory;
    u8 monName[POKEMON_NAME_LENGTH + 1];
    u8 trainerName[PLAYER_NAME_LENGTH + 1];
    u8 contestRank;
};

struct DayCareMail
{
    struct MailStruct message;
    u8 OT_name[PLAYER_NAME_LENGTH + 1];
    u8 monName[POKEMON_NAME_LENGTH + 1];
    u8 gameLanguage:4;
    u8 monLanguage:4;
};

struct DaycareMon
{
    struct BoxPokemon mon;
    struct DayCareMail mail;
    u32 steps;
};

struct DayCare
{
    struct DaycareMon mons[DAYCARE_MON_COUNT];
    u32 offspringPersonality;
    u8 stepCounter;
};

struct RecordMixingDayCareMail
{
    struct DayCareMail mail[DAYCARE_MON_COUNT];
    u32 numDaycareMons;
    bool16 holdsItem[DAYCARE_MON_COUNT];
};

struct LilycoveLadyQuiz
{
    /*0x000*/ u8 id;
    /*0x001*/ u8 state;
    /*0x002*/ u16 question[9];
    /*0x014*/ u16 correctAnswer;
    /*0x016*/ u16 playerAnswer;
    /*0x018*/ u8 playerName[PLAYER_NAME_LENGTH + 1];
    /*0x020*/ u16 playerTrainerId[TRAINER_ID_LENGTH];
    /*0x028*/ u16 prize;
    /*0x02a*/ bool8 waitingForChallenger;
    /*0x02b*/ u8 questionId;
    /*0x02c*/ u8 prevQuestionId;
    /*0x02d*/ u8 language;
};

struct LilycoveLadyFavor
{
    /*0x000*/ u8 id;
    /*0x001*/ u8 state;
    /*0x002*/ bool8 likedItem;
    /*0x003*/ u8 numItemsGiven;
    /*0x004*/ u8 playerName[PLAYER_NAME_LENGTH + 1];
    /*0x00c*/ u8 favorId;
    /*0x00e*/ u16 itemId;
    /*0x010*/ u16 bestItem;
    /*0x012*/ u8 language;
};

struct LilycoveLadyContest
{
    /*0x000*/ u8 id;
    /*0x001*/ bool8 givenPokeblock;
    /*0x002*/ u8 numGoodPokeblocksGiven;
    /*0x003*/ u8 numOtherPokeblocksGiven;
    /*0x004*/ u8 playerName[PLAYER_NAME_LENGTH + 1];
    /*0x00c*/ u8 maxSheen;
    /*0x00d*/ u8 category;
    /*0x00e*/ u8 language;
};

typedef union // 3b58
{
    struct LilycoveLadyQuiz quiz;
    struct LilycoveLadyFavor favor;
    struct LilycoveLadyContest contest;
    u8 id;
    u8 pad[0x40];
} LilycoveLady;

struct WaldaPhrase
{
    u16 colors[2]; // Background, foreground.
    u8 text[16];
    u8 iconId;
    u8 patternId;
    bool8 patternUnlocked;
};

struct TrainerNameRecord
{
    u32 trainerId;
    u8 trainerName[PLAYER_NAME_LENGTH + 1];
};

struct SaveTrainerHill
{
    /*0x3D64*/ u32 timer;
    /*0x3D68*/ u32 bestTime;
    /*0x3D6C*/ u8 unk_3D6C;
    /*0x3D6E*/ u16 receivedPrize:1;
    /*0x3D6E*/ u16 checkedFinalTime:1;
    /*0x3D6E*/ u16 spokeToOwner:1;
    /*0x3D6E*/ u16 hasLost:1;
    /*0x3D6E*/ u16 maybeECardScanDuringChallenge:1;
    /*0x3D6E*/ u16 field_3D6E_0f:1;
    /*0x3D6E*/ u16 tag:2;
};

struct WonderNewsMetadata
{
    u8 newsType:2;		//unk_0_0
    u8 sentCounter:3;	//unk_0_2
    u8 getCounter:3;	//unk_0_5
    u8 rand;			//unk_1
};

 struct WonderNews
{
    u16 id;																//u16 unk_00;
    u8 sendType; // SEND_TYPE_* 										//u8 unk_02;
    u8 bgType;															//u8 unk_03;
    u8 titleText[WONDER_NEWS_TEXT_LENGTH];								//u8 unk_04[40];
    u8 bodyText[WONDER_NEWS_BODY_TEXT_LINES][WONDER_NEWS_TEXT_LENGTH];	//u8 unk_2C[10][40];
};

 struct WonderNewsSaveStruct
{
    u32 crc;
    struct WonderNews data;
};

#define CARD_CURRENT_VERSION 	    CARD_SHINY_RIOLU //The Mega Update

#define MYSTERY_GIFT_CARD_SUNDAY 	CARD_PICHU
#define MYSTERY_GIFT_CARD_MONDAY 	CARD_SHINY_CHARCADET
#define MYSTERY_GIFT_CARD_TUESDAY 	CARD_SHINY_AXEW
#define MYSTERY_GIFT_CARD_WEDNESDAY CARD_SHINY_EEVEE
#define MYSTERY_GIFT_CARD_THURSDAY 	CARD_SHINY_BELDUM
#define MYSTERY_GIFT_CARD_FRIDAY 	CARD_IRON_BUNDLE
#define MYSTERY_GIFT_CARD_SATURDAY 	CARD_AZ_FLOETTE

//Mytery Gift Stuff
enum{
    MYSTERY_GIFT_GIVEMON,
    MYSTERY_GIFT_ITEM,
    MYSTERY_GIFT_ROAMER,
    NUM_MYSTERY_GIFT_TYPES
};

enum {
    CARD_TEST,
    CARD_VIVILLON_1,
    CARD_GRENINJA,
    CARD_PICHU,
	CARD_VIVILLON_2,
	CARD_COSPLAY_PIKACHU,
	CARD_PIKACHU_POP_STAR,
	CARD_AZ_FLOETTE,
	CARD_SHINY_BELDUM,
	CARD_DIANCIE,
	CARD_SHINY_EEVEE,
	CARD_BEE_ALTARIA,
    CARD_CHRISTMASS_DELIBIRD,
	CARD_COSPLAY_PIKACHU_LIBRE,
	CARD_SHINY_AXEW,
	CARD_MANAPHY,
    CARD_HALLOWEEN_GOURGEIST,
    CARD_SHINY_CHARCADET,
    CARD_GALARIAN_ARTICUNO,
    CARD_GALARIAN_ZAPDOS,
    CARD_GALARIAN_MOLTRES,
    CARD_JAS_UMBREON,
    CARD_LEIGH_GIRATINA,
    CARD_PHROG_BISHARP,
    CARD_DES_MAWILE,
    CARD_DARKRAI,
    CARD_IRON_BUNDLE,
    CARD_SLITHER_WING,
    CARD_SHINY_RIOLU,
};

 struct WonderCard
{
	// Event flag (sReceivedGiftFlags) + WONDER_CARD_FLAG_OFFSET
	u16 flagId;
    u16 iconSpecies;
    u32 idNumber;
    u8 type:2;
    u8 bgType:4;
    u8 sendType:2;
    u8 maxStamps;
    u8 titleText[WONDER_CARD_TEXT_LENGTH];
    u8 subtitleText[WONDER_CARD_TEXT_LENGTH];
    u8 bodyText[WONDER_CARD_BODY_TEXT_LINES][WONDER_CARD_TEXT_LENGTH];
    u8 footerLine1Text[WONDER_CARD_TEXT_LENGTH];
    u8 footerLine2Text[WONDER_CARD_TEXT_LENGTH];
    u8 giftType;
};

 struct WonderCardSaveStruct
{
    u32 crc;
    struct WonderCard data;
};


 struct WonderCardMetadata
{
    u16 battlesWon;								//u16 unk_00;
    u16 battlesLost;							//u16 unk_02;
    u16 numTrades;								//u16 unk_04;
    u16 iconSpecies;							//u16 unk_06;
    u16 stampData[2][MAX_STAMP_CARD_STAMPS]; 	//u16 unk_08[2][7];
	// First element is STAMP_SPECIES, second is STAMP_ID
};

 struct MEventBuffer_3430
{
    u32 crc;
    struct WonderCardMetadata data;
};

 struct MEventBuffers
{
    /*0x000 0x322C*/ struct WonderNewsSaveStruct wonderNews;
    /*0x1c0 0x33EC*/ struct WonderCardSaveStruct wonderCard;
    /*0x310 0x353C*/ struct MEventBuffer_3430 buffer_310;
    /*0x338 0x3564*/ u16 unk_338[4];
    /*0x340 0x356C*/ struct WonderNewsMetadata unk_340;
    /*0x344 0x3570*/ u32 unk_344[2][5];
}; // 0x36C 0x3598

#define GIFT_RIBBONS_COUNT 52

struct SaveBlock1
{
    struct Coords16 pos;
    struct WarpData location;
    struct WarpData continueGameWarp;
    struct WarpData dynamicWarp;
    struct WarpData lastHealLocation; // used by white-out and teleport
    struct WarpData escapeWarp; // used by Dig and Escape Rope
    u16 savedMusic;
    u8 weather;
    u8 weatherCycleStage;
    u8 flashLevel;
    u16 mapLayoutId;
    u16 mapView[0x100];
    u8 playerPartyCount;
    struct Pokemon playerParty[PARTY_SIZE];
    u32 money;
    u16 coins;
    u16 FreeSaveBlockSpace; // registered for use with SELECT button
    struct ItemSlot pcItems[PC_ITEMS_COUNT];
    struct ItemSlot bagPocket_Items[BAG_ITEMS_COUNT];
    struct ItemSlot bagPocket_KeyItems[BAG_KEYITEMS_COUNT];
    struct ItemSlot bagPocket_PokeBalls[BAG_POKEBALLS_COUNT];
    u8 bagPocket_TMHMOwnedFlags[26]; //allow for a total of 208 TMs/HMs
    struct ItemSlot bagPocket_Berries[BAG_BERRIES_COUNT];
    struct ItemSlot bagPocket_Medicine[BAG_MEDICINE_COUNT];
    struct ItemSlot bagPocket_BattleItems[BAG_BATTLEITEMS_COUNT];
    struct ItemSlot bagPocket_PowerUp[BAG_POWERUP_COUNT];
    struct ItemSlot bagPocket_TypeItems[BAG_TYPEITEMS_COUNT];
    struct ItemSlot bagPocket_MegaStones[BAG_MEGASTONES_COUNT];
    struct Pokeblock pokeblocks[POKEBLOCKS_COUNT];
    u16 berryBlenderRecords[3];
    #ifndef FREE_MATCH_CALL
    u16 trainerRematchStepCounter;
    u8 trainerRematches[MAX_REMATCH_ENTRIES];
    #endif
    struct ObjectEvent objectEvents[OBJECT_EVENTS_COUNT];
    struct ObjectEventTemplate objectEventTemplates[OBJECT_EVENT_TEMPLATES_COUNT];
    u8 flags[NUM_FLAG_BYTES];
    u16 vars[VARS_COUNT];
    u32 gameStats[NUM_GAME_STATS];
    struct BerryTree berryTrees[BERRY_TREES_COUNT];
    struct SecretBase secretBases[SECRET_BASES_COUNT];
    u8 playerRoomDecorations[DECOR_MAX_PLAYERS_HOUSE];
    u8 playerRoomDecorationPositions[DECOR_MAX_PLAYERS_HOUSE];
    u8 decorationDesks[10];
    u8 decorationChairs[10];
    u8 decorationPlants[10];
    u8 decorationOrnaments[30];
    u8 decorationMats[30];
    u8 decorationPosters[10];
    u8 decorationDolls[40];
    u8 decorationCushions[10];
    u8 FreeSaveBlockSpace2[2]; //To Utilize
    TVShow tvShows[TV_SHOWS_COUNT];//900 bytes
    PokeNews pokeNews[POKE_NEWS_COUNT];
    struct GabbyAndTyData gabbyAndTyData;
    u16 easyChatProfile[EASY_CHAT_BATTLE_WORDS_COUNT];
    u16 easyChatBattleStart[EASY_CHAT_BATTLE_WORDS_COUNT];
    u16 easyChatBattleWon[EASY_CHAT_BATTLE_WORDS_COUNT];
    u16 easyChatBattleLost[EASY_CHAT_BATTLE_WORDS_COUNT];
    struct MailStruct mail[MAIL_COUNT];
    u8 additionalPhrases[8]; // bitfield for 33 additional phrases in easy chat system
    OldMan oldMan;
    struct EasyChatPair easyChatPairs[5]; //Dewford trend [0] and some other stuff
    struct ContestWinner contestWinners[NUM_CONTEST_WINNERS]; // see CONTEST_WINNER_*
    struct DayCare daycare;
    #ifndef FREE_LINK_BATTLE_RECORDS
    struct LinkBattleRecords linkBattleRecords;
    #endif
    u8 giftRibbons[GIFT_RIBBONS_COUNT];
    struct Roamer roamer;
    u8 dexSeen[DEX_FLAGS_NO];
    u8 dexCaught[DEX_FLAGS_NO];    
    #ifndef FREE_TRAINER_HILL
    u32 trainerHillTimes[4];
    #endif
    struct RecordMixingGift recordMixingGift;
    LilycoveLady lilycoveLady;
    struct TrainerNameRecord trainerNameRecords[20];
    #ifndef FREE_TRAINER_HILL
    struct SaveTrainerHill trainerHill;
    #endif
    struct WaldaPhrase waldaPhrase;
    u16 registeredItemUp;
    u16 registeredItemDown;
    u16 registeredItemLeft;
    u16 registeredItemRight;
};

extern struct SaveBlock1* gSaveBlock1Ptr;

struct MapPosition
{
    s16 x;
    s16 y;
    s8 height;
};

struct TradeRoomPlayer
{
    u8 playerId;
    u8 isLocalPlayer;
    u8 c;
    u8 facing;
    struct MapPosition pos;
    u16 field_C;
};

#define PLTT_SIZEOF(n) ((n) * sizeof(u16))
#define IS_SHINY_PLACEHOLDER FALSE
#define IS_ALPHA_PLACEHOLDER FALSE

#ifdef DEBUG_BUILD
#define DebugPrint(...)                              \
    do {                                             \
        if (FlagGet(FLAG_MGBA_PRINT_ENABLED)) {      \
            mgba_printf(MGBA_LOG_WARN, __VA_ARGS__); \
        }                                            \
    } while (0)
#else
// When DEBUG_BUILD is OFF, macro does nothing.
#define DebugPrint(...)
#endif

#define DebugPrintCry(...)                           \
    do {                                             \
        mgba_printf(MGBA_LOG_WARN, __VA_ARGS__); \
    } while (0)
#else

#endif // GUARD_GLOBAL_H
