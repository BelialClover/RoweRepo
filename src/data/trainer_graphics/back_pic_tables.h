const struct MonCoords gTrainerBackPicCoords[] =
{
    [TRAINER_BACK_PIC_BRENDAN]               = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_MAY]                   = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_RED]                   = {.size = 8, .y_offset = 5},
    [TRAINER_BACK_PIC_RED_RBY]               = {.size = 8, .y_offset = 5},
    [TRAINER_BACK_PIC_LEAF]                  = {.size = 8, .y_offset = 5},
    [TRAINER_BACK_PIC_RUBY_SAPPHIRE_BRENDAN] = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_RUBY_SAPPHIRE_MAY]     = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_WALLY]                 = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_STEVEN]                = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_HILBERT]               = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_LUCAS]                 = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_DAWN]                  = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_HILDA]                 = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_BLUE]                  = {.size = 8, .y_offset = 5},
    [TRAINER_BACK_PIC_GOLD]                  = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_KRIS]                  = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_GREEN]                 = {.size = 8, .y_offset = 5},
    [TRAINER_BACK_PIC_ORAS_BRENDAN]          = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_ORAS_MAY]              = {.size = 8, .y_offset = 4},
    [TRAINER_BACK_PIC_DAWN_PT]               = {.size = 8, .y_offset = 4},
};

const struct SpritePalette gTrainerBackPicPaletteTable[] =
{
    TRAINER_BACK_PAL(BRENDAN,               gTrainerPalette_Brendan),
    TRAINER_BACK_PAL(MAY,                   gTrainerPalette_May),
    TRAINER_BACK_PAL(RED,                   gTrainerBackPalette_Red),
    TRAINER_BACK_PAL(RED_RBY,               gTrainerBackPalette_Red_RBY),
    TRAINER_BACK_PAL(LEAF,                  gTrainerPalette_Leaf),
    TRAINER_BACK_PAL(RUBY_SAPPHIRE_BRENDAN, gTrainerPalette_RubySapphireBrendan),
    TRAINER_BACK_PAL(RUBY_SAPPHIRE_MAY,     gTrainerBackPalette_RubySapphireMay),
    TRAINER_BACK_PAL(WALLY,                 gTrainerPalette_Wally),
    TRAINER_BACK_PAL(STEVEN,                gTrainerPalette_Steven),
    TRAINER_BACK_PAL(HILBERT,               gTrainerPalette_Hilbert),
    TRAINER_BACK_PAL(LUCAS,                 gTrainerPalette_Lucas),
    TRAINER_BACK_PAL(DAWN,                  gTrainerPalette_Dawn),
    TRAINER_BACK_PAL(HILDA,                 gTrainerPalette_Hilda),
    TRAINER_BACK_PAL(BLUE,                  gTrainerPalette_Blue),
    TRAINER_BACK_PAL(GOLD,                  gTrainerPalette_Gold),
    TRAINER_BACK_PAL(KRIS,                  gTrainerPalette_Kris),
    TRAINER_BACK_PAL(GREEN,                 gTrainerPalette_Green),
    TRAINER_BACK_PAL(ORAS_BRENDAN,          gTrainerPalette_BrendanORAS),
    TRAINER_BACK_PAL(ORAS_MAY,              gTrainerPalette_MayORAS),
    TRAINER_BACK_PAL(DAWN_PT,               gTrainerPalette_DawnPt),
};

// this table goes functionally unused, since none of these pics are compressed
// and the place they would get extracted to gets overwritten later anyway
// the casts are so they'll play nice with the strict struct definition
const struct CompressedSpriteSheet gTrainerBackPicTable[] =
{
    (const u32 *)gTrainerBackPic_Brendan,             0x2000, TRAINER_BACK_PIC_BRENDAN,
    (const u32 *)gTrainerBackPic_May,                 0x2000, TRAINER_BACK_PIC_MAY,
    (const u32 *)gTrainerBackPic_Red,                 0x2800, TRAINER_BACK_PIC_RED,
    (const u32 *)gTrainerBackPic_Red_RBY,             0x2800, TRAINER_BACK_PIC_RED_RBY,
    (const u32 *)gTrainerBackPic_Leaf,                0x2800, TRAINER_BACK_PIC_LEAF,
    (const u32 *)gTrainerBackPic_RubySapphireBrendan, 0x2000, TRAINER_BACK_PIC_RUBY_SAPPHIRE_BRENDAN,
    (const u32 *)gTrainerBackPic_RubySapphireMay,     0x2000, TRAINER_BACK_PIC_RUBY_SAPPHIRE_MAY,
    (const u32 *)gTrainerBackPic_Wally,               0x2000, TRAINER_BACK_PIC_WALLY,
    (const u32 *)gTrainerBackPic_Steven,              0x2000, TRAINER_BACK_PIC_STEVEN,
    (const u32 *)gTrainerBackPic_Hilbert,             0x2000, TRAINER_BACK_PIC_HILBERT,
    (const u32 *)gTrainerBackPic_Lucas,               0x2000, TRAINER_BACK_PIC_LUCAS,
    (const u32 *)gTrainerBackPic_Dawn,                0x2000, TRAINER_BACK_PIC_DAWN,
    (const u32 *)gTrainerBackPic_Hilda,               0x2000, TRAINER_BACK_PIC_HILDA,
    (const u32 *)gTrainerBackPic_Blue,                0x2800, TRAINER_BACK_PIC_BLUE,
    (const u32 *)gTrainerBackPic_Gold,                0x2800, TRAINER_BACK_PIC_GOLD,
    (const u32 *)gTrainerBackPic_Kris,                0x2000, TRAINER_BACK_PIC_KRIS,
    (const u32 *)gTrainerBackPic_Green,               0x2800, TRAINER_BACK_PIC_GREEN,
    (const u32 *)gTrainerBackPic_BrendanORAS,         0x2000, TRAINER_BACK_PIC_ORAS_BRENDAN,
    (const u32 *)gTrainerBackPic_MayORAS,             0x2000, TRAINER_BACK_PIC_ORAS_MAY,
    (const u32 *)gTrainerBackPic_DawnPt,              0x2000, TRAINER_BACK_PIC_DAWN_PT,
};
