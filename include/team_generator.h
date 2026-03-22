#ifndef GUARD_TEAM_GENERATOR_H
#define GUARD_TEAM_GENERATOR_H

#include "main.h"

struct RankedStats
{
    u8 best;
    u8 secondBest;
    u8 thirdBest;
    u8 fourthBest;
    u8 secondWorse;
    u8 worse;
};

struct moveScoreData {
    u16 move;
    u16 power;
    u16 score;
    u8 learningType;
    u8 moveType;
    u8 moveSplit;
    bool8 stab;
};

#define ROLE_PHYSICAL_ATTACKER 0
#define ROLE_SPECIAL_ATTACKER  1
#define ROLE_OTHER             2

struct PokemonGeneratedData
{
    u16 species;
    u16 speciesForStats;
    u16 moves[MAX_MON_MOVES];
    u16 evs[NUM_STATS];
    u8 nature;
    u8 style;
    u16 ability;
    u8 hpType;
    struct RankedStats rankedStats;
    u8 role;
    u16 heldItem;
    u8 num;
};

struct TeamGenStruct
{
    u8 enableMega:1;
    u8 numHeldItems:6;
    u8 filler:1;
    u8 trainerClass;
    u8 partySize;
    u16 items[PARTY_SIZE];
};

u8 CalculateNPCTrainerMonsCount(u16 trainerNum, bool8 twoOpponents);
u16 GetScaledTrainerNum(u16 trainerNum);

u8 GetRankedStatIdForSpecies(u16 species, u8 rank);
void GenerateOptimalPokemonBattleData(struct Pokemon *mon, u8 num);
void PrintStatOrderForMon(struct PokemonGeneratedData *monData);
void InitTeamGeneratorData(u8 trainerClass, u8 partySize);

#define MIN_EVS_TO_SET 50

#define TRAINER_PARTY_SINGLES_1  0
#define TRAINER_PARTY_SINGLES_2  1
#define TRAINER_PARTY_DOUBLES_1  2
#define TRAINER_PARTY_DOUBLES_2  3
#define TRAINER_PARTY_LITTLE_CUP 4

#define STAT_BEST         0
#define STAT_SECOND_BEST  1
#define STAT_THIRD_BEST   2
#define STAT_FOURTH_BEST  3
#define STAT_SECOND_WORST 4
#define STAT_WORST        5

#define NUM_BADGES_FOR_TMHM_ON_ENEMIES     2
#define NUM_BADGES_FOR_EGGMOVES_ON_ENEMIES 6
#define NUM_BADGES_FOR_TUTOR_ON_ENEMIES    9

#define NUM_BADGES_POSTGAME_EASY   15
#define NUM_BADGES_POSTGAME_NORMAL 13
#define NUM_BADGES_POSTGAME_HARD   11

//Roles
enum{
    MON_ROLE_BEST,
    //Attackers - Attack + Speed
    MON_ROLE_SPECIAL_ATTACKER,
    MON_ROLE_PHYSICAL_ATTACKER,
    MON_ROLE_MIXED_ATTACKER,
    //Tanks - Defense + Attack
    MON_ROLE_PHYSICAL_TANK,
    MON_ROLE_SPECIAL_TANK,
    MON_ROLE_MIXED_TANK,
    //Defender - HP + Defense
    MON_ROLE_PHYSICAL_DEFENDER,
    MON_ROLE_SPECIAL_DEFENDER,
    MON_ROLE_MIXED_DEFENDER,
    //Misc
    MON_ROLE_NO_EVS,
    NUM_MON_ROLES,
};

//Score System
#define MOVE_BAN_ACCURACY_PENALTY              75
#define MOVE_BAN_NORMAL_TYPE_PENALTY           40
#define MOVE_BAN_SPECIFIC_EFFECTS_PENALTY_HARD 75
#define MOVE_BAN_SPECIFIC_EFFECTS_PENALTY_SOFT 15
#define MOVE_BAN_MOVE_POWER_PENALTY            60
#define MOVE_BAN_SPLIT_PENALTY                 40
#define MOVE_BAN_SAME_TYPE_PENALTY             150
#define MOVE_BAN_NON_STAB_PENALTY              25
#define MOVE_BAN_SE_AGAINST_PLAYER_MON         25
#define MOVE_BAN_SIGNATURE_MOVE                25

#define DEFAULT_SCORE_FOR_MOVES                100
#define MOVE_BAN_MAX_POINTS                    150

//Role Stuff
#define ROLE_ATTACKER_THRESHOLD 15 // Allowable difference between physical and special attack

#endif
