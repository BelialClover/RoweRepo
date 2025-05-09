Common_EventScript_Wild_Lapras::
# 3 "data/scripts/wild_mon_scripts.pory"
	lock
# 4 "data/scripts/wild_mon_scripts.pory"
	faceplayer
# 5 "data/scripts/wild_mon_scripts.pory"
	playmoncry SPECIES_LAPRAS, 2
# 6 "data/scripts/wild_mon_scripts.pory"
	setwildbattle SPECIES_LAPRAS, 2, ITEM_WATER_GEM
# 7 "data/scripts/wild_mon_scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 8 "data/scripts/wild_mon_scripts.pory"
	dowildbattle
# 9 "data/scripts/wild_mon_scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 10 "data/scripts/wild_mon_scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 11 "data/scripts/wild_mon_scripts.pory"
	switch VAR_RESULT
# 12 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_Wild_Lapras_3
# 19 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_RAN, Common_EventScript_Wild_Lapras_4
# 20 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_WON, Common_EventScript_Wild_Lapras_4
# 21 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_Wild_Lapras_4
Common_EventScript_Wild_Lapras_1:
# 31 "data/scripts/wild_mon_scripts.pory"
	release
	end

Common_EventScript_Wild_Lapras_3:
# 13 "data/scripts/wild_mon_scripts.pory"
	setflag FLAG_DAILY_WILD_LAPRAS
# 14 "data/scripts/wild_mon_scripts.pory"
	setweather WEATHER_NONE
# 15 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 16 "data/scripts/wild_mon_scripts.pory"
	removeobject VAR_LAST_TALKED
# 17 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Common_EventScript_Wild_Lapras_1

Common_EventScript_Wild_Lapras_4:
# 22 "data/scripts/wild_mon_scripts.pory"
	setvar VAR_0x8004, SPECIES_LAPRAS
# 23 "data/scripts/wild_mon_scripts.pory"
	setweather WEATHER_NONE
# 24 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 25 "data/scripts/wild_mon_scripts.pory"
	removeobject VAR_LAST_TALKED
# 26 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 27 "data/scripts/wild_mon_scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 28 "data/scripts/wild_mon_scripts.pory"
	msgbox Common_EventScript_Wild_Lapras_Text_0, MSGBOX_DEFAULT
	goto Common_EventScript_Wild_Lapras_1


Common_EventScript_Mesprit_Encounter::
# 37 "data/scripts/wild_mon_scripts.pory"
	lock
# 38 "data/scripts/wild_mon_scripts.pory"
	faceplayer
# 39 "data/scripts/wild_mon_scripts.pory"
	playmoncry SPECIES_MESPRIT, 2
# 40 "data/scripts/wild_mon_scripts.pory"
	msgbox Common_EventScript_Mesprit_Encounter_Text_0
# 43 "data/scripts/wild_mon_scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 44 "data/scripts/wild_mon_scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 2
# 45 "data/scripts/wild_mon_scripts.pory"
	setwildbattlewithcustommoves SPECIES_MESPRIT, 75, ITEM_LEFTOVERS, MOVE_PSYSHOCK, MOVE_DAZZLING_GLEAM, MOVE_GRASS_KNOT, MOVE_POWER_GEM, 0, NATURE_TIMID
# 46 "data/scripts/wild_mon_scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 47 "data/scripts/wild_mon_scripts.pory"
	dowildbattle
# 48 "data/scripts/wild_mon_scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 49 "data/scripts/wild_mon_scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 50 "data/scripts/wild_mon_scripts.pory"
	switch VAR_RESULT
# 51 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_Mesprit_Encounter_3
# 58 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_RAN, Common_EventScript_Mesprit_Encounter_4
# 59 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_WON, Common_EventScript_Mesprit_Encounter_4
# 60 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_Mesprit_Encounter_4
Common_EventScript_Mesprit_Encounter_1:
# 70 "data/scripts/wild_mon_scripts.pory"
	release
	end

Common_EventScript_Mesprit_Encounter_3:
# 52 "data/scripts/wild_mon_scripts.pory"
	setflag FLAG_DEFEATED_MESPRIT
# 53 "data/scripts/wild_mon_scripts.pory"
	setweather WEATHER_NONE
# 54 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 55 "data/scripts/wild_mon_scripts.pory"
	removeobject VAR_LAST_TALKED
# 56 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Common_EventScript_Mesprit_Encounter_1

