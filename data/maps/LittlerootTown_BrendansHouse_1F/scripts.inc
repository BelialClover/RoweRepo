# 1 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts:: @ 81F7755
# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_BrendansHouse_1F_OnLoad
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.byte 0
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnLoad: @ 81F7765
# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_lt LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes:: @ 81F777A
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, 1
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, 1
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual:: @ 81F778D
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_RESULT, MALE
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual:: @ 81F779A
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, 1
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition: @ 81F77A4
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 3
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 5
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs:: @ 81F77C6
# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV:: @ 81F77D2
# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor:: @ 81F77DE
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 9, 8
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame: @ 81F77EA
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	//map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock:: @ 81F7814
# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 255, 7, 1
# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PushTowardStairs: @ 81F783A
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn:: @ 81F783C
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport:: @ 81F784D
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor:: @ 81F785E
# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach: @ 81F789C
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom:: @ 81F78A3
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFastestLeft
# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0:: @ 81F78BE
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1:: @ 81F78CA
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2:: @ 81F78D6
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival:: @ 81F78E2
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_0x8008, 1
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_0x8008, 0
# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_0x8008, 1
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_0x8008, 2
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_BrendanWhoAreYou, MSGBOX_DEFAULT
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_0x8008, 0
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_0x8008, 1
# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	compare VAR_0x8008, 2
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan:: @ 81F7981
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0:: @ 81F798C
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1:: @ 81F7997
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2:: @ 81F79A2
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0: @ 81F79AD
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_fastest_left
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_fastest_up
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1: @ 81F79B5
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2: @ 81F79B9
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_fastest_right
# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_fastest_up
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0:: @ 81F79C1
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1:: @ 81F79D3
# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2:: @ 81F79E5
# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0: @ 81F79F7
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_fastest_right
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1: @ 81F79FB
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_fastest_right
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_fastest_up
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2: @ 81F7A02
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_fastest_left
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0: @ 81F7A06
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_fastest_right
# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_fastest_up
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1: @ 81F7A0C
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_fastest_right
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_fastest_up
# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_fastest_left
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_fastest_up
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2: @ 81F7A16
# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_fastest_left
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_fastest_up
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
#if GAME_LANGUAGE == LANGUAGE_SPANISH
# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere: @ 81F7A1C
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mamá: ¿Ves, {PLAYER}?\n"
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿A que esto es muy bonito?$"
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock: @ 81F7A46
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Los Pokémon del servicio de mudanzas\n"
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "hacen todo el trabajo duro y además\l"
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "recogen lo que ensucian. ¡Es perfecto!\p"
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, tu cuarto está arriba.\n"
# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Ve a verlo, cariño!\p"
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Papá te ha comprado un nuevo\n"
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "reloj para que recuerdes este día.\l"
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "No olvides ponerlo en hora.$"
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom: @ 81F7B24
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mamá: ¿Y bien, {PLAYER}?\n"
# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿No quieres ver tu cuarto?$"
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock: @ 81F7B67
# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mamá: {PLAYER}, cielo…\p"
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Pon en hora el reloj de tu cuarto.$"
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly: @ 81F7B96
# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mamá: ¡{PLAYER}, {PLAYER}\n"
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Ven! ¡Ven rápido!$"
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn: @ 81F7BBC
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mamá: ¡Mira! ¡El Gimnasio de Petalia!\n"
# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡A ver si sale tu padre!$"
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim: @ 81F7BF1
# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mamá: Pues no… Qué lástima…\p"
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Creo que estaba hace nada y se\n"
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "acaba de ir. Mala suerte.$"
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor: @ 81F7C35
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ah, sí, una cosa.\n"
# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Uno de los amigos de tu padre vive aquí.\p"
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Se llama Prof. Abedul.\p"
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Vive aquí al lado. Creo que deberías\n"
# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "ir a verlo y presentarte, cariño.$"
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney: @ 81F7CC3
# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mamá: ¡Hasta luego, cielo!$"
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch: @ 81F7CD8
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mamá: ¿Has ido a presentarte\n"
# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "al Prof. Abedul?$"
# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit: @ 81F7D08
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mamá: ¿Cómo estás, {PLAYER}?\n"
# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "No pareces muy en forma.\p"
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Creo que deberías descansar un poco.$"
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney: @ 81F7D5C
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mamá: ¡Cuídate, cielo!$"
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom: @ 81F7D73
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mamá: ¡Mira por dónde! ¿Tu padre\n"
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "te ha dado esa Medalla?\p"
# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Pues yo también quiero darte algo!$"
# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard: @ 81F7DBE
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "No te esfuerces demasiado, cielo.\n"
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Tienes que saber cuándo hay que parar.\p"
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Buena suerte y ven a verme\n"
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "de vez en cuando!$"
# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav: @ 81F7E0E
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mamá: ¿Qué es eso, cariño? ¿Un PokéNav?\n"
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿Te lo dio alguien de Devon?\p"
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Entonces, cielo, tendrás que apuntarme\n"
# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "en él, ¿no?\p"
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mmm…$"
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom: @ 81F7E89
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Acabas de registrar a Mamá\n"
# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "en el PokéNav.$"
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1: @ 81F7EA8
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Vigoró, vigoró!$"
# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2: @ 81F7EB3
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Goro, goro-goro…$"
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym: @ 81F7EC6
# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Entrevistador: Y, desde el Gimnasio\n"
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "de Petalia, nos despedimos de todos.$"
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV: @ 81F7F0F
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hay una peli en la tele.\p"
# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dos hombres están bailando sobre\n"
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "el teclado de un piano de cola.\p"
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Bueno, mejor dejo de ver la tele.$"
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual: @ 81F7F66
# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Son las instrucciones de las \n"
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Deportivas.\p"
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Pulsa el Botón B cuando lleves las\n"
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Deportivas para salir pitando.\p"
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ponte las Deportivas y empieza\n"
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "a correr por todas partes.”$"
# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou: @ 81F800E
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Papá: ¿Eh?\p"
# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Pero si es mi {PLAYER}!\p"
# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hace un siglo que no te veo…\n"
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Si pareces mucho más fuerte!\p"
# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ésa es la impresión que das, ¡pero\n"
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "tu padre aún puede dar guerra!\p"
# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Ah, sí, tengo algo para ti.\n"
# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Te lo envía un tal Sr. Arenque.$"
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove: @ 81F80FE
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Papá: ¿Un Ticket para el ferry?\p"
# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Si recuerdo bien, los puertos donde\n"
# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "atraca son Ciudad Portual y Calagua.$"
# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym: @ 81F815B
# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mejor vuelvo al Gimnasio de Petalia.\p"
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Cariño, gracias por ocuparte\n"
# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "de la casa mientras yo estoy fuera.$"
# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger: @ 81F81B9
# 428 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mamá: Este padre tuyo…\p"
# 429 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Cuando por fin viene un poco a casa,\n"
# 430 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "sólo se le ocurre hablar de Pokémon.\p"
# 431 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Debería relajarse un poco y quedarse\n"
# 432 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "más tiempo aquí tranquilito…$"
# 433 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 434 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory: @ 81F824B
# 435 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mamá: ¿Un especial informativo?$"
# 436 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 437 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash: @ 81F826F
# 438 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Interrumpimos la programación para\n"
# 439 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "traerles las últimas noticias!\p"
# 440 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hay noticias confusas sobre supuestos\n"
# 441 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "avistamientos de un Pokémon azzzrt…\l"
# 442 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "volando en distintos puntos de Hoenn.\p"
# 443 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Actualmente se desconoce la identidad\n"
# 444 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "del Pokémon.\p"
# 445 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Y ahora les dejamos con la programación\n"
# 446 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "habitual.$"
# 447 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 448 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay: @ 81F8351
# 449 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mamá: {PLAYER}, ¿has oído eso?\p"
# 450 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¿De qué color ha dicho el de\n"
# 451 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "la tele que era ese Pokémon?$"
# 452 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 453 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon: @ 81F83A1
# 454 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mamá: ¡Ver para creer!\n"
# 455 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "¡Aún hay Pokémon desconocidos!$"
# 456 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
#else
# 457 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere: @ 81F7A1C
# 458 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: See, {PLAYER}?\n"
# 459 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 460 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 461 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock: @ 81F7A46
# 462 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The mover's Pokémon do all the work\n"
# 463 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 464 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 465 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 466 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 467 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dad bought you a new clock to mark\n"
# 468 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "our move here.\l"
# 469 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 470 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 471 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom: @ 81F7B24
# 472 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Well, {PLAYER}?\p"
# 473 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 474 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "very own room?$"
# 475 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 476 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock: @ 81F7B67
# 477 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}.\p"
# 478 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 479 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 480 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly: @ 81F7B96
# 481 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Oh! {PLAYER}, {PLAYER}!\n"
# 482 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 483 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 484 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn: @ 81F7BBC
# 485 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Look! It's Petalburg Gym!\n"
# 486 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Maybe Dad will be on!$"
# 487 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 488 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim: @ 81F7BF1
# 489 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Oh… It's over.\p"
# 490 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think Dad was on, but we missed him.\n"
# 491 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Too bad.$"
# 492 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 493 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor: @ 81F7C35
# 494 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 495 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "One of Dad's friends lives in town.\p"
# 496 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Prof. Birch is his name.\p"
# 497 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 498 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 499 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 500 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney: @ 81F7CC3
# 501 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: See you, honey!$"
# 502 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 503 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch: @ 81F7CD8
# 504 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Did you introduce yourself to\n"
# 505 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Prof. Birch?$"
# 506 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 507 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit: @ 81F7D08
# 508 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: How are you doing, {PLAYER}?\n"
# 509 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 510 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 511 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 512 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney: @ 81F7D5C
# 513 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Take care, honey!$"
# 514 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 515 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom: @ 81F7D73
# 516 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Oh? Did Dad give you that Badge?\p"
# 517 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Then here's something from your Mom!$"
# 518 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 519 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard: @ 81F7DBE
# 520 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 521 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 522 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 523 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 524 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav: @ 81F7E0E
# 525 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: What is that, honey? A Pokénav?\n"
# 526 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from Devon gave it to you?\p"
# 527 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 528 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 529 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 530 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 531 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom: @ 81F7E89
# 532 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered Mom\n"
# 533 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "in the Pokénav.$"
# 534 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 535 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1: @ 81F7EA8
# 536 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 537 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 538 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2: @ 81F7EB3
# 539 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 540 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 541 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym: @ 81F7EC6
# 542 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Interviewer: …We brought you this\n"
# 543 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "report from in front of Petalburg Gym.$"
# 544 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 545 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV: @ 81F7F0F
# 546 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 547 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 548 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 549 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 550 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 551 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual: @ 81F7F66
# 552 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 553 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Running Shoes.\p"
# 554 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 555 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your Running Shoes.\p"
# 556 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your Running Shoes and hit\n"
# 557 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 558 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 559 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou: @ 81F800E
# 560 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dad: Hm?\p"
# 561 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 562 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 563 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 564 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 565 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 566 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 567 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 568 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mr. Briney.$"
# 569 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 570 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove: @ 81F80FE
# 571 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Dad: Hm, a Ticket for a ferry?\p"
# 572 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 573 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Slateport and Lilycove.$"
# 574 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 575 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym: @ 81F815B
# 576 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to Petalburg Gym.\p"
# 577 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom, thanks for looking after the house\n"
# 578 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 579 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 580 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger: @ 81F81B9
# 581 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: That Dad of yours…\p"
# 582 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 583 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is Pokémon.\p"
# 584 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 585 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 586 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory: @ 81F824B
# 587 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Is that a breaking news story?$"
# 588 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 589 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash: @ 81F826F
# 590 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this news flash!\p"
# 591 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various Hoenn locales, there have\n"
# 592 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a Blue colored\l"
# 593 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Pokémon.\p"
# 594 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this Pokémon is\n"
# 595 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "said to be the sea guardian.\p"
# 596 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 597 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 598 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 599 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay: @ 81F8351
# 600 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: {PLAYER}, did you catch that?\p"
# 601 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 602 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that Pokémon was?$"
# 603 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 604 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon: @ 81F83A1
# 605 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Mom: Well, isn't that something!\n"
# 606 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown Pokémon.$"
# 607 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
#endif
