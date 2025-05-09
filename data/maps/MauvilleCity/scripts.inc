# 1 "data/maps/MauvilleCity/scripts.pory"

# 2 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLY, 6
# 3 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLY, 6
# 4 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_WALLYS_UNCLE, 7
# 5 "data/maps/MauvilleCity/scripts.pory"
.set LOCALID_SCOTT, 11
# 6 "data/maps/MauvilleCity/scripts.pory"

# 7 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_MapScripts:: @ 81DF385
# 8 "data/maps/MauvilleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_OnTransition
# 9 "data/maps/MauvilleCity/scripts.pory"
	.byte 0
# 10 "data/maps/MauvilleCity/scripts.pory"

# 11 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_OnTransition: @ 81DF38B
# 12 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_MAUVILLE_CITY
# 13 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_ROUTE103
# 14 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_VISITED_ROUTE110
# 15 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
# 16 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION
# 17 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_SYS_TV_START
# 18 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 19 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 0
# 20 "data/maps/MauvilleCity/scripts.pory"
	call_if_set FLAG_GOT_TM24_FROM_WATTSON, MauvilleCity_EventScript_MoveWattsonBackToGym
# 21 "data/maps/MauvilleCity/scripts.pory"
	end
# 22 "data/maps/MauvilleCity/scripts.pory"

# 23 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_MoveWattsonBackToGym:: @ 81DF3A9
# 24 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_MAUVILLE_GYM_WATTSON
# 25 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_HIDE_MAUVILLE_CITY_WATTSON
# 26 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_WATTSON_REMATCH_AVAILABLE
# 27 "data/maps/MauvilleCity/scripts.pory"
	return
# 28 "data/maps/MauvilleCity/scripts.pory"

# 29 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Boy:: @ 81DF3B3
# 30 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_NurseHurtMonBackToHealth, MSGBOX_NPC
# 31 "data/maps/MauvilleCity/scripts.pory"
	end
# 32 "data/maps/MauvilleCity/scripts.pory"

# 33 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Maniac:: @ 81DF3BC
# 34 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_AllSortsOfPeopleComeThrough, MSGBOX_NPC
# 35 "data/maps/MauvilleCity/scripts.pory"
	end
# 36 "data/maps/MauvilleCity/scripts.pory"

# 37 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Woman:: @ 81DF3C5
# 38 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RydelVeryGenerous, MSGBOX_NPC
# 39 "data/maps/MauvilleCity/scripts.pory"
	end
# 40 "data/maps/MauvilleCity/scripts.pory"

# 41 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RichBoy:: @ 81DF3CE
# 42 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_PokemonCanJumpYouOnBike, MSGBOX_NPC
# 43 "data/maps/MauvilleCity/scripts.pory"
	end
# 44 "data/maps/MauvilleCity/scripts.pory"

# 45 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CitySign:: @ 81DF3D7
# 46 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_CitySign, MSGBOX_SIGN
# 47 "data/maps/MauvilleCity/scripts.pory"
	end
# 48 "data/maps/MauvilleCity/scripts.pory"

# 49 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GymSign:: @ 81DF3E0
# 50 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GymSign, MSGBOX_SIGN
# 51 "data/maps/MauvilleCity/scripts.pory"
	end
# 52 "data/maps/MauvilleCity/scripts.pory"

# 53 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BikeShopSign:: @ 81DF3E9
# 54 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BikeShopSign, MSGBOX_SIGN
# 55 "data/maps/MauvilleCity/scripts.pory"
	end
# 56 "data/maps/MauvilleCity/scripts.pory"

# 57 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_GameCornerSign:: @ 81DF3F2
# 58 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_GameCornerSign, MSGBOX_SIGN
# 59 "data/maps/MauvilleCity/scripts.pory"
	end
# 60 "data/maps/MauvilleCity/scripts.pory"

# 61 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_SchoolKidM:: @ 81DF3FB
# 62 "data/maps/MauvilleCity/scripts.pory"
	lock
# 63 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 64 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_TV_EXPLAINED, MauvilleCity_EventScript_TVExplained
# 65 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ExplainTV, MSGBOX_DEFAULT
# 66 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_TV_EXPLAINED
# 67 "data/maps/MauvilleCity/scripts.pory"
	release
# 68 "data/maps/MauvilleCity/scripts.pory"
	end
# 69 "data/maps/MauvilleCity/scripts.pory"

# 70 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_TVExplained:: @ 81DF413
# 71 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_BeenCheckingOutTV, MSGBOX_DEFAULT
# 72 "data/maps/MauvilleCity/scripts.pory"
	release
# 73 "data/maps/MauvilleCity/scripts.pory"
	end
# 74 "data/maps/MauvilleCity/scripts.pory"

# 75 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallysUncle:: @ 81DF41D
# 76 "data/maps/MauvilleCity/scripts.pory"
	lock
# 77 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 78 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_UncleAskPlayerToBattleWally
# 79 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleHesTooPeppy, MSGBOX_DEFAULT
# 80 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 81 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 82 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 83 "data/maps/MauvilleCity/scripts.pory"
	release
# 84 "data/maps/MauvilleCity/scripts.pory"
	end
# 85 "data/maps/MauvilleCity/scripts.pory"

# 86 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_UncleAskPlayerToBattleWally:: @ 81DF43D
# 87 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleCanYouBattleWally, MSGBOX_DEFAULT
# 88 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 89 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, Common_Movement_FaceOriginalDirection
# 90 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 91 "data/maps/MauvilleCity/scripts.pory"
	release
# 92 "data/maps/MauvilleCity/scripts.pory"
	end
# 93 "data/maps/MauvilleCity/scripts.pory"

