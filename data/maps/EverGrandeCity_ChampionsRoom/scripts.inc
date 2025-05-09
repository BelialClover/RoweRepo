# 1 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_WALLACE, 1
# 3 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_RIVAL, 2
# 4 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
.set LOCALID_BIRCH, 3
# 5 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 6 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_MapScripts:: @ 82289EF
# 7 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_ChampionsRoom_OnTransition
# 8 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_ChampionsRoom_OnWarp
# 9 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_ChampionsRoom_OnFrame
# 10 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.byte 0
# 11 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 12 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnTransition: @ 82289FF
# 13 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 14 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 15 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 16 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnWarp: @ 8228A05
# 17 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth
# 18 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 19 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 20 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayerTurnNorth:: @ 8228A0F
# 21 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 22 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 23 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 24 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_OnFrame: @ 8228A14
# 25 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_ChampionsRoom_EventScript_EnterRoom
# 26 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.2byte 0
# 27 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 28 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_EnterRoom:: @ 8228A1E
# 29 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	lockall
# 30 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp4
# 31 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 32 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 33 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace
# 34 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 35 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 36 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Wallace
# 37 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
    releaseall
# 38 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
    end
# 39 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 40 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerApproachWallace: @ 8228A42
# 41 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 42 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 43 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 44 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 45 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Wallace:: @ 8228A45
# 46 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_CHAMPION, 0
# 47 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 48 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLACE, EverGrandeCity_ChampionsRoom_Text_Defeat
# 49 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_Defeated
# 50 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 51 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 52 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_Defeated:: @ 8228A61
# 53 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 54 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, 0
# 55 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, 0
# 56 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	special DrawWholeMapView
# 57 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 58 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 59 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_DOOR
# 60 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 61 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
# 62 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic
# 63 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
# 64 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic
# 65 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_RIVAL
# 66 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer
# 67 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 68 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
# 69 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_MayAdvice
# 70 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
# 71 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto_if_eq EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice
# 72 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 73 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 74 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayMayMusic:: @ 8228ABC
# 75 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 0
# 76 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 77 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 78 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_PlayBrendanMusic:: @ 8228AC1
# 79 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 0
# 80 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 81 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 82 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayAdvice:: @ 8228AC6
# 83 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayAdvice, MSGBOX_DEFAULT
# 84 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 85 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 86 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 87 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 88 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 89 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 90 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 91 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver, MSGBOX_DEFAULT
# 92 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 93 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 94 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 95 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanAdvice:: @ 8228AFB
# 96 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanAdvice, MSGBOX_DEFAULT
# 97 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 40
# 98 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	playse SE_PIN
# 99 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 100 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 101 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 102 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 103 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth
# 104 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon, MSGBOX_DEFAULT
# 105 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	goto EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF
# 106 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 107 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 108 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BirchArrivesExitForHoF:: @ 8228B30
# 109 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 110 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	addobject LOCALID_BIRCH
# 111 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, EverGrandeCity_ChampionsRoom_Movement_BirchArrives
# 112 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 113 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 114 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 115 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex, MSGBOX_DEFAULT
# 116 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call ProfBirch_EventScript_RatePokedex
# 117 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BirchCongratulations, MSGBOX_DEFAULT
# 118 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFastestUp
# 119 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 120 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 121 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, Common_Movement_WalkInPlaceFastestDown
# 122 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 123 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe, MSGBOX_DEFAULT
# 124 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 125 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 30
# 126 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart
# 127 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart
# 128 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFastestUp
# 129 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalFollows
# 130 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 131 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay 20
# 132 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
# 133 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 134 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside, MSGBOX_DEFAULT
# 135 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	checkplayergender
# 136 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, MALE
# 137 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations
# 138 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	compare VAR_RESULT, FEMALE
# 139 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	call_if_eq EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations
# 140 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	closemessage
# 141 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_WALLACE, EverGrandeCity_ChampionsRoom_Movement_WallaceExit
# 142 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_ChampionsRoom_Movement_PlayerExit
# 143 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 144 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_GYM_GREETER
# 145 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	warp MAP_EVER_GRANDE_CITY_HALL_OF_FAME, 255, 7, 16
# 146 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitstate
# 147 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	releaseall
# 148 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	end
# 149 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 150 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_MayCongratulations:: @ 8228BEB
# 151 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_MayCongratulations, MSGBOX_DEFAULT
# 152 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 153 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 154 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_BrendanCongratulations:: @ 8228BF4
# 155 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	msgbox EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations, MSGBOX_DEFAULT
# 156 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 157 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 158 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalApproachPlayer:: @ 8228BFD
# 159 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer
# 160 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 161 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 162 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 163 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 164 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 165 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_EventScript_RivalLookBackAndForth:: @ 8228C12
# 166 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth
# 167 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	waitmovement 0
# 168 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	return
# 169 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 170 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExitStart: @ 8228C1D
# 171 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 172 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 173 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 174 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 175 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_PlayerExit: @ 8228C20
# 176 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 177 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 178 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 179 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 180 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 181 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 182 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 183 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalApproachPlayer: @ 8228C26
# 184 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 185 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 186 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 187 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 188 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 189 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_left
# 190 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 191 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_fastest_right
# 192 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 193 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 194 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalLookBackAndForth: @ 8228C2F
# 195 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_fastest_up
# 196 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 197 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_fastest_right
# 198 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 199 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_fastest_up
# 200 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 201 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_fastest_right
# 202 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_16
# 203 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 204 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 205 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_RivalFollows: @ 8228C38
# 206 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 207 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 208 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 209 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 210 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExitStart: @ 8228C3B
# 211 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 212 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 213 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_fastest_down
# 214 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 215 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 216 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_WallaceExit: @ 8228C3F
# 217 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 218 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	delay_8
# 219 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	set_invisible
# 220 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 221 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 222 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Movement_BirchArrives: @ 8228C43
# 223 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 224 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 225 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 226 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 227 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 228 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_right
# 229 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_up
# 230 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	walk_in_place_fastest_left
# 231 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	step_end
# 232 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 233 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_IntroSpeech: @ 8228C4C
# 234 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: Welcome, {PLAYER}{KUN}.\p"
# 235 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That incident in Sootopolis City…\n"
# 236 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was superb work, putting an end\l"
# 237 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to that crisis all by yourself.\p"
# 238 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Oops!\p"
# 239 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It wouldn't be fair to say that you\n"
# 240 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "alone ended the crisis.\p"
# 241 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You overcame that difficult situation\n"
# 242 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "by working as one with your Pokémon.\p"
# 243 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "We Trainers raise Pokémon by giving\n"
# 244 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "them items and by teaching them new\l"
# 245 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "techniques for battle.\p"
# 246 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But we ourselves also learn many\n"
# 247 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "things from Pokémon.\p"
# 248 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And this is where your achievements\n"
# 249 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "are put to the test against what\l"
# 250 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "others like you have achieved.\p"
# 251 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now!\p"
# 252 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Who can most elegantly dance with\n"
# 253 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "their Pokémon in Hoenn?\p"
# 254 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Show me right here and now!$"
# 255 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 256 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_Defeat: @ 8228EAC
# 257 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I, the Champion, fall in defeat…\p"
# 258 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That was wonderful work.\n"
# 259 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You were elegant, infuriatingly so.\l"
# 260 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "And yet it was utterly glorious!\p"
# 261 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Kudos to you, {PLAYER}{KUN}!\p"
# 262 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You are a truly noble Pokémon\n"
# 263 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Trainer!$"
# 264 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 265 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_PostBattleSpeech: @ 8228F66
# 266 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: The Pokémon you sent into\n"
# 267 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "battle…\p"
# 268 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "At times they danced like a spring\n"
# 269 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "breeze, and at times they struck\l"
# 270 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "like lightning.\p"
# 271 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It was with light, yet surefooted,\n"
# 272 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "elegance that you led your Pokémon.\p"
# 273 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Even I felt bedazzled by your\n"
# 274 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "masterful performance!\p"
# 275 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You now stand at the glorious peak\n"
# 276 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "of the Pokémon League.\p"
# 277 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I now proclaim you to be the new\n"
# 278 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Hoenn region…$"
# 279 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 280 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayAdvice: @ 82290CA
# 281 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "May: {PLAYER}{KUN}!\p"
# 282 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here's some advice before you challenge\n"
# 283 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the Champion…$"
# 284 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 285 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayItsAlreadyOver: @ 822910B
# 286 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "May: Huh?\n"
# 287 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What, what, what?\p"
# 288 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}…\n"
# 289 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Could it be that…\l"
# 290 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It's already over?$"
# 291 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 292 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanAdvice: @ 8229152
# 293 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Brendan: {PLAYER}!\p"
# 294 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "How would you like some advice before\n"
# 295 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "you challenge the Champion?…$"
# 296 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 297 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanYouveWon: @ 82291A2
# 298 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Brendan: {PLAYER}…\p"
# 299 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Are you trying to tell me…\n"
# 300 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You've beaten the Champion?$"
# 301 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 302 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchArriveRatePokedex: @ 82291E6
# 303 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Prof. Birch: See?\n"
# 304 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What did I tell you, {RIVAL}?\p"
# 305 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Didn't I tell you that you don't need\n"
# 306 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "to worry about {PLAYER}{KUN}?\p"
# 307 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 308 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}, you've finally done it.\p"
# 309 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "When I heard that you defeated your\n"
# 310 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "own father at the Petalburg Gym,\l"
# 311 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I thought perhaps you had a chance…\p"
# 312 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "But to think you've actually become\n"
# 313 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "the Champion!\p"
# 314 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Ah, yes!\p"
# 315 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "What became of your Pokédex?\n"
# 316 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Here, let me see.$"
# 317 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 318 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BirchCongratulations: @ 822934D
# 319 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Prof. Birch: Anyways,\n"
# 320 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "congratulations!\p"
# 321 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Now, go proudly into the final room!$"
# 322 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 323 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceComeWithMe: @ 8229399
# 324 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: {PLAYER}{KUN}…\p"
# 325 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "No, let me rephrase that properly.\p"
# 326 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "The new Champion!\p"
# 327 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Come with me.$"
# 328 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 329 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_WallaceWaitOutside: @ 82293EB
# 330 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Wallace: I'm sorry, but…\p"
# 331 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "From here on, only those Trainers who\n"
# 332 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "have become Champions may enter.\p"
# 333 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "You'll have to wait outside with\n"
# 334 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Prof. Birch.$"
# 335 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 336 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_MayCongratulations: @ 8229479
# 337 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "May: Groan…\p"
# 338 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\n"
# 339 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 340 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "I'm just joking! That's okay!\n"
# 341 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "That's the rule!\p"
# 342 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 343 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Honestly, congratulations!$"
# 344 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"

# 345 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
EverGrandeCity_ChampionsRoom_Text_BrendanCongratulations: @ 82294F5
# 346 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Brendan: Whaaaat?! … … … … …\n"
# 347 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "… … … … … … … …\p"
# 348 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "It can't be helped if that's the rule.\p"
# 349 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "{PLAYER}, way to go!\n"
# 350 "data/maps/EverGrandeCity_ChampionsRoom/scripts.pory"
	.string "Congratulations!$"
