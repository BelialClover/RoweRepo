#ifndef GUARD_POKEMON_H
#define GUARD_POKEMON_H

#include "constants/pokemon.h"
#include "constants/species.h"
#include "sprite.h"
#include "constants/region_map_sections.h"
#include "constants/pokemon_config.h"
#include "constants/map_groups.h"

#define OUTBREAK_NONE               0
#define OUBREAK_LAPRAS_ICEFALL_CAVE 1
#define NUM_OUTBREAKS               OUBREAK_LAPRAS_ICEFALL_CAVE + 1

#define MAX_BEAUTY      255
#define MAX_IVS         31
#define EVENT_LEGAL     1
#define NEW_PERSONALITY 1
#define MON_OBEDIENCE   TRUE

struct BoxPokemon
{
    // Words 1 & 2: PID + Trainer ID
    u32 personality;
    u32 otId;

    // Words 3-5: Pokémon nickname (12 chars)
    u8 nickname[POKEMON_NAME_LENGTH];

    // Word 6: Species + Experience points (used to derive level)
    u32 move1:10;
    u32 experience:21;
    u32 exiolite:1;

    // Words 7 & 8: moves, language, gender, friendship, Pokérus, ppBonuses
    u32 move2:10;
    u32 move3:10;
    u32 pokerus:1;
    u32 isAlpha:1;
    u32 friendship:8;
    u32 seasonCaught:2;

    u32 species:12;
    u32 formId:5;
    u32 move4:10;
    u32 hpType:5; //Will be used for tera type too

    // Words 9 - 11: EV's
    u8 hpEV;
    u8 attackEV;
    u8 defenseEV;
    u8 speedEV;
    u8 spAttackEV;
    u8 spDefenseEV;

    // Word 12: miscellaneous data; item, nature, Egg and origin data
    u32 heldItem:10;
    u32 nature:5;
    u32 isEgg:1;
    u32 metLevel:7;
    u32 pokeball:5; //31 balls
    u32 style:3;
    u32 isShiny:1;

    // Words 13 & 14: Trainer name + met location
    u8 metLocation;
    u8 otName[PLAYER_NAME_LENGTH];

    u8 markings:4;
    u8 abilityNum:2;
    u8 otGender:1;
    u8 isEventMon:1;
};

#define STYLE_BALANCED     0
#define STYLE_DISRUPTOR    1
#define STYLE_TANK         2
#define STYLE_STRIKER      3
#define STYLE_SPEEDSTER    4
#define STYLE_BRUISER      5
#define STYLE_JUGGERNAUT   6
#define STYLE_ALL_ROUNDER  7
#define NUM_STYLES         8

#define STYLE_DISRUPTOR_LEVEL    15
#define STYLE_TANK_LEVEL         23
#define STYLE_STRIKER_LEVEL      31
#define STYLE_SPEEDSTER_LEVEL    39
#define STYLE_BRUISER_LEVEL      47
#define STYLE_JUGGERNAUT_LEVEL   55
#define STYLE_ALL_ROUNDER_LEVEL  63

struct Pokemon
{
    struct BoxPokemon box;
    u8 pp[MAX_MON_MOVES];
    u32 status;
    u8 level;
    u8 mail;
    u16 hp;
    u16 maxHP;
    u16 attack;
    u16 defense;
    u16 speed;
    u16 spAttack;
    u16 spDefense;
};

struct CompressedBattlemon
{
    /* 0x00 */ u16 species;
    /* 0x02 */ u16 heldItem:10;
    /* 0x02 */ u16 nature:5;
    /* 0x02 */ u16 exiolite:1;
    /* 0x04 */ u32 hpIV:5;
    /* 0x04 */ u32 attackIV:5;
    /* 0x04 */ u32 defenseIV:5;
    /* 0x04 */ u32 spAttackIV:5;
    /* 0x04 */ u32 spDefenseIV:5;
    /* 0x04 */ u32 speedIV:5;
    /* 0x04 */ u32 otGender:1;
    /* 0x04 */ u32 shinyness:1;
    /* 0x08 */ u8 hpEV;
    /* 0x09 */ u8 attackEV;
    /* 0x0A */ u8 defenseEV;
    /* 0x0B */ u8 speedEV;
    /* 0x0C */ u8 spAttackEV;
    /* 0x0D */ u8 spDefenseEV;
    /* 0x0E */ u8 level;
    /* 0x0F */ u32 moves1:10;
    /* 0x0F */ u32 moves2:10;
    /* 0x0F */ u32 moves3:10;
    /* 0x0F */ u32 abilityNum:2;
    /* 0x13 */ u16 moves4:10;
    /* 0x13 */ u16 pokeball:5;
    /* 0x13 */ u16 filler:1;
};

struct CompressedPlayerParty
{
    u8 trainerName[PLAYER_NAME_LENGTH + 1];
    struct CompressedBattlemon CompressedParty[PARTY_SIZE];
    u8 trainerGender:1;
    u8 trainerCostume:3;
    u8 redColor:4;
    u8 blueColor:4;
    u8 greenColor:4;
    u8 partySize:3;
    u8 title:5;
};

struct CompressedPokemon
{
    /* 0x00 */ u32 personality;
    /* 0x04 */ u32 otId;
    /* 0x08 */ u8 otName[PLAYER_NAME_LENGTH];
    /* 0x10 */ u16 species:11;
    /* 0x10 */ u16 formId:5;
    /* 0x10 */ u16 heldItem:10;
    /* 0x13 */ u16 nature:5;
    /* 0x10 */ u16 exiolite:1;
    /* 0x14 */ u32 hpIV:5;
    /* 0x14 */ u32 attackIV:5;
    /* 0x14 */ u32 defenseIV:5;
    /* 0x14 */ u32 spAttackIV:5;
    /* 0x14 */ u32 spDefenseIV:5;
    /* 0x14 */ u32 speedIV:5;
    /* 0x14 */ u32 otGender:1;
    /* 0x14 */ u32 unused1:1;
    /* 0x18 */ u8 hpEV;
    /* 0x19 */ u8 attackEV;
    /* 0x1A */ u8 defenseEV;
    /* 0x1B */ u8 speedEV;
    /* 0x1C */ u8 spAttackEV;
    /* 0x1D */ u8 spDefenseEV;
    /* 0x1E */ u8 level:7;
    /* 0x14 */ u8 unused2:1;
    /* 0x1F */ u32 moves1:10;
    /* 0x1F */ u32 moves2:10;
    /* 0x1F */ u32 moves3:10;
    /* 0x1F */ u32 abilityNum:2;
    /* 0x1F */ u16 moves4:10;
    /* 0x12 */ u16 pokeball:5;
    /* 0x1F */ u16 unused3:1;
    /* 0x27 */ 
};

