#ifndef GUARD_DATA_H
#define GUARD_DATA_H

#include "constants/moves.h"

#define SPECIES_SHINY_TAG 5000

struct MonCoords
{
    // This would use a bitfield, but some function
    // uses it as a u8 and casting won't match.
    u8 size; // u8 width:4, height:4;
    u8 y_offset;
};

#define TRAINER_LEVEL_DYNAMIC_EASY          0 //Random Generated Trainer - Easy
#define TRAINER_LEVEL_DYNAMIC_NORMAL        1 //Random Generated Trainer - Normal
#define TRAINER_LEVEL_DYNAMIC_HARD          2 //Random Generated Trainer - Hard
#define TRAINER_LEVEL_RANDOM_GYM_TRAINERS   3 //Random Generated Gym Trainer - Uses Argument to set a Type
#define TRAINER_LEVEL_GYM_LEADER            4 //Gym Leader
#define TRAINER_LEVEL_GYM_LEADER_TL         5 //Tate & Liza
#define TRAINER_LEVEL_POSTGAME              6 //Trainers with a set party
#define TRAINER_LEVEL_MOCK_BATTLE           7 //Mock Battle

struct TrainerMon
{
    u8    lvl;
	u8    evs[NUM_STATS];
	u8    abilityNum;
	u16   happiness;
    u16   species;
    u8    formId;
    u16   postgameheldItem;
    u16   heldItem;
	u16   postgamemoves[MAX_MON_MOVES];
    u16   moves[MAX_MON_MOVES];
	u8    pokeball;
	bool8 isShiny;
	bool8 exioliteBoost;
	u8    nature;
	u8    style;
	u8    hpType;
};

#define MAX_TRAINER_NAME_LENGTH 22
#define NUM_TRAINER_BAG_ITEMS   4

struct Trainer
{
    u8 partyLevel;
    u8 trainerClass;
    u8 encounterMusic; // last bit is gender
    u8 trainerPic;
    u8 trainerName[MAX_TRAINER_NAME_LENGTH];
    u16 items[NUM_TRAINER_BAG_ITEMS];
    bool8 doubleBattle;
    u32 aiFlags;
    const struct TrainerMon *party;
    const struct TrainerMon *party2;
    const struct TrainerMon *partyDoubles;
    const struct TrainerMon *partyDoubles2;
    const struct TrainerMon *partyLittleCup;
    u8 partySize;
    u8 argument;
};

#define TRAINER_PARTY(partyArray) partyArray, .partySize = ARRAY_COUNT(partyArray)
#define TRAINER_ENCOUNTER_MUSIC(trainer)((gTrainers[trainer].encounterMusic & 0x7F))

extern const u16 gUnknown_082FF1D8[];
extern const u32 gUnknown_082FF1F8[];

extern const struct SpriteFrameImage gUnknown_082FF3A8[];
extern const struct SpriteFrameImage gUnknown_082FF3C8[];
extern const struct SpriteFrameImage gUnknown_082FF3E8[];
extern const struct SpriteFrameImage gUnknown_082FF408[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Brendan[];
extern const struct SpriteFrameImage gTrainerBackPicTable_May[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Red[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Red_RBY[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Leaf[];
extern const struct SpriteFrameImage gTrainerBackPicTable_RubySapphireBrendan[];
extern const struct SpriteFrameImage gTrainerBackPicTable_RubySapphireMay[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Wally[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Steven[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Hilbert[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Lucas[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Dawn[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Hilda[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Blue[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Gold[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Kris[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Green[];
extern const struct SpriteFrameImage gTrainerBackPicTable_BrendanORAS[];
extern const struct SpriteFrameImage gTrainerBackPicTable_MayORAS[];
extern const struct SpriteFrameImage gTrainerBackPicTable_DawnPt[];

extern const union AffineAnimCmd *const gUnknown_082FF618[];
extern const union AffineAnimCmd *const gUnknown_082FF694[];
extern const union AffineAnimCmd *const gUnknown_082FF6C0[];

extern const union AnimCmd *const gUnknown_082FF70C[];
extern const struct MonCoords gMonFrontPicCoords[];
extern const struct MonCoords gMonBackPicCoords[];
extern const struct CompressedSpriteSheet gMonBackPicTable[];
extern const struct CompressedSpriteSheet gMonBackPicTableFemale[];
extern const struct CompressedSpritePalette gMonPaletteTable[];
extern const struct CompressedSpritePalette gMonPaletteTableFemale[];
extern const struct CompressedSpritePalette gMonShinyPaletteTable[];
extern const struct CompressedSpritePalette gMonShinyPaletteTableFemale[];
extern const union AnimCmd *const *const gTrainerFrontAnimsPtrTable[];
extern const struct MonCoords gTrainerFrontPicCoords[];
extern const struct CompressedSpriteSheet gTrainerFrontPicTable[];
extern const struct SpritePalette gTrainerFrontPicPaletteTable[];
extern const union AnimCmd *const *const gTrainerBackAnimsPtrTable[];
extern const struct MonCoords gTrainerBackPicCoords[];
extern const struct SpritePalette gTrainerBackPicPaletteTable[];

extern const struct CompressedSpriteSheet gTrainerBackPicTable[]; // functionally unused

extern const u8 gEnemyMonElevation[NUM_SPECIES];

extern const struct CompressedSpriteSheet gMonFrontPicTable[];
extern const struct CompressedSpriteSheet gMonFrontPicTableFemale[];
extern const bool8 SpeciesHasGenderDifference[NUM_SPECIES];

extern const struct Trainer gTrainers[];
extern const u8 gTrainerClassNames[][13];
extern const u8 gSpeciesNames[][POKEMON_NAME_LENGTH + 1];
extern const u8 gMoveNames[MOVES_COUNT][MOVE_NAME_LENGTH + 1];

#endif // GUARD_DATA_H
