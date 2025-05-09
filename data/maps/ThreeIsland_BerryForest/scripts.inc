# 1 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 2 "data/maps/ThreeIsland_BerryForest/scripts.pory"
.equ LOCALID_CELEBI, 1
# 3 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 4 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_MapScripts::
# 5 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ThreeIsland_BerryForest_MapScripts_OnLoad
# 6 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.byte 0
# 7 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	
# 8 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_MapScripts_OnLoad: @ 8236F16
# 9 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, ThreeIsland_BerryForest_MapScripts_RemoveCelebi
# 10 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 11 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	
# 12 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_MapScripts_RemoveCelebi: @ 8236F16
# 13 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	removeobject LOCALID_CELEBI
# 14 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setobjectxyperm LOCALID_CELEBI, 1, 1
# 15 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 16 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 17 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_Celebi::
# 18 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	lock
# 19 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	faceplayer
# 20 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitse
# 21 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	playmoncry SPECIES_CELEBI, 2
# 22 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	delay 40
# 23 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmoncry
# 24 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 25 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 2
# 26 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setwildbattlewithcustommoves SPECIES_CELEBI, 70, ITEM_NONE, MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_POLLEN_PUFF, MOVE_EARTH_POWER, 0, NATURE_TIMID
# 27 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 28 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	dowildbattle
# 29 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 31 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 32 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq ThreeIsland_BerryForest_EventScript_CaughtCelebi
# 33 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 34 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq ThreeIsland_BerryForest_EventScript_RanFromCelebi
# 35 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 36 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq ThreeIsland_BerryForest_EventScript_RanFromCelebi
# 37 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 38 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq ThreeIsland_BerryForest_EventScript_RanFromCelebi
# 39 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_DEFEATED_CELEBI
# 40 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 41 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 42 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	
# 43 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_CaughtCelebi::
# 44 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_DEFEATED_CELEBI
# 45 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 46 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 47 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 48 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 49 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 50 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 51 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_DefeatedCelebi::
# 52 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 53 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 54 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 55 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 56 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 57 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 58 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_RanFromCelebi::
# 59 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setvar VAR_0x8004, SPECIES_CELEBI
# 60 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 61 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 62 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 63 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 64 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 65 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 66 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 67 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	
# 68 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_WelcomeSign:: @ 8163D28
# 69 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_WelcomeToBerryForest, MSGBOX_SIGN
# 70 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 71 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 72 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_BewareSign:: @ 8163D31
# 73 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_BewareWildBerryLovingMons, MSGBOX_SIGN
# 74 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 75 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 76 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_WelcomeToBerryForest:: @ 817AFD6
# 77 "data/maps/ThreeIsland_BerryForest/scripts.pory"
    .string "Welcome to the Berry Forest\p"
# 78 "data/maps/ThreeIsland_BerryForest/scripts.pory"
    .string "Be friendly and share Berries with\n"
# 79 "data/maps/ThreeIsland_BerryForest/scripts.pory"
    .string "others and Pokémon.$"
# 80 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 81 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_BewareWildBerryLovingMons:: @ 817B029
# 82 "data/maps/ThreeIsland_BerryForest/scripts.pory"
    .string "Beware of wild, Berry-loving\n"
# 83 "data/maps/ThreeIsland_BerryForest/scripts.pory"
    .string "Pokémon!$"
