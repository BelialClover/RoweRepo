# 1 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"

# 2 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
ShoalCave_HighTideEntranceRoom_MapScripts:: @ 82372AB
# 3 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_HighTideEntranceRoom_OnLoad
# 4 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	.byte 0
# 5 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	
# 6 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
ShoalCave_HighTideEntranceRoom_OnLoad: @ 8236F16
# 7 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, ShoalCave_HighTideEntranceRoom_EventScript_OpenRedRoom
# 8 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	goto_if_set FLAG_ENABLE_RED_FIGHT, ShoalCave_HighTideEntranceRoom_EventScript_OpenRedRoom
# 9 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	end
# 10 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	
# 11 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
ShoalCave_HighTideEntranceRoom_EventScript_OpenRedRoom:
# 12 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	setmetatile 17, 4, METATILE_SeafoamIslands_DoorTop, 0
# 13 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	setmetatile 17, 5, METATILE_SeafoamIslands_DoorBottom, 0
# 14 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	setmetatile 17, 6, METATILE_SeafoamIslands_ArrowWrap, 0
# 15 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	end
# 16 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	
# 17 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
ShoalCave_HighTideEntranceRoom_EventScript_Articuno::
# 18 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	lock
# 19 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	faceplayer
# 20 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	waitse
# 21 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	playmoncry SPECIES_ARTICUNO, 2
# 22 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	delay 40
# 23 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	waitmoncry
# 24 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 25 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 2
# 26 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	setwildbattlewithcustommoves SPECIES_ARTICUNO, 70, ITEM_NONE, MOVE_BLIZZARD, MOVE_HURRICANE, MOVE_WATER_PULSE, MOVE_AURA_SPHERE, 1, NATURE_TIMID
# 27 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 28 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	dowildbattle
# 29 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 31 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 32 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_HighTideEntranceRoom_EventScript_CaughtArticuno
# 33 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 34 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_HighTideEntranceRoom_EventScript_RanFromArticuno
# 35 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 36 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_HighTideEntranceRoom_EventScript_RanFromArticuno
# 37 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 38 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_HighTideEntranceRoom_EventScript_RanFromArticuno
# 39 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	setflag FLAG_DEFEATED_ARTICUNO
# 40 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	release
# 41 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	end
# 42 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	
# 43 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
//🐛🐞🐛🐞🐛🐞🐛🐞🐛🐞 found some bugs in the code
# 44 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"

# 45 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
ShoalCave_HighTideEntranceRoom_EventScript_CaughtArticuno::
# 46 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	setflag FLAG_DEFEATED_ARTICUNO
# 47 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 48 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 49 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 50 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	release
# 51 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	end
# 52 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"

# 53 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
ShoalCave_HighTideEntranceRoom_EventScript_DefeatedArticuno::
# 54 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 55 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 56 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 57 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	release
# 58 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	end
# 59 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"

# 60 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
ShoalCave_HighTideEntranceRoom_EventScript_RanFromArticuno::
# 61 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	setvar VAR_0x8004, SPECIES_ARTICUNO
# 62 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 63 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 64 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 65 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 66 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 67 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	release
# 68 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	end
# 69 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	
# 70 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
ShoalCave_HighTideEntranceRoom_Text_Articuno::
# 71 "data/maps/ShoalCave_HighTideEntranceRoom/scripts.pory"
	.string "Gyaoo!$"
