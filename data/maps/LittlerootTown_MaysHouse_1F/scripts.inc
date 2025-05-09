# 1 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 2 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 3 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 4 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 5 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 6 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_MapScripts:: @ 81F88A5
# 7 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LittlerootTown_MaysHouse_1F_OnLoad
# 8 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_MaysHouse_1F_OnTransition
# 9 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_MaysHouse_1F_OnFrame
# 10 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.byte 0
# 11 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnLoad: @ 81F88B5
# 13 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
# 14 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_lt LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes
# 15 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_set FLAG_RECEIVED_RUNNING_SHOES, LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual
# 16 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 17 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 18 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_SetMovingBoxes:: @ 81F88CA
# 19 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, 1
# 20 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, 1
# 21 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 22 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 23 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_CheckShowShoesManual:: @ 81F88DD
# 24 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	checkplayergender
# 25 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_RESULT, FEMALE
# 26 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual
# 27 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 28 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 29 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_ShowRunningShoesManual:: @ 81F88EA
# 30 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setmetatile 6, 7, METATILE_BrendansMaysHouse_BookOnTable, 1
# 31 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 32 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 33 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnTransition: @ 81F88F4
# 34 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 3
# 35 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor
# 36 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 5
# 37 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs
# 38 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 6
# 39 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV
# 40 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 41 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 42 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToStairs:: @ 81F8916
# 43 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 2, 4
# 44 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 45 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 46 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 47 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToTV:: @ 81F8922
# 48 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 6, 5
# 49 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 50 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 51 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 52 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MoveMomToDoor:: @ 81F892E
# 53 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 1, 8
# 54 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 56 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 57 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 58 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_OnFrame: @ 81F893A
# 59 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn
# 60 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock
# 61 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport
# 62 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 1, LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor
# 63 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	//map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 64 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.2byte 0
# 65 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 66 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoUpstairsToSetClock:: @ 81F8964
# 67 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 68 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 69 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 70 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 71 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs
# 72 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F, 255, 1, 1
# 74 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitstate
# 75 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 76 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 77 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 78 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PushTowardStairs: @ 81F898A
# 79 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 80 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 81 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 82 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_EnterHouseMovingIn:: @ 81F898C
# 83 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 84 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 85 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 86 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 87 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 88 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 89 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PetalburgGymReport:: @ 81F899D
# 90 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 91 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, FEMALE
# 92 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 93 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportFemale
# 94 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 95 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 96 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_YoureNewNeighbor:: @ 81F89AE
# 97 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 98 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 99 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 100 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 101 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 102 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 103 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 104 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach
# 105 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 106 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 107 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_OhYoureTheNewNeighbor, MSGBOX_DEFAULT
# 108 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_MET_RIVAL_MOM
# 109 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 2
# 110 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 111 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 112 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 113 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_RivalMomApproach: @ 81F89EC
# 114 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_down
# 115 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 116 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 117 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 118 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 119 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 120 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 121 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 122 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalMom:: @ 81F89F3
# 123 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 124 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 125 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE103, RivalsHouse_1F_EventScript_GoHomeEverySoOften
# 126 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, RivalsHouse_1F_EventScript_RivalIsOnRoute103
# 127 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
# 128 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto_if_eq RivalsHouse_1F_EventScript_RivalTooBusy
# 129 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 130 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_LikeChildLikeFather, MSGBOX_DEFAULT
# 131 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 132 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 133 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 134 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalTooBusy:: @ 81F8A1F
# 135 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_TooBusyToNoticeVisit, MSGBOX_DEFAULT
# 136 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 137 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 138 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 139 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalIsOnRoute103:: @ 81F8A29
# 140 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_WentOutToRoute103, MSGBOX_DEFAULT
# 141 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 142 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 143 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 144 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_GoHomeEverySoOften:: @ 81F8A33
# 145 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_ShouldGoHomeEverySoOften, MSGBOX_DEFAULT
# 146 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 147 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 148 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 149 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_EventScript_RivalSibling:: @ 81F8A3D
# 150 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lock
# 151 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	faceplayer
# 152 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 153 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_DoYouHavePokemon, MSGBOX_DEFAULT
# 154 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	release
# 155 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 156 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 157 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_GoSeeRoom:: @ 81F8A4C
# 158 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 159 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 160 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8005, FEMALE
# 161 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFastestRight
# 162 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 163 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 164 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 165 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 166 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival0:: @ 81F8A67
# 167 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 168 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 169 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 170 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 171 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 172 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival1:: @ 81F8A73
# 173 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 174 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 175 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 176 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 177 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 178 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival2:: @ 81F8A7F
# 179 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	lockall
# 180 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 181 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	goto LittlerootTown_MaysHouse_1F_EventScript_MeetRival
# 182 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 183 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 184 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MeetRival:: @ 81F8A8B
# 185 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 186 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 10
# 187 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 188 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 189 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_PIN
# 190 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 191 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 192 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 193 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 194 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 1
# 195 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_ne LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay
# 196 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
# 197 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 0
# 198 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0
# 199 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 1
# 200 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1
# 201 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 2
# 202 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2
# 203 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	msgbox RivalsHouse_1F_Text_MayWhoAreYou, MSGBOX_DEFAULT
# 204 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	closemessage
# 205 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 0
# 206 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0
# 207 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 1
# 208 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1
# 209 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	compare VAR_0x8008, 2
# 210 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	call_if_eq LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2
# 211 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	playse SE_EXIT
# 212 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 213 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
# 214 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 215 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 216 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay 30
# 217 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_RIVAL_STATE, 3
# 218 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 1
# 219 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 220 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	fadedefaultbgm
# 221 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	releaseall
# 222 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	end
# 223 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 224 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_PlayerFaceMay:: @ 81F8B2A
# 225 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
# 226 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 227 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 228 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 229 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer0:: @ 81F8B35
# 230 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0
# 231 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 232 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 233 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 234 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer1:: @ 81F8B40
# 235 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1
# 236 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 237 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 238 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 239 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayApproachPlayer2:: @ 81F8B4B
# 240 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2
# 241 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 242 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 243 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 244 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer0: @ 81F8B56
# 245 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_fastest_left
# 246 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 247 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_fastest_up
# 248 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 249 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 250 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 251 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 252 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 253 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 254 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer1: @ 81F8B5E
# 255 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 256 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 257 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 258 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 259 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 260 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayApproachPlayer2: @ 81F8B62
# 261 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_fastest_right
# 262 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 263 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_fastest_up
# 264 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 265 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 266 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 267 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 268 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 269 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 270 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs0:: @ 81F8B6A
# 271 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0
# 272 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0
# 273 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 274 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 275 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 276 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs1:: @ 81F8B7C
# 277 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1
# 278 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1
# 279 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 280 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 281 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 282 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_EventScript_MayGoUpstairs2:: @ 81F8B8E
# 283 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2
# 284 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2
# 285 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	waitmovement 0
# 286 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	return
# 287 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 288 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit0: @ 81F8BA0
# 289 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 290 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 291 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_fastest_right
# 292 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 293 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 294 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit1: @ 81F8BA4
# 295 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 296 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 297 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_fastest_right
# 298 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 299 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 300 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_fastest_up
# 301 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 302 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 303 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_PlayerWatchMayExit2: @ 81F8BAB
# 304 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_16
# 305 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	delay_8
# 306 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_fastest_left
# 307 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 308 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 309 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs0: @ 81F8BAF
# 310 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_fastest_right
# 311 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 312 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_fastest_up
# 313 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 314 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 315 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 316 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 317 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs1: @ 81F8BB5
# 318 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_fastest_right
# 319 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_right
# 320 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_fastest_up
# 321 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 322 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 323 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_fastest_left
# 324 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 325 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_fastest_up
# 326 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 327 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 328 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 329 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
LittlerootTown_MaysHouse_1F_Movement_MayGoUpstairs2: @ 81F8BBF
# 330 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_fastest_left
# 331 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_left
# 332 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_in_place_fastest_up
# 333 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 334 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	walk_up
# 335 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	step_end
# 336 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 337 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
#if GAME_LANGUAGE == LANGUAGE_SPANISH
# 338 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_OhYoureTheNewNeighbor: @ 81F8BC5
# 339 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hola. ¿Quién eres tú?\p"
# 340 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ah…\n"
# 341 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ya…\p"
# 342 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¡Tú eres {PLAYER}{KUN} y te acabas\n"
# 343 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "de mudar aquí al lado! ¿Qué tal?\p"
# 344 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Nuestro {RIVAL} tiene más\n"
# 345 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "o menos tu edad.\p"
# 346 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Se ha emocionado tantísimo cuando\n"
# 347 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "ha sabido que venías a vivir aquí…\p"
# 348 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ahora está arriba, creo.$"
# 349 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 350 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather: @ 81F8CA5
# 351 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "De tal padre, tal retoño.\p"
# 352 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¡Mi marido está igual de entusiasmado\n"
# 353 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "por los Pokémon que nuestro retoño!\p"
# 354 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Cuando no está en su Laboratorio,\n"
# 355 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "anda perdido entre las hierbas altas.$"
# 356 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 357 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_TooBusyToNoticeVisit: @ 81F8D37
# 358 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¡Ay! ¡{RIVAL}!\p"
# 359 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¡Estos niños están tan ocupados\n"
# 360 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "con sus Pokémon que no se acuerdan\l"
# 361 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "de venir a ver a sus padres, {PLAYER}{KUN}!$"
# 362 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 363 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103: @ 81F8D93
# 364 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL} ha ido a la RUTA 103.\p"
# 365 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "De tal palo, tal astilla.\n"
# 366 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{RIVAL} es incapaz de quedarse\l"
# 367 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "en casa sin hacer nada.$"
# 368 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 369 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften: @ 81F8E01
# 370 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Creo que viajar con Pokémon\n"
# 371 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "es de lo mejor que hay.\p"
# 372 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Pero deberías ir a casa alguna vez\n"
# 373 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a decir a tu madre que estás bien…\p"
# 374 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Puede que ella no te lo diga, pero\n"
# 375 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "estará preocupada por ti, {PLAYER}{KUN}.$"
# 376 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 377 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_MayWhoAreYou: @ 81F8EC6
# 378 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¿Eh?\n"
# 379 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¿Quién…? ¿Quién eres tú?\p"
# 380 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ah…\n"
# 381 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ya…\p"
# 382 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Eres {PLAYER}{KUN}.\n"
# 383 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Y te acabas de mudar.\p"
# 384 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Mmm… Yo me llamo Aura.\n"
# 385 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¡Encantada!\p"
# 386 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Yo…\n"
# 387 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "sueño con hacerme amiga de miles\l"
# 388 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "de Pokémon de todo el mundo.\p"
# 389 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "He… oído algo sobre ti, {PLAYER}{KUN}.\n"
# 390 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Me lo ha dicho mi padre, el Prof. Abedul.\p"
# 391 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Tenía muchas ganas de que nos\n"
# 392 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "cayéramos bien e hiciéramos amistad.\p"
# 393 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Qué tontería, ¿no?\n"
# 394 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Si acabo de conocerte, {PLAYER}{KUN}…\p"
# 395 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ji, ji, ji…\p"
# 396 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¡Ahí va! ¡Se me había olvidado!\p"
# 397 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¡Tenía que ir a ayudar a mi padre\n"
# 398 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a atrapar Pokémon salvajes!\p"
# 399 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¡{PLAYER}{KUN}, nos vemos luego!$"
# 400 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 401 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_BrendanWhoAreYou: @ 81F90B4
# 402 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¿Eh?\n"
# 403 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¿Tú…?\p"
# 404 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¿Quién eres tú?\p"
# 405 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Ya… Eres {PLAYER}, ¿no?\n"
# 406 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Y te acabas de mudar, ¿verdad?\p"
# 407 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Y mi padre, el Prof. Abedul,\n"
# 408 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "me ha dicho que tu padre es un\l"
# 409 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Líder de Gimnasio, ¿cierto?\p"
# 410 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Yo me llamo Bruno.\n"
# 411 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¡Hola, vecina!\p"
# 412 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¿Y eso? {PLAYER}, ¿no tienes\n"
# 413 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "ningún Pokémon?\p"
# 414 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¿Quieres que atrape uno para ti?\p"
# 415 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¡Ahí va! ¡Se me había olvidado!\p"
# 416 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Tengo que ir a ayudar a mi padre\n"
# 417 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a atrapar Pokémon salvajes…\p"
# 418 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Bueno, pues otro día, ¿vale?$"
# 419 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 420 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon: @ 81F9262
# 421 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¡Anda, hola!\p"
# 422 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "¿Ya tienes tu propio Pokémon?$"
# 423 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
#else
# 424 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_OhYoureTheNewNeighbor: @ 81F8BC5
# 425 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, hello. And you are?\p"
# 426 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\n"
# 427 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … … …\p"
# 428 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}, our new next-door\n"
# 429 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "neighbor! Hi!\p"
# 430 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "We have a {STR_VAR_1} about the same\n"
# 431 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "age as you.\p"
# 432 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} was excited about making\n"
# 433 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a new friend.\p"
# 434 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Our {STR_VAR_1} is upstairs, I think.$"
# 435 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 436 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_LikeChildLikeFather: @ 81F8CA5
# 437 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like child, like father.\p"
# 438 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My husband is as wild about Pokémon\n"
# 439 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "as our child.\p"
# 440 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "If he's not at his Lab, he's likely\n"
# 441 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "scrabbling about in grassy places.$"
# 442 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 443 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_TooBusyToNoticeVisit: @ 81F8D37
# 444 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "That {RIVAL}!\p"
# 445 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I guess our child is too busy with\n"
# 446 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Pokémon to notice that you came\l"
# 447 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to visit, {PLAYER}{KUN}.$"
# 448 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 449 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_WentOutToRoute103: @ 81F8D93
# 450 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, {RIVAL} went out to Route 103\n"
# 451 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "just a little while ago.\p"
# 452 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Like father, like child.\n"
# 453 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{RIVAL} can't stay quietly at home.$"
# 454 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 455 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_ShouldGoHomeEverySoOften: @ 81F8E01
# 456 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I think it's wonderful for people to\n"
# 457 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "travel with Pokémon.\p"
# 458 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "But you should go home every so often\n"
# 459 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "to let your mother know you're okay.\p"
# 460 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "She might not say it, but I'm sure she\n"
# 461 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "worries about you, {PLAYER}{KUN}.$"
# 462 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 463 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_MayWhoAreYou: @ 81F8EC6
# 464 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh?\n"
# 465 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who… Who are you?\p"
# 466 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\n"
# 467 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "… … … … … … … …\p"
# 468 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}{KUN}.\n"
# 469 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So your move was today.\p"
# 470 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Um… I'm May.\n"
# 471 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Glad to meet you!\p"
# 472 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I…\n"
# 473 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I have this dream of becoming friends\l"
# 474 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "with Pokémon all over the world.\p"
# 475 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I heard about you, {PLAYER}{KUN}, from\n"
# 476 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "my dad, Prof. Birch.\p"
# 477 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was hoping that you would be nice,\n"
# 478 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, and that we could be friends.\p"
# 479 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, this is silly, isn't it?\n"
# 480 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I… I've just met you, {PLAYER}{KUN}.\p"
# 481 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Eheheh…\p"
# 482 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, no! I forgot!\p"
# 483 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I was supposed to go help Dad catch\n"
# 484 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild Pokémon!\p"
# 485 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "{PLAYER}{KUN}, I'll catch you later!$"
# 486 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 487 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_BrendanWhoAreYou: @ 81F90B4
# 488 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hey!\n"
# 489 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "You…\p"
# 490 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Who are you?\p"
# 491 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Oh, you're {PLAYER}, aren't you?\n"
# 492 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Moved in next door, right?\p"
# 493 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I didn't know that you're a girl.\p"
# 494 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Dad, Prof. Birch, said that our new\n"
# 495 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "next-door neighbor is a Gym Leader's\l"
# 496 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "kid, so I assumed you'd be a guy.\p"
# 497 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "My name's Brendan.\n"
# 498 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "So, hi, neighbor!\p"
# 499 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Huh? Hey, {PLAYER}, don't you have\n"
# 500 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "a Pokémon?\p"
# 501 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you want me to go catch you one?\p"
# 502 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Aw, darn, I forgot…\p"
# 503 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "I'm supposed to go help my dad catch\n"
# 504 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "some wild Pokémon.\p"
# 505 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Some other time, okay?$"
# 506 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"

# 507 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
RivalsHouse_1F_Text_DoYouHavePokemon: @ 81F9262
# 508 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Hi, neighbor!\p"
# 509 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "Do you already have your\n"
# 510 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
	.string "own Pokémon?$"
# 511 "data/maps/LittlerootTown_MaysHouse_1F/scripts.pory"
#endif