# 94 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wally:: @ 81DF452
# 95 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 96 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_DECLINED_WALLY_BATTLE_MAUVILLE, MauvilleCity_EventScript_WallyRequestBattleAgain
# 97 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFastestRight
# 98 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 99 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWantToChallengeGym, MSGBOX_DEFAULT
# 100 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleYourePushingIt, MSGBOX_DEFAULT
# 101 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWeCanBeatAnyone, MSGBOX_DEFAULT
# 102 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 103 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/MauvilleCity/scripts.pory"
	playse SE_PIN
# 105 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_ExclamationMark
# 106 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 107 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_Delay48
# 108 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 109 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyWillYouBattleMe, MSGBOX_YESNO
# 110 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 111 "data/maps/MauvilleCity/scripts.pory"
	end
# 112 "data/maps/MauvilleCity/scripts.pory"

# 113 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWallyPrompt:: @ 81DF4AD
# 114 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, YES
# 115 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq MauvilleCity_EventScript_BattleWally
# 116 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, NO
# 117 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq MauvilleCity_EventScript_DeclineWallyBattle
# 118 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 119 "data/maps/MauvilleCity/scripts.pory"
	switch VAR_FACING
# 120 "data/maps/MauvilleCity/scripts.pory"
	case DIR_NORTH, MauvilleCity_EventScript_WallyAndUncleExitNorth
# 121 "data/maps/MauvilleCity/scripts.pory"
	case DIR_EAST, MauvilleCity_EventScript_WallyAndUncleExitEast
# 122 "data/maps/MauvilleCity/scripts.pory"
	end
# 123 "data/maps/MauvilleCity/scripts.pory"

# 124 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitNorth:: @ 81DF4E0
# 125 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth1
# 126 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth1
# 127 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth1
# 128 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 129 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFastestRight
# 130 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 131 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 132 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerFaceUncleNorth
# 133 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerNorth
# 134 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 135 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 136 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 137 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitNorth2
# 138 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitNorth2
# 139 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitNorth2
# 140 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 141 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 142 "data/maps/MauvilleCity/scripts.pory"
	end
# 143 "data/maps/MauvilleCity/scripts.pory"

# 144 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyAndUncleExitEast:: @ 81DF53D
# 145 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast1
# 146 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast1
# 147 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast1
# 148 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 149 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFastestRight
# 150 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 151 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 152 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleApproachPlayerEast
# 153 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 154 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleVisitUsSometime, MSGBOX_DEFAULT
# 155 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 156 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchWallyExitEast2
# 157 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLYS_UNCLE, MauvilleCity_Movement_WallysUncleExitEast2
# 158 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, MauvilleCity_Movement_WallyExitEast2
# 159 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 160 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_DefeatedWally
# 161 "data/maps/MauvilleCity/scripts.pory"
	end
# 162 "data/maps/MauvilleCity/scripts.pory"

# 163 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DefeatedWally:: @ 81DF593
# 164 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLY
# 165 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_WALLYS_UNCLE
# 166 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
# 167 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
# 168 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DEFEATED_WALLY_MAUVILLE
# 169 "data/maps/MauvilleCity/scripts.pory"
	setvar VAR_WALLY_CALL_STEP_COUNTER, 0
# 170 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 171 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 172 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq MauvilleCity_EventScript_ScottApproachPlayerNorth
# 173 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 174 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq MauvilleCity_EventScript_ScottApproachPlayerEast
# 175 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
# 176 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 177 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ScottYouDidntHoldBack, MSGBOX_DEFAULT
# 178 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 179 "data/maps/MauvilleCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 180 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 181 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq MauvilleCity_EventScript_ScottExitNorth
# 182 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 183 "data/maps/MauvilleCity/scripts.pory"
	call_if_eq MauvilleCity_EventScript_ScottExitEast
# 184 "data/maps/MauvilleCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 185 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 186 "data/maps/MauvilleCity/scripts.pory"
	end
# 187 "data/maps/MauvilleCity/scripts.pory"

# 188 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerNorth:: @ 81DF5F3
# 189 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 190 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerNorth
# 191 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 192 "data/maps/MauvilleCity/scripts.pory"
	return
# 193 "data/maps/MauvilleCity/scripts.pory"

# 194 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottApproachPlayerEast:: @ 81DF601
# 195 "data/maps/MauvilleCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 12, 13
# 196 "data/maps/MauvilleCity/scripts.pory"
	addobject LOCALID_SCOTT
# 197 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottApproachPlayerEast
# 198 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 199 "data/maps/MauvilleCity/scripts.pory"
	return
# 200 "data/maps/MauvilleCity/scripts.pory"

# 201 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitNorth:: @ 81DF616
# 202 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitNorth
# 203 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitNorth
# 204 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 205 "data/maps/MauvilleCity/scripts.pory"
	return
# 206 "data/maps/MauvilleCity/scripts.pory"

# 207 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ScottExitEast:: @ 81DF628
# 208 "data/maps/MauvilleCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MauvilleCity_Movement_PlayerWatchScottExitEast
# 209 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_SCOTT, MauvilleCity_Movement_ScottExitEast
# 210 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 211 "data/maps/MauvilleCity/scripts.pory"
	return
# 212 "data/maps/MauvilleCity/scripts.pory"

# 213 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BattleWally:: @ 81DF63A
# 214 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyHereICome, MSGBOX_DEFAULT
# 215 "data/maps/MauvilleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, MauvilleCity_Text_WallyDefeat
# 216 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFastestRight
# 217 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 218 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyIllGoBackToVerdanturf, MSGBOX_DEFAULT
# 219 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 220 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 221 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_ThankYouNotEnoughToBattle, MSGBOX_DEFAULT
# 222 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFastestRight
# 223 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 224 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_UncleNoNeedToBeDown, MSGBOX_DEFAULT
# 225 "data/maps/MauvilleCity/scripts.pory"
	return