struct Unknown_806F160_Struct
{
    u32 field_0_0:4;
    u32 field_0_1:4;
    u32 field_1:8;
    u16 magic:8;
    u32 field_3_0:4;
    u32 field_3_1:4;
    void *bytes;
    u8 **byteArrays;
    struct SpriteTemplate *templates;
    struct SpriteFrameImage *frameImages;
};

struct BattlePokemon
{
    u16 species:11;
	u16 formId:5;
    u16 attack;
    u16 defense;
    u16 speed;
    u16 spAttack;
    u16 spDefense;
    u16 moves[MAX_MON_MOVES];
    u32 hpIV:5;
    u32 attackIV:5;
    u32 defenseIV:5;
    u32 speedIV:5;
    u32 spAttackIV:5;
    u32 spDefenseIV:5;
    u32 abilityNum:2;
    s8 statStages[NUM_BATTLE_STATS];
    u16 ability;
    u8 type1;
    u8 type2;
    u8 type3;
    u8 pp[MAX_MON_MOVES];
    u16 hp;
    u8 level;
    u8 friendship;
    u16 maxHP;
    u16 item;
    u8 nickname[POKEMON_NAME_LENGTH + 1];
    u8 ppBonuses;
    u8 otName[PLAYER_NAME_LENGTH + 1];
    u32 experience;
    u32 personality;
    u32 status1;
    u32 status2;
    u32 otId;
    u8 nature;
    u8 hpType;
    u8 wasalreadytotemboosted:1;
    u8 deltaBoost:1;
    u8 filler:6;
};

#define NUM_ABILITIES_PER_SPECIES 4
struct BaseStats
{
    u16 baseHP;
    u16 baseAttack;
    u16 baseDefense;
    u16 baseSpeed;
    u16 baseSpAttack;
    u16 baseSpDefense;
    u8  type1;
    u8  type2;
    u8  catchRate;
    u16 expYield;
    u16 evYield_HP:2;
    u16 evYield_Attack:2;
    u16 evYield_Defense:2;
    u16 evYield_Speed:2;
    u16 evYield_SpAttack:2;
    u16 evYield_SpDefense:2;
    u16 item1;
    u16 item2;
    u8  genderRatio;
    u8  eggCycles;
    u8  friendship;
    u8  growthRate;
    u8  eggGroup1;
    u8  eggGroup2;
    u16 abilities[NUM_ABILITIES_PER_SPECIES - 1]; // the next ability is the hidden ability
    u16 abilityHidden;  
    u8  safariZoneFleeRate;
    u8  bodyColor:7;
    u8  noFlip:1;
    u32 flags;
    u16 firstStage;
    u16 shopPrice;       //Money
    u16 shopPrice_BP;    //Battle Points
    u16 shopPrice_Coins; //Casino Coins
    u8  cry_Type;
    const union AnimCmd *const *frontAnimFrames;
    u8  frontAnimId;
    u8  frontAnimDelay;
};

#include "constants/battle_config.h"
struct BattleMove
{
    u16 effect;
    u8  power;
    u8  type;
    u8  accuracy;
    u8  pp;
    u8  secondaryEffectChance;
    u8  target;
    s8  priority;
    u32 flags;
    u8  split;
    u8  argument;
};

enum{
    SIGNATURE_MOD_NONE,                 //No modification
    SIGNATURE_MOD_OTHER,                //Varies depending on the move
    SIGNATURE_MOD_POWER,                //Changes the move power
    SIGNATURE_MOD_ACCURACY,             //Changes the move accuracy
    SIGNATURE_MOD_TYPE,                 //Changes the move type
    SIGNATURE_MOD_EFFECT_CHANCE,        //Changes the move secondary effect chance
    SIGNATURE_MOD_DAMAGE_STAT,          //Changes the move damage stat, includes non-damaging stats
    SIGNATURE_MOD_PRIORITY,             //Changes the move priority with a condition
    SIGNATURE_MOD_SPEED,                //Boost the speed of the user when using this move by the variable
    SIGNATURE_MOD_PSS_CHANGE,           //Changes the move between Physical, Special and the highest stat
    SIGNATURE_MOD_SE_AGAINST_TYPE,      //Makes the move super effective against a type
    SIGNATURE_MOD_NEUTRAL_AGAINST_TYPE, //Makes the move neutral against a type
    SIGNATURE_MOD_SECOND_TYPE,          //Gives the move a second type
    SIGNATURE_MOD_MODIFY_FIELD,         //Modifies the field to add hazards, screens, etc
    SIGNATURE_MOD_ATTACKER_STAT_UP,     //Sets the attacker stat up
    SIGNATURE_MOD_TARGET_STAT_DOWN,     //Sets the target stat down
    SIGNATURE_MOD_SECONDARY_EFFECT,     //Sets a secondary effect to the move
    SIGNATURE_MOD_DEFENSE_STAT,         //Changes the stat used for defense, includes non-defensive stats
    SIGNATURE_MOD_PENETRATING,          //Ignores the target defense stat changes if they are above the normal ones
    SIGNATURE_STAT_STAGES_IGNORED,      //Ignores the target stat changes
    SIGNATURE_MOD_HIT_AIRBONE_TARGETS,  //Makes the move hit airbone targets
    SIGNATURE_MOD_ADD_FLAG,             //Gives the move an specific flag
    SIGNATURE_MOD_REMOVE_FLAG,          //Removes an Specific Flag from a move
    SIGNATURE_MOD_EFFECT_CHANGE,        //Changes the effect of the move
    SIGNATURE_MOD_CHANGE_TARGET,        //Changes the target of the move
    SIGNATURE_MOD_CRITICAL,             //Makes the move have high critical if you add a var of 0 and always critical if you add a var of 1
    SIGNATURE_MOD_MULTI_HIT_MIN_TIMES,  //Makes multi-hit moves hit at minimum X times
    SIGNATURE_MOD_MULTI_HIT_ALWAYS,
    SIGNATURE_MOD_MULTI_HIT_MAX_TIMES,
};

