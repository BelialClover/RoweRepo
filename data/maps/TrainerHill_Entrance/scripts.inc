# 1 "data/maps/TrainerHill_Entrance/scripts.pory"

# 2 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_NURSE, 2
# 4 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_GIRL, 4
# 5 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_MAN, 5
# 6 "data/maps/TrainerHill_Entrance/scripts.pory"

# 7 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_MapScripts:: @ 82680AC
# 8 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_Entrance_OnResume
# 9 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerHill_Entrance_OnReturn
# 10 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Entrance_OnTransition
# 11 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Entrance_OnLoad
# 12 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Entrance_OnFrame
# 13 "data/maps/TrainerHill_Entrance/scripts.pory"
	.byte 0
# 14 "data/maps/TrainerHill_Entrance/scripts.pory"

# 15 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnTransition: @ 82680C6
# 16 "data/maps/TrainerHill_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_TRAINER_HILL
# 17 "data/maps/TrainerHill_Entrance/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
# 18 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 19 "data/maps/TrainerHill_Entrance/scripts.pory"

# 20 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 21 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnWarp: @ 82680CF
# 22 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 23 "data/maps/TrainerHill_Entrance/scripts.pory"

# 24 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnResume: @ 82680D0
# 25 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_resumetimer
# 26 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 0
# 27 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getusingereader
# 28 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE  @ VAR_RESULT always FALSE here
# 29 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq TrainerHill_Entrance_EventScript_TryFaceAttendant
# 30 "data/maps/TrainerHill_Entrance/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 9, 6
# 31 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 32 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 33 "data/maps/TrainerHill_Entrance/scripts.pory"

# 34 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_TryFaceAttendant:: @ 82680FF
# 35 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getwon
# 36 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, TRUE
# 37 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant
# 38 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 39 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 40 "data/maps/TrainerHill_Entrance/scripts.pory"

# 41 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant:: @ 826811A
# 42 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 43 "data/maps/TrainerHill_Entrance/scripts.pory"

# 44 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnReturn: @ 826811B
# 45 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_NURSE
# 46 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_ATTENDANT
# 47 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_MAN
# 48 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_GIRL
# 49 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 50 "data/maps/TrainerHill_Entrance/scripts.pory"

# 51 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnLoad: @ 8268128
# 52 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_TEMP_D, 17
# 53 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq TrainerHill_Entrance_EventScript_OpenCounterDoor
# 54 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 55 "data/maps/TrainerHill_Entrance/scripts.pory"

# 56 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_OpenCounterDoor:: @ 8268134
# 57 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_GreenFloorTile, 0
# 58 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 59 "data/maps/TrainerHill_Entrance/scripts.pory"

# 60 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnFrame: @ 826813E
# 61 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, TrainerHill_Entrance_EventScript_ExitChallenge
# 62 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_ExitElevator
# 63 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, TrainerHill_Entrance_EventScript_EntryTrigger
# 64 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, TrainerHill_EventScript_WarpToEntranceCounter
# 65 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte 0
# 66 "data/maps/TrainerHill_Entrance/scripts.pory"

# 67 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitElevator:: @ 8268160
# 68 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 69 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerExitElevator
# 70 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 71 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, 1
# 72 "data/maps/TrainerHill_Entrance/scripts.pory"
	special DrawWholeMapView
# 73 "data/maps/TrainerHill_Entrance/scripts.pory"
	playse SE_CLICK
# 74 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitse
# 75 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_D, 0
# 76 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 77 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 78 "data/maps/TrainerHill_Entrance/scripts.pory"

# 79 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallenge:: @ 8268182
# 80 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 1
# 81 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getstatus
# 82 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 83 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_EventScript_ExitChallengeLost
# 84 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_EventScript_ExitChallengeECard
# 85 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_NORMAL, TrainerHill_Entrance_EventScript_EndExitChallenge
# 86 "data/maps/TrainerHill_Entrance/scripts.pory"

# 87 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeLost:: @ 82681B5
# 88 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 89 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 90 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
# 91 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_PlayerExitChallenge
# 92 "data/maps/TrainerHill_Entrance/scripts.pory"

# 93 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeECard:: @ 82681CA
# 94 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 95 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 96 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
# 97 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerExitChallenge:: @ 82681DA
# 98 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 99 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 100 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 101 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 102 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 103 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 104 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EndExitChallenge:: @ 82681EE
# 105 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 106 "data/maps/TrainerHill_Entrance/scripts.pory"

# 107 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Nurse:: @ 82681EF
# 108 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 109 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 110 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 111 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitbuttonpress
# 112 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 113 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 114 "data/maps/TrainerHill_Entrance/scripts.pory"