# 226 "data/maps/MauvilleCity/scripts.pory"

# 227 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_DeclineWallyBattle:: @ 81DF683
# 228 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_DECLINED_WALLY_BATTLE_MAUVILLE
# 229 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyMyUncleWontKnowImStrong, MSGBOX_DEFAULT
# 230 "data/maps/MauvilleCity/scripts.pory"
	release
# 231 "data/maps/MauvilleCity/scripts.pory"
	end
# 232 "data/maps/MauvilleCity/scripts.pory"

# 233 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_WallyRequestBattleAgain:: @ 81DF690
# 234 "data/maps/MauvilleCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 235 "data/maps/MauvilleCity/scripts.pory"
	waitmovement 0
# 236 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WallyPleaseBattleMe, MSGBOX_YESNO
# 237 "data/maps/MauvilleCity/scripts.pory"
	goto MauvilleCity_EventScript_BattleWallyPrompt
# 238 "data/maps/MauvilleCity/scripts.pory"
	end
# 239 "data/maps/MauvilleCity/scripts.pory"

# 240 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth1: @ 81DF6A8
# 241 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 242 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 243 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 244 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 245 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 246 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 247 "data/maps/MauvilleCity/scripts.pory"

# 248 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast1: @ 81DF6AE
# 249 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 250 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 251 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 252 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 253 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 254 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 255 "data/maps/MauvilleCity/scripts.pory"

# 256 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitNorth2: @ 81DF6B4
# 257 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 258 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 259 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 260 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 261 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 262 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 263 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 264 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 265 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 266 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 267 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 268 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 269 "data/maps/MauvilleCity/scripts.pory"

# 270 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallyExitEast2: @ 81DF6C0
# 271 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 272 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 273 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 274 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 275 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 276 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 277 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 278 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 279 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 280 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 281 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 282 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 283 "data/maps/MauvilleCity/scripts.pory"

# 284 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth2: @ 81DF6CC
# 285 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 286 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 287 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fastest_left
# 288 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 289 "data/maps/MauvilleCity/scripts.pory"

# 290 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast2: @ 81DF6D0
# 291 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 292 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 293 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 294 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fastest_left
# 295 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 296 "data/maps/MauvilleCity/scripts.pory"

# 297 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitNorth: @ 81DF6D5
# 298 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 299 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fastest_left
# 300 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 301 "data/maps/MauvilleCity/scripts.pory"

# 302 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchScottExitEast: @ 81DF6D8
# 303 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 304 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 305 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fastest_left
# 306 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 307 "data/maps/MauvilleCity/scripts.pory"

# 308 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitEast1: @ 81DF6DC
# 309 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 310 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fastest_down
# 311 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 312 "data/maps/MauvilleCity/scripts.pory"

# 313 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerWatchWallyExitNorth1: @ 81DF6DF
# 314 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 315 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fastest_left
# 316 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 317 "data/maps/MauvilleCity/scripts.pory"

# 318 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth1: @ 81DF6E2
# 319 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 320 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 321 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 322 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 323 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 324 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 325 "data/maps/MauvilleCity/scripts.pory"

# 326 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast1: @ 81DF6E8
# 327 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 328 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 329 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 330 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 331 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 332 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 333 "data/maps/MauvilleCity/scripts.pory"

# 334 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_PlayerFaceUncleNorth: @ 81DF6EE
# 335 "data/maps/MauvilleCity/scripts.pory"
	delay_16
# 336 "data/maps/MauvilleCity/scripts.pory"
	delay_8
# 337 "data/maps/MauvilleCity/scripts.pory"
	delay_4
# 338 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fastest_down
# 339 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 340 "data/maps/MauvilleCity/scripts.pory"

# 341 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerNorth: @ 81DF6F3
# 342 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 343 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 344 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fastest_up
# 345 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 346 "data/maps/MauvilleCity/scripts.pory"

# 347 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleApproachPlayerEast: @ 81DF6F7
# 348 "data/maps/MauvilleCity/scripts.pory"
	walk_right
# 349 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 350 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 351 "data/maps/MauvilleCity/scripts.pory"

# 352 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitNorth2: @ 81DF6FA
# 353 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 354 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 355 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 356 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 357 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 358 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 359 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 360 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 361 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 362 "data/maps/MauvilleCity/scripts.pory"

# 363 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_WallysUncleExitEast2: @ 81DF703
# 364 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 365 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 366 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 367 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 368 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 369 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 370 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 371 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 372 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 373 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 374 "data/maps/MauvilleCity/scripts.pory"

# 375 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerNorth: @ 81DF70D
# 376 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 377 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 378 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 379 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 380 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 381 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 382 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 383 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 384 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 385 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 386 "data/maps/MauvilleCity/scripts.pory"
	walk_in_place_fastest_up
# 387 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 388 "data/maps/MauvilleCity/scripts.pory"

# 389 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottApproachPlayerEast: @ 81DF719
# 390 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 391 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 392 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 393 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 394 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 395 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 396 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 397 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 398 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 399 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 400 "data/maps/MauvilleCity/scripts.pory"
	walk_up
# 401 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 402 "data/maps/MauvilleCity/scripts.pory"

# 403 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitNorth: @ 81DF725
# 404 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 405 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 406 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 407 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 408 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 409 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 410 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 411 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 412 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 413 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 414 "data/maps/MauvilleCity/scripts.pory"

