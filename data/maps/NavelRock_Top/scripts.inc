# 1 "data/maps/NavelRock_Top/scripts.pory"

# 2 "data/maps/NavelRock_Top/scripts.pory"
.set LOCALID_HO_OH, 1
# 3 "data/maps/NavelRock_Top/scripts.pory"

# 4 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_MapScripts:: @ 8269113
# 5 "data/maps/NavelRock_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NavelRock_Top_OnTransition
# 6 "data/maps/NavelRock_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NavelRock_Top_OnResume
# 7 "data/maps/NavelRock_Top/scripts.pory"
	.byte 0
# 8 "data/maps/NavelRock_Top/scripts.pory"

# 9 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_OnTransition: @ 826911E
# 10 "data/maps/NavelRock_Top/scripts.pory"
	call_if_set FLAG_CAUGHT_HO_OH, NavelRock_Top_EventScript_HideHoOh
# 11 "data/maps/NavelRock_Top/scripts.pory"
	call_if_unset FLAG_CAUGHT_HO_OH, NavelRock_Top_EventScript_TryShowHoOh
# 12 "data/maps/NavelRock_Top/scripts.pory"
	end
# 13 "data/maps/NavelRock_Top/scripts.pory"

# 14 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_EventScript_HideHoOh:: @ 8269131
# 15 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_TEMP_1, 1
# 16 "data/maps/NavelRock_Top/scripts.pory"
	setflag FLAG_HIDE_HO_OH
# 17 "data/maps/NavelRock_Top/scripts.pory"
	return
# 18 "data/maps/NavelRock_Top/scripts.pory"

# 19 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_EventScript_TryShowHoOh:: @ 826913A
# 20 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_TEMP_1, 1
# 21 "data/maps/NavelRock_Top/scripts.pory"
	goto_if_set FLAG_DEFEATED_HO_OH, Common_EventScript_NopReturn
# 22 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_TEMP_1, 0
# 23 "data/maps/NavelRock_Top/scripts.pory"
	clearflag FLAG_HIDE_HO_OH
# 24 "data/maps/NavelRock_Top/scripts.pory"
	return
# 25 "data/maps/NavelRock_Top/scripts.pory"

# 26 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_OnResume: @ 8269151
# 27 "data/maps/NavelRock_Top/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, NavelRock_Top_EventScript_TryRemoveHoOh
# 28 "data/maps/NavelRock_Top/scripts.pory"
	end
# 29 "data/maps/NavelRock_Top/scripts.pory"

# 30 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_EventScript_TryRemoveHoOh:: @ 826915B
# 31 "data/maps/NavelRock_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 32 "data/maps/NavelRock_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 33 "data/maps/NavelRock_Top/scripts.pory"
	goto_if_ne Common_EventScript_NopReturn
# 34 "data/maps/NavelRock_Top/scripts.pory"
	removeobject LOCALID_HO_OH
# 35 "data/maps/NavelRock_Top/scripts.pory"
	return
# 36 "data/maps/NavelRock_Top/scripts.pory"

# 37 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_EventScript_HoOh:: @ 826916F
# 38 "data/maps/NavelRock_Top/scripts.pory"
	lockall
# 39 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_TEMP_1, 1
# 40 "data/maps/NavelRock_Top/scripts.pory"
	special SpawnCameraObject
# 41 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_0x8004, 3  @ num loops
# 42 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_0x8005, 35 @ delay
# 43 "data/maps/NavelRock_Top/scripts.pory"
	special LoopWingFlapSE
# 44 "data/maps/NavelRock_Top/scripts.pory"
	applymovement LOCALID_HO_OH, NavelRock_Top_Movement_HoOhAppear
# 45 "data/maps/NavelRock_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, NavelRock_Top_Movement_CameraPanUp
# 46 "data/maps/NavelRock_Top/scripts.pory"
	waitmovement 0
# 47 "data/maps/NavelRock_Top/scripts.pory"
	delay 50
# 48 "data/maps/NavelRock_Top/scripts.pory"
	setweather WEATHER_NONE
# 49 "data/maps/NavelRock_Top/scripts.pory"
	doweather
# 50 "data/maps/NavelRock_Top/scripts.pory"
	waitse
# 51 "data/maps/NavelRock_Top/scripts.pory"
	playmoncry SPECIES_HO_OH, 2
# 52 "data/maps/NavelRock_Top/scripts.pory"
	delay 30
# 53 "data/maps/NavelRock_Top/scripts.pory"
	waitmoncry
# 54 "data/maps/NavelRock_Top/scripts.pory"
	delay 60
# 55 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_0x8004, 3  @ num loops
# 56 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_0x8005, 35 @ delay
# 57 "data/maps/NavelRock_Top/scripts.pory"
	special LoopWingFlapSE
# 58 "data/maps/NavelRock_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, NavelRock_Top_Movement_CameraPanDown
# 59 "data/maps/NavelRock_Top/scripts.pory"
	applymovement LOCALID_HO_OH, NavelRock_Top_Movement_HoOhApproach
# 60 "data/maps/NavelRock_Top/scripts.pory"
	waitmovement 0