enum{
    FIELD_EFFECT_NONE,              //No effect
    FIELD_OPPONET_SET_STEALTH_ROCK, //Sets Stealth Rock
    FIELD_OPPONET_SET_SPIKES,       //Sets a layer of Spikes
    FIELD_OPPONET_SET_TOXIC_SPIKES, //Sets a layer of Toxic Spikes
    FIELD_OPPONET_SET_STICKY_WEB,   //Sets Sticky Web
    FIELD_OPPONENT_REMOVE_SCREENS,  //Removes screens on the attacker side                      //Not Done Yet
    FIELD_SELF_REMOVE_HAZARDS,      //Removes the hazards on the attacker side                  //Not Done Yet
    FIELD_SELF_SET_TAILWIND,        //Sets Tailwind on your side
    FIELD_SELF_SET_REFLECT,         //Sets Reflect on your side                                 //Not Done Yet
    FIELD_SELF_SET_LIGHT_SCREEN,    //Sets Light Screen on your side                            //Not Done Yet
    FIELD_SELF_SET_AURORA_VEIL,     //Sets Aurora Veil on your side (if the weather is Hail)    //Not Done Yet
    FIELD_SET_TRICK_ROOM,           //Sets Trick Room on the field                              //Not Done Yet
    FIELD_SET_INVERSE_ROOM,         //Sets Inverse Room on the field                            //Not Done Yet
    FIELD_SET_WEATHER_SUN,          //Sets Sun on the field for 5 turns
    FIELD_SET_WEATHER_RAIN,         //Sets Rain on the field for 5 turns
    FIELD_SET_WEATHER_HAIL,         //Sets Hail on the field for 5 turns
    FIELD_SET_WEATHER_SANDSTORM,    //Sets Hail on the field for 5 turns
    FIELD_SET_TERRAIN_ELECTRIC,     //Sets Electric Terrain on the field for 5 turns
    FIELD_SET_TERRAIN_GRASS,        //Sets Grassy Terrain on the field for 5 turns
    FIELD_SET_TERRAIN_MISTY,        //Sets Misty Terrain on the field for 5 turns
    FIELD_SET_TERRAIN_PSYCHIC,      //Sets Psychic Terrain on the field for 5 turns
    FIELD_REMOVE_TERRAIN,           //Removes the terrain on the field                          //Not Done Yet
    FIELD_REMOVE_WEATHER,           //Removes the weather on the field                          //Not Done Yet
    FIELD_CHANGE_FIELD_SIDE,        //Court Change Effect                                       //Not Done Yet
};

enum{
    SIGNATURE_SECONDARY_EFFECT_NONE,                        //No secondary effect
    SIGNATURE_SECONDARY_EFFECT_POISON,                      //Poisons the target
    SIGNATURE_SECONDARY_EFFECT_TOXIC,                       //Badly poisons the target
    SIGNATURE_SECONDARY_EFFECT_PARALYSIS,                   //Paralyzes the target
    SIGNATURE_SECONDARY_EFFECT_BURN,                        //Burns the target
    SIGNATURE_SECONDARY_EFFECT_FREEZE,                      //Freezes the target
    SIGNATURE_SECONDARY_EFFECT_FROSTBITE,                   //Frostbite the target
    SIGNATURE_SECONDARY_EFFECT_SLEEP,                       //Puts the target to sleep
    SIGNATURE_SECONDARY_EFFECT_CONFUSION,                   //Confuses the target
    SIGNATURE_SECONDARY_EFFECT_INFATUATION,                 //Infatuates the target
    SIGNATURE_SECONDARY_EFFECT_FLINCH,                      //Makes the target flinch
    SIGNATURE_SECONDARY_EFFECT_CURSE,                       //Curses the target
    SIGNATURE_SECONDARY_EFFECT_CURSE_SELF,                  //Curses the target
    SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,                  //Leech Seeds the target
    SIGNATURE_SECONDARY_EFFECT_REMOVE_STAT_CHANGES,         //Removes the stat changes of the target
    SIGNATURE_SECONDARY_EFFECT_REVERTS_STAT_CHANGES,        //Topsy-Turvy Effect
    SIGNATURE_SECONDARY_EFFECT_STEAL_POSITIVE_STAT_CHANGES, //Spectral Thief Effect
    SIGNATURE_SECONDARY_EFFECT_INFESTATION,                 //Infests the target
    SIGNATURE_SECONDARY_EFFECT_PERISH_SONG,                 //Perish song effect to the target
    SIGNATURE_SECONDARY_EFFECT_TAUNT,                       //Taunt effect to the target
    SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,             //Gives the Pokemon a third type
    SIGNATURE_SECONDARY_EFFECT_DISABLE,                     //Disable effect to the target
    SIGNATURE_SECONDARY_EFFECT_CHARGE_USER,                 //Charges the user
    SIGNATURE_SECONDARY_EFFECT_DRAIN,                       //Adds a Drain effect to the move
    SIGNATURE_SECONDARY_EFFECT_CURE,                        //Adds a Cure effect to the move
    SIGNATURE_SECONDARY_EFFECT_RECKOIL,                     //Adds a Reckoil effect to the move
    SIGNATURE_SECONDARY_EFFECT_HEAL_STATUS,                 //Heals the status of the user when the move is used
    SIGNATURE_SECONDARY_EFFECT_SET_HEAL_BLOCK,              //Blocks healing to the target
    SIGNATURE_SECONDARY_EFFECT_USE_NON_GHOST_CURSE          //Boosts Atk, Def and lowers Speed
};

enum{
    SIGNATURE_PRIORITY_ALWAYS,              //Always has priority
    SIGNATURE_PRIORITY_IN_CONDITIONS,       //Has priority in certain conditions
    SIGNATURE_PRIORITY_WHEN_BELOW_HEALTH,   //Has priority when the user is below a certain health
    SIGNATURE_PRIORITY_WHEN_ABOVE_HEALTH,   //Has priority when the user is above a certain health
};

enum{
    SIGNATURE_MOVE_POWER_ALWAYS,              //Always has move power
    SIGNATURE_MOVE_POWER_IN_CONDITIONS,       //Has move power in certain conditions
    SIGNATURE_MOVE_POWER_WHEN_BELOW_HEALTH,   //Has move power when the user is below a certain health
    SIGNATURE_MOVE_POWER_WHEN_ABOVE_HEALTH,   //Has move power when the user is above a certain health
};

enum{
    SIGNATURE_POWER_CHANGE_ALWAYS,              //Always has priority
    SIGNATURE_POWER_CHANGE_IN_CONDITIONS,       //Has priority in certain conditions
    SIGNATURE_POWER_CHANGE_WHEN_BELOW_HEALTH,   //Has priority when the user is below a certain health
    SIGNATURE_POWER_CHANGE_WHEN_ABOVE_HEALTH,   //Has priority when the user is above a certain health
};