# 415 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Movement_ScottExitEast: @ 81DF72F
# 416 "data/maps/MauvilleCity/scripts.pory"
	walk_down
# 417 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 418 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 419 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 420 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 421 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 422 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 423 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 424 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 425 "data/maps/MauvilleCity/scripts.pory"
	walk_left
# 426 "data/maps/MauvilleCity/scripts.pory"
	step_end
# 427 "data/maps/MauvilleCity/scripts.pory"

# 428 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_Wattson:: @ 81DF73A
# 429 "data/maps/MauvilleCity/scripts.pory"
	lock
# 430 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 431 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_TM24_FROM_WATTSON, MauvilleCity_EventScript_ReceivedThunderbolt
# 432 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_NEW_MAUVILLE_STATE, 2
# 433 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq MauvilleCity_EventScript_CompletedNewMauville
# 434 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BASEMENT_KEY_FROM_WATTSON, MauvilleCity_EventScript_BegunNewMauville
# 435 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonNeedFavorTakeKey, MSGBOX_DEFAULT
# 436 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_BASEMENT_KEY
# 437 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_BASEMENT_KEY_FROM_WATTSON
# 438 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 439 "data/maps/MauvilleCity/scripts.pory"
	release
# 440 "data/maps/MauvilleCity/scripts.pory"
	end
# 441 "data/maps/MauvilleCity/scripts.pory"

# 442 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_BegunNewMauville:: @ 81DF77A
# 443 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonWontBeChallenge, MSGBOX_DEFAULT
# 444 "data/maps/MauvilleCity/scripts.pory"
	release
# 445 "data/maps/MauvilleCity/scripts.pory"
	end
# 446 "data/maps/MauvilleCity/scripts.pory"

# 447 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_CompletedNewMauville:: @ 81DF784
# 448 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonThanksTakeTM, MSGBOX_DEFAULT
# 449 "data/maps/MauvilleCity/scripts.pory"
	giveitem ITEM_TM24
# 450 "data/maps/MauvilleCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 451 "data/maps/MauvilleCity/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 452 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_GOT_TM24_FROM_WATTSON
# 453 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 454 "data/maps/MauvilleCity/scripts.pory"
	release
# 455 "data/maps/MauvilleCity/scripts.pory"
	end
# 456 "data/maps/MauvilleCity/scripts.pory"

# 457 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_ReceivedThunderbolt:: @ 81DF7B0
# 458 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_WattsonYoungTakeCharge, MSGBOX_DEFAULT
# 459 "data/maps/MauvilleCity/scripts.pory"
	release
# 460 "data/maps/MauvilleCity/scripts.pory"
	end
# 461 "data/maps/MauvilleCity/scripts.pory"

# 462 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_EventScript_RegisterWallyCall:: @ 81DF7BA
# 463 "data/maps/MauvilleCity/scripts.pory"
	lockall
# 464 "data/maps/MauvilleCity/scripts.pory"
	pokenavcall MauvilleCity_Text_WallyPokenavCall
# 465 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 466 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 467 "data/maps/MauvilleCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 468 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_Text_RegisteredWally, MSGBOX_DEFAULT
# 469 "data/maps/MauvilleCity/scripts.pory"
	waitfanfare
# 470 "data/maps/MauvilleCity/scripts.pory"
	closemessage
# 471 "data/maps/MauvilleCity/scripts.pory"
	delay 30
# 472 "data/maps/MauvilleCity/scripts.pory"
	setflag FLAG_ENABLE_WALLY_MATCH_CALL
# 473 "data/maps/MauvilleCity/scripts.pory"
	clearflag FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL
# 474 "data/maps/MauvilleCity/scripts.pory"
	releaseall
# 475 "data/maps/MauvilleCity/scripts.pory"
	end
# 476 "data/maps/MauvilleCity/scripts.pory"

# 477 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleHesTooPeppy: @ 81DF7DC
# 478 "data/maps/MauvilleCity/scripts.pory"
	.string "Uncle: It's because of Pokémon that\n"
# 479 "data/maps/MauvilleCity/scripts.pory"
	.string "this boy's got more pep, I suppose…\l"
# 480 "data/maps/MauvilleCity/scripts.pory"
	.string "But he's become a bit too peppy…$"
# 481 "data/maps/MauvilleCity/scripts.pory"

# 482 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWantToChallengeGym: @ 81DF845
# 483 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: Aww, Uncle, please?\p"
# 484 "data/maps/MauvilleCity/scripts.pory"
	.string "I want to challenge this Gym and see\n"
# 485 "data/maps/MauvilleCity/scripts.pory"
	.string "how much better I've become.\p"
# 486 "data/maps/MauvilleCity/scripts.pory"
	.string "Please? May I, please?$"
# 487 "data/maps/MauvilleCity/scripts.pory"

# 488 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleYourePushingIt: @ 81DF8B9
# 489 "data/maps/MauvilleCity/scripts.pory"
	.string "Uncle: Now hold on, Wally.\p"
# 490 "data/maps/MauvilleCity/scripts.pory"
	.string "Since you started living with Pokémon,\n"
# 491 "data/maps/MauvilleCity/scripts.pory"
	.string "you have grown quite a lot stronger.\p"
# 492 "data/maps/MauvilleCity/scripts.pory"
	.string "But don't you think you're pushing it\n"
# 493 "data/maps/MauvilleCity/scripts.pory"
	.string "to suddenly challenge a Gym?$"
# 494 "data/maps/MauvilleCity/scripts.pory"

