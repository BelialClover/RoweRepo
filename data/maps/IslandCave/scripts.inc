# 1 "data/maps/IslandCave/scripts.pory"

# 2 "data/maps/IslandCave/scripts.pory"
IslandCave_MapScripts:: @ 8238E2A
# 3 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, IslandCave_OnResume
# 4 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IslandCave_OnLoad
# 5 "data/maps/IslandCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IslandCave_OnTransition
# 6 "data/maps/IslandCave/scripts.pory"
	.byte 0
# 7 "data/maps/IslandCave/scripts.pory"

# 8 "data/maps/IslandCave/scripts.pory"
IslandCave_OnResume: @ 8238E3A
# 9 "data/maps/IslandCave/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, IslandCave_EventScript_TryRemoveRegice
# 10 "data/maps/IslandCave/scripts.pory"
	end
# 11 "data/maps/IslandCave/scripts.pory"

# 12 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_TryRemoveRegice:: @ 8238E44
# 13 "data/maps/IslandCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/IslandCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 15 "data/maps/IslandCave/scripts.pory"
	goto_if_ne Common_EventScript_NopReturn
# 16 "data/maps/IslandCave/scripts.pory"
	removeobject VAR_LAST_TALKED
# 17 "data/maps/IslandCave/scripts.pory"
	return
# 18 "data/maps/IslandCave/scripts.pory"

# 19 "data/maps/IslandCave/scripts.pory"
IslandCave_OnLoad: @ 8238E58
# 20 "data/maps/IslandCave/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, IslandCave_EventScript_HideRegiEntrance
# 21 "data/maps/IslandCave/scripts.pory"
	end
# 22 "data/maps/IslandCave/scripts.pory"

# 23 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_HideRegiEntrance:: @ 8238E62
# 24 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_EntranceCover, 1
# 25 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_EntranceCover, 1
# 26 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_EntranceCover, 1
# 27 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, 1
# 28 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, 1
# 29 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, 1
# 30 "data/maps/IslandCave/scripts.pory"
	return
# 31 "data/maps/IslandCave/scripts.pory"

# 32 "data/maps/IslandCave/scripts.pory"
IslandCave_OnTransition: @ 8238E99
# 33 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_LANDMARK_ISLAND_CAVE
# 34 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_VISITED_ROUTE105
# 35 "data/maps/IslandCave/scripts.pory"
	call IslandCave_EventScript_ClearSteps
# 36 "data/maps/IslandCave/scripts.pory"
	call_if_unset FLAG_DEFEATED_REGICE, IslandCave_EventScript_ShowRegice
# 37 "data/maps/IslandCave/scripts.pory"
	end
# 38 "data/maps/IslandCave/scripts.pory"

# 39 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_ShowRegice:: @ 8238EAB
# 40 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_HIDE_REGICE
# 41 "data/maps/IslandCave/scripts.pory"
	return
# 42 "data/maps/IslandCave/scripts.pory"

# 43 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_OpenRegiEntrance:: @ 8238EAF
# 44 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 19, METATILE_Cave_SealedChamberEntrance_TopLeft, 1
# 45 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 19, METATILE_Cave_SealedChamberEntrance_TopMid, 1
# 46 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 19, METATILE_Cave_SealedChamberEntrance_TopRight, 1
# 47 "data/maps/IslandCave/scripts.pory"
	setmetatile 7, 20, METATILE_Cave_SealedChamberEntrance_BottomLeft, 1
# 48 "data/maps/IslandCave/scripts.pory"
	setmetatile 8, 20, METATILE_Cave_SealedChamberEntrance_BottomMid, 0
# 49 "data/maps/IslandCave/scripts.pory"
	setmetatile 9, 20, METATILE_Cave_SealedChamberEntrance_BottomRight, 1
# 50 "data/maps/IslandCave/scripts.pory"
	special DrawWholeMapView
# 51 "data/maps/IslandCave/scripts.pory"
	playse SE_BANG
# 52 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_SYS_BRAILLE_REGICE_COMPLETED
# 53 "data/maps/IslandCave/scripts.pory"
	end
# 54 "data/maps/IslandCave/scripts.pory"

# 55 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CaveEntranceMiddle:: @ 8238EEF
# 56 "data/maps/IslandCave/scripts.pory"
	lockall
# 57 "data/maps/IslandCave/scripts.pory"
	call_if_set FLAG_TEMP_3, IslandCave_EventScript_ClearSteps
# 58 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_BigHoleInWall
# 59 "data/maps/IslandCave/scripts.pory"
	braillemessage IslandCave_Braille_RunLapAroundWall
# 60 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_TEMP_2
# 61 "data/maps/IslandCave/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 62 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CloseBrailleMsg
# 63 "data/maps/IslandCave/scripts.pory"
	end
