# 1 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 4 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_MapScripts:: @ 81F83E3
# 5 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_2F_OnTransition
# 6 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_BrendansHouse_2F_OnWarp
# 7 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.byte 0
# 8 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 9 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnTransition: @ 81F83EE
# 10 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 2
# 11 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_lt LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan
# 12 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
# 13 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_ge LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos
# 14 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 4
# 15 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq PlayersHouse_2F_EventScript_BlockStairsUntilClockIsSet
# 16 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call SecretBase_EventScript_SetDecorationFlags
# 17 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_SECRET_BASE_INITIALIZED, 0
# 18 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 19 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 20 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckShouldUpdateBrendanPos:: @ 81F841A
# 21 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_LILYCOVE, LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 22 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_BIRCH_LAB_STATE, 2
# 23 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 24 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos
# 25 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 26 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TryUpdateBrendanPos:: @ 81F8433
# 27 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 28 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
# 29 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_Ret
# 30 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 31 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_ge LittlerootTown_MaysHouse_2F_EventScript_Ret  @ Odd that the MaysHouse equivalent was used here instead
# 32 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 0, 2
# 33 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_UP
# 34 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 35 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 36 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_Ret:: @ 81F8456
# 37 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 38 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 39 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckSetReadyToMeetBrendan:: @ 81F8457
# 40 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 41 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
# 42 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan
# 43 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 44 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 45 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_SetReadyToMeetBrendan:: @ 81F8464
# 46 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 2
# 47 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 48 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 49 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_OnWarp: @ 81F846A
# 50 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	map_script_2 VAR_SECRET_BASE_INITIALIZED, 0, LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor
# 51 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.2byte 0
# 52 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 53 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckInitDecor:: @ 81F8474
# 54 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 55 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
# 56 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq SecretBase_EventScript_InitDecorations
# 57 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 58 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 59 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_RivalsPokeBall:: @ 81F8481
# 60 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 61 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 2
# 62 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan
# 63 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_ItsRivalsPokeBall, MSGBOX_DEFAULT
# 64 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 65 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 66 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 67 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendan:: @ 81F8497
# 68 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 69 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	addobject LOCALID_RIVAL
# 70 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters
# 71 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 72 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PIN
# 73 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 74 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 75 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 76 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 77 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay 10
# 78 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
# 79 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 80 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth
# 81 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 82 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth
# 83 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 84 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest
# 85 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 86 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	call_if_eq LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast
# 87 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 88 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 89 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 90 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 91 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	savebgm MUS_DUMMY
# 92 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	fadedefaultbgm
# 93 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 94 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 95 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 96 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanNorth:: @ 81F8507
# 97 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth
# 98 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 99 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 100 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 102 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 103 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth
# 104 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth
# 105 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 106 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 107 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 108 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanSouth:: @ 81F8536
# 109 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth
# 110 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 111 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 112 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 113 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 114 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 115 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth
# 116 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth
# 117 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 118 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 119 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 120 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanWest:: @ 81F8565
# 121 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest
# 122 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 123 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 124 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 125 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 126 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 127 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest
# 128 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest
# 129 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 130 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 131 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 132 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_MeetBrendanEast:: @ 81F8594
# 133 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast
# 134 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 135 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 136 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 137 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox RivalsHouse_2F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 138 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	closemessage
# 139 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast
# 140 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitmovement 0
# 141 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	return
# 142 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 143 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanEnters: @ 81F85BC
# 144 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 145 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 146 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_fastest_left
# 147 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 148 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 149 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerNorth: @ 81F85C0
# 150 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 151 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 152 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 153 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 154 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 155 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 156 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 157 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCNorth: @ 81F85C6
# 158 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 159 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 160 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 161 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 162 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 163 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 164 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 165 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_fastest_up
# 166 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 167 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 168 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanNorth: @ 81F85CF
# 169 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 170 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_fastest_up
# 171 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 172 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 173 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 174 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 175 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_fastest_left
# 176 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 177 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 178 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerSouth: @ 81F85D7
# 179 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 180 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 181 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 182 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 183 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 184 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCSouth: @ 81F85DB
# 185 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 186 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 187 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 188 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 189 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 190 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_fastest_up
# 191 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 192 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 193 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanSouth: @ 81F85E2
# 194 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 195 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_fastest_up
# 196 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 197 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 198 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_fastest_left
# 199 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 200 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 201 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerWest: @ 81F85E8
# 202 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 203 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 204 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_down
# 205 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_fastest_left
# 206 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 207 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 208 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCWest: @ 81F85ED
# 209 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 210 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 211 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 212 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 213 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 214 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 215 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 216 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_fastest_up
# 217 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 218 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 219 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanWest: @ 81F85F6
# 220 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_8
# 221 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 222 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_fastest_up
# 223 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 224 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 225 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_fastest_left
# 226 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 227 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 228 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanApproachPlayerEast: @ 81F85FD
# 229 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 230 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 231 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 232 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 233 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 234 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_fastest_down
# 235 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 236 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 237 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_BrendanWalkToPCEast: @ 81F8604
# 238 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_up
# 239 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 240 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_left
# 241 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_fastest_up
# 242 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 243 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 244 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
@ Unused, the player is already facing this direction so its unneeded
# 245 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_Movement_PlayerWatchBrendanEast: @ 81F8609
# 246 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 247 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	delay_16
# 248 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	walk_in_place_fastest_left
# 249 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	step_end
# 250 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 251 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_PC:: @ 81F860D
# 252 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	lockall
# 253 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	checkplayergender
# 254 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, MALE
# 255 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC
# 256 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	compare VAR_RESULT, FEMALE
# 257 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC
# 258 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 259 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 260 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckPlayersPC:: @ 81F8626
# 261 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 262 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 263 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_ON
# 264 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 265 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special BedroomPC
# 266 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	waitstate
# 267 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 268 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 269 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 270 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_TurnOffPlayerPC:: @ 81F863F
# 271 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 272 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 273 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 274 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 275 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 276 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 277 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
LittlerootTown_BrendansHouse_2F_EventScript_CheckRivalsPC:: @ 81F864C
# 278 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox gText_PokemonTrainerSchoolEmail, MSGBOX_DEFAULT
# 279 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	releaseall
# 280 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 281 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 282 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_Notebook:: @ 81F8656
# 283 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
# 284 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 285 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 286 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_EventScript_GameCube:: @ 81F865F
# 287 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ItsAGameCube, MSGBOX_SIGN
# 288 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	end
# 289 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 290 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
#if GAME_LANGUAGE == LANGUAGE_SPANISH
# 291 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped: @ 81F8668
# 292 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "El reloj está parado…\p"
# 293 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Será mejor ponerlo en hora.$"
# 294 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 295 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_HowDoYouLikeYourRoom: @ 81F869A
# 296 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Mamá: {PLAYER}, ¿te gusta\n"
# 297 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "tu nuevo cuarto?\p"
# 298 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Bien. Todo está colocado como debe ser.\p"
# 299 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "También han acabado con la mudanza\n"
# 300 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "de la planta baja.\p"
# 301 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "¡Este servicio de mudanzas Pokémon\n"
# 302 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "es de lo más eficaz!\p"
# 303 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oh, deberías comprobar que tienes\n"
# 304 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "todas tus cosas en la mesa.$"
# 305 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 306 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook: @ 81F877F
# 307 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} abrió el cuaderno.\p"
# 308 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "“Regla Aventurera N.º 1\n"
# 309 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Pulsa Start para abrir el Menú.\p"
# 310 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Regla Aventurera N.º 2\n"
# 311 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Elige Guardar para guardar la partida.”\p"
# 312 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Las demás páginas están en blanco…$"
# 313 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 314 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap: @ 81F8820
# 315 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} miró más de cerca el mapa\n"
# 316 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "de la región de Hoenn.$"
# 317 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 318 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube: @ 81F884F
# 319 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Es una consola Nintendo GameCube.\p"
# 320 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Hay una consola Game Boy Advance\n"
# 321 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "conectada a ella que sirve de Mando.$"
# 322 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
#else
# 323 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ClockIsStopped: @ 81F8668
# 324 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
# 325 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Better set it and start it!$"
# 326 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 327 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_HowDoYouLikeYourRoom: @ 81F869A
# 328 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Mom: {PLAYER}, how do you like your\n"
# 329 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "new room?\p"
# 330 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Good! Everything's put away neatly!\p"
# 331 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "They finished moving everything in\n"
# 332 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "downstairs, too.\p"
# 333 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Pokémon movers are so convenient!\p"
# 334 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Oh, you should make sure that\n"
# 335 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "everything's all there on your desk.$"
# 336 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 337 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_Notebook: @ 81F877F
# 338 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
# 339 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Adventure Rule no. 1\n"
# 340 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Open the Menu with Start.\p"
# 341 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Adventure Rule no. 2\n"
# 342 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Record your progress with Save.\p"
# 343 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "The remaining pages are blank…$"
# 344 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 345 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
Common_Text_LookCloserAtMap: @ 81F8820
# 346 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "{PLAYER} took a closer look at the\n"
# 347 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "Hoenn region map.$"
# 348 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"

# 349 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
PlayersHouse_2F_Text_ItsAGameCube: @ 81F884F
# 350 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
# 351 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "A Game Boy Advance is connected to\n"
# 352 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
	.string "serve as the Controller.$"
# 353 "data/maps/LittlerootTown_BrendansHouse_2F/scripts.pory"
#endif