# 495 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWeCanBeatAnyone: @ 81DF963
# 496 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: I'm not pushing it.\p"
# 497 "data/maps/MauvilleCity/scripts.pory"
	.string "If I combine forces with Ralts,\n"
# 498 "data/maps/MauvilleCity/scripts.pory"
	.string "we can beat anyone!$"
# 499 "data/maps/MauvilleCity/scripts.pory"

# 500 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyWillYouBattleMe: @ 81DF9B2
# 501 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: Oh! Hi, {PLAYER}!\p"
# 502 "data/maps/MauvilleCity/scripts.pory"
	.string "I've gotten a lot stronger since\n"
# 503 "data/maps/MauvilleCity/scripts.pory"
	.string "we met.\p"
# 504 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, I want you and my Uncle to\n"
# 505 "data/maps/MauvilleCity/scripts.pory"
	.string "understand that.\p"
# 506 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, please, will you have\n"
# 507 "data/maps/MauvilleCity/scripts.pory"
	.string "a battle with me?$"
# 508 "data/maps/MauvilleCity/scripts.pory"

# 509 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyMyUncleWontKnowImStrong: @ 81DFA4A
# 510 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: Oh… If you won't battle me,\n"
# 511 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, my Uncle won't know that I've\l"
# 512 "data/maps/MauvilleCity/scripts.pory"
	.string "become really strong.$"
# 513 "data/maps/MauvilleCity/scripts.pory"

# 514 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleCanYouBattleWally: @ 81DFAA5
# 515 "data/maps/MauvilleCity/scripts.pory"
	.string "Uncle: {PLAYER}{KUN}, was it?\n"
# 516 "data/maps/MauvilleCity/scripts.pory"
	.string "On Wally's behalf, can I ask you to\l"
# 517 "data/maps/MauvilleCity/scripts.pory"
	.string "battle with him just this once?\p"
# 518 "data/maps/MauvilleCity/scripts.pory"
	.string "I don't think he's going to listen to\n"
# 519 "data/maps/MauvilleCity/scripts.pory"
	.string "any reason the way he is now.$"
# 520 "data/maps/MauvilleCity/scripts.pory"

# 521 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPleaseBattleMe: @ 81DFB42
# 522 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: {PLAYER}, please!\n"
# 523 "data/maps/MauvilleCity/scripts.pory"
	.string "Battle with me, please.$"
# 524 "data/maps/MauvilleCity/scripts.pory"

# 525 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyHereICome: @ 81DFB6D
# 526 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: {PLAYER}, thank you.\p"
# 527 "data/maps/MauvilleCity/scripts.pory"
	.string "Okay… Here I come!$"
# 528 "data/maps/MauvilleCity/scripts.pory"

# 529 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyDefeat: @ 81DFB96
# 530 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: … … … … … … …\p"
# 531 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … … … …\p"
# 532 "data/maps/MauvilleCity/scripts.pory"
	.string "I lost…$"
# 533 "data/maps/MauvilleCity/scripts.pory"

# 534 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyIllGoBackToVerdanturf: @ 81DFBC3
# 535 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: Uncle…\n"
# 536 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll go back to Verdanturf…$"
# 537 "data/maps/MauvilleCity/scripts.pory"

# 538 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ThankYouNotEnoughToBattle: @ 81DFBED
# 539 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}, thank you.\n"
# 540 "data/maps/MauvilleCity/scripts.pory"
	.string "Being a Trainer is tough, isn't it?\p"
# 541 "data/maps/MauvilleCity/scripts.pory"
	.string "It's not enough just to have Pokémon\n"
# 542 "data/maps/MauvilleCity/scripts.pory"
	.string "and make them battle. That isn't what\l"
# 543 "data/maps/MauvilleCity/scripts.pory"
	.string "being a real Trainer is about.$"
# 544 "data/maps/MauvilleCity/scripts.pory"

# 545 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleNoNeedToBeDown: @ 81DFC8A
# 546 "data/maps/MauvilleCity/scripts.pory"
	.string "Uncle: Wally, there's no need to be so\n"
# 547 "data/maps/MauvilleCity/scripts.pory"
	.string "down on yourself.\p"
# 548 "data/maps/MauvilleCity/scripts.pory"
	.string "Why, what's keeping you from becoming\n"
# 549 "data/maps/MauvilleCity/scripts.pory"
	.string "stronger and stronger?\p"
# 550 "data/maps/MauvilleCity/scripts.pory"
	.string "Come on, let's go home.\n"
# 551 "data/maps/MauvilleCity/scripts.pory"
	.string "Everyone's waiting for you.$"
# 552 "data/maps/MauvilleCity/scripts.pory"

# 553 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_UncleVisitUsSometime: @ 81DFD34
# 554 "data/maps/MauvilleCity/scripts.pory"
	.string "Uncle: {PLAYER}{KUN}, it just dawned on me\n"
# 555 "data/maps/MauvilleCity/scripts.pory"
	.string "that you must be the Trainer who kept\l"
# 556 "data/maps/MauvilleCity/scripts.pory"
	.string "an eye out for Wally when he caught\l"
# 557 "data/maps/MauvilleCity/scripts.pory"
	.string "his Pokémon.\p"
# 558 "data/maps/MauvilleCity/scripts.pory"
	.string "Why don't you visit us in Verdanturf\n"
# 559 "data/maps/MauvilleCity/scripts.pory"
	.string "sometime?\l"
# 560 "data/maps/MauvilleCity/scripts.pory"
	.string "I'm sure Wally would enjoy it.$"
# 561 "data/maps/MauvilleCity/scripts.pory"

# 562 "data/maps/MauvilleCity/scripts.pory"

