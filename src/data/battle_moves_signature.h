const struct SignatureMove gSignatureMoveList[NUM_SPECIES] = {
    // Kanto ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_VENUSAUR] =
    {
        .move = MOVE_SOLAR_BEAM,
        .modification = SIGNATURE_MOD_OTHER,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Always charges in one turn"),
    },

    [SPECIES_VENUSAUR_MEGA] =
    {
        .move = MOVE_SOLAR_BEAM,
        .modification = SIGNATURE_MOD_OTHER,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Always charges in one turn"),
    },

    [SPECIES_CHARIZARD] =
    {
        .move = MOVE_FLAMETHROWER,
        .modification = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable = 30,
        .modification2 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable2     = TYPE_ROCK,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Has a 30% chance to burn the target\nand is super effective against\nRock types."),
    },

    [SPECIES_CHARIZARD_MEGA_Y] =
    {
        .move = MOVE_FLAMETHROWER,
        .modification = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable = 40,
        .modification2 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable2     = TYPE_ROCK,
        .modification3 = SIGNATURE_MOD_POWER,
        .variable3 = 110,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 110BP move that has a 40%\n"
            "chance of burning and hits Rock types x2."),
    },

    [SPECIES_CHARIZARD_MEGA_X] =
    {
        .move = MOVE_FLAMETHROWER,
        .modification = SIGNATURE_MOD_SECOND_TYPE,
        .variable = TYPE_DRAGON,
        .modification2 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable2     = TYPE_ROCK,
        .modification3 = SIGNATURE_MOD_PSS_CHANGE,
        .variable3 = SPLIT_HIGHEST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Fire/Dragon type move that\n"
            "hits Rock types x2 and uses the\n"
            "highest attacking stat"),
    },

    [SPECIES_BLASTOISE] =
    {
        .move = MOVE_HYDRO_PUMP,
        .modification = SIGNATURE_MOD_ACCURACY,
        .variable = 95,
        .modification2  = SIGNATURE_MOD_PENETRATING,
        .differentDescription = FALSE,
        .modification3 = SIGNATURE_MOD_PRIORITY,
        .variable3 = SIGNATURE_PRIORITY_CONDITION_WEATHER_RAIN,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 95 Accuracy move that\n"
            "ignores target stat changes and\n"
            "gains priority in rain"),
    },

    [SPECIES_BLASTOISE_MEGA] =
    {
        .move = MOVE_HYDRO_PUMP,
        .modification = SIGNATURE_MOD_ACCURACY,
        .variable = 100,
        .modification2  = SIGNATURE_MOD_PENETRATING,
        .differentDescription = FALSE,
        .modification3 = SIGNATURE_MOD_PRIORITY,
        .variable3 = SIGNATURE_PRIORITY_CONDITION_WEATHER_RAIN,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 100 Accuracy move that\n"
            "ignores target stat changes and\n"
            "gains priority in rain"),
    },

    [SPECIES_BUTTERFREE] =
    {
        .move = MOVE_GUST,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_POISON,
        .chance = 30,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 80,
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SELF_SET_TAILWIND,
        .chance3 = 10,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 80BP move, that can\n"
            "poison the foe and set up tailwind\n"
            "to its team."),
    },

    [SPECIES_BUTTERFREE_MEGA] =
    {
        .move = MOVE_HURRICANE,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_POISON,
        .chance = 30,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SELF_SET_TAILWIND,
        .chance2 = 10,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a move that can poison the\n"
            "foe and set up tailwind to its\n"
            "team."),
    },

    [SPECIES_BEEDRILL] =
    {
        .move = MOVE_TWINEEDLE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 45,
        .modification2 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable2     = TYPE_BUG,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 45 BP move that hits Bug types x2."),
    },

    [SPECIES_BEEDRILL_MEGA] =
    {
        .move = MOVE_TWINEEDLE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 50,
        .modification2 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable2     = TYPE_BUG,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 50 BP move that hits Bug types x2."),
    },

    [SPECIES_RATICATE] =
    {
        .move = MOVE_HYPER_FANG,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 95,
        .modification2  = SIGNATURE_MOD_PENETRATING,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 95 BP move that ignores target stat changes."),
    },

    [SPECIES_RATICATE_ALOLAN] =
    {
        .move = MOVE_CRUNCH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 95,
        .modification2  = SIGNATURE_MOD_PENETRATING,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 95 BP move that ignores target stat changes."),
    },

    [SPECIES_FEAROW] =
    {
        .move = MOVE_DRILL_PECK,
        .modification  = SIGNATURE_MOD_PENETRATING,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2     = 95,
        .modification3 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable3     = TYPE_GROUND,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 95 BP move that hits Ground types x2\n"
            "and ignores target stat changes"),
    },

    [SPECIES_PICHU] =
    {
        .move = MOVE_VOLT_TACKLE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 110,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SET_TERRAIN_ELECTRIC,
        .chance2 = 10,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 110 BP move that has a 10%\n"
            "chance of setting electric terrain."),
    },

    [SPECIES_PIKACHU] =
    {
        .move = MOVE_VOLT_TACKLE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 115,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SET_TERRAIN_ELECTRIC,
        .chance2 = 15,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 115 BP move that has a 15%\n"
            "chance of setting electric terrain."),
    },

    [SPECIES_RAICHU] =
    {
        .move = MOVE_VOLT_TACKLE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 120,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SET_TERRAIN_ELECTRIC,
        .chance2 = 25,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 120 BP move that has a 25%\n"
            "chance of setting electric terrain."),
    },

    [SPECIES_RAICHU_ALOLAN] =
    {
        .move = MOVE_VOLT_TACKLE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 120,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SET_TERRAIN_ELECTRIC,
        .chance2 = 15,
        .modification3 = SIGNATURE_MOD_SECOND_TYPE,
        .variable3 = TYPE_PSYCHIC,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 120 BP electric and psychic\n"
            "type move that has a 15% chance\n"
            "of setting electric terrain"),
    },

    [SPECIES_ARBOK] =
    {
        .move = MOVE_POISON_FANG,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 95,
        .modification2 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable2 = TYPE_STEEL,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance3 = 30,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 95BP moves that hit steel\n"
            "types x2 and has a 30% chance of\n"
            "paralyzing the target"),
    },

    [SPECIES_HYPNO] =
    {
        .move = MOVE_HYPNOSIS,
        .modification = SIGNATURE_MOD_ACCURACY,
        .variable = 90,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Now has a 90 accuracy"),
    },

    [SPECIES_GOLEM] =
    {
        .move = MOVE_EXPLOSION,
        .modification = SIGNATURE_MOD_MODIFY_FIELD,
        .variable = FIELD_OPPONET_SET_STEALTH_ROCK,
        .modification2 = SIGNATURE_MOD_PENETRATING,
        .modification3 = SIGNATURE_MOD_PSS_CHANGE,
        .variable3 = SPLIT_HIGHEST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Sets up Stealth Rock when used and\n"
            "ignores target stat changes and uses\n"
            "the highest attacking stat."),
    },

    [SPECIES_GOLEM_ALOLAN] =
    {
        .move = MOVE_EXPLOSION,
        .modification = SIGNATURE_MOD_MODIFY_FIELD,
        .variable = FIELD_OPPONET_SET_STEALTH_ROCK,
        .modification2 = SIGNATURE_MOD_PENETRATING,
        .modification3 = SIGNATURE_MOD_PSS_CHANGE,
        .variable3 = SPLIT_HIGHEST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Sets up Stealth Rock when used and\n"
            "ignores target stat changes and uses\n"
            "the highest attacking stat."),
    },

    [SPECIES_MEOWTH] =
    {
        .move = MOVE_PAY_DAY,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable2 = STAT_SPEED,
        .chance3 = 10,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 80BP move that can raise\n"
            "the user speed"),
    },

    [SPECIES_PERSIAN] =
    {
        .move = MOVE_PAY_DAY,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable2 = STAT_SPEED,
        .chance3 = 20,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 90BP move that can raise\n"
            "the user speed"),
    },

    [SPECIES_MEOWTH_ALOLAN] =
    {
        .move = MOVE_PAY_DAY,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_TYPE,
        .variable2 = TYPE_DARK,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_PSS_CHANGE,
        .variable4 = SPLIT_SPECIAL,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes an special 80BP Dark Type\n"
            "move that can raise Sp.Atk"),
    },

    [SPECIES_PERSIAN_ALOLAN] =
    {
        .move = MOVE_PAY_DAY,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_TYPE,
        .variable2 = TYPE_DARK,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 10,
        .modification4 = SIGNATURE_MOD_PSS_CHANGE,
        .variable4 = SPLIT_SPECIAL,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes an special 90BP Dark Type\n"
            "move that can raise Sp.Atk"),
    },

    [SPECIES_MEOWTH_GALARIAN] =
    {
        .move = MOVE_PAY_DAY,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_TYPE,
        .variable2 = TYPE_STEEL,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_ATK,
        .chance3 = 10,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 80BP Steel Type move\n"
            "that can raise Attack"),
    },

    [SPECIES_PERRSERKER] =
    {
        .move = MOVE_PAY_DAY,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_TYPE,
        .variable2 = TYPE_STEEL,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_ATK,
        .chance3 = 10,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 90BP Steel Type move\n"
            "that can raise Attack"),
    },

    [SPECIES_PARASECT] =
    {
        .move = MOVE_LEECH_LIFE,
        .modification = SIGNATURE_MOD_SECOND_TYPE,
        .variable = TYPE_GHOST,
        .modification2 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable2 = SIGNATURE_SECONDARY_EFFECT_CURSE,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Grass/Ghost type move that\n"
            "has a 10% chance of cursing the target"),
    },

    [SPECIES_CUBONE] =
    {
        .move = MOVE_BONE_CLUB,
        .modification = SIGNATURE_MOD_PRIORITY,
        .variable = SIGNATURE_PRIORITY_IN_CONDITIONS,
        .chance = SIGNATURE_PRIORITY_CONDITION_WEATHER_SAND,
        .modification2 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable2 = TYPE_FLYING,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Gains priority in sandstorms and hits\n"
            "Flying types Super Effectively"),
    },

    [SPECIES_MAROWAK] =
    {
        .move = MOVE_BONE_CLUB,
        .modification = SIGNATURE_MOD_PRIORITY,
        .variable = SIGNATURE_PRIORITY_IN_CONDITIONS,
        .chance = SIGNATURE_PRIORITY_CONDITION_WEATHER_SAND,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 75,
        .modification3 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable3 = TYPE_FLYING,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 75BP move that gains\n"
            "priority in sandstorms and hits\n"
            "Flying types Super Effectively"),
    },

    [SPECIES_MAROWAK_ALOLAN] =
    {
        .move = MOVE_SHADOW_BONE,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_CURSE,
        .chance = 10,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Has a 10% chance of cursing the\n"
            "target."),
    },

    [SPECIES_EXEGGUTOR_ALOLAN] =
    {
        .move = MOVE_DRAGON_HAMMER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable2 = SIGNATURE_SECONDARY_EFFECT_FLINCH,
        .chance2 = 10,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 100BP move that has a 10%\n"
            "chance to flinch."),
    },

    [SPECIES_MACHAMP] =
    {
        .move = MOVE_STRENGTH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 95,
        .modification2 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable2 = STAT_DEF,
        .chance2 = 50,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 95BP move that can boost\n"
            "defense."),
    },

    [SPECIES_LICKITUNG] =
    {
        .move = MOVE_LICK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 75,
        .modification2 = SIGNATURE_MOD_CURE_WHEN_USED,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 75BP move that cures the\n"
            "user when used."),
    },

    [SPECIES_LICKILICKY] =
    {
        .move = MOVE_LICK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 85,
        .modification2 = SIGNATURE_MOD_CURE_WHEN_USED,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 85BP move that cures the\n"
            "user when used."),
    },

    [SPECIES_HITMONLEE] =
    {
        .move = MOVE_HI_JUMP_KICK,
        .modification = SIGNATURE_MOD_ACCURACY,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable2 = STAT_SPEED,
        .chance2 = 30,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Gets an accuracy of 100 and can\n"
            "raise speed."),
    },

    [SPECIES_HITMONCHAN] =
    {
        .move = MOVE_MACH_PUNCH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 60,
        .modification2 = SIGNATURE_MOD_PENETRATING,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 60BP move that ignores\n"
            "the target stat changes."),
    },

    [SPECIES_HITMONTOP] =
    {
        .move = MOVE_TRIPLE_KICK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 35,
        .modification2 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable2 = STAT_ATK,
        .chance2 = 10,
        .modification3 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable3 = FIELD_SELF_REMOVE_HAZARDS,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 35BP move that can raise\n"
            "Attack and removes hazards."),
    },

    [SPECIES_VOLTORB] =
    {
        .move = MOVE_ELECTRO_BALL,
        .modification = SIGNATURE_MOD_DAMAGE_STAT,
        .variable = STAT_SPEED,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 70,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 10,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 70BP move that uses\n"
            "the user's Speed stat to\n"
            "calculate damage."),
    },

    [SPECIES_ELECTRODE] =
    {
        .move = MOVE_ELECTRO_BALL,
        .modification = SIGNATURE_MOD_DAMAGE_STAT,
        .variable = STAT_SPEED,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 80,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 10,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 80BP move that uses\n"
            "the user's Speed stat to\n"
            "calculate damage."),
    },

    [SPECIES_VOLTORB_HISUIAN] =
    {
        .move = MOVE_ENERGY_BALL,
        .modification = SIGNATURE_MOD_DAMAGE_STAT,
        .variable = STAT_SPEED,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 70,
        .modification3 = SIGNATURE_MOD_SECOND_TYPE,
        .variable3 = TYPE_ELECTRIC,
        .modification4 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable4 = STAT_SPEED,
        .chance4 = 10,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 70BP Grass and Electric move that uses\n"
            "the user's Speed stat to calculate damage."),
    },

    [SPECIES_ELECTRODE_HISUIAN] =
    {
        .move = MOVE_ENERGY_BALL,
        .modification = SIGNATURE_MOD_DAMAGE_STAT,
        .variable = STAT_SPEED,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 80,
        .modification3 = SIGNATURE_MOD_SECOND_TYPE,
        .variable3 = TYPE_ELECTRIC,
        .modification4 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable4 = STAT_SPEED,
        .chance4 = 10,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 80BP Grass and Electric move that uses\n"
            "the user's Speed stat to calculate damage."),
    },

    [SPECIES_KOFFING] =
    {
        .move = MOVE_SMOG,
        .modification = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 40,
        .modification3 = SIGNATURE_MOD_ACCURACY,
        .variable3 = 90,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 40BP move that has 90%\n"
            "chance of poisoning the target\n"
            "with 90 accuracy."),
    },

    [SPECIES_WEEZING] =
    {
        .move = MOVE_SMOG,
        .modification = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 45,
        .modification3 = SIGNATURE_MOD_ACCURACY,
        .variable3 = 95,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 45BP move that has 100%\n"
            "chance of poisoning the target\n"
            "with 95 accuracy."),
    },

    [SPECIES_WEEZING_GALARIAN] =
    {
        .move = MOVE_SMOG,
        .modification = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 45,
        .modification3 = SIGNATURE_MOD_ACCURACY,
        .variable3 = 95,
        .modification4 = SIGNATURE_MOD_SECOND_TYPE,
        .variable4 = TYPE_FAIRY,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 40BP move that has 90%\n"
            "chance of poisoning the target\n"
            "with 90 accuracy and gains the fairy type."),
    },

    [SPECIES_STARYU] =
    {
        .move = MOVE_SWIFT,
        .modification = SIGNATURE_MOD_TYPE,
        .variable = TYPE_WATER,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 40,
        .modification3 = SIGNATURE_MOD_PRIORITY,
        .variable3 = SIGNATURE_PRIORITY_ALWAYS,
        .modification4 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable4 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance4 = 10,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 40BP Water-type priority\n"
            "move that can confuse the foe."),
    },

    [SPECIES_STARMIE] =
    {
        .move = MOVE_SWIFT,
        .modification = SIGNATURE_MOD_TYPE,
        .variable = TYPE_WATER,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 50,
        .modification3 = SIGNATURE_MOD_PRIORITY,
        .variable3 = SIGNATURE_PRIORITY_ALWAYS,
        .modification4 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable4 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance4 = 20,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 40BP Water-type priority\n"
            "move that can confuse the foe."),
    },

    [SPECIES_CLOYSTER] =
    {
        .move = MOVE_SPIKE_CANNON,
        .modification = SIGNATURE_MOD_MODIFY_FIELD,
        .variable = FIELD_OPPONET_SET_SPIKES,
        .chance = 10,
        .modification2 = SIGNATURE_MOD_TYPE,
        .variable2 = TYPE_WATER,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Water-type move that\n"
            "can set up spikes."),
    },

    [SPECIES_ARCANINE] =
    {
        .move = MOVE_EXTREME_SPEED,
        .modification = SIGNATURE_MOD_TYPE,
        .variable = TYPE_FIRE,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Fire type move."),
    },

    [SPECIES_ARCANINE_HISUIAN] =
    {
        .move = MOVE_EXTREME_SPEED,
        .modification = SIGNATURE_MOD_TYPE,
        .variable = TYPE_ROCK,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Rock type move."),
    },

    [SPECIES_TAUROS] =
    {
        .move          = MOVE_RAGING_BULL,
        .modification  = SIGNATURE_MOD_POWER,
        .variable      = 110,
        .summaryScreen_description = _(
            "Becomes a 110 BP move."),
    },

    [SPECIES_TAUROS_PALDEAN_AQUA_BREED] =
    {
        .move          = MOVE_RAGING_BULL,
        .modification  = SIGNATURE_MOD_TYPE,
        .variable      = TYPE_WATER,
        .summaryScreen_description = _(
            "Becomes a Water-type move."),
    },

    [SPECIES_TAUROS_PALDEAN_BLAZE_BREED] =
    {
        .move          = MOVE_RAGING_BULL,
        .modification  = SIGNATURE_MOD_TYPE,
        .variable      = TYPE_FIRE,
        .summaryScreen_description = _(
            "Becomes a Fire-type move."),
    },

    [SPECIES_TAUROS_PALDEAN_COMBAT_BREED] =
    {
        .move          = MOVE_RAGING_BULL,
        .modification  = SIGNATURE_MOD_TYPE,
        .variable      = TYPE_FIGHTING,
        .summaryScreen_description = _(
            "Becomes a Fighting-type move."),
    },

    [SPECIES_BOUFFALANT] =
    {
        .move          = MOVE_HEAD_CHARGE,
        .modification  = SIGNATURE_MOD_POWER,
        .variable      = 140,
        .summaryScreen_description = _(
            "Becomes a 140 BP move."),
    },

    [SPECIES_GYARADOS] =
    {
        .move = MOVE_THRASH,
        .modification = SIGNATURE_MOD_TYPE,
        .variable = TYPE_FLYING,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Flying-type move."),
    },

    [SPECIES_GYARADOS_MEGA] =
    {
        .move = MOVE_THRASH,
        .modification = SIGNATURE_MOD_TYPE,
        .variable = TYPE_DARK,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Dark-type move."),
    },

    [SPECIES_LAPRAS] =
    {
        .move = MOVE_SURF,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_FREEZE,
        .chance = 10,
        .modification2 = SIGNATURE_MOD_SECOND_TYPE,
        .variable2 = TYPE_ICE,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Water and Ice type move\n"
            "that can freeze the target."),
    },

    [SPECIES_DITTO] =
    {
        .move = MOVE_TRANSFORM,
        .modification = SIGNATURE_MOD_PRIORITY,
        .variable = SIGNATURE_PRIORITY_ALWAYS,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Priority move."),
    },

    [SPECIES_AERODACTYL] =
    {
        .move = MOVE_CRUNCH,
        .modification = SIGNATURE_MOD_TYPE,
        .variable = TYPE_ROCK,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Rock type move."),
    },

    [SPECIES_AERODACTYL_MEGA] =
    {
        .move = MOVE_CRUNCH,
        .modification = SIGNATURE_MOD_TYPE,
        .variable = TYPE_ROCK,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 95,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 95 BP Rock type move."),
    },

    [SPECIES_DRAGONITE] =
    {
        .move = MOVE_EXTREME_SPEED,
        .modification = SIGNATURE_MOD_TYPE,
        .variable = TYPE_FLYING,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Flying type move."),
    },

    [SPECIES_ARTICUNO] =
    {
        .move = MOVE_BLIZZARD,
        .modification = SIGNATURE_MOD_SECOND_TYPE,
        .variable = TYPE_FLYING,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SELF_SET_TAILWIND,
        .chance2 = 10,
        .modification3 = SIGNATURE_MOD_ACCURACY,
        .variable3 = 90,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes an Ice and Flying type move\n"
            "that can set up tailwind\n"
            "with 90 accuracy."),
    },

    [SPECIES_ZAPDOS] =
    {
        .move = MOVE_THUNDER,
        .modification = SIGNATURE_MOD_SECOND_TYPE,
        .variable = TYPE_FLYING,
        .modification2 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable2 = SIGNATURE_SECONDARY_EFFECT_CHARGE_USER,
        .chance2 = 10,
        .modification3 = SIGNATURE_MOD_ACCURACY,
        .variable3 = 90,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes an Electric and Flying type move\n"
            "that can charge\n"
            "the user."),
    },

    [SPECIES_MOLTRES] =
    {
        .move = MOVE_HEAT_WAVE,
        .modification = SIGNATURE_MOD_SECOND_TYPE,
        .variable = TYPE_FLYING,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SELF_SET_TAILWIND,
        .chance2 = 10,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Fire and Flying type move that\n"
            "can set up tailwind."),
    },

    // Jotho ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_MEGANIUM] =
    {
        .move = MOVE_PETAL_BLIZZARD,
        .modification = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable = STAT_ATK,
        .differentDescription = TRUE,
        .description = _(
            "The user stirs up a sweet petal\n"
            "blizzard that damages its foes\n"
            "and lowers their Attack stat."),
        .summaryScreen_description = _(
            "Becomes a 90BP move that lowers the target's\n"
            "Attack stat."),
    },

    [SPECIES_TYPHLOSION] =
    {
        .move = MOVE_ERUPTION,
        .modification = SIGNATURE_MOD_OTHER,
        .differentDescription = FALSE,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SET_WEATHER_SUN,
        .chance2 = 10,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Can set up the sun and only goes down to\n60bp"),
    },

    [SPECIES_FERALIGATR] =
    {
        .move = MOVE_JAW_LOCK,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance = 30,
        .modification2 = SIGNATURE_MOD_TYPE,
        .variable2 = TYPE_WATER,
        .differentDescription = TRUE,
        .description = _(
            "It shakes its head and savagely\n"
            "bites its foe preventing it fr-\n"
            "om escape, may cause confusion."),
        .summaryScreen_description = _(
            "Becomes a Water-type move that can confuse\nthe target"),
    },

    [SPECIES_FURRET] =
    {
        .move = MOVE_COIL,
        .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable = STAT_SPEED,
        .modification2 = SIGNATURE_MOD_TYPE, //Only Cosmetic
        .variable2 = TYPE_NORMAL,
        .modification3 = SIGNATURE_MOD_PRIORITY,
        .variable3 = SIGNATURE_PRIORITY_ALWAYS,
        .differentDescription = TRUE,
        .description = _(
            "The user coils up. This raises\n"
            "its Attack, Defense and Speed\n" 
            "stats as well as its accuracy."),
        .summaryScreen_description = _(
            "Now also raises the speed stat and gains\npriority"),
    },

    [SPECIES_AMPHAROS] =
    {
        .move = MOVE_DISCHARGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SET_TERRAIN_ELECTRIC,
        .chance2 = 25,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 90BP move that can Set up electric\nterrain"),
    },

    [SPECIES_AMPHAROS_MEGA] =
    {
        .move = MOVE_DISCHARGE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SET_TERRAIN_ELECTRIC,
        .chance2 = 35,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 90BP move that can Set up electric\nterrain"),
    },

    [SPECIES_SNUBBULL] =
    {
        .move = MOVE_BITE,
        .modification = SIGNATURE_MOD_TYPE,
        .variable = TYPE_FAIRY,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 70,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
        .chance3 = 15,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 70BP Fairy-type move\nthat can infatuate the target"),
    },

    [SPECIES_GRANBULL] =
    {
        .move = MOVE_BITE,
        .modification = SIGNATURE_MOD_TYPE,
        .variable = TYPE_FAIRY,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 80,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
        .chance3 = 20,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 80BP Fairy-type move\nthat can infatuate the target"),
    },

    [SPECIES_DUNSPARCE] =
    {
        .move = MOVE_U_TURN,
        .modification = SIGNATURE_MOD_PRIORITY,
        .variable = SIGNATURE_PRIORITY_ALWAYS,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 80,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_TAUNT,
        .chance3 = 20,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a priority 80BP move\nthat can taunt the target"),
    },

    [SPECIES_DUDUNSPARCE] =
    {
        .move = MOVE_U_TURN,
        .modification = SIGNATURE_MOD_PRIORITY,
        .variable = SIGNATURE_PRIORITY_ALWAYS,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_TAUNT,
        .chance3 = 20,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a priority 90BP move\nthat can taunt the target"),
    },

    [SPECIES_DUDUNSPARCE_THREE_SEGMENT] =
    {
        .move = MOVE_U_TURN,
        .modification = SIGNATURE_MOD_PRIORITY,
        .variable = SIGNATURE_PRIORITY_ALWAYS,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 90,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_TAUNT,
        .chance3 = 20,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a priority 90BP move\nthat can taunt the target"),
    },

    [SPECIES_XATU] =
    {
        .move = MOVE_FUTURE_SIGHT,
        .modification = SIGNATURE_MOD_MODIFY_FIELD,
        .variable = FIELD_SET_TERRAIN_PSYCHIC,
        .chance = 100,
        .modification2 = SIGNATURE_MOD_PRIORITY,
        .variable2 = SIGNATURE_PRIORITY_ALWAYS,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a priority move that sets up psychic\nterrain"),
    },

    [SPECIES_CHINCHOU] =
    {
        .move = MOVE_WATER_PULSE,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
        .argument = TYPE_WATER,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 70,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 70BP move that gives the target the\nWater-type"),
    },

    [SPECIES_LANTURN] =
    {
        .move = MOVE_WATER_PULSE,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
        .argument = TYPE_WATER,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 80,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 80BP move that gives the target the\nWater-type"),
    },

    [SPECIES_SPINARAK] =
    {
        .move = MOVE_TOXIC_THREAD,
        .modification = SIGNATURE_MOD_MODIFY_FIELD,
        .variable = FIELD_OPPONET_SET_STICKY_WEB,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Now also sets up Sticky Web"),
    },

    [SPECIES_ARIADOS] =
    {
        .move = MOVE_TOXIC_THREAD,
        .modification = SIGNATURE_MOD_MODIFY_FIELD,
        .variable = FIELD_OPPONET_SET_STICKY_WEB,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Now also sets up Sticky Web"),
    },

    [SPECIES_SCIZOR] =
    {
        .move = MOVE_BULLET_PUNCH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 65,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 65BP move"),
    },

    [SPECIES_SCIZOR_MEGA] =
    {
        .move = MOVE_BULLET_PUNCH,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 70,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 70BP move"),
    },

    [SPECIES_STEELIX] =
    {
        .move = MOVE_IRON_TAIL,
        .modification = SIGNATURE_MOD_ACCURACY,
        .variable = 95,
        .differentDescription = FALSE,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = SIGNATURE_PRIORITY_CONDITION_WEATHER_SAND,
        .chance2 = 20,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Has a 95 accuracy"),
    },

    [SPECIES_STEELIX_MEGA] =
    {
        .move = MOVE_IRON_TAIL,
        .modification = SIGNATURE_MOD_ACCURACY,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = SIGNATURE_PRIORITY_CONDITION_WEATHER_SAND,
        .chance2 = 35,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 100 accuracy move"),
    },

    [SPECIES_OCTILLERY] =
    {
        .move = MOVE_OCTAZOOKA,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable2 = SIGNATURE_SECONDARY_EFFECT_TAUNT,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 80BP move that taunts the target"),
    },

    [SPECIES_QWILFISH] =
    {
        .move = MOVE_PIN_MISSILE,
        .modification = SIGNATURE_MOD_MODIFY_FIELD,
        .variable = FIELD_OPPONET_SET_TOXIC_SPIKES,
        .chance = 10,
        .modification2 = SIGNATURE_MOD_TYPE,
        .variable2 = TYPE_POISON,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It now has a 10% chance of setting a layer of\n"
            "toxic spikes per hit and becomes a Poison\n"
            "type move."),
    },

    [SPECIES_DELIBIRD] =
    {
        .move = MOVE_PRESENT,
        .modification = SIGNATURE_MOD_TYPE,
        .variable = TYPE_ICE,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SET_WEATHER_HAIL,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It now sets Hail when used and becomes an\n"
            "an Ice-Type move."),
    },

    [SPECIES_BELLOSSOM] =
    {
        .move = MOVE_PETAL_DANCE,
        .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable = STAT_SPEED,
        .chance = 50,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SET_TERRAIN_GRASS,
        .chance2 = 100,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It now sets Grassy terrain when used and has a\n"
            "50% chance of raising the user Speed"),
    },

    [SPECIES_CROBAT] =
    {
        .move = MOVE_CROSS_POISON,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 85,
        .modification2 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable2 = TYPE_STEEL,
        .modification3 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable3 = STAT_DEF,
        .chance3 = 10,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It becomes Super Effective against Steel-types,\n"
            "it's power gets rised to 85 and has a 30%\n"
            "chance of lowering the defense."),
    },

    // Hoenn ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_SCEPTILE] =
    {
        .move = MOVE_LEAF_BLADE,
        .modification = SIGNATURE_MOD_PSS_CHANGE,
        .variable = SPLIT_HIGHEST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It now uses the highest attacking stat to\n"
            "calculate it's damage."),
    },

    [SPECIES_SCEPTILE_MEGA] =
    {
        .move = MOVE_LEAF_BLADE,
        .modification = SIGNATURE_MOD_PSS_CHANGE,
        .variable = SPLIT_HIGHEST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It now uses the highest attacking stat to\n"
            "calculate it's damage."),
    },

    [SPECIES_BLAZIKEN] =
    {
        .move = MOVE_BLAZE_KICK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 95,
        .modification2 = SIGNATURE_MOD_PENETRATING,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Its becomes a move with a power of 95 that\n"
            "ignores the target's defense stat changes."),
    },

    [SPECIES_BLAZIKEN_MEGA] =
    {
        .move = MOVE_BLAZE_KICK,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_PENETRATING,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Its becomes a move with a power of 100 that\n"
            "ignores the target's defense stat changes."),
    },

    [SPECIES_SWAMPERT] =
    {
        .move = MOVE_MUDDY_WATER,
        .modification = SIGNATURE_MOD_PSS_CHANGE,
        .variable = SPLIT_PHYSICAL,
        .modification2 = SIGNATURE_MOD_SECOND_TYPE,
        .variable2 = TYPE_GROUND,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It Becomes a Water and Ground type Physical \n"
            "move."),
    },

    [SPECIES_SWAMPERT_MEGA] =
    {
        .move = MOVE_MUDDY_WATER,
        .modification = SIGNATURE_MOD_PSS_CHANGE,
        .variable = SPLIT_PHYSICAL,
        .modification2 = SIGNATURE_MOD_SECOND_TYPE,
        .variable2 = TYPE_GROUND,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It Becomes a Water and Ground type Physical \n"
            "move."),
    },

    [SPECIES_MIGHTYENA] =
    {
        .move = MOVE_BITE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable2 = STAT_SPEED,
        .chance2 = 30,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It Becomes a move with a power of 80 that has a\n"
            "30% chance of lowering the target's defense."),
    },

    [SPECIES_LINOONE] =
    {
        .move = MOVE_EXTREME_SPEED,
        .modification = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable = STAT_SPEED,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It now raises the Speed stat of the user after\n"
            "using it."),
    },

    [SPECIES_BEAUTIFLY] =
    {
        .move = MOVE_SILVER_WIND,
        .modification = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable = 25,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It has a 25% chance of raising all of the user\n"
            "stats."),
    },

    [SPECIES_DUSTOX] =
    {
        .move = MOVE_OMINOUS_WIND,
        .modification = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable = 25,
        .modification2 = SIGNATURE_MOD_TYPE,
        .variable2 = TYPE_POISON,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It Becomes a Poison-type move that has a 25%\n"
            "chance of raising all of the user stats."),
    },

    [SPECIES_LUDICOLO] =
    {
        .move = MOVE_TEETER_DANCE,
        .modification = SIGNATURE_MOD_MODIFY_FIELD,
        .variable = FIELD_SET_WEATHER_RAIN,
        .chance = 100,
        .modification2 = SIGNATURE_MOD_TYPE,
        .variable2 = TYPE_WATER,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It summons a rain weather after using it and\n"
            "becomes a Water type move."),
    },

    [SPECIES_SHIFTRY] =
    {
        .move = MOVE_LEAF_TORNADO,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable2 = 0,
        .modification3 = SIGNATURE_MOD_PSS_CHANGE,
        .variable3 = SPLIT_PHYSICAL,
        .modification4 = SIGNATURE_MOD_SECOND_TYPE,
        .variable4 = TYPE_FLYING,
        .modification5 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable5 = FIELD_SELF_SET_TAILWIND,
        .chance5 = 20,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It Becomes a Grass and Flying type Physical move\n"
            "with a power of 80 with a 20% chance of setting\n"
            "up Tailwind."),
    },

    [SPECIES_SLAKOTH] =
    {
        .move = MOVE_SLACK_OFF,
        .modification = SIGNATURE_MOD_OTHER,
        .differentDescription = FALSE,
        .modification2 = SIGNATURE_MOD_PRIORITY,
        .variable2 = SIGNATURE_PRIORITY_ALWAYS,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It lets you use another move after using it and\n"
            "now has a higher priority."),
    },

    [SPECIES_SLAKING] =
    {
        .move = MOVE_SLACK_OFF,
        .modification = SIGNATURE_MOD_OTHER,
        .differentDescription = FALSE,
        .modification2 = SIGNATURE_MOD_PRIORITY,
        .variable2 = SIGNATURE_PRIORITY_ALWAYS,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It lets you use another move after using it and\n"
            "now has a higher priority."),
    },

    [SPECIES_NINJASK] =
    {
        .move = MOVE_FURY_CUTTER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_DAMAGE_STAT,
        .variable2 = STAT_SPEED,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It becomes an Speed version of Body Press."),
    },

    [SPECIES_HARIYAMA] =
    {
        .move = MOVE_ARM_THRUST,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance = 15,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It gets a 15% Paralysis chance for each hit."),
    },

    [SPECIES_ZANGOOSE] =
    {
        .move = MOVE_CRUSH_CLAW,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 95,
        .modification2 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable2 = TYPE_POISON,
        .modification3 = SIGNATURE_MOD_PENETRATING,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It becomes Super-Effective against Poison-types\n"
            "and ignores the target's defense stat changes."),
    },

    [SPECIES_SEVIPER] =
    {
        .move = MOVE_POISON_TAIL,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 75,
        .modification2 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable2 = TYPE_NORMAL,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It becomes Super-Effective against Normal-types"),
    },

    [SPECIES_SPINDA] =
    {
        .move = MOVE_DIZZY_PUNCH,
        .modification = SIGNATURE_MOD_PRIORITY,
        .variable = SIGNATURE_PRIORITY_ALWAYS,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It becomes a Priority move when used by Spinda"),
    },

    [SPECIES_LUVDISC] =
    {
        .move = MOVE_DRAINING_KISS,
        .modification = SIGNATURE_MOD_PRIORITY,
        .variable = SIGNATURE_PRIORITY_ALWAYS,
        .modification2 = SIGNATURE_MOD_POWER,
        .variable2 = 75,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It becomes a Priority move when used by Luvdisc"),
    },

    [SPECIES_KECLEON] =
    {
        .move = MOVE_LICK,
        .modification = SIGNATURE_MOD_PRIORITY,
        .variable = SIGNATURE_PRIORITY_ALWAYS,
        .modification2 = SIGNATURE_MOD_OTHER,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "It becomes a Priority move when used by Kecleon"),
    },

    [SPECIES_RELICANTH] =
    {
        .move = MOVE_HEAD_SMASH,
        .modification = SIGNATURE_MOD_PRIORITY,
        .variable = SIGNATURE_PRIORITY_IN_CONDITIONS,
        .chance = SIGNATURE_PRIORITY_CONDITION_WEATHER_RAIN,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Priority move when used by Relicanth"
            "in the rain"),
    },

    [SPECIES_GLALIE] =
    {
        .move = MOVE_ICE_FANG,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable2 = 30,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 80BP move that has a 30%\n"
            "chance of freezing the target."),
    },

    [SPECIES_GLALIE_MEGA] =
    {
        .move = MOVE_ICE_FANG,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 75,
        .modification2 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable2 = 40,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 75BP move that has a 40%\n"
            "chance of freezing the target."),
    },

    [SPECIES_ANORITH] =
    {
        .move = MOVE_FURY_CUTTER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 65,
        .modification2 = SIGNATURE_MOD_SECOND_TYPE,
        .variable2 = TYPE_ROCK,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 30,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Rock-type move that has a 30%\n"
            "chance of raising the user's Speed."),
    },

    [SPECIES_ARMALDO] =
    {
        .move = MOVE_FURY_CUTTER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 85,
        .modification2 = SIGNATURE_MOD_SECOND_TYPE,
        .variable2 = TYPE_ROCK,
        .modification3 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable3 = STAT_SPEED,
        .chance3 = 30,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Rock-type move that has a 30%\n"
            "chance of raising the user's Speed."),
    },

    [SPECIES_LILEEP] =
    {
        .move = MOVE_MEGA_DRAIN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 65,
        .modification2 = SIGNATURE_MOD_TYPE,
        .variable2 = TYPE_ROCK,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
        .chance3 = 20,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Rock-type move that has a 20%\n"
            "chance of inflicting Leech Seed."),
    },

    [SPECIES_CRADILY] =
    {
        .move = MOVE_MEGA_DRAIN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_TYPE,
        .variable2 = TYPE_ROCK,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
        .chance3 = 30,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Rock-type move that has a 30%\n"
            "chance of inflicting Leech Seed."),
    },

    [SPECIES_CASTFORM] =
    {
        .move = MOVE_WEATHER_BALL,
        .modification = SIGNATURE_MOD_PRIORITY,
        .variable = SIGNATURE_PRIORITY_IN_CONDITIONS,
        .chance = SIGNATURE_PRIORITY_CONDITION_WEATHER_ANY,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a priority move when used by Castform"),
    },

    [SPECIES_REGICE] =
    {
        .move = MOVE_ANCIENT_POWER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable2 = 30,
        .modification3 = SIGNATURE_MOD_TYPE,
        .variable3 = TYPE_ICE,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes an Ice-type move that has a 30%\n"
            "chance of raising all of the user stats."),
    },

    [SPECIES_REGIROCK] =
    {
        .move = MOVE_ANCIENT_POWER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable2 = 30,
        .modification3 = SIGNATURE_MOD_PSS_CHANGE,
        .variable3 = SPLIT_PHYSICAL,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Rock-type move that has a 30%\n"
            "chance of raising all of the user stats."),
    },

    [SPECIES_REGISTEEL] =
    {
        .move = MOVE_ANCIENT_POWER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 90,
        .modification2 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable2 = 30,
        .modification3 = SIGNATURE_MOD_TYPE,
        .variable3 = TYPE_STEEL,
        .modification4 = SIGNATURE_MOD_PSS_CHANGE,
        .variable4 = SPLIT_PHYSICAL,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Steel-type move that has a 30%\n"
            "chance of raising all of the user stats."),
    },

    // Sinnoh ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_TORTERRA] =
    {
        .move = MOVE_EARTHQUAKE,
        .modification = SIGNATURE_MOD_SECOND_TYPE,
        .variable = TYPE_GRASS,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SET_TERRAIN_GRASS,
        .chance2 = 25,
        .modification3 = SIGNATURE_MOD_PSS_CHANGE,
        .variable3 = SPLIT_HIGHEST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a part Grass-type move that can\n"
            "set up Grassy Terrain with a 25% chance"),
    },

    [SPECIES_INFERNAPE] =
    {
        .move = MOVE_MACH_PUNCH,
        .modification = SIGNATURE_MOD_SECOND_TYPE,
        .variable = TYPE_FIRE,
        .modification2 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable2 = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance2 = 25,
        .modification3 = SIGNATURE_MOD_PSS_CHANGE,
        .variable3 = SPLIT_HIGHEST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Fire-type move that has a 25%\n"
            "chance of burning the target"),
    },

    [SPECIES_EMPOLEON] =
    {
        .move = MOVE_METAL_CLAW,
        .modification = SIGNATURE_MOD_SECOND_TYPE,
        .variable = TYPE_WATER,
        .modification2 = SIGNATURE_MOD_PENETRATING,
        .modification3 = SIGNATURE_MOD_POWER,
        .variable3 = 80,
        .modification4 = SIGNATURE_MOD_PSS_CHANGE,
        .variable4 = SPLIT_HIGHEST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Fire-type move that has a 25%\n"
            "chance of burning the target"),
    },

    [SPECIES_BIDOOF] =
    {
        .move = MOVE_HYPER_FANG,
        .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable = TYPE_GRASS,
        .modification2 = SIGNATURE_MOD_PENETRATING,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Grass-type move that can penetrate\n"
            "the target's defense stat changes."),
    },

    [SPECIES_BIBAREL] =
    {
        .move = MOVE_HYPER_FANG,
        .modification = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable = TYPE_GRASS,
        .modification2 = SIGNATURE_MOD_PENETRATING,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Grass-type move that can penetrate\n"
            "the target's defense stat changes."),
    },

    [SPECIES_CHATOT] =
    {
        .move = MOVE_CHATTER,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 80,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SELF_SET_TAILWIND,
        .chance2 = 20,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 80BP move that has a 20% chance\n"
            "of setting up Tailwind."),
    },

    [SPECIES_CRANIDOS] =
    {
        .move = MOVE_HEADBUTT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 50,
        .modification2 = SIGNATURE_MOD_TYPE,
        .variable2 = TYPE_ROCK,
        .modification3 = SIGNATURE_MOD_PRIORITY,
        .variable3 = SIGNATURE_PRIORITY_ALWAYS,
        .modification4 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable4 = 0,
        .differentDescription = FALSE, 
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Rock-type move with a power of 50\n"
            "and a priority of +1"),
    },

    [SPECIES_RAMPARDOS] =
    {
        .move = MOVE_HEADBUTT,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 50,
        .modification2 = SIGNATURE_MOD_TYPE,
        .variable2 = TYPE_ROCK,
        .modification3 = SIGNATURE_MOD_PRIORITY,
        .variable3 = SIGNATURE_PRIORITY_ALWAYS,
        .modification4 = SIGNATURE_MOD_EFFECT_CHANCE,
        .variable4 = 0,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Rock-type move with a power of 50\n"
            "and a priority of +1"),
    },

    [SPECIES_CARNIVINE] =
    {
        .move = MOVE_JAW_LOCK,
        .modification = SIGNATURE_MOD_TYPE,
        .variable = TYPE_GRASS,
        .modification2 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable2 = TYPE_BUG,
        .modification3 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable3 = TYPE_FLYING,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Grass-type move that is Super-\n"
            "Effective against Bug and Flying types."),
    },

    [SPECIES_STUNKY] =
    {
        .move = MOVE_GUNK_SHOT,
        .modification = SIGNATURE_MOD_ACCURACY,
        .variable = 95,
        .modification2 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable2 = TYPE_STEEL,
        .modification3 = SIGNATURE_MOD_PSS_CHANGE,
        .variable3 = SPLIT_HIGHEST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 95 accuracy move that hits\n"
            "Steel-types Super-Effectively using\n"
            "the user's highest attack stat,"),
    },

    [SPECIES_SKUNTANK] =
    {
        .move = MOVE_GUNK_SHOT,
        .modification = SIGNATURE_MOD_ACCURACY,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable2 = TYPE_STEEL,
        .modification3 = SIGNATURE_MOD_PSS_CHANGE,
        .variable3 = SPLIT_HIGHEST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 100 accuracy move that hits\n"
            "Steel-types Super-Effectively using\n"
            "the user's highest attack stat,"),
    },

    [SPECIES_CROAGUNK] =
    {
        .move = MOVE_SUCKER_PUNCH,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_TAUNT,
        .chance = 20,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a move with a 20% chance of taunting\n"
            "the target."),
    },

    [SPECIES_TOXICROAK] =
    {
        .move = MOVE_SUCKER_PUNCH,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_TAUNT,
        .chance = 30,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a move with a 30% chance of taunting\n"
            "the target."),
    },

    [SPECIES_LUCARIO] =
    {
        .move = MOVE_AURA_SPHERE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 95,
        .modification2 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable2 = STAT_SPATK,
        .chance2 = 10,
        .modification3 = SIGNATURE_MOD_PSS_CHANGE,
        .variable3 = SPLIT_HIGHEST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 95BP move that raises the user's\n"
            "Special Attack by 1 stage with a 10% chance."),
    },

    [SPECIES_LUCARIO_MEGA] =
    {
        .move = MOVE_AURA_SPHERE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 95,
        .modification2 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable2 = STAT_SPATK,
        .chance2 = 10,
        .modification3 = SIGNATURE_MOD_PSS_CHANGE,
        .variable3 = SPLIT_HIGHEST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 95BP move that raises the user's\n"
            "Special Attack by 1 stage with a 10% chance."),
    },

    [SPECIES_LOPUNNY] =
    {
        .move = MOVE_RETURN,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
        .chance = 30,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a move with a 30% chance of infatuating\n"
            "the target."),
    },

    [SPECIES_LOPUNNY_MEGA] =
    {
        .move = MOVE_RETURN,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_INFATUATION,
        .chance = 30,
        .modification2 = SIGNATURE_MOD_SECOND_TYPE,
        .variable2 = TYPE_FIGHTING,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Fighting-type move with a 30%\n"
            "chance of infatuating the target."),
    },

    [SPECIES_FROSLASS] =
    {
        .move = MOVE_HEX,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_FREEZE,
        .chance = 20,
        .modification2 = SIGNATURE_MOD_PSS_CHANGE,
        .variable2 = SPLIT_HIGHEST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 65BP move with a 20% chance of\n"
            "freezing the target."),
    },

    [SPECIES_SPIRITOMB] =
    {
        .move = MOVE_HEX,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance = 20,
        .modification2 = SIGNATURE_MOD_PSS_CHANGE,
        .variable2 = SPLIT_HIGHEST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 65BP move with a 20% chance of\n"
            "burning the target."),
    },

    // Unova ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_SCRAFTY] =
    {
        .move = MOVE_LOW_KICK,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_TAUNT,
        .chance = 30,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a move with a 30% chance of taunting\n"
            "the target."),
    },

    [SPECIES_SAWK] =
    {
        .move = MOVE_ROCK_SMASH,
        .modification = SIGNATURE_MOD_MODIFY_FIELD,
        .variable = FIELD_OPPONET_SET_STEALTH_ROCK,
        .chance = 50,
        .modification2 = SIGNATURE_MOD_ATTACKER_STAT_UP,
        .variable2 = STAT_ATK,
        .chance2 = 50,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a move with a 50% chance of setting\n"
            "up Stealth Rock and raises the user's Attack\n"
            "by 1 stage with a 50% chance."),
    },

    [SPECIES_JOLTIK] =
    {
        .move = MOVE_ELECTROWEB,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 60,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_OPPONET_SET_STICKY_WEB,
        .chance2 = 50,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 60BP move with a 50% chance of\n"
            "setting up Sticky Web."),
    },

    [SPECIES_GALVANTULA] =
    {
        .move = MOVE_ELECTROWEB,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 70,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_OPPONET_SET_STICKY_WEB,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 70BP move with a 50% chance of\n"
            "setting up Sticky Web."),
    },

    [SPECIES_GOLURK] =
    {
        .move = MOVE_SHADOW_PUNCH,
        .modification = SIGNATURE_PRIORITY_IN_CONDITIONS,
        .variable = SIGNATURE_PRIORITY_CONDITION_TRICK_ROOM,
        .modification2 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable2 = STAT_DEF,
        .chance2 = 30,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a move with a 30% chance of lowering\n"
            "the target's defense in Trick Room."),
    },

    [SPECIES_TYRUNT] =
    {
        .move = MOVE_CRUNCH,
        .modification = SIGNATURE_MOD_TYPE,
        .variable = TYPE_DRAGON,
        .modification2 = SIGNATURE_MOD_PENETRATING,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Dragon-type move that ignores the\n"
            "target's defense stat changes."),
    },

    [SPECIES_TYRANTRUM] =
    {
        .move = MOVE_CRUNCH,
        .modification = SIGNATURE_MOD_TYPE,
        .variable = TYPE_DRAGON,
        .modification2 = SIGNATURE_MOD_PENETRATING,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Dragon-type move that ignores the\n"
            "target's defense stat changes."),
    },

    // Kalos ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_CHESNAUGHT] =
    {
        .move = MOVE_HAMMER_ARM,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 110,
        .modification2 = SIGNATURE_MOD_SECOND_TYPE,
        .variable2 = TYPE_GRASS,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_LEECH_SEED,
        .chance3 = 30,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Power becomes 110 and becomes a Grass-type move\n"
            "with a 30% chance of leeching the target."),
    },

    [SPECIES_DELPHOX] =
    {
        .move = MOVE_MYSTICAL_FIRE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 85,
        .modification2 = SIGNATURE_MOD_SECOND_TYPE,
        .variable2 = TYPE_PSYCHIC,
        .modification3 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable3 = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Power becomes 85 and becomes a Psychic-type move\n"
            "with a 30% chance of confusing the target."),
    },

    [SPECIES_GRENINJA] =
    {
        .move = MOVE_WATER_SHURIKEN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 20,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Power becomes 20"),
    },

    [SPECIES_GRENINJA_ASH] =
    {
        .move = MOVE_WATER_SHURIKEN,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 25,
        .modification2 = SIGNATURE_MOD_OTHER,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Power becomes 25 and always hits 3 times"),
    },

    [SPECIES_TREVENANT] =
    {
        .move = MOVE_WOOD_HAMMER,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
        .argument = TYPE_GHOST,
        .modification2 = SIGNATURE_MOD_SECOND_TYPE,
        .variable2 = TYPE_GHOST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a Ghost-type move with a 30% chance of\n"
            "giving the target the Ghost-type."),
    },

    [SPECIES_GOURGEIST] =
    {
        .move = MOVE_WILL_O_WISP,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
        .argument = TYPE_GHOST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a move with a 30% chance of\n"
            "giving the target the Ghost-type."),
    },

    [SPECIES_GOURGEIST_LARGE] =
    {
        .move = MOVE_WILL_O_WISP,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a move with a 30% chance of\n"
            "giving the target the Ghost-type."),
    },

    [SPECIES_GOURGEIST_SMALL] =
    {
        .move = MOVE_WILL_O_WISP,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a move with a 30% chance of\n"
            "giving the target the Ghost-type."),
    },

    [SPECIES_GOURGEIST_SUPER] =
    {
        .move = MOVE_WILL_O_WISP,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_GIVE_THIRD_TYPE,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a move with a 30% chance of\n"
            "giving the target the Ghost-type."),
    },

    [SPECIES_MALAMAR] =
    {
        .move = MOVE_EXPANDING_FORCE,
        .modification = SIGNATURE_MOD_PSS_CHANGE,
        .variable = SPLIT_HIGHEST,
        .modification2 = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable2 = SIGNATURE_SECONDARY_EFFECT_SLEEP,
        .chance2 = 20,
        .modification3 = SIGNATURE_MOD_POWER,
        .variable3 = 90,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 90 BP move that uses\nthe user's highest attack stat\nand can put the target to sleep."),
    },

    [SPECIES_HONEDGE] =
    {
        .move = MOVE_SACRED_SWORD,
        .modification = SIGNATURE_MOD_SECOND_TYPE,
        .variable = TYPE_GHOST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a part Ghost-type move"),
    },

    [SPECIES_DOUBLADE] =
    {
        .move = MOVE_SACRED_SWORD,
        .modification = SIGNATURE_MOD_SECOND_TYPE,
        .variable = TYPE_GHOST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a part Ghost-type move"),
    },

    [SPECIES_AEGISLASH] =
    {
        .move = MOVE_SACRED_SWORD,
        .modification = SIGNATURE_MOD_SECOND_TYPE,
        .variable = TYPE_GHOST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a part Ghost-type move"),
    },

    [SPECIES_AEGISLASH_BLADE] =
    {
        .move = MOVE_SACRED_SWORD,
        .modification = SIGNATURE_MOD_SECOND_TYPE,
        .variable = TYPE_GHOST,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a part Ghost-type move"),
    },

    [SPECIES_FLORGES] =
    {
        .move = MOVE_MOONBLAST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SET_TERRAIN_MISTY,
        .chance2 = 35,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 100BP move that sets up Misty Terrain\n"
            "and has a 35% chance of lowering the target's\n"
            "Special Attack by 1 stage."),
    },

    [SPECIES_FLORGES_BLUE_FLOWER] =
    {
        .move = MOVE_MOONBLAST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SET_TERRAIN_MISTY,
        .chance2 = 35,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 100BP move that sets up Misty Terrain\n"
            "and has a 35% chance of lowering the target's\n"
            "Special Attack by 1 stage."),
    },

    [SPECIES_FLORGES_ORANGE_FLOWER] =
    {
        .move = MOVE_MOONBLAST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SET_TERRAIN_MISTY,
        .chance2 = 35,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 100BP move that sets up Misty Terrain\n"
            "and has a 35% chance of lowering the target's\n"
            "Special Attack by 1 stage."),
    },

    [SPECIES_FLORGES_WHITE_FLOWER] =
    {
        .move = MOVE_MOONBLAST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SET_TERRAIN_MISTY,
        .chance2 = 35,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 100BP move that sets up Misty Terrain\n"
            "and has a 35% chance of lowering the target's\n"
            "Special Attack by 1 stage."),
    },

    [SPECIES_FLORGES_YELLOW_FLOWER] =
    {
        .move = MOVE_MOONBLAST,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 100,
        .modification2 = SIGNATURE_MOD_MODIFY_FIELD,
        .variable2 = FIELD_SET_TERRAIN_MISTY,
        .chance2 = 35,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 100BP move that sets up Misty Terrain\n"
            "and has a 35% chance of lowering the target's\n"
            "Special Attack by 1 stage."),
    },
    
    // Alola ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_PALOSSAND] =
    {
        .move = MOVE_SHORE_UP,
        .modification = SIGNATURE_MOD_MODIFY_FIELD,
        .variable = FIELD_SET_WEATHER_SANDSTORM,
        .chance2 = 20,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a move that sets up Sandstorm with a\n"
            "20% chance."),
    },

    [SPECIES_WIMPOD] =
    {
        .move = MOVE_AQUA_JET,
        .modification = SIGNATURE_MOD_PENETRATING,
        .modification2 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable2 = STAT_DEF,
        .chance2 = 15,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "May lower the target Defense\n"
            "and ignores it if higher"),
    },

    [SPECIES_GOLISOPOD] =
    {
        .move = MOVE_FIRST_IMPRESSION,
        .modification = SIGNATURE_MOD_PENETRATING,
        .modification2 = SIGNATURE_MOD_TARGET_STAT_DOWN,
        .variable2 = STAT_DEF,
        .chance2 = 30,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "May lower the target Defense\n"
            "and ignores it if higher"),
    },

    [SPECIES_ORICORIO] =
    {
        .move = MOVE_REVELATION_DANCE,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_BURN,
        .chance = 20,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a move with a 20% chance of\n"
            "burning the target."),
    },

    [SPECIES_ORICORIO_POM_POM] =
    {
        .move = MOVE_REVELATION_DANCE,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_PARALYSIS,
        .chance = 20,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a move with a 20% chance of\n"
            "paralyzing the target."),
    },

    [SPECIES_ORICORIO_PA_U] =
    {
        .move = MOVE_REVELATION_DANCE,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_CONFUSION,
        .chance = 20,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a move with a 20% chance of\n"
            "confusing the target."),
    },

    [SPECIES_ORICORIO_SENSU] =
    {
        .move = MOVE_REVELATION_DANCE,
        .modification = SIGNATURE_MOD_SECONDARY_EFFECT,
        .variable = SIGNATURE_SECONDARY_EFFECT_CURSE,
        .chance = 10,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a move with a 10% chance of\n"
            "cursing the target."),
    },

    // Galar ---------------------------------------------------------------------------------------------------------------------------------------------
    [SPECIES_RILLABOOM] =
    {
        .move = MOVE_GRASSY_GLIDE,
        .modification = SIGNATURE_MOD_POWER,
        .variable = 70,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 70BP move."),
    },
    //Paldea
    [SPECIES_TINKATON] =
    {
        .move = MOVE_GIGATON_HAMMER,
        .modification  = SIGNATURE_MOD_POWER,
        .variable      = 130,
        .modification2 = SIGNATURE_MOD_SE_AGAINST_TYPE,
        .variable2     = TYPE_STEEL,
        .differentDescription = FALSE,
        .description = _("Default Description"),
        .summaryScreen_description = _(
            "Becomes a 130 BP move\nand is super effective against Steel-types."),
    },
};