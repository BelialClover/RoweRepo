# 1 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 4 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_MapScripts:: @ 81F9296
# 5 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_2F_OnTransition
# 6 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_MaysHouse_2F_OnWarp
# 7 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 9 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnTransition: @ 81F92A1
# 10 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 2
# 11 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_lt LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay
# 12 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
# 13 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_ge LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos
# 14 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 4
# 15 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 16 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 17 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 18 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 19 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 20 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckShouldUpdateMayPos:: @ 81F92CD
# 21 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 22 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 2
# 23 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge LittlerootTown_MaysHouse_2F_EventScript_Ret
# 24 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos
# 25 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 26 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TryUpdateMayPos:: @ 81F92E6
# 27 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 28 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
# 29 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_Ret
# 30 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 31 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_ge LittlerootTown_MaysHouse_2F_EventScript_Ret
# 32 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 8, 2
# 33 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
# 34 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 35 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 36 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_Ret:: @ 81F9309
# 37 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 38 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 39 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckSetReadyToMeetMay:: @ 81F930A
# 40 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 41 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
# 42 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay
# 43 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 44 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 45 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_SetReadyToMeetMay:: @ 81F9317
# 46 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 47 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 48 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 49 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_OnWarp: @ 81F931D
# 50 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor
# 51 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.2byte 0
# 52 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 53 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckInitDecor:: @ 81F9327
# 54 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 55 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
# 56 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq SecretBase_EventScript_InitDecorations
# 57 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 58 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 59 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_RivalsPokeBall:: @ 81F9334
# 60 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 61 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 2
# 62 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_MeetMay
# 63 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 64 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 65 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 66 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 67 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMay:: @ 81F934A
# 68 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 69 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	addobject LOCALID_RIVAL
# 70 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayEnters
# 71 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 72 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PIN
# 73 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 74 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 75 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 76 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 77 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay 10
# 78 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
# 79 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 80 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth
# 81 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 82 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth
# 83 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 84 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest
# 85 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 86 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast
# 87 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 88 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 89 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 90 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 91 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 92 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	fadedefaultbgm
# 93 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 94 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 95 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 96 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayNorth:: @ 81F93BA
# 97 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth
# 98 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 99 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 100 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 102 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 103 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth
# 104 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth
# 105 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 106 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 107 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 108 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMaySouth:: @ 81F93E9
# 109 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth
# 110 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 111 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 112 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 113 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 114 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 115 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth
# 116 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth
# 117 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 118 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 119 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 120 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayWest:: @ 81F9418
# 121 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest
# 122 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 123 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 124 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 125 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 126 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 127 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest
# 128 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 129 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 130 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 131 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_MeetMayEast:: @ 81F9440
# 132 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast
# 133 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 134 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 135 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 136 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 137 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	closemessage
# 138 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast
# 139 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast
# 140 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 141 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 142 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 143 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayEnters: @ 81F946F
# 144 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 145 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 146 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_fastest_right
# 147 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 148 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 149 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerNorth: @ 81F9473
# 150 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 151 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 152 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 153 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 154 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 155 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 156 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 157 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCNorth: @ 81F9479
# 158 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 159 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 160 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 161 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_fastest_right
# 162 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 163 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 164 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 165 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 166 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_fastest_up
# 167 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 168 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 169 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayNorth: @ 81F9483
# 170 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 171 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_fastest_up
# 172 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 173 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 174 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 175 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 176 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_fastest_right
# 177 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 178 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 179 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerSouth: @ 81F948B
# 180 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 181 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 182 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 183 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 184 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 185 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCSouth: @ 81F948F
# 186 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 187 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_fastest_right
# 188 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 189 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 190 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 191 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 192 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_fastest_up
# 193 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 194 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 195 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMaySouth: @ 81F9497
# 196 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 197 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_fastest_up
# 198 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 199 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 200 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_fastest_right
# 201 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 202 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 203 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerWest: @ 81F949D
# 204 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 205 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 206 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 207 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 208 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 209 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_fastest_down
# 210 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 211 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 212 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCWest: @ 81F94A4
# 213 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 214 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 215 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 216 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_fastest_up
# 217 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 218 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 219 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 220 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayWest: @ 81F94A9
# 221 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 222 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 223 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_fastest_right
# 224 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 225 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 226 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayApproachPlayerEast: @ 81F94AD
# 227 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 228 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 229 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_down
# 230 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_fastest_right
# 231 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 232 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 233 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_MayWalkToPCEast: @ 81F94B2
# 234 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 235 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_up
# 236 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 237 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 238 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 239 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 240 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_right
# 241 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_fastest_up
# 242 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 243 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 244 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_Movement_PlayerWatchMayEast: @ 81F94BB
# 245 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 246 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_fastest_up
# 247 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 248 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	delay_16
# 249 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	walk_in_place_fastest_right
# 250 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	step_end
# 251 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 252 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Rival:: @ 81F94C1
# 253 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 254 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, RivalsHouse_2F_EventScript_RivalPostLilycove
# 255 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 256 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
# 257 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq RivalsHouse_2F_EventScript_May
# 258 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
# 259 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq RivalsHouse_2F_EventScript_Brendan
# 260 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 261 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 262 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_May:: @ 81F94E3
# 263 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayGettingReady, MSGBOX_DEFAULT
# 264 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 265 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 266 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 267 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_Brendan:: @ 81F94ED
# 268 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanGettingReady, MSGBOX_DEFAULT
# 269 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 270 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 271 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 272 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_RivalPostLilycove:: @ 81F94F7
# 273 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 274 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitmovement 0
# 275 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 276 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
# 277 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq RivalsHouse_2F_EventScript_MayPostLilycove
# 278 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
# 279 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	call_if_eq RivalsHouse_2F_EventScript_BrendanPostLilycove
# 280 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setflag FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE
# 281 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 282 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 283 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 284 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayPostLilycove:: @ 81F951D
# 285 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_MayWhereShouldIGoNext
# 286 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayJustCheckingMyPokedex, MSGBOX_DEFAULT
# 287 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 288 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 289 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanPostLilycove:: @ 81F952F
# 290 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE, RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext
# 291 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex, MSGBOX_DEFAULT
# 292 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 293 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 294 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_MayWhereShouldIGoNext:: @ 81F9541
# 295 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_MayWhereShouldIGoNext, MSGBOX_DEFAULT
# 296 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 297 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 298 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_EventScript_BrendanWhereShouldIGoNext:: @ 81F954A
# 299 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhereShouldIGoNext, MSGBOX_DEFAULT
# 300 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	return
# 301 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 302 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_PC:: @ 81F9553
# 303 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	lockall
# 304 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	checkplayergender
# 305 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
# 306 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC
# 307 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
# 308 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC
# 309 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 310 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 311 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckRivalsPC:: @ 81F956C
# 312 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 313 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 314 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 315 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 316 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_CheckPlayersPC:: @ 81F9576
# 317 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 318 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 319 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_ON
# 320 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 321 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special BedroomPC
# 322 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	waitstate
# 323 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 324 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 325 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 326 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
LittlerootTown_MaysHouse_2F_EventScript_TurnOffPlayerPC:: @ 81F958F
# 327 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	setvar VAR_0x8004, 2
# 328 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 329 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 330 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	releaseall
# 331 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	end
# 332 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 333 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
#if GAME_LANGUAGE == LANGUAGE_SPANISH
# 334 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhoAreYou: @ 81F959C
# 335 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¿Eh?\n"
# 336 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¿Quién…? ¿Quién eres tú?\p"
# 337 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Ah…\n"
# 338 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Ya…\p"
# 339 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Eres {PLAYER}{KUN}.\n"
# 340 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Y te acabas de mudar.\p"
# 341 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Mmm… Yo me llamo Aura.\n"
# 342 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¡Encantada!\p"
# 343 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Yo…\n"
# 344 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "sueño con hacerme amiga de miles\l"
# 345 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "de Pokémon de todo el mundo.\p"
# 346 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "He… oído algo sobre ti, {PLAYER}{KUN}.\n"
# 347 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Me lo ha dicho mi padre, el Prof. Abedul.\p"
# 348 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Tenía muchas ganas de que nos\n"
# 349 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "cayéramos bien e hiciéramos amistad.\p"
# 350 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Qué tontería, ¿no?\n"
# 351 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Si acabo de conocerte, {PLAYER}{KUN}…\p"
# 352 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Ji, ji, ji…\p"
# 353 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¡Ahí va! ¡Se me había olvidado!\p"
# 354 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¡Tenía que ir a ayudar a mi padre\n"
# 355 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "a atrapar Pokémon salvajes!\p"
# 356 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¡{PLAYER}{KUN}, nos vemos luego!$"
# 357 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 358 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayGettingReady: @ 81F978A
# 359 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Mis Pokémon están curados…\n"
# 360 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Tengo todos los objetos… y…$"
# 361 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 362 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhoAreYou: @ 81F97B4
# 363 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¿Eh?\n"
# 364 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¿Tú…?\p"
# 365 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¿Quién eres tú?\p"
# 366 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Ya… Eres {PLAYER}, ¿no?\n"
# 367 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Y te acabas de mudar, ¿verdad?\p"
# 368 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Y mi padre, el Prof. Abedul,\n"
# 369 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "me ha dicho que tu padre es un\l"
# 370 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Líder de Gimnasio, ¿cierto?\p"
# 371 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Yo me llamo Bruno.\n"
# 372 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¡Hola, vecina!\p"
# 373 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¿Y eso? {PLAYER}, ¿no tienes\n"
# 374 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "ningún Pokémon?\p"
# 375 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¿Quieres que atrape uno para ti?\p"
# 376 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¡Ahí va! ¡Se me había olvidado!\p"
# 377 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Tengo que ir a ayudar a mi padre\n"
# 378 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "a atrapar Pokémon salvajes…\p"
# 379 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Bueno, pues otro día, ¿vale?$"
# 380 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 381 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanGettingReady: @ 81F9962
# 382 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Mis Pokémon están curados…\n"
# 383 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Tengo todos los objetos… y…$"
# 384 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 385 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_ItsRivalsPokeBall: @ 81F9991
# 386 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¡Es la Poké Ball de {RIVAL}!\p"
# 387 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Será mejor que la deje donde está.$"
# 388 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 389 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayJustCheckingMyPokedex: @ 81F99C9
# 390 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Aura: ¡{PLAYER}{KUN}!\p"
# 391 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Estaba mirando mi Pokédex.\p"
# 392 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Todavía hay un montón de Pokémon\n"
# 393 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "que no he atrapado…\p"
# 394 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Y hay muchos otros que creo\n"
# 395 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "que van a evolucionar…\p"
# 396 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¿Adónde debería ir a atrapar nuevos\n"
# 397 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Pokémon la próxima vez?$"
# 398 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 399 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhereShouldIGoNext: @ 81F9A9E
# 400 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Aura: ¿Adónde debería ir a atrapar\n"
# 401 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "nuevos Pokémon la próxima vez?\p"
# 402 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Sería divertido si nos encontráramos,\n"
# 403 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "¿verdad, {PLAYER}{KUN}?$"
# 404 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 405 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex: @ 81F9B0D
# 406 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Bruno: Anda, hola, {PLAYER}.\p"
# 407 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Estaba mirando mi Pokédex.\p"
# 408 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Todavía hay un montón de Pokémon\n"
# 409 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "que debo atrapar, ya lo sé,\l"
# 410 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "pero ya está bastante completita.\p"
# 411 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Cuando miro mi Pokédex me entran\n"
# 412 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "ganas de salir de viaje otra vez…$"
# 413 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 414 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhereShouldIGoNext: @ 81F9BE7
# 415 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "No logro decidir a qué lugar\n"
# 416 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "debería ir para cazar Pokémon.\p"
# 417 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oye, {PLAYER}, si nos vemos mientras\n"
# 418 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "estoy atrapando Pokémon, igual\l"
# 419 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "podríamos echarnos un combate…$"
# 420 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
#else
# 421 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhoAreYou: @ 81F959C
# 422 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Huh?\n"
# 423 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Who… Who are you?\p"
# 424 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … …\n"
# 425 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "… … … … … … … …\p"
# 426 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 427 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "So your move was today.\p"
# 428 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Um… I'm May.\n"
# 429 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Glad to meet you!\p"
# 430 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I…\n"
# 431 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 432 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "with Pokémon all over the world.\p"
# 433 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 434 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "my dad, Prof. Birch.\p"
# 435 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 436 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 437 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 438 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 439 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Eheheh…\p"
# 440 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 441 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 442 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some wild Pokémon!\p"
# 443 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 444 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 445 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayGettingReady: @ 81F978A
# 446 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Pokémon fully restored!\n"
# 447 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Items ready, and…$"
# 448 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 449 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhoAreYou: @ 81F97B4
# 450 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey!\n"
# 451 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "You…\p"
# 452 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Who are you?\p"
# 453 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 454 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Moved in next door, right?\p"
# 455 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 456 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Dad, Prof. Birch, said that our new\n"
# 457 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "next-door neighbor is a Gym Leader's\l"
# 458 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 459 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "My name's Brendan.\n"
# 460 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "So, hi, neighbor!\p"
# 461 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 462 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "a Pokémon?\p"
# 463 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 464 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 465 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 466 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some wild Pokémon.\p"
# 467 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Some other time, okay?$"
# 468 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 469 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanGettingReady: @ 81F9962
# 470 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Pokémon fully restored…\n"
# 471 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Items all packed, and…$"
# 472 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 473 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_ItsRivalsPokeBall: @ 81F9991
# 474 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "It's {RIVAL}'s Poké Ball!\p"
# 475 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Better leave it right where it is.$"
# 476 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 477 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayJustCheckingMyPokedex: @ 81F99C9
# 478 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "May: {PLAYER}{KUN}!\p"
# 479 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking my Pokédex.\p"
# 480 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There's still a lot of Pokémon that\n"
# 481 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I've seen but haven't caught.\p"
# 482 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "And there are many others that\n"
# 483 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I think will evolve.\p"
# 484 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I wonder where I should go catch\n"
# 485 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some Pokémon next?$"
# 486 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 487 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_MayWhereShouldIGoNext: @ 81F9A9E
# 488 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "May: I wonder where I should go catch\n"
# 489 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "some Pokémon next?\p"
# 490 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Wouldn't it be funny if we ran into each\n"
# 491 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "other, {PLAYER}{KUN}?$"
# 492 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 493 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanJustCheckingMyPokedex: @ 81F9B0D
# 494 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Brendan: Hey, it's {PLAYER}.\p"
# 495 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I was just checking out my Pokédex.\p"
# 496 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "There are still many Pokémon that\n"
# 497 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "I need to catch, I know, but this\l"
# 498 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "is looking pretty good.\p"
# 499 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Checking this Pokédex out gives me\n"
# 500 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "the urge to hit the road again.$"
# 501 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"

# 502 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
RivalsHouse_2F_Text_BrendanWhereShouldIGoNext: @ 81F9BE7
# 503 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Brendan: I'm having a hard time deciding\n"
# 504 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "where I should catch Pokémon next.\p"
# 505 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "Hey, {PLAYER}, if I see you while I'm out\n"
# 506 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "catching Pokémon, I can pitch you a\l"
# 507 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
	.string "battle if you'd like.$"
# 508 "data/maps/LittlerootTown_MaysHouse_2F/scripts.pory"
#endif