Common_EventScript_Mesprit_Encounter_4:
# 61 "data/scripts/wild_mon_scripts.pory"
	setvar VAR_0x8004, SPECIES_MESPRIT
# 62 "data/scripts/wild_mon_scripts.pory"
	setweather WEATHER_NONE
# 63 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 64 "data/scripts/wild_mon_scripts.pory"
	removeobject VAR_LAST_TALKED
# 65 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 66 "data/scripts/wild_mon_scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 67 "data/scripts/wild_mon_scripts.pory"
	msgbox Common_EventScript_Mesprit_Encounter_Text_1, MSGBOX_DEFAULT
	goto Common_EventScript_Mesprit_Encounter_1


Common_EventScript_Cobalion_Encounter::
# 75 "data/scripts/wild_mon_scripts.pory"
	lock
# 76 "data/scripts/wild_mon_scripts.pory"
	faceplayer
# 77 "data/scripts/wild_mon_scripts.pory"
	playmoncry SPECIES_COBALION, 2
# 78 "data/scripts/wild_mon_scripts.pory"
	msgbox Common_EventScript_Cobalion_Encounter_Text_0
# 81 "data/scripts/wild_mon_scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 82 "data/scripts/wild_mon_scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 2
# 83 "data/scripts/wild_mon_scripts.pory"
	setwildbattlewithcustommoves SPECIES_COBALION, 75, ITEM_STEEL_GEM, MOVE_POISON_JAB, MOVE_SACRED_SWORD, MOVE_IRON_HEAD, MOVE_ROCK_SLIDE, 0, NATURE_ADAMANT
# 84 "data/scripts/wild_mon_scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 85 "data/scripts/wild_mon_scripts.pory"
	dowildbattle
# 86 "data/scripts/wild_mon_scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 87 "data/scripts/wild_mon_scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 88 "data/scripts/wild_mon_scripts.pory"
	switch VAR_RESULT
# 89 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_Cobalion_Encounter_3
# 96 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_RAN, Common_EventScript_Cobalion_Encounter_4
# 97 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_WON, Common_EventScript_Cobalion_Encounter_4
# 98 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_Cobalion_Encounter_4
Common_EventScript_Cobalion_Encounter_1:
# 108 "data/scripts/wild_mon_scripts.pory"
	release
	end

Common_EventScript_Cobalion_Encounter_3:
# 90 "data/scripts/wild_mon_scripts.pory"
	setflag FLAG_DEFEATED_COBALION
# 91 "data/scripts/wild_mon_scripts.pory"
	setweather WEATHER_NONE
# 92 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 93 "data/scripts/wild_mon_scripts.pory"
	removeobject VAR_LAST_TALKED
# 94 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Common_EventScript_Cobalion_Encounter_1

Common_EventScript_Cobalion_Encounter_4:
# 99 "data/scripts/wild_mon_scripts.pory"
	setvar VAR_0x8004, SPECIES_COBALION
# 100 "data/scripts/wild_mon_scripts.pory"
	setweather WEATHER_NONE
# 101 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 102 "data/scripts/wild_mon_scripts.pory"
	removeobject VAR_LAST_TALKED
# 103 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 104 "data/scripts/wild_mon_scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 105 "data/scripts/wild_mon_scripts.pory"
	msgbox Common_EventScript_Cobalion_Encounter_Text_1, MSGBOX_DEFAULT
	goto Common_EventScript_Cobalion_Encounter_1


Common_EventScript_Virizion_Encounter::
# 113 "data/scripts/wild_mon_scripts.pory"
	lock
# 114 "data/scripts/wild_mon_scripts.pory"
	faceplayer
# 115 "data/scripts/wild_mon_scripts.pory"
	playmoncry SPECIES_VIRIZION, 2
# 116 "data/scripts/wild_mon_scripts.pory"
	msgbox Common_EventScript_Virizion_Encounter_Text_0
# 119 "data/scripts/wild_mon_scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 120 "data/scripts/wild_mon_scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 2
# 121 "data/scripts/wild_mon_scripts.pory"
	setwildbattlewithcustommoves SPECIES_VIRIZION, 75, ITEM_GRASS_GEM, MOVE_LEAF_BLADE, MOVE_SACRED_SWORD, MOVE_X_SCISSOR, MOVE_STONE_EDGE, 0, NATURE_ADAMANT
# 122 "data/scripts/wild_mon_scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 123 "data/scripts/wild_mon_scripts.pory"
	dowildbattle