# 563 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WallyPokenavCall: @ 81DFDFB
# 564 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 565 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Beep!\p"
# 566 "data/maps/MauvilleCity/scripts.pory"
	.string "Wally: Oh, hello, {PLAYER}!\p"
# 567 "data/maps/MauvilleCity/scripts.pory"
	.string "I just wanted to tell you that\n"
# 568 "data/maps/MauvilleCity/scripts.pory"
	.string "my uncle bought me a Pokénav!\p"
# 569 "data/maps/MauvilleCity/scripts.pory"
	.string "Now I can get in touch with you\n"
# 570 "data/maps/MauvilleCity/scripts.pory"
	.string "anytime, {PLAYER}!\p"
# 571 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 572 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … Click!$"
# 573 "data/maps/MauvilleCity/scripts.pory"

# 574 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RegisteredWally: @ 81DFEB4
# 575 "data/maps/MauvilleCity/scripts.pory"
	.string "Registered Wally\n"
# 576 "data/maps/MauvilleCity/scripts.pory"
	.string "in the Pokénav.$"
# 577 "data/maps/MauvilleCity/scripts.pory"

# 578 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ScottYouDidntHoldBack: @ 81DFED5
# 579 "data/maps/MauvilleCity/scripts.pory"
	.string "Scott: Hehe…\n"
# 580 "data/maps/MauvilleCity/scripts.pory"
	.string "I was watching that match!\p"
# 581 "data/maps/MauvilleCity/scripts.pory"
	.string "You're friends with that boy Wally,\n"
# 582 "data/maps/MauvilleCity/scripts.pory"
	.string "aren't you?\p"
# 583 "data/maps/MauvilleCity/scripts.pory"
	.string "But you didn't hold anything back\n"
# 584 "data/maps/MauvilleCity/scripts.pory"
	.string "and beat him impressively.\p"
# 585 "data/maps/MauvilleCity/scripts.pory"
	.string "Yeah! That's what a real Pokémon\n"
# 586 "data/maps/MauvilleCity/scripts.pory"
	.string "battle is all about!\p"
# 587 "data/maps/MauvilleCity/scripts.pory"
	.string "I idolize Trainers like that!\p"
# 588 "data/maps/MauvilleCity/scripts.pory"
	.string "… … … … … …\n"
# 589 "data/maps/MauvilleCity/scripts.pory"
	.string "I'll be cheering for you!$"
# 590 "data/maps/MauvilleCity/scripts.pory"

# 591 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonNeedFavorTakeKey: @ 81DFFE4
# 592 "data/maps/MauvilleCity/scripts.pory"
	.string "Wattson: Oh, {PLAYER}{KUN}!\n"
# 593 "data/maps/MauvilleCity/scripts.pory"
	.string "You look like you have a lot of zip!\l"
# 594 "data/maps/MauvilleCity/scripts.pory"
	.string "That's a good thing, wahahahaha!\p"
# 595 "data/maps/MauvilleCity/scripts.pory"
	.string "Fine! I've decided!\n"
# 596 "data/maps/MauvilleCity/scripts.pory"
	.string "I need a favor, {PLAYER}{KUN}!\p"
# 597 "data/maps/MauvilleCity/scripts.pory"
	.string "Mauville City has an underground\n"
# 598 "data/maps/MauvilleCity/scripts.pory"
	.string "sector called New Mauville.\p"
# 599 "data/maps/MauvilleCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'd like you to go there and\n"
# 600 "data/maps/MauvilleCity/scripts.pory"
	.string "switch off the Generator.\p"
# 601 "data/maps/MauvilleCity/scripts.pory"
	.string "The Generator has been running a bit\n"
# 602 "data/maps/MauvilleCity/scripts.pory"
	.string "haywire. It's getting unsafe.\p"
# 603 "data/maps/MauvilleCity/scripts.pory"
	.string "Here, this is the Key to get into\n"
# 604 "data/maps/MauvilleCity/scripts.pory"
	.string "New Mauville.$"
# 605 "data/maps/MauvilleCity/scripts.pory"

# 606 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonWontBeChallenge: @ 81E0154
# 607 "data/maps/MauvilleCity/scripts.pory"
	.string "Wattson: Don't you worry about it.\n"
# 608 "data/maps/MauvilleCity/scripts.pory"
	.string "It won't be a challenge to you.\p"
# 609 "data/maps/MauvilleCity/scripts.pory"
	.string "The entrance to New Mauville is just\n"
# 610 "data/maps/MauvilleCity/scripts.pory"
	.string "a short Surf away from Route 110.\p"
# 611 "data/maps/MauvilleCity/scripts.pory"
	.string "That's it, then, you have my trust!\n"
# 612 "data/maps/MauvilleCity/scripts.pory"
	.string "Wahahahaha!$"
# 613 "data/maps/MauvilleCity/scripts.pory"

# 614 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonThanksTakeTM: @ 81E020E
# 615 "data/maps/MauvilleCity/scripts.pory"
	.string "Wattson: Wahahahaha!\p"
# 616 "data/maps/MauvilleCity/scripts.pory"
	.string "I knew it, {PLAYER}{KUN}! I knew I'd made\n"
# 617 "data/maps/MauvilleCity/scripts.pory"
	.string "the right choice asking you!\p"
# 618 "data/maps/MauvilleCity/scripts.pory"
	.string "This is my thanks--a TM containing\n"
# 619 "data/maps/MauvilleCity/scripts.pory"
	.string "Thunderbolt!\p"
# 620 "data/maps/MauvilleCity/scripts.pory"
	.string "Go on, you've earned it!$"
# 621 "data/maps/MauvilleCity/scripts.pory"