enum{
    SIGNATURE_CONDITION_WEATHER_ANY,       //Has priority in any weather
    SIGNATURE_CONDITION_WEATHER_SUN,       //Has priority in Sun
    SIGNATURE_CONDITION_WEATHER_RAIN,      //Has priority in Rain
    SIGNATURE_CONDITION_WEATHER_SAND,      //Has priority in Sand
    SIGNATURE_CONDITION_WEATHER_HAIL,      //Has priority in Hail
    SIGNATURE_CONDITION_TERRAIN_ANY,       //Has priority in any terrain
    SIGNATURE_CONDITION_TERRAIN_ELECTRIC,  //Has priority in Electric Terrain
    SIGNATURE_CONDITION_TERRAIN_GRASS,     //Has priority in Grassy Terrain
    SIGNATURE_CONDITION_TERRAIN_MISTY,     //Has priority in Misty Terrain
    SIGNATURE_CONDITION_TERRAIN_PSYCHIC,   //Has priority in Psychic Terrain
    SIGNATURE_CONDITION_INVERSE_ROOM,      //Has priority in Inverse Room
    SIGNATURE_CONDITION_TRICK_ROOM,        //Has priority in Trick Room
    SIGNATURE_CONDITION_TARGET_HAS_STATUS, //Power boost if target has a status condition
};

#define SIGNATURE_MOVE_DESCRIPTION_TEXT_LENGTH 120
#define SIGNATURE_MOVE_SUMMARY_SCREEN_DESCRIPTION_TEXT_LENGTH 240

#define SIGNATURE_MOVE_EFFECT_1    0
#define SIGNATURE_MOVE_EFFECT_2    1
#define SIGNATURE_MOVE_EFFECT_3    2
#define SIGNATURE_MOVE_EFFECT_4    3
#define SIGNATURE_MOVE_EFFECT_5    4
#define SIGNATURE_MOVE_EFFECT_6    5
#define MAX_SIGNATURE_MOVE_EFFECTS 6

struct SignatureMoveEffect
{
    u8  modification;
    u32 variable;
    u8  argument;
    u8  chance;
};

struct SignatureMove
{
    u16 move;
    const u8 summaryScreen_description[SIGNATURE_MOVE_SUMMARY_SCREEN_DESCRIPTION_TEXT_LENGTH];
    struct SignatureMoveEffect moveEffect[MAX_SIGNATURE_MOVE_EFFECTS];
    u8 unlockedLevel;
};

#define COLOR_MODIFICATION_TYPE_DISABLED    0 // No color modification
#define COLOR_MODIFICATION_TYPE_PERSONALITY 1 // Every Pokemon has a different color
#define COLOR_MODIFICATION_TYPE_PLAYER      2 // Pokemon has the same color as the player
#define COLOR_MODIFICATION_TYPE_SEASON      3 // Pokemon changes color depending on the Season
#define COLOR_MODIFICATION_TYPE_SEASON_2    4 // Pokemon changes color depending on the Season

#define COLOR_MODIFICATION_RESTRICTION_NONE            0 // No restriction
#define COLOR_MODIFICATION_RESTRICTION_SHINY_ONLY      1 // Only shiny Pokemon
#define COLOR_MODIFICATION_RESTRICTION_NON_SHINY_ONLY  2 // Only non-shiny Pokemon
#define COLOR_MODIFICATION_RESTRICTION_EVENT_ONLY      3 // Only event Pokemon

#define COLOR_INDEX_NONE 0

struct PokemonColorModification
{
    u8 type;
    u8 restriction;
    //Color 1
    u8 index_1;      // Lowest Color
    u8 index_2;      // Low Color
    u8 index_3;      // Mid-Low Color
    u8 index_4;      // Middle Color
    u8 index_5;      // Mid-High Color
    u8 index_6;      // Darkest Color
    //Color 2
    u8 index2_1;     // Lowest Color
    u8 index2_2;     // Low Color
    u8 index2_3;     // Mid-Low Color
    u8 index2_4;     // Middle Color
    u8 index2_5;     // Mid-High Color
    u8 index2_6;     // Darkest Color
    bool8 disabledforNPCs;
    bool8 useDoubleColor;
    bool8 disableOnFollowers;
};

struct SpindaSpot
{
    u8 x, y;
    u16 image[16];
};

struct LevelUpMove
{
    u16 move;
    u16 level;
};

struct Evolution
{
    u16 method;
    u16 param;
    u16 targetSpecies;
};

struct SpeciesList
{
    u16 species;
};

