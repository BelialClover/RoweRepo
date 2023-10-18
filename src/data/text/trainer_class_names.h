const u8 gTrainerClassNames[][13] = {
#if GAME_LANGUAGE == LANGUAGE_SPANISH
    [TRAINER_CLASS_PKMN_TRAINER_1] = _("Entrenadora"),
    [TRAINER_CLASS_PKMN_TRAINER_2] = _("Entrenador"),
    [TRAINER_CLASS_HIKER] = _("Montañero"),
    [TRAINER_CLASS_TEAM_AQUA] = _("Equipo Aqua"),
    [TRAINER_CLASS_PKMN_BREEDER] = _("CriaPokémon"),
    [TRAINER_CLASS_COOLTRAINER] = _("Entre. Guay"),
    [TRAINER_CLASS_BIRD_KEEPER] = _("Ornitólogo"),
    [TRAINER_CLASS_COLLECTOR] = _("Pokécolector"),
    [TRAINER_CLASS_SWIMMER_M] = _("Nadador"),
    [TRAINER_CLASS_TEAM_MAGMA] = _("Equipo Magma"),
    [TRAINER_CLASS_EXPERT] = _("Pokéabu"),
    [TRAINER_CLASS_AQUA_ADMIN] = _("Admin. Aqua"),
    [TRAINER_CLASS_BLACK_BELT] = _("Karateka"),
    [TRAINER_CLASS_AQUA_LEADER] = _("Lider Aqua"),
    [TRAINER_CLASS_HEX_MANIAC] = _("Brujita"),
    [TRAINER_CLASS_AROMA_LADY] = _("Srta. Aroma"),
    [TRAINER_CLASS_RUIN_MANIAC] = _("Ruinamaníaco"),
    [TRAINER_CLASS_INTERVIEWER] = _("Periodistas"),
    [TRAINER_CLASS_TUBER_F] = _("Playera"),
    [TRAINER_CLASS_TUBER_M] = _("Playero"),
    [TRAINER_CLASS_LADY] = _("Damisela"),
    [TRAINER_CLASS_BEAUTY] = _("Bella"),
    [TRAINER_CLASS_RICH_BOY] = _("Niño Bien"),
    [TRAINER_CLASS_POKEMANIAC] = _("Pokémaníaco"),
    [TRAINER_CLASS_GUITARIST] = _("Guitarrista"),
    [TRAINER_CLASS_KINDLER] = _("Fogonero"),
    [TRAINER_CLASS_CAMPER] = _("Campista"),
    [TRAINER_CLASS_PICNICKER] = _("Dominguera"),
    [TRAINER_CLASS_BUG_MANIAC] = _("Bichomaníaco"),
    [TRAINER_CLASS_PSYCHIC] = _("Médium"),
    [TRAINER_CLASS_GENTLEMAN] = _("Caballero"),
    [TRAINER_CLASS_ELITE_FOUR] = _("Alto Mando"),
    [TRAINER_CLASS_LEADER] = _("Líder"),
    [TRAINER_CLASS_SCHOOL_KID] = _("Escolar"),
    [TRAINER_CLASS_SR_AND_JR] = _("Estudiantes"),
    [TRAINER_CLASS_WINSTRATE] = _("Estratega"),
    [TRAINER_CLASS_POKEFAN] = _("Pokéfan"),
    [TRAINER_CLASS_YOUNGSTER] = _("Joven"),
    [TRAINER_CLASS_CHAMPION] = _("Campeón"),
    [TRAINER_CLASS_FISHERMAN] = _("Pescador"),
    [TRAINER_CLASS_TRIATHLETE] = _("Triatleta"),
    [TRAINER_CLASS_DRAGON_TAMER] = _("Domadragón"),
    [TRAINER_CLASS_NINJA_BOY] = _("Chico Ninja"),
    [TRAINER_CLASS_BATTLE_GIRL] = _("Luchadora"),
    [TRAINER_CLASS_PARASOL_LADY] = _("Dama Parasol"),
    [TRAINER_CLASS_SWIMMER_F] = _("Nadadora"),
    [TRAINER_CLASS_TWINS] = _("Gemelas"),
    [TRAINER_CLASS_SAILOR] = _("Marinero"),
    [TRAINER_CLASS_COOLTRAINER_2] = _("Entre. Guay"),
    [TRAINER_CLASS_MAGMA_ADMIN] = _("Admin. Magma"),
    [TRAINER_CLASS_PKMN_TRAINER_3] = _("Entrenador"),
    [TRAINER_CLASS_BUG_CATCHER] = _("Cazabichos"),
    [TRAINER_CLASS_PKMN_RANGER] = _("Pokéguarda"),
    [TRAINER_CLASS_MAGMA_LEADER] = _("Líder Magma"),
    [TRAINER_CLASS_LASS] = _("Chica"),
    [TRAINER_CLASS_YOUNG_COUPLE] = _("Pareja Joven"),
    [TRAINER_CLASS_OLD_COUPLE] = _("Pareja Mayor"),
    [TRAINER_CLASS_SIS_AND_BRO] = _("Hermanos"),
    [TRAINER_CLASS_SALON_MAIDEN] = _("Dama Torre"),
    [TRAINER_CLASS_DOME_ACE] = _("Astro Cúpula"),
    [TRAINER_CLASS_PALACE_MAVEN] = _("Amo Palacio"),
    [TRAINER_CLASS_ARENA_TYCOON] = _("Maestra Dojo"),
    [TRAINER_CLASS_FACTORY_HEAD] = _("Jefe Fábrica"),
    [TRAINER_CLASS_PIKE_QUEEN] = _("Reina Sierpe"),
    [TRAINER_CLASS_PYRAMID_KING] = _("Rey Pirámide"),
    [TRAINER_CLASS_RS_PROTAG] = _("Entrenador"),
#else
    [TRAINER_CLASS_PKMN_TRAINER_1] = _("{PKMN} Trainer"),
    [TRAINER_CLASS_PKMN_TRAINER_2] = _("{PKMN} Trainer"),
    [TRAINER_CLASS_HIKER] = _("Hiker"),
    [TRAINER_CLASS_TEAM_AQUA] = _("Team Aqua"),
    [TRAINER_CLASS_PKMN_BREEDER] = _("{PKMN} Breeder"),
    [TRAINER_CLASS_COOLTRAINER] = _("Cooltrainer"),
    [TRAINER_CLASS_BIRD_KEEPER] = _("Bird Keeper"),
    [TRAINER_CLASS_COLLECTOR] = _("Collector"),
    [TRAINER_CLASS_SWIMMER_M] = _("Swimmer♂"),
    [TRAINER_CLASS_TEAM_MAGMA] = _("Team Magma"),
    [TRAINER_CLASS_EXPERT] = _("Expert"),
    [TRAINER_CLASS_AQUA_ADMIN] = _("Aqua Admin"),
    [TRAINER_CLASS_BLACK_BELT] = _("Black Belt"),
    [TRAINER_CLASS_AQUA_LEADER] = _("Aqua Leader"),
    [TRAINER_CLASS_HEX_MANIAC] = _("Hex Maniac"),
    [TRAINER_CLASS_AROMA_LADY] = _("Aroma Lady"),
    [TRAINER_CLASS_RUIN_MANIAC] = _("Ruin Maniac"),
    [TRAINER_CLASS_INTERVIEWER] = _("Interviewer"),
    [TRAINER_CLASS_TUBER_F] = _("Tuber"),
    [TRAINER_CLASS_TUBER_M] = _("Tuber"),
    [TRAINER_CLASS_LADY] = _("Lady"),
    [TRAINER_CLASS_BEAUTY] = _("Beauty"),
    [TRAINER_CLASS_RICH_BOY] = _("Rich Boy"),
    [TRAINER_CLASS_POKEMANIAC] = _("Pokémaniac"),
    [TRAINER_CLASS_GUITARIST] = _("Guitarist"),
    [TRAINER_CLASS_KINDLER] = _("Kindler"),
    [TRAINER_CLASS_CAMPER] = _("Camper"),
    [TRAINER_CLASS_PICNICKER] = _("Picnicker"),
    [TRAINER_CLASS_BUG_MANIAC] = _("Bug Maniac"),
    [TRAINER_CLASS_PSYCHIC] = _("Psychic"),
    [TRAINER_CLASS_GENTLEMAN] = _("Gentleman"),
    [TRAINER_CLASS_ELITE_FOUR] = _("Elite Four"),
    [TRAINER_CLASS_LEADER] = _("Leader"),
    [TRAINER_CLASS_SCHOOL_KID] = _("School Kid"),
    [TRAINER_CLASS_SR_AND_JR] = _("Sr. and Jr."),
    [TRAINER_CLASS_WINSTRATE] = _("Winstrate"),
    [TRAINER_CLASS_POKEFAN] = _("Pokéfan"),
    [TRAINER_CLASS_YOUNGSTER] = _("Youngster"),
    [TRAINER_CLASS_CHAMPION] = _("Champion"),
    [TRAINER_CLASS_FISHERMAN] = _("Fisherman"),
    [TRAINER_CLASS_TRIATHLETE] = _("Triathlete"),
    [TRAINER_CLASS_DRAGON_TAMER] = _("Dragon Tamer"),
    [TRAINER_CLASS_NINJA_BOY] = _("Ninja Boy"),
    [TRAINER_CLASS_BATTLE_GIRL] = _("Battle Girl"),
    [TRAINER_CLASS_PARASOL_LADY] = _("Parasol Lady"),
    [TRAINER_CLASS_SWIMMER_F] = _("Swimmer♀"),
    [TRAINER_CLASS_TWINS] = _("Twins"),
    [TRAINER_CLASS_SAILOR] = _("Sailor"),
    [TRAINER_CLASS_COOLTRAINER_2] = _("Cooltrainer"),
    [TRAINER_CLASS_MAGMA_ADMIN] = _("Magma Admin"),
    [TRAINER_CLASS_PKMN_TRAINER_3] = _("{PKMN} Trainer"),
    [TRAINER_CLASS_BUG_CATCHER] = _("Bug Catcher"),
    [TRAINER_CLASS_PKMN_RANGER] = _("{PKMN} Ranger"),
    [TRAINER_CLASS_MAGMA_LEADER] = _("Magma Leader"),
    [TRAINER_CLASS_LASS] = _("Lass"),
    [TRAINER_CLASS_YOUNG_COUPLE] = _("Young Couple"),
    [TRAINER_CLASS_OLD_COUPLE] = _("Old Couple"),
    [TRAINER_CLASS_SIS_AND_BRO] = _("Sis and Bro"),
    [TRAINER_CLASS_SALON_MAIDEN] = _("Salon Maiden"),
    [TRAINER_CLASS_DOME_ACE] = _("Dome Ace"),
    [TRAINER_CLASS_PALACE_MAVEN] = _("Palace Maven"),
    [TRAINER_CLASS_ARENA_TYCOON] = _("Arena Tycoon"),
    [TRAINER_CLASS_FACTORY_HEAD] = _("Factory Head"),
    [TRAINER_CLASS_PIKE_QUEEN] = _("Pike Queen"),
    [TRAINER_CLASS_PYRAMID_KING] = _("Pyramid King"),
    [TRAINER_CLASS_RS_PROTAG] = _("{PKMN} Trainer"),
	[TRAINER_CLASS_PKMN_MASTER] = _("{PKMN} Master"),
	[TRAINER_CLASS_CRUSH_KIN] = _("Crush Kin"),
	[TRAINER_CLASS_NURSE] = _("Nurse"),
#endif
};