# 622 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_WattsonYoungTakeCharge: @ 81E02AA
# 623 "data/maps/MauvilleCity/scripts.pory"
	.string "Wattson: Wahahahaha!\p"
# 624 "data/maps/MauvilleCity/scripts.pory"
	.string "It pleases me to no end to see\n"
# 625 "data/maps/MauvilleCity/scripts.pory"
	.string "the young step up and take charge!$"
# 626 "data/maps/MauvilleCity/scripts.pory"

# 627 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_NurseHurtMonBackToHealth: @ 81E0301
# 628 "data/maps/MauvilleCity/scripts.pory"
	.string "You know, it's cool to have Pokémon\n"
# 629 "data/maps/MauvilleCity/scripts.pory"
	.string "battles and stuff…\p"
# 630 "data/maps/MauvilleCity/scripts.pory"
	.string "But if your Pokémon gets hurt,\n"
# 631 "data/maps/MauvilleCity/scripts.pory"
	.string "you have to nurse it back to health.$"
# 632 "data/maps/MauvilleCity/scripts.pory"

# 633 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_AllSortsOfPeopleComeThrough: @ 81E037C
# 634 "data/maps/MauvilleCity/scripts.pory"
	.string "Did you know that you can check\n"
# 635 "data/maps/MauvilleCity/scripts.pory"
	.string "your game version by opening\l"
# 636 "data/maps/MauvilleCity/scripts.pory"
	.string "the Save Menu?$"
# 637 "data/maps/MauvilleCity/scripts.pory"

# 638 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_RydelVeryGenerous: @ 81E03FB
# 639 "data/maps/MauvilleCity/scripts.pory"
	.string "Have you been to Rydel's Cycles yet?\p"
# 640 "data/maps/MauvilleCity/scripts.pory"
	.string "Rydel, the owner, is a very generous\n"
# 641 "data/maps/MauvilleCity/scripts.pory"
	.string "man.$"
# 642 "data/maps/MauvilleCity/scripts.pory"

# 643 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_PokemonCanJumpYouOnBike: @ 81E044A
# 644 "data/maps/MauvilleCity/scripts.pory"
	.string "Even if you're riding a Bike,\n"
# 645 "data/maps/MauvilleCity/scripts.pory"
	.string "wild Pokémon could jump you.$"
# 646 "data/maps/MauvilleCity/scripts.pory"

# 647 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_CitySign: @ 81E0485
# 648 "data/maps/MauvilleCity/scripts.pory"
	.string "Mauville City\n"
# 649 "data/maps/MauvilleCity/scripts.pory"
	.string "“The bright and shiny city of fun!”$"
# 650 "data/maps/MauvilleCity/scripts.pory"

# 651 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GymSign: @ 81E04B7
# 652 "data/maps/MauvilleCity/scripts.pory"
	.string "Mauville City Pokémon Gym\n"
# 653 "data/maps/MauvilleCity/scripts.pory"
	.string "Leader: Wattson\l"
# 654 "data/maps/MauvilleCity/scripts.pory"
	.string "“The cheerfully electrifying man!”$"
# 655 "data/maps/MauvilleCity/scripts.pory"

# 656 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BikeShopSign: @ 81E0504
# 657 "data/maps/MauvilleCity/scripts.pory"
	.string "“Ride in gravel and shake up your\n"
# 658 "data/maps/MauvilleCity/scripts.pory"
	.string "soul!”\l"
# 659 "data/maps/MauvilleCity/scripts.pory"
	.string "Rydel's Cycles$"
# 660 "data/maps/MauvilleCity/scripts.pory"

# 661 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_GameCornerSign: @ 81E053C
# 662 "data/maps/MauvilleCity/scripts.pory"
	.string "“The play spot for all!”\n"
# 663 "data/maps/MauvilleCity/scripts.pory"
	.string "Mauville Game Corner$"
# 664 "data/maps/MauvilleCity/scripts.pory"

# 665 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_ExplainTV: @ 81E056A
# 666 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, do you check out TV at all?\p"
# 667 "data/maps/MauvilleCity/scripts.pory"
	.string "They've added a bunch of cool new\n"
# 668 "data/maps/MauvilleCity/scripts.pory"
	.string "shows recently.\p"
# 669 "data/maps/MauvilleCity/scripts.pory"
	.string "TV is so cool. I've seen my friends on\n"
# 670 "data/maps/MauvilleCity/scripts.pory"
	.string "TV just out of the blue.\p"
# 671 "data/maps/MauvilleCity/scripts.pory"
	.string "And, sometimes, they even put you on TV\n"
# 672 "data/maps/MauvilleCity/scripts.pory"
	.string "without telling you.\p"
# 673 "data/maps/MauvilleCity/scripts.pory"
	.string "I wish I would be on TV sometime.\p"
# 674 "data/maps/MauvilleCity/scripts.pory"
	.string "That's why I think you should check\n"
# 675 "data/maps/MauvilleCity/scripts.pory"
	.string "out TVs whenever you can.$"
# 676 "data/maps/MauvilleCity/scripts.pory"

# 677 "data/maps/MauvilleCity/scripts.pory"
MauvilleCity_Text_BeenCheckingOutTV: @ 81E0699
# 678 "data/maps/MauvilleCity/scripts.pory"
	.string "Hi, have you been checking out TVs?$"

MauvilleCity_EventScript_Man_Fixing_Elevator::
# 682 "data/maps/MauvilleCity/scripts.pory"
	lock
# 683 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 684 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Man_Fixing_Elevator_Text_0, MSGBOX_NPC
# 685 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_Pachirisu::
# 690 "data/maps/MauvilleCity/scripts.pory"
	lock
