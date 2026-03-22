#define SIGNATURE_MOVE_DESCRIPTION_WIDTH  224
#define SIGNATURE_MOVE_DESCRIPTION_FONT  8 // FONT_SMALL_NARROW
#define FORMAT_SIGNATURE_MOVE_DESCRIPTION(str) _f(SIGNATURE_MOVE_DESCRIPTION_FONT, SIGNATURE_MOVE_DESCRIPTION_WIDTH, str)
#define DEFINE_SIGNATURE_MOVE_DESCRIPTION(str) .summaryScreen_description = FORMAT_SIGNATURE_MOVE_DESCRIPTION(str)

const struct SignatureMove  gSignatureMoveList[NUM_SPECIES] = {
    // Kanto ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_BULBASAUR] =
    {
        .move = MOVE_LEECH_SEED,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 40,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = 10,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 40 BP move that seeds the target."),
    },

    [SPECIES_IVYSAUR] =
    {
        .move = MOVE_VINE_WHIP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_DOUBLE_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 35,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
                .chance       = 15, //Per Hit
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 2 hit 35 BP move that can seed the target."),
    },

    [SPECIES_VENUSAUR] =
    {
        .move = MOVE_SOLAR_BEAM,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 120,
                .argument     = SIGNATURE_MOVE_POWER_IN_CONDITIONS,
                .chance       = SIGNATURE_CONDITION_WEATHER_SUN,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable     = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_DRAIN,
                .argument     = 20, //10% of its max HP
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 100BP move normally and 120BP in the sun, always charges in one turn and restores 20% of the damage done as HP."),
    },

    [SPECIES_VENUSAUR_MEGA] =
    {
        .move = MOVE_SOLAR_BEAM,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 110,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 130,
                .argument     = SIGNATURE_MOVE_POWER_IN_CONDITIONS,
                .chance       = SIGNATURE_CONDITION_WEATHER_SUN,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable     = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_DRAIN,
                .argument     = 25, //20% of its max HP
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 110BP move normally and 130BP in the sun, always charges in one turn and restores 25% of the damage done as HP."),
    },

    [SPECIES_VENUSAUR_MEGA_G] =
    {
        .move = MOVE_SOLAR_BEAM,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 110,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 130,
                .argument     = SIGNATURE_MOVE_POWER_IN_CONDITIONS,
                .chance       = SIGNATURE_CONDITION_WEATHER_SUN,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable     = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_DRAIN,
                .argument     = 25, //20% of its max HP
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_PHYSICAL,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a physical 110BP move normally and 130BP in the sun, always charges in one turn and restores 25% of the damage done as HP."),
    },

    [SPECIES_CHARMANDER] =
    {
        .move = MOVE_TAIL_WHIP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 30,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = 10,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 30 BP move that burns the target."),
    },

    [SPECIES_CHARIZARD] =
    {
        .move = MOVE_FLAMETHROWER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 30,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_ROCK,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Has a 30% chance to burn the target and is super effective against Rock types."),
    },

    [SPECIES_CHARIZARD_MEGA_Y] =
    {
        .move = MOVE_FLAMETHROWER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 40,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_ROCK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 110,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 110BP move that has a 40% chance of burning and hits Rock types x2."),
    },

    [SPECIES_CHARIZARD_MEGA_X] =
    {
        .move = MOVE_FLAMETHROWER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_DRAGON,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_ROCK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Fire/Dragon type move that hits Rock types x2 and uses the highest attacking stat."),
    },

    [SPECIES_BLASTOISE] =
    {
        .move = MOVE_HYDRO_PUMP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_STAT_STAGES_IGNORED,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_MEGA_LAUNCHER_BOOST,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95 Accuracy move that ignores target stat changes and becomes a launcher move."),
    },

    [SPECIES_BLASTOISE_MEGA] =
    {
        .move = MOVE_HYDRO_PUMP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_STAT_STAGES_IGNORED,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_MEGA_LAUNCHER_BOOST,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 100 Accuracy move that ignores target stat changes and becomes a launcher move."),
    },

    [SPECIES_BLASTOISE_MEGA_G] =
    {
        .move = MOVE_HYDRO_PUMP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_STAT_STAGES_IGNORED,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_MEGA_LAUNCHER_BOOST,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_PHYSICAL,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 100 Accuracy move that ignores target stat changes and becomes a launcher move."),
    },

    [SPECIES_CATERPIE] =
    {
        .move = MOVE_STRING_SHOT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 40,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TARGET_STAT_DOWN,
                .variable     = STAT_SPEED,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_INFESTATION,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 40 BP move that lowers the target speed and has a chance on infesting the target."),
    },

    [SPECIES_METAPOD] =
    {
        .move = MOVE_HARDEN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_DEFENSE_UP_2,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Raises the Defense of the user twice."),
    },

    [SPECIES_BUTTERFREE] =
    {
        .move = MOVE_GUST,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_POISON,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SELF_SET_TAILWIND,
                .chance       = 10,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80BP move, that can poison the foe and set up tailwind to its team."),
    },

    [SPECIES_BUTTERFREE_MEGA] =
    {
        .move = MOVE_HURRICANE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_POISON,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SELF_SET_TAILWIND,
                .chance       = 10,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 95,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a move that can poison the foe and set up tailwind to its team and has 95% accuracy."),
    },

    [SPECIES_KAKUNA] =
    {
        .move = MOVE_HARDEN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_DEFENSE_UP_2,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Raises the Defense of the user twice."),
    },

    [SPECIES_BEEDRILL] =
    {
        .move = MOVE_TWINEEDLE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 45,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_BUG,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 45 BP move that hits Bug types x2 and ignores the target Defense changes."),
    },

    [SPECIES_BEEDRILL_MEGA] =
    {
        .move = MOVE_TWINEEDLE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 50,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_BUG,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 50 BP move that hits Bug types x2 and ignores the target Defense changes."),
    },

    [SPECIES_RATICATE] =
    {
        .move = MOVE_HYPER_FANG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 33,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95 BP move that ignores target stat changes."),
    },

    [SPECIES_RATICATE_ALOLA] =
    {
        .move = MOVE_CRUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 33,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95 BP move that ignores target stat changes."),
    },

    [SPECIES_FEAROW] =
    {
        .move = MOVE_DRILL_PECK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_GROUND,
            },
        },
        .unlockedLevel = 33,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95 BP move that hits Ground types x2 and ignores target stat changes"),
    },

    [SPECIES_PICHU] =
    {
        .move = MOVE_VOLT_TACKLE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 130,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_ELECTRIC,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_RECKOIL,
                .argument     = 35, //25% of its max HP
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a recoil 130 BP move that has a 20% chance of setting electric terrain and uses the highest attacking stat for damage calculation."),
    },

    [SPECIES_PIKACHU] =
    {
        .move = MOVE_VOLT_TACKLE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 120,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_ELECTRIC,
                .chance       = 15,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_RECKOIL,
                .argument     = 25, //25% of its max HP
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a recoil 120 BP move that has a 15% chance of setting electric terrain and uses the highest attacking stat for damage calculation."),
    },

    [SPECIES_RAICHU] =
    {
        .move = MOVE_VOLT_TACKLE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 120,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_ELECTRIC,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_RECKOIL,
                .argument     = 25, //25% of its max HP
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a recoil 120 BP move that has a chance of setting electric terrain and uses the highest attacking stat for damage calculation."),
    },

    [SPECIES_RAICHU_MEGA_X] =
    {
        .move = MOVE_VOLT_TACKLE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 125,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_ELECTRIC,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_ELECTRIC,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_STAT_STAGES_IGNORED,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_RECKOIL,
                .argument     = 25, //25% of its max HP
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a recoil 125 BP move that has a chance of setting electric terrain, hits super effective against electric types and ignores the target stat changes."),
    },

    [SPECIES_RAICHU_MEGA_Y] =
    {
        .move = MOVE_VOLT_TACKLE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 125,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_ELECTRIC,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_REMOVE_FLAG,
                .variable     = FLAG_MAKES_CONTACT,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_RECKOIL,
                .argument     = 25, //25% of its max HP
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes an special 125 BP recoil move that has a chance of setting electric terrain, can paralyze the target and does not make contact."),
    },

    [SPECIES_RAICHU_ALOLA] =
    {
        .move = MOVE_VOLT_TACKLE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 120,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_ELECTRIC,
                .chance       = 15,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_PSYCHIC,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 120 BP Electric and Psychic type move that has a 15% chance of setting electric terrain"),
    },

    [SPECIES_ARBOK] =
    {
        .move = MOVE_POISON_FANG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_STEEL,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_SET_HEAL_BLOCK,
            },
        },
        .unlockedLevel = 45,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95BP moves that hit steel types x2 and has a 30% chance of paralyzing the target and blocks healing for 5 turns"),
    },

    [SPECIES_JIGGLYPUFF] =
    {
        .move = MOVE_SING,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 30,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_SLEEP,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_SPECIAL,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 80,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 30 BP move with 80% accuracy that makes the target sleep."),
    },

    [SPECIES_WIGGLYTUFF] =
    {
        .move = MOVE_HYPER_VOICE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_SLEEP,
                .chance       = 20,  // Not a chance-based modification
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FAIRY,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 100,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 100 BP Fairy-type move that can make the target sleep."),
    },

    [SPECIES_VULPIX] =
    {
        .move = MOVE_WILL_O_WISP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 35,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HEX,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_SPECIAL,
            },
        },
        .unlockedLevel = 20,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 35 BP move that burns the target and doubles in power when the target is affected by status problems."),
    },

    [SPECIES_NINETALES] =
    {
        .move = MOVE_WILL_O_WISP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 45,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HEX,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_SPECIAL,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 45 BP move that burns the target and doubles in power when the target is affected by status problems."),
    },

    [SPECIES_HYPNO] =
    {
        .move = MOVE_HYPNOSIS,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 30,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_EXPANDING_FORCE,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_SLEEP,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_SPECIAL,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 85,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 30 BP move with 85% accuracy that makes the target sleep and becomes stronger in psychic terrain."),
    },

    [SPECIES_GOLEM] =
    {
        .move = MOVE_EXPLOSION,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_OPPONET_SET_STEALTH_ROCK,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ROCK,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Rock-type move that ignores the target defense and sets up Stealth Rock when used."),
    },

    [SPECIES_GOLEM_ALOLA] =
    {
        .move = MOVE_EXPLOSION,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_ELECTRIC,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ELECTRIC,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes an Electric-type move that ignores the target defense and sets up Electric Terrain when used."),
    },

    [SPECIES_DUGTRIO] =
    {
        .move = MOVE_DIG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 35,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_TRIPLE_KICK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 10,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 35 BP move that hits the target 3 times, can flinch the target."),
    },

    [SPECIES_DUGTRIO_ALOLA] =
    {
        .move = MOVE_DIG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 35,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_TRIPLE_KICK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TARGET_STAT_DOWN,
                .variable     = STAT_SPEED,
                .chance       = 10,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 35 BP move that hits the target 3 times, can lower the target speed."),
    },

    [SPECIES_DODUO] =
    {
        .move = MOVE_PECK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 40,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_DOUBLE_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 15,
            },
        },
        .unlockedLevel = 15,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 40 BP move that hits the target twice, can raise the user attack."),
    },

    [SPECIES_DODRIO] =
    {
        .move = MOVE_DRILL_PECK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 35,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_TRIPLE_KICK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 10,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 35 BP move that hits the target 3 times, can raise the user attack."),
    },

    [SPECIES_MAGNETON] =
    {
        .move = MOVE_DISCHARGE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 35,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_TRIPLE_KICK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
                .chance       = 10, //Effect per hit
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 35 BP move that hits the target 3 times, paralysis chances becomes 10% per hit."),
    },

    [SPECIES_MEOWTH] =
    {
        .move = MOVE_PAY_DAY,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 10,
            },
        },
        .unlockedLevel = 23,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80BP move that can raise the user speed and flinch the target."),
    },

    [SPECIES_PERSIAN] =
    {
        .move = MOVE_PAY_DAY,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
                .chance       = 10,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 10,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90BP move that can raise the user speed or flinch the target."),
    },

    [SPECIES_MEOWTH_ALOLA] =
    {
        .move = MOVE_PAY_DAY,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_DARK,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPATK,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = 23,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a special 90BP Dark-type move that can raise Sp.Atk and uses the highest attacking stat."),
    },

    [SPECIES_PERSIAN_ALOLA] =
    {
        .move = MOVE_PAY_DAY,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_DARK,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPATK,
                .chance       = 10,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a special 90BP Dark-type move that can raise Sp.Atk and uses the highest attacking stat."),
    },

    [SPECIES_MEOWTH_GALAR] =
    {
        .move = MOVE_PAY_DAY,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_STEEL,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 23,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80BP Steel Type move that can raise Attack and ignores the target defense changes."),
    },

    [SPECIES_PERRSERKER] =
    {
        .move = MOVE_PAY_DAY,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_STEEL,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 10,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90BP Steel Type move that can raise Attack and ignores the target defense changes."),
    },

    [SPECIES_PARAS] =
    {
        .move = MOVE_SLASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GRASS,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CURE,
                .argument     = 25, //25% of its max HP
            },
        },
        .unlockedLevel = 20,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Grass type move that has a 30% chance of seeding the target and cures the user."),
    },

    [SPECIES_PARASECT] =
    {
        .move = MOVE_LEECH_LIFE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_GHOST,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CURSE,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Bug/Ghost type move that has a 10% chance of cursing the target and ignores the target defense."),
    },

    [SPECIES_CUBONE] =
    {
        .move = MOVE_BONEMERANG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_IN_CONDITIONS,
                .chance       = SIGNATURE_CONDITION_WEATHER_SAND,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_FLYING,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_HIT_AIRBONE_TARGETS,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_HIT_IN_AIR,
            },
            
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Gains priority in sandstorms and hits Flying-types super effectively also hits airborne targets."),
    },

    [SPECIES_MAROWAK] =
    {
        .move = MOVE_BONE_CLUB,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 75,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_IN_CONDITIONS,
                .chance       = SIGNATURE_CONDITION_WEATHER_SAND,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_FLYING,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_HIT_AIRBONE_TARGETS,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_HIT_IN_AIR,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 75BP move that gains priority in sandstorms, hits Flying-types super effectively and hits airborne targets."),
    },

    [SPECIES_MAROWAK_ALOLA] =
    {
        .move = MOVE_SHADOW_BONE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CURSE,
                .chance       = 10,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_HIT_IN_AIR,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Has a 10% chance of cursing the target or raise the user attack."),
    },

    [SPECIES_EXEGGUTOR] =
    {
        .move = MOVE_SEED_BOMB,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
                .chance       = 25,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 100BP move that has a 25% chance to confuse and uses the user highest attacking stat."),
    },

    [SPECIES_EXEGGUTOR_ALOLA] =
    {
        .move = MOVE_DRAGON_HAMMER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 10,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 100BP move that has a 10% chance to flinch and uses the user highest attacking stat."),
    },

    [SPECIES_MACHAMP] =
    {
        .move = MOVE_STRENGTH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_DEF,
                .chance       = 50,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95BP move that has a 50% chance of boosting the user defense."),
    },

    [SPECIES_MACHAMP_MEGA] =
    {
        .move = MOVE_STRENGTH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_DAMAGE_STAT,
                .variable     = STAT_ATK,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95BP move that hits the target attack stat rather than defense."),
    },

    [SPECIES_LICKITUNG] =
    {
        .move = MOVE_LICK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 75,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CURE,
                .argument     = 25, //25% of its max HP
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_NORMAL,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 75BP Normal-type move that restores 25% of the user's health."),
    },

    [SPECIES_LICKILICKY] =
    {
        .move = MOVE_ROLLOUT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 85,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_NORMAL,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 85BP Normal-type move that hits the target once but still doubles from defense curl."),
    },

    [SPECIES_CLEFABLE] =
    {
        .move = MOVE_MOONBLAST,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_OPPONET_SET_STEALTH_ROCK,
                .chance       = 25,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPATK,
                .chance       = 20,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 100BP move that may raise the user special attack and may set up Stealth Rocks."),
    },

    [SPECIES_CLEFABLE_MEGA] =
    {
        .move = MOVE_MOONBLAST,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_OPPONET_SET_STEALTH_ROCK,
                .chance       = 25,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPATK,
                .chance       = 30,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 100BP move that may raise the user special attack and may set up Stealth Rocks."),
    },

    [SPECIES_VICTREEBEL] =
    {
        .move = MOVE_JAW_LOCK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_TRAP,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_POISON,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_POISON,
                .chance       = 30,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Poison-type move traps the foe for two to five turns, doing damage each turn and has a high chance of poisoning the target."),
    },

    [SPECIES_VICTREEBEL_MEGA] =
    {
        .move = MOVE_JAW_LOCK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_TRAP,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_POISON,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_POISON,
                .chance       = 50,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Poison-type move traps the foe for two to five turns, doing damage each turn and has a high chance of poisoning the target."),
    },

    [SPECIES_HITMONLEE] =
    {
        .move = MOVE_HI_JUMP_KICK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
                .chance       = 30,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Gets an accuracy of 100 and can raise speed."),
    },

    [SPECIES_HITMONCHAN] =
    {
        .move = MOVE_MACH_PUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 60,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_DEF,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 60BP move that ignores the target stat changes and can raise the user defense."),
    },

    [SPECIES_HITMONTOP] =
    {
        .move = MOVE_TRIPLE_KICK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 35,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 10,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SELF_REMOVE_HAZARDS,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 35BP move that can raise Attack and removes hazards."),
    },

    [SPECIES_ANNIHILAPE] =
    {
        .move = MOVE_RAGE_FIST,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_DRAIN,
                .argument     = 30, //30% of its max HP
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_NEUTRAL_AGAINST_TYPE,
                .variable     = TYPE_NORMAL,
            },
        },
        .unlockedLevel = 45,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Now heals a portion of the damage done and can hit normal-type targets."),
    },

    [SPECIES_VOLTORB] =
    {
        .move = MOVE_ELECTRO_BALL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_DAMAGE_STAT,
                .variable     = STAT_SPEED,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
                .chance       = 20,
            },
        },
        .unlockedLevel = 20,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 70BP move that uses the user's Speed stat to calculate damage and can raise the user speed."),
    },

    [SPECIES_ELECTRODE] =
    {
        .move = MOVE_ELECTRO_BALL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_DAMAGE_STAT,
                .variable     = STAT_SPEED,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
                .chance       = 10,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 70BP move that uses the user's Speed stat to calculate damage and can raise the user speed."),
    },

    [SPECIES_VOLTORB_HISUI] =
    {
        .move = MOVE_ENERGY_BALL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_DAMAGE_STAT,
                .variable     = STAT_SPEED,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
                .chance       = 20,
            },
        },
        .unlockedLevel = 20,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 70BP move that uses the user's Speed stat to calculate damage and can raise the user speed."),
    },

    [SPECIES_ELECTRODE_HISUI] =
    {
        .move = MOVE_ENERGY_BALL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_DAMAGE_STAT,
                .variable     = STAT_SPEED,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
                .chance       = 10,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 70BP move that uses the user's Speed stat to calculate damage and can raise the user speed."),
    },

    [SPECIES_KOFFING] =
    {
        .move = MOVE_SMOG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 60,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 90,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 60BP move that has 90% chance of poisoning the target with 90 accuracy."),
    },

    [SPECIES_WEEZING] =
    {
        .move = MOVE_SMOG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 45,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 95,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 45BP move that has 100% chance of poisoning the target with 95 accuracy."),
    },

    [SPECIES_WEEZING_GALAR] =
    {
        .move = MOVE_SMOG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_FAIRY,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 45,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 95,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 45BP move that has 100% chance of poisoning the target with 95 accuracy and gains the Fairy type."),
    },

    [SPECIES_STARYU] =
    {
        .move = MOVE_SWIFT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_WATER,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 50,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_CHANGE_TARGET,
                .variable     = MOVE_TARGET_SELECTED,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 50BP Water-type priority move that can confuse the foe, hits a single target."),
    },

    [SPECIES_STARMIE] =
    {
        .move = MOVE_SWIFT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_WATER,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 60,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
                .chance       = 10,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_CHANGE_TARGET,
                .variable     = MOVE_TARGET_SELECTED,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 60BP Water-type priority move that can confuse the foe, hits a single target."),
    },

    [SPECIES_STARMIE_MEGA] =
    {
        .move = MOVE_SWIFT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_WATER,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_CHANGE_TARGET,
                .variable     = MOVE_TARGET_SELECTED,
            },
            [SIGNATURE_MOVE_EFFECT_6] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_PHYSICAL,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 70BP Physical Water-type priority move that can confuse the foe, hits a single target."),
    },

    [SPECIES_CLOYSTER] =
    {
        .move = MOVE_SPIKE_CANNON,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_OPPONET_SET_SPIKES,
                .chance       = 10, //Chance per hit
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_WATER,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Water-type move that can set up spikes."),
    },

    [SPECIES_ARCANINE] =
    {
        .move = MOVE_EXTREME_SPEED,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FIRE,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 10,
            },
        },
        .unlockedLevel = 45,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 70 BP Fire type move that can burn the target."),
    },

    [SPECIES_ARCANINE_HISUI] =
    {
        .move = MOVE_EXTREME_SPEED,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ROCK,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 10,
            },
        },
        .unlockedLevel = 45,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 70 BP Rock type move that can burn the target."),
    },

    [SPECIES_SMOOCHUM] =
    {
        .move = MOVE_DRAINING_KISS,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_PSYCHIC,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 70 BP Psychic-type move that may infatuate the target, ignores defense changes."),
    },

    [SPECIES_JYNX] =
    {
        .move = MOVE_DRAINING_KISS,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ICE,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90 BP Ice-type move that may infatuate the target, ignores defense changes."),
    },

    [SPECIES_TAUROS] =
    {
        .move = MOVE_RAGING_BULL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 120,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_RECKOIL,
                .argument     = 25, //25% of its max HP
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 120 BP recoil move."),
    },

    [SPECIES_TAUROS_PALDEA_AQUA] =
    {
        .move = MOVE_RAGING_BULL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_WATER,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Water-type move."),
    },

    [SPECIES_TAUROS_PALDEA_BLAZE] =
    {
        .move = MOVE_RAGING_BULL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FIRE,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Fire-type move."),
    },

    [SPECIES_TAUROS_PALDEA_COMBAT] =
    {
        .move = MOVE_RAGING_BULL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FIGHTING,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Fighting-type move."),
    },

    [SPECIES_CHANSEY] =
    {
        .move = MOVE_SOFT_BOILED,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_DEF,
                .chance       = 50,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_HEAL_STATUS,
                .chance       = 20,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Has a high chance of boosting its own defense and curing its own status problems."),
    },

    [SPECIES_BLISSEY] =
    {
        .move = MOVE_SOFT_BOILED,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_DEF,
                .chance       = 50,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_HEAL_STATUS,
                .chance       = 20,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Has a high chance of boosting its own defense and curing its own status problems."),
    },

    [SPECIES_MAGIKARP] =
    {
        .move = MOVE_SPLASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 20,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_ACCURACY_DOWN_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_CHANGE_TARGET,
                .variable     = MOVE_TARGET_BOTH,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = 99,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 20 BP move that targets both enemies and lowers their accuracy."),
    },

    [SPECIES_GYARADOS] =
    {
        .move = MOVE_THRASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FLYING,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a single hit 100 BP Flying-type move that does not lock the user."),
    },

    [SPECIES_GYARADOS_MEGA] =
    {
        .move = MOVE_THRASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 110,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_WATER,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a single hit 110 BP Water-type move that does not lock the user."),
    },

    [SPECIES_LAPRAS] =
    {
        .move = MOVE_SURF,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FROSTBITE,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_ICE,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_CHANGE_TARGET,
                .variable     = MOVE_TARGET_BOTH,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Water and Ice type move that can frostbite the target, does not hit allies."),
    },

    [SPECIES_LAPRAS_MEGA] =
    {
        .move = MOVE_SURF,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FROSTBITE,
                .chance       = 25,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_ICE,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_CHANGE_TARGET,
                .variable     = MOVE_TARGET_BOTH,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Water and Ice type move that can frostbite the target, does not hit allies."),
    },

    [SPECIES_DITTO] =
    {
        .move = MOVE_TRANSFORM,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Priority move."),
    },

    [SPECIES_AERODACTYL] =
    {
        .move = MOVE_CRUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FLYING,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_STAT_STAGES_IGNORED,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 30,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95 BP Flying-type move that ignores stat changes and has a higher chance of lowering the target defense."),
    },

    [SPECIES_AERODACTYL_MEGA] =
    {
        .move = MOVE_CRUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ROCK,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_STAT_STAGES_IGNORED,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 40,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 100 BP Rock-type move that ignores stat changes and has a higher chance of lowering the target defense."),
    },

    [SPECIES_DRAGONITE] =
    {
        .move = MOVE_EXTREME_SPEED,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FLYING,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
        },
        .unlockedLevel = 60,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 70BP Flying type move."),
    },

    [SPECIES_DRAGONITE_MEGA] =
    {
        .move = MOVE_EXTREME_SPEED,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FLYING,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_DRAIN,
                .argument     = 25, //25% of its max HP
            },
        },
        .unlockedLevel = 60,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 70BP Flying type move that restores some of the damage done to the target."),
    },

    [SPECIES_ARTICUNO] =
    {
        .move = MOVE_BLIZZARD,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_WATER,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_HAIL,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 90,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes an Ice move that can hit x2 against Water-types, set up hail and has a 90% accuracy."),
    },

    [SPECIES_ZAPDOS] =
    {
        .move = MOVE_THUNDER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_GRASS,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = FIELD_SET_TERRAIN_ELECTRIC,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 90,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes an Electric move that can hit x2 against Grass-types, set up electric terrain and has a 90% accuracy."),
    },

    [SPECIES_MOLTRES] =
    {
        .move = MOVE_FIRE_BLAST,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_WATER,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = FIELD_SET_WEATHER_SUN,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 90,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Fire move that can hit x2 against Water-types, set up Sunny Day and has a 90% accuracy."),
    },

    // Jotho ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_MEGANIUM] =
    {
        .move = MOVE_PETAL_BLIZZARD,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TARGET_STAT_DOWN,
                .variable     = STAT_ATK,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_GRASS,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_SPECIAL,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a special 100BP move that lowers the target's attack stat, can set up Grassy Terrain and does not hit allies."),
    },

    [SPECIES_MEGANIUM_MEGA] =
    {
        .move = MOVE_PETAL_BLIZZARD,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TARGET_STAT_DOWN,
                .variable     = STAT_SPDEF,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 110,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_MISTY,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_SPECIAL,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a special 110BP move that lowers the target's special defense stat, can set up misty terrain and does not hit allies."),
    },

    [SPECIES_TYPHLOSION] =
    {
        .move = MOVE_ERUPTION,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_OTHER,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_SUN,
                .chance       = 10,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Can set up the sun and only goes down to 60BP."),
    },

    [SPECIES_TYPHLOSION_MEGA] =
    {
        .move = MOVE_ERUPTION,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_OTHER,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_SUN,
                .chance       = 20,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Can set up the sun and only goes down to 60BP."),
    },

    [SPECIES_TYPHLOSION_HISUI] =
    {
        .move = MOVE_INFERNO,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 75,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 110,
                .argument     = SIGNATURE_MOVE_POWER_IN_CONDITIONS,
                .chance       = SIGNATURE_CONDITION_TARGET_HAS_STATUS,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 30,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 75BP Ghost-type move that does extra damage to targets affected by status conditions and has a high chance of burning the target."),
    },

    [SPECIES_TYPHLOSION_HISUI_MEGA] =
    {
        .move = MOVE_INFERNO,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 120,
                .argument     = SIGNATURE_MOVE_POWER_IN_CONDITIONS,
                .chance       = SIGNATURE_CONDITION_TARGET_HAS_STATUS,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 30,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 75BP Ghost-type move that does extra damage to targets affected by status conditions and has a high chance of burning the target."),
    },

    [SPECIES_FERALIGATR] =
    {
        .move = MOVE_JAW_LOCK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_WATER,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_DMG_UNDERWATER,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Water-type move that can confuse the target and can hit underwater targets."),
    },

    [SPECIES_FERALIGATR_MEGA] =
    {
        .move = MOVE_JAW_LOCK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_DRAGON,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_DMG_UNDERWATER,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_REMOVE_FLAG,
                .variable     = FLAG_MAKES_CONTACT,
            }
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Dragon-type move that can confuse the target, does not make contact and can hit underwater targets."),
    },

    [SPECIES_FURRET] =
    {
        .move = MOVE_COIL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_NORMAL,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Now also raises the speed stat and gains priority"),
    },

    [SPECIES_FORRETRESS] =
    {
        .move = MOVE_GYRO_BALL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 33,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_DEF,
                .chance       = 33,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
                .argument     = TRUE, //Stat Down
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Now also lowers the user speed and may boost the attack or defense stats."),
    },

    [SPECIES_PHANPY] =
    {
        .move = MOVE_ROLLOUT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 65,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_RAPID_SPIN,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GROUND,
            },
        },
        .unlockedLevel = 20,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 65 BP single hit Ground-type move that removes the field hazards and boost the user speed."),
    },

    [SPECIES_DONPHAN] =
    {
        .move = MOVE_ROLLOUT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_RAPID_SPIN,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GROUND,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80 BP single hit Ground-type move that removes the field hazards and boost the user speed."),
    },

    [SPECIES_TOGEKISS] =
    {
        .move = MOVE_AIR_SLASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 85,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TARGET_STAT_DOWN,
                .variable     = STAT_SPEED,
                .chance       = 25,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 85BP move with a 100% accuracy that may lower the target speed."),
    },

    [SPECIES_MAGCARGO] =
    {
        .move = MOVE_ANCIENT_POWER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 40,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 15,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 40BP move that has a higher chance of boosting its stats and always burns the target."),
    },

    [SPECIES_AMPHAROS] =
    {
        .move = MOVE_DISCHARGE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_ELECTRIC,
                .chance       = 25,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90BP move that can set up electric terrain"),
    },

    [SPECIES_AMPHAROS_MEGA] =
    {
        .move = MOVE_DISCHARGE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_ELECTRIC,
                .chance       = 35,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90BP move that can set up electric terrain"),
    },

    [SPECIES_SUNFLORA] =
    {
        .move = MOVE_SOLAR_BEAM,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable     = EFFECT_ABSORB,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
                .chance       = 30,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 100BP single turn move that restores the user's HP by half of the damage dealt and may seed the target."),
    },

    [SPECIES_URSALUNA] =
    {
        .move = MOVE_TAKE_DOWN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GROUND,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 120,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_CHANGE_TARGET,
                .variable     = MOVE_TARGET_BOTH,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_CLOSE_COMBAT,
            },
        },
        .unlockedLevel = 55,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 120BP Ground-Type Close Combat variant that hits both targets."),
    },

    [SPECIES_URSALUNA_BLOODMOON] =
    {
        .move = MOVE_BLOOD_MOON,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_GHOST,
            },
        },
        .unlockedLevel = 55,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes super effective against Ghost-types."),
    },

    [SPECIES_GIRAFARIG] =
    {
        .move = MOVE_TWIN_BEAM,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 45,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPATK,
                .chance       = 25,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 45BP move that hits twice having a chance to boost the user Sp.Atk."),
    },

    [SPECIES_FARIGIRAF] =
    {
        .move = MOVE_TWIN_BEAM,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 50,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPATK,
                .chance       = 20,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 50BP move that hits twice having a chance to boost the user Sp.Atk."),
    },

    [SPECIES_HERACROSS] =
    {
        .move = MOVE_MEGAHORN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 25,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95BP move with 100% accuracy that may boost the user Attack."),
    },

    [SPECIES_HERACROSS_MEGA] =
    {
        .move = MOVE_MEGAHORN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 30,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 100BP move with 100% accuracy that may boost the user Attack."),
    },

    [SPECIES_SNUBBULL] =
    {
        .move = MOVE_BITE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FAIRY,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
                .chance       = 15,
            },
        },
        .unlockedLevel = 20,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 70BP Fairy-type move that can infatuate the target"),
    },

    [SPECIES_GRANBULL] =
    {
        .move = MOVE_JAW_LOCK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FAIRY,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
                .chance       = 20,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90BP Fairy-type move that can infatuate the target"),
    },

    [SPECIES_DUNSPARCE] =
    {
        .move = MOVE_U_TURN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_TAUNT,
                .chance       = 20,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a priority 80BP move that can taunt the target"),
    },

    [SPECIES_DUDUNSPARCE] =
    {
        .move = MOVE_U_TURN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_TAUNT,
                .chance       = 20,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a priority 90BP move that can taunt the target"),
    },

    [SPECIES_DUDUNSPARCE_THREE_SEGMENT] =
    {
        .move = MOVE_U_TURN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_TAUNT,
                .chance       = 20,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a priority 90BP move that can taunt the target"),
    },

    [SPECIES_XATU] =
    {
        .move = MOVE_FUTURE_SIGHT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_PSYCHIC,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a priority move that sets up psychic terrain"),
    },

    [SPECIES_SKARMORY] =
    {
        .move = MOVE_STEEL_WING,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_DAMAGE_STAT,
                .variable     = STAT_DEF,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 95,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Now uses the Defense Stat to calculate the damage and has a 95% accuracy."),
    },

    [SPECIES_SKARMORY_MEGA] =
    {
        .move = MOVE_STEEL_WING,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_DEF,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SPEED,
                .variable     = 200,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Now has a 100% accuracy, is twice as fast and boost the user defense."),
    },

    [SPECIES_CHINCHOU] =
    {
        .move = MOVE_WATER_PULSE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
                .argument     = TYPE_WATER,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_ELECTRIC,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 70BP Water/Electric move that gives the target the Water-type"),
    },

    [SPECIES_LANTURN] =
    {
        .move = MOVE_WATER_PULSE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
                .argument     = TYPE_WATER,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_ELECTRIC,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80BP Water/Electric type move that gives the target the Water-type"),
    },

    [SPECIES_SPINARAK] =
    {
        .move = MOVE_TOXIC_THREAD,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_OPPONET_SET_STICKY_WEB,
            },
        },
        .unlockedLevel = 15,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Now also sets up Sticky Web"),
    },

    [SPECIES_ARIADOS] =
    {
        .move = MOVE_TOXIC_THREAD,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_OPPONET_SET_STICKY_WEB,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Now also sets up Sticky Web"),
    },

    [SPECIES_SCIZOR] =
    {
        .move = MOVE_METAL_CLAW,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90BP move that now has a 20% chance of increasing the user attack stat and ignores the target defense stat changes."),
    },

    [SPECIES_SCIZOR_MEGA] =
    {
        .move = MOVE_METAL_CLAW,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 100BP move that now has a 20% chance of increasing the user attack stat and ignores the target defense stat changes."),
    },

    [SPECIES_STEELIX] =
    {
        .move = MOVE_IRON_TAIL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_SANDSTORM,
                .chance       = 25,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Has a 95% accuracy and can set up sandstorm."),
    },

    [SPECIES_STEELIX_MEGA] =
    {
        .move = MOVE_IRON_TAIL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_SANDSTORM,
                .chance       = 35,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Has a 100% accuracy and can set up sandstorm."),
    },

    [SPECIES_OCTILLERY] =
    {
        .move = MOVE_OCTAZOOKA,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_TAUNT,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80BP move that taunts the target"),
    },

    [SPECIES_QWILFISH] =
    {
        .move = MOVE_PIN_MISSILE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_OPPONET_SET_TOXIC_SPIKES,
                .chance       = 10, //Chance per hit
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_POISON,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MULTI_HIT_MIN_TIMES,
                .variable     = 4,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It now has a 10% chance of setting a layer of toxic spikes per hit, becomes a Poison type move and hits a minimum of 4 times."),
    },

    [SPECIES_QWILFISH_HISUI] =
    {
        .move = MOVE_PIN_MISSILE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_OPPONET_SET_TOXIC_SPIKES,
                .chance       = 10, //Chance per hit
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_DARK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MULTI_HIT_MIN_TIMES,
                .variable     = 3,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It now has a 10% chance of setting a layer of toxic spikes per hit, becomes a Dark-type move and hits a minimum of 3 times."),
    },

    [SPECIES_OVERQWIL] =
    {
        .move = MOVE_PIN_MISSILE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_OPPONET_SET_TOXIC_SPIKES,
                .chance       = 15, //Chance per hit
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_DARK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MULTI_HIT_MIN_TIMES,
                .variable     = 4,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It now has a 10% chance of setting a layer of toxic spikes per hit, becomes a Dark-type move and hits a minimum of 4 times."),
    },

    [SPECIES_DELIBIRD] =
    {
        .move = MOVE_PRESENT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ICE,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_HAIL,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_DRAIN,
                .argument     = 25, //25% of its max HP
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It now sets Hail when used and becomes an Ice-Type move, it uses the highest attacking stat for damage calculation, absorbs some of the damage done as HP."),
    },

    [SPECIES_IRON_BUNDLE] =
    {
        .move = MOVE_PRESENT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ICE,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_ELECTRIC,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It can set Electric Terrain when used and becomes an Ice-Type move, it uses the highest attacking stat for damage calculation."),
    },

    [SPECIES_BELLOSSOM] =
    {
        .move = MOVE_PETAL_DANCE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_GRASS,
                .chance       = 50,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95BP move that does not lock the user, it has a 30% chance of raising the user speed and can set up grassy terrain."),
    },

    [SPECIES_CROBAT] =
    {
        .move = MOVE_CROSS_POISON,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 85,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_STEEL,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TARGET_STAT_DOWN,
                .variable     = STAT_DEF,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_SET_HEAL_BLOCK,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It becomes a 85BP move that hits SE against Steel-types, has a chance of lowering the defense and blocks healing for 5 turns."),
    },

    [SPECIES_CROBAT_MEGA] =
    {
        .move = MOVE_CROSS_POISON,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 85,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_STEEL,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TARGET_STAT_DOWN,
                .variable     = STAT_DEF,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_SET_HEAL_BLOCK,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It becomes a 85BP move that hits SE against Steel-types, has a chance of lowering the defense and blocks healing for 5 turns."),
    },

    // Hoenn ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_SCEPTILE] =
    {
        .move = MOVE_LEAF_BLADE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_GRASS,
                .chance       = 25,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It now uses the highest attacking stat to calculate it's damage and can set up grassy terrain, ignores the target defense stat changes."),
    },

    [SPECIES_SCEPTILE_MEGA] =
    {
        .move = MOVE_LEAF_BLADE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_GRASS,
                .chance       = 35,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It now uses the highest attacking stat to calculate it's damage and has a 35% chance to set up grassy terrain, ignores the target defense stat changes."),
    },

    [SPECIES_BLAZIKEN] =
    {
        .move = MOVE_BLAZE_KICK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_SUN,
                .chance       = 25,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Its becomes a  Fire and Fighting move with a power of 95 that has a 25% chance of setting up Sunny Day."),
    },

    [SPECIES_BLAZIKEN_MEGA] =
    {
        .move = MOVE_BLAZE_KICK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_SUN,
                .chance       = 35,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_GROUND,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Its becomes a Fire and Fighting move with a power of 95 that has a 35% chance of setting up Sunny Day."),
    },

    [SPECIES_SWAMPERT] =
    {
        .move = MOVE_MUDDY_WATER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_RAIN,
                .chance       = 25,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_GROUND,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Physical Water and Ground move that has a 25% chance of setting up Rain."),
    },

    [SPECIES_SWAMPERT_MEGA] =
    {
        .move = MOVE_MUDDY_WATER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_RAIN,
                .chance       = 35,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_GROUND,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Physical Water and Ground move that can set up Rain."),
    },

    [SPECIES_MIGHTYENA] =
    {
        .move = MOVE_BITE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TARGET_STAT_DOWN,
                .variable     = STAT_SPEED,
                .chance       = 30,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It Becomes a move with a power of 80 that has a 30% chance of lowering the target's speed."),
    },

    [SPECIES_LINOONE] =
    {
        .move = MOVE_EXTREME_SPEED,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CURE,
                .argument     = 20, //25% of its max HP
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It now raises the Speed stat of the user after using it and cures some of its HP."),
    },

    [SPECIES_BEAUTIFLY] =
    {
        .move = MOVE_SILVER_WIND,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 20,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80BP move that has a 20% chance of raising all of the user stats."),
    },

    [SPECIES_DUSTOX] =
    {
        .move = MOVE_OMINOUS_WIND,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_POISON,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 20,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80BP Poison-type move that has a 20% chance of raising all of the user stats."),
    },

    [SPECIES_SWELLOW] =
    {
        .move = MOVE_AERIAL_ACE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable     = EFFECT_FACADE,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 70 BP move that doubles its power if the user is poisoned, burned, or paralyzed."),
    },

    [SPECIES_EXPLOUD] =
    {
        .move = MOVE_ROAR,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 60,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT_SWITCH_TARGET,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPATK,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_SPECIAL,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 60 BP move that knocks away the target and drags out another Pokémon in its party, also boosts SP.Atk."),
    },

    [SPECIES_LUDICOLO] =
    {
        .move = MOVE_RAIN_DANCE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_RAIN,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 75,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_SPECIAL,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_CHANGE_TARGET,
                .variable     = MOVE_TARGET_BOTH,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It becomes a 75BP special move that always sets up rain and hits both targets."),
    },

    [SPECIES_SHIFTRY] =
    {
        .move = MOVE_LEAF_TORNADO,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 0,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_PHYSICAL,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_FLYING,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SELF_SET_TAILWIND,
                .chance       = 20,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It Becomes a Grass and Flying type Physical move with a power of 80 with a 20% chance of setting up Tailwind."),
    },

    [SPECIES_TRAPINCH] =
    {
        .move = MOVE_BITE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GROUND,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 30,
            },
        },
        .unlockedLevel = 20,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Ground-type move that ignores target stat changes, has a higher flinch chance."),
    },

    [SPECIES_FLYGON] =
    {
        .move = MOVE_DUAL_WINGBEAT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 45,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GROUND,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_SANDSTORM,
                .chance       = 25,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_FLYING,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 45BP Ground and Flying move that can set up a Sandstorm."),
    },

    [SPECIES_FLYGON_MEGA] =
    {
        .move = MOVE_DUAL_WINGBEAT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 50,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GROUND,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_SANDSTORM,
                .chance       = 25,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_FLYING,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SELF_SET_TAILWIND,
                .chance       = 20,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 50BP Ground and Flying move that can set up a Sandstorm or Tailwind."),
    },

    [SPECIES_SLAKOTH] =
    {
        .move = MOVE_SLACK_OFF,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_OTHER,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It lets you use another move after using it and now has a higher priority."),
    },

    [SPECIES_VIGOROTH] =
    {
        .move = MOVE_SLASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_NEUTRAL_AGAINST_TYPE,
                .variable     = TYPE_GHOST,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CURE,
                .argument     = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 20, //Effect per hit
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Can hit Ghost-types, has a chance of boosting the user attack and cures some of the user hp upon use."),
    },

    [SPECIES_SLAKING] =
    {
        .move = MOVE_SLACK_OFF,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_OTHER,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
        },
        .unlockedLevel = 45,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It lets you use another move after using it and now has a higher priority."),
    },

    [SPECIES_CHIMECHO] =
    {
        .move = MOVE_HYPER_VOICE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_PSYCHIC,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_HEAL_STATUS,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 30,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Psychic-type move that heals the user status and can flinch the target."),
    },

    [SPECIES_CHIMECHO_MEGA] =
    {
        .move = MOVE_HYPER_VOICE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_STEEL,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_HEAL_STATUS,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CURE,
                .argument     = 25, //10% of its max HP
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes an Steel-type move that heals the user status and can flinch the target, restores 25% of its max HP upon use."),
    },

    [SPECIES_ABSOL] =
    {
        .move = MOVE_NIGHT_SLASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 85,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_DRAIN,
                .argument     = 50, //10% of its max HP
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90BP move that heals some of the damage done as HP."),
    },

    [SPECIES_ABSOL_MEGA] =
    {
        .move = MOVE_NIGHT_SLASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_DRAIN,
                .argument     = 50, //10% of its max HP
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95BP move that heals some of the damage done as HP, can now flinch the target and ignores its defense stat changes."),
    },

    [SPECIES_ABSOL_MEGA_Z] =
    {
        .move = MOVE_NIGHT_SLASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_DRAIN,
                .argument     = 50, //10% of its max HP
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GHOST,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95BP Ghost-type move that heals some of the damage done as HP, can now flinch the target and ignores its defense stat changes."),
    },

    [SPECIES_MAWILE] =
    {
        .move = MOVE_HYPER_FANG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT_PREVENT_ESCAPE,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FAIRY,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_STAT_STAGES_IGNORED,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80 BP Fairy-type move that prevents the target from switching and ignores the target stat changes."),
    },

    [SPECIES_MAWILE_MEGA] =
    {
        .move = MOVE_HYPER_FANG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 50,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_DOUBLE_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FAIRY,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_STAT_STAGES_IGNORED,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 15, //Effect per hit
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 50 BP Fairy-type move hits twice and ignores the target stat changes, may boost attack."),
    },

    [SPECIES_NINJASK] =
    {
        .move = MOVE_FURY_CUTTER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] =
            {
                .modification = SIGNATURE_MOD_DAMAGE_STAT,
                .variable     = STAT_SPEED,
            },
            [SIGNATURE_MOVE_EFFECT_3] =
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable     = EFFECT_HIT,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It becomes an Speed version of Body Press."),
    },

    [SPECIES_SHEDINJA] =
    {
        .move = MOVE_LEECH_LIFE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CURSE,
                .chance       = 25,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 25,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90BP move that may curse the target or boost the user Attack stat."),
    },

    [SPECIES_HARIYAMA] =
    {
        .move = MOVE_ARM_THRUST,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
                .chance       = 10, //Effect per hit
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_GHOST,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MULTI_HIT_MIN_TIMES,
                .variable     = 4,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It gets a 10% Paralysis chance for each hit and hits Ghost-types for x2 damage, hits a minimum 4 times."),
    },

    [SPECIES_ZANGOOSE] =
    {
        .move = MOVE_CRUSH_CLAW,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_POISON,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It becomes Super-Effective against Poison-types and ignores the target's defense stat changes."),
    },

    [SPECIES_SEVIPER] =
    {
        .move = MOVE_POISON_TAIL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 75,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_NORMAL,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It becomes Super-Effective against Normal-types"),
    },

    [SPECIES_SPINDA] =
    {
        .move = MOVE_DIZZY_PUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It becomes a 80 BP Priority move when used by Spinda"),
    },

    [SPECIES_LUVDISC] =
    {
        .move = MOVE_DRAINING_KISS,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SPEED,
                .variable     = 200,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
                .chance       = 30,
            },
        },
        .unlockedLevel = 20,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It becomes a 90 bp move and doubles your speed while using it, has a chance of infatuating the target."),
    },

    [SPECIES_KECLEON] =
    {
        .move = MOVE_LICK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 75,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_NORMAL,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SPEED,
                .variable     = 200,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 75BP Normal-type move that is twice as fast and can flinch the target."),
    },

    [SPECIES_RELICANTH] =
    {
        .move = MOVE_HEADBUTT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 60,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ROCK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 20,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Rock-type move with a power of 60 and a priority of +1, now it has a 20% flinch chance"),
    },

    [SPECIES_GLALIE] =
    {
        .move = MOVE_ICE_FANG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 30,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80BP move that has a 30% chance of freezing the target."),
    },

    [SPECIES_GLALIE_MEGA] =
    {
        .move = MOVE_ICE_FANG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 75,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 40,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 75BP move that has a 40% chance of freezing the target."),
    },

    [SPECIES_ANORITH] =
    {
        .move = MOVE_FURY_CUTTER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 75,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_IN_CONDITIONS,
                .chance       = SIGNATURE_CONDITION_WEATHER_RAIN,
            },
            [SIGNATURE_MOVE_EFFECT_3] =
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
                .chance       = 15,
            },
            [SIGNATURE_MOVE_EFFECT_4] =
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable     = EFFECT_HIT,
            },
        },
        .unlockedLevel = 20,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 75 BP move that has priority in the rain and can raise the user speed."),
    },

    [SPECIES_ARMALDO] =
    {
        .move = MOVE_FURY_CUTTER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ROCK,
            },
            [SIGNATURE_MOVE_EFFECT_3] =
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_4] =
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable     = EFFECT_HIT,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90 BP Rock-type move that has a 30% chance of raising the user's Speed."),
    },

    [SPECIES_LILEEP] =
    {
        .move = MOVE_MEGA_DRAIN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ROCK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
            },
        },
        .unlockedLevel = 20,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80BP Rock-type move that always inflicts Leech Seed."),
    },

    [SPECIES_CRADILY] =
    {
        .move = MOVE_MEGA_DRAIN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ROCK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80BP Rock-type move that always inflicts Leech Seed."),
    },

    [SPECIES_DUSCLOPS] =
    {
        .move = MOVE_SHADOW_PUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_NEUTRAL_AGAINST_TYPE,
                .variable     = TYPE_NORMAL,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CURSE,
                .chance       = 20,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Deals neutral damage to Normal-types and may curse the target."),
    },

    [SPECIES_DUSKNOIR] =
    {
        .move = MOVE_SHADOW_PUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_NORMAL,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CURSE,
                .chance       = 30,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Deals Super Effective damage to Normal-types and may curse the target."),
    },

    [SPECIES_CASTFORM] =
    {
        .move = MOVE_WEATHER_BALL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPATK,
                .chance       = 25,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes an 100BP move that can boost the user special attack."),
    },

    [SPECIES_CASTFORM_SUNNY] =
    {
        .move = MOVE_WEATHER_BALL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 25,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Fire-type move that has a 25% chance of Burning its target."),
    },

    [SPECIES_CASTFORM_SNOWY] =
    {
        .move = MOVE_WEATHER_BALL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FROSTBITE,
                .chance       = 25,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes an Ice-type move that has a 25% chance of Frostbiting its target."),
    },

    [SPECIES_CASTFORM_RAINY] =
    {
        .move = MOVE_WEATHER_BALL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TARGET_STAT_DOWN,
                .variable     = STAT_SPEED,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Water-type move that slows down its target."),
    },

    [SPECIES_REGICE] =
    {
        .move = MOVE_ANCIENT_POWER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 30,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ICE,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes an Ice-type move that has a 30% chance of raising all of the user stats."),
    },

    [SPECIES_REGIROCK] =
    {
        .move = MOVE_ANCIENT_POWER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 30,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_PHYSICAL,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Rock-type move that has a 30% chance of raising all of the user stats."),
    },

    [SPECIES_REGISTEEL] =
    {
        .move = MOVE_ANCIENT_POWER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 30,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_PHYSICAL,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_STEEL,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Steel-type move that has a 30% chance of raising all of the user stats."),
    },

    // Sinnoh ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_TORTERRA] =
    {
        .move = MOVE_EARTHQUAKE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_DRAIN,
                .argument     = 50, //10% of its max HP
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_HIT_AIRBONE_TARGETS,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_NEUTRAL_AGAINST_TYPE,
                .variable     = TYPE_FLYING,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Absorbs some of the damage done as HP, can now hit flying-types and airbone targets."),
    },

    [SPECIES_INFERNAPE] =
    {
        .move = MOVE_MACH_PUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 50,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FIRE,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 25,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 50BP Fire-type move that has a 25% chance of burning the target, uses the highest attacking stat."),
    },

    [SPECIES_EMPOLEON] =
    {
        .move = MOVE_METAL_CLAW,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_WATER,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 0,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPATK,
                .chance       = 20,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Steel and Water-type move that uses the user's highest attacking stat and raises Sp.Atk rather than Attack."),
    },

    [SPECIES_BIDOOF] =
    {
        .move = MOVE_HYPER_FANG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_GRASS,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 15,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes Super Effective against Grass-types and ignores the target defense changes."),
    },

    [SPECIES_BIBAREL] =
    {
        .move = MOVE_HYPER_FANG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_GRASS,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes Super Effective against Grass-types and ignores the target defense changes."),
    },

    [SPECIES_STARAPTOR] =
    {
        .move = MOVE_DOUBLE_EDGE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_RECKOIL,
                .argument     = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 15,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_NEUTRAL_AGAINST_TYPE,
                .variable     = TYPE_NORMAL,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Does less damage to itself, can now flinch the target and can hit Ghost-types."),
    },

    [SPECIES_STARAPTOR_MEGA] =
    {
        .move = MOVE_DOUBLE_EDGE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_RECKOIL,
                .argument     = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 15,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_NEUTRAL_AGAINST_TYPE,
                .variable     = TYPE_NORMAL,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ROCK,
            },
            
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Fighting-type move that does less damage to itself, can now flinch the target and can hit Ghost-types."),
    },

    [SPECIES_CHATOT] =
    {
        .move = MOVE_CHATTER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SELF_SET_TAILWIND,
                .chance       = 20,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80BP move that has a 20% chance of setting up Tailwind."),
    },

    [SPECIES_CRANIDOS] =
    {
        .move = MOVE_HEADBUTT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 50,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ROCK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 20,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Rock-type move with a power of 50 and a priority of +1, now it has a 20% flinch chance"),
    },

    [SPECIES_RAMPARDOS] =
    {
        .move = MOVE_HEADBUTT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 60,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ROCK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 10,
            },
        },
        .unlockedLevel = 45,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Rock-type move with a power of 60 and a priority of +1, now it has a 10% flinch chance"),
    },

    [SPECIES_BASTIODON] =
    {
        .move = MOVE_IRON_HEAD,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_DAMAGE_STAT,
                .variable     = STAT_DEF,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 20,
            },
        },
        .unlockedLevel = 45,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95BP move that uses the Defense Stat to calculate the damage and can flinch."),
    },

    [SPECIES_CARNIVINE] =
    {
        .move = MOVE_JAW_LOCK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GRASS,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_BUG,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_FLYING,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Grass-type move that is Super- Effective against Bug and Flying types."),
    },

    [SPECIES_STUNKY] =
    {
        .move = MOVE_GUNK_SHOT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_STEEL,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = 20,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95 accuracy move that hits Steel-types Super-Effectively using the user's highest attack stat."),
    },

    [SPECIES_SKUNTANK] =
    {
        .move = MOVE_GUNK_SHOT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_STEEL,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 100 accuracy move that hits Steel-types Super-Effectively using the user's highest attack stat,"),
    },

    [SPECIES_PACHIRISU] =
    {
        .move = MOVE_HYPER_FANG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ELECTRIC,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SPEED,
                .variable     = 150,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes an 80 BP Electric-type move that can paralyze the target and is 50% faster than other moves."),
    },

    [SPECIES_CROAGUNK] =
    {
        .move = MOVE_SUCKER_PUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_POISON,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_POISON,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Poison-type move with a 30% chance of poisoning the target."),
    },

    [SPECIES_TOXICROAK] =
    {
        .move = MOVE_SUCKER_PUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_TAUNT,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_POISON,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Poison-type move with a 30% chance of taunting the target."),
    },

    [SPECIES_HONCHKROW] =
    {
        .move = MOVE_BEAT_UP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 25,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_MULTI_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TARGET_STAT_DOWN,
                .variable     = STAT_DEF,
                .chance       = 5,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 25 BP move that can lower the target's defense stat."),
    },

    [SPECIES_PROBOPASS] =
    {
        .move = MOVE_MAGNET_BOMB,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_STEEL,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_STEEL,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
                .chance       = 20,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90 BP Steel-type move that can paralyze the target and is super effective against Steel-types."),
    },

    [SPECIES_ABOMASNOW] =
    {
        .move = MOVE_BLIZZARD,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_DEF,
                .chance       = 20,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It now uses the highest attacking stat to calculate it's damage always has a 90% accuracy and can raise the user defense."),
    },

    [SPECIES_ABOMASNOW_MEGA] =
    {
        .move = MOVE_BLIZZARD,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_DEF,
                .chance       = 30,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "It now uses the highest attacking stat to calculate it's damage always has a 95% accuracy and can raise the user defense."),
    },

    [SPECIES_RIOLU] =
    {
        .move = MOVE_VACUUM_WAVE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 60,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPATK,
                .chance       = 25,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = 15,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 60BP move that can raise the user's Special Attack by 1 stage with a 10% chance, uses the highest attack stat."),
    },

    [SPECIES_LUCARIO] =
    {
        .move = MOVE_AURA_SPHERE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPATK,
                .chance       = 10,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95BP move that can raise the user's Special Attack by 1 stage with a 10% chance, uses the highest attack."),
    },

    [SPECIES_LUCARIO_MEGA] =
    {
        .move = MOVE_AURA_SPHERE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 105,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_PHYSICAL,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a physical 105BP move that can raise the user's Attack by 1 stage with a 10% chance."),
    },

    [SPECIES_LUCARIO_MEGA_Z] =
    {
        .move = MOVE_AURA_SPHERE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 105,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPATK,
                .chance       = 20,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 105BP move that raises the user's Special Attack by 1 stage with a 10% chance."),
    },

    [SPECIES_LOPUNNY] =
    {
        .move = MOVE_RETURN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 110,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
                .chance       = 30,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 110BP move with a 30% chance of infatuating the target."),
    },

    [SPECIES_LOPUNNY_MEGA] =
    {
        .move = MOVE_RETURN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 110,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
                .chance       = 35,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FIGHTING,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 110BP Fighting-type move with a 35% chance of infatuating the target."),
    },

    [SPECIES_FROSLASS] =
    {
        .move = MOVE_HEX,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 110,
                .argument     = SIGNATURE_MOVE_POWER_IN_CONDITIONS,
                .chance       = SIGNATURE_CONDITION_TARGET_HAS_STATUS,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FROSTBITE,
                .chance       = 25,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80BP move with a 30% chance of frostbiting the target, does extra damage to targets with an status problems."),
    },

    [SPECIES_FROSLASS_MEGA] =
    {
        .move = MOVE_HEX,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 115,
                .argument     = SIGNATURE_MOVE_POWER_IN_CONDITIONS,
                .chance       = SIGNATURE_CONDITION_TARGET_HAS_STATUS,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FROSTBITE,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90BP move with a 30% chance of frostbiting the target, does extra damage to targets with an status problems."),
    },

    [SPECIES_SPIRITOMB] =
    {
        .move = MOVE_HEX,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 110,
                .argument     = SIGNATURE_MOVE_POWER_IN_CONDITIONS,
                .chance       = SIGNATURE_CONDITION_TARGET_HAS_STATUS,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80BP move with a 20% chance of burning the target, does extra damage to targets with an status problems."),
    },

    [SPECIES_GIBLE] =
    {
        .move = MOVE_BITE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GROUND,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 20,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Ground-type move that ignores target stat changes."),
    },

    [SPECIES_GABITE] =
    {
        .move = MOVE_CRUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GROUND,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Ground-type move that ignores target stat changes."),
    },

    [SPECIES_GARCHOMP] =
    {
        .move = MOVE_DIG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 55,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SPEED,
                .variable     = 200,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_DMG_UNDERGROUND,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 55BP faster move that charges in one turn and hits underground targets."),
    },

    [SPECIES_GARCHOMP_MEGA] =
    {
        .move = MOVE_DIG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 60,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_DMG_UNDERGROUND,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 60BP priority move that charges in one turn and hits underground targets."),
    },

    [SPECIES_DARKRAI] =
    {
        
        .move = MOVE_DARK_VOID,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 75,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_ABSORB,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_SLEEP,
                .chance       = 15,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_6] = 
            {
                .modification = SIGNATURE_MOD_CHANGE_TARGET,
                .variable     = MOVE_TARGET_SELECTED,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 75 BP move that has an small chance of sleeping the target and heals the user for half the damage dealt."),
    },

    [SPECIES_DARKRAI_MEGA] =
    {
        
        .move = MOVE_DARK_VOID,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_ABSORB,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_SLEEP,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_6] = 
            {
                .modification = SIGNATURE_MOD_CHANGE_TARGET,
                .variable     = MOVE_TARGET_SELECTED,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80 BP move that has an small chance of sleeping the target and heals the user for half the damage dealt."),
    },

    // Unova ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_SERPERIOR] =
    {
        .move = MOVE_WRAP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable     = EFFECT_HIT_PREVENT_ESCAPE,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GRASS,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_SPECIAL,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 70 BP Grass-type move that prevents the target from switching out and leeches the target uses the special attack to calculate damage."),
    },

    [SPECIES_SERPERIOR_MEGA] =
    {
        .move = MOVE_WRAP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable     = EFFECT_HIT_PREVENT_ESCAPE,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GRASS,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_STEAL_POSITIVE_STAT_CHANGES,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_SPECIAL,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90 BP Grass-type move that prevents the target from switching out, steals its positive stat changes and becomes special."),
    },

    [SPECIES_EMBOAR] =
    {
        .move = MOVE_HEAT_CRASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 130,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_RECOIL_IF_MISS,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_6] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_RECKLESS_BOOST,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 130 BP move with 90% accuracy, If this move misses the user takes damage instead, has a 20% chance of burning the target."),
    },

    [SPECIES_EMBOAR_MEGA] =
    {
        .move = MOVE_HEAT_CRASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 130,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_RECOIL_IF_MISS,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_6] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_RECKLESS_BOOST,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 130 BP move with 95% accuracy, If this move misses the user takes damage instead, has a 20% chance of burning the target."),
    },

    [SPECIES_SAMUROTT] =
    {
        .move = MOVE_RAZOR_SHELL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_OPPONET_SET_SPIKES,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90 BP move that sets up Spikes when used, ignores the target defense changes."),
    },

    [SPECIES_SAMUROTT_MEGA] =
    {
        .move = MOVE_RAZOR_SHELL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_ABSORB,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_OPPONET_SET_SPIKES,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95 BP move that restores the user's HP by half of the damage dealt and sets up spikes."),
    },

    [SPECIES_SAMUROTT_HISUI] =
    {
        .move = MOVE_NIGHT_SLASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_OPPONET_SET_SPIKES,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90 BP move that sets up Spikes when used, ignores the target defense changes."),
    },

    [SPECIES_SAMUROTT_HISUI_MEGA] =
    {
        .move = MOVE_NIGHT_SLASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_ABSORB,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_OPPONET_SET_SPIKES,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95 BP move that restores the user's HP by half of the damage dealt and sets up spikes."),
    },

    [SPECIES_EXCADRILL] =
    {
        .move = MOVE_CRUSH_CLAW,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GROUND,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_HIGH_CRIT,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Ground-type move that has a higher chance of critical hits and ignores the target Defense stat changes."),
    },

    [SPECIES_EXCADRILL_MEGA] =
    {
        .move = MOVE_CRUSH_CLAW,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GROUND,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_HIGH_CRIT,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Ground-type move that has a higher chance of critical hits and always lower the target defense."),
    },

    [SPECIES_TOUCANNON] =
    {
        .move = MOVE_FURY_ATTACK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 20,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 10,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 10,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FLYING,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 20 BP Flying-type move that can burn the target or boost the user attack stat."),
    },

    [SPECIES_SCRAFTY] =
    {
        .move = MOVE_LOW_KICK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_TAUNT,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_DARK,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Dark-type move that taunts the target."),
    },

    [SPECIES_SCRAFTY_MEGA] =
    {
        .move = MOVE_LOW_KICK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_TAUNT,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_DARK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_DRAIN,
                .argument     = 20, //10% of its max HP
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Dark-type move that taunts the target, cures some of the target hp upon use."),
    },

    [SPECIES_EELEKTROSS] =
    {
        .move = MOVE_CRUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ELECTRIC,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
                .chance       = 20,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90BP Electric-type move that can paralyze the target."),
    },

    [SPECIES_EELEKTROSS_MEGA] =
    {
        .move = MOVE_CRUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ELECTRIC,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 120,
                .argument     = SIGNATURE_MOVE_POWER_IN_CONDITIONS,
                .chance       = SIGNATURE_CONDITION_TARGET_HAS_STATUS,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95BP Electric-type move that can paralyze the target, does extra damage to targets with an status condition."),
    },

    [SPECIES_CHANDELURE] =
    {
        .move = MOVE_WILL_O_WISP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 25,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_SET_HEAL_BLOCK,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_SPECIAL,
            },
            [SIGNATURE_MOVE_EFFECT_6] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GHOST,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes an special 80 BP Ghost-type move that can burn the target, blocks the target from curing itself."),
    },

    [SPECIES_CHANDELURE_MEGA] =
    {
        .move = MOVE_WILL_O_WISP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_ABSORB,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 35,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_SET_HEAL_BLOCK,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_SPECIAL,
            },
            [SIGNATURE_MOVE_EFFECT_6] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GHOST,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes an special 90 BP Ghost-type move that can burn the target, blocks the target from curing itself and cures some of its own hp upon use."),
    },

    [SPECIES_SAWK] =
    {
        .move = MOVE_ROCK_SMASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_OPPONET_SET_STEALTH_ROCK,
                .chance       = 50,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 50,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a move with a 50% chance of setting up Stealth Rock and raises the user's Attack by 1 stage with a 50% chance."),
    },

    [SPECIES_VENIPEDE] =
    {
        .move = MOVE_ROLLOUT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_BUG,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_DEF,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 10,
            },
        },
        .unlockedLevel = 20,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Bug-type move that raises the user defense and may flinch the target"),
    },

    [SPECIES_WHIRLIPEDE] =
    {
        .move = MOVE_ROLLOUT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_POISON,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_POISON,
                .chance       = 10,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Poison-type move that raises the user speed and may poison the target"),
    },

    [SPECIES_SCOLIPEDE] =
    {
        .move = MOVE_ROLLOUT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_BUG,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 10,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Bug-type move that raises the user attack and may flinch the target"),
    },

    [SPECIES_SCOLIPEDE_MEGA] =
    {
        .move = MOVE_ROLLOUT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_POISON,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_DEF,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
                .chance       = 20,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Poison-type move that raises the user defense and may paralyze the target"),
    },

    [SPECIES_JOLTIK] =
    {
        .move = MOVE_ELECTROWEB,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_OPPONET_SET_STICKY_WEB,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 70BP move that sets up Sticky Web."),
    },

    [SPECIES_GALVANTULA] =
    {
        .move = MOVE_ELECTROWEB,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 75,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_OPPONET_SET_STICKY_WEB,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 75BP move that sets up Sticky Web."),
    },

    [SPECIES_BOUFFALANT] =
    {
        .move = MOVE_HEAD_CHARGE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 140,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 140 BP move."),
    },

    [SPECIES_GOLURK] =
    {
        .move = MOVE_SHADOW_PUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_PRIORITY_IN_CONDITIONS,
                .variable     = SIGNATURE_CONDITION_TRICK_ROOM,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TARGET_STAT_DOWN,
                .variable     = STAT_DEF,
                .chance       = 25,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a move 90BP with a 25% chance of lowering the target's defense, becomes a priority move in Trick Room."),
    },

    [SPECIES_GOLURK_MEGA] =
    {
        .move = MOVE_SHADOW_PUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_PRIORITY_IN_CONDITIONS,
                .variable     = SIGNATURE_CONDITION_TRICK_ROOM,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TARGET_STAT_DOWN,
                .variable     = STAT_DEF,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_DRAIN,
                .argument     = 50, //10% of its max HP
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a move 95BP with a 30% chance of lowering the target's defense, becomes a priority move in Trick Room and drains some of the damage done."),
    },

    [SPECIES_VOLCARONA] =
    {
        .move = MOVE_FIERY_DANCE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 75,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90 BP move that has a higher chance to boost the user Sp.Atk and can burn the target."),
    },

    [SPECIES_SLITHER_WING] =
    {
        .move = MOVE_SUPERPOWER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_ATTACK_UP_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 75,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = FIELD_SET_WEATHER_SUN,
                .chance       = 20,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90 BP move that has a high chance to boost the user Atk and can set up the sun, no longer lowers stats."),
    },

    [SPECIES_ZWEILOUS] =
    {
        .move = MOVE_DRAGON_BREATH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 45,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_DOUBLE_HIT,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 45 BP move that hits the target 2 times."),
    },

    [SPECIES_HYDREIGON] =
    {
        .move = MOVE_DRAGON_PULSE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 30,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_TRIPLE_KICK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
                .chance       = 10,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 30 BP move that hits the target 3 times, can paralyze the target."),
    },

    // Kalos ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_CHESNAUGHT] =
    {
        .move = MOVE_HAMMER_ARM,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 110,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_GRASS,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
                .chance       = 30,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Power becomes 110 and becomes a Fighting and Grass-type move with a 30% chance of leeching the target."),
    },

    [SPECIES_CHESNAUGHT_MEGA] =
    {
        .move = MOVE_HAMMER_ARM,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 110,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_GRASS,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
                .chance       = 30,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Power becomes 110 and becomes a Fighting and Grass-type move with a 30% chance of leeching the target."),
    },

    [SPECIES_DELPHOX] =
    {
        .move = MOVE_MYSTICAL_FIRE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 85,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_PSYCHIC,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Power becomes 85 and becomes a Fire and Psychic-type move with a 30% chance of confusing the target."),
    },

    [SPECIES_DELPHOX_MEGA] =
    {
        .move = MOVE_MYSTICAL_FIRE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 85,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_PSYCHIC,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Power becomes 85 and becomes a Fire and Psychic-type move with a 30% chance of confusing the target."),
    },

    [SPECIES_GRENINJA] =
    {
        .move = MOVE_WATER_SHURIKEN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 20,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_DARK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MULTI_HIT_ALWAYS,
                .variable     = 3,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 20BP Water and Dark type move that always hits 3 times."),
    },

    [SPECIES_GRENINJA_MEGA] =
    {
        .move = MOVE_WATER_SHURIKEN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 22,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_DARK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MULTI_HIT_ALWAYS,
                .variable     = 4,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 25BP Water and Dark type move that always hits 4 times."),
    },

    [SPECIES_GRENINJA_ASH] =
    {
        .move = MOVE_WATER_SHURIKEN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 22,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_DARK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MULTI_HIT_ALWAYS,
                .variable     = 3,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 22BP Water and Dark type move that always hits 3 times."),
    },

    [SPECIES_DIGGERSBY] =
    {
        .move = MOVE_BODY_SLAM,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 65,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_GHOST,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 10,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 65 BP priority move that hits SE against Ghost-types, it has a lower chance of paralyzing the target."),
    },

    [SPECIES_TYRUNT] =
    {
        .move = MOVE_CRUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_DRAGON,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 20,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Dragon-type move that ignores the target's defense stat changes."),
    },

    [SPECIES_TYRANTRUM] =
    {
        .move = MOVE_CRUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_DRAGON,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Dragon-type move that ignores the target's defense stat changes."),
    },

    [SPECIES_TREVENANT] =
    {
        .move = MOVE_WOOD_HAMMER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
                .chance       = 30,
                .argument     = TYPE_GHOST,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_GHOST,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Grass/Ghost-type move with a 30% chance of giving the target the Ghost-type."),
    },

    [SPECIES_GOURGEIST] =
    {
        .move = MOVE_WILL_O_WISP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
                .argument     = TYPE_GHOST,
            },
            [SIGNATURE_MOVE_EFFECT_6] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_GHOST,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80 BP Fire/Ghost move that can burn the target and gives it the Ghost-type."),
    },

    [SPECIES_GOURGEIST_LARGE] =
    {
        .move = MOVE_WILL_O_WISP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
                .argument     = TYPE_GHOST,
            },
            [SIGNATURE_MOVE_EFFECT_6] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_GHOST,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80 BP Fire/Ghost move that can burn the target and gives it the Ghost-type."),
    },

    [SPECIES_GOURGEIST_SMALL] =
    {
        .move = MOVE_WILL_O_WISP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
                .argument     = TYPE_GHOST,
            },
            [SIGNATURE_MOVE_EFFECT_6] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_GHOST,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80 BP Fire/Ghost move that can burn the target and gives it the Ghost-type."),
    },

    [SPECIES_GOURGEIST_SUPER] =
    {
        .move = MOVE_WILL_O_WISP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
                .argument     = TYPE_GHOST,
            },
            [SIGNATURE_MOVE_EFFECT_6] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_GHOST,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80 BP Fire/Ghost move that can burn the target and gives it the Ghost-type."),
    },

    [SPECIES_MALAMAR] =
    {
        .move = MOVE_EXPANDING_FORCE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_SLEEP,
                .chance       = 20,  // Not a chance-based modification
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90 BP move that uses the user's highest attack stat and can put the target to sleep."),
    },

    [SPECIES_NOIBAT] =
    {
        .move = MOVE_SUPERSONIC,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FLYING,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 60,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_CONFUSE_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 20,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_SPECIAL,
            },
        },
        .unlockedLevel = 20,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 60 BP Flying-type move that can confuse the target."),
    },

    [SPECIES_NOIVERN] =
    {
        .move = MOVE_SUPERSONIC,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FLYING,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_CONFUSE_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 20,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_SPECIAL,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80 BP Flying-type move that can confuse the target."),
    },

    [SPECIES_HONEDGE] =
    {
        .move = MOVE_SLASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GHOST,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_ABSORB,
            },
        },
        .unlockedLevel = 20,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 85BP Ghost-type move that ignores the target's defense and steals half the damage inflicted."),
    },

    [SPECIES_DOUBLADE] =
    {
        .move = MOVE_SLASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GHOST,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 45,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_DOUBLE_HIT,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a Ghost-type 45 BP move that ignores the target's defense and hits twice."),
    },

    [SPECIES_AEGISLASH] =
    {
        .move = MOVE_SLASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GHOST,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
        },
        .unlockedLevel = 45,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90BP Ghost-type move that ignores the target's defense."),
    },

    [SPECIES_AEGISLASH_BLADE] =
    {
        .move = MOVE_SLASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_GHOST,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
        },
        .unlockedLevel = 45,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90BP Ghost-type move that ignores the target's defense."),
    },

    [SPECIES_FLORGES] =
    {
        .move = MOVE_MOONBLAST,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 100,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_MISTY,
                .chance       = 35,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 100BP move that can set up Misty Terrain and has a 35% chance of lowering the target's Special Attack by 1 stage."),
    },
    
    // Alola ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_DECIDUEYE] =
    {
        .move = MOVE_SPIRIT_SHACKLE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CURSE,
                .chance       = 10,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_HIGH_CRIT,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90BP move that can curse the target and has a high crit ratio."),
    },

    [SPECIES_DECIDUEYE_HISUI] =
    {
        .move = MOVE_LOW_SWEEP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TARGET_STAT_DOWN,
                .variable     = STAT_DEF,
                .chance       = 50,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_HIGH_CRIT,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90 BP move that can flinch the target and lower its defense stat also becomes high-crit."),
    },

    [SPECIES_INCINEROAR] =
    {
        .move = MOVE_DARKEST_LARIAT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_FIGHTING,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95BP move that can burn the target and its super-effective against Fighting-Types."),
    },

    [SPECIES_PRIMARINA] =
    {
        .move = MOVE_SPARKLING_ARIA,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 110,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_CHANGE_TARGET,
                .variable     = MOVE_TARGET_BOTH,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 110BP move that no longer heals burn from the target and does not hit allies."),
    },
    
    [SPECIES_PALOSSAND] =
    {
        .move = MOVE_SHORE_UP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_SANDSTORM,
                .chance       = 30,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a move that sets up Sandstorm with a 30% chance."),
    },

    [SPECIES_WIMPOD] =
    {
        .move = MOVE_AQUA_JET,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TARGET_STAT_DOWN,
                .variable     = STAT_DEF,
                .chance       = 25,
            },
        },
        .unlockedLevel = 20,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "May lower the target Defense and ignores it if higher."),
    },

    [SPECIES_GOLISOPOD] =
    {
        .move = MOVE_FIRST_IMPRESSION,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TARGET_STAT_DOWN,
                .variable     = STAT_DEF,
                .chance       = 50,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "May lower the target Defense and ignores it if higher."),
    },

    [SPECIES_ORICORIO] =
    {
        .move = MOVE_REVELATION_DANCE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_FLYING,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a move Fire/Flying move with a 20% chance of burning the target."),
    },

    [SPECIES_ORICORIO_POM_POM] =
    {
        .move = MOVE_REVELATION_DANCE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_FLYING,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a move Electric/Flying move 20% chance of paralyzing the target."),
    },

    [SPECIES_ORICORIO_PAU] =
    {
        .move = MOVE_REVELATION_DANCE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_FLYING,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a move Psychic/Flying move 20% chance of confusing the target."),
    },

    [SPECIES_ORICORIO_SENSU] =
    {
        .move = MOVE_REVELATION_DANCE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CURSE,
                .chance       = 15,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_FLYING,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a move Ghost/Flying move 20% chance of cursing the target."),
    },

    [SPECIES_COMFEY] =
    {
        .move = MOVE_DRAINING_KISS,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
                .chance       = 50,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPATK,
                .chance       = 10,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 70 BP that leeches the target and may boost the user Special Attack."),
    },

    [SPECIES_TOGEDEMARU] =
    {
        .move = MOVE_PIN_MISSILE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_SCALE_SHOT,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_STEEL,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 25,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 25BP Steel-type move that boosts the user's Speed but lowers its Defense."),
    },

    // Galar ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_RILLABOOM] =
    {
        .move = MOVE_DRUM_BEATING,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_SOUND,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_STAT_STAGES_IGNORED,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95BP sound move that ignores the target stat changes and can seed the target."),
    },

    [SPECIES_RILLABOOM_MEGA] =
    {
        .move = MOVE_DRUM_BEATING,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = {
                .modification = SIGNATURE_MOD_ADD_FLAG,
                .variable     = FLAG_SOUND,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_STAT_STAGES_IGNORED,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95BP sound move that ignores the target stat changes and can seed the target."),
    },

    [SPECIES_INTELEON] =
    {
        .move = MOVE_SNIPE_SHOT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 10,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95BP move that ignores the target defense and can flinch the target."),
    },

    [SPECIES_INTELEON_MEGA] =
    {
        .move = MOVE_SNIPE_SHOT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_STAT_STAGES_IGNORED,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 10,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95BP move that ignores the target defense and can flinch the target."),
    },

    [SPECIES_CINDERACE] =
    {
        .move = MOVE_PYRO_BALL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_FEINT,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 20,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a move that bypasses Protect with a 20% chance of burning the target."),
    },

    [SPECIES_CINDERACE_MEGA] =
    {
        .move = MOVE_PYRO_BALL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_FEINT,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 20,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a move that bypasses Protect with a 20% chance of burning the target."),
    },

    [SPECIES_CORVIKNIGHT] =
    {
        .move = MOVE_BRAVE_BIRD,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 10,
            },
        },
        .unlockedLevel = 30,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Doesn't take damage from recoil and may flinch the target."),
    },

    [SPECIES_CORVIKNIGHT_MEGA] =
    {
        .move = MOVE_BRAVE_BIRD,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
                .chance       = 15,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Doesn't take damage from recoil and may boost the user speed."),
    },

    [SPECIES_CHEWTLE] =
    {
        .move = MOVE_JAW_LOCK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_WATER,
            },
        },
        .unlockedLevel = 25,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90 BP Water-type move."),
    },

    [SPECIES_DREDNAW] =
    {
        .move = MOVE_JAW_LOCK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 90,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ROCK,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 90 BP Rock-type move."),
    },

    [SPECIES_DREDNAW_MEGA] =
    {
        .move = MOVE_JAW_LOCK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ROCK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95 BP Rock-type move that ignores the target defense."),
    },

    [SPECIES_HATTERENE] =
    {
        .move = MOVE_PSYCHO_CUT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 10,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_STEEL,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
        },
        .unlockedLevel = 45,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80 BP move that uses the highest attacking stat for damage calculation, it can also flinch and becomes SE against Steel-types."),
    },

    [SPECIES_HATTERENE_MEGA] =
    {
        .move = MOVE_PSYCHO_CUT,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_STEEL,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 85,
            },
        },
        .unlockedLevel = 45,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 85 BP move that uses the highest attacking stat for damage calculation, it can also flinch the target and becomes SE against Steel-types."),
    },

    [SPECIES_DRACOVISH] =
    {
        .move = MOVE_FISHIOUS_REND,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95BP move that ignores the target defense."),
    },

    [SPECIES_ARCTOVISH] =
    {
        .move = MOVE_FISHIOUS_REND,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
                .chance       = 20,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95 BP move that may boost the user speed."),
    },

    [SPECIES_DRACOZOLT] =
    {
        .move = MOVE_BOLT_BEAK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
                .chance       = 20,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95 BP move that may boost the user speed."),
    },

    [SPECIES_ARCTOZOLT] =
    {
        .move = MOVE_BOLT_BEAK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
                .chance       = 20,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 95 BP move that may boost the user speed."),
    },

    [SPECIES_KLEAVOR] =
    {
        .move = MOVE_HAMMER_ARM,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 75,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_OPPONET_SET_STEALTH_ROCK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_HIT,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ROCK,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 10,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 75 BP Rock-type move sets up Stealth Rock when used and no longer lowers the user speed, can flinch the target."),
    },

    //Paldea
    [SPECIES_MEOWSCARADA] =
    {
        .move = MOVE_FLOWER_TRICK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 75,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
                .chance       = 30,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 75 BP move that may seed the target."),
    },

    [SPECIES_QUAQUAVAL] =
    {
        .move = MOVE_AQUA_STEP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 15,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80 BP move that may flinch the target."),
    },

    [SPECIES_SKELEDIRGE] =
    {
        .move = MOVE_TORCH_SONG,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 20,
            },
        },
        .unlockedLevel = 50,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80 BP move that may burn the target."),
    },

    [SPECIES_TINKATON] =
    {
        .move = MOVE_GIGATON_HAMMER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_STEEL,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 15,
            },
            [SIGNATURE_MOVE_EFFECT_3] = {
                .modification = SIGNATURE_MOD_REMOVE_FLAG,
                .variable     = FLAG_MAKES_CONTACT,
            }
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes super effective against Steel-types and can flinch the target, no longer makes contact."),
    },

    [SPECIES_CERULEDGE] =
    {
        .move = MOVE_BITTER_BLADE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_WATER,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 20,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes super effective against Water types and can burn the target."),
    },

    [SPECIES_ARMAROUGE] =
    {
        .move = MOVE_ARMOR_CANNON,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_WATER,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 30,
            },
        },
        .unlockedLevel = 40,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes super effective against Water types and can burn the target."),
    },

    [SPECIES_WUGTRIO] =
    {
        .move = MOVE_TRIPLE_DIVE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 35,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FLINCH,
                .chance       = 10,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 35 BP move that hits the target 3 times, can flinch the target."),
    },

    [SPECIES_TANDEMAUS] =
    {
        .move = MOVE_SCRATCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 20,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MULTI_HIT_MAX_TIMES,
                .variable     = 10,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_MULTI_HIT,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 20BP move that can hit up to 10 times."),
    },

    [SPECIES_MAUSHOLD] =
    {
        .move = MOVE_SCRATCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 20,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MULTI_HIT_MAX_TIMES,
                .variable     = 10,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_MULTI_HIT,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 20BP move that can hit up to 10 times."),
    },

    [SPECIES_MAUSHOLD_FOUR] =
    {
        .move = MOVE_SCRATCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 20,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MULTI_HIT_MAX_TIMES,
                .variable     = 10,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable = EFFECT_MULTI_HIT,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 20BP move that can hit up to 10 times."),
    },

    [SPECIES_CYCLIZAR] =
    {
        .move = MOVE_DRAGON_RUSH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ACCURACY,
                .variable     = 95,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = 10,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 30,
            },
        },
        .unlockedLevel = 35,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            "Becomes a 80 BP move with 95% accuracy, can flinch the target or raise the user attack."),
    },

    // Other
    [SPECIES_NONE] =
    {
        .move = MOVE_NONE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_NONE,
            },
        },
        .unlockedLevel = FALSE,
        DEFINE_SIGNATURE_MOVE_DESCRIPTION(
            ""),
    },
};