//Exiolite Special Stats
#define SPECIAL_FORM_PARTNER_EEVEE   SPECIES_EEVEE
#define SPECIAL_FORM_PARTNER_PIKACHU SPECIES_PIKACHU

const struct BaseStats gSpecialFormsBaseStats[NUM_SPECIES] = {
	[SPECIAL_FORM_PARTNER_EEVEE] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpAttack  = 65,
        .baseSpDefense = 85,
		.baseSpeed     = 75,
    },
	[SPECIAL_FORM_PARTNER_PIKACHU] =
    {
        .baseHP        = 45,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpAttack  = 75,
        .baseSpDefense = 60,
		.baseSpeed     = 120,
    },
    [SPECIES_VIGOROTH] =
    {
        .baseHP        = 120,
        .baseAttack    = 95,
        .baseDefense   = 100,
        .baseSpAttack  = 95,
        .baseSpDefense = 65,
		.baseSpeed     = 100,
    },
};

//Delta Boost Special Stats
const struct BaseStats gDeltaBaseStats[NUM_SPECIES] = {
	[SPECIAL_FORM_PARTNER_EEVEE] =
    {
        .baseHP        = 65,
        .baseAttack    = 125, //+50
        .baseDefense   = 85,  //+15
        .baseSpAttack  = 65,
        .baseSpDefense = 85,
		.baseSpeed     = 110, //+35
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .abilities = {ABILITY_FLUFFY, ABILITY_FLUFFY},
        .abilityHidden = ABILITY_FLUFFY,
    },
	[SPECIAL_FORM_PARTNER_PIKACHU] =
    {
        .baseHP        = 45,
        .baseAttack    = 80,
        .baseDefense   = 70,  //+20
        .baseSpAttack  = 125, //+50
        .baseSpDefense = 70,  //+10
		.baseSpeed     = 140, //+20
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .abilities = {ABILITY_TRANSISTOR, ABILITY_TRANSISTOR},
        .abilityHidden = ABILITY_TRANSISTOR,
    },
    [SPECIES_NIDOKING] =
    {
        .baseHP        = 81,
        .baseAttack    = 142, //+40
        .baseDefense   = 107, //+30
        .baseSpAttack  = 75,  //-10
        .baseSpDefense = 85,  //+10
        .baseSpeed     = 115, //+30
        .type1 = TYPE_POISON,
        .type2 = TYPE_GROUND,
        .abilities = {ABILITY_POISONATE, ABILITY_POISONATE},
        .abilityHidden = ABILITY_POISONATE,
    },
    [SPECIES_NIDOQUEEN] =
    {
        .baseHP        = 90,
        .baseAttack    = 72,  //-20
        .baseDefense   = 87,
        .baseSpAttack  = 145, //+70
        .baseSpDefense = 105, //+20
        .baseSpeed     = 106, //+30
        .type1 = TYPE_POISON,
        .type2 = TYPE_GROUND,
        .abilities = {ABILITY_SHEER_FORCE, ABILITY_SHEER_FORCE},
        .abilityHidden = ABILITY_SHEER_FORCE,
    },
    [SPECIES_NINETALES] =
    {
        .baseHP        = 73,
        .baseAttack    = 76,
        .baseDefense   = 75,
        .baseSpAttack  = 130, //+49
        .baseSpDefense = 135, //+35
        .baseSpeed     = 116, //+16
        .type1 = TYPE_FIRE,
        .type2 = TYPE_GHOST,
        .abilities = {ABILITY_CURSED_FLAME, ABILITY_CURSED_FLAME},
        .abilityHidden = ABILITY_CURSED_FLAME,
    },
    [SPECIES_GOLEM] =
    {
        .baseHP        = 80,
        .baseAttack    = 140, //+20
        .baseDefense   = 160, //+30
        .baseSpAttack  = 75,  //+20
        .baseSpDefense = 95,  //+30
        .baseSpeed     = 45,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .abilities = {ABILITY_FILTER, ABILITY_FILTER},
        .abilityHidden = ABILITY_FILTER,
    },
    [SPECIES_TYPHLOSION_MEGA] =
    {
        .baseHP        = 78,
        .baseAttack    = 94,
        .baseDefense   = 98,
        .baseSpAttack  = 150,
        .baseSpDefense = 105,
        .baseSpeed     = 110,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .abilities = {ABILITY_FLAMING_SOUL, ABILITY_FLAMING_SOUL},
        .abilityHidden = ABILITY_FLAMING_SOUL,
    },
    [SPECIES_TYPHLOSION_HISUI] =
    {
        .baseHP        = 73,
        .baseAttack    = 89,
        .baseDefense   = 109,
        .baseSpAttack  = 149,
        .baseSpDefense = 115,
        .baseSpeed     = 99,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_GHOST,
        .abilities = {ABILITY_CURSED_FLAME, ABILITY_CURSED_FLAME},
        .abilityHidden = ABILITY_CURSED_FLAME,
    },
    [SPECIES_LEDIAN] =
    {
        .baseHP        = 60,  //
        .baseAttack    = 95,  //
        .baseDefense   = 85,  //+25
        .baseSpAttack  = 35,  //
        .baseSpDefense = 160, //+50
        .baseSpeed     = 110, //+25
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .abilities = {ABILITY_SHINING_FIST, ABILITY_SHINING_FIST},
        .abilityHidden = ABILITY_SHINING_FIST,
    },
    [SPECIES_MAGCARGO] =
    {
        .baseHP        = 80,
		.baseAttack    = 65,  //+25
        .baseDefense   = 140, //+30
        .baseSpAttack  = 120, //+30
		.baseSpDefense = 125, //+30
        .baseSpeed     = 30,  //-15
        .type1 = TYPE_FIRE,
        .type2 = TYPE_ROCK,
        .abilities = {ABILITY_EVAPORATE, ABILITY_EVAPORATE},
        .abilityHidden = ABILITY_EVAPORATE,
    },
    [SPECIES_VIGOROTH] =
    {
        .baseHP        = 120,
        .baseAttack    = 145, //+50
        .baseDefense   = 120, //+20
        .baseSpAttack  = 95,
        .baseSpDefense = 85,  //+10
		.baseSpeed     = 120, //+20
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .abilities = {ABILITY_SCRAPPY, ABILITY_SCRAPPY},
        .abilityHidden = ABILITY_SCRAPPY,
    },
    [SPECIES_TORTERRA] =
    {
        .baseHP        = 100,
        .baseAttack    = 150, //+40
        .baseDefense   = 135, //+30
        .baseSpAttack  = 75,
        .baseSpDefense = 115,  //+30
        .baseSpeed     = 60,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GROUND,
        .abilities = {ABILITY_GRAVITATION, ABILITY_GRAVITATION},
        .abilityHidden = ABILITY_GRAVITATION,
    },
    [SPECIES_INFERNAPE] =
    {
        .baseHP        = 76,
        .baseAttack    = 140, //+40
        .baseDefense   = 71,
        .baseSpAttack  = 140, //+40
        .baseSpDefense = 71,
        .baseSpeed     = 140, //+20
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIGHTING,
        .abilities = {ABILITY_TECHNICIAN, ABILITY_TECHNICIAN},
        .abilityHidden = ABILITY_TECHNICIAN,
    },
    [SPECIES_EMPOLEON] =
    {
        .baseHP        = 84,
        .baseAttack    = 96,  //+10
        .baseDefense   = 118, //+30
        .baseSpAttack  = 151, //+40
        .baseSpDefense = 131, //+30
        .baseSpeed     = 60,
        .type1 = TYPE_WATER,
        .type2 = TYPE_STEEL,
        .abilities = {ABILITY_SUPREME_OVERLORD, ABILITY_SUPREME_OVERLORD},
        .abilityHidden = ABILITY_SUPREME_OVERLORD,
    },
    [SPECIES_PACHIRISU] =
    {
        .baseHP        = 70,  //
        .baseAttack    = 115, //+45
        .baseDefense   = 70,  //+10
        .baseSpAttack  = 40,  //
        .baseSpDefense = 110, //+25
        .baseSpeed     = 125, //+20
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .abilities = {ABILITY_SHOCKING_MAW, ABILITY_SHOCKING_MAW},
        .abilityHidden = ABILITY_SHOCKING_MAW,
    },
    [SPECIES_RAMPARDOS] =
    {
        .baseHP        = 97,
        .baseAttack    = 165,
        .baseDefense   = 90,  //+30
        .baseSpAttack  = 65,
        .baseSpDefense = 70,  //+20
        .baseSpeed     = 108, //+50
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .abilities = {ABILITY_SHEER_FORCE, ABILITY_SHEER_FORCE},
        .abilityHidden = ABILITY_SHEER_FORCE,
    },
    [SPECIES_BASTIODON] =
    {
        .baseHP        = 60,
        .baseAttack    = 62,  //+10
        .baseDefense   = 188, //+20
        .baseSpAttack  = 67,  //+20
        .baseSpDefense = 188, //+50
        .baseSpeed     = 30,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_STEEL,
        .abilities = {ABILITY_FILTER, ABILITY_FILTER},
        .abilityHidden = ABILITY_FILTER,
    },
    [SPECIES_SERPERIOR] =
    {
        .baseHP        = 75,
        .baseAttack    = 65,
        .baseDefense   = 95,
        .baseSpAttack  = 125,
        .baseSpDefense = 110,
        .baseSpeed     = 158,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .abilities = {ABILITY_CONTRARY, ABILITY_CONTRARY},
        .abilityHidden = ABILITY_CONTRARY,
    },
    [SPECIES_SAMUROTT] =
    {
        .baseHP        = 95,
        .baseAttack    = 70,
        .baseDefense   = 105,
        .baseSpAttack  = 148,
        .baseSpDefense = 80,
        .baseSpeed     = 130,
        .type1 = TYPE_WATER,
        .type2 = TYPE_FIGHTING,
        .abilities = {ABILITY_MYSTIC_BLADES, ABILITY_MYSTIC_BLADES},
        .abilityHidden = ABILITY_MYSTIC_BLADES,
    },
    [SPECIES_SAMUROTT_HISUI] =
    {
        .baseHP        = 90,
        .baseAttack    = 148,
        .baseDefense   = 80,
        .baseSpAttack  = 70,
        .baseSpDefense = 110,
        .baseSpeed     = 130,
        .type1 = TYPE_WATER,
        .type2 = TYPE_DARK,
        .abilities = {ABILITY_SHARPNESS, ABILITY_SHARPNESS},
        .abilityHidden = ABILITY_SHARPNESS,
    },
    [SPECIES_DECIDUEYE] =
    {
        .baseHP        = 78,
        .baseAttack    = 147, //+40
        .baseDefense   = 95,  //+20
        .baseSpAttack  = 80,  //-20
        .baseSpDefense = 120, //+20
        .baseSpeed     = 110, //+40
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GHOST,
        .abilities = {ABILITY_INFILTRATOR, ABILITY_INFILTRATOR},
        .abilityHidden = ABILITY_INFILTRATOR,
    },
    [SPECIES_DECIDUEYE_HISUI] =
    {
        .baseHP        = 88,
        .baseAttack    = 152, //+40
        .baseDefense   = 110, //+30
        .baseSpAttack  = 75,  //-20
        .baseSpDefense = 115, //+20
        .baseSpeed     = 80,  //+20
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FIGHTING,
        .abilities = {ABILITY_SNIPER, ABILITY_SNIPER},
        .abilityHidden = ABILITY_SNIPER,
    },
    [SPECIES_INCINEROAR] =
    {
        .baseHP        = 95,
        .baseAttack    = 150, //+35
        .baseDefense   = 130, //+40
        .baseSpAttack  = 80,
        .baseSpDefense = 120, //+30
        .baseSpeed     = 60,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_DARK,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_INTIMIDATE},
        .abilityHidden = ABILITY_INTIMIDATE,
    },
    [SPECIES_PRIMARINA] =
    {
        .baseHP        = 80,
        .baseAttack    = 74,
        .baseDefense   = 104, //+30
        .baseSpAttack  = 156, //+30
        .baseSpDefense = 146, //+30
        .baseSpeed     = 70,  //+10
        .type1 = TYPE_WATER,
        .type2 = TYPE_FAIRY,
        .abilities = {ABILITY_LIQUID_VOICE, ABILITY_LIQUID_VOICE},
        .abilityHidden = ABILITY_LIQUID_VOICE,
    },
    [SPECIES_MEOWSCARADA] =
    {
        .baseHP        =  81,
        .baseAttack    =  140, //+30
        .baseDefense   =  80,  //+10
        .baseSpAttack  =  101, //+20
        .baseSpDefense =  90,  //+20
        .baseSpeed     =  143, //+20
        .type1 = TYPE_GRASS,
        .type2 = TYPE_DARK,
        .abilities = {ABILITY_PROTEAN, ABILITY_PROTEAN},
        .abilityHidden = ABILITY_PROTEAN,
    },
    [SPECIES_SKELEDIRGE] =
    {
        .baseHP        =  104,
        .baseAttack    =  75,
        .baseDefense   =  130, //+30
        .baseSpAttack  =  140, //+30
        .baseSpDefense =  100, //+20
        .baseSpeed     =  86,  //+20
        .type1 = TYPE_FIRE,
        .type2 = TYPE_GHOST,
        .abilities = {ABILITY_EERIE_VOICE, ABILITY_EERIE_VOICE},
        .abilityHidden = ABILITY_EERIE_VOICE,
    },
    [SPECIES_QUAQUAVAL] =
    {
        .baseHP        =  85,
        .baseAttack    =  140, //+20
        .baseDefense   =  110, //+30
        .baseSpAttack  =  105, //+20
        .baseSpDefense =  75,
        .baseSpeed     =  120, //+30
        .type1 = TYPE_WATER,
        .type2 = TYPE_FIGHTING,
        .abilities = {ABILITY_MOXIE, ABILITY_MOXIE},
        .abilityHidden = ABILITY_MOXIE,
    },
    [SPECIES_VANILLUXE] =
    {
        .baseHP        = 91,
        .baseAttack    = 84,  //+9
        .baseDefense   = 115, //+30
        .baseSpAttack  = 160, //+60
        .baseSpDefense = 125, //+30
        .baseSpeed     = 70,  //-9
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .abilities = {ABILITY_ICE_ARMOR, ABILITY_ICE_ARMOR},
        .abilityHidden = ABILITY_ICE_ARMOR,
    },
    [SPECIES_SHEDINJA] =
    {
        .baseHP        = 1,
        .baseAttack    = 140, //+40
        .baseDefense   = 45,
        .baseSpAttack  = 70, //+10
        .baseSpDefense = 30,
        .baseSpeed     = 120, //+50
        .type1 = TYPE_BUG,
        .type2 = TYPE_GHOST,
        .abilities = {ABILITY_WONDER_GUARD, ABILITY_WONDER_GUARD},
        .abilityHidden = ABILITY_WONDER_GUARD,
    },
    [SPECIES_URSALUNA] =
    {
        .baseHP        = 130,
        .baseAttack    = 160, //+20
        .baseDefense   = 135, //+30
        .baseSpAttack  = 65,  //+20
        .baseSpDefense = 110, //+30
		.baseSpeed     = 50,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_NORMAL,
        .abilities = {ABILITY_SCRAPPY, ABILITY_SCRAPPY},
        .abilityHidden = ABILITY_SCRAPPY,
    },
    [SPECIES_URSALUNA_BLOODMOON] =
    {
        .baseHP        = 113,
        .baseAttack    = 95,  //+15
        .baseDefense   = 150, //+30
        .baseSpAttack  = 160, //+25
        .baseSpDefense = 95,  //30
        .baseSpeed     = 52,
        .abilities = {ABILITY_MINDS_EYE, ABILITY_MINDS_EYE},
        .abilityHidden = ABILITY_MINDS_EYE,
    },
    [SPECIES_HYDREIGON] =
    {
        .baseHP        = 92,
        .baseAttack    = 110, //+5
        .baseDefense   = 110, //+20
        .baseSpAttack  = 150, //+25
        .baseSpDefense = 110, //+20
        .baseSpeed     = 128, //+30
        .type1 = TYPE_DARK,
        .type2 = TYPE_DRAGON,
        .abilities = {ABILITY_DARK_AURA, ABILITY_DARK_AURA},
		.abilityHidden = ABILITY_DARK_AURA,
    },
    [SPECIES_GOODRA] =
    {
        .baseHP        = 90,
        .baseAttack    = 100, 
        .baseDefense   = 90,  //+20
        .baseSpAttack  = 140, //+30
        .baseSpDefense = 180, //+30
        .baseSpeed     = 100, //+20
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_POISON,
        .abilities = {ABILITY_GOOEY, ABILITY_GOOEY},
        .abilityHidden = ABILITY_GOOEY,
    },
    [SPECIES_GOODRA_HISUI] =
    {
        .baseHP        = 80,
        .baseAttack    = 120, //+20
        .baseDefense   = 180, //+30
        .baseSpAttack  = 140, //+30
        .baseSpDefense = 120, //+20
        .baseSpeed     = 60,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_STEEL,
        .abilities = {ABILITY_GOOEY, ABILITY_GOOEY},
        .abilityHidden = ABILITY_GOOEY,
    },
    [SPECIES_KOMMO_O] =
    {
        .baseHP        = 75,
        .baseAttack    = 140, //+30
        .baseDefense   = 155, //+30
        .baseSpAttack  = 120, //+20
        .baseSpDefense = 105,
        .baseSpeed     = 105,  //+20
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_FIGHTING,
        .abilities = {ABILITY_UNSEEN_FIST, ABILITY_UNSEEN_FIST},
        .abilityHidden = ABILITY_UNSEEN_FIST,
    },
    [SPECIES_DRAGAPULT] =
    {
        .baseHP        = 88,
        .baseAttack    = 125, //+5
        .baseDefense   = 95,  //+20
        .baseSpAttack  = 145, //+45
        .baseSpDefense = 95,  //+20
        .baseSpeed     = 152, //+10
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_GHOST,
        .abilities = {ABILITY_PARENTAL_BOND, ABILITY_PARENTAL_BOND},
        .abilityHidden = ABILITY_PARENTAL_BOND,
    },
    [SPECIES_BIDOOF] =
    {
        .baseHP        = 79,
        .baseAttack    = 125, //+40
        .baseDefense   = 80,  //+20
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .baseSpeed     = 111, //+40
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_WATER,
        .abilities = {ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY},
        .abilityHidden = ABILITY_ADAPTABILITY,
    },
    [SPECIES_MAGIKARP] =
    {
        .baseHP        = 95,
        .baseAttack    = 155,
        .baseDefense   = 109,
        .baseSpAttack  = 70,
        .baseSpDefense = 100,
        .baseSpeed     = 111,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER},
        .abilityHidden = ABILITY_MOLD_BREAKER,
    },
};
