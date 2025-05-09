const struct Trainer gTrainers[] = {
    [TRAINER_NONE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = 0,
        //.party = {.NoItemDefaultMoves = NULL},
    },

    [TRAINER_SAWYER_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Sawyer"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sawyer1),
        //.party = {.NoItemDefaultMoves = sParty_Sawyer1},
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout1),
        //.party = {.NoItemDefaultMoves = sParty_GruntAquaHideout1},
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout2),
        //.party = {.NoItemDefaultMoves = sParty_GruntAquaHideout2},
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout3),
        //.party = {.NoItemDefaultMoves = sParty_GruntAquaHideout3},
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout4),
        //.party = {.NoItemDefaultMoves = sParty_GruntAquaHideout4},
    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSeafloorCavern1),
        //.party = {.NoItemDefaultMoves = sParty_GruntSeafloorCavern1},
    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSeafloorCavern2),
        //.party = {.NoItemDefaultMoves = sParty_GruntSeafloorCavern2},
    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSeafloorCavern3),
        //.party = {.NoItemDefaultMoves = sParty_GruntSeafloorCavern3},
    },

    [TRAINER_GABRIELLE_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Gabrielle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gabrielle1),
        //.party = {.NoItemDefaultMoves = sParty_Gabrielle1},
    },

    [TRAINER_GRUNT_PETALBURG_WOODS] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntPetalburgWoods),
        //.party = {.NoItemDefaultMoves = sParty_GruntPetalburgWoods},
    },

    [TRAINER_MARCEL] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Marcel"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Marcel),
        //.party = {.NoItemDefaultMoves = sParty_Marcel},
    },

    [TRAINER_ALBERTO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Alberto"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alberto),
        //.party = {.NoItemDefaultMoves = sParty_Alberto},
    },

    [TRAINER_ED] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Ed"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ed),
        //.party = {.NoItemDefaultMoves = sParty_Ed},
    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSeafloorCavern4),
        //.party = {.NoItemDefaultMoves = sParty_GruntSeafloorCavern4},
    },

    [TRAINER_DECLAN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Declan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Declan),
        //.party = {.NoItemDefaultMoves = sParty_Declan},
    },

    [TRAINER_GRUNT_RUSTURF_TUNNEL] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntRusturfTunnel),
        //.party = {.NoItemDefaultMoves = sParty_GruntRusturfTunnel},
    },

    [TRAINER_GRUNT_WEATHER_INST_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntWeatherInst1),
        //.party = {.NoItemDefaultMoves = sParty_GruntWeatherInst1},
    },

    [TRAINER_GRUNT_WEATHER_INST_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntWeatherInst2),
        //.party = {.NoItemDefaultMoves = sParty_GruntWeatherInst2},
    },

    [TRAINER_GRUNT_WEATHER_INST_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntWeatherInst3),
        //.party = {.NoItemDefaultMoves = sParty_GruntWeatherInst3},
    },

    [TRAINER_GRUNT_MUSEUM_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMuseum1),
        //.party = {.NoItemDefaultMoves = sParty_GruntMuseum1},
    },

    [TRAINER_GRUNT_MUSEUM_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMuseum2),
        //.party = {.NoItemDefaultMoves = sParty_GruntMuseum2},
    },

    [TRAINER_GRUNT_SPACE_CENTER_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter1),
        //.party = {.NoItemDefaultMoves = sParty_GruntSpaceCenter1},
    },

    [TRAINER_GRUNT_MT_PYRE_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMtPyre1),
        //.party = {.NoItemDefaultMoves = sParty_GruntMtPyre1},
    },

    [TRAINER_GRUNT_MT_PYRE_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMtPyre2),
        //.party = {.NoItemDefaultMoves = sParty_GruntMtPyre2},
    },

    [TRAINER_GRUNT_MT_PYRE_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMtPyre3),
        //.party = {.NoItemDefaultMoves = sParty_GruntMtPyre3},
    },

    [TRAINER_GRUNT_WEATHER_INST_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntWeatherInst4),
        //.party = {.NoItemDefaultMoves = sParty_GruntWeatherInst4},
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout5),
        //.party = {.NoItemDefaultMoves = sParty_GruntAquaHideout5},
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_6] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout6),
        //.party = {.NoItemDefaultMoves = sParty_GruntAquaHideout6},
    },

    [TRAINER_FREDRICK] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Fredrick"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Fredrick),
        //.party = {.NoItemDefaultMoves = sParty_Fredrick},
    },

    [TRAINER_MATT] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .trainerName = _("Matt"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Matt),
        //.party = {.NoItemDefaultMoves = sParty_Matt},
    },

    [TRAINER_ZANDER] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Zander"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Zander),
        //.party = {.NoItemDefaultMoves = sParty_Zander},
    },

    [TRAINER_SHELLY_WEATHER_INSTITUTE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .trainerName = _("Shelly"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_ShellyWeatherInstitute),
        //.party = {.NoItemDefaultMoves = sParty_ShellyWeatherInstitute},
    },

    [TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .trainerName = _("Shelly"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_ShellySeafloorCavern),
        //.party = {.NoItemDefaultMoves = sParty_ShellySeafloorCavern},
    },

    [TRAINER_ARCHIE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .trainerName = _("Archie"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Archie),
        //.party = {.ItemDefaultMoves = sParty_Archie},
    },

    [TRAINER_LEAH] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Leah"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Leah),
        //.party = {.NoItemDefaultMoves = sParty_Leah},
    },

    [TRAINER_DAISY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Daisy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Daisy),
        //.party = {.NoItemDefaultMoves = sParty_Daisy},
    },

    [TRAINER_ROSE_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Rose"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Rose1),
        //.party = {.NoItemDefaultMoves = sParty_Rose1},
    },

    [TRAINER_FELIX] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Felix"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Felix),
        //.party = {.NoItemCustomMoves = sParty_Felix},
    },

    [TRAINER_VIOLET] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Violet"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Violet),
        //.party = {.NoItemDefaultMoves = sParty_Violet},
    },

    [TRAINER_SWIMMER_FEMALE_MARIA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Maria"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sTrainerMons_SwimmerFemaleMaria),
        //.party = {.NoItemDefaultMoves = sTrainerMons_SwimmerFemaleMaria}
    },

    [TRAINER_SWIMMER_FEMALE_ABIGAIL] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Abigail"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sTrainerMons_SwimmerFemaleAbigail),
        //.party = {.NoItemDefaultMoves = sTrainerMons_SwimmerFemaleAbigail}
    },

    [TRAINER_SWIMMER_MALE_FINN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Finn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sTrainerMons_SwimmerMaleFinn),
        //.party = {.NoItemDefaultMoves = sTrainerMons_SwimmerMaleFinn}
    },

    [TRAINER_SWIMMER_MALE_GARRETT] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("GARRETT"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sTrainerMons_SwimmerMaleGarrett),
        //.party = {.NoItemDefaultMoves = sTrainerMons_SwimmerMaleGarrett}
    },

    [TRAINER_DUSTY_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Dusty"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dusty1),
        //.party = {.NoItemDefaultMoves = sParty_Dusty1},
    },

    [TRAINER_CHIP] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Chip"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Chip),
        //.party = {.NoItemDefaultMoves = sParty_Chip},
    },

    [TRAINER_FOSTER] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Foster"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Foster),
        //.party = {.NoItemDefaultMoves = sParty_Foster},
    },

    [TRAINER_FISHERMAN_TOMMY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Tommy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sTrainerMons_FishermanTommy),
        //.party = {.NoItemDefaultMoves = sTrainerMons_FishermanTommy}
    },

    [TRAINER_CRUSH_GIRL_SHARON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Sharon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sTrainerMons_CrushGirlSharon),
    },

    [TRAINER_CRUSH_GIRL_TANYA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Tanya"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sTrainerMons_CrushGirlTanya),
        //.party = {.ItemDefaultMoves = sTrainerMons_CrushGirlTanya}
    },

    [TRAINER_BLACK_BELT_SHEA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Shea"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sTrainerMons_BlackBeltShea),
        //.party = {.ItemDefaultMoves = sTrainerMons_BlackBeltShea}
    },

    [TRAINER_GABBY_AND_TY_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("Gabby & Ty"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GabbyAndTy1),
        //.party = {.NoItemDefaultMoves = sParty_GabbyAndTy1},
    },

    [TRAINER_GABBY_AND_TY_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("Gabby & Ty"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GabbyAndTy2),
        //.party = {.NoItemDefaultMoves = sParty_GabbyAndTy2},
    },

    [TRAINER_GABBY_AND_TY_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("Gabby & Ty"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GabbyAndTy3),
        //.party = {.NoItemDefaultMoves = sParty_GabbyAndTy3},
    },

    [TRAINER_GABBY_AND_TY_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("Gabby & Ty"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GabbyAndTy4),
        //.party = {.NoItemDefaultMoves = sParty_GabbyAndTy4},
    },

    [TRAINER_GABBY_AND_TY_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("Gabby & Ty"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GabbyAndTy5),
        //.party = {.NoItemDefaultMoves = sParty_GabbyAndTy5},
    },

    [TRAINER_GABBY_AND_TY_6] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .trainerName = _("Gabby & Ty"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GabbyAndTy6),
        //.party = {.ItemDefaultMoves = sParty_GabbyAndTy6},
    },

    [TRAINER_LOLA_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Lola"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lola1),
        //.party = {.NoItemDefaultMoves = sParty_Lola1},
    },

    [TRAINER_AUSTINA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Austina"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Austina),
        //.party = {.NoItemDefaultMoves = sParty_Austina},
    },

    [TRAINER_GWEN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Gwen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gwen),
        //.party = {.NoItemDefaultMoves = sParty_Gwen},
    },

    [TRAINER_BLACK_BELT_HUGH] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Hugh"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sTrainerMons_BlackBeltHugh),
        //.party = {.ItemDefaultMoves = sTrainerMons_BlackBeltHugh}
    },

	[TRAINER_CAMPER_BRYCE] = {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Bryce"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sTrainerMons_CamperBryce),
        //.party = {.NoItemDefaultMoves = sTrainerMons_CamperBryce}
    },
	
    [TRAINER_PICNICKER_CLAIRE] = {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Claire"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sTrainerMons_PicnickerClaire),
        //.party = {.NoItemDefaultMoves = sTrainerMons_PicnickerClaire}
    },
	
    [TRAINER_CRUSH_KIN_MIK_KIA] = {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CRUSH_KIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_KIN,
        .trainerName = _("Mik & Kia"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sTrainerMons_CrushKinMikKia),
        //.party = {.ItemDefaultMoves = sTrainerMons_CrushKinMikKia}
    },

    [TRAINER_RICKY_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("Ricky"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ricky1),
        //.party = {.NoItemDefaultMoves = sParty_Ricky1},
    },

    [TRAINER_SIMON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("Simon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Simon),
        //.party = {.NoItemDefaultMoves = sParty_Simon},
    },

    [TRAINER_CHARLIE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("Charlie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Charlie),
        //.party = {.NoItemDefaultMoves = sParty_Charlie},
    },

   [TRAINER_PKMN_RANGER_LOGAN] = {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Logan"),
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sTrainerMons_PkmnRangerLogan),
        //.party = {.NoItemCustomMoves = sTrainerMons_PkmnRangerLogan}
    },
	
    [TRAINER_PKMN_RANGER_JACKSON] = {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Jackson"),
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sTrainerMons_PkmnRangerJackson),
        //.party = {.NoItemCustomMoves = sTrainerMons_PkmnRangerJackson}
    },
	
    [TRAINER_PKMN_RANGER_BETH] = {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Beth"),
        .items = {ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
		.party = TRAINER_PARTY(sParty_Sawyer1),
    },

    [TRAINER_BRAXTON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Braxton"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Braxton),
        //.party = {.NoItemCustomMoves = sParty_Braxton},
    },

    [TRAINER_VINCENT] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Vincent"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Vincent),
        //.party = {.NoItemDefaultMoves = sParty_Vincent},
    },

    [TRAINER_LEROY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Leroy"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Leroy),
        //.party = {.NoItemDefaultMoves = sParty_Leroy},
    },

    [TRAINER_WILTON_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Wilton"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wilton1),
        //.party = {.NoItemDefaultMoves = sParty_Wilton1},
    },

    [TRAINER_EDGAR] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Edgar"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Edgar),
        //.party = {.NoItemDefaultMoves = sParty_Edgar},
    },

    [TRAINER_ALBERT] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Albert"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Albert),
        //.party = {.NoItemDefaultMoves = sParty_Albert},
    },

    [TRAINER_SAMUEL] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Samuel"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Samuel),
        //.party = {.NoItemDefaultMoves = sParty_Samuel},
    },

    [TRAINER_VITO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Vito"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Vito),
        //.party = {.NoItemDefaultMoves = sParty_Vito},
    },

    [TRAINER_OWEN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Owen"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Owen),
        //.party = {.NoItemDefaultMoves = sParty_Owen},
    },

    [TRAINER_AROMA_LADY_VIOLET] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Violet"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sTrainerMons_AromaLadyViolet),
        //.party = {.NoItemDefaultMoves = sTrainerMons_AromaLadyViolet},
    },

    [TRAINER_AROMA_LADY_NIKKI] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Nikki"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sTrainerMons_AromaLadyNikki),
        //.party = {.NoItemDefaultMoves = sTrainerMons_AromaLadyNikki},
    },

    [TRAINER_TUBER_AMIRA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Amira"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sTrainerMons_TuberAmira),
        //.party = {.NoItemDefaultMoves = sTrainerMons_TuberAmira},
    },

    [TRAINER_TUBER_ALEXIS] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Alexis"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sTrainerMons_TuberAlexis),
        //.party = {.NoItemDefaultMoves = sTrainerMons_TuberAlexis},
    },

    [TRAINER_WARREN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Warren"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Warren),
        //.party = {.NoItemDefaultMoves = sParty_Warren},
    },

    [TRAINER_WENDY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Wendy"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Wendy),
        //.party = {.NoItemCustomMoves = sParty_Wendy},
    },

    [TRAINER_KEIRA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Keira"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Keira),
        //.party = {.NoItemDefaultMoves = sParty_Keira},
    },

    [TRAINER_BROOKE_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Brooke"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brooke1),
        //.party = {.NoItemDefaultMoves = sParty_Brooke1},
    },

    [TRAINER_JENNIFER] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Jennifer"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Jennifer),
        //.party = {.NoItemDefaultMoves = sParty_Jennifer},
    },

    [TRAINER_HOPE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Hope"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Hope),
        //.party = {.NoItemDefaultMoves = sParty_Hope},
    },

    [TRAINER_SHANNON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Shannon"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Shannon),
        //.party = {.NoItemDefaultMoves = sParty_Shannon},
    },

    [TRAINER_MICHELLE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Michelle"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Michelle),
        //.party = {.NoItemDefaultMoves = sParty_Michelle},
    },

    [TRAINER_CAROLINE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Caroline"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Caroline),
        //.party = {.NoItemDefaultMoves = sParty_Caroline},
    },

    [TRAINER_JULIE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Julie"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Julie),
        //.party = {.NoItemDefaultMoves = sParty_Julie},
    },

    [TRAINER_SWIMMER_FEMALE_TISHA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Tisha"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sTrainerMons_SwimmerFemaleTisha),
        //.party = {.NoItemDefaultMoves = sTrainerMons_SwimmerFemaleTisha},
    },

    [TRAINER_TWINS_JOY_MEG] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Joy & Meg"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sTrainerMons_TwinsJoyMeg),
        //.party = {.NoItemDefaultMoves = sTrainerMons_TwinsJoyMeg},
    },

    [TRAINER_BROOKE_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Brooke"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brooke4),
        //.party = {.NoItemDefaultMoves = sParty_Brooke4},
    },

    [TRAINER_BROOKE_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Brooke"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brooke5),
        //.party = {.ItemDefaultMoves = sParty_Brooke5},
    },

    [TRAINER_PATRICIA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Patricia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Patricia),
        //.party = {.NoItemDefaultMoves = sParty_Patricia},
    },

    [TRAINER_KINDRA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Kindra"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kindra),
        //.party = {.NoItemDefaultMoves = sParty_Kindra},
    },

    [TRAINER_TAMMY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Tammy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tammy),
        //.party = {.NoItemDefaultMoves = sParty_Tammy},
    },

    [TRAINER_VALERIE_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Valerie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Valerie1),
        //.party = {.NoItemDefaultMoves = sParty_Valerie1},
    },

    [TRAINER_TASHA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Tasha"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tasha),
        //.party = {.NoItemDefaultMoves = sParty_Tasha},
    },

    [TRAINER_VALERIE_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Valerie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Valerie2),
        //.party = {.NoItemDefaultMoves = sParty_Valerie2},
    },

    [TRAINER_VALERIE_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Valerie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Valerie3),
        //.party = {.NoItemDefaultMoves = sParty_Valerie3},
    },

    [TRAINER_VALERIE_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Valerie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Valerie4),
        //.party = {.NoItemDefaultMoves = sParty_Valerie4},
    },

    [TRAINER_VALERIE_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Valerie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Valerie5),
        //.party = {.NoItemDefaultMoves = sParty_Valerie5},
    },

    [TRAINER_CINDY_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Cindy"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cindy1),
        //.party = {.ItemDefaultMoves = sParty_Cindy1},
    },

    [TRAINER_GRUNT_SPACE_CENTER_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter2),
        //.party = {.NoItemDefaultMoves = sParty_GruntSpaceCenter2},
    },

    [TRAINER_CINDY_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Cindy"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cindy2),
        //.party = {.ItemCustomMoves = sParty_Cindy2},
    },

    [TRAINER_NAOMI] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Naomi"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Naomi),
        //.party = {.ItemDefaultMoves = sParty_Naomi},
    },

    [TRAINER_CINDY_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Cindy"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cindy3),
        //.party = {.ItemDefaultMoves = sParty_Cindy3},
    },

    [TRAINER_CINDY_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Cindy"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cindy4),
        //.party = {.ItemDefaultMoves = sParty_Cindy4},
    },

    [TRAINER_CINDY_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Cindy"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cindy5),
        //.party = {.ItemDefaultMoves = sParty_Cindy5},
    },

    [TRAINER_CINDY_6] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Cindy"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cindy6),
        //.party = {.ItemCustomMoves = sParty_Cindy6},
    },

    [TRAINER_MELISSA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Melissa"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Melissa),
        //.party = {.NoItemDefaultMoves = sParty_Melissa},
    },

    [TRAINER_SHEILA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Sheila"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sheila),
        //.party = {.NoItemDefaultMoves = sParty_Sheila},
    },

    [TRAINER_SHIRLEY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Shirley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Shirley),
        //.party = {.NoItemDefaultMoves = sParty_Shirley},
    },

    [TRAINER_JESSICA_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Jessica"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jessica1),
        //.party = {.NoItemCustomMoves = sParty_Jessica1},
    },

    [TRAINER_JESSICA_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Jessica"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jessica2),
        //.party = {.NoItemCustomMoves = sParty_Jessica2},
    },

    [TRAINER_JESSICA_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Jessica"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jessica3),
        //.party = {.NoItemCustomMoves = sParty_Jessica3},
    },

    [TRAINER_JESSICA_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Jessica"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jessica4),
        //.party = {.NoItemCustomMoves = sParty_Jessica4},
    },

    [TRAINER_JESSICA_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Jessica"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jessica5),
        //.party = {.NoItemCustomMoves = sParty_Jessica5},
    },

    [TRAINER_WINSTON_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Winston"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Winston1),
        //.party = {.ItemDefaultMoves = sParty_Winston1},
    },

    [TRAINER_MOLLIE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Mollie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Mollie),
        //.party = {.NoItemDefaultMoves = sParty_Mollie},
    },

    [TRAINER_GARRET] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Garret"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Garret),
        //.party = {.ItemDefaultMoves = sParty_Garret},
    },

    [TRAINER_WINSTON_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Winston"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Winston2),
        //.party = {.ItemDefaultMoves = sParty_Winston2},
    },

    [TRAINER_WINSTON_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Winston"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Winston3),
        //.party = {.ItemDefaultMoves = sParty_Winston3},
    },

    [TRAINER_WINSTON_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Winston"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Winston4),
        //.party = {.ItemDefaultMoves = sParty_Winston4},
    },

    [TRAINER_WINSTON_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Winston"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Winston5),
        //.party = {.ItemCustomMoves = sParty_Winston5},
    },

    [TRAINER_STEVE_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Steve"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Steve1),
        //.party = {.NoItemDefaultMoves = sParty_Steve1},
    },

    [TRAINER_THALIA_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Thalia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Thalia1),
        //.party = {.NoItemDefaultMoves = sParty_Thalia1},
    },

    [TRAINER_MARK] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Mark"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Mark),
        //.party = {.NoItemDefaultMoves = sParty_Mark},
    },

    [TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMtChimney1),
        //.party = {.NoItemDefaultMoves = sParty_GruntMtChimney1},
    },

    [TRAINER_STEVE_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Steve"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Steve2),
        //.party = {.NoItemDefaultMoves = sParty_Steve2},
    },

    [TRAINER_STEVE_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Steve"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Steve3),
        //.party = {.NoItemDefaultMoves = sParty_Steve3},
    },

    [TRAINER_STEVE_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Steve"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Steve4),
        //.party = {.NoItemDefaultMoves = sParty_Steve4},
    },

    [TRAINER_STEVE_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Steve"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Steve5),
        //.party = {.NoItemDefaultMoves = sParty_Steve5},
    },

    [TRAINER_LUIS] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Luis"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Luis),
        //.party = {.NoItemDefaultMoves = sParty_Luis},
    },

    [TRAINER_DOMINIK] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Dominik"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dominik),
        //.party = {.NoItemDefaultMoves = sParty_Dominik},
    },

    [TRAINER_DOUGLAS] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Douglas"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Douglas),
        //.party = {.NoItemDefaultMoves = sParty_Douglas},
    },

    [TRAINER_DARRIN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Darrin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Darrin),
        //.party = {.NoItemDefaultMoves = sParty_Darrin},
    },

    [TRAINER_TONY_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Tony"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tony1),
        //.party = {.NoItemDefaultMoves = sParty_Tony1},
    },

    [TRAINER_JEROME] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Jerome"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jerome),
        //.party = {.NoItemDefaultMoves = sParty_Jerome},
    },

    [TRAINER_MATTHEW] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Matthew"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Matthew),
        //.party = {.NoItemDefaultMoves = sParty_Matthew},
    },

    [TRAINER_DAVID] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("David"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_David),
        //.party = {.NoItemDefaultMoves = sParty_David},
    },

    [TRAINER_SPENCER] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Spencer"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Spencer),
        //.party = {.NoItemDefaultMoves = sParty_Spencer},
    },

    [TRAINER_ROLAND] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Roland"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Roland),
        //.party = {.NoItemDefaultMoves = sParty_Roland},
    },

    [TRAINER_NOLEN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Nolen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nolen),
        //.party = {.NoItemDefaultMoves = sParty_Nolen},
    },

    [TRAINER_STAN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Stan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Stan),
        //.party = {.NoItemDefaultMoves = sParty_Stan},
    },

    [TRAINER_BARRY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Barry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Barry),
        //.party = {.NoItemDefaultMoves = sParty_Barry},
    },

    [TRAINER_DEAN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Dean"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dean),
        //.party = {.NoItemDefaultMoves = sParty_Dean},
    },

    [TRAINER_RODNEY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Rodney"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Rodney),
        //.party = {.NoItemDefaultMoves = sParty_Rodney},
    },

    [TRAINER_RICHARD] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Richard"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Richard),
        //.party = {.NoItemDefaultMoves = sParty_Richard},
    },

    [TRAINER_HERMAN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Herman"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Herman),
        //.party = {.NoItemDefaultMoves = sParty_Herman},
    },

    [TRAINER_SANTIAGO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Santiago"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Santiago),
        //.party = {.NoItemDefaultMoves = sParty_Santiago},
    },

    [TRAINER_GILBERT] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Gilbert"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gilbert),
        //.party = {.NoItemDefaultMoves = sParty_Gilbert},
    },

    [TRAINER_FRANKLIN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Franklin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Franklin),
        //.party = {.NoItemDefaultMoves = sParty_Franklin},
    },

    [TRAINER_KEVIN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Kevin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kevin),
        //.party = {.NoItemDefaultMoves = sParty_Kevin},
    },

    [TRAINER_JACK] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Jack"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jack),
        //.party = {.NoItemDefaultMoves = sParty_Jack},
    },

    [TRAINER_DUDLEY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Dudley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dudley),
        //.party = {.NoItemDefaultMoves = sParty_Dudley},
    },

    [TRAINER_CHAD] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Chad"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Chad),
        //.party = {.NoItemDefaultMoves = sParty_Chad},
    },

    [TRAINER_TONY_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Tony"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tony2),
        //.party = {.NoItemDefaultMoves = sParty_Tony2},
    },

    [TRAINER_TONY_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Tony"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tony3),
        //.party = {.NoItemDefaultMoves = sParty_Tony3},
    },

    [TRAINER_TONY_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Tony"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tony4),
        //.party = {.NoItemDefaultMoves = sParty_Tony4},
    },

    [TRAINER_TONY_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Tony"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tony5),
        //.party = {.NoItemDefaultMoves = sParty_Tony5},
    },

    [TRAINER_HITOSHI] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Hitoshi"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Hitoshi),
        //.party = {.NoItemDefaultMoves = sParty_Hitoshi},
    },

    [TRAINER_KIYO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Kiyo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kiyo),
        //.party = {.NoItemDefaultMoves = sParty_Kiyo},
    },

    [TRAINER_KOICHI] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Koichi"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Koichi),
        //.party = {.NoItemDefaultMoves = sParty_Koichi},
    },

    [TRAINER_NOB_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Nob"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nob1),
        //.party = {.NoItemDefaultMoves = sParty_Nob1},
    },

    [TRAINER_NOB_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Nob"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nob2),
        //.party = {.NoItemDefaultMoves = sParty_Nob2},
    },

    [TRAINER_NOB_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Nob"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nob3),
        //.party = {.NoItemDefaultMoves = sParty_Nob3},
    },

    [TRAINER_NOB_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Nob"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nob4),
        //.party = {.NoItemDefaultMoves = sParty_Nob4},
    },

    [TRAINER_NOB_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Nob"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nob5),
        //.party = {.ItemDefaultMoves = sParty_Nob5},
    },

    [TRAINER_YUJI] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Yuji"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Yuji),
        //.party = {.NoItemDefaultMoves = sParty_Yuji},
    },

    [TRAINER_DAISUKE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Daisuke"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Daisuke),
        //.party = {.NoItemDefaultMoves = sParty_Daisuke},
    },

    [TRAINER_ATSUSHI] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Atsushi"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Atsushi),
        //.party = {.NoItemDefaultMoves = sParty_Atsushi},
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout7),
        //.party = {.NoItemDefaultMoves = sParty_GruntAquaHideout7},
    },

    [TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout8),
        //.party = {.NoItemDefaultMoves = sParty_GruntAquaHideout8},
    },

    [TRAINER_FERNANDO_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Fernando"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Fernando1),
        //.party = {.NoItemDefaultMoves = sParty_Fernando1},
    },

    [TRAINER_DALTON_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Dalton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dalton1),
        //.party = {.NoItemDefaultMoves = sParty_Dalton1},
    },

    [TRAINER_DALTON_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Dalton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dalton2),
        //.party = {.NoItemDefaultMoves = sParty_Dalton2},
    },

    [TRAINER_DALTON_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Dalton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dalton3),
        //.party = {.NoItemDefaultMoves = sParty_Dalton3},
    },

    [TRAINER_DALTON_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Dalton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dalton4),
        //.party = {.NoItemDefaultMoves = sParty_Dalton4},
    },

    [TRAINER_DALTON_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Dalton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dalton5),
        //.party = {.NoItemDefaultMoves = sParty_Dalton5},
    },

    [TRAINER_BERNIE_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Bernie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bernie1),
        //.party = {.NoItemDefaultMoves = sParty_Bernie1},
    },

    [TRAINER_BERNIE_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Bernie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bernie2),
        //.party = {.NoItemDefaultMoves = sParty_Bernie2},
    },

    [TRAINER_BERNIE_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Bernie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bernie3),
        //.party = {.NoItemDefaultMoves = sParty_Bernie3},
    },

    [TRAINER_BERNIE_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Bernie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bernie4),
        //.party = {.NoItemDefaultMoves = sParty_Bernie4},
    },

    [TRAINER_BERNIE_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Bernie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bernie5),
        //.party = {.NoItemDefaultMoves = sParty_Bernie5},
    },

    [TRAINER_DREW] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Drew"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Drew),
        //.party = {.NoItemCustomMoves = sParty_Drew},
    },

    [TRAINER_BEAU] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Beau"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Beau),
        //.party = {.NoItemCustomMoves = sParty_Beau},
    },

    [TRAINER_LARRY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Larry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Larry),
        //.party = {.NoItemDefaultMoves = sParty_Larry},
    },

    [TRAINER_SHANE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Shane"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Shane),
        //.party = {.NoItemDefaultMoves = sParty_Shane},
    },

    [TRAINER_JUSTIN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Justin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Justin),
        //.party = {.NoItemDefaultMoves = sParty_Justin},
    },

    [TRAINER_ETHAN_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Ethan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ethan1),
        //.party = {.NoItemDefaultMoves = sParty_Ethan1},
    },

    [TRAINER_AUTUMN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Autumn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Autumn),
        //.party = {.NoItemDefaultMoves = sParty_Autumn},
    },

    [TRAINER_TRAVIS] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Travis"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Travis),
        //.party = {.NoItemDefaultMoves = sParty_Travis},
    },

    [TRAINER_ETHAN_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Ethan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ethan2),
        //.party = {.NoItemDefaultMoves = sParty_Ethan2},
    },

    [TRAINER_ETHAN_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Ethan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ethan3),
        //.party = {.NoItemDefaultMoves = sParty_Ethan3},
    },

    [TRAINER_ETHAN_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Ethan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ethan4),
        //.party = {.NoItemDefaultMoves = sParty_Ethan4},
    },

    [TRAINER_ETHAN_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Ethan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ethan5),
        //.party = {.NoItemDefaultMoves = sParty_Ethan5},
    },

    [TRAINER_BRENT] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Brent"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Brent),
        //.party = {.NoItemDefaultMoves = sParty_Brent},
    },

    [TRAINER_DONALD] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Donald"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Donald),
        //.party = {.NoItemDefaultMoves = sParty_Donald},
    },

    [TRAINER_TAYLOR] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Taylor"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Taylor),
        //.party = {.NoItemDefaultMoves = sParty_Taylor},
    },

    [TRAINER_JEFFREY_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Jeffrey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jeffrey1),
        //.party = {.NoItemDefaultMoves = sParty_Jeffrey1},
    },

    [TRAINER_DEREK] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Derek"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Derek),
        //.party = {.NoItemDefaultMoves = sParty_Derek},
    },

    [TRAINER_JEFFREY_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Jeffrey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jeffrey2),
        //.party = {.NoItemDefaultMoves = sParty_Jeffrey2},
    },

    [TRAINER_JEFFREY_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Jeffrey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jeffrey3),
        //.party = {.NoItemDefaultMoves = sParty_Jeffrey3},
    },

    [TRAINER_JEFFREY_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Jeffrey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jeffrey4),
        //.party = {.NoItemDefaultMoves = sParty_Jeffrey4},
    },

    [TRAINER_JEFFREY_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Jeffrey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jeffrey5),
        //.party = {.ItemDefaultMoves = sParty_Jeffrey5},
    },

    [TRAINER_EDWARD] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Edward"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edward),
        //.party = {.NoItemCustomMoves = sParty_Edward},
    },

    // Gym Trainers - Roxanne
    [TRAINER_JOSH] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Josh"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Josh),
        .argument = TYPE_ROCK,
    },

    [TRAINER_TOMMY] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Tommy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tommy),
        .argument = TYPE_ROCK,
    },

    [TRAINER_MARC] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Marc"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Marc),
        .argument = TYPE_ROCK,
    },

    [TRAINER_SYLVIA] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Sylvia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_ROCK,
    },

    //Gym Trainers - Brawly
    [TRAINER_BRENDEN] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Brenden"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIGHTING,
    },

    [TRAINER_LILITH] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Lilith"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIGHTING,
    },

    [TRAINER_CRISTIAN] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Cristian"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIGHTING,
    },
    
    [TRAINER_CRUSH_GIRL_JOCELYN] = {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Jocelyn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIGHTING,
    },

    [TRAINER_TAKAO] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Takao"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIGHTING,
    },

    [TRAINER_LAURA] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Laura"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIGHTING,
    },

    //Gym Trainers Wattson
    [TRAINER_BEN] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Ben"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_ELECTRIC,
    },

    [TRAINER_VIVIAN] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Vivian"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_ELECTRIC,
    },

    [TRAINER_ANGELO] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Angelo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_ELECTRIC,
    },

    [TRAINER_KIRK] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Kirk"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_ELECTRIC,
    },
    
    [TRAINER_SHAWN] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Shawn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_ELECTRIC,
    },

    //Gym Trainers Flannery
    [TRAINER_ELI] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Eli"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIRE,
    },

    [TRAINER_GERALD] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Gerald"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIRE,
    },

    [TRAINER_DANIELLE] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Danielle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIRE,
    },
    
    [TRAINER_COLE] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Cole"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIRE,
    },

    [TRAINER_JEFF] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Jeff"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIRE,
    },

    [TRAINER_AXLE] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Axle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIRE,
    },

    [TRAINER_JACE] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Jace"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIRE,
    },

    [TRAINER_KEEGAN] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Keegan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIRE,
    },

    //Gym Trainers - Norman
    [TRAINER_RANDALL] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Randall"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_NORMAL,
    },

    [TRAINER_PARKER] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Parker"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_NORMAL,
    },

    [TRAINER_GEORGE] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("George"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_NORMAL,
    },

    [TRAINER_BERKE] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Berke"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_NORMAL,
    },

    [TRAINER_MARY] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Mary"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_NORMAL,
    },

    [TRAINER_ALEXIA] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Alexia"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_NORMAL,
    },

    [TRAINER_JODY] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Jody"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_NORMAL,
    },

    //Gym Trainers - Winona

    [TRAINER_FLINT] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Flint"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Flint),
        .argument = TYPE_FLYING,
    },

    [TRAINER_ASHLEY] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Ashley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ashley),
        .argument = TYPE_FLYING,
    },

    [TRAINER_DARIUS] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Darius"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Darius),
        .argument = TYPE_FLYING,
    },

    [TRAINER_JARED] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Jared"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jared),
        .argument = TYPE_FLYING,
    },

    [TRAINER_HUMBERTO] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Humberto"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Humberto),
        .argument = TYPE_FLYING,
    },

    [TRAINER_EDWARDO] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Edwardo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edwardo),
        .argument = TYPE_FLYING,
    },
    
    //Gym Trainer - T & L ----------------------------------------------------------------------------------
    [TRAINER_SAMANTHA] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Samantha"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_PSYCHIC,
    },

    [TRAINER_HANNAH] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Hannah"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_PSYCHIC,
    },

    [TRAINER_NICHOLAS] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Nicholas"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_PSYCHIC,
    },

    [TRAINER_MAURA] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Maura"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_PSYCHIC,
    },

    [TRAINER_NATE] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Nate"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_PSYCHIC,
    },

    [TRAINER_CLIFFORD] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Clifford"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_PSYCHIC,
    },

    [TRAINER_VIRGIL] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Virgil"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_PSYCHIC,
    },

    [TRAINER_KATHLEEN] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Kathleen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_PSYCHIC,
    },
    // ----------------------------------------------------------------------------------

    [TRAINER_DAPHNE] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Daphne"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Daphne),
        .argument = TYPE_FLYING,
    },

    [TRAINER_BRIANNA] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Brianna"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Brianna),
        .argument = TYPE_WATER,
    },

    [TRAINER_CONNIE] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Connie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Connie),
        .argument = TYPE_WATER,
    },

    [TRAINER_BRIDGET] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Bridget"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bridget),
        .argument = TYPE_WATER,
    },

    [TRAINER_OLIVIA] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Olivia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Olivia),
        .argument = TYPE_WATER,
    },

    [TRAINER_TIFFANY] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Tiffany"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tiffany),
        .argument = TYPE_WATER,
    },

    [TRAINER_BETHANY] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Bethany"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bethany),
        .argument = TYPE_WATER,
    },

    [TRAINER_ANNIKA] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Annika"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Annika),
        .argument = TYPE_WATER,
    },

    [TRAINER_ANDREA] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Andrea"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andrea),
        .argument = TYPE_WATER,
    },

    [TRAINER_CRISSY] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Crissy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Crissy),
        .argument = TYPE_WATER,
    },

    // ----------------------------------------------------------------------------
    [TRAINER_PRESTON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Preston"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Preston),
        //.party = {.NoItemDefaultMoves = sParty_Preston},
    },

    [TRAINER_BLAKE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Blake"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Blake),
        //.party = {.NoItemDefaultMoves = sParty_Blake},
    },

    [TRAINER_WILLIAM] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("William"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_William),
        //.party = {.NoItemDefaultMoves = sParty_William},
    },

    [TRAINER_JOSHUA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Joshua"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Joshua),
        //.party = {.NoItemDefaultMoves = sParty_Joshua},
    },

    [TRAINER_CAMERON_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Cameron"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cameron1),
        //.party = {.NoItemDefaultMoves = sParty_Cameron1},
    },

    [TRAINER_CAMERON_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Cameron"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cameron2),
        //.party = {.NoItemDefaultMoves = sParty_Cameron2},
    },

    [TRAINER_CAMERON_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Cameron"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cameron3),
        //.party = {.NoItemDefaultMoves = sParty_Cameron3},
    },

    [TRAINER_CAMERON_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Cameron"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cameron4),
        //.party = {.NoItemDefaultMoves = sParty_Cameron4},
    },

    [TRAINER_CAMERON_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Cameron"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cameron5),
        //.party = {.NoItemDefaultMoves = sParty_Cameron5},
    },

    [TRAINER_JACLYN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Jaclyn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jaclyn),
        //.party = {.NoItemCustomMoves = sParty_Jaclyn},
    },

    [TRAINER_KAYLA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Kayla"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kayla),
        //.party = {.NoItemDefaultMoves = sParty_Kayla},
    },

    [TRAINER_ALEXIS] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Alexis"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alexis),
        //.party = {.NoItemDefaultMoves = sParty_Alexis},
    },

    [TRAINER_JACKI_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Jacki"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jacki1),
        //.party = {.NoItemDefaultMoves = sParty_Jacki1},
    },

    [TRAINER_JACKI_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Jacki"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jacki2),
        //.party = {.NoItemDefaultMoves = sParty_Jacki2},
    },

    [TRAINER_JACKI_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Jacki"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jacki3),
        //.party = {.NoItemDefaultMoves = sParty_Jacki3},
    },

    [TRAINER_JACKI_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Jacki"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jacki4),
        //.party = {.NoItemDefaultMoves = sParty_Jacki4},
    },

    [TRAINER_JACKI_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Jacki"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jacki5),
        //.party = {.NoItemDefaultMoves = sParty_Jacki5},
    },

    [TRAINER_WALTER_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Walter"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Walter1),
        //.party = {.NoItemDefaultMoves = sParty_Walter1},
    },

    [TRAINER_MICAH] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Micah"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Micah),
        //.party = {.NoItemDefaultMoves = sParty_Micah},
    },

    [TRAINER_THOMAS] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Thomas"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Thomas),
        //.party = {.NoItemDefaultMoves = sParty_Thomas},
    },

    [TRAINER_WALTER_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Walter"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Walter2),
        //.party = {.NoItemDefaultMoves = sParty_Walter2},
    },

    [TRAINER_WALTER_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Walter"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Walter3),
        //.party = {.NoItemCustomMoves = sParty_Walter3},
    },

    [TRAINER_WALTER_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Walter"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Walter4),
        //.party = {.NoItemCustomMoves = sParty_Walter4},
    },

    [TRAINER_WALTER_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Walter"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Walter5),
        //.party = {.NoItemCustomMoves = sParty_Walter5},
    },

    //Leaders Sevii
    [TRAINER_LEADER_FALKNER] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_FALKNER,
        .trainerName = _("Falkner"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Falkner),
        .party2 = sParty_Falkner2,
    },

    [TRAINER_LEADER_BUGSY] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BUGSY,
        .trainerName = _("Bugsy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Bugsy),
        .party2 = sParty_Bugsy2,
    },

    [TRAINER_LEADER_WHITNEY] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WHITNEY,
        .trainerName = _("Whitney"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party  = TRAINER_PARTY(sParty_Whitney),
        .party2 = sParty_Whitney2,
    },

    [TRAINER_LEADER_MORTY] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_MORTY,
        .trainerName = _("Morty"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Morty),
        .party2 = sParty_Morty2,
    },

    [TRAINER_LEADER_CHUCK] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .trainerName = _("Chuck"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Chuck),
        .party2 = sParty_Chuck2,
    },

    [TRAINER_LEADER_JASMINE] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .trainerName = _("Jasmine"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Leader_Jasmine),
        .party2 = sParty_Leader_Jasmine2,
    },

    [TRAINER_LEADER_PRYCE] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .trainerName = _("Pryce"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Pryce),
        .party2 = sParty_Pryce2,
    },

    [TRAINER_LEADER_CLAIR] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_CLAIR,
        .trainerName = _("Clair"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Clair),
        .party2 = sParty_Clair2,
    },

    //Gyms Hoenn
    [TRAINER_ROXANNE_1] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("Roxanne"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Roxanne1),
        //.party = {.ItemCustomMoves = sParty_Roxanne1},
    },

    [TRAINER_BRAWLY_1] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("Brawly"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brawly1),
        //.party = {.ItemCustomMoves = sParty_Brawly1},
    },

    [TRAINER_WATTSON_1] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("Wattson"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wattson1),
        //.party = {.ItemCustomMoves = sParty_Wattson1},
    },

    [TRAINER_FLANNERY_1] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("Flannery"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Flannery1),
        //.party = {.ItemCustomMoves = sParty_Flannery1},
    },

    [TRAINER_NORMAN_1] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("Norman"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Norman1),
        //.party = {.ItemCustomMoves = sParty_Norman1},
    },

    [TRAINER_WINONA_1] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("Winona"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY,
        .party = TRAINER_PARTY(sParty_Winona1),
        //.party = {.ItemCustomMoves = sParty_Winona1},
    },

    [TRAINER_TATE_AND_LIZA_1] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("Tate&Liza"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TateAndLiza1),
        //.party = {.ItemCustomMoves = sParty_TateAndLiza1},
    },

    [TRAINER_JUAN_1] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("Juan"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Juan1),
        //.party = {.ItemCustomMoves = sParty_Juan1},
    },

    [TRAINER_JERRY_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Jerry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jerry1),
        //.party = {.NoItemDefaultMoves = sParty_Jerry1},
    },

    [TRAINER_TED] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Ted"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ted),
        //.party = {.NoItemDefaultMoves = sParty_Ted},
    },

    [TRAINER_PAUL] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Paul"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Paul),
        //.party = {.NoItemDefaultMoves = sParty_Paul},
    },

    [TRAINER_JERRY_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Jerry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jerry2),
        //.party = {.NoItemDefaultMoves = sParty_Jerry2},
    },

    [TRAINER_JERRY_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Jerry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jerry3),
        //.party = {.NoItemDefaultMoves = sParty_Jerry3},
    },

    [TRAINER_JERRY_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Jerry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jerry4),
        //.party = {.NoItemDefaultMoves = sParty_Jerry4},
    },

    [TRAINER_JERRY_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Jerry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jerry5),
        //.party = {.NoItemDefaultMoves = sParty_Jerry5},
    },

    [TRAINER_KAREN_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("Karen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Karen1),
        //.party = {.NoItemDefaultMoves = sParty_Karen1},
    },

    [TRAINER_GEORGIA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("Georgia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Georgia),
        //.party = {.NoItemDefaultMoves = sParty_Georgia},
    },

    [TRAINER_KAREN_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("Karen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Karen2),
        //.party = {.NoItemDefaultMoves = sParty_Karen2},
    },

    [TRAINER_KAREN_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("Karen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Karen3),
        //.party = {.NoItemDefaultMoves = sParty_Karen3},
    },

    [TRAINER_KAREN_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("Karen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Karen4),
        //.party = {.NoItemDefaultMoves = sParty_Karen4},
    },

    [TRAINER_KAREN_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .trainerName = _("Karen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Karen5),
        //.party = {.NoItemDefaultMoves = sParty_Karen5},
    },

    [TRAINER_KATE_AND_JOY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Kate & Joy"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KateAndJoy),
        //.party = {.NoItemCustomMoves = sParty_KateAndJoy},
    },

    [TRAINER_ANNA_AND_MEG_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Anna & Meg"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AnnaAndMeg1),
        //.party = {.NoItemCustomMoves = sParty_AnnaAndMeg1},
    },

    [TRAINER_ANNA_AND_MEG_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Anna & Meg"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AnnaAndMeg2),
        //.party = {.NoItemCustomMoves = sParty_AnnaAndMeg2},
    },

    [TRAINER_ANNA_AND_MEG_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Anna & Meg"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AnnaAndMeg3),
        //.party = {.NoItemCustomMoves = sParty_AnnaAndMeg3},
    },

    [TRAINER_ANNA_AND_MEG_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Anna & Meg"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AnnaAndMeg4),
        //.party = {.NoItemCustomMoves = sParty_AnnaAndMeg4},
    },

    [TRAINER_ANNA_AND_MEG_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Anna & Meg"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AnnaAndMeg5),
        //.party = {.NoItemCustomMoves = sParty_AnnaAndMeg5},
    },

    [TRAINER_VICTOR] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Victor"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Victor),
        //.party = {.ItemDefaultMoves = sParty_Victor},
    },

    [TRAINER_MIGUEL_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Miguel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Miguel1),
        //.party = {.ItemDefaultMoves = sParty_Miguel1},
    },

    [TRAINER_COLTON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Colton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Colton),
        //.party = {.ItemCustomMoves = sParty_Colton},
    },

    [TRAINER_MIGUEL_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Miguel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Miguel2),
        //.party = {.ItemDefaultMoves = sParty_Miguel2},
    },

    [TRAINER_MIGUEL_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Miguel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Miguel3),
        //.party = {.ItemDefaultMoves = sParty_Miguel3},
    },

    [TRAINER_MIGUEL_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Miguel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Miguel4),
        //.party = {.ItemDefaultMoves = sParty_Miguel4},
    },

    [TRAINER_MIGUEL_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Miguel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Miguel5),
        //.party = {.ItemDefaultMoves = sParty_Miguel5},
    },

    [TRAINER_VICTORIA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Victoria"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_Victoria),
        //.party = {.ItemDefaultMoves = sParty_Victoria},
    },

    [TRAINER_VANESSA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Vanessa"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Vanessa),
        //.party = {.ItemDefaultMoves = sParty_Vanessa},
    },

    [TRAINER_ISABEL_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Isabel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isabel1),
        //.party = {.ItemDefaultMoves = sParty_Isabel1},
    },

    [TRAINER_ISABEL_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Isabel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isabel2),
        //.party = {.ItemDefaultMoves = sParty_Isabel2},
    },

    [TRAINER_ISABEL_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Isabel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isabel3),
        //.party = {.ItemDefaultMoves = sParty_Isabel3},
    },

    [TRAINER_ISABEL_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Isabel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isabel4),
        //.party = {.ItemDefaultMoves = sParty_Isabel4},
    },

    [TRAINER_ISABEL_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .trainerName = _("Isabel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isabel5),
        //.party = {.ItemDefaultMoves = sParty_Isabel5},
    },

    [TRAINER_TIMOTHY_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Timothy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Timothy1),
        //.party = {.NoItemDefaultMoves = sParty_Timothy1},
    },

    [TRAINER_TIMOTHY_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Timothy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Timothy2),
        //.party = {.NoItemCustomMoves = sParty_Timothy2},
    },

    [TRAINER_TIMOTHY_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Timothy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Timothy3),
        //.party = {.NoItemCustomMoves = sParty_Timothy3},
    },

    [TRAINER_TIMOTHY_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Timothy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Timothy4),
        //.party = {.NoItemCustomMoves = sParty_Timothy4},
    },

    [TRAINER_TIMOTHY_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Timothy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Timothy5),
        //.party = {.NoItemCustomMoves = sParty_Timothy5},
    },

    [TRAINER_VICKY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Vicky"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Vicky),
        //.party = {.NoItemCustomMoves = sParty_Vicky},
    },

    [TRAINER_SHELBY_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Shelby"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Shelby1),
        //.party = {.NoItemDefaultMoves = sParty_Shelby1},
    },

    [TRAINER_SHELBY_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Shelby"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Shelby2),
        //.party = {.NoItemDefaultMoves = sParty_Shelby2},
    },

    [TRAINER_SHELBY_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Shelby"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Shelby3),
        //.party = {.NoItemDefaultMoves = sParty_Shelby3},
    },

    [TRAINER_SHELBY_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Shelby"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Shelby4),
        //.party = {.NoItemDefaultMoves = sParty_Shelby4},
    },

    [TRAINER_SHELBY_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Shelby"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Shelby5),
        //.party = {.NoItemDefaultMoves = sParty_Shelby5},
    },

    [TRAINER_CALVIN_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Calvin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Calvin1),
        //.party = {.NoItemDefaultMoves = sParty_Calvin1},
    },

    [TRAINER_BILLY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Billy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Billy),
        //.party = {.NoItemDefaultMoves = sParty_Billy},
    },

    [TRAINER_JOEY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Joey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Joey),
        //.party = {.NoItemDefaultMoves = sParty_Joey},
    },

    [TRAINER_QUINCY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Quincy"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Quincy),
        //.party = {.NoItemCustomMoves = sParty_Quincy},
    },

    [TRAINER_KATELYNN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Katelynn"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Katelynn),
        //.party = {.NoItemCustomMoves = sParty_Katelynn},
    },

    [TRAINER_JAYLEN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Jaylen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jaylen),
        //.party = {.NoItemDefaultMoves = sParty_Jaylen},
    },

    [TRAINER_DILLON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Dillon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dillon),
        //.party = {.NoItemDefaultMoves = sParty_Dillon},
    },

    [TRAINER_CALVIN_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Calvin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Calvin2),
        //.party = {.NoItemDefaultMoves = sParty_Calvin2},
    },

    [TRAINER_CALVIN_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Calvin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Calvin3),
        //.party = {.NoItemDefaultMoves = sParty_Calvin3},
    },

    [TRAINER_CALVIN_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Calvin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Calvin4),
        //.party = {.NoItemDefaultMoves = sParty_Calvin4},
    },

    [TRAINER_CALVIN_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Calvin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Calvin5),
        //.party = {.NoItemDefaultMoves = sParty_Calvin5},
    },

    [TRAINER_EDDIE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Eddie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Eddie),
        //.party = {.NoItemDefaultMoves = sParty_Eddie},
    },

    [TRAINER_ALLEN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Allen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Allen),
        //.party = {.NoItemDefaultMoves = sParty_Allen},
    },

    [TRAINER_TIMMY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Timmy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Timmy),
        //.party = {.NoItemDefaultMoves = sParty_Timmy},
    },

    //Elite Four
    [TRAINER_SIDNEY] =
    {
        .partyLevel     = TRAINER_LEVEL_POSTGAME,
        .trainerClass   = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic     = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .trainerName    = _("Sidney"),
        .items          = {},
        .doubleBattle   = FALSE,
        .aiFlags        = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party          = TRAINER_PARTY(sParty_Sidney),
        .party2         = sParty_Sidney_2,
        .partyDoubles   = sParty_Sidney_Doubles,
        .partyDoubles2  = sParty_Sidney_Doubles_2,
    },

    [TRAINER_PHOEBE] =
    {
        .partyLevel     = TRAINER_LEVEL_POSTGAME,
        .trainerClass   = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic     = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .trainerName    = _("Phoebe"),
        .items          = {},
        .doubleBattle   = FALSE,
        .aiFlags        = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party          = TRAINER_PARTY(sParty_Phoebe),
        .party2         = sParty_Phoebe_2,
        .partyDoubles   = sParty_Phoebe_Doubles,
        .partyDoubles2  = sParty_Phoebe_Doubles_2,
    },

    [TRAINER_GLACIA] =
    {
        .partyLevel     = TRAINER_LEVEL_POSTGAME,
        .trainerClass   = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic     = TRAINER_PIC_ELITE_FOUR_GLACIA,
        .trainerName    = _("Glacia"),
        .items          = {},
        .doubleBattle   = FALSE,
        .aiFlags        = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party          = TRAINER_PARTY(sParty_Glacia),
        .party2         = sParty_Glacia_2,
        .partyDoubles   = sParty_Glacia_Doubles,
        .partyDoubles2  = sParty_Glacia_Doubles_2,
    },

    [TRAINER_DRAKE] =
    {
        .partyLevel     = TRAINER_LEVEL_POSTGAME,
        .trainerClass   = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic     = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .trainerName    = _("Drake"),
        .items          = {},
        .doubleBattle   = FALSE,
        .aiFlags        = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party          = TRAINER_PARTY(sParty_Drake),
        .party2         = sParty_Drake_2,
        .partyDoubles   = sParty_Drake_Doubles,
        .partyDoubles2  = sParty_Drake_Doubles_2,
    },

    //Champion
    [TRAINER_WALLACE] =
    {
        .partyLevel     = TRAINER_LEVEL_POSTGAME,
        .trainerClass   = TRAINER_CLASS_CHAMPION,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic     = TRAINER_PIC_CHAMPION_WALLACE,
        .trainerName    = _("Wallace"),
        .items          = {},
        .doubleBattle   = FALSE,
        .aiFlags        = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_SETUP_FIRST_TURN,
        .party          = TRAINER_PARTY(sParty_Wallace),
        .party2         = sParty_Wallace_2,
        .partyDoubles   = sParty_Wallace_Doubles,
        .partyDoubles2  = sParty_Wallace_Doubles_2,
    },

    [TRAINER_ANDREW] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Andrew"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andrew),
        //.party = {.NoItemDefaultMoves = sParty_Andrew},
    },

    [TRAINER_IVAN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Ivan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ivan),
        //.party = {.NoItemDefaultMoves = sParty_Ivan},
    },

    [TRAINER_CLAUDE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Claude"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Claude),
        //.party = {.NoItemDefaultMoves = sParty_Claude},
    },

    [TRAINER_ELLIOT_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Elliot"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Elliot1),
        //.party = {.NoItemDefaultMoves = sParty_Elliot1},
    },

    [TRAINER_NED] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Ned"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ned),
        //.party = {.NoItemDefaultMoves = sParty_Ned},
    },

    [TRAINER_DALE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Dale"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dale),
        //.party = {.NoItemDefaultMoves = sParty_Dale},
    },

    [TRAINER_NOLAN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Nolan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nolan),
        //.party = {.NoItemDefaultMoves = sParty_Nolan},
    },

    [TRAINER_BARNY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Barny"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Barny),
        //.party = {.NoItemDefaultMoves = sParty_Barny},
    },

    [TRAINER_WADE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Wade"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Wade),
        //.party = {.NoItemDefaultMoves = sParty_Wade},
    },

    [TRAINER_CARTER] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Carter"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Carter),
        //.party = {.NoItemDefaultMoves = sParty_Carter},
    },

    [TRAINER_ELLIOT_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Elliot"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Elliot2),
        //.party = {.NoItemDefaultMoves = sParty_Elliot2},
    },

    [TRAINER_ELLIOT_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Elliot"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Elliot3),
        //.party = {.NoItemDefaultMoves = sParty_Elliot3},
    },

    [TRAINER_ELLIOT_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Elliot"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Elliot4),
        //.party = {.NoItemDefaultMoves = sParty_Elliot4},
    },

    [TRAINER_ELLIOT_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Elliot"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_Elliot5),
        //.party = {.NoItemDefaultMoves = sParty_Elliot5},
    },

    [TRAINER_RONALD] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Ronald"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ronald),
        //.party = {.NoItemDefaultMoves = sParty_Ronald},
    },

    [TRAINER_JACOB] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("Jacob"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jacob),
        //.party = {.NoItemDefaultMoves = sParty_Jacob},
    },

    [TRAINER_ANTHONY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("Anthony"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Anthony),
        //.party = {.NoItemDefaultMoves = sParty_Anthony},
    },

    [TRAINER_BENJAMIN_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("Benjamin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Benjamin1),
        //.party = {.NoItemDefaultMoves = sParty_Benjamin1},
    },

    [TRAINER_BENJAMIN_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("Benjamin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Benjamin2),
        //.party = {.NoItemDefaultMoves = sParty_Benjamin2},
    },

    [TRAINER_BENJAMIN_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("Benjamin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Benjamin3),
        //.party = {.NoItemDefaultMoves = sParty_Benjamin3},
    },

    [TRAINER_BENJAMIN_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("Benjamin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Benjamin4),
        //.party = {.NoItemDefaultMoves = sParty_Benjamin4},
    },

    [TRAINER_BENJAMIN_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("Benjamin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Benjamin5),
        //.party = {.NoItemDefaultMoves = sParty_Benjamin5},
    },

    [TRAINER_ABIGAIL_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("Abigail"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Abigail1),
        //.party = {.NoItemDefaultMoves = sParty_Abigail1},
    },

    [TRAINER_JASMINE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("Jasmine"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jasmine),
        //.party = {.NoItemDefaultMoves = sParty_Jasmine},
    },

    [TRAINER_ABIGAIL_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("Abigail"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Abigail2),
        //.party = {.NoItemDefaultMoves = sParty_Abigail2},
    },

    [TRAINER_ABIGAIL_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("Abigail"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Abigail3),
        //.party = {.NoItemDefaultMoves = sParty_Abigail3},
    },

    [TRAINER_ABIGAIL_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("Abigail"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Abigail4),
        //.party = {.NoItemDefaultMoves = sParty_Abigail4},
    },

    [TRAINER_ABIGAIL_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("Abigail"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Abigail5),
        //.party = {.NoItemDefaultMoves = sParty_Abigail5},
    },

    [TRAINER_DYLAN_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("Dylan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dylan1),
        //.party = {.NoItemDefaultMoves = sParty_Dylan1},
    },

    [TRAINER_DYLAN_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("Dylan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dylan2),
        //.party = {.NoItemDefaultMoves = sParty_Dylan2},
    },

    [TRAINER_DYLAN_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("Dylan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dylan3),
        //.party = {.NoItemDefaultMoves = sParty_Dylan3},
    },

    [TRAINER_DYLAN_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("Dylan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dylan4),
        //.party = {.NoItemDefaultMoves = sParty_Dylan4},
    },

    [TRAINER_DYLAN_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .trainerName = _("Dylan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dylan5),
        //.party = {.NoItemDefaultMoves = sParty_Dylan5},
    },

    [TRAINER_MARIA_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("Maria"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Maria1),
        //.party = {.NoItemDefaultMoves = sParty_Maria1},
    },

    [TRAINER_MARIA_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("Maria"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Maria2),
        //.party = {.NoItemDefaultMoves = sParty_Maria2},
    },

    [TRAINER_MARIA_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("Maria"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Maria3),
        //.party = {.NoItemDefaultMoves = sParty_Maria3},
    },

    [TRAINER_MARIA_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("Maria"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Maria4),
        //.party = {.NoItemDefaultMoves = sParty_Maria4},
    },

    [TRAINER_MARIA_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("Maria"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Maria5),
        //.party = {.NoItemDefaultMoves = sParty_Maria5},
    },

    [TRAINER_CAMDEN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Camden"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Camden),
        //.party = {.NoItemDefaultMoves = sParty_Camden},
    },

    [TRAINER_DEMETRIUS] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Demetrius"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Demetrius),
        //.party = {.NoItemDefaultMoves = sParty_Demetrius},
    },

    [TRAINER_ISAIAH_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Isaiah"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaiah1),
        //.party = {.NoItemDefaultMoves = sParty_Isaiah1},
    },

    [TRAINER_PABLO_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Pablo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pablo1),
        //.party = {.NoItemDefaultMoves = sParty_Pablo1},
    },

    [TRAINER_CHASE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Chase"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Chase),
        //.party = {.NoItemDefaultMoves = sParty_Chase},
    },

    [TRAINER_ISAIAH_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Isaiah"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaiah2),
        //.party = {.NoItemDefaultMoves = sParty_Isaiah2},
    },

    [TRAINER_ISAIAH_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Isaiah"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaiah3),
        //.party = {.NoItemDefaultMoves = sParty_Isaiah3},
    },

    [TRAINER_ISAIAH_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Isaiah"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaiah4),
        //.party = {.NoItemDefaultMoves = sParty_Isaiah4},
    },

    [TRAINER_ISAIAH_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Isaiah"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaiah5),
        //.party = {.NoItemDefaultMoves = sParty_Isaiah5},
    },

    [TRAINER_ISOBEL] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Isobel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isobel),
        //.party = {.NoItemDefaultMoves = sParty_Isobel},
    },

    [TRAINER_DONNY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Donny"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Donny),
        //.party = {.NoItemDefaultMoves = sParty_Donny},
    },

    [TRAINER_TALIA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Talia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Talia),
        //.party = {.NoItemDefaultMoves = sParty_Talia},
    },

    [TRAINER_KATELYN_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Katelyn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Katelyn1),
        //.party = {.NoItemDefaultMoves = sParty_Katelyn1},
    },

    [TRAINER_ALLISON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Allison"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Allison),
        //.party = {.NoItemDefaultMoves = sParty_Allison},
    },

    [TRAINER_KATELYN_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Katelyn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Katelyn2),
        //.party = {.NoItemDefaultMoves = sParty_Katelyn2},
    },

    [TRAINER_KATELYN_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Katelyn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Katelyn3),
        //.party = {.NoItemDefaultMoves = sParty_Katelyn3},
    },

    [TRAINER_KATELYN_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Katelyn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Katelyn4),
        //.party = {.NoItemDefaultMoves = sParty_Katelyn4},
    },

    [TRAINER_KATELYN_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Katelyn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Katelyn5),
        //.party = {.NoItemDefaultMoves = sParty_Katelyn5},
    },

    [TRAINER_NICOLAS_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Nicolas"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nicolas1),
        //.party = {.NoItemDefaultMoves = sParty_Nicolas1},
    },

    [TRAINER_NICOLAS_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Nicolas"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nicolas2),
        //.party = {.NoItemDefaultMoves = sParty_Nicolas2},
    },

    [TRAINER_NICOLAS_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Nicolas"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nicolas3),
        //.party = {.NoItemDefaultMoves = sParty_Nicolas3},
    },

    [TRAINER_NICOLAS_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Nicolas"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nicolas4),
        //.party = {.NoItemDefaultMoves = sParty_Nicolas4},
    },

    [TRAINER_NICOLAS_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Nicolas"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nicolas5),
        //.party = {.ItemDefaultMoves = sParty_Nicolas5},
    },

    [TRAINER_AARON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Aaron"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Aaron),
        //.party = {.NoItemCustomMoves = sParty_Aaron},
    },

    [TRAINER_PERRY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Perry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Perry),
        //.party = {.NoItemDefaultMoves = sParty_Perry},
    },

    [TRAINER_HUGH] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Hugh"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Hugh),
        //.party = {.NoItemDefaultMoves = sParty_Hugh},
    },

    [TRAINER_DANNY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("Danny"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Danny),
        //.party = {.NoItemDefaultMoves = sParty_Danny},
    },

    [TRAINER_PRESLEY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Presley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Presley),
        //.party = {.NoItemDefaultMoves = sParty_Presley},
    },

    [TRAINER_COLIN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Colin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Colin),
        //.party = {.NoItemDefaultMoves = sParty_Colin},
    },

    [TRAINER_ROBERT_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Robert"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Robert1),
        //.party = {.NoItemDefaultMoves = sParty_Robert1},
    },

    [TRAINER_BENNY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Benny"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Benny),
        //.party = {.NoItemDefaultMoves = sParty_Benny},
    },

    [TRAINER_CHESTER] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Chester"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Chester),
        //.party = {.NoItemDefaultMoves = sParty_Chester},
    },

    [TRAINER_ROBERT_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Robert"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Robert2),
        //.party = {.NoItemDefaultMoves = sParty_Robert2},
    },

    [TRAINER_ROBERT_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Robert"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Robert3),
        //.party = {.NoItemDefaultMoves = sParty_Robert3},
    },

    [TRAINER_ROBERT_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Robert"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Robert4),
        //.party = {.NoItemDefaultMoves = sParty_Robert4},
    },

    [TRAINER_ROBERT_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Robert"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Robert5),
        //.party = {.NoItemDefaultMoves = sParty_Robert5},
    },

    [TRAINER_ALEX] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Alex"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alex),
        //.party = {.NoItemDefaultMoves = sParty_Alex},
    },

    [TRAINER_BECK] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Beck"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Beck),
        //.party = {.NoItemDefaultMoves = sParty_Beck},
    },

    [TRAINER_YASU] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Yasu"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_Yasu),
        //.party = {.NoItemDefaultMoves = sParty_Yasu},
    },

    [TRAINER_TAKASHI] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Takashi"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_Takashi),
        //.party = {.NoItemDefaultMoves = sParty_Takashi},
    },

    [TRAINER_DIANNE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Dianne"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Dianne),
        //.party = {.ItemCustomMoves = sParty_Dianne},
    },

    [TRAINER_JANI] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Jani"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Jani),
        //.party = {.NoItemDefaultMoves = sParty_Jani},
    },

    [TRAINER_LAO_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Lao"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Lao1),
        //.party = {.NoItemCustomMoves = sParty_Lao1},
    },

    [TRAINER_LUNG] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Lung"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Lung),
        //.party = {.NoItemDefaultMoves = sParty_Lung},
    },

    [TRAINER_LAO_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Lao"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Lao2),
        //.party = {.NoItemCustomMoves = sParty_Lao2},
    },

    [TRAINER_LAO_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Lao"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Lao3),
        //.party = {.NoItemCustomMoves = sParty_Lao3},
    },

    [TRAINER_LAO_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Lao"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Lao4),
        //.party = {.NoItemCustomMoves = sParty_Lao4},
    },

    [TRAINER_LAO_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Lao"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Lao5),
        //.party = {.ItemCustomMoves = sParty_Lao5},
    },

    [TRAINER_JOCELYN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Jocelyn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jocelyn),
        //.party = {.NoItemDefaultMoves = sParty_Jocelyn},
    },

    [TRAINER_CYNDY_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Cyndy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cyndy1),
        //.party = {.NoItemDefaultMoves = sParty_Cyndy1},
    },

    [TRAINER_CORA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Cora"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cora),
        //.party = {.NoItemDefaultMoves = sParty_Cora},
    },

    [TRAINER_PAULA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Paula"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Paula),
        //.party = {.NoItemDefaultMoves = sParty_Paula},
    },

    [TRAINER_CYNDY_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Cyndy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cyndy2),
        //.party = {.NoItemDefaultMoves = sParty_Cyndy2},
    },

    [TRAINER_CYNDY_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Cyndy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cyndy3),
        //.party = {.NoItemDefaultMoves = sParty_Cyndy3},
    },

    [TRAINER_CYNDY_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Cyndy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cyndy4),
        //.party = {.NoItemDefaultMoves = sParty_Cyndy4},
    },

    [TRAINER_CYNDY_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Cyndy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cyndy5),
        //.party = {.NoItemDefaultMoves = sParty_Cyndy5},
    },

    [TRAINER_MADELINE_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Madeline"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Madeline1),
        //.party = {.NoItemCustomMoves = sParty_Madeline1},
    },

    [TRAINER_CLARISSA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Clarissa"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Clarissa),
        //.party = {.NoItemDefaultMoves = sParty_Clarissa},
    },

    [TRAINER_ANGELICA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Angelica"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Angelica),
        //.party = {.NoItemCustomMoves = sParty_Angelica},
    },

    [TRAINER_MADELINE_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Madeline"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Madeline2),
        //.party = {.NoItemCustomMoves = sParty_Madeline2},
    },

    [TRAINER_MADELINE_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Madeline"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Madeline3),
        //.party = {.NoItemCustomMoves = sParty_Madeline3},
    },

    [TRAINER_MADELINE_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Madeline"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Madeline4),
        //.party = {.NoItemCustomMoves = sParty_Madeline4},
    },

    [TRAINER_MADELINE_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Madeline"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Madeline5),
        //.party = {.NoItemCustomMoves = sParty_Madeline5},
    },

    [TRAINER_BEVERLY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Beverly"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Beverly),
        //.party = {.NoItemDefaultMoves = sParty_Beverly},
    },

    [TRAINER_IMANI] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Imani"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Imani),
        //.party = {.NoItemDefaultMoves = sParty_Imani},
    },

    [TRAINER_KYLA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Kyla"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kyla),
        //.party = {.NoItemDefaultMoves = sParty_Kyla},
    },

    [TRAINER_DENISE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Denise"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Denise),
        //.party = {.NoItemDefaultMoves = sParty_Denise},
    },

    [TRAINER_BETH] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Beth"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Beth),
        //.party = {.NoItemDefaultMoves = sParty_Beth},
    },

    [TRAINER_TARA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Tara"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tara),
        //.party = {.NoItemDefaultMoves = sParty_Tara},
    },

    [TRAINER_MISSY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Missy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Missy),
        //.party = {.NoItemDefaultMoves = sParty_Missy},
    },

    [TRAINER_ALICE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Alice"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alice),
        //.party = {.NoItemDefaultMoves = sParty_Alice},
    },

    [TRAINER_JENNY_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Jenny"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jenny1),
        //.party = {.NoItemDefaultMoves = sParty_Jenny1},
    },

    [TRAINER_GRACE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Grace"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Grace),
        //.party = {.NoItemDefaultMoves = sParty_Grace},
    },

    [TRAINER_TANYA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Tanya"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tanya),
        //.party = {.NoItemDefaultMoves = sParty_Tanya},
    },

    [TRAINER_SHARON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Sharon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sharon),
        //.party = {.NoItemDefaultMoves = sParty_Sharon},
    },

    [TRAINER_NIKKI] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Nikki"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nikki),
        //.party = {.NoItemDefaultMoves = sParty_Nikki},
    },

    [TRAINER_BRENDA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Brenda"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Brenda),
        //.party = {.NoItemDefaultMoves = sParty_Brenda},
    },

    [TRAINER_KATIE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Katie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Katie),
        //.party = {.NoItemDefaultMoves = sParty_Katie},
    },

    [TRAINER_SUSIE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Susie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Susie),
        //.party = {.NoItemDefaultMoves = sParty_Susie},
    },

    [TRAINER_KARA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Kara"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kara),
        //.party = {.NoItemDefaultMoves = sParty_Kara},
    },

    [TRAINER_DANA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Dana"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dana),
        //.party = {.NoItemDefaultMoves = sParty_Dana},
    },

    [TRAINER_SIENNA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Sienna"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sienna),
        //.party = {.NoItemDefaultMoves = sParty_Sienna},
    },

    [TRAINER_DEBRA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Debra"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Debra),
        //.party = {.NoItemDefaultMoves = sParty_Debra},
    },

    [TRAINER_LINDA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Linda"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Linda),
        //.party = {.NoItemDefaultMoves = sParty_Linda},
    },

    [TRAINER_KAYLEE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Kaylee"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kaylee),
        //.party = {.NoItemDefaultMoves = sParty_Kaylee},
    },

    [TRAINER_LAUREL] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Laurel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Laurel),
        //.party = {.NoItemDefaultMoves = sParty_Laurel},
    },

    [TRAINER_CARLEE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Carlee"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Carlee),
        //.party = {.NoItemDefaultMoves = sParty_Carlee},
    },

    [TRAINER_JENNY_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Jenny"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jenny2),
        //.party = {.NoItemDefaultMoves = sParty_Jenny2},
    },

    [TRAINER_JENNY_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Jenny"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jenny3),
        //.party = {.NoItemDefaultMoves = sParty_Jenny3},
    },

    [TRAINER_JENNY_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Jenny"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jenny4),
        //.party = {.NoItemDefaultMoves = sParty_Jenny4},
    },

    [TRAINER_JENNY_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Jenny"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jenny5),
        //.party = {.NoItemDefaultMoves = sParty_Jenny5},
    },

    [TRAINER_HEIDI] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Heidi"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Heidi),
        //.party = {.NoItemCustomMoves = sParty_Heidi},
    },

    [TRAINER_BECKY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Becky"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Becky),
        //.party = {.NoItemCustomMoves = sParty_Becky},
    },

    [TRAINER_CAROL] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Carol"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Carol),
        //.party = {.NoItemDefaultMoves = sParty_Carol},
    },

    [TRAINER_NANCY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Nancy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Nancy),
        //.party = {.NoItemDefaultMoves = sParty_Nancy},
    },

    [TRAINER_MARTHA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Martha"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Martha),
        //.party = {.NoItemDefaultMoves = sParty_Martha},
    },

    [TRAINER_DIANA_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Diana"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Diana1),
        //.party = {.NoItemDefaultMoves = sParty_Diana1},
    },

    [TRAINER_CEDRIC] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Cedric"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cedric),
        //.party = {.NoItemCustomMoves = sParty_Cedric},
    },

    [TRAINER_IRENE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Irene"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Irene),
        //.party = {.NoItemDefaultMoves = sParty_Irene},
    },

    [TRAINER_DIANA_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Diana"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Diana2),
        //.party = {.NoItemDefaultMoves = sParty_Diana2},
    },

    [TRAINER_DIANA_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Diana"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Diana3),
        //.party = {.NoItemDefaultMoves = sParty_Diana3},
    },

    [TRAINER_DIANA_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Diana"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Diana4),
        //.party = {.NoItemDefaultMoves = sParty_Diana4},
    },

    [TRAINER_DIANA_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Diana"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Diana5),
        //.party = {.NoItemDefaultMoves = sParty_Diana5},
    },

    [TRAINER_AMY_AND_LIV_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Amy & Liv"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv1),
        //.party = {.NoItemDefaultMoves = sParty_AmyAndLiv1},
    },

    [TRAINER_AMY_AND_LIV_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Amy & Liv"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv2),
        //.party = {.NoItemDefaultMoves = sParty_AmyAndLiv2},
    },

    [TRAINER_GINA_AND_MIA_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Gina & Mia"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GinaAndMia1),
        //.party = {.NoItemDefaultMoves = sParty_GinaAndMia1},
    },

    [TRAINER_MIU_AND_YUKI] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Miu & Yuki"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_MiuAndYuki),
        //.party = {.NoItemDefaultMoves = sParty_MiuAndYuki},
    },

    [TRAINER_AMY_AND_LIV_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Amy & Liv"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv3),
        //.party = {.NoItemDefaultMoves = sParty_AmyAndLiv3},
    },

    [TRAINER_GINA_AND_MIA_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Gina & Mia"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GinaAndMia2),
        //.party = {.NoItemCustomMoves = sParty_GinaAndMia2},
    },

    [TRAINER_AMY_AND_LIV_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Amy & Liv"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv4),
        //.party = {.NoItemDefaultMoves = sParty_AmyAndLiv4},
    },

    [TRAINER_AMY_AND_LIV_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Amy & Liv"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv5),
        //.party = {.NoItemCustomMoves = sParty_AmyAndLiv5},
    },

    [TRAINER_AMY_AND_LIV_6] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Amy & Liv"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AmyAndLiv6),
        //.party = {.NoItemCustomMoves = sParty_AmyAndLiv6},
    },

    [TRAINER_HUEY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Huey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Huey),
        //.party = {.NoItemDefaultMoves = sParty_Huey},
    },

    [TRAINER_EDMOND] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Edmond"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edmond),
        //.party = {.NoItemDefaultMoves = sParty_Edmond},
    },

    [TRAINER_ERNEST_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Ernest"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ernest1),
        //.party = {.NoItemDefaultMoves = sParty_Ernest1},
    },

    [TRAINER_DWAYNE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Dwayne"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dwayne),
        //.party = {.NoItemDefaultMoves = sParty_Dwayne},
    },

    [TRAINER_PHILLIP] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Phillip"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Phillip),
        //.party = {.NoItemDefaultMoves = sParty_Phillip},
    },

    [TRAINER_LEONARD] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Leonard"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Leonard),
        //.party = {.NoItemDefaultMoves = sParty_Leonard},
    },

    [TRAINER_DUNCAN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Duncan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Duncan),
        //.party = {.NoItemDefaultMoves = sParty_Duncan},
    },

    [TRAINER_ERNEST_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Ernest"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ernest2),
        //.party = {.NoItemDefaultMoves = sParty_Ernest2},
    },

    [TRAINER_ERNEST_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Ernest"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ernest3),
        //.party = {.NoItemDefaultMoves = sParty_Ernest3},
    },

    [TRAINER_ERNEST_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Ernest"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ernest4),
        //.party = {.NoItemDefaultMoves = sParty_Ernest4},
    },

    [TRAINER_ERNEST_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Ernest"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Ernest5),
        //.party = {.NoItemDefaultMoves = sParty_Ernest5},
    },

    [TRAINER_JAZMYN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Jazmyn"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Jazmyn),
        //.party = {.NoItemDefaultMoves = sParty_Jazmyn},
    },

    [TRAINER_JONAS] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Jonas"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Jonas),
        //.party = {.NoItemCustomMoves = sParty_Jonas},
    },

    [TRAINER_KAYLEY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Kayley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kayley),
        //.party = {.NoItemCustomMoves = sParty_Kayley},
    },

    [TRAINER_AURON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Auron"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Auron),
        //.party = {.NoItemDefaultMoves = sParty_Auron},
    },

    [TRAINER_KELVIN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Kelvin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kelvin),
        //.party = {.NoItemDefaultMoves = sParty_Kelvin},
    },

    [TRAINER_TYLER] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Tyler"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Tyler),
        //.party = {.ItemCustomMoves = sParty_Tyler},
    },

    [TRAINER_REYNA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Reyna"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Reyna),
        //.party = {.NoItemDefaultMoves = sParty_Reyna},
    },

    [TRAINER_HUDSON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Hudson"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Hudson),
        //.party = {.NoItemDefaultMoves = sParty_Hudson},
    },

    [TRAINER_CONOR] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Conor"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Conor),
        //.party = {.NoItemDefaultMoves = sParty_Conor},
    },

    [TRAINER_EDWIN_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Edwin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edwin1),
        //.party = {.NoItemDefaultMoves = sParty_Edwin1},
    },

    [TRAINER_HECTOR] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Hector"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Hector),
        //.party = {.NoItemDefaultMoves = sParty_Hector},
    },

    [TRAINER_TABITHA_MOSSDEEP] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("Tabitha"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_TabithaMossdeep),
        //.party = {.NoItemDefaultMoves = sParty_TabithaMossdeep},
    },

    [TRAINER_EDWIN_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Edwin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edwin2),
        //.party = {.NoItemDefaultMoves = sParty_Edwin2},
    },

    [TRAINER_EDWIN_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Edwin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edwin3),
        //.party = {.NoItemDefaultMoves = sParty_Edwin3},
    },

    [TRAINER_EDWIN_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Edwin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edwin4),
        //.party = {.NoItemDefaultMoves = sParty_Edwin4},
    },

    [TRAINER_EDWIN_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Edwin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Edwin5),
        //.party = {.NoItemDefaultMoves = sParty_Edwin5},
    },

    [TRAINER_WALLY_VR_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("Wally"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WallyVR1),
        .partyDoubles = sParty_Wally_Doubles,
    },

    [TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRoute103Mudkip),
        //.party = {.NoItemCustomMoves = sParty_BrendanRoute103Mudkip},
    },

    [TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRoute110Mudkip),
        //.party = {.NoItemDefaultMoves = sParty_BrendanRoute110Mudkip},
    },

    [TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRoute119Mudkip),
        //.party = {.NoItemDefaultMoves = sParty_BrendanRoute119Mudkip},
    },

    [TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_BrendanRoute103Treecko),
        //.party = {.NoItemCustomMoves = sParty_BrendanRoute103Treecko},
    },

    [TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRoute110Treecko),
        //.party = {.NoItemDefaultMoves = sParty_BrendanRoute110Treecko},
    },

    [TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRoute119Treecko),
        //.party = {.NoItemDefaultMoves = sParty_BrendanRoute119Treecko},
    },

    [TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRoute103Torchic),
        //.party = {.NoItemCustomMoves = sParty_BrendanRoute103Torchic},
    },

    [TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRoute110Torchic),
        //.party = {.NoItemDefaultMoves = sParty_BrendanRoute110Torchic},
    },

    [TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRoute119Torchic),
        //.party = {.NoItemDefaultMoves = sParty_BrendanRoute119Torchic},
    },

    [TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute103Mudkip),
        //.party = {.NoItemCustomMoves = sParty_MayRoute103Mudkip},
    },

    [TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute110Mudkip),
        //.party = {.NoItemDefaultMoves = sParty_MayRoute110Mudkip},
    },

    [TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute119Mudkip),
        //.party = {.NoItemDefaultMoves = sParty_MayRoute119Mudkip},
    },

    [TRAINER_MAY_ROUTE_103_TREECKO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute103Treecko),
        //.party = {.NoItemCustomMoves = sParty_MayRoute103Treecko},
    },

    [TRAINER_MAY_ROUTE_110_TREECKO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute110Treecko),
        //.party = {.NoItemDefaultMoves = sParty_MayRoute110Treecko},
    },

    [TRAINER_MAY_ROUTE_119_TREECKO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute119Treecko),
        //.party = {.NoItemDefaultMoves = sParty_MayRoute119Treecko},
    },

    [TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute103Torchic),
        //.party = {.NoItemCustomMoves = sParty_MayRoute103Torchic},
    },

    [TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute110Torchic),
        //.party = {.NoItemDefaultMoves = sParty_MayRoute110Torchic},
    },

    [TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRoute119Torchic),
        //.party = {.NoItemDefaultMoves = sParty_MayRoute119Torchic},
    },

    [TRAINER_ISAAC_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("Isaac"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaac1),
        //.party = {.NoItemDefaultMoves = sParty_Isaac1},
    },

    [TRAINER_DAVIS] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Davis"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Davis),
        //.party = {.NoItemDefaultMoves = sParty_Davis},
    },

    [TRAINER_MITCHELL] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Mitchell"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Mitchell),
        //.party = {.NoItemCustomMoves = sParty_Mitchell},
    },

    [TRAINER_ISAAC_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("Isaac"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaac2),
        //.party = {.NoItemDefaultMoves = sParty_Isaac2},
    },

    [TRAINER_ISAAC_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("Isaac"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaac3),
        //.party = {.NoItemDefaultMoves = sParty_Isaac3},
    },

    [TRAINER_ISAAC_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("Isaac"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaac4),
        //.party = {.NoItemDefaultMoves = sParty_Isaac4},
    },

    [TRAINER_ISAAC_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("Isaac"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isaac5),
        //.party = {.NoItemDefaultMoves = sParty_Isaac5},
    },

    [TRAINER_LYDIA_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Lydia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lydia1),
        //.party = {.NoItemDefaultMoves = sParty_Lydia1},
    },

    [TRAINER_HALLE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Halle"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Halle),
        //.party = {.NoItemDefaultMoves = sParty_Halle},
    },

    [TRAINER_GARRISON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Garrison"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Garrison),
        //.party = {.NoItemDefaultMoves = sParty_Garrison},
    },

    [TRAINER_LYDIA_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Lydia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lydia2),
        //.party = {.NoItemDefaultMoves = sParty_Lydia2},
    },

    [TRAINER_LYDIA_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Lydia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lydia3),
        //.party = {.NoItemDefaultMoves = sParty_Lydia3},
    },

    [TRAINER_LYDIA_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Lydia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lydia4),
        //.party = {.NoItemDefaultMoves = sParty_Lydia4},
    },

    [TRAINER_LYDIA_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Lydia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lydia5),
        //.party = {.NoItemDefaultMoves = sParty_Lydia5},
    },

    [TRAINER_JACKSON_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Jackson"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Jackson1),
        //.party = {.NoItemDefaultMoves = sParty_Jackson1},
    },

    [TRAINER_LORENZO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Lorenzo"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Lorenzo),
        //.party = {.NoItemDefaultMoves = sParty_Lorenzo},
    },

    [TRAINER_SEBASTIAN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Sebastian"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sebastian),
        //.party = {.NoItemDefaultMoves = sParty_Sebastian},
    },

    [TRAINER_JACKSON_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Jackson"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Jackson2),
        //.party = {.NoItemDefaultMoves = sParty_Jackson2},
    },

    [TRAINER_JACKSON_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Jackson"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Jackson3),
        //.party = {.NoItemDefaultMoves = sParty_Jackson3},
    },

    [TRAINER_JACKSON_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Jackson"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Jackson4),
        //.party = {.NoItemDefaultMoves = sParty_Jackson4},
    },

    [TRAINER_JACKSON_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Jackson"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Jackson5),
        //.party = {.NoItemDefaultMoves = sParty_Jackson5},
    },

    [TRAINER_CATHERINE_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Catherine"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Catherine1),
        //.party = {.NoItemDefaultMoves = sParty_Catherine1},
    },

    [TRAINER_JENNA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Jenna"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Jenna),
        //.party = {.NoItemDefaultMoves = sParty_Jenna},
    },

    [TRAINER_SOPHIA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Sophia"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sophia),
        //.party = {.NoItemDefaultMoves = sParty_Sophia},
    },

    [TRAINER_CATHERINE_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Catherine"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Catherine2),
        //.party = {.NoItemDefaultMoves = sParty_Catherine2},
    },

    [TRAINER_CATHERINE_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Catherine"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Catherine3),
        //.party = {.NoItemDefaultMoves = sParty_Catherine3},
    },

    [TRAINER_CATHERINE_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Catherine"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Catherine4),
        //.party = {.NoItemDefaultMoves = sParty_Catherine4},
    },

    [TRAINER_CATHERINE_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Catherine"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Catherine5),
        //.party = {.NoItemDefaultMoves = sParty_Catherine5},
    },

    [TRAINER_JULIO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .trainerName = _("Julio"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Julio),
        //.party = {.NoItemDefaultMoves = sParty_Julio},
    },

    [TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSeafloorCavern5),
        //.party = {.NoItemDefaultMoves = sParty_GruntSeafloorCavern5},
    },

    [TRAINER_GRUNT_UNUSED] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntUnused),
        //.party = {.NoItemDefaultMoves = sParty_GruntUnused},
    },

    [TRAINER_GRUNT_MT_PYRE_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMtPyre4),
        //.party = {.NoItemDefaultMoves = sParty_GruntMtPyre4},
    },

    [TRAINER_GRUNT_JAGGED_PASS] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntJaggedPass),
        //.party = {.NoItemDefaultMoves = sParty_GruntJaggedPass},
    },

    [TRAINER_LEONARDO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Leonardo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Leonardo),
        //.party = {.NoItemDefaultMoves = sParty_Leonardo},
    },

    [TRAINER_ATHENA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Athena"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Athena),
        //.party = {.ItemCustomMoves = sParty_Athena},
    },

    [TRAINER_HARRISON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Harrison"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Harrison),
        //.party = {.NoItemDefaultMoves = sParty_Harrison},
    },

    [TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMtChimney2),
        //.party = {.NoItemDefaultMoves = sParty_GruntMtChimney2},
    },

    [TRAINER_CLARENCE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Clarence"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Clarence),
        //.party = {.NoItemDefaultMoves = sParty_Clarence},
    },

    [TRAINER_TERRY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Terry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Terry),
        //.party = {.NoItemDefaultMoves = sParty_Terry},
    },

    [TRAINER_GRUNT_SPACE_CENTER_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter3),
        //.party = {.NoItemDefaultMoves = sParty_GruntSpaceCenter3},
    },

    [TRAINER_GRUNT_SPACE_CENTER_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter4),
        //.party = {.NoItemDefaultMoves = sParty_GruntSpaceCenter4},
    },

    [TRAINER_GRUNT_SPACE_CENTER_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter5),
        //.party = {.NoItemDefaultMoves = sParty_GruntSpaceCenter5},
    },

    [TRAINER_GRUNT_SPACE_CENTER_6] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter6),
        //.party = {.NoItemDefaultMoves = sParty_GruntSpaceCenter6},
    },

    [TRAINER_GRUNT_SPACE_CENTER_7] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntSpaceCenter7),
        //.party = {.NoItemDefaultMoves = sParty_GruntSpaceCenter7},
    },

    [TRAINER_MACEY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Macey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Macey),
        //.party = {.NoItemDefaultMoves = sParty_Macey},
    },

    [TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_BrendanRustboroTreecko),
        //.party = {.NoItemDefaultMoves = sParty_BrendanRustboroTreecko},
    },

    [TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_BrendanRustboroMudkip),
        //.party = {.NoItemDefaultMoves = sParty_BrendanRustboroMudkip},
    },

    [TRAINER_PAXTON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Paxton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Paxton),
        //.party = {.NoItemDefaultMoves = sParty_Paxton},
    },

    [TRAINER_ISABELLA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .trainerName = _("Isabella"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isabella),
        //.party = {.NoItemDefaultMoves = sParty_Isabella},
    },

    [TRAINER_GRUNT_WEATHER_INST_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntWeatherInst5),
        //.party = {.NoItemDefaultMoves = sParty_GruntWeatherInst5},
    },

    [TRAINER_TABITHA_MT_CHIMNEY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("Tabitha"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TabithaMtChimney),
        //.party = {.NoItemDefaultMoves = sParty_TabithaMtChimney},
    },

    [TRAINER_JONATHAN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Jonathan"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_Jonathan),
        //.party = {.NoItemDefaultMoves = sParty_Jonathan},
    },

    [TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanRustboroTorchic),
        //.party = {.NoItemDefaultMoves = sParty_BrendanRustboroTorchic},
    },

    [TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_MayRustboroMudkip),
        //.party = {.NoItemDefaultMoves = sParty_MayRustboroMudkip},
    },

    [TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("Maxie"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MaxieMagmaHideout),
        //.party = {.NoItemDefaultMoves = sParty_MaxieMagmaHideout},
    },

    [TRAINER_MAXIE_MT_CHIMNEY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("Maxie"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MaxieMtChimney),
        //.party = {.NoItemDefaultMoves = sParty_MaxieMtChimney},
    },

    [TRAINER_TIANA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Tiana"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tiana),
        //.party = {.NoItemDefaultMoves = sParty_Tiana},
    },

    [TRAINER_HALEY_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Haley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Haley1),
        //.party = {.NoItemDefaultMoves = sParty_Haley1},
    },

    [TRAINER_JANICE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Janice"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Janice),
        //.party = {.NoItemDefaultMoves = sParty_Janice},
    },

    [TRAINER_VIVI] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_WINSTRATE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Vivi"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Vivi),
        //.party = {.NoItemDefaultMoves = sParty_Vivi},
    },

    [TRAINER_HALEY_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Haley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Haley2),
        //.party = {.NoItemDefaultMoves = sParty_Haley2},
    },

    [TRAINER_HALEY_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Haley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Haley3),
        //.party = {.NoItemDefaultMoves = sParty_Haley3},
    },

    [TRAINER_HALEY_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Haley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Haley4),
        //.party = {.NoItemDefaultMoves = sParty_Haley4},
    },

    [TRAINER_HALEY_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Haley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Haley5),
        //.party = {.NoItemDefaultMoves = sParty_Haley5},
    },

    [TRAINER_SALLY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Sally"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sally),
        //.party = {.NoItemDefaultMoves = sParty_Sally},
    },

    [TRAINER_ROBIN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Robin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Robin),
        //.party = {.NoItemDefaultMoves = sParty_Robin},
    },

    [TRAINER_RICK] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Rick"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Rick),
        //.party = {.NoItemDefaultMoves = sParty_Rick},
    },

    [TRAINER_LYLE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Lyle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lyle),
        //.party = {.NoItemDefaultMoves = sParty_Lyle},
    },

    [TRAINER_JOSE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Jose"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jose),
        //.party = {.NoItemDefaultMoves = sParty_Jose},
    },

    [TRAINER_DOUG] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Doug"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Doug),
        //.party = {.NoItemDefaultMoves = sParty_Doug},
    },

    [TRAINER_GREG] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Greg"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Greg),
        //.party = {.NoItemDefaultMoves = sParty_Greg},
    },

    [TRAINER_KENT] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Kent"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kent),
        //.party = {.NoItemDefaultMoves = sParty_Kent},
    },

    [TRAINER_JAMES_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("James"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_James1),
        //.party = {.NoItemDefaultMoves = sParty_James1},
    },

    [TRAINER_JAMES_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("James"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_James2),
        //.party = {.NoItemDefaultMoves = sParty_James2},
    },

    [TRAINER_JAMES_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("James"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_James3),
        //.party = {.NoItemDefaultMoves = sParty_James3},
    },

    [TRAINER_JAMES_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("James"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_James4),
        //.party = {.NoItemDefaultMoves = sParty_James4},
    },

    [TRAINER_JAMES_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("James"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_James5),
        //.party = {.NoItemDefaultMoves = sParty_James5},
    },

    [TRAINER_BRICE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Brice"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Brice),
        //.party = {.NoItemDefaultMoves = sParty_Brice},
    },

    [TRAINER_TRENT_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Trent"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Trent1),
        //.party = {.NoItemDefaultMoves = sParty_Trent1},
    },

    [TRAINER_LENNY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Lenny"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lenny),
        //.party = {.NoItemDefaultMoves = sParty_Lenny},
    },

    [TRAINER_LUCAS_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Lucas"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lucas1),
        //.party = {.NoItemDefaultMoves = sParty_Lucas1},
    },

    [TRAINER_ALAN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Alan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alan),
        //.party = {.NoItemDefaultMoves = sParty_Alan},
    },

    [TRAINER_CLARK] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Clark"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Clark),
        //.party = {.NoItemDefaultMoves = sParty_Clark},
    },

    [TRAINER_ERIC] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Eric"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Eric),
        //.party = {.NoItemDefaultMoves = sParty_Eric},
    },

    [TRAINER_LUCAS_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Lucas"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lucas2),
        //.party = {.NoItemCustomMoves = sParty_Lucas2},
    },

    [TRAINER_MIKE_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Mike"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Mike1),
        //.party = {.NoItemCustomMoves = sParty_Mike1},
    },

    [TRAINER_MIKE_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Mike"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Mike2),
        //.party = {.NoItemDefaultMoves = sParty_Mike2},
    },

    [TRAINER_TRENT_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Trent"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Trent2),
        //.party = {.NoItemDefaultMoves = sParty_Trent2},
    },

    [TRAINER_TRENT_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Trent"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Trent3),
        //.party = {.NoItemDefaultMoves = sParty_Trent3},
    },

    [TRAINER_TRENT_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Trent"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Trent4),
        //.party = {.NoItemDefaultMoves = sParty_Trent4},
    },

    [TRAINER_TRENT_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Trent"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Trent5),
        //.party = {.NoItemDefaultMoves = sParty_Trent5},
    },

    [TRAINER_DEZ_AND_LUKE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Dez & Luke"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_DezAndLuke),
        //.party = {.NoItemDefaultMoves = sParty_DezAndLuke},
    },

    [TRAINER_LEA_AND_JED] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Lea & Jed"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LeaAndJed),
        //.party = {.NoItemDefaultMoves = sParty_LeaAndJed},
    },

    [TRAINER_KIRA_AND_DAN_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Kira & Dan"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KiraAndDan1),
        //.party = {.NoItemDefaultMoves = sParty_KiraAndDan1},
    },

    [TRAINER_KIRA_AND_DAN_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Kira & Dan"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KiraAndDan2),
        //.party = {.NoItemDefaultMoves = sParty_KiraAndDan2},
    },

    [TRAINER_KIRA_AND_DAN_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Kira & Dan"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KiraAndDan3),
        //.party = {.NoItemDefaultMoves = sParty_KiraAndDan3},
    },

    [TRAINER_KIRA_AND_DAN_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Kira & Dan"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KiraAndDan4),
        //.party = {.NoItemDefaultMoves = sParty_KiraAndDan4},
    },

    [TRAINER_KIRA_AND_DAN_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Kira & Dan"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KiraAndDan5),
        //.party = {.NoItemDefaultMoves = sParty_KiraAndDan5},
    },

    [TRAINER_JOHANNA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Johanna"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Johanna),
        //.party = {.NoItemDefaultMoves = sParty_Johanna},
    },

    [TRAINER_HIDEO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Hideo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_Hideo),
        //.party = {.NoItemCustomMoves = sParty_Hideo},
    },

    [TRAINER_KEIGO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Keigo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_Keigo),
        //.party = {.NoItemCustomMoves = sParty_Keigo},
    },

    [TRAINER_RILEY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Riley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT,
        .party = TRAINER_PARTY(sParty_Riley),
        //.party = {.NoItemCustomMoves = sParty_Riley},
    },

    [TRAINER_WALLY_MAUVILLE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("Wally"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WallyMauville),
        //.party = {.NoItemDefaultMoves = sParty_WallyMauville},
    },

    [TRAINER_WALLY_VR_2] =
    {
		.partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("Wally"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WallyVR2),
        //.party = {.ItemCustomMoves = sParty_WallyVR2},
		
    },

    [TRAINER_WALLY_VR_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("Wally"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WallyVR3),
        //.party = {.ItemCustomMoves = sParty_WallyVR3},
    },

    [TRAINER_WALLY_VR_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("Wally"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WallyVR4),
        //.party = {.ItemCustomMoves = sParty_WallyVR4},
    },

    [TRAINER_WALLY_VR_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_WALLY,
        .trainerName = _("Wally"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_WallyVR5),
        //.party = {.ItemCustomMoves = sParty_WallyVR5},
    },

    [TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanLilycoveMudkip),
        //.party = {.NoItemDefaultMoves = sParty_BrendanLilycoveMudkip},
    },

    [TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanLilycoveTreecko),
        //.party = {.NoItemDefaultMoves = sParty_BrendanLilycoveTreecko},
    },

    [TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_2,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        .trainerName = _("Brendan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_BrendanLilycoveTorchic),
        //.party = {.NoItemDefaultMoves = sParty_BrendanLilycoveTorchic},
    },

    [TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayLilycoveMudkip),
        //.party = {.NoItemDefaultMoves = sParty_MayLilycoveMudkip},
    },

    [TRAINER_MAY_LILYCOVE_TREECKO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayLilycoveTreecko),
        //.party = {.NoItemDefaultMoves = sParty_MayLilycoveTreecko},
    },

    [TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayLilycoveTorchic),
        //.party = {.NoItemDefaultMoves = sParty_MayLilycoveTorchic},
    },

    [TRAINER_JONAH] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Jonah"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jonah),
        //.party = {.NoItemDefaultMoves = sParty_Jonah},
    },

    [TRAINER_HENRY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Henry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Henry),
        //.party = {.NoItemDefaultMoves = sParty_Henry},
    },

    [TRAINER_ROGER] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Roger"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Roger),
        //.party = {.NoItemDefaultMoves = sParty_Roger},
    },

    [TRAINER_ALEXA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Alexa"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Alexa),
        //.party = {.NoItemDefaultMoves = sParty_Alexa},
    },

    [TRAINER_RUBEN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Ruben"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Ruben),
        //.party = {.NoItemDefaultMoves = sParty_Ruben},
    },

    [TRAINER_KOJI_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Koji"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Koji1),
        //.party = {.NoItemDefaultMoves = sParty_Koji1},
    },

    [TRAINER_WAYNE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Wayne"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Wayne),
        //.party = {.NoItemDefaultMoves = sParty_Wayne},
    },

    [TRAINER_AIDAN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Aidan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Aidan),
        //.party = {.NoItemDefaultMoves = sParty_Aidan},
    },

    [TRAINER_REED] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Reed"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Reed),
        //.party = {.NoItemDefaultMoves = sParty_Reed},
    },

    [TRAINER_TISHA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Tisha"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tisha),
        //.party = {.NoItemDefaultMoves = sParty_Tisha},
    },

    [TRAINER_TORI_AND_TIA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Tori & Tia"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ToriAndTia),
        //.party = {.NoItemDefaultMoves = sParty_ToriAndTia},
    },

    [TRAINER_KIM_AND_IRIS] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Kim & Iris"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_KimAndIris),
        //.party = {.NoItemCustomMoves = sParty_KimAndIris},
    },

    [TRAINER_TYRA_AND_IVY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .trainerName = _("Tyra & Ivy"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_TyraAndIvy),
        //.party = {.NoItemCustomMoves = sParty_TyraAndIvy},
    },

    [TRAINER_MEL_AND_PAUL] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Mel & Paul"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_MelAndPaul),
        //.party = {.NoItemCustomMoves = sParty_MelAndPaul},
    },

    [TRAINER_JOHN_AND_JAY_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("John & Jay"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_JohnAndJay1),
        //.party = {.NoItemCustomMoves = sParty_JohnAndJay1},
    },

    [TRAINER_JOHN_AND_JAY_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("John & Jay"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_JohnAndJay2),
        //.party = {.NoItemCustomMoves = sParty_JohnAndJay2},
    },

    [TRAINER_JOHN_AND_JAY_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("John & Jay"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_JohnAndJay3),
        //.party = {.NoItemCustomMoves = sParty_JohnAndJay3},
    },

    [TRAINER_JOHN_AND_JAY_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("John & Jay"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_SETUP_FIRST_TURN,
        .party = TRAINER_PARTY(sParty_JohnAndJay4),
        //.party = {.NoItemCustomMoves = sParty_JohnAndJay4},
    },

    [TRAINER_JOHN_AND_JAY_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .trainerName = _("John & Jay"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_JohnAndJay5),
        //.party = {.NoItemCustomMoves = sParty_JohnAndJay5},
    },

    [TRAINER_RELI_AND_IAN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("Reli & Ian"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ReliAndIan),
        //.party = {.NoItemDefaultMoves = sParty_ReliAndIan},
    },

    [TRAINER_LILA_AND_ROY_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("Lila & Roy"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy1),
        //.party = {.NoItemDefaultMoves = sParty_LilaAndRoy1},
    },

    [TRAINER_LILA_AND_ROY_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("Lila & Roy"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy2),
        //.party = {.NoItemDefaultMoves = sParty_LilaAndRoy2},
    },

    [TRAINER_LILA_AND_ROY_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("Lila & Roy"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy3),
        //.party = {.NoItemDefaultMoves = sParty_LilaAndRoy3},
    },

    [TRAINER_LILA_AND_ROY_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("Lila & Roy"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy4),
        //.party = {.NoItemDefaultMoves = sParty_LilaAndRoy4},
    },

    [TRAINER_LILA_AND_ROY_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("Lila & Roy"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LilaAndRoy5),
        //.party = {.NoItemDefaultMoves = sParty_LilaAndRoy5},
    },

    [TRAINER_LISA_AND_RAY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .trainerName = _("Lisa & Ray"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LisaAndRay),
        //.party = {.NoItemDefaultMoves = sParty_LisaAndRay},
    },

    [TRAINER_CHRIS] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Chris"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Chris),
        //.party = {.NoItemDefaultMoves = sParty_Chris},
    },

    [TRAINER_DAWSON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RICH_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .trainerName = _("Dawson"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dawson),
        //.party = {.ItemDefaultMoves = sParty_Dawson},
    },

    [TRAINER_SARAH] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Sarah"),
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sarah),
        //.party = {.ItemDefaultMoves = sParty_Sarah},
    },

    [TRAINER_DARIAN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Darian"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Darian),
        //.party = {.NoItemDefaultMoves = sParty_Darian},
    },

    [TRAINER_HAILEY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TUBER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_F,
        .trainerName = _("Hailey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Hailey),
        //.party = {.NoItemDefaultMoves = sParty_Hailey},
    },

    [TRAINER_CHANDLER] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TUBER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_TUBER_M,
        .trainerName = _("Chandler"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Chandler),
        //.party = {.NoItemDefaultMoves = sParty_Chandler},
    },

    [TRAINER_KALEB] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Kaleb"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kaleb),
        //.party = {.ItemDefaultMoves = sParty_Kaleb},
    },

    [TRAINER_JOSEPH] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Joseph"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Joseph),
        //.party = {.NoItemDefaultMoves = sParty_Joseph},
    },

    [TRAINER_ALYSSA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .trainerName = _("Alyssa"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alyssa),
        //.party = {.NoItemDefaultMoves = sParty_Alyssa},
    },

    [TRAINER_MARCOS] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Marcos"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Marcos),
        //.party = {.NoItemDefaultMoves = sParty_Marcos},
    },

    [TRAINER_RHETT] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Rhett"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Rhett),
        //.party = {.NoItemDefaultMoves = sParty_Rhett},
    },

    [TRAINER_TYRON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Tyron"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Tyron),
        //.party = {.NoItemDefaultMoves = sParty_Tyron},
    },

    [TRAINER_CELINA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Celina"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Celina),
        //.party = {.NoItemDefaultMoves = sParty_Celina},
    },

    [TRAINER_BIANCA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Bianca"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bianca),
        //.party = {.NoItemDefaultMoves = sParty_Bianca},
    },

    [TRAINER_HAYDEN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Hayden"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Hayden),
        //.party = {.NoItemDefaultMoves = sParty_Hayden},
    },

    [TRAINER_SOPHIE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Sophie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Sophie),
        //.party = {.NoItemDefaultMoves = sParty_Sophie},
    },

    [TRAINER_COBY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Coby"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Coby),
        //.party = {.NoItemDefaultMoves = sParty_Coby},
    },

    [TRAINER_LAWRENCE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Lawrence"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Lawrence),
        //.party = {.NoItemDefaultMoves = sParty_Lawrence},
    },

    [TRAINER_WYATT] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Wyatt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Wyatt),
        //.party = {.NoItemDefaultMoves = sParty_Wyatt},
    },

    [TRAINER_ANGELINA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Angelina"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Angelina),
        //.party = {.NoItemDefaultMoves = sParty_Angelina},
    },

    [TRAINER_KAI] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Kai"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kai),
        //.party = {.NoItemDefaultMoves = sParty_Kai},
    },

    [TRAINER_CHARLOTTE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Charlotte"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Charlotte),
        //.party = {.NoItemDefaultMoves = sParty_Charlotte},
    },

    [TRAINER_DEANDRE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Deandre"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Deandre),
        //.party = {.NoItemDefaultMoves = sParty_Deandre},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout1),
        //.party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout1},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout2),
        //.party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout2},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout3),
        //.party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout3},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout4),
        //.party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout4},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout5),
        //.party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout5},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout6),
        //.party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout6},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout7),
        //.party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout7},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout8),
        //.party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout8},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout9),
        //.party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout9},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout10),
        //.party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout10},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout11),
        //.party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout11},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout12),
        //.party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout12},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout13),
        //.party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout13},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout14),
        //.party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout14},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout15),
        //.party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout15},
    },

    [TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntMagmaHideout16),
        //.party = {.NoItemDefaultMoves = sParty_GruntMagmaHideout16},
    },

    [TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .trainerName = _("Tabitha"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_TabithaMagmaHideout),
        //.party = {.NoItemDefaultMoves = sParty_TabithaMagmaHideout},
    },

    [TRAINER_DARCY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Darcy"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Darcy),
        //.party = {.NoItemDefaultMoves = sParty_Darcy},
    },

    [TRAINER_MAXIE_MOSSDEEP] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .trainerName = _("Maxie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MaxieMossdeep),
        //.party = {.NoItemDefaultMoves = sParty_MaxieMossdeep},
    },

    [TRAINER_PETE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Pete"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pete),
        //.party = {.NoItemDefaultMoves = sParty_Pete},
    },

    [TRAINER_ISABELLE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Isabelle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Isabelle),
        //.party = {.NoItemDefaultMoves = sParty_Isabelle},
    },

    [TRAINER_ANDRES_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Andres"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andres1),
        //.party = {.NoItemDefaultMoves = sParty_Andres1},
    },

    [TRAINER_JOSUE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Josue"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Josue),
        //.party = {.NoItemDefaultMoves = sParty_Josue},
    },

    [TRAINER_CAMRON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Camron"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Camron),
        //.party = {.NoItemDefaultMoves = sParty_Camron},
    },

    [TRAINER_CORY_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Cory"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cory1),
        //.party = {.NoItemDefaultMoves = sParty_Cory1},
    },

    [TRAINER_CAROLINA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Carolina"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Carolina),
        //.party = {.NoItemDefaultMoves = sParty_Carolina},
    },

    [TRAINER_ELIJAH] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Elijah"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Elijah),
        //.party = {.NoItemDefaultMoves = sParty_Elijah},
    },

    [TRAINER_CELIA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Celia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Celia),
        //.party = {.NoItemDefaultMoves = sParty_Celia},
    },

    [TRAINER_BRYAN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Bryan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bryan),
        //.party = {.NoItemDefaultMoves = sParty_Bryan},
    },

    [TRAINER_BRANDEN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Branden"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Branden),
        //.party = {.NoItemDefaultMoves = sParty_Branden},
    },

    [TRAINER_BRYANT] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Bryant"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Bryant),
        //.party = {.NoItemDefaultMoves = sParty_Bryant},
    },

    [TRAINER_SHAYLA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Shayla"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Shayla),
        //.party = {.NoItemDefaultMoves = sParty_Shayla},
    },

    [TRAINER_KYRA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("Kyra"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Kyra),
        //.party = {.NoItemDefaultMoves = sParty_Kyra},
    },

    [TRAINER_JAIDEN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .trainerName = _("Jaiden"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Jaiden),
        //.party = {.NoItemDefaultMoves = sParty_Jaiden},
    },

    [TRAINER_ALIX] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Alix"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Alix),
        //.party = {.NoItemDefaultMoves = sParty_Alix},
    },

    [TRAINER_HELENE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Helene"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Helene),
        //.party = {.NoItemDefaultMoves = sParty_Helene},
    },

    [TRAINER_MARLENE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Marlene"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Marlene),
        //.party = {.NoItemDefaultMoves = sParty_Marlene},
    },

    [TRAINER_DEVAN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Devan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Devan),
        //.party = {.NoItemDefaultMoves = sParty_Devan},
    },

    [TRAINER_JOHNSON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Johnson"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Johnson),
        //.party = {.NoItemDefaultMoves = sParty_Johnson},
    },

    [TRAINER_MELINA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .trainerName = _("Melina"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Melina),
        //.party = {.NoItemDefaultMoves = sParty_Melina},
    },

    [TRAINER_BRANDI] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Brandi"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Brandi),
        //.party = {.NoItemDefaultMoves = sParty_Brandi},
    },

    [TRAINER_AISHA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Aisha"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Aisha),
        //.party = {.NoItemDefaultMoves = sParty_Aisha},
    },

    [TRAINER_MAKAYLA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Makayla"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Makayla),
        //.party = {.NoItemDefaultMoves = sParty_Makayla},
    },

    [TRAINER_FABIAN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Fabian"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Fabian),
        //.party = {.NoItemDefaultMoves = sParty_Fabian},
    },

    [TRAINER_DAYTON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_KINDLER,
        .trainerName = _("Dayton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dayton),
        //.party = {.NoItemDefaultMoves = sParty_Dayton},
    },

    [TRAINER_RACHEL] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Rachel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Rachel),
        //.party = {.NoItemDefaultMoves = sParty_Rachel},
    },

    [TRAINER_LEONEL] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Leonel"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Leonel),
        //.party = {.NoItemCustomMoves = sParty_Leonel},
    },

    [TRAINER_CALLIE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Callie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Callie),
        //.party = {.NoItemDefaultMoves = sParty_Callie},
    },

    [TRAINER_CALE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .trainerName = _("Cale"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cale),
        //.party = {.NoItemDefaultMoves = sParty_Cale},
    },

    [TRAINER_MYLES] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .trainerName = _("Myles"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Myles),
        //.party = {.NoItemDefaultMoves = sParty_Myles},
    },

    [TRAINER_PAT] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Pat"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pat),
        //.party = {.NoItemDefaultMoves = sParty_Pat},
    },

    [TRAINER_CRISTIN_1] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Cristin"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Cristin1),
        //.party = {.NoItemDefaultMoves = sParty_Cristin1},
    },

    [TRAINER_MAY_RUSTBORO_TREECKO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRustboroTreecko),
        //.party = {.NoItemDefaultMoves = sParty_MayRustboroTreecko},
    },

    [TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
#if GAME_LANGUAGE == LANGUAGE_SPANISH
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#else
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_3,
#endif
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_MAY,
        .trainerName = _("May"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_MayRustboroTorchic),
        //.party = {.NoItemDefaultMoves = sParty_MayRustboroTorchic},
    },

    [TRAINER_ROXANNE_2] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("Roxanne"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Roxanne2),
        //.party = {.ItemCustomMoves = sParty_Roxanne2},
    },

    [TRAINER_ROXANNE_3] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("Roxanne"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Roxanne3),
        //.party = {.ItemCustomMoves = sParty_Roxanne3},
    },

    [TRAINER_ROXANNE_4] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("Roxanne"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Roxanne4),
        //.party = {.ItemCustomMoves = sParty_Roxanne4},
    },

    [TRAINER_ROXANNE_5] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .trainerName = _("Roxanne"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Roxanne5),
        //.party = {.ItemCustomMoves = sParty_Roxanne5},
    },

    [TRAINER_BRAWLY_2] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("Brawly"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brawly2),
        //.party = {.ItemCustomMoves = sParty_Brawly2},
    },

    [TRAINER_BRAWLY_3] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("Brawly"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brawly3),
        //.party = {.ItemCustomMoves = sParty_Brawly3},
    },

    [TRAINER_BRAWLY_4] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("Brawly"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brawly4),
        //.party = {.ItemCustomMoves = sParty_Brawly4},
    },

    [TRAINER_BRAWLY_5] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .trainerName = _("Brawly"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brawly5),
        //.party = {.ItemCustomMoves = sParty_Brawly5},
    },

    [TRAINER_WATTSON_2] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("Wattson"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wattson2),
        //.party = {.ItemCustomMoves = sParty_Wattson2},
    },

    [TRAINER_WATTSON_3] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("Wattson"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wattson3),
        //.party = {.ItemCustomMoves = sParty_Wattson3},
    },

    [TRAINER_WATTSON_4] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("Wattson"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wattson4),
        //.party = {.ItemCustomMoves = sParty_Wattson4},
    },

    [TRAINER_WATTSON_5] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .trainerName = _("Wattson"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Wattson5),
        //.party = {.ItemCustomMoves = sParty_Wattson5},
    },

    [TRAINER_FLANNERY_2] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("Flannery"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Flannery2),
        //.party = {.ItemCustomMoves = sParty_Flannery2},
    },

    [TRAINER_FLANNERY_3] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("Flannery"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Flannery3),
        //.party = {.ItemCustomMoves = sParty_Flannery3},
    },

    [TRAINER_FLANNERY_4] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("Flannery"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Flannery4),
        //.party = {.ItemCustomMoves = sParty_Flannery4},
    },

    [TRAINER_FLANNERY_5] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .trainerName = _("Flannery"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Flannery5),
        //.party = {.ItemCustomMoves = sParty_Flannery5},
    },

    [TRAINER_NORMAN_2] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("Norman"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Norman2),
        //.party = {.ItemCustomMoves = sParty_Norman2},
    },

    [TRAINER_NORMAN_3] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("Norman"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Norman3),
        //.party = {.ItemCustomMoves = sParty_Norman3},
    },

    [TRAINER_NORMAN_4] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("Norman"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Norman4),
        //.party = {.ItemCustomMoves = sParty_Norman4},
    },

    [TRAINER_NORMAN_5] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .trainerName = _("Norman"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Norman5),
        //.party = {.ItemCustomMoves = sParty_Norman5},
    },

    [TRAINER_WINONA_2] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("Winona"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY,
        .party = TRAINER_PARTY(sParty_Winona2),
        //.party = {.ItemCustomMoves = sParty_Winona2},
    },

    [TRAINER_WINONA_3] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("Winona"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY,
        .party = TRAINER_PARTY(sParty_Winona3),
    },

    [TRAINER_WINONA_4] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("Winona"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY,
        .party = TRAINER_PARTY(sParty_Winona4),
    },

    [TRAINER_WINONA_5] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .trainerName = _("Winona"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY | AI_SCRIPT_RISKY,
        .party = TRAINER_PARTY(sParty_Winona5),
    },

    [TRAINER_TATE_AND_LIZA_2] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("Tate&Liza"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TateAndLiza2),
    },

    [TRAINER_TATE_AND_LIZA_3] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("Tate&Liza"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TateAndLiza3),
    },

    [TRAINER_TATE_AND_LIZA_4] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("Tate&Liza"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TateAndLiza4),
    },

    [TRAINER_TATE_AND_LIZA_5] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .trainerName = _("Tate&Liza"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_TateAndLiza5),
    },

    [TRAINER_JUAN_2] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("Juan"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Juan2),
    },

    [TRAINER_JUAN_3] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("Juan"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Juan3),
    },

    [TRAINER_JUAN_4] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("Juan"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Juan4),
    },

    [TRAINER_JUAN_5] =
    {
        .partyLevel = TRAINER_LEVEL_GYM_LEADER,
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .trainerName = _("Juan"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Juan5),
    },

    [TRAINER_STEVEN] =
    {
        .partyLevel = TRAINER_LEVEL_POSTGAME,
        .trainerClass = TRAINER_CLASS_PKMN_MASTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_STEVEN,
        .trainerName = _("Steven"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Steven),
    },

    [TRAINER_ANABEL] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .trainerName = _("Anabel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Anabel),
        //.party = {.NoItemDefaultMoves = sParty_Anabel},
    },

    [TRAINER_TUCKER] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_DOME_ACE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .trainerName = _("Tucker"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Tucker),
        //.party = {.NoItemDefaultMoves = sParty_Tucker},
    },

    [TRAINER_SPENSER] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .trainerName = _("Spenser"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Spenser),
        //.party = {.NoItemDefaultMoves = sParty_Spenser},
    },

    [TRAINER_GRETA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .trainerName = _("Greta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Greta),
        //.party = {.NoItemDefaultMoves = sParty_Greta},
    },

    [TRAINER_NOLAND] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .trainerName = _("Noland"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Noland),
        //.party = {.NoItemDefaultMoves = sParty_Noland},
    },

    [TRAINER_LUCY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .trainerName = _("Lucy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Lucy),
        //.party = {.NoItemDefaultMoves = sParty_Lucy},
    },

    [TRAINER_BRANDON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .trainerName = _("Brandon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Brandon),
        //.party = {.NoItemDefaultMoves = sParty_Brandon},
    },

    [TRAINER_ANDRES_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Andres"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andres2),
        //.party = {.NoItemDefaultMoves = sParty_Andres2},
    },

    [TRAINER_ANDRES_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Andres"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andres3),
        //.party = {.NoItemDefaultMoves = sParty_Andres3},
    },

    [TRAINER_ANDRES_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Andres"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andres4),
        //.party = {.NoItemDefaultMoves = sParty_Andres4},
    },

    [TRAINER_ANDRES_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Andres"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Andres5),
        //.party = {.NoItemDefaultMoves = sParty_Andres5},
    },

    [TRAINER_CORY_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Cory"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cory2),
        //.party = {.NoItemDefaultMoves = sParty_Cory2},
    },

    [TRAINER_CORY_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Cory"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cory3),
        //.party = {.NoItemDefaultMoves = sParty_Cory3},
    },

    [TRAINER_CORY_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Cory"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cory4),
        //.party = {.NoItemDefaultMoves = sParty_Cory4},
    },

    [TRAINER_CORY_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Cory"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cory5),
        //.party = {.NoItemDefaultMoves = sParty_Cory5},
    },

    [TRAINER_PABLO_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Pablo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pablo2),
        //.party = {.NoItemDefaultMoves = sParty_Pablo2},
    },

    [TRAINER_PABLO_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Pablo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pablo3),
        //.party = {.NoItemDefaultMoves = sParty_Pablo3},
    },

    [TRAINER_PABLO_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Pablo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pablo4),
        //.party = {.NoItemDefaultMoves = sParty_Pablo4},
    },

    [TRAINER_PABLO_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .trainerName = _("Pablo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Pablo5),
        //.party = {.NoItemDefaultMoves = sParty_Pablo5},
    },

    [TRAINER_KOJI_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Koji"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Koji2),
        //.party = {.NoItemDefaultMoves = sParty_Koji2},
    },

    [TRAINER_KOJI_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Koji"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Koji3),
        //.party = {.NoItemDefaultMoves = sParty_Koji3},
    },

    [TRAINER_KOJI_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Koji"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Koji4),
        //.party = {.NoItemDefaultMoves = sParty_Koji4},
    },

    [TRAINER_KOJI_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Koji"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Koji5),
        //.party = {.NoItemDefaultMoves = sParty_Koji5},
    },

    [TRAINER_CRISTIN_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Cristin"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Cristin2),
        //.party = {.NoItemDefaultMoves = sParty_Cristin2},
    },

    [TRAINER_CRISTIN_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Cristin"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Cristin3),
        //.party = {.NoItemDefaultMoves = sParty_Cristin3},
    },

    [TRAINER_CRISTIN_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Cristin"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Cristin4),
        //.party = {.NoItemDefaultMoves = sParty_Cristin4},
    },

    [TRAINER_CRISTIN_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Cristin"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Cristin5),
        //.party = {.NoItemDefaultMoves = sParty_Cristin5},
    },

    [TRAINER_FERNANDO_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Fernando"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Fernando2),
        //.party = {.NoItemDefaultMoves = sParty_Fernando2},
    },

    [TRAINER_FERNANDO_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Fernando"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Fernando3),
        //.party = {.NoItemDefaultMoves = sParty_Fernando3},
    },

    [TRAINER_FERNANDO_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Fernando"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Fernando4),
        //.party = {.NoItemDefaultMoves = sParty_Fernando4},
    },

    [TRAINER_FERNANDO_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Fernando"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Fernando5),
        //.party = {.NoItemDefaultMoves = sParty_Fernando5},
    },

    [TRAINER_SAWYER_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Sawyer"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sawyer2),
        //.party = {.NoItemDefaultMoves = sParty_Sawyer2},
    },

    [TRAINER_SAWYER_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Sawyer"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sawyer3),
        //.party = {.NoItemDefaultMoves = sParty_Sawyer3},
    },

    [TRAINER_SAWYER_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Sawyer"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sawyer4),
        //.party = {.NoItemDefaultMoves = sParty_Sawyer4},
    },

    [TRAINER_SAWYER_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Sawyer"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Sawyer5),
        //.party = {.NoItemDefaultMoves = sParty_Sawyer5},
    },

    [TRAINER_GABRIELLE_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Gabrielle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gabrielle2),
        //.party = {.NoItemDefaultMoves = sParty_Gabrielle2},
    },

    [TRAINER_GABRIELLE_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Gabrielle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gabrielle3),
        //.party = {.NoItemDefaultMoves = sParty_Gabrielle3},
    },

    [TRAINER_GABRIELLE_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Gabrielle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gabrielle4),
        //.party = {.NoItemDefaultMoves = sParty_Gabrielle4},
    },

    [TRAINER_GABRIELLE_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Gabrielle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Gabrielle5),
        //.party = {.NoItemDefaultMoves = sParty_Gabrielle5},
    },

    [TRAINER_THALIA_2] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Thalia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Thalia2),
        //.party = {.NoItemDefaultMoves = sParty_Thalia2},
    },

    [TRAINER_THALIA_3] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Thalia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Thalia3),
        //.party = {.NoItemDefaultMoves = sParty_Thalia3},
    },

    [TRAINER_THALIA_4] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Thalia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Thalia4),
        //.party = {.NoItemDefaultMoves = sParty_Thalia4},
    },

    [TRAINER_THALIA_5] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Thalia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Thalia5),
        //.party = {.NoItemDefaultMoves = sParty_Thalia5},
    },

    [TRAINER_MARIELA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Mariela"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Mariela),
        //.party = {.NoItemDefaultMoves = sParty_Mariela},
    },

    [TRAINER_ALVARO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Alvaro"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Alvaro),
        //.party = {.NoItemDefaultMoves = sParty_Alvaro},
    },

    [TRAINER_EVERETT] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Everett"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = TRAINER_PARTY(sParty_Everett),
        //.party = {.NoItemDefaultMoves = sParty_Everett},
    },

    [TRAINER_RED] =
    {
        .partyLevel = TRAINER_LEVEL_POSTGAME,
        .trainerClass = TRAINER_CLASS_PKMN_MASTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_KANTO_CHAMP,
        .trainerPic = TRAINER_PIC_RED_RBY,
        .trainerName = _("Red"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Red),
        //.party = {.ItemCustomMoves = sParty_Red},
    },

    // Mock Battles
    [TRAINER_NURSE_SHERY] =
    {
        .partyLevel = TRAINER_LEVEL_MOCK_BATTLE,
        .trainerClass = TRAINER_CLASS_NURSE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_NURSE,
        .trainerName = _("Shery"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Dynamic),
    },

    [TRAINER_NURSE_SACHIKO] =
    {
        .partyLevel = TRAINER_LEVEL_MOCK_BATTLE,
        .trainerClass = TRAINER_CLASS_NURSE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_NURSE,
        .trainerName = _("Sachiko"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Dynamic),
    },

    [TRAINER_NURSE_KIRSTEN] =
    {
        .partyLevel = TRAINER_LEVEL_MOCK_BATTLE,
        .trainerClass = TRAINER_CLASS_NURSE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_NURSE,
        .trainerName = _("Kirsten"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Dynamic),
    },
    [TRAINER_PSS_TRAINER] =
    {
        .partyLevel = TRAINER_LEVEL_MOCK_BATTLE,
        .trainerClass = TRAINER_CLASS_NURSE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_NURSE,
        .trainerName = _("Kirsten"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Dynamic),
    },
    [TRAINER_PASSWORD_TRAINER] =
    {
        .partyLevel = TRAINER_LEVEL_MOCK_BATTLE,
        .trainerClass = TRAINER_CLASS_NURSE,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_NURSE,
        .trainerName = _("Password"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = TRAINER_PARTY(sParty_Dynamic),
    },

    //Sevii Trainers
    [TRAINER_CELINA_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PAINTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_PAINTER,
        .trainerName = _("Celina"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_PainterCelina),
    },

    [TRAINER_JACKI] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Jacki"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LadyJacki),
    },

    [TRAINER_DAISY_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Daisy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_GruntAquaHideout1),
    },

    [TRAINER_DESTIN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Destin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_YoungsterDestin),
    },

    [TRAINER_RAYNA] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PAINTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_PAINTER,
        .trainerName = _("Rayna"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_PainterRayna),
    },

    [TRAINER_GILLIAN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LADY,
        .trainerName = _("Gillian"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LadyGillian),
    },

    [TRAINER_ALIZE] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .trainerName = _("Alize"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_PkmnBreederAlize),
    },

    [TRAINER_TOBY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Toby"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_SwimmerMaleToby),
    },

    [TRAINER_MILO] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Gideon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_BirdKeeperMilo),
    },

    [TRAINER_CHAZ] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Chaz"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_BirdKeeperChaz),
    },

    [TRAINER_HAROLD] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Gideon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_BirdKeeperHarold),
    },

    [TRAINER_MASON_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("Mason"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_JugglerMason),
    },

    [TRAINER_MADELINE_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Madeline"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_PkmnRangerMadeline),
    },

    [TRAINER_EVE_AND_JON_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Eve & Jon"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_YoungCoupleEveJon),
    },

    [TRAINER_LEX_AND_NYA_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOL_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOL_COUPLE,
        .trainerName = _("Lex & Nya"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_CoolCoupleLexNya),
    },

    [TRAINER_JACLYN_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Jackyn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_PsychicJaclyn),
    },

    [TRAINER_MARCY_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Marcy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_PicnickerMarcy),
    },

    [TRAINER_KATELYN_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .trainerName = _("Katelyn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_PkmnRangerKatelyn),
    },

    [TRAINER_EVAN_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_TAMER,
        .trainerName = _("Evan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_TamerEvan),
    },

    [TRAINER_CYNDY_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CRUSH_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        .trainerName = _("Cyndy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_CrushGirlCyndy),
    },

    [TRAINER_LEROY_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Leroy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_CooltrainerLeroy),
    },

    [TRAINER_MICHELLE_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Michelle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_CooltrainerMichelle),
    },

    [TRAINER_DARYL_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Daryl"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_HikerDaryl),
    },

    [TRAINER_STANLY_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Stanly"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RuinManiacStanly),
    },

    [TRAINER_FOSTER_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Foster"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RuinManiacFoster),
    },

    [TRAINER_LARRY_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Larry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RuinManiacLarry),
    },

    [TRAINER_HECTOR_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Hector"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_PokemaniacHector),
    },

    [TRAINER_RILEY_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Riley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_CamperRiley),
    },

    [TRAINER_ALLISON_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER,
        .trainerName = _("Allison"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_PkmnBreederAllison),
    },

    [TRAINER_JONAH_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Jonah"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_BugCatcherJonah),
    },

    [TRAINER_DALIA_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Dalia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LassDalia),
    },

    [TRAINER_NASH_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Nash"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_YoungsterNash),
    },

    [TRAINER_JOANA_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Joana"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_LassJoana),
    },

    [TRAINER_GARRET_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Garret"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_SwimmerMaleGarrett),
    },

    [TRAINER_BETHANY_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER,
        .trainerName = _("Bethany"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_PkmnBreederBethany),
    },

    [TRAINER_CORDELL_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Cordell"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_YoungsterCordell),
    },

    [TRAINER_VANCE_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Vance"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_BugCatcherVance),
    },

    [TRAINER_LAYTON_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .trainerName = _("Layton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_RuinManiacLayton),
    },

    [TRAINER_JACKSON_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Jackson"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_PkmnRangerJackson),
    },

    [TRAINER_MIAH_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE | F_TRAINER_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .trainerName = _("Miah"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_AromaLadyMiah),
    },

    [TRAINER_NICOLAS_SEVII] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .trainerName = _("Nicolas"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_PkmnRangerNicolas),
    },

    //Team Rocket Grunts
    [TRAINER_TEAM_ROCKET_GRUNT_42] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_TeamRocketGrunt42),
    },

    [TRAINER_TEAM_ROCKET_GRUNT_47] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_TeamRocketGrunt47),
    },

    [TRAINER_TEAM_ROCKET_GRUNT_48] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_TeamRocketGrunt48),
    },

    [TRAINER_TEAM_ROCKET_GRUNT_49] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_TeamRocketGrunt49),
    },

    [TRAINER_DEBUG_OPPONENT] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Debug_Opponent),
    },

    [TRAINER_TEAM_ROCKET_GRUNT_50] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_TeamRocketGrunt50),
    },

    [TRAINER_TEAM_ROCKET_GRUNT_51] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_TeamRocketGrunt51),
    },
    
    [TRAINER_SCIENTIST_GIDEON] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_NORMAL,
        .trainerClass = TRAINER_CLASS_SCIENTIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_SCIENTIST,
        .trainerName = _("Gideon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_ScientistGideon),
    },

    [TRAINER_TEAM_ROCKET_ADMIN] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_HARD,
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Admin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_TeamRocketAdmin),
    },

    //Sevii Gym Trainers
    //Falkner's Gym
    [TRAINER_BIRD_KEEPER_ROD] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Rod"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FLYING,
    },

    [TRAINER_BIRD_KEEPER_ABE] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Abe"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FLYING,
    },
    //Bugsy's Gym
    [TRAINER_TWINS_AMY_AND_MAY] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Amy & May"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_BUG,
    },

    [TRAINER_BUG_CATCHER_BENNY] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Benny"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_BUG,
    },

    [TRAINER_BUG_CATCHER_AL] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Al"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_BUG,
    },

    [TRAINER_BUG_CATCHER_JOSH] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Josh"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_BUG,
    },

    //Whitney's Gym
    [TRAINER_BEAUTY_VICTORIA] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Victoria"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_NORMAL,
    },

    [TRAINER_LASS_CARRIE] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Carrie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FAIRY,
    },

    [TRAINER_LASS_BRIDGET] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Bridget"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_NORMAL,
    },

    [TRAINER_BEAUTY_SAMANTHA] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Samantha"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FAIRY,
    },

    //Not a thing
    [TRAINER_CAMPER_BARRY] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Barry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_NORMAL,
    },
    //Morty's Gym
    [TRAINER_SAGE_JEFFREY] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Jeffrey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_GHOST,
    },

    [TRAINER_SAGE_PING] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Ping"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_GHOST,
    },

    [TRAINER_MEDIUM_MARTHA] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Martha"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_GHOST,
    },

    [TRAINER_MEDIUM_GRACE] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Grace"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_GHOST,
    },

    //Chuck's Gym
    [TRAINER_BLACKBELT_YOSHI] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Ping"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIGHTING,
    },

    [TRAINER_BLACKBELT_LAO] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Lao"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIGHTING,
    },

    [TRAINER_BLACKBELT_NOB] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Nob"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIGHTING,
    },

    [TRAINER_BLACKBELT_LUNG] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Lung"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_FIGHTING,
    },

    //Pryce's Gym
    [TRAINER_SKIER_ROXANNE] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Roxxane"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_ICE,
    },

    [TRAINER_SKIER_CLARISSA] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Clarissa"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_ICE,
    },

    [TRAINER_BOARDER_RONALD] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Ronald"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_ICE,
    },

    [TRAINER_BOARDER_BRAD] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Brad"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_ICE,
    },

    [TRAINER_BOARDER_DOUGLAS] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Douglas"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_ICE,
    },

    //Clair's Gym
    [TRAINER_COOLTRAINERM_CODY] =
    {
        .partyLevel = TRAINER_LEVEL_DYNAMIC_HARD,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Cody"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Cody),
    },
    
    [TRAINER_COOLTRAINERF_FRAN] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Fran"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_DRAGON,
    },
    
    [TRAINER_COOLTRAINERM_PAUL] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Paul"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_DRAGON,
    },
    
    [TRAINER_COOLTRAINERM_MIKE] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Mike"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_DRAGON,
    },
    
    [TRAINER_COOLTRAINERF_LOLA] =
    {
        .partyLevel = TRAINER_LEVEL_RANDOM_GYM_TRAINERS,
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Lola"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = TRAINER_PARTY(sParty_Dynamic),
        .argument = TYPE_DRAGON,
    },
};
