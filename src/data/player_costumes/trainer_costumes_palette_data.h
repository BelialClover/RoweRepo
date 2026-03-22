#define COSTUME_RGB_COLOR_NUMBER 3

struct PlayerCostumeData
{
    u8 overworldRGB[COSTUME_RGB_COLOR_NUMBER];
    u8 inBattleRGB[COSTUME_RGB_COLOR_NUMBER];
    bool8 isDisabled;
};

const struct PlayerCostumeData PlayerCostumeData_Male[NUM_COSTUMES] = {
    //RS Brendan
    [RS_COSTUME] = {
        .overworldRGB = {12, 13, 16},
        .inBattleRGB  = {12, 13, 16},
    },
    //Emerald Brendan
    [EMERALD_COSTUME] = {
        .overworldRGB = {10, 11, 16},
        .inBattleRGB  = {10, 11, 16},
    },
    //RBY Red
    [RBY_COSTUME] = {
        .overworldRGB = {12, 13,  8},
        .inBattleRGB  = {12, 13, 16},
    },
    //FRLG Red
    [FRLG_COSTUME] = {
        .overworldRGB = {12, 13,  8},
        .inBattleRGB  = {12, 13, 16},
    },
    //DP Lucas
    [DP_COSTUME] = {
        .overworldRGB = { 2,  1,  3},
        .inBattleRGB  = { 9,  4, 16},
    },
    //BW Hilbert
    [BW_COSTUME] = {
        .overworldRGB = { 6,  7, 16},
        .inBattleRGB  = { 2,  1, 16},
    },
    //ORAS Brendan
    [ORAS_COSTUME] = {
        .overworldRGB = {12, 13, 16},
        .inBattleRGB  = { 9, 10, 16},
    },
    //Green
    [EXTRA_COSTUME] = {
        .overworldRGB = {16,  5, 16},
        .inBattleRGB  = {11, 16,  7},
    },
    //Ethan
    [GSC_COSTUME] = {
        .overworldRGB = {12, 13, 16},
        .inBattleRGB  = {12, 11,  4},
    },
};

const struct PlayerCostumeData PlayerCostumeData_Female[NUM_COSTUMES] = {
    //RS May
    [RS_COSTUME] = {
        .overworldRGB = { 2,  4, 12},
        .inBattleRGB  = {12, 13, 11},
    },
    //Emerald May
    [EMERALD_COSTUME] = {
        .overworldRGB = {10, 11,  6},
        .inBattleRGB  = {10, 11,  5},
    },
    //RBY Blue
    [RBY_COSTUME] = {
        .overworldRGB = { 8,  7, 16},
        .inBattleRGB  = {13, 12, 11},
    },
    //FRLG Leaf
    [FRLG_COSTUME] = {
        .overworldRGB = { 7,  9, 14},
        .inBattleRGB  = {10, 11, 12},
    },
    //DP Dawn
    [DP_COSTUME] = {
        .overworldRGB = { 6,  7,  8},
        .inBattleRGB  = {11, 12, 13},
    },
    //BW Hilda - Placeholder
    [BW_COSTUME] = {
        .overworldRGB = {10, 11, 12},
        .inBattleRGB  = { 7,  8, 14},
        .isDisabled = TRUE,
    },
    //ORAS May
    [ORAS_COSTUME] = {
        .overworldRGB = {12,  4, 13},
        .inBattleRGB  = {11, 12, 16},
    },
    //Dawn Platinum
    [EXTRA_COSTUME] = {
        .overworldRGB = { 8,  9, 10},
        .inBattleRGB  = { 1, 10,  3},
    },
    //Lyra - Placeholder
    [GSC_COSTUME] = {
        .overworldRGB = {10, 11, 12},
        .inBattleRGB  = { 7,  8, 14},
        .isDisabled = TRUE,
    },
};