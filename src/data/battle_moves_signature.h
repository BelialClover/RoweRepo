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
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Becomes a 40 BP move that seeds\n"
            "the target."
        ),
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
        .summaryScreen_description = _(
            "Becomes a 2 hit 35 BP move that can\n"
            "seed the target."
        ),
    },

    [SPECIES_VENUSAUR] =
    {
        .move = MOVE_SOLAR_BEAM,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 140,
                .argument     = SIGNATURE_POWER_CHANGE_IN_CONDITIONS,
                .chance       = SIGNATURE_CONDITION_WEATHER_SUN,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable     = EFFECT_HIT,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Always charges in one turn, becomes a 140BP\n"
            "move in the sun."
        ),
    },

    [SPECIES_VENUSAUR_MEGA] =
    {
        .move = MOVE_SOLAR_BEAM,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 140,
                .argument     = SIGNATURE_POWER_CHANGE_IN_CONDITIONS,
                .chance       = SIGNATURE_CONDITION_WEATHER_SUN,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable     = EFFECT_HIT,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Always charges in one turn, becomes a 140BP\n"
            "move in the sun."
        ),
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
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Becomes a 30 BP move that burns\n"
            "the target."
        ),
    },

    [SPECIES_CHARIZARD] =
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Has a 30% chance to burn the target\n"
            "and is super effective against\n"
            "Rock types."
        ),
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
                .chance       = 40,
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 110BP move that has a 40%\n"
            "chance of burning and hits Rock types x2."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Fire/Dragon type move that\n"
            "hits Rock types x2 and uses the\n"
            "highest attacking stat."
        ),
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
                .modification = SIGNATURE_MOD_PENETRATING,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_CONDITION_WEATHER_RAIN,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_CHANGE_TARGET,
                .variable     = MOVE_TARGET_BOTH,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 95 Accuracy move that ignores\n"
            "target stat changes, gains priority\n"
            "in rain and hits both targets."
        ),
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
                .modification = SIGNATURE_MOD_PENETRATING,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_CONDITION_WEATHER_RAIN,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 100 Accuracy move that ignores\n"
            "target stat changes, gains priority\n"
            "in rain and hits both targets."
        ),
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
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Raises the Defense of the\n"
            "user twice."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 80BP move, that can\n"
            "poison the foe and set up tailwind\n"
            "to its team."
        ),
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a move that can poison the\n"
            "foe and set up tailwind to its\n"
            "team."
        ),
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
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Raises the Defense of the\n"
            "user twice."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 45 BP move that hits Bug types x2\n"
            "and ignores the target Defense changes."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 50 BP move that hits Bug types x2\n"
            "and ignores the target Defense changes."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 95 BP move that ignores"
            "target stat changes.\n"
        ),
    },

    [SPECIES_RATICATE_ALOLAN] =
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 95 BP move that ignores"
            "target stat changes.\n"
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 95 BP move that hits Ground types x2\n"
            "and ignores target stat changes"
        ),
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
                .modification = SIGNATURE_MOD_ADD_RECKOIL,
                .variable     = 25,
            },
        },
        .unlockedLevel = 30,
        .summaryScreen_description = _(
            "Becomes a recoil 130 BP move that has a\n"
            "20% chance of setting electric terrain."
        ),
    },

    [SPECIES_PIKACHU] =
    {
        .move = MOVE_VOLT_TACKLE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 115,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_ELECTRIC,
                .chance       = 15,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 115 BP move that has a 15%\n"
            "chance of setting electric terrain."
        ),
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
                .chance       = 25,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 120 BP move that has a 25%\n"
            "chance of setting electric terrain."
        ),
    },

    [SPECIES_RAICHU_ALOLAN] =
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 120 BP Electric and Psychic\n"
            "type move that has a 15% chance\n"
            "of setting electric terrain"
        ),
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 95BP moves that hit steel\n"
            "types x2 and has a 30% chance of\n"
            "paralyzing the target"
        ),
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
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Becomes a 35 BP move with 85% accuracy\n"
            "that makes the target sleep and becomes\n"
            "stronger in psychic terrain."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Rock-type move that ignores\n"
            "the target defense and sets up Stealth\n"
            "Rock when used."
        ),
    },

    [SPECIES_GOLEM_ALOLAN] =
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes an Electric-type move that ignores\n"
            "the target defense and sets up Electric\n"
            "Terrain when used."
        ),
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
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Becomes a 35 BP move that hits the target 3 times,\n"
            "can flinch the target."
        ),
    },

    [SPECIES_DUGTRIO_ALOLAN] =
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
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Becomes a 35 BP move that hits the target 3 times,\n"
            "can lower the target speed."
        ),
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
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Becomes a 40 BP move that hits the target twice,\n"
            "can raise the user attack."
        ),
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
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Becomes a 35 BP move that hits the target 3 times,\n"
            "can raise the user attack."
        ),
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
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Becomes a 35 BP move that hits the target 3 times,\n"
            "paralysis chances becomes 10% per hit."
        ),
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
        .unlockedLevel = 28,
        .summaryScreen_description = _(
            "Becomes a 80BP move that can raise\n"
            "the user speed and flinch the target."
        ),
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
        .summaryScreen_description = _(
            "Becomes a 90BP move that can raise\n"
            "the user speed or flinch the target."
        ),
    },

    [SPECIES_MEOWTH_ALOLAN] =
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
        .unlockedLevel = 28,
        .summaryScreen_description = _(
            "Becomes an special 80BP Dark Type\n"
            "move that can raise Sp.Atk and uses\n"
            "the attacker highest attacking stat."
        ),
    },

    [SPECIES_PERSIAN_ALOLAN] =
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
        .summaryScreen_description = _(
            "Becomes an special 80BP Dark Type\n"
            "move that can raise Sp.Atk and uses\n"
            "the attacker highest attacking stat."
        ),
    },

    [SPECIES_MEOWTH_GALARIAN] =
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
        .unlockedLevel =28,
        .summaryScreen_description = _(
            "Becomes a 80BP Steel Type move\n"
            "that can raise Attack and ignores\n"
            "the target defense changes."
        ),
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
        .summaryScreen_description = _(
            "Becomes a 90BP Steel Type move\n"
            "that can raise Attack and ignores\n"
            "the target defense changes."
        ),
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
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_HEAL_WHEN_USED,
                .chance       = 25, //25% of its own HP
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Grass type move that has a 30% chance\n"
            "of seeding the target and cures the user."
        ),
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
                .modification = SIGNATURE_MOD_EFFECT_CHANCE,
                .variable     = SIGNATURE_SECONDARY_EFFECT_CURSE,
                .chance       = 20,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Grass/Ghost type move that\n"
            "has a 10% chance of cursing the target\n"
            "and ignores the target defense."
        ),
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
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Gains priority in sandstorms and hits\n"
            "Flying types Super Effectively and ignores\n"
            "the target defense."
        ),
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 75BP move that gains\n"
            "priority in sandstorms and hits\n"
            "Flying types Super Effectively"
        ),
    },

    [SPECIES_MAROWAK_ALOLAN] =
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Has a 10% chance of cursing the\n"
            "target or raise the user attack."
        ),
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
        .summaryScreen_description = _(
            "Becomes a 100BP move that has a 25%\n"
            "chance to confuse and uses the user\n"
            "highest attacking stat."
        ),
    },

    [SPECIES_EXEGGUTOR_ALOLAN] =
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
        .summaryScreen_description = _(
            "Becomes a 100BP move that has a 10%\n"
            "chance to flinch and uses the user\n"
            "highest attacking stat."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 95BP move that can has a 50%\n"
            "chance of boosting the user defense."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 100BP move that hits the\n"
            "target attack stat rather than defense."
        ),
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
                .modification = SIGNATURE_MOD_EFFECT_CHANGE,
                .variable     = EFFECT_ABSORB,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_NORMAL,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 75BP Normal-type move\n"
            "that cures 25% of the user health\n"
            "when used."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 85BP Normal-type move that\n"
            "hits the target once but still doubles"
            "from defense curl."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Gets an accuracy of 100 and can\n"
            "raise speed."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 60BP move that ignores\n"
            "the target stat changes and can raise\n"
            "the user defense."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 35BP move that can raise\n"
            "Attack and removes hazards."
        ),
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
        .unlockedLevel = 30,
        .summaryScreen_description = _(
            "Becomes a 70BP move that uses\n"
            "the user's Speed stat to\n"
            "calculate damage and can raise the\n"
            "user speed."
        ),
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
        .summaryScreen_description = _(
            "Becomes a 80BP move that uses\n"
            "the user's Speed stat to\n"
            "calculate damage and can raise the\n"
            "user speed."
        ),
    },

    [SPECIES_VOLTORB_HISUIAN] =
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
        .unlockedLevel = 30,
        .summaryScreen_description = _(
            "Becomes a 70BP move that uses the user's\n"
            "Speed stat to calculate damage and can\n"
            "raise the user speed."
        ),
    },

    [SPECIES_ELECTRODE_HISUIAN] =
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
        .summaryScreen_description = _(
            "Becomes a 80BP move that uses the user's\n"
            "Speed stat to calculate damage and can\n"
            "raise the user speed."
        ),
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
        .unlockedLevel = 35,
        .summaryScreen_description = _(
            "Becomes a 60BP move that has 90%\n"
            "chance of poisoning the target\n"
            "with 90 accuracy."),
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
        .summaryScreen_description = _(
            "Becomes a 45BP move that has 100%\n"
            "chance of poisoning the target\n"
            "with 95 accuracy."),
    },

    [SPECIES_WEEZING_GALARIAN] =
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
        .summaryScreen_description = _(
            "Becomes a 40BP move that has 100%\n"
            "chance of poisoning the target\n"
            "with 95 accuracy and gains the fairy type."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 50BP Water-type priority move that\n"
            "can confuse the foe, hits a single target."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 60BP Water-type priority move that\n"
            "can confuse the foe, hits a single target."),
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
        .summaryScreen_description = _(
            "Becomes a Water-type move that\n"
            "can set up spikes."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 70 BP Fire type move\n"
            "that can burn the target."),
    },

    [SPECIES_ARCANINE_HISUIAN] =
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 70 BP Rock type move\n"
            "that can burn the target."),
    },

    [SPECIES_TAUROS] =
    {
        .move = MOVE_RAGING_BULL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 110,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 110 BP move."
        ),
    },

    [SPECIES_TAUROS_PALDEAN_AQUA_BREED] =
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
        .summaryScreen_description = _(
            "Becomes a Water-type move."
        ),
    },

    [SPECIES_TAUROS_PALDEAN_BLAZE_BREED] =
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
        .summaryScreen_description = _(
            "Becomes a Fire-type move."
        ),
    },

    [SPECIES_TAUROS_PALDEAN_COMBAT_BREED] =
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
        .summaryScreen_description = _(
            "Becomes a Fighting-type move."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 140 BP move."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a single hit 100 BP Flying-type\n"
            "move that dos not lock the user."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a single hit 110 BP Water-type\n"
            "move that dos not lock the user."
        ),
    },

    [SPECIES_LAPRAS] =
    {
        .move = MOVE_SURF,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FREEZE,
                .chance       = 10,
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Water and Ice type move\n"
            "that can freeze the target, does not hit allies."
        ),
    },

    [SPECIES_LAPRAS_MEGA] =
    {
        .move = MOVE_SURF,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FREEZE,
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Water and Ice type move\n"
            "that can freeze the target, does not hit allies."
        ),
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
        .summaryScreen_description = _(
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Flying type move."),
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
                .variable     = 95,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 95 BP Rock type move."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 70BP Flying type move."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes an Ice move that can hit x2\n"
            "against Water-types, set up hail and\n"
            "has a 90% accuracy."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes an Electric move that can hit x2\n"
            "against Grass-types, set up electric terrain\n"
            "and has a 90% accuracy."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Fire move that can hit x2\n"
            "against Water-types, set up Sunny Day\n"
            "and has a 90% accuracy."
        ),
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 100BP move that lowers the target's\n"
            "Attack stat and can set up grassy terrain."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Can set up the sun and only goes down to\n"
            "60BP."
        ),
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Water-type move that can confuse\n"
            "the target."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Now also raises the speed stat and gains\n"
            "priority"
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 90BP move that can Set up electric\n"
            "terrain"
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 90BP move that can Set up electric\n"
            "terrain"),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 70BP Fairy-type move\n"
            "that can infatuate the target"),
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
        .summaryScreen_description = _(
            "Becomes a 90BP Fairy-type move\n"
            "that can infatuate the target"
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a priority 80BP move\n"
            "that can taunt the target"),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a priority 90BP move\n"
            "that can taunt the target"),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a priority 90BP move\n"
            "that can taunt the target"),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a priority move that sets up psychic\n"
            "terrain"
        ),
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 70BP move that gives the target the\n"
            "Water-type"),
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 80BP move that gives the target the\n"
            "Water-type"
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
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
        .summaryScreen_description = _(
            "Now also sets up Sticky Web"),
    },

    [SPECIES_SCIZOR] =
    {
        .move = MOVE_BULLET_PUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 65,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 20,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 65BP move that can raise then\n"
            "user attack stat."
        ),
    },

    [SPECIES_SCIZOR_MEGA] =
    {
        .move = MOVE_BULLET_PUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 75,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 25,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 75BP move that can raise then\n"
            "user attack stat."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Has a 95% accuracy and can set up\n"
            "sandstorm."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Has a 100% accuracy and can set up\n"
            "sandstorm."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "It now has a 10% chance of setting a layer of\n"
            "toxic spikes per hit and becomes a Poison\n"
            "type move."),
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "It now sets Hail when used and becomes an\n"
            "an Ice-Type move."),
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
                .chance       = 50,
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 95BP move that does not lock the user,\n"
            "it has a 50% chance of raising the user speed and\n"
            "can set up grassy terrain."
        ),
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "It becomes Super Effective against Steel-types,\n"
            "it's power gets rised to 85 and has a 30%\n"
            "chance of lowering the defense."),
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
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_GRASS,
                .chance       = 25,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "It now uses the highest attacking stat to\n"
            "calculate it's damage and can set up grassy\n"
            "terrain."
        ),
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "It now uses the highest attacking stat to\n"
            "calculate it's damage and has a 35% chance to set\n"
            "up grassy terrain."
        ),
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
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_SUN,
                .chance       = 25,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Its becomes a move with a power of 95 that\n"
            "has a 25% chance of setting up Sunny Day."
        ),
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
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_SUN,
                .chance       = 35,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Its becomes a move with a power of 95 that\n"
            "has a 35% chance of setting up Sunny Day."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Physical Water and Ground move that\n"
            "has a 25% chance of setting up Rain."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Physical Water and Ground move that\n"
            "can set up Rain."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "It Becomes a move with a power of 80 that has a\n"
            "30% chance of lowering the target's speed."
        ),
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "It now raises the Speed stat of the user after\n"
            "using it."
        ),
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
        .summaryScreen_description = _(
            "Becomes a 80BP move that has a 20% chance of raising\n"
            "all of the user stats."
        ),
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
        .summaryScreen_description = _(
            "Becomes a 80BP Poison-type move that has a 20%\n"
            "chance of raising all of the user stats."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 70 BP move that doubles\n"
            "its power if the user is poisoned,\n"
            "burned, or paralyzed."
        ),
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
        .summaryScreen_description = _(
            "Becomes a 60 BP move that knocks away\n"
            "the target and drags out another Pokémon\n"
            "in its party, also boosts SP.Atk."
        ),
    },

    /*[SPECIES_LUDICOLO] =
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
                .variable     = 80,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_SPECIAL,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "It becomes a 80BP special move that always sets\n"
            "up rain."
        ),
    },*/

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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "It Becomes a Grass and Flying type Physical move\n"
            "with a power of 80 with a 20% chance of setting\n"
            "up Tailwind."
        ),
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
        .unlockedLevel = 30,
        .summaryScreen_description = _(
            "It lets you use another move after using it and\n"
            "now has a higher priority."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "It lets you use another move after using it and\n"
            "now has a higher priority."
        ),
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
                .variable = EFFECT_JAW_LOCK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FAIRY,
            },
            [SIGNATURE_MOVE_EFFECT_4] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 80 BP Fairy-type move that prevents the\n"
            "user and the target from switching out until\n"
            "either of them faints, ignores defense."
        ),
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
                .modification = SIGNATURE_MOD_PENETRATING,
            },
            [SIGNATURE_MOVE_EFFECT_5] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_ATK,
                .chance       = 15, //Effect per hit
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 50 BP Fairy-type move hits twice"
            "and ignores defense, may boost attack."
        ),
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "It becomes an Speed version of Body Press."
        ),
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "It gets a 10% Paralysis chance for each hit and\n"
            "hits Ghost-types for x2 damage."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "It becomes Super-Effective against Poison-types\n"
            "and ignores the target's defense stat changes."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "It becomes a Priority move when used by Spinda"),
    },

    [SPECIES_LUVDISC] =
    {
        .move = MOVE_DRAINING_KISS,
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
                .variable     = 75,
            },
        },
        .unlockedLevel = 30,
        .summaryScreen_description = _(
            "It becomes a Priority move when used by Luvdisc"),
    },

    [SPECIES_KECLEON] =
    {
        .move = MOVE_LICK,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_ALWAYS,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_OTHER,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "It becomes a Priority move when used by Kecleon"),
    },

    [SPECIES_RELICANTH] =
    {
        .move = MOVE_HEAD_SMASH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_PRIORITY,
                .variable     = SIGNATURE_PRIORITY_IN_CONDITIONS,
                .chance       = SIGNATURE_CONDITION_WEATHER_RAIN,
            },
        },
        .unlockedLevel = 30,
        .summaryScreen_description = _(
            "Becomes a Priority move when used"
            "in the rain."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 80BP move that has a 30%\n"
            "chance of freezing the target."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 75BP move that has a 40%\n"
            "chance of freezing the target."),
    },

    [SPECIES_ANORITH] =
    {
        .move = MOVE_FURY_CUTTER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
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
        },
        .unlockedLevel = 30,
        .summaryScreen_description = _(
            "Becomes a 70 BP move that has priority in\n"
            "the rain and can raise the user speed."),
    },

    [SPECIES_ARMALDO] =
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
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_ROCK,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
                .variable     = STAT_SPEED,
                .chance       = 30,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 80 BP Rock-type move that has\n"
            "a 30% chance of raising the user's Speed."),
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
        .unlockedLevel = 30,
        .summaryScreen_description = _(
            "Becomes a 80BP Rock-type move that always\n"
            "inflicts Leech Seed."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 80BP Rock-type move that always\n"
            "inflicts Leech Seed."),
    },

    [SPECIES_CASTFORM] =
    {
        .move = MOVE_WEATHER_BALL,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 80,
            },
        },
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Becomes an 80BP move when used by Castform"),
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
        .summaryScreen_description = _(
            "Becomes a Fire-type move that has a 25%\n"
            "chance of Burning its target."),
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
                .variable     = SIGNATURE_SECONDARY_EFFECT_FREEZE,
                .chance       = 25,
            },
        },
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Becomes an Ice-type move that has a 25%\n"
            "chance of Freezing its target."),
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
        .summaryScreen_description = _(
            "Becomes a Water-type move that\n"
            "slows down its target."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes an Ice-type move that has a 30%\n"
            "chance of raising all of the user stats."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Rock-type move that has a 30%\n"
            "chance of raising all of the user stats."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Steel-type move that has a 30%\n"
            "chance of raising all of the user stats."),
    },

    // Sinnoh ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_TORTERRA] =
    {
        .move = MOVE_EARTHQUAKE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_GRASS,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_TERRAIN_GRASS,
                .chance       = 25,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a part Grass-type move that can\n"
            "set up Grassy Terrain with a 25% chance"),
    },

    [SPECIES_INFERNAPE] =
    {
        .move = MOVE_MACH_PUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FIRE,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance       = 25,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Fire-type move that has a 25%\n"
            "chance of burning the target"),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes an Steel and Water-type move\n"
            "uses the user highest attacking stat\n"
            "and raises the special attack rather than\n"
            "attack."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes Super Effective against Grass-types\n"
            "and ignores the target defense changes."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes Super Effective against Grass-types\n"
            "and ignores the target defense changes."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 80BP move that has a 20% chance\n"
            "of setting up Tailwind."),
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
        .unlockedLevel = 30,
        .summaryScreen_description = _(
            "Becomes a Rock-type move with a power of 50\n"
            "and a priority of +1, now it has a 20% flinch\n"
            "chance"
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Rock-type move with a power of 60\n"
            "and a priority of +1, now it has a 10% flinch\n"
            "chance"
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Grass-type move that is Super-\n"
            "Effective against Bug and Flying types."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 95 accuracy move that hits\n"
            "Steel-types Super-Effectively using\n"
            "the user's highest attack stat."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 100 accuracy move that hits\n"
            "Steel-types Super-Effectively using\n"
            "the user's highest attack stat,"
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Poison-type move with a 30% chance\n"
            "of poisoning the target."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Poison-type move with a 30% chance\n"
            "of taunting the target."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 25 BP move that hit the target\n"
            "up to 5 times using its Murkrow cronies to\n"
            "attack, each hit may lower the target's defense."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 90 BP Steel-type move that can\n"
            "paralyze the target and is super effective\n"
            "against Steel-types."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "It now uses the highest attacking stat to\n"
            "calculate it's damage always has a 90% accuracy and\n"
            "can raise the user defense."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "It now uses the highest attacking stat to\n"
            "calculate it's damage always has a 95% accuracy and\n"
            "can raise the user defense."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 95BP move that raises the user's\n"
            "Special Attack by 1 stage with a 10% chance."
        ),
    },

    [SPECIES_LUCARIO_MEGA] =
    {
        .move = MOVE_AURA_SPHERE,
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
                .chance       = 10,
            },
            [SIGNATURE_MOVE_EFFECT_3] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 100BP move that raises the user's\n"
            "Special Attack by 1 stage with a 10% chance."
        ),
    },

    [SPECIES_LOPUNNY] =
    {
        .move = MOVE_RETURN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
                .chance       = 30,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a move with a 30% chance of infatuating\n"
            "the target."),
    },

    [SPECIES_LOPUNNY_MEGA] =
    {
        .move = MOVE_RETURN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TYPE,
                .variable     = TYPE_FIGHTING,
            },
        },
        .summaryScreen_description = _(
            "Becomes a Fighting-type move with a 30%\n"
            "chance of infatuating the target."),
    },

    [SPECIES_FROSLASS] =
    {
        .move = MOVE_HEX,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_FREEZE,
                .chance     = 20,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_HAIL,
                .chance       = 20,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 65BP move with a 20% chance of\n"
            "freezing the target and can set up hail."),
    },

    [SPECIES_SPIRITOMB] =
    {
        .move = MOVE_HEX,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_BURN,
                .chance     = 30,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PSS_CHANGE,
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 65BP move with a 30% chance of\n"
            "burning the target."),
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
                .variable     = EFFECT_JAW_LOCK,
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
                .variable     = SPLIT_HIGHEST,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 70 BP Grass-type move that prevents the\n"
            "user and the target from switching out until\n"
            "either of them faints and leeches the target."
        ),
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
                .variable     = 95,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 130 BP move with 90% accuracy, If\n"
            "this move misses the user takes damage instead,\n"
            "has a 20% chance of burning the target."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 90 BP move sets up Spikes when used,\n"
            "ignores the target defense changes."
        ),
    },

    [SPECIES_SAMUROTT_HISUIAN] =
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 90 BP move sets up Spikes when used,\n"
            "ignores the target defense changes."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Dark-type move that taunts\n"
            "the target."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a move with a 50% chance of setting\n"
            "up Stealth Rock and raises the user's Attack\n"
            "by 1 stage with a 50% chance."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Bug-type move that raises the\n"
            "user defense and may flinch the target"),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Poison-type move that raises the\n"
            "user speed and may poison the target"),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Bug-type move that raises the\n"
            "user attack and may flinch the target"),
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
        .unlockedLevel = 36,
        .summaryScreen_description = _(
            "Becomes a 70BP move that sets up\n"
            "Sticky Web."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 75BP move that sets up\n"
            "Sticky Web."
        ),
    },

    [SPECIES_GOLURK] =
    {
        .move = MOVE_SHADOW_PUNCH,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_PRIORITY_IN_CONDITIONS,
                .variable     = SIGNATURE_CONDITION_TRICK_ROOM,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_TARGET_STAT_DOWN,
                .variable     = STAT_DEF,
                .chance       = 30,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a move with a 30% chance of lowering\n"
            "the target's defense, becomes a priority move\n"
            "in Trick Room."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Dragon-type move that ignores the\n"
            "target's defense stat changes."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Dragon-type move that ignores the\n"
            "target's defense stat changes."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Power becomes 110 and becomes a Fighting and Grass-type\n"
            "move with a 30% chance of leeching the target."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Power becomes 85 and becomes a Fire and Psychic-type\n"
            "move with a 30% chance of confusing the target."),
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 20BP Water and Dark type move."
        ),
    },

    [SPECIES_GRENINJA_ASH] =
    {
        .move = MOVE_WATER_SHURIKEN,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 25,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SECOND_TYPE,
                .variable     = TYPE_DARK,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 25BP Water and Dark type move."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Grass/Ghost-type move with a 30%\n"
            "chance of giving the target the Ghost-type."),
    },

    [SPECIES_GOURGEIST] =
    {
        .move = MOVE_WILL_O_WISP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
                .chance       = 30,
                .argument     = TYPE_GHOST,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a move with a 30% chance of\n"
            "giving the target the Ghost-type."),
    },

    [SPECIES_GOURGEIST_LARGE] =
    {
        .move = MOVE_WILL_O_WISP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
                .argument     = TYPE_GHOST,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a move with a 30% chance of\n"
            "giving the target the Ghost-type."),
    },

    [SPECIES_GOURGEIST_SMALL] =
    {
        .move = MOVE_WILL_O_WISP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
                .argument     = TYPE_GHOST,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a move with a 30% chance of\n"
            "giving the target the Ghost-type."),
    },

    [SPECIES_GOURGEIST_SUPER] =
    {
        .move = MOVE_WILL_O_WISP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
                .variable     = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
                .argument     = TYPE_GHOST,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a move with a 30% chance of\n"
            "giving the target the Ghost-type."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 90 BP move that uses\n"
            "the user's highest attack stat\n"
            "and can put the target to sleep."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 85BP Ghost-type move that\n"
            "ignores the target's defense and\n"
            "steals half the damage inflicted."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a Ghost-type 45 BP move \n"
            "that ignores the target's defense\n"
            "and hits twice."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 90BP Ghost-type move that\n"
            "ignores the target's defense."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 90BP Ghost-type move that\n"
            "ignores the target's defense."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 100BP move that can set up Misty\n"
            "Terrain and has a 35% chance of lowering the\n"
            "target's Special Attack by 1 stage."
        ),
    },
    
    // Alola ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_PALOSSAND] =
    {
        .move = MOVE_SHORE_UP,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_MODIFY_FIELD,
                .variable     = FIELD_SET_WEATHER_SANDSTORM,
                .chance       = 20,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a move that sets up Sandstorm with a\n"
            "20% chance."),
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
                .chance       = 15,
            },
        },
        .unlockedLevel = 20,
        .summaryScreen_description = _(
            "May lower the target Defense\n"
            "and ignores it if higher"),
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
                .chance       = 30,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_PENETRATING,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "May lower the target Defense\n"
            "and ignores it if higher"),
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a move with a 20% chance of\n"
            "burning the target."),
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a move with a 20% chance of\n"
            "paralyzing the target."),
    },

    [SPECIES_ORICORIO_PA_U] =
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
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a move with a 20% chance of\n"
            "confusing the target."),
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
                .chance       = 10,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a move with a 10% chance of\n"
            "cursing the target."),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes an Steel-Type move that boosts\n"
            "the user's Speed stat but lowers its\n"
            "Defense stat."
        ),
    },

    // Galar ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_RILLABOOM] =
    {
        .move = MOVE_GRASSY_GLIDE,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 70,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 70BP move."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 95BP move that ignores\n"
            "the target defense and can"
            "flinch the target."
        ),
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
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a move that can hit a target\n"
            "using a move such as Protect or Detect\n"
            "this also lifts the effects of the move."
        ),
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
        .summaryScreen_description = _(
            "Becomes a 90 BP Water-type move."
        ),
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
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Becomes a 90 BP Rock-type move."
        ),
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
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Becomes a 95 BP Rock-type move that\n"
            "ignores the target defense."
        ),
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
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Becomes a 90 BP move that\n"
            "ignores the target defense."
        ),
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
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Becomes a 95 BP move that\n"
            "may boost the user speed."
        ),
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
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Becomes a 95 BP move that\n"
            "may boost the user speed."
        ),
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
        .unlockedLevel = 25,
        .summaryScreen_description = _(
            "Becomes a 95 BP move that\n"
            "may boost the user speed."
        ),
    },

    //Paldea
    [SPECIES_TINKATON] =
    {
        .move = MOVE_GIGATON_HAMMER,
        .moveEffect =
        {
            [SIGNATURE_MOVE_EFFECT_1] = 
            {
                .modification = SIGNATURE_MOD_POWER,
                .variable     = 130,
            },
            [SIGNATURE_MOVE_EFFECT_2] = 
            {
                .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
                .variable     = TYPE_STEEL,
            },
        },
        .unlockedLevel = FALSE,
        .summaryScreen_description = _(
            "Becomes a 130 BP move\nand is super effective against Steel-types."),
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
        .summaryScreen_description = _(
            ""
        ),
    },
};