# 115 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Attendant:: @ 82681FD
# 116 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 117 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 118 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_inchallenge
# 119 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
# 120 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq TrainerHill_Entrance_EventScript_ThanksForPlaying
# 121 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
# 122 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AttendantEnd
# 123 "data/maps/TrainerHill_Entrance/scripts.pory"

# 124 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ThanksForPlaying:: @ 826821F
# 125 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 126 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AttendantEnd:: @ 8268227
# 127 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 128 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 129 "data/maps/TrainerHill_Entrance/scripts.pory"

# 130 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger:: @ 8268229
# 131 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 132 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 133 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_Closed
# 134 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
# 135 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getsaved
# 136 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
# 137 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq TrainerHill_Entrance_EventScript_SaveGame
# 138 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_allfloorsused
# 139 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, TRUE
# 140 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq TrainerHill_Entrance_EventScript_AllFloorsUsed
# 141 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
# 142 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 143 "data/maps/TrainerHill_Entrance/scripts.pory"

# 144 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AllFloorsUsed:: @ 8268275
# 145 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
# 146 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers:: @ 826827D
# 147 "data/maps/TrainerHill_Entrance/scripts.pory"
	message TrainerHill_Entrance_Text_LikeToChallengeTrainers
# 148 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 149 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 15, 6, MULTI_YESNOINFO, 0
# 150 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 151 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 0, TrainerHill_Entrance_EventScript_ChooseChallenge
# 152 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, TrainerHill_Entrance_EventScript_CancelEntry
# 153 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, TrainerHill_Entrance_EventScript_Info
# 154 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 155 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 156 "data/maps/TrainerHill_Entrance/scripts.pory"

# 157 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Info:: @ 82682BA
# 158 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ExplainTrainerHill, MSGBOX_DEFAULT
# 159 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 160 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 161 "data/maps/TrainerHill_Entrance/scripts.pory"

# 162 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ChooseChallenge:: @ 82682C8
# 163 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, 0
# 164 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 165 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 4, TrainerHill_Entrance_EventScript_CancelEntry
# 166 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 167 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_settag VAR_RESULT
# 168 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
# 169 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 170 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 171 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
# 172 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_start
# 173 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 174 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 175 "data/maps/TrainerHill_Entrance/scripts.pory"

# 176 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_CancelEntry:: @ 8268314
# 177 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 178 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
# 179 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 180 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 181 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 182 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 183 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 184 "data/maps/TrainerHill_Entrance/scripts.pory"

# 185 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveGame:: @ 826832E
# 186 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
# 187 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 188 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 1
# 189 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_SaveGame
# 190 "data/maps/TrainerHill_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
# 191 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq TrainerHill_Entrance_EventScript_SaveFailed
# 192 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 193 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 194 "data/maps/TrainerHill_Entrance/scripts.pory"

# 195 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveFailed:: @ 826835C
# 196 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_clearsaved
# 197 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
# 198 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 199 "data/maps/TrainerHill_Entrance/scripts.pory"

# 200 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Closed:: @ 826836A
# 201 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_StillGettingReady, MSGBOX_DEFAULT
# 202 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 203 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 204 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 205 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 206 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 207 "data/maps/TrainerHill_Entrance/scripts.pory"

# 208 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerFaceAttendant: @ 826837F
# 209 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_right
# 210 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 211 "data/maps/TrainerHill_Entrance/scripts.pory"

# 212 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PushPlayerBackFromCounter: @ 8268381
# 213 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 214 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 215 "data/maps/TrainerHill_Entrance/scripts.pory"

# 216 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 217 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_FaceUp: @ 8268383
# 218 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_up
# 219 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 220 "data/maps/TrainerHill_Entrance/scripts.pory"

# 221 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerExitElevator: @ 8268385
# 222 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 223 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 224 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 225 "data/maps/TrainerHill_Entrance/scripts.pory"

# 226 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Records:: @ 8268388
# 227 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 228 "data/maps/TrainerHill_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 229 "data/maps/TrainerHill_Entrance/scripts.pory"
	special ShowTrainerHillRecords
# 230 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitstate
# 231 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 232 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 233 "data/maps/TrainerHill_Entrance/scripts.pory"

# 234 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Man:: @ 8268391
# 235 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_ManTrainerHillClosed
# 236 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
# 237 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 238 "data/maps/TrainerHill_Entrance/scripts.pory"

# 239 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ManTrainerHillClosed:: @ 82683A3
# 240 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_CantWaitToTestTheWaters, MSGBOX_NPC
# 241 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 242 "data/maps/TrainerHill_Entrance/scripts.pory"

