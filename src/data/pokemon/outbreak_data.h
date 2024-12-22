const struct OutbreakData gOutBreaks[] = {
    [OUTBREAK_NONE] = {
        .species          = SPECIES_NONE,
        .mapNum           = 0,
        .mapGroup         = 0,
        .rate             = 0,
        .specialMove      = MOVE_NONE,
        .heldItem         = ITEM_NONE,
        .heldItem_Rate    = 0,
        .shinyBoost       = 0,
        .isWaterEncounter = FALSE,
        .daysLeft         = 0,
    },
    [OUBREAK_LAPRAS_ICEFALL_CAVE] = {
        .species          = SPECIES_LAPRAS,
        .mapNum           = 0,
        .mapGroup         = 0,
        .rate             = 0,
        .specialMove      = MOVE_SPARKLING_ARIA,
        .heldItem         = ITEM_ICE_GEM,
        .heldItem_Rate    = 25,
        .shinyBoost       = 0,
        .isWaterEncounter = TRUE,
        .daysLeft         = 0,
    }
};
