# 1 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_NORMAN, 1
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLY, 10
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLYS_DAD, 11
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"

# 6 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts:: @ 8204889
# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 8 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 9 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_OnFrame
# 10 "data/maps/PetalburgCity_Gym/scripts.pory"
	.byte 0
# 11 "data/maps/PetalburgCity_Gym/scripts.pory"

# 12 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad: @ 820489E
# 13 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species
# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_OpenUnlockedDoors
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 7
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_ge PetalburgCity_Gym_EventScript_UnlockAllDoors
# 18 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 19 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 20 "data/maps/PetalburgCity_Gym/scripts.pory"

# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenUnlockedDoors:: @ 82048B5
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"

# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 41 "data/maps/PetalburgCity_Gym/scripts.pory"

# 42 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors:: @ 82048FF
# 43 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 44 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 53 "data/maps/PetalburgCity_Gym/scripts.pory"

# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition: @ 820492D
# 55 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 1
# 56 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_MoveWallyToEntrance
# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	//call_if_lt PetalburgCity_Gym_EventScript_MoveNormanToEntrance
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
	//call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 61 "data/maps/PetalburgCity_Gym/scripts.pory"

# 62 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveWallyToEntrance:: @ 820494D
# 63 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_WALLY, 5, 108
# 64 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 65 "data/maps/PetalburgCity_Gym/scripts.pory"

# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveNormanToEntrance:: @ 8204955
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 68 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 69 "data/maps/PetalburgCity_Gym/scripts.pory"

# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch:: @ 820495D
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 72 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 8
# 76 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 79 "data/maps/PetalburgCity_Gym/scripts.pory"

# 80 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront:: @ 8204985
# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"

# 84 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp: @ 820498B
# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"

# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth:: @ 8204995
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"

# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnFrame: @ 820499A
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"

# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial:: @ 82049A4
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"

# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym: @ 82049EC
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"

# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman_3:: @ 82049F1
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanBattle
# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"

# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth:: @ 8204A80
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"

# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth:: @ 8204A8B
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"

# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest:: @ 8204A96
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"

# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast:: @ 8204AA1
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"

# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial:: @ 8204AAC
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLY
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 0
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_WallyArriveSouth
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_WallyArriveNorth
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 0
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 0
# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 0
# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_NormanFaceDoorWest
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_NormanFaceDoorEast
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 0
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_WallyFacePlayer
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_WallyFaceDown
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_WallyFacePlayer
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_WallyFacePlayer
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 0
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 255, 15, 8
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"

# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth:: @ 8204C31
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFastestDown
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"

# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth:: @ 8204C43
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFastestRight
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"

# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast:: @ 8204C5F
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFastestDown
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"

# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth:: @ 8204C78
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFastestDown
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"

# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth:: @ 8204C91
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"

# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest:: @ 8204CA3
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"

# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast:: @ 8204CB5
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"

# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth:: @ 8204CC7
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFastestUp
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"

# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth:: @ 8204CD2
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFastestDown
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"

# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest:: @ 8204CE4
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFastestRight
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"

# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast:: @ 8204CF6
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFastestLeft
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"

# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth:: @ 8204D08
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFastestDown
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"

# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth:: @ 8204D13
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFastestRight
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"

# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest:: @ 8204D1E
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFastestDown
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"

# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast:: @ 8204D29
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFastestDown
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"

# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer:: @ 8204D34
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"

# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown:: @ 8204D3F
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFastestDown
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"

# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges:: @ 8204D4A
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"

# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge:: @ 8204D54
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"

# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges:: @ 8204D5E
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 337 "data/maps/PetalburgCity_Gym/scripts.pory"

# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges:: @ 8204D68
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"

# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth:: @ 8204D72
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"

# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth:: @ 8204D73
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFastestDown
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 351 "data/maps/PetalburgCity_Gym/scripts.pory"

# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest:: @ 8204D7E
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"

# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast:: @ 8204D7F
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"

# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2:: @ 8204DAC
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"

# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry:: @ 8204DCE
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY, 1
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY, 1
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_ENIGMA_BERRY_AVAILABLE, 0
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"

# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry:: @ 8204E17
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"

# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry:: @ 8204E1D
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_NormanPostBattle
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanDefeated
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanDefeated::
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitfanfare
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_NORMAN_REMATCH
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle:: @ 8204D80
# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_NORMAN_REMATCH, PetalburgCity_Gym_EventScript_NormanRematch
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
//Rematch
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch:: @ 8204DB3
# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPreRematch, MSGBOX_DEFAULT
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_Start_Rematch_1
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematchEnd::
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Gym_EventScript_Reset_Random_Rematch
# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_NORMAN_REMATCH
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Start_Rematch_1::
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_TM54_FALSE_SWIPE, 1
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_Start_Rematch_2
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanRematchDefeat
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM54_FALSE_SWIPE
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanRematchEnd
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Start_Rematch_2::
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM08 PetalburgCity_Gym_EventScript_Start_Rematch_Party_1
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_TM100_CONFIDE, 1
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_Start_Rematch_3
# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_2, PetalburgCity_Gym_Text_NormanRematchDefeat
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM100_CONFIDE
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanRematchEnd
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Start_Rematch_3::
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM42 PetalburgCity_Gym_EventScript_Start_Rematch_Party_2
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_TM96_NATURE_POWER, 1
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_Start_Rematch_4
# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_3, PetalburgCity_Gym_Text_NormanRematchDefeat
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM96_NATURE_POWER
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanRematchEnd
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Start_Rematch_4::
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM40 PetalburgCity_Gym_EventScript_Start_Rematch_Party_3
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_TM42_FACADE, 1
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_Start_Rematch_5
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_4, PetalburgCity_Gym_Text_NormanRematchDefeat
# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM42_FACADE
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanRematchEnd
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Start_Rematch_5::
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04 PetalburgCity_Gym_EventScript_Start_Rematch_Party_4
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_GOT_KANGASKHAN_MEGA_STONE PetalburgCity_Gym_EventScript_Start_Rematch_6
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_4, PetalburgCity_Gym_Text_NormanRematchDefeat
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GetMegaStone, MSGBOX_DEFAULT
# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_KANGASKHANITE
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_GOT_KANGASKHAN_MEGA_STONE
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanRematchEnd
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Start_Rematch_6::
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM03 PetalburgCity_Gym_EventScript_Start_Rematch_Party_4
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_TM68_GIGA_IMPACT, 1
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_Start_Rematch_Final
# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_5, PetalburgCity_Gym_Text_NormanRematchDefeat
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM68_GIGA_IMPACT
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanRematchEnd
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Start_Rematch_Final::
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	random 5
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_RESULT
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_Start_Rematch_Party_1
# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_Start_Rematch_Party_2
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_Start_Rematch_Party_3
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_Start_Rematch_Party_4
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_Start_Rematch_Party_5
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Start_Rematch_Party_1::
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanRematchDefeat
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, PetalburgCity_Gym_EventScript_NormanRematchEnd
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_CALM_MINT, 3
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanRematchEnd
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Start_Rematch_Party_2::
# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_2, PetalburgCity_Gym_Text_NormanRematchDefeat
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, PetalburgCity_Gym_EventScript_NormanRematchEnd
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_GENTLE_MINT, 3
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanRematchEnd
# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Start_Rematch_Party_3::
# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_3, PetalburgCity_Gym_Text_NormanRematchDefeat
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, PetalburgCity_Gym_EventScript_NormanRematchEnd
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_CAREFUL_MINT, 3
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanRematchEnd
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Start_Rematch_Party_4::
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_4, PetalburgCity_Gym_Text_NormanRematchDefeat
# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, PetalburgCity_Gym_EventScript_NormanRematchEnd
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_SASSY_MINT, 3
# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanRematchEnd
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Start_Rematch_Party_5::
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_5, PetalburgCity_Gym_Text_NormanRematchDefeat
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, PetalburgCity_Gym_EventScript_NormanRematchEnd
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_SERIOUS_MINT, 4
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_NormanRematchEnd
# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GetTM:
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Please take this\n"
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Technical Machine.$"
# 557 "data/maps/PetalburgCity_Gym/scripts.pory"

# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GetMegaStone:
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Please take this\n"
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Mega Stone, with you.\p"
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Make a Kangaskhan hold it to\n"
# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "unleash its Hidden Potential.$"
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GetReward:
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Please take this\n"
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Item as a Reward.$"
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"

# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
//rematches end
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
Gym_Text_Takethis2:
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Take this too.$"
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"
//
# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade:: @ 8204ED2
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox Gym_Text_Takethis2, MSGBOX_DEFAULT
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM54_FALSE_SWIPE
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"

# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesNorth:: @ 8204EF5
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"

# 584 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesEast:: @ 8204EFF
# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"

# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrivesWest:: @ 8204F09
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_WallysDadArrives
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"

# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadArrives:: @ 8204F13
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadEnterGym
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_PIN
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_ExclamationMark
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_Delay48
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 10
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 20
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LetMeBorrowPlayer, MSGBOX_DEFAULT
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 1
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 2
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8008, 3
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest
# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLYS_DAD
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 4
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 255, 15, 8
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"

# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth:: @ 8204FCC
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFastestUp
# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"

# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast:: @ 8204FD7
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFastestRight
# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"

# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest:: @ 8204FE2
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFastestLeft
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"

# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth:: @ 8204FED
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFastestLeft
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"

# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast:: @ 8205009
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFastestDown
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"

# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest:: @ 8205025
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFastestDown
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 672 "data/maps/PetalburgCity_Gym/scripts.pory"

# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth:: @ 8205041
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFastestDown
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"

# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast:: @ 820505A
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"

# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest:: @ 820506C
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"

# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth: @ 820507E
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_fastest_up
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"

# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast: @ 8205089
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_fastest_up
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"

# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest: @ 8205094
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_fastest_up
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"

# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth: @ 82050A1
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"

# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast: @ 82050A9
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"

# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest: @ 82050B1
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"

# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym: @ 82050BB
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_fastest_right
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_fastest_left
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_fastest_up
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"

# 775 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth: @ 82050C3
# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_fastest_right
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"

# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast: @ 82050CA
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"

# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest: @ 82050D0
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"

# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused: @ 82050D8
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_fastest_up
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_fastest_down
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"

# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth: @ 82050E1
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_fastest_left
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"

# 825 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive: @ 82050EB
# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"

# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth: @ 82050F2
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_fastest_up
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"

# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast: @ 82050FA
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_fastest_up
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"

# 854 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest: @ 8205102
# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_fastest_up
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"

# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth: @ 8205109
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"

# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth: @ 8205111
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"

# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest: @ 820511B
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"

# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast: @ 8205123
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_fastest_down
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"

# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough:: @ 820512D
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"

# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SpeedRoomDoor:: @ 8205137
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt PetalburgCity_Gym_EventScript_DoorLocked
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_EnterRoom
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontEnterRoom
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"

# 925 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom:: @ 820516C
# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, 255, VAR_0x8008, VAR_0x8009
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"

# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom:: @ 820517B
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"

# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked:: @ 820517D
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"

# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AccuracyRoomDoor:: @ 8205187
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_lt PetalburgCity_Gym_EventScript_DoorLocked
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_EnterRoom
# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontEnterRoom
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"

# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ConfusionRoomDoor:: @ 82051BC
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterConfusionRoom, MSGBOX_YESNO
# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_EnterRoom
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontEnterRoom
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"

# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftDefenseRoomDoor:: @ 82051EF
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_EnterRoom
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontEnterRoom
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"

# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightDefenseRoomDoor:: @ 8205222
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterDefenseRoom, MSGBOX_YESNO
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_EnterRoom
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontEnterRoom
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"

# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RecoveryRoomDoor:: @ 8205255
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_EnterRoom
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontEnterRoom
# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor:: @ 8205288
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_EnterRoom
# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontEnterRoom
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor:: @ 82052BB
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_EnterRoom
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontEnterRoom
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftOHKORoomDoor:: @ 82052EE
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_EnterRoom
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontEnterRoom
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightOHKORoomDoor:: @ 8205321
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterOHKORoom, MSGBOX_YESNO
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_EnterRoom
# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontEnterRoom
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor:: @ 8205354
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_EnterRoom
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontEnterRoom
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor:: @ 8205387
# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_EnterRoom
# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, NO
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq PetalburgCity_Gym_EventScript_DontEnterRoom
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall:: @ 82053BA
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors:: @ 82053DE
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge:: @ 82053ED
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker:: @ 82053F6
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors:: @ 820541A
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge:: @ 8205429
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George:: @ 8205432
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors:: @ 8205456
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge:: @ 8205465
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke:: @ 820546E
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors:: @ 8205492
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge:: @ 82054A1
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary:: @ 82054AA
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors:: @ 82054CE
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge:: @ 82054DD
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia:: @ 82054E6
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors:: @ 820550A
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge:: @ 8205519
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody:: @ 8205522
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors:: @ 8205546
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge:: @ 8205555
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors:: @ 820555E
# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors:: @ 820557F
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors:: @ 82055A0
# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors:: @ 82055C1
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors:: @ 82055E2
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors:: @ 8205603
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors:: @ 8205624
# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors:: @ 8205645
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 0
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_0x8005, 1
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles:: @ 8205666
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles:: @ 820568B
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles:: @ 82056B0
# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles:: @ 82056D5
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles:: @ 82056E8
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles:: @ 820570D
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles:: @ 8205720
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles:: @ 8205733
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, 0
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, 0
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors:: @ 8205746
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors:: @ 820574B
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide:: @ 820574F
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory:: @ 8205764
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue:: @ 820576E
# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue:: @ 820577E
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified:: @ 820578E
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue:: @ 8205798
# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon: @ 82057A2
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm?\p"
# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your Pokémon.\p"
# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a Trainer like me, {PLAYER}.\p"
# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon: @ 82058B1
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a Pokémon, please…$"
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight: @ 82058DB
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm? You're… Uh… Oh, right.\n"
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're Wally, right?$"
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon: @ 8205910
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: I'm going to go stay with my\n"
# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "relatives in Verdanturf Town.\p"
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a Pokémon along.\p"
# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a Pokémon before.\n"
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee: @ 82059D8
# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm. I see.$"
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally: @ 82059E8
# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, you heard that,\n"
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right?\p"
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with Wally and make sure that he\n"
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "safely catches a Pokémon.$"
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon: @ 8205A46
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally, here, I'll loan you my Pokémon.\p"
# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Zigzagoon!$"
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall: @ 8205A89
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Oh, wow!\n"
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A Pokémon!\p"
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm. I'll give you a Poké Ball, too.\n"
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go for it!\p"
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally received a Poké Ball!$"
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou: @ 8205AF4
# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Oh, wow!\n"
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe: @ 8205B0F
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut: @ 8205B32
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: So, did it work out?$"
# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye: @ 8205B4C
# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wally: Thank you, yes, it did.\n"
# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your Pokémon back.\p"
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my Pokémon.\p"
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges: @ 8205C40
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Now…\p"
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong Trainer, here's my advice.\p"
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for Rustboro City beyond this\n"
# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader, Roxanne.\p"
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After her, go on to other Pokémon\n"
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gyms and defeat their Leaders.\p"
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect Badges from them,\n"
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a Gym Leader, too.\n"
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.$"
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro: @ 8205DB4
# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm? Aren't you going to the\n"
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon Gym in Rustboro City?\p"
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn Trainer.\p"
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four Gym Badges, okay?$"
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford: @ 8205EAE
# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: I see… So, you've beaten\n"
# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader in Rustboro City.\p"
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more Trainers\n"
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in DEWFORD Town is a\n"
# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader named Brawly.\p"
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger: @ 8205F87
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm… {PLAYER}, you have gotten\n"
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of Badges\n"
# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro: @ 8205FE5
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\p"
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy that I can have\n"
# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a real battle with my own child.\p"
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, a battle is a battle!\p"
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will do everything in my power as\n"
# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Gym Leader to win.\p"
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you'd better give it your\n"
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "all!.$"
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat: @ 8206107
# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I… I can't…\p"
# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't believe it. {PLAYER}…\p"
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost to {PLAYER}?\p"
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, rules are rules!\n"
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this.$"
# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge: @ 8206162
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the Balance Badge\n"
# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from Dad!$"
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis: @ 820618A
# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: This is my gift to you. {PLAYER}\n"
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Im sure you can use it correctly.$"
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade: @ 8206254
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: TM42 contains Facade.\p"
# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It doubles the power of moves if\n"
# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Pokémon is poisoned, paralyzed,\l"
# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "or burned.\p"
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It might be able to turn a bad\n"
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "situation into an advantage.$"
# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad: @ 82062FB
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: As the Gym Leader, I can't\n"
# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how upset I am...\p"
# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But as a father, it makes me both\n"
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happy and a little sad. It's odd...$"
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe: @ 8206377
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer: @ 82063CA
# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN, you don't mind, do you?\p"
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining: @ 8206417
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, you should go visit\n"
# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your mother every so often.\p"
# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training.\p"
# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It would bother me as a Trainer to\n"
# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "not avenge my loss to you, {PLAYER}!$"
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough: @ 82064C3
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, how are things going?\p"
# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of Pokémon is deep.\p"
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice: @ 8206542
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, Champion-\n"
# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this Gym open when you\n"
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting Trainers.\p"
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The Trainers of Petalburg Gym\n"
# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "use all kinds of items.\p"
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the left leads to\n"
# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Speed Room.\p"
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The door at the right leads to\n"
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Accuracy Room.\p"
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The room's name will be on\n"
# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the door, so choose carefully.\p"
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Once you've chosen the door…\n"
# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, hey, go for it!$"
# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory: @ 82066F3
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your own father!\p"
# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like, whoa!\n"
# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro: @ 820674F
# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat: @ 82067B9
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle: @ 82067D8
# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the Confusion Room.\p"
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the Defense\n"
# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Room.$"
# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1580 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge: @ 820685E
# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1583 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your Pokémon.\p"
# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader is all about.$"
# 1586 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1587 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro: @ 82068FD
# 1588 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the Confusion Room.\p"
# 1589 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me see how well bonded you are\n"
# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your Pokémon!$"
# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat: @ 820694F
# 1593 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1594 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1595 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1596 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle: @ 8206996
# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the Strength Room.\n"
# 1598 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand brute force?$"
# 1599 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1600 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge: @ 82069D9
# 1601 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our Leader, the\n"
# 1602 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1603 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1604 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro: @ 8206A1B
# 1605 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1606 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1607 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1608 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1609 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1610 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1611 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1612 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat: @ 8206AB8
# 1613 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1614 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What Attack power…$"
# 1615 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1616 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle: @ 8206AE9
# 1617 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1618 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our Leader's kid.\p"
# 1619 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A Trainer's abilities are\n"
# 1620 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1621 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1622 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1623 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The One-Hit KO Room is next.$"
# 1624 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1625 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge: @ 8206BB1
# 1626 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at Gyms.\n"
# 1627 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a Leader.$"
# 1628 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1629 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro: @ 8206BF4
# 1630 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1631 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our Leader's kid.\p"
# 1632 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how horrid it is for\n"
# 1633 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Pokémon to take a critical hit!$"
# 1634 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1635 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat: @ 8206C7D
# 1636 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1637 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1638 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1639 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle: @ 8206C9F
# 1640 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
# 1641 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a Trainer worth my respect.\p"
# 1642 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1643 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1644 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1645 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with your father!$"
# 1646 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1647 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge: @ 8206D56
# 1648 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the Leader,\n"
# 1649 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Trainers of Petalburg City have\l"
# 1650 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1651 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1652 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro: @ 8206DB2
# 1653 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1654 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the Accuracy Room.\p"
# 1655 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1656 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1657 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1658 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat: @ 8206E0D
# 1659 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1660 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1661 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle: @ 8206E26
# 1662 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1663 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Trainers waiting for you.\p"
# 1664 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the Defense Room, and\n"
# 1665 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the Recovery Room.\p"
# 1666 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your Pokémon's Attack power will be\n"
# 1667 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1668 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1669 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge: @ 8206ED8
# 1670 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1671 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as Trainers?\p"
# 1672 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1673 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our Pokémon.$"
# 1674 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1675 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro: @ 8206F44
# 1676 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the Defense, the more\n"
# 1677 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in attack.$"
# 1678 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1679 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat: @ 8206F82
# 1680 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our defenses weren't enough…$"
# 1681 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1682 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle: @ 8206F9F
# 1683 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1684 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1685 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1686 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Strength Room.\p"
# 1687 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1688 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the One-Hit KO Room.\p"
# 1689 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have Trainers who are\n"
# 1690 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1691 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1692 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge: @ 8207069
# 1693 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using SURF?$"
# 1694 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1695 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro: @ 8207088
# 1696 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our Gym Leader told us to go all out\n"
# 1697 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1698 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1699 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Leader's kid!$"
# 1700 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1701 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat: @ 82070E6
# 1702 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1703 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1704 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle: @ 82070FB
# 1705 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your Pokémon…\n"
# 1706 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1707 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The Gym Leader, your\n"
# 1708 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father, is waiting!$"
# 1709 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1710 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge: @ 8207170
# 1711 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your Pokémon\n"
# 1712 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1713 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1714 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings Trainers have\n"
# 1715 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their Pokémon.$"
# 1716 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1717 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked: @ 82071F4
# 1718 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1719 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1720 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1721 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom: @ 820721E
# 1722 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Speed Room,” the sign says.\p"
# 1723 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1724 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1725 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Unused
# 1726 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2: @ 8207256
# 1727 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1728 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1729 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1730 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom: @ 8207280
# 1731 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Accuracy Room,” the sign says.\p"
# 1732 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1733 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1734 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterConfusionRoom: @ 82072BB
# 1735 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Confusion Room,” the sign says.\p"
# 1736 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1737 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1738 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterDefenseRoom: @ 82072F7
# 1739 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Defense Room,” the sign says.\p"
# 1740 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1741 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1742 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom: @ 8207331
# 1743 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Recovery Room,” the sign says.\p"
# 1744 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1745 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1746 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom: @ 820736C
# 1747 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Strength Room,” the sign says.\p"
# 1748 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1749 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1750 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterOHKORoom: @ 82073A7
# 1751 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“One-Hit KO Room,” the sign says.\p"
# 1752 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1753 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1754 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom: @ 82073E4
# 1755 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Gym Leader'S Room\p"
# 1756 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what Pokémon await\n"
# 1757 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 1758 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1759 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1760 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue: @ 820744C
# 1761 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Petalburg City Pokémon Gym$"
# 1762 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1763 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified: @ 8207467
# 1764 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Petalburg City Pokémon Gym\p"
# 1765 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN'S Certified Trainers:\n"
# 1766 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 1767 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1768 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch: @ 82074A2
# 1769 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
# 1770 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1771 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1772 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1773 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1774 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a Gym, it doesn't matter that\n"
# 1775 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1776 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…No, because we are parent and child,\n"
# 1777 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we owe it to each other to do the best\l"
# 1778 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we can. Isn't that right, {PLAYER}?$"
# 1779 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1780 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat: @ 82075CE
# 1781 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
# 1782 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe that was going too hard…$"
# 1783 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1784 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch: @ 82075F7
# 1785 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
# 1786 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What is your dream?\p"
# 1787 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "My dream…\n"
# 1788 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hahaha…\l"
# 1789 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It has already come true, actually.$"
# 1790 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1791 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons: @ 820764A
# 1792 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
# 1793 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1794 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1795 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1796 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1797 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a Gym, it doesn't matter that\n"
# 1798 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1799 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Wait a second, {PLAYER}.\p"
# 1800 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you only have one Pokémon that is\n"
# 1801 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "capable of battle?\p"
# 1802 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry, but you'll have to come back\n"
# 1803 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with at least two Pokémon.$"