# 61 "data/maps/NavelRock_Top/scripts.pory"
	special RemoveCameraObject
# 62 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_HO_OH
# 63 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_0x8005, 70 @ level
# 64 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_0x8006, ITEM_NONE
# 65 "data/maps/NavelRock_Top/scripts.pory"
	special CreateObedientEnemyMon
# 66 "data/maps/NavelRock_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 67 "data/maps/NavelRock_Top/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 68 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 3
# 69 "data/maps/NavelRock_Top/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 70 "data/maps/NavelRock_Top/scripts.pory"
	waitstate
# 71 "data/maps/NavelRock_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 72 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_HO_OH
# 73 "data/maps/NavelRock_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 74 "data/maps/NavelRock_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 75 "data/maps/NavelRock_Top/scripts.pory"
	goto_if_eq NavelRock_Top_EventScript_DefeatedHoOh
# 76 "data/maps/NavelRock_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 77 "data/maps/NavelRock_Top/scripts.pory"
	goto_if_eq NavelRock_Top_EventScript_RanFromHoOh
# 78 "data/maps/NavelRock_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 79 "data/maps/NavelRock_Top/scripts.pory"
	goto_if_eq NavelRock_Top_EventScript_RanFromHoOh
# 80 "data/maps/NavelRock_Top/scripts.pory"
	setflag FLAG_CAUGHT_HO_OH
# 81 "data/maps/NavelRock_Top/scripts.pory"
	releaseall
# 82 "data/maps/NavelRock_Top/scripts.pory"
	end
# 83 "data/maps/NavelRock_Top/scripts.pory"

# 84 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_EventScript_DefeatedHoOh:: @ 8269217
# 85 "data/maps/NavelRock_Top/scripts.pory"
	setflag FLAG_DEFEATED_HO_OH
# 86 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_HO_OH
# 87 "data/maps/NavelRock_Top/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 88 "data/maps/NavelRock_Top/scripts.pory"
	end
# 89 "data/maps/NavelRock_Top/scripts.pory"

# 90 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_EventScript_RanFromHoOh:: @ 8269225
# 91 "data/maps/NavelRock_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_HO_OH
# 92 "data/maps/NavelRock_Top/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 93 "data/maps/NavelRock_Top/scripts.pory"
	end
# 94 "data/maps/NavelRock_Top/scripts.pory"

# 95 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_Movement_CameraPanUp: @ 8269230
# 96 "data/maps/NavelRock_Top/scripts.pory"
	walk_up
# 97 "data/maps/NavelRock_Top/scripts.pory"
	walk_up
# 98 "data/maps/NavelRock_Top/scripts.pory"
	walk_up
# 99 "data/maps/NavelRock_Top/scripts.pory"
	step_end
# 100 "data/maps/NavelRock_Top/scripts.pory"

# 101 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_Movement_CameraPanDown: @ 8269234
# 102 "data/maps/NavelRock_Top/scripts.pory"
	delay_16
# 103 "data/maps/NavelRock_Top/scripts.pory"
	delay_16
# 104 "data/maps/NavelRock_Top/scripts.pory"
	walk_down
# 105 "data/maps/NavelRock_Top/scripts.pory"
	walk_down
# 106 "data/maps/NavelRock_Top/scripts.pory"
	walk_down
# 107 "data/maps/NavelRock_Top/scripts.pory"
	step_end
# 108 "data/maps/NavelRock_Top/scripts.pory"

# 109 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_Movement_HoOhApproach: @ 826923A
# 110 "data/maps/NavelRock_Top/scripts.pory"
	walk_down
# 111 "data/maps/NavelRock_Top/scripts.pory"
	walk_down
# 112 "data/maps/NavelRock_Top/scripts.pory"
	walk_down
# 113 "data/maps/NavelRock_Top/scripts.pory"
	walk_down
# 114 "data/maps/NavelRock_Top/scripts.pory"
	walk_down
# 115 "data/maps/NavelRock_Top/scripts.pory"
	walk_in_place_down
# 116 "data/maps/NavelRock_Top/scripts.pory"
	delay_16
# 117 "data/maps/NavelRock_Top/scripts.pory"
	delay_16
# 118 "data/maps/NavelRock_Top/scripts.pory"
	step_end
# 119 "data/maps/NavelRock_Top/scripts.pory"

# 120 "data/maps/NavelRock_Top/scripts.pory"
NavelRock_Top_Movement_HoOhAppear: @ 8269243
# 121 "data/maps/NavelRock_Top/scripts.pory"
	delay_16
# 122 "data/maps/NavelRock_Top/scripts.pory"
	delay_16
# 123 "data/maps/NavelRock_Top/scripts.pory"
	walk_in_place_down
# 124 "data/maps/NavelRock_Top/scripts.pory"
	walk_in_place_down
# 125 "data/maps/NavelRock_Top/scripts.pory"
	walk_in_place_down
# 126 "data/maps/NavelRock_Top/scripts.pory"
	walk_in_place_down
# 127 "data/maps/NavelRock_Top/scripts.pory"
	step_end