# 243 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Girl:: @ 82683AC
# 244 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, TrainerHill_Entrance_EventScript_GirlTrainerHillClosed
# 245 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
# 246 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 247 "data/maps/TrainerHill_Entrance/scripts.pory"

# 248 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_GirlTrainerHillClosed:: @ 82683BE
# 249 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
# 250 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 251 "data/maps/TrainerHill_Entrance/scripts.pory"

# 252 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Clerk:: @ 82683C7
# 253 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 254 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 255 "data/maps/TrainerHill_Entrance/scripts.pory"
	message gText_HowMayIServeYou
# 256 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 257 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart 0
# 258 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 259 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 260 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 261 "data/maps/TrainerHill_Entrance/scripts.pory"

# 262 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_StillGettingReady: @ 8268430
# 263 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the Trainer Hill where\n"
# 264 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 265 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Trainers.\p"
# 266 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Unfortunately, we're still getting\n"
# 267 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "things ready. Please come back later!$"
# 268 "data/maps/TrainerHill_Entrance/scripts.pory"

# 269 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WelcomeToTrainerHill: @ 82684C6
# 270 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Welcome!\p"
# 271 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the Trainer Hill where\n"
# 272 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 273 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Trainers!$"
# 274 "data/maps/TrainerHill_Entrance/scripts.pory"

# 275 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_SaveGameBeforeEnter: @ 826851C
# 276 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Is this your first visit here?\p"
# 277 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Before you enter, please save\n"
# 278 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your game.$"
# 279 "data/maps/TrainerHill_Entrance/scripts.pory"

# 280 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersUpToFloorX: @ 8268564
# 281 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 282 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The Trainers here now are…\p"
# 283 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Up to floor no. {STR_VAR_1}.$"
# 284 "data/maps/TrainerHill_Entrance/scripts.pory"

# 285 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersInEveryRoom: @ 826859E
# 286 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 287 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The Trainers here now are…\p"
# 288 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "There appear to be Trainers gathered\n"
# 289 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in every room.$"
# 290 "data/maps/TrainerHill_Entrance/scripts.pory"

# 291 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_LikeToChallengeTrainers: @ 82685F8
# 292 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to challenge the\n"
# 293 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "waiting Trainers?$"
# 294 "data/maps/TrainerHill_Entrance/scripts.pory"

# 295 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TimeProgessGetSetGo: @ 826862A
# 296 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I will time your progress.\n"
# 297 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Best of luck!\p"
# 298 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "On your marks…\p"
# 299 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Get set…\p"
# 300 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Go!$"
# 301 "data/maps/TrainerHill_Entrance/scripts.pory"

# 302 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_PleaseVisitUsAgain: @ 826866F
# 303 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please do visit us again!$"
# 304 "data/maps/TrainerHill_Entrance/scripts.pory"

# 305 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TooBadTremendousEffort: @ 8268689
# 306 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That was too bad.\p"
# 307 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I think you put in a tremendous\n"
# 308 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "effort in your battling.\p"
# 309 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please come back and try again!$"
# 310 "data/maps/TrainerHill_Entrance/scripts.pory"

# 311 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_HopeYouGiveItYourBest: @ 82686F4
# 312 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I hope you give it your best.$"
# 313 "data/maps/TrainerHill_Entrance/scripts.pory"

# 314 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_MovedReceptionHereForSwitch: @ 8268712
# 315 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "When the Trainers switch places,\n"
# 316 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the movement can be hectic.\p"
# 317 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To avoid the stampede, we moved\n"
# 318 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter here.\p"
# 319 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm sorry for the inconvenience.$"
# 320 "data/maps/TrainerHill_Entrance/scripts.pory"

# 321 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ThankYouForPlaying: @ 82687AC
# 322 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Thank you for playing!$"
# 323 "data/maps/TrainerHill_Entrance/scripts.pory"

# 324 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ExplainTrainerHill: @ 82687C3
# 325 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Here at the Trainer Hill, we conduct\n"
# 326 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "an event called the Time Attack.\p"
# 327 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "It is a race that measures how long\n"
# 328 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you take to reach our owner on\l"
# 329 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the rooftop from this counter.\p"
# 330 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The fastest times are posted on\n"
# 331 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the Time Board--try competing with\l"
# 332 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your friends.\p"
# 333 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "In Trainer battles along the way,\n"
# 334 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "neither Exp. Points nor money will\l"
# 335 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "be awarded.$"
# 336 "data/maps/TrainerHill_Entrance/scripts.pory"