enum{
    CRY_GENERIC,
    CRY_KYOGRE,
    CRY_GROUDON,
    CRY_RAYQUAZA,
    CRY_MANAPHY,
    CRY_PIKACHU,
    CRY_ROTOM,
    CRY_HOOPA,
    CRY_DARKRAI,
    CRY_RHYHORN,
    //Fairy
    CRY_FAIRY_SMALL,
    CRY_FAIRY_MEDIUM,
    CRY_FAIRY_BIG,
    //Fish
    CRY_FISH_SMALL,
    CRY_FISH_MEDIUM,
    CRY_FISH_BIG,
    //Mineral
    CRY_MINERAL_SMALL,
    CRY_MINERAL_MEDIUM,
    CRY_MINERAL_BIG,
    //Dragon
    CRY_DRAGON_SMALL,
    CRY_DRAGON_MEDIUM,
    CRY_DRAGON_BIG,
    //Bird
    CRY_BIRD_SMALL,
    CRY_BIRD_MEDIUM,
    CRY_BIRD_BIG,
    //Turtle
    CRY_TURTLE_SMALL,
    CRY_TURTLE_MEDIUM,
    CRY_TURTLE_BIG,
    //Bug
    CRY_BUG_SMALL,
    CRY_BUG_MEDIUM,
    CRY_BUG_BIG,
    //Grass
    CRY_GRASS_SMALL,
    CRY_GRASS_MEDIUM,
    CRY_GRASS_BIG,
    //Monster
    CRY_MONSTER_SMALL,
    CRY_MONSTER_MEDIUM,
    CRY_MONSTER_BIG,
    //Dog
    CRY_DOG_SMALL,
    CRY_DOG_MEDIUM,
    CRY_DOG_BIG,
    //Cat
    CRY_CAT_SMALL,
    CRY_CAT_MEDIUM,
    CRY_CAT_BIG,
    //Monkey
    CRY_MONKEY_SMALL,
    CRY_MONKEY_MEDIUM,
    CRY_MONKEY_BIG,
    //Fighting
    CRY_FIGHTING_SMALL,
    CRY_FIGHTING_MEDIUM,
    CRY_FIGHTING_BIG,
    //Roddent
    CRY_RODDENT_SMALL,
    CRY_RODDENT_MEDIUM,
    CRY_RODDENT_BIG,
    //Crab
    CRY_CRAB_SMALL,
    CRY_CRAB_MEDIUM,
    CRY_CRAB_BIG,
    //Dinosaur
    CRY_DINOSAUR_SMALL,
    CRY_DINOSAUR_MEDIUM,
    CRY_DINOSAUR_BIG,
    //Bat
    CRY_BAT_SMALL,
    CRY_BAT_MEDIUM,
    CRY_BAT_BIG,
    //Snake
    CRY_SNAKE_SMALL,
    CRY_SNAKE_MEDIUM,
    CRY_SNAKE_BIG,
    //Frog
    CRY_FROG_SMALL,
    CRY_FROG_MEDIUM,
    CRY_FROG_BIG,
    //Flower
    CRY_FLOWER_SMALL,
    CRY_FLOWER_MEDIUM,
    CRY_FLOWER_BIG,
    //Squid
    CRY_SQUID_SMALL,
    CRY_SQUID_MEDIUM,
    CRY_SQUID_BIG,
    //Elephant
    CRY_ELEPHANT_SMALL,
    CRY_ELEPHANT_MEDIUM,
    CRY_ELEPHANT_BIG,
    //Mollusk
    CRY_MOLLUSK_SMALL,
    CRY_MOLLUSK_MEDIUM,
    CRY_MOLLUSK_BIG,
    //Imp
    CRY_IMP_SMALL,
    CRY_IMP_MEDIUM,
    CRY_IMP_BIG,
    //Crocodile
    CRY_CROCODILE_SMALL,
    CRY_CROCODILE_MEDIUM,
    CRY_CROCODILE_BIG,
    //Lizard
    CRY_LIZARD_SMALL,
    CRY_LIZARD_MEDIUM,
    CRY_LIZARD_BIG,
    //Lizard
    CRY_FOX_SMALL,
    CRY_FOX_MEDIUM,
    CRY_FOX_BIG,
    //Psy
    CRY_PSY_SMALL,
    CRY_PSY_MEDIUM,
    CRY_PSY_BIG,
    //Duck
    CRY_DUCK_SMALL,
    CRY_DUCK_MEDIUM,
    //Pig
    CRY_PIG_SMALL,
    CRY_PIG_MEDIUM,
    //Horse
    CRY_HORSE_SMALL,
    CRY_HORSE_MEDIUM,
    //Thing
    CRY_THING_SMALL,
    CRY_THING_MEDIUM,
    //Misc
    CRY_BABY,
    CRY_BUTTERFLY,
    CRY_MOLE,
    CRY_CHICKEN,

    CRY_EGG_GROUP_WATER_1,
    CRY_EGG_GROUP_WATER_2,
    CRY_EGG_GROUP_WATER_3,
    CRY_EGG_GROUP_DRAGON,
    CRY_EGG_GROUP_GRASS,
    CRY_EGG_GROUP_BUG,
    CRY_EGG_GROUP_MINERAL,
    CRY_EGG_GROUP_FIELD,
    CRY_EGG_GROUP_HUMAN_LIKE,
    CRY_EGG_GROUP_AMORPHOUS,
    CRY_EGG_GROUP_FAIRY,
    CRY_EGG_GROUP_DITTO,
    CRY_EGG_GROUP_MONSTER,
    CRY_EGG_GROUP_FLYING,
    NUM_CRY_TYPES,
};

#define TRAINER_EXP_BABY_MON       0 //Ex: Pichu, Igglybuff
#define TRAINER_EXP_FIRST_STAGE    1 //Ex: Bulbasaur, Charmander
#define TRAINER_EXP_SECOND_STAGE   2 //Ex: Gloom, Weepinbell
#define TRAINER_EXP_THIRD_STAGE    3 //Ex: Blaziken, Swampert
#define TRAINER_EXP_SINGLE_STAGE   4 //Ex: Skarmory, Spinda
#define TRAINER_EXP_MEGA           5 //Ex: Mega Mawile, Mega Blaziken
#define TRAINER_EXP_LEGENDARY      6 //Ex: Deoxys, Jirachi
#define TRAINER_EXP_MEGA_LEGENDARY 7 //Ex: Mega Rayquaza, Mega Latias

extern u8 gPlayerPartyCount;
extern struct Pokemon gPlayerParty[PARTY_SIZE];
extern u8 gEnemyPartyCount;
extern struct Pokemon gEnemyParty[PARTY_SIZE];
extern struct SpriteTemplate gMultiuseSpriteTemplate;

extern const struct BattleMove gBattleMoves[];
extern const struct SignatureMove gSignatureMoveList[];
extern const u8 gFacilityClassToPicIndex[];
extern const u8 gFacilityClassToTrainerClass[];
extern const struct BaseStats gBaseStats[];
extern const struct OutbreakData gOutBreaks[];
extern const struct BaseStats gVanillaBaseStats[];
extern const struct BaseStats gSpecialFormsBaseStats[];
extern const struct BaseStats gDeltaBaseStats[];

#define NUM_UNOBTAINABLE_MONS 34
extern const u16 gUnobtainableSpeciesList[NUM_UNOBTAINABLE_MONS];

extern const struct PokemonColorModification gColorModification[];
extern const u8 *const gItemEffectTable[];
extern const struct Evolution gEvolutionTable[][EVOS_PER_MON];
extern const struct SpeciesList gFirstStageTable[POKEMON_FAMILIES];
extern const u32 gExperienceTables[][MAX_LEVEL + 1];
extern const struct LevelUpMove *const gLevelUpLearnsets[];
extern const u8 gPPUpGetMask[];
extern const u8 gPPUpSetMask[];
extern const u8 gPPUpAddMask[];
extern const u8 gStatStageRatios[MAX_STAT_STAGE + 1][2];
extern const u16 gLinkPlayerFacilityClasses[];
extern const struct SpriteTemplate gBattlerSpriteTemplates[];
extern const s8 gNatureStatTable[][5];
extern const u16 gSpeciesToNationalPokedexNum[NUM_SPECIES];