# 691 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 692 "data/maps/MauvilleCity/scripts.pory"
	playmoncry SPECIES_PACHIRISU, 2
# 693 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Pachirisu_Text_0, MSGBOX_NPC
# 694 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_Minun::
# 699 "data/maps/MauvilleCity/scripts.pory"
	lock
# 700 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 701 "data/maps/MauvilleCity/scripts.pory"
	playmoncry SPECIES_MINUN, 2
# 702 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Minun_Text_0, MSGBOX_NPC
# 703 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_Plusle::
# 708 "data/maps/MauvilleCity/scripts.pory"
	lock
# 709 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 710 "data/maps/MauvilleCity/scripts.pory"
	playmoncry SPECIES_PLUSLE, 2
# 711 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_Plusle_Text_0, MSGBOX_NPC
# 712 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_NewMauvilleMan::
# 717 "data/maps/MauvilleCity/scripts.pory"
	lock
# 718 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 719 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_NewMauvilleMan_Text_0, MSGBOX_NPC
# 720 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_WelcomeToMauville::
# 725 "data/maps/MauvilleCity/scripts.pory"
	lock
# 726 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 727 "data/maps/MauvilleCity/scripts.pory"
	msgbox MauvilleCity_EventScript_WelcomeToMauville_Text_0, MSGBOX_NPC
# 728 "data/maps/MauvilleCity/scripts.pory"
	release
	end


MauvilleCity_EventScript_Clerk::
# 733 "data/maps/MauvilleCity/scripts.pory"
	lock
# 734 "data/maps/MauvilleCity/scripts.pory"
	faceplayer
# 735 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_06, MauvilleCity_EventScript_Clerk_2
# 740 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_04, MauvilleCity_EventScript_Clerk_3
# 745 "data/maps/MauvilleCity/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_02, MauvilleCity_EventScript_Clerk_4
# 751 "data/maps/MauvilleCity/scripts.pory"
	message MauvilleCity_EventScript_Clerk_Text_3
# 752 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 753 "data/maps/MauvilleCity/scripts.pory"
	pokemart TwoIsland_Items_ShopInitial
MauvilleCity_EventScript_Clerk_1:
# 755 "data/maps/MauvilleCity/scripts.pory"
	msgbox gText_PleaseComeAgain
# 756 "data/maps/MauvilleCity/scripts.pory"
	release
	end

MauvilleCity_EventScript_Clerk_2:
# 736 "data/maps/MauvilleCity/scripts.pory"
	message MauvilleCity_EventScript_Clerk_Text_0
# 737 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 738 "data/maps/MauvilleCity/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded3
	goto MauvilleCity_EventScript_Clerk_1

MauvilleCity_EventScript_Clerk_3:
# 741 "data/maps/MauvilleCity/scripts.pory"
	message MauvilleCity_EventScript_Clerk_Text_1
# 742 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 743 "data/maps/MauvilleCity/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded2
	goto MauvilleCity_EventScript_Clerk_1

MauvilleCity_EventScript_Clerk_4:
# 746 "data/maps/MauvilleCity/scripts.pory"
	message MauvilleCity_EventScript_Clerk_Text_2
# 747 "data/maps/MauvilleCity/scripts.pory"
	waitmessage
# 748 "data/maps/MauvilleCity/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded1
	goto MauvilleCity_EventScript_Clerk_1


MauvilleCity_EventScript_Man_Fixing_Elevator_Text_0:
# 684 "data/maps/MauvilleCity/scripts.pory"
	.string "This elevator stopped working so I have\n"
	.string "to fix it, the Gym Leader's wife is stuck\l"
	.string "above...$"

MauvilleCity_EventScript_Pachirisu_Text_0:
# 693 "data/maps/MauvilleCity/scripts.pory"
	.string "Pachirisu: Pachi!$"

MauvilleCity_EventScript_Minun_Text_0:
# 702 "data/maps/MauvilleCity/scripts.pory"
	.string "Minun: Min!$"

MauvilleCity_EventScript_Plusle_Text_0:
# 711 "data/maps/MauvilleCity/scripts.pory"
	.string "Plusle: Plus!$"

MauvilleCity_EventScript_NewMauvilleMan_Text_0:
# 719 "data/maps/MauvilleCity/scripts.pory"
	.string "Mauville became this big thanks to the\n"
	.string "Leader, I remember when it was just\l"
	.string "another city$"

MauvilleCity_EventScript_WelcomeToMauville_Text_0:
# 727 "data/maps/MauvilleCity/scripts.pory"
	.string "Welcome to Mauville City!$"

MauvilleCity_EventScript_Clerk_Text_0:
# 736 "data/maps/MauvilleCity/scripts.pory"
	.string "Oh, hello, {PLAYER}! I have some rare\n"
	.string "items from distant lands. Please have a\l"
	.string "look!$"

MauvilleCity_EventScript_Clerk_Text_1:
# 741 "data/maps/MauvilleCity/scripts.pory"
	.string "Oh, hello, {PLAYER}! I've started\n"
	.string "bringing in items from distant lands.\l"
	.string "I've got some rare items in, too. Please\l"
	.string "have a look!$"

MauvilleCity_EventScript_Clerk_Text_2:
# 746 "data/maps/MauvilleCity/scripts.pory"
	.string "Welcome! I've started bringing in items\n"
	.string "from distant lands. I've got some rare\l"
	.string "items in, too. Please have a look!$"

MauvilleCity_EventScript_Clerk_Text_3:
# 751 "data/maps/MauvilleCity/scripts.pory"
	.string "Welcome! I've got some rare items in,\n"
	.string "too. Please have a look!$"