# 337 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 338 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon: @ 826890D
# 339 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, I'm sorry, but you appear to have\n"
# 340 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "only one Pokémon with you.\p"
# 341 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You will need at least two Pokémon\n"
# 342 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "to enter this event.$"
# 343 "data/maps/TrainerHill_Entrance/scripts.pory"

# 344 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouFinallyCameBravo: @ 8268986
# 345 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hm! Hm!\p"
# 346 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You finally came!\n"
# 347 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Yes, you have arrived!\p"
# 348 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wait! Don't say it!\n"
# 349 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I know why you came all the way\l"
# 350 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here by yourself!\p"
# 351 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You wanted to see me, the owner\n"
# 352 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "of the Trainer Hill, because…\p"
# 353 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You want to form a tag team with me!\n"
# 354 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wa-hoo!\p"
# 355 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "…Uh?\n"
# 356 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That's not it?\p"
# 357 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Anyway, I watched you on your way up.\n"
# 358 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Marvelous battling! Bravo, indeed!$"
# 359 "data/maps/TrainerHill_Entrance/scripts.pory"

# 360 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_HaveTheMostMarvelousGift: @ 8268AC5
# 361 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "For a marvelous someone like you,\n"
# 362 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I have the most marvelous gift!$"
# 363 "data/maps/TrainerHill_Entrance/scripts.pory"

# 364 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_FullUpBeBackLaterForThis: @ 8268B07
# 365 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, no, full up with things!\n"
# 366 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You'll be back later for this!$"
# 367 "data/maps/TrainerHill_Entrance/scripts.pory"

# 368 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_GotHereMarvelouslyQuickly: @ 8268B43
# 369 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, hold on here! Did you possibly get\n"
# 370 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here marvelously quickly?\p"
# 371 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "How splendid! You needn't have\n"
# 372 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "hurried so to see me!\p"
# 373 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That is so delightful. I'll have the Time\n"
# 374 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Board at the reception updated!$"
# 375 "data/maps/TrainerHill_Entrance/scripts.pory"

# 376 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouWerentVeryQuick: @ 8268C03
# 377 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "But, oh…\n"
# 378 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You weren't very quick getting here.$"
# 379 "data/maps/TrainerHill_Entrance/scripts.pory"

# 380 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_ArriveZippierNextTime: @ 8268C31
# 381 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Perhaps it would please me more if you\n"
# 382 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "arrived zippier next time.\p"
# 383 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Then, I should be pleased to form\n"
# 384 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "a tag team with you!\p"
# 385 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Until we meet again, amigo!$"
# 386 "data/maps/TrainerHill_Entrance/scripts.pory"

# 387 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner: @ 8268CC6
# 388 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I had the Trainer Hill built for but\n"
# 389 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "one reason and one only!\p"
# 390 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To find the most suitable partner\n"
# 391 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "with whom I may form a tag team!$"
# 392 "data/maps/TrainerHill_Entrance/scripts.pory"

# 393 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ChallengeTime: @ 8268D47
# 394 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "{STR_VAR_1} min. {STR_VAR_2}.{STR_VAR_3} sec.$"
# 395 "data/maps/TrainerHill_Entrance/scripts.pory"

# 396 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead: @ 8268D5A
# 397 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Who knows what sort of Trainers\n"
# 398 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "and Pokémon combos are ahead?\p"
# 399 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "All I know is that I'll knock aside\n"
# 400 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "anyone that stands in my way!$"
# 401 "data/maps/TrainerHill_Entrance/scripts.pory"

# 402 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_CantWaitToTestTheWaters: @ 8268DDA
# 403 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I heard tough Trainers come to this\n"
# 404 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Trainer Hill from all over.\p"
# 405 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I can't wait to test the waters!\p"
# 406 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'll knock aside anyone that stands\n"
# 407 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in my way!$"
# 408 "data/maps/TrainerHill_Entrance/scripts.pory"

# 409 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop: @ 8268E6A
# 410 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you see the Time Board over there?\p"
# 411 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "My friends and I are trying to see who\n"
# 412 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "can reach the top in the least time.$"
# 413 "data/maps/TrainerHill_Entrance/scripts.pory"

# 414 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen: @ 8268EDC
# 415 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you know when they're opening\n"
# 416 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "this place up?\p"
# 417 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm waiting here to be the first\n"
# 418 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "challenger ever!$"
# 419 "data/maps/TrainerHill_Entrance/scripts.pory"

# 420 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Elevator_Text_ReturnToReception: @ 8268F3E
# 421 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to return to\n"
# 422 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter?$"