void ZeroBoxMonData(struct BoxPokemon *boxMon);
void ZeroMonData(struct Pokemon *mon);
void ZeroPlayerPartyMons(void);
void ZeroEnemyPartyMons(void);
void CreateMon(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 hasFixedPersonality, u32 fixedPersonality, u8 otIdType, u32 fixedOtId, u8 formId);
void CreateBoxMon(struct BoxPokemon *boxMon, u16 species, u8 level, u8 fixedIV, u8 hasFixedPersonality, u32 fixedPersonality, u8 otIdType, u32 fixedOtId, u8 formId);
void CreateMonWithNature(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 nature, u8 formId);
void CreateMonWithGenderNatureLetter(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 gender, u8 nature, u8 unownLetter, u8 formId);
void CreateMaleMon(struct Pokemon *mon, u16 species, u8 level, u8 formId);
void CreateMonWithIVsPersonality(struct Pokemon *mon, u16 species, u8 level, u32 ivs, u32 personality, u8 formId);
void CreateMonWithIVsOTID(struct Pokemon *mon, u16 species, u8 level, u8 *ivs, u32 otId, u8 formId);
void CreateMonWithEVSpread(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 evSpread, u8 formId);
void CreateBattleTowerMon(struct Pokemon *mon, struct BattleTowerPokemon *src);
void CreateBattleTowerMon2(struct Pokemon *mon, struct BattleTowerPokemon *src, bool8 lvl50);
void CreateApprenticeMon(struct Pokemon *mon, const struct Apprentice *src, u8 monId);
void CreateMonWithEVSpreadNatureOTID(struct Pokemon *mon, u16 species, u8 level, u8 nature, u8 fixedIV, u8 evSpread, u32 otId, u8 formId);
void sub_80686FC(struct Pokemon *mon, struct BattleTowerPokemon *dest);
void CreateObedientMon(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 hasFixedPersonality, u32 fixedPersonality, u8 otIdType, u32 fixedOtId, u8 formId);
bool8 sub_80688F8(u8 caseId, u8 battlerId);
u16 GetUnionRoomTrainerPic(void);
u16 GetUnionRoomTrainerClass(void);
void CreateObedientEnemyMon(void);
void CalculateMonStats(struct Pokemon *mon);
void CalculateMonStatsWithoutRestoringPP(struct Pokemon *mon);
void CalculateMonStatsMaster(struct Pokemon *mon, bool8 shouldRestorePP, bool8 isEnemyMon);
void CalculateTrainerMonStats(struct Pokemon *mon, s32 realLevel);
void BoxMonToMon(const struct BoxPokemon *src, struct Pokemon *dest);
u8 GetLevelFromMonExp(struct Pokemon *mon);
u8 GetLevelFromBoxMonExp(struct BoxPokemon *boxMon);
u16 GiveMoveToMon(struct Pokemon *mon, u16 move);
u16 GiveMoveToBattleMon(struct BattlePokemon *mon, u16 move);
void SetMonMoveSlot(struct Pokemon *mon, u16 move, u8 slot);
void SetBattleMonMoveSlot(struct BattlePokemon *mon, u16 move, u8 slot);
void GiveMonInitialMoveset(struct Pokemon *mon);
void GiveBoxMonInitialMoveset(struct BoxPokemon *boxMon);
u16 MonTryLearningNewMove(struct Pokemon *mon, bool8 firstMove);
void DeleteFirstMoveAndGiveMoveToMon(struct Pokemon *mon, u16 move);
void DeleteFirstMoveAndGiveMoveToBoxMon(struct BoxPokemon *boxMon, u16 move);

u8 CountAliveMonsInBattle(u8 caseId);
#define BATTLE_ALIVE_EXCEPT_ACTIVE  0
#define BATTLE_ALIVE_ATK_SIDE       1
#define BATTLE_ALIVE_DEF_SIDE       2

u8 GetDefaultMoveTarget(u8 battlerId);
u8 GetMonGender(struct Pokemon *mon);
u8 GetBoxMonGender(struct BoxPokemon *boxMon);
u8 GetGenderFromSpeciesAndPersonality(u16 species, u32 personality);
u32 GetUnownSpeciesId(u32 personality);
void SetMultiuseSpriteTemplateToPokemon(u16 speciesTag, u8 battlerPosition, u8 formId);
void SetMultiuseSpriteTemplateToTrainerBack(u16 trainerSpriteId, u8 battlerPosition);
void SetMultiuseSpriteTemplateToTrainerFront(u16 arg0, u8 battlerPosition);

// These are full type signatures for GetMonData() and GetBoxMonData(),
// but they are not used since some code erroneously omits the third arg.
// u32 GetMonData(struct Pokemon *mon, s32 field, u8 *data);
// u32 GetBoxMonData(struct BoxPokemon *boxMon, s32 field, u8 *data);
u32 GetMonData();
u32 GetBoxMonData();