# 64 "data/maps/IslandCave/scripts.pory"

# 65 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_BigHoleInWall:: @ 8238F13
# 66 "data/maps/IslandCave/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 67 "data/maps/IslandCave/scripts.pory"
	releaseall
# 68 "data/maps/IslandCave/scripts.pory"
	end
# 69 "data/maps/IslandCave/scripts.pory"

# 70 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CaveEntranceSide:: @ 8238F1D
# 71 "data/maps/IslandCave/scripts.pory"
	lockall
# 72 "data/maps/IslandCave/scripts.pory"
	call_if_set FLAG_TEMP_3, IslandCave_EventScript_ClearSteps
# 73 "data/maps/IslandCave/scripts.pory"
	braillemessage IslandCave_Braille_RunLapAroundWall
# 74 "data/maps/IslandCave/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_REGICE_COMPLETED, IslandCave_EventScript_CloseBrailleMsg
# 75 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_TEMP_2
# 76 "data/maps/IslandCave/scripts.pory"
	special ShouldDoBrailleRegicePuzzle
# 77 "data/maps/IslandCave/scripts.pory"
	goto IslandCave_EventScript_CloseBrailleMsg
# 78 "data/maps/IslandCave/scripts.pory"
	end
# 79 "data/maps/IslandCave/scripts.pory"

# 80 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_CloseBrailleMsg:: @ 8238F41
# 81 "data/maps/IslandCave/scripts.pory"
	waitbuttonpress
# 82 "data/maps/IslandCave/scripts.pory"
	closebraillemessage
# 83 "data/maps/IslandCave/scripts.pory"
	releaseall
# 84 "data/maps/IslandCave/scripts.pory"
	end
# 85 "data/maps/IslandCave/scripts.pory"

# 86 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_ClearSteps:: @ 8238F45
# 87 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_1, 0
# 88 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_2, 0
# 89 "data/maps/IslandCave/scripts.pory"
	setvar VAR_REGICE_STEPS_3, 0
# 90 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_TEMP_3
# 91 "data/maps/IslandCave/scripts.pory"
	return
# 92 "data/maps/IslandCave/scripts.pory"

# 93 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_Regice:: @ 8238F58
# 94 "data/maps/IslandCave/scripts.pory"
	lock
# 95 "data/maps/IslandCave/scripts.pory"
	faceplayer
# 96 "data/maps/IslandCave/scripts.pory"
	waitse
# 97 "data/maps/IslandCave/scripts.pory"
	playmoncry SPECIES_REGICE, 2
# 98 "data/maps/IslandCave/scripts.pory"
	delay 40
# 99 "data/maps/IslandCave/scripts.pory"
	waitmoncry
# 100 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 101 "data/maps/IslandCave/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 1
# 102 "data/maps/IslandCave/scripts.pory"
	setwildbattlewithcustommoves SPECIES_REGICE, 70, ITEM_ASSAULT_VEST, MOVE_ICE_BEAM, MOVE_FLASH_CANNON, MOVE_THUNDERBOLT, MOVE_POWER_GEM, 0, NATURE_MODEST
# 103 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 104 "data/maps/IslandCave/scripts.pory"
	special StartRegiBattle
# 105 "data/maps/IslandCave/scripts.pory"
	waitstate
# 106 "data/maps/IslandCave/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 107 "data/maps/IslandCave/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 108 "data/maps/IslandCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 109 "data/maps/IslandCave/scripts.pory"
	goto_if_eq IslandCave_EventScript_DefeatedRegice
# 110 "data/maps/IslandCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 111 "data/maps/IslandCave/scripts.pory"
	goto_if_eq IslandCave_EventScript_RanFromRegice
# 112 "data/maps/IslandCave/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 113 "data/maps/IslandCave/scripts.pory"
	goto_if_eq IslandCave_EventScript_RanFromRegice
# 114 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_DEFEATED_REGICE
# 115 "data/maps/IslandCave/scripts.pory"
	release
# 116 "data/maps/IslandCave/scripts.pory"
	end
# 117 "data/maps/IslandCave/scripts.pory"

# 118 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_DefeatedRegice:: @ 8238F9F
# 119 "data/maps/IslandCave/scripts.pory"
	setflag FLAG_DEFEATED_REGICE
# 120 "data/maps/IslandCave/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 121 "data/maps/IslandCave/scripts.pory"
	end
# 122 "data/maps/IslandCave/scripts.pory"

# 123 "data/maps/IslandCave/scripts.pory"
IslandCave_EventScript_RanFromRegice:: @ 8238FA8
# 124 "data/maps/IslandCave/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGICE
# 125 "data/maps/IslandCave/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 126 "data/maps/IslandCave/scripts.pory"
	end
