# 1 "data/maps/PrimevalForest/scripts.pory"

# 2 "data/maps/PrimevalForest/scripts.pory"
PrimevalForest_MapScripts::
# 3 "data/maps/PrimevalForest/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PrimevalForest_OnLoad
# 4 "data/maps/PrimevalForest/scripts.pory"
	.byte 0
# 5 "data/maps/PrimevalForest/scripts.pory"
	
# 6 "data/maps/PrimevalForest/scripts.pory"
PrimevalForest_OnLoad: @ 8236F16
# 7 "data/maps/PrimevalForest/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PrimevalForest_EventScript_OpenShayminRoom
# 8 "data/maps/PrimevalForest/scripts.pory"
	end
# 9 "data/maps/PrimevalForest/scripts.pory"
	
# 10 "data/maps/PrimevalForest/scripts.pory"
PrimevalForest_EventScript_OpenShayminRoom:
# 11 "data/maps/PrimevalForest/scripts.pory"
	setmetatile 43, 22, METATILE_General_FRLG_EscalatorTile, 0
# 12 "data/maps/PrimevalForest/scripts.pory"
	end
# 13 "data/maps/PrimevalForest/scripts.pory"

# 14 "data/maps/PrimevalForest/scripts.pory"
PrimevalForest_EventScript_Shaymin::
# 15 "data/maps/PrimevalForest/scripts.pory"
	lock
# 16 "data/maps/PrimevalForest/scripts.pory"
	faceplayer
# 17 "data/maps/PrimevalForest/scripts.pory"
	waitse
# 18 "data/maps/PrimevalForest/scripts.pory"
	playmoncry SPECIES_SHAYMIN, 2
# 19 "data/maps/PrimevalForest/scripts.pory"
	delay 40
# 20 "data/maps/PrimevalForest/scripts.pory"
	waitmoncry
# 21 "data/maps/PrimevalForest/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 22 "data/maps/PrimevalForest/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 2
# 23 "data/maps/PrimevalForest/scripts.pory"
	setwildbattlewithcustommoves SPECIES_SHAYMIN, 70, ITEM_NONE, MOVE_SEED_FLARE, MOVE_EARTH_POWER, MOVE_PSYCHIC, MOVE_DAZZLING_GLEAM, 0, NATURE_TIMID
# 24 "data/maps/PrimevalForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 25 "data/maps/PrimevalForest/scripts.pory"
	dowildbattle
# 26 "data/maps/PrimevalForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 27 "data/maps/PrimevalForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 28 "data/maps/PrimevalForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 29 "data/maps/PrimevalForest/scripts.pory"
	goto_if_eq PrimevalForest_EventScript_CaughtShaymin
# 30 "data/maps/PrimevalForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 31 "data/maps/PrimevalForest/scripts.pory"
	goto_if_eq PrimevalForest_EventScript_RanFromShaymin
# 32 "data/maps/PrimevalForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 33 "data/maps/PrimevalForest/scripts.pory"
	goto_if_eq PrimevalForest_EventScript_RanFromShaymin
# 34 "data/maps/PrimevalForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 35 "data/maps/PrimevalForest/scripts.pory"
	goto_if_eq PrimevalForest_EventScript_RanFromShaymin
# 36 "data/maps/PrimevalForest/scripts.pory"
	setflag FLAG_DEFEATED_SHAYMIN
# 37 "data/maps/PrimevalForest/scripts.pory"
	release
# 38 "data/maps/PrimevalForest/scripts.pory"
	end
# 39 "data/maps/PrimevalForest/scripts.pory"
	
# 40 "data/maps/PrimevalForest/scripts.pory"
PrimevalForest_EventScript_CaughtShaymin::
# 41 "data/maps/PrimevalForest/scripts.pory"
	setflag FLAG_DEFEATED_SHAYMIN
# 42 "data/maps/PrimevalForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 43 "data/maps/PrimevalForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 44 "data/maps/PrimevalForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 45 "data/maps/PrimevalForest/scripts.pory"
	release
# 46 "data/maps/PrimevalForest/scripts.pory"
	end
# 47 "data/maps/PrimevalForest/scripts.pory"

# 48 "data/maps/PrimevalForest/scripts.pory"
PrimevalForest_EventScript_DefeatedShaymin::
# 49 "data/maps/PrimevalForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 50 "data/maps/PrimevalForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 51 "data/maps/PrimevalForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 52 "data/maps/PrimevalForest/scripts.pory"
	release
# 53 "data/maps/PrimevalForest/scripts.pory"
	end
# 54 "data/maps/PrimevalForest/scripts.pory"

# 55 "data/maps/PrimevalForest/scripts.pory"
PrimevalForest_EventScript_RanFromShaymin::
# 56 "data/maps/PrimevalForest/scripts.pory"
	setvar VAR_0x8004, SPECIES_SHAYMIN
# 57 "data/maps/PrimevalForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 58 "data/maps/PrimevalForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 59 "data/maps/PrimevalForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 60 "data/maps/PrimevalForest/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 61 "data/maps/PrimevalForest/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 62 "data/maps/PrimevalForest/scripts.pory"
	release
# 63 "data/maps/PrimevalForest/scripts.pory"
	end