void SetMonData(struct Pokemon *mon, s32 field, const void *dataArg);
void SetBoxMonData(struct BoxPokemon *boxMon, s32 field, const void *dataArg);
void CopyMon(void *dest, void *src, size_t size);
u8 GiveMonToPlayer(struct Pokemon *mon);
u8 SendMonToPC(struct Pokemon* mon);
u8 CalculatePlayerPartyCount(void);
u8 CalculateEnemyPartyCount(void);
u8 GetMonsStateToDoubles(void);
u8 GetMonsStateToDoubles_2(void);
u16 GetAbilityBySpecies(u16 species, u8 abilityNum, u8 formId);
u16 GetMonAbility(struct Pokemon *mon);
u16 CheckForMonAbility(struct Pokemon *mon, u16 ability);
void CreateSecretBaseEnemyParty(struct SecretBase *secretBaseRecord);
u8 GetSecretBaseTrainerPicIndex(void);
u8 GetSecretBaseTrainerClass(void);
bool8 IsPlayerPartyAndPokemonStorageFull(void);
bool8 IsPokemonStorageFull(void);
void GetSpeciesName(u8 *name, u16 species);
u8 CalculatePPWithBonus(u16 move, u8 ppBonuses, u8 moveIndex);
void RemoveMonPPBonus(struct Pokemon *mon, u8 moveIndex);
void RemoveBattleMonPPBonus(struct BattlePokemon *mon, u8 moveIndex);
void PokemonToBattleMon(struct Pokemon *src, struct BattlePokemon *dst);
void CopyPlayerPartyMonToBattleData(u8 battlerId, u8 partyIndex);
bool8 ExecuteTableBasedItemEffect(struct Pokemon *mon, u16 item, u8 partyIndex, u8 moveIndex);
bool8 PokemonUseItemEffects(struct Pokemon *mon, u16 item, u8 partyIndex, u8 moveIndex, u8 e);
bool8 HealStatusConditions(struct Pokemon *mon, u32 battlePartyId, u32 healMask, u8 battlerId);
u8 GetItemEffectParamOffset(u16 itemId, u8 effectByte, u8 effectBit);
u8 *UseStatIncreaseItem(u16 itemId);
//u8 GetNature(struct Pokemon *mon);
u8 GetNature(struct Pokemon *mon, bool32 checkHidden);
u8 GetNatureFromPersonality(u32 personality);
u16 GetEvolutionTargetSpecies(struct Pokemon *mon, u8 type, u16 evolutionItem, u16 tradePartnerSpecies, u8 *targetFormId);
u16 HoennPokedexNumToSpecies(u16 hoennNum);
u16 NationalPokedexNumToSpecies(u16 nationalNum);
u16 NationalToHoennOrder(u16 nationalNum);
u16 SpeciesToNationalPokedexNum(u16 species);
u16 SpeciesToHoennPokedexNum(u16 species);
u16 HoennToNationalOrder(u16 hoennNum);
void sub_806D544(u16 species, u32 personality, u8 *dest);
void DrawSpindaSpots(u16 species, u32 personality, u8 *dest, u8 a4);
void EvolutionRenameMon(struct Pokemon *mon, u16 oldSpecies, u16 newSpecies);
u8 GetPlayerFlankId(void);
u16 GetLinkTrainerFlankId(u8 id);
s32 GetBattlerMultiplayerId(u16 a1);
u8 GetTrainerEncounterMusicId(u16 trainerOpponentId);
u16 ModifyStatByNature(u8 nature, u16 n, u8 statIndex);
void AdjustFriendship(struct Pokemon *mon, u8 event);
void MonGainEVs(struct Pokemon *mon, u16 defeatedSpecies, u8 defeatedFormId);
u16 GetMonEVCount(struct Pokemon *mon);
void RandomlyGivePartyPokerus(struct Pokemon *party);
u8 CheckPartyPokerus(struct Pokemon *party, u8 selection);
u8 CheckPartyHasHadPokerus(struct Pokemon *party, u8 selection);
void UpdatePartyPokerusTime(u16 days);
void PartySpreadPokerus(struct Pokemon *party);
bool8 TryIncrementMonLevel(struct Pokemon *mon);
//TM Move Tutor ---------------------------------------------------
u8 GetNumberOfTMMoves(struct Pokemon *mon);
u32 CanMonLearnTMHM(struct Pokemon *mon, u8 tm);
u32 CanSpeciesLearnTMHM(u16 species, u8 tm);
u8 GetTMMovesPokemon(struct Pokemon *mon, u16 *Moves);
//Move Relearner Tutor --------------------------------------------
u8 GetMoveRelearnerMoves(struct Pokemon *mon, u16 *moves, bool8 fastCalculation);
u8 GetLevelUpMovesBySpecies(u16 species, u16 *moves, u8 formId);
u8 GetNumberOfRelearnableMoves(struct Pokemon *mon);
//Egg Move Tutor --------------------------------------------------
u8 GetNumberOfEggMoves(struct Pokemon *mon);
u8 GetEggMoveTutorMoves(struct Pokemon *mon, u16 *moves);
//Normal Move Tutor --------------------------------------------------
u8 GetNumberOfTutorMoves(struct Pokemon *mon);
u8 GetMoveTutorMoves(struct Pokemon *mon, u16 *moves);
//-----------------------------------------------------------------
u16 SpeciesToPokedexNum(u16 species);
bool32 IsSpeciesInHoennDex(u16 species);
void ClearBattleMonForms(void);
u16 GetBattleBGM(void);
void PlayBattleBGM(void);
void PlayMapChosenOrBattleBGM(u16 songId);
void sub_806E694(u16 songId);
const u32 *GetMonFrontSpritePal(struct Pokemon *mon);
const u32 *GetMonSpritePal(u16 formSpeciesId, u32 otId, u32 personality, u8 isShiny);
const struct CompressedSpritePalette *GetMonSpritePalStruct(struct Pokemon *mon);
const struct CompressedSpritePalette *GetMonSpritePalStructFromOtIdPersonality(u16 species, u32 otId , u32 personality, bool8 isShiny);
bool32 IsHMMove2(u16 move);
bool8 IsMonSpriteNotFlipped(u16 species);
s8 GetMonFlavorRelation(struct Pokemon *mon, u8 flavor);
s8 GetFlavorRelationByPersonality(u32 personality, u8 flavor);
bool8 IsTradedMon(struct Pokemon *mon);
bool8 IsOtherTrainer(u32 otId, u8 *otName);
void MonRestorePP(struct Pokemon *mon);
void SetMonPreventsSwitchingString(void);
void SetWildMonHeldItem(void);
bool8 IsMonShiny(struct Pokemon *mon);
bool8 IsShinyOtIdPersonality(u32 otId, u32 personality);
const u8 *GetTrainerPartnerName(void);
void BattleAnimateFrontSprite(struct Sprite* sprite, u16 species, bool8 noCry, u8 arg3);
void DoMonFrontSpriteAnimation(struct Sprite* sprite, u16 species, bool8 noCry, u8 arg3);
void PokemonSummaryDoMonAnimation(struct Sprite* sprite, u16 species, bool8 oneFrame);
void StopPokemonAnimationDelayTask(void);
void BattleAnimateBackSprite(struct Sprite* sprite, u16 species);
u8 sub_806EF08(u8 arg0);
u8 sub_806EF84(u8 arg0, u8 arg1);
u16 sub_806EFF0(u16 arg0);
u16 FacilityClassToPicIndex(u16 facilityClass);
u16 PlayerGenderToFrontTrainerPicId(u8 playerGender);
void HandleSetPokedexFlag(u16 nationalNum, u8 caseId, u32 personality);
const u8 *GetTrainerClassNameFromId(u16 trainerId);
const u8 *GetTrainerNameFromId(u16 trainerId);
bool8 HasTwoFramesAnimation(u16 species);
struct Unknown_806F160_Struct *sub_806F2AC(u8 id, u8 arg1);
void sub_806F47C(u8 id);
u8 *sub_806F4F8(u8 id, u8 arg1);
u16 GetFormSpeciesId(u16 baseSpeciesId, u8 formId);
u8 GetFormIdFromFormSpeciesId(u16 formSpeciesId);
u16 GetBaseFormSpeciesId(u16 formSpeciesId);
void CreateShinyMonWithNature(struct Pokemon *mon, u16 species, u8 level, u8 nature);
u16 MonTryLearningNewMoveEvolution(struct Pokemon *mon, bool8 firstMove);
bool8 SpeciesHasType(u16 species, u8 type);
u16 GetRandomFirstStage(u16 basespecies);
u16 GetGrowthRate(u16 formSpeciesId);
u16 GetExioliteSpecies(u16 basespecies, u8 level);
u16 getBaseForm(u16 species);
void SetOutBreakPokemonFromCompanion(void);
void SetRoamerPokemonFromCompanion(void);
u8 RandomizePokemonType(u8 type, u32 personality, bool8 isSecondtype);
u16 RandomizePokemonAbility(u16 species, u16 ability);
u16 GetSpeciesFirstStage(u16 species);
u8 GetThirdTypeFromPersonality(u32 personality, u16 type1, u16 type2);
void GetFormSpeciesName(s8 *dest, u16 species);
u8 GetPPBonuses(void);
u8 GetIvs(u8 stat);
u8 getShinyOdds(void);
u16 getFinalBaseStat(u16 species, u8 stat, bool8 specialSpecies, bool8 deltaBoost);
u8 GetGameDifficultyLevel(void);
u16 GenerateRandomTypedMon(u8 type, u8 level);