# 124 "data/scripts/wild_mon_scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 125 "data/scripts/wild_mon_scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 126 "data/scripts/wild_mon_scripts.pory"
	switch VAR_RESULT
# 127 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_Virizion_Encounter_3
# 134 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_RAN, Common_EventScript_Virizion_Encounter_4
# 135 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_WON, Common_EventScript_Virizion_Encounter_4
# 136 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_Virizion_Encounter_4
Common_EventScript_Virizion_Encounter_1:
# 146 "data/scripts/wild_mon_scripts.pory"
	release
	end

Common_EventScript_Virizion_Encounter_3:
# 128 "data/scripts/wild_mon_scripts.pory"
	setflag FLAG_DEFEATED_VIRIZION
# 129 "data/scripts/wild_mon_scripts.pory"
	setweather WEATHER_NONE
# 130 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 131 "data/scripts/wild_mon_scripts.pory"
	removeobject VAR_LAST_TALKED
# 132 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Common_EventScript_Virizion_Encounter_1

Common_EventScript_Virizion_Encounter_4:
# 137 "data/scripts/wild_mon_scripts.pory"
	setvar VAR_0x8004, SPECIES_VIRIZION
# 138 "data/scripts/wild_mon_scripts.pory"
	setweather WEATHER_NONE
# 139 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 140 "data/scripts/wild_mon_scripts.pory"
	removeobject VAR_LAST_TALKED
# 141 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 142 "data/scripts/wild_mon_scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 143 "data/scripts/wild_mon_scripts.pory"
	msgbox Common_EventScript_Virizion_Encounter_Text_1, MSGBOX_DEFAULT
	goto Common_EventScript_Virizion_Encounter_1


Common_EventScript_Keldeo_Encounter::
# 151 "data/scripts/wild_mon_scripts.pory"
	lock
# 152 "data/scripts/wild_mon_scripts.pory"
	faceplayer
# 153 "data/scripts/wild_mon_scripts.pory"
	playmoncry SPECIES_KELDEO, 2
# 154 "data/scripts/wild_mon_scripts.pory"
	msgbox Common_EventScript_Keldeo_Encounter_Text_0
# 157 "data/scripts/wild_mon_scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 158 "data/scripts/wild_mon_scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 2
# 159 "data/scripts/wild_mon_scripts.pory"
	setwildbattlewithcustommoves SPECIES_KELDEO, 75, ITEM_WATER_GEM, MOVE_SECRET_SWORD, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_AIR_SLASH, 0, NATURE_TIMID
# 160 "data/scripts/wild_mon_scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 161 "data/scripts/wild_mon_scripts.pory"
	dowildbattle
# 162 "data/scripts/wild_mon_scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 163 "data/scripts/wild_mon_scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 164 "data/scripts/wild_mon_scripts.pory"
	switch VAR_RESULT
# 165 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_Keldeo_Encounter_3
# 172 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_RAN, Common_EventScript_Keldeo_Encounter_4
# 173 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_WON, Common_EventScript_Keldeo_Encounter_4
# 174 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_Keldeo_Encounter_4
Common_EventScript_Keldeo_Encounter_1:
# 184 "data/scripts/wild_mon_scripts.pory"
	release
	end

Common_EventScript_Keldeo_Encounter_3:
# 166 "data/scripts/wild_mon_scripts.pory"
	setflag FLAG_DEFEATED_KELDEO
# 167 "data/scripts/wild_mon_scripts.pory"
	setweather WEATHER_NONE
# 168 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 169 "data/scripts/wild_mon_scripts.pory"
	removeobject VAR_LAST_TALKED
# 170 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Common_EventScript_Keldeo_Encounter_1

Common_EventScript_Keldeo_Encounter_4:
# 175 "data/scripts/wild_mon_scripts.pory"
	setvar VAR_0x8004, SPECIES_KELDEO
# 176 "data/scripts/wild_mon_scripts.pory"
	setweather WEATHER_NONE
# 177 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 178 "data/scripts/wild_mon_scripts.pory"
	removeobject VAR_LAST_TALKED
# 179 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 180 "data/scripts/wild_mon_scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 181 "data/scripts/wild_mon_scripts.pory"
	msgbox Common_EventScript_Keldeo_Encounter_Text_1, MSGBOX_DEFAULT
	goto Common_EventScript_Keldeo_Encounter_1


Common_EventScript_Victini_Encounter::
# 189 "data/scripts/wild_mon_scripts.pory"
	lock
