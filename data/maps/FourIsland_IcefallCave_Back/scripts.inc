FourIsland_IcefallCave_Back_MapScripts::
# 2 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FourIsland_IcefallCave_Back_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

FourIsland_IcefallCave_Back_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, FourIsland_IcefallCave_Back_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

FourIsland_IcefallCave_Back_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 5 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setmetatile 24, 27, METATILE_General_FRLG_OceanWater, 0
# 6 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setmetatile 25, 27, METATILE_General_FRLG_OceanWater, 0
# 7 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setmetatile 24, 28, METATILE_General_FRLG_OceanWater, 0
# 8 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setmetatile 25, 28, METATILE_General_FRLG_OceanWater, 0
# 11 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	goto_if_unset FLAG_DEFEATED_SUICUNE, FourIsland_IcefallCave_Back_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

FourIsland_IcefallCave_Back_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 12 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setweather WEATHER_RAIN
	return


FourIsland_IcefallCave_Back_EventScript_Suicune::
# 19 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	lock
# 20 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	faceplayer
# 21 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	playmoncry SPECIES_SUICUNE, 2
# 24 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 25 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 2
# 26 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setwildbattlewithcustommoves SPECIES_SUICUNE, 75, ITEM_WATER_GEM, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_AIR_SLASH, MOVE_EXTRASENSORY, 0, NATURE_MODEST
# 27 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 28 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	dowildbattle
# 29 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 31 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	case B_OUTCOME_CAUGHT, FourIsland_IcefallCave_Back_EventScript_Suicune_3
# 39 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	case B_OUTCOME_RAN, FourIsland_IcefallCave_Back_EventScript_Suicune_4
# 40 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	case B_OUTCOME_WON, FourIsland_IcefallCave_Back_EventScript_Suicune_4
# 41 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, FourIsland_IcefallCave_Back_EventScript_Suicune_4
FourIsland_IcefallCave_Back_EventScript_Suicune_1:
# 51 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	release
	end

FourIsland_IcefallCave_Back_EventScript_Suicune_3:
# 33 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setflag FLAG_DEFEATED_SUICUNE
# 34 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setweather WEATHER_NONE
# 35 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 36 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	removeobject VAR_LAST_TALKED
# 37 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto FourIsland_IcefallCave_Back_EventScript_Suicune_1

FourIsland_IcefallCave_Back_EventScript_Suicune_4:
# 42 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setvar VAR_0x8004, SPECIES_SUICUNE
# 43 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setweather WEATHER_NONE
# 44 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 45 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	removeobject VAR_LAST_TALKED
# 46 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 47 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 48 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
	goto FourIsland_IcefallCave_Back_EventScript_Suicune_1