bool8 isSpeciesPlaceholderMon(u16 species);
u16 SanitizePlaceholderSpecies(u16 species);
bool8 SpeciesHasDifferentForms(u16 species);
const u16 *GetFormSpeciesTable(u16 speciesId);
bool8 CanEvolve(u16 species);
bool8 IsMegaEvolution(u16 species);
u16 FindPreMegaFormSpecies(u16 megaFormSpecies);
u16 GetDefaultFormSpecies(u16 formSpecies);
bool8 IsLegendary(u16 species);
u8 GetSpeciesEvolutionStage(u16 species);
u16 GetEvolutionForMon(struct Pokemon *mon);
void GainHPAfter100Steps(void);
u8 getSpeciesCategory(u16 species);

#define SIGNATURE_MOVE_DEFAULT_LEVEL 100

bool8 isSignatureMoveEffectCorrect(struct SignatureMoveEffect sSignatureMoveEffect);
bool8 isSignatureMoveFromSpecies(u16 species, u16 move, u8 level);
struct SignatureMoveEffect getSignatureMoveEffectInfoFromBattler(u8 battler, u16 move, u8 modification);
struct SignatureMoveEffect getSignatureMoveEffectInfo(u16 species, u16 move, u8 modification, u8 level);
struct SignatureMoveEffect getSignatureMoveEffectInfoWithArgument(u16 species, u16 move, u8 modification, u8 level, u8 argument);

struct SignatureMoveEffect getSignatureMoveEffectInfoFromBattlerWithNumber(u8 battler, u16 move, u8 modification, u8 number);
struct SignatureMoveEffect getSignatureMoveEffectInfoWithNumber(u16 species, u16 move, u8 modification, u8 level, u8 number);
struct SignatureMoveEffect getSignatureMoveEffectInfoWithArgumentWithNumber(u16 species, u16 move, u8 modification, u8 level, u8 argument, u8 number);

u16 getBattleMoveEffect(u8 battler, u16 move);
u16 getBattleMoveEffectFromMon(struct Pokemon *mon, u16 move);
u16 getBattleMoveEffectFromSpecies(u16 species, u16 move, u8 level);

//Signature Move Stuff
#define SIGNATURE_MOVE_DATA_INIT() \
    struct SignatureMoveEffect sSignatureMoveEffect; \
    bool8 isSignatureMove

#define SIGNATURE_MOVE_DATA_BATTLER(battler, move, neededEffect) \
    struct SignatureMoveEffect sSignatureMoveEffect = getSignatureMoveEffectInfoFromBattler(battler, move, neededEffect); \
    bool8 isSignatureMove = isSignatureMoveEffectCorrect(sSignatureMoveEffect)

#define SIGNATURE_MOVE_DATA_SPECIES(species, move, neededEffect, level) \
    struct SignatureMoveEffect sSignatureMoveEffect = getSignatureMoveEffectInfo(species, move, neededEffect, level); \
    bool8 isSignatureMove = isSignatureMoveEffectCorrect(sSignatureMoveEffect)

#define REFRESH_SIGNATURE_MOVE_DATA_BATTLER(battler, move, neededEffect)                       \
    sSignatureMoveEffect = getSignatureMoveEffectInfoFromBattler(battler, move, neededEffect); \
    isSignatureMove = isSignatureMoveEffectCorrect(sSignatureMoveEffect)

#define REFRESH_SIGNATURE_MOVE_DATA_SPECIES(species, move, neededEffect, level) \
    sSignatureMoveEffect = getSignatureMoveEffectInfo(species, move, neededEffect, level); \
    isSignatureMove = isSignatureMoveEffectCorrect(sSignatureMoveEffect)

#define SIGNATURE_MOVE_DATA_BATTLER_WITH_NUMBER(battler, move, neededEffect, number) \
    struct SignatureMoveEffect sSignatureMoveEffect = getSignatureMoveEffectInfoFromBattlerWithNumber(battler, move, neededEffect, number); \
    bool8 isSignatureMove = isSignatureMoveEffectCorrect(sSignatureMoveEffect)

#define REFRESH_SIGNATURE_MOVE_DATA_BATTLER_WITH_NUMBER(battler, move, neededEffect, number) \
    sSignatureMoveEffect = getSignatureMoveEffectInfoFromBattlerWithNumber(battler, move, neededEffect, number); \
    isSignatureMove = isSignatureMoveEffectCorrect(sSignatureMoveEffect)

bool8 isSpeciesBannedFromUse(u16 species, bool8 isEnemyMon);
bool8 isMonBannedFromUse(struct Pokemon *mon, bool8 isEnemyMon);
bool8 isMonUsableInBattle(struct Pokemon *mon, bool8 isEnemyMon);
bool8 isBoxMonBannedFromUse(const struct BoxPokemon *boxMon, bool8 isEnemyMon);
u16 GetARandomValidFirstStage(u8 isEnemyMon);
void SendUnusablePokemonToBox(bool8 givePokemon);
bool8 isAvailabeForGeneration(u16 species, u8 lastAvailableGeneration);
void DisableUnobtainableOverworldPokemon(void);
u8 GetMusicGeneration(void);
bool8 isAlteringCave(void);
u16 GetCurrentSpeciesAlteredByAlteringCave(u16 species);
void FixNewPokemonSpeciesAfterUpdate(void);
void PrintPokemonData(struct Pokemon *mon);
u8 GetNatureUpDownStat(u8 nature, bool8 natureUp);
u8 GetMonAbilityNumFromAbility(u16 species, u16 ability);
bool8 SpeciesCanDeltaBoost(u16 species);
u16 GetSpeciesDeltaAbility(u16 species, u16 abilityNum);
void PrintCycleCountEnd(void);
void PrintCycleCountEndWithSpecies(u16 species);
bool8 IsItemDisabled(u16 item);

#endif // GUARD_POKEMON_H