# 190 "data/scripts/wild_mon_scripts.pory"
	faceplayer
# 191 "data/scripts/wild_mon_scripts.pory"
	playmoncry SPECIES_VICTINI, 2
# 192 "data/scripts/wild_mon_scripts.pory"
	msgbox Common_EventScript_Victini_Encounter_Text_0
# 195 "data/scripts/wild_mon_scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 196 "data/scripts/wild_mon_scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 2
# 197 "data/scripts/wild_mon_scripts.pory"
	setwildbattlewithcustommoves SPECIES_VICTINI, 75, ITEM_FIRE_GEM, MOVE_V_CREATE, MOVE_PSYSHOCK, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, 0, NATURE_TIMID
# 198 "data/scripts/wild_mon_scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 199 "data/scripts/wild_mon_scripts.pory"
	dowildbattle
# 200 "data/scripts/wild_mon_scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 201 "data/scripts/wild_mon_scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 202 "data/scripts/wild_mon_scripts.pory"
	switch VAR_RESULT
# 203 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_Victini_Encounter_3
# 210 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_RAN, Common_EventScript_Victini_Encounter_4
# 211 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_WON, Common_EventScript_Victini_Encounter_4
# 212 "data/scripts/wild_mon_scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_Victini_Encounter_4
Common_EventScript_Victini_Encounter_1:
# 222 "data/scripts/wild_mon_scripts.pory"
	release
	end

Common_EventScript_Victini_Encounter_3:
# 204 "data/scripts/wild_mon_scripts.pory"
	setflag FLAG_DEFEATED_VICTINI
# 205 "data/scripts/wild_mon_scripts.pory"
	setweather WEATHER_NONE
# 206 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 207 "data/scripts/wild_mon_scripts.pory"
	removeobject VAR_LAST_TALKED
# 208 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Common_EventScript_Victini_Encounter_1

Common_EventScript_Victini_Encounter_4:
# 213 "data/scripts/wild_mon_scripts.pory"
	setvar VAR_0x8004, SPECIES_VICTINI
# 214 "data/scripts/wild_mon_scripts.pory"
	setweather WEATHER_NONE
# 215 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 216 "data/scripts/wild_mon_scripts.pory"
	removeobject VAR_LAST_TALKED
# 217 "data/scripts/wild_mon_scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 218 "data/scripts/wild_mon_scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 219 "data/scripts/wild_mon_scripts.pory"
	msgbox Common_EventScript_Victini_Encounter_Text_1, MSGBOX_DEFAULT
	goto Common_EventScript_Victini_Encounter_1


Common_EventScript_Wild_Lapras_Text_0:
# 28 "data/scripts/wild_mon_scripts.pory"
	.string "Lapras dove away$"

Common_EventScript_Mesprit_Encounter_Text_0:
# 40 "data/scripts/wild_mon_scripts.pory"
	.string "Mesprit: Mes...$"

Common_EventScript_Mesprit_Encounter_Text_1:
# 67 "data/scripts/wild_mon_scripts.pory"
	.string "Mesprit teleported to somewhere$"

Common_EventScript_Cobalion_Encounter_Text_0:
# 78 "data/scripts/wild_mon_scripts.pory"
	.string "Cobalion: Coba!$"

Common_EventScript_Cobalion_Encounter_Text_1:
# 105 "data/scripts/wild_mon_scripts.pory"
	.string "Cobalion escaped to somewhere$"

Common_EventScript_Virizion_Encounter_Text_0:
# 116 "data/scripts/wild_mon_scripts.pory"
	.string "Virizion: Viri!$"

Common_EventScript_Virizion_Encounter_Text_1:
# 143 "data/scripts/wild_mon_scripts.pory"
	.string "Virizion escaped to somewhere$"

Common_EventScript_Keldeo_Encounter_Text_0:
# 154 "data/scripts/wild_mon_scripts.pory"
	.string "Keldeo: Kel!$"

Common_EventScript_Keldeo_Encounter_Text_1:
# 181 "data/scripts/wild_mon_scripts.pory"
	.string "Keldeo escaped to somewhere$"

Common_EventScript_Victini_Encounter_Text_0:
# 192 "data/scripts/wild_mon_scripts.pory"
	.string "Victini: Vic!$"

Common_EventScript_Victini_Encounter_Text_1:
# 219 "data/scripts/wild_mon_scripts.pory"
	.string "Victini teleported to somewhere$"
