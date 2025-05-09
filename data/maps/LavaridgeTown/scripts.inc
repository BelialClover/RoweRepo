# 1 "data/maps/LavaridgeTown/scripts.pory"

# 2 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 7
# 3 "data/maps/LavaridgeTown/scripts.pory"
.set LOCALID_RIVAL, 8
# 4 "data/maps/LavaridgeTown/scripts.pory"

# 5 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_MapScripts:: @ 81EA4D3
# 6 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_OnTransition
# 7 "data/maps/LavaridgeTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavaridgeTown_OnFrame
# 8 "data/maps/LavaridgeTown/scripts.pory"
	.byte 0
# 9 "data/maps/LavaridgeTown/scripts.pory"

# 10 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnTransition: @ 81EA4DE
# 11 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_VISITED_LAVARIDGE_TOWN
# 12 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_WHITEOUT_TO_LAVARIDGE, LavaridgeTown_EventScript_ClearLavaridgeWhiteOut
# 13 "data/maps/LavaridgeTown/scripts.pory"
	call_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, LavaridgeTown_EventScript_ShowMtChimneyTrainers
# 14 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 15 "data/maps/LavaridgeTown/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 16 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_LAVARIDGE_TOWN_STATE, 1
# 17 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq LavaridgeTown_EventScript_CheckSetRivalPos
# 18 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_LAVARIDGE_TOWN_STATE, 1
# 19 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq LavaridgeTown_EventScript_HideMapNamePopup
# 20 "data/maps/LavaridgeTown/scripts.pory"
	end
# 21 "data/maps/LavaridgeTown/scripts.pory"

# 22 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ClearLavaridgeWhiteOut:: @ 81EA514
# 23 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_WHITEOUT_TO_LAVARIDGE
# 24 "data/maps/LavaridgeTown/scripts.pory"
	return
# 25 "data/maps/LavaridgeTown/scripts.pory"

# 26 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_CheckSetRivalPos:: @ 81EA518
# 27 "data/maps/LavaridgeTown/scripts.pory"
	//getplayerxy VAR_0x8004, VAR_0x8005
# 28 "data/maps/LavaridgeTown/scripts.pory"
	//compare VAR_0x8004, 9
# 29 "data/maps/LavaridgeTown/scripts.pory"
	//goto_if_eq LavaridgeTown_EventScript_SetRivalPos
# 30 "data/maps/LavaridgeTown/scripts.pory"
	return
# 31 "data/maps/LavaridgeTown/scripts.pory"

# 32 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_SetRivalPos:: @ 81EA529
# 33 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 11, 9
# 34 "data/maps/LavaridgeTown/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 9, 8
# 35 "data/maps/LavaridgeTown/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_UP
# 36 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_LAVARIDGE_TOWN_RIVAL
# 37 "data/maps/LavaridgeTown/scripts.pory"
	return
# 38 "data/maps/LavaridgeTown/scripts.pory"

# 39 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ShowMtChimneyTrainers:: @ 81EA53F
# 40 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 41 "data/maps/LavaridgeTown/scripts.pory"
	return
# 42 "data/maps/LavaridgeTown/scripts.pory"

# 43 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HideMapNamePopup:: @ 81EA543
# 44 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 45 "data/maps/LavaridgeTown/scripts.pory"
	return
# 46 "data/maps/LavaridgeTown/scripts.pory"

# 47 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_OnFrame: @ 81EA547
# 48 "data/maps/LavaridgeTown/scripts.pory"
	map_script_2 VAR_LAVARIDGE_TOWN_STATE, 1, LavaridgeTown_EventScript_RivalGiveGoGoggles
# 49 "data/maps/LavaridgeTown/scripts.pory"
	.2byte 0
# 50 "data/maps/LavaridgeTown/scripts.pory"

# 51 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalGiveGoGoggles:: @ 81EA551
# 52 "data/maps/LavaridgeTown/scripts.pory"
	goto Route117_PokemonDayCare_DittoWoman
# 53 "data/maps/LavaridgeTown/scripts.pory"
	end
# 54 "data/maps/LavaridgeTown/scripts.pory"

# 55 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_MayGiveGoGoggles:: @ 81EA5B5
# 56 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayNiceBadgesTakeThis, MSGBOX_DEFAULT
# 57 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 58 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 59 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_MayExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 60 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 61 "data/maps/LavaridgeTown/scripts.pory"
	end
# 62 "data/maps/LavaridgeTown/scripts.pory"

# 63 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_BrendanGiveGoGoggles:: @ 81EA5DA
# 64 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanNiceBadgesTakeThis, MSGBOX_DEFAULT
# 65 "data/maps/LavaridgeTown/scripts.pory"
	giveitem ITEM_GO_GOGGLES
# 66 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_GO_GOGGLES
# 67 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad, MSGBOX_DEFAULT
# 68 "data/maps/LavaridgeTown/scripts.pory"
	goto LavaridgeTown_EventScript_RivalExit
# 69 "data/maps/LavaridgeTown/scripts.pory"
	end
# 70 "data/maps/LavaridgeTown/scripts.pory"

# 71 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit:: @ 81EA5FF
# 72 "data/maps/LavaridgeTown/scripts.pory"
	closemessage
# 73 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 74 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 75 "data/maps/LavaridgeTown/scripts.pory"
	delay 30
# 76 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8008, 9
# 77 "data/maps/LavaridgeTown/scripts.pory"
	call_if_eq LavaridgeTown_EventScript_RivalExit1
# 78 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_0x8008, 9
# 79 "data/maps/LavaridgeTown/scripts.pory"
	call_if_ne LavaridgeTown_EventScript_RivalExit2
# 80 "data/maps/LavaridgeTown/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 81 "data/maps/LavaridgeTown/scripts.pory"
	setvar VAR_LAVARIDGE_TOWN_STATE, 2
# 82 "data/maps/LavaridgeTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 83 "data/maps/LavaridgeTown/scripts.pory"
	savebgm MUS_DUMMY
# 84 "data/maps/LavaridgeTown/scripts.pory"
	fadedefaultbgm
# 85 "data/maps/LavaridgeTown/scripts.pory"
	releaseall
# 86 "data/maps/LavaridgeTown/scripts.pory"
	end
# 87 "data/maps/LavaridgeTown/scripts.pory"

# 88 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayMayMusic:: @ 81EA630
# 89 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
# 90 "data/maps/LavaridgeTown/scripts.pory"
	return
# 91 "data/maps/LavaridgeTown/scripts.pory"

# 92 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_PlayBrendanMusic:: @ 81EA635
# 93 "data/maps/LavaridgeTown/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
# 94 "data/maps/LavaridgeTown/scripts.pory"
	return
# 95 "data/maps/LavaridgeTown/scripts.pory"

# 96 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalNoticePlayer:: @ 81EA63A
# 97 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFastestUp
# 98 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 99 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 100 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 101 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 102 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 103 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 104 "data/maps/LavaridgeTown/scripts.pory"
	return
# 105 "data/maps/LavaridgeTown/scripts.pory"

# 106 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExitHerbShop:: @ 81EA65C
# 107 "data/maps/LavaridgeTown/scripts.pory"
	opendoor 12, 15
# 108 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 109 "data/maps/LavaridgeTown/scripts.pory"
	addobject LOCALID_RIVAL
# 110 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalExitHerbShop
# 111 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 112 "data/maps/LavaridgeTown/scripts.pory"
	closedoor 12, 15
# 113 "data/maps/LavaridgeTown/scripts.pory"
	waitdooranim
# 114 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFastestLeft
# 115 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 116 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 117 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 118 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 119 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 120 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 121 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 122 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 123 "data/maps/LavaridgeTown/scripts.pory"
	return
# 124 "data/maps/LavaridgeTown/scripts.pory"

# 125 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer1:: @ 81EA6A1
# 126 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer1
# 127 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 128 "data/maps/LavaridgeTown/scripts.pory"
	return
# 129 "data/maps/LavaridgeTown/scripts.pory"

# 130 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalApproachPlayer2:: @ 81EA6AC
# 131 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL, LavaridgeTown_Movement_RivalApproachPlayer2
# 132 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 133 "data/maps/LavaridgeTown/scripts.pory"
	return
# 134 "data/maps/LavaridgeTown/scripts.pory"

# 135 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit1:: @ 81EA6B7
# 136 "data/maps/LavaridgeTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LavaridgeTown_Movement_PlayerWatchRivalExit
# 137 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit1
# 138 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 139 "data/maps/LavaridgeTown/scripts.pory"
	return
# 140 "data/maps/LavaridgeTown/scripts.pory"

# 141 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_RivalExit2:: @ 81EA6C9
# 142 "data/maps/LavaridgeTown/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, LavaridgeTown_Movement_RivalExit2
# 143 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 144 "data/maps/LavaridgeTown/scripts.pory"
	return
# 145 "data/maps/LavaridgeTown/scripts.pory"

# 146 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit2: @ 81EA6D4
# 147 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 148 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 149 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 150 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 151 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 152 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 153 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 154 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 155 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 156 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_up
# 157 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 158 "data/maps/LavaridgeTown/scripts.pory"

# 159 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_PlayerWatchRivalExit: @ 81EA6DF
# 160 "data/maps/LavaridgeTown/scripts.pory"
	delay_16
# 161 "data/maps/LavaridgeTown/scripts.pory"
	delay_8
# 162 "data/maps/LavaridgeTown/scripts.pory"
	walk_in_place_fastest_right
# 163 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 164 "data/maps/LavaridgeTown/scripts.pory"

# 165 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExit1: @ 81EA6E3
# 166 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_down
# 167 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 168 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 169 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 170 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 171 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 172 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 173 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 174 "data/maps/LavaridgeTown/scripts.pory"
	walk_fast_right
# 175 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 176 "data/maps/LavaridgeTown/scripts.pory"

# 177 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer2: @ 81EA6ED
# 178 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 179 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 180 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 181 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 182 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 183 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 184 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 185 "data/maps/LavaridgeTown/scripts.pory"

# 186 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalApproachPlayer1: @ 81EA6F4
# 187 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 188 "data/maps/LavaridgeTown/scripts.pory"
	walk_left
# 189 "data/maps/LavaridgeTown/scripts.pory"
	walk_up
# 190 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 191 "data/maps/LavaridgeTown/scripts.pory"

# 192 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Movement_RivalExitHerbShop: @ 81EA6F8
# 193 "data/maps/LavaridgeTown/scripts.pory"
	walk_down
# 194 "data/maps/LavaridgeTown/scripts.pory"
	step_end
# 195 "data/maps/LavaridgeTown/scripts.pory"

# 196 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsTrigger:: @ 81EA6FA
# 197 "data/maps/LavaridgeTown/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 198 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, DIR_SOUTH
# 199 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_EventScript_EnteredHotSprings
# 200 "data/maps/LavaridgeTown/scripts.pory"
	end
# 201 "data/maps/LavaridgeTown/scripts.pory"

# 202 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EnteredHotSprings:: @ 81EA70B
# 203 "data/maps/LavaridgeTown/scripts.pory"
	incrementgamestat GAME_STAT_ENTERED_HOT_SPRINGS
# 204 "data/maps/LavaridgeTown/scripts.pory"
	end
# 205 "data/maps/LavaridgeTown/scripts.pory"

# 206 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertM:: @ 81EA70E
# 207 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 208 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 209 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_ThreeShards, MSGBOX_DEFAULT
# 210 "data/maps/LavaridgeTown/scripts.pory"
	checkitem ITEM_RED_SHARD, 2
# 211 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, TRUE
# 212 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_EventScript_EventScript_AsktoTrade
# 213 "data/maps/LavaridgeTown/scripts.pory"
	release
# 214 "data/maps/LavaridgeTown/scripts.pory"
	end
# 215 "data/maps/LavaridgeTown/scripts.pory"
	
# 216 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EventScript_AsktoTrade::
# 217 "data/maps/LavaridgeTown/scripts.pory"
	playse SE_PIN
# 218 "data/maps/LavaridgeTown/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_ExclamationMark
# 219 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 220 "data/maps/LavaridgeTown/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_Delay48
# 221 "data/maps/LavaridgeTown/scripts.pory"
	waitmovement 0
# 222 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_Question, MSGBOX_YESNO
# 223 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, NO
# 224 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_EventScript_FireStarter_Decline
# 225 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 226 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 227 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_No_Space
# 228 "data/maps/LavaridgeTown/scripts.pory"
	removeitem ITEM_RED_SHARD, 2
# 229 "data/maps/LavaridgeTown/scripts.pory"
	random 9
# 230 "data/maps/LavaridgeTown/scripts.pory"
	switch VAR_RESULT
# 231 "data/maps/LavaridgeTown/scripts.pory"
	case 0, LavaridgeTown_EventScript_Give_Charmander_Mega_Y
# 232 "data/maps/LavaridgeTown/scripts.pory"
	case 1, LavaridgeTown_EventScript_Give_Cyndaquil
# 233 "data/maps/LavaridgeTown/scripts.pory"
	case 2, LavaridgeTown_EventScript_Give_Torchic_Mega
# 234 "data/maps/LavaridgeTown/scripts.pory"
	case 3, LavaridgeTown_EventScript_Give_Chimchar
# 235 "data/maps/LavaridgeTown/scripts.pory"
	case 4, LavaridgeTown_EventScript_Give_Tepig
# 236 "data/maps/LavaridgeTown/scripts.pory"
	case 5, LavaridgeTown_EventScript_Give_Fennekin
# 237 "data/maps/LavaridgeTown/scripts.pory"
	case 6, LavaridgeTown_EventScript_Give_Litten
# 238 "data/maps/LavaridgeTown/scripts.pory"
	case 7, LavaridgeTown_EventScript_Give_Scorbunny
# 239 "data/maps/LavaridgeTown/scripts.pory"
	case 8, LavaridgeTown_EventScript_Give_Fuecoco
# 240 "data/maps/LavaridgeTown/scripts.pory"
	end
# 241 "data/maps/LavaridgeTown/scripts.pory"
	
# 242 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_FireStarter_Come_Again::
# 243 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 244 "data/maps/LavaridgeTown/scripts.pory"
	release
# 245 "data/maps/LavaridgeTown/scripts.pory"
	end
# 246 "data/maps/LavaridgeTown/scripts.pory"
	
# 247 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_FireStarter_Decline::
# 248 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_Starter_Declined, MSGBOX_DEFAULT
# 249 "data/maps/LavaridgeTown/scripts.pory"
	release
# 250 "data/maps/LavaridgeTown/scripts.pory"
	end
# 251 "data/maps/LavaridgeTown/scripts.pory"
	
# 252 "data/maps/LavaridgeTown/scripts.pory"
//Starters
# 253 "data/maps/LavaridgeTown/scripts.pory"
	
# 254 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ThreeShards:
# 255 "data/maps/LavaridgeTown/scripts.pory"
	.string "If you have 2 Red Shards I can\n"
# 256 "data/maps/LavaridgeTown/scripts.pory"
	.string "give you a good Pokémon.$"
# 257 "data/maps/LavaridgeTown/scripts.pory"
	
# 258 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_Question:
# 259 "data/maps/LavaridgeTown/scripts.pory"
	.string "Are those Red Shards?\p"
# 260 "data/maps/LavaridgeTown/scripts.pory"
	.string "Do you want to trade them\n"
# 261 "data/maps/LavaridgeTown/scripts.pory"
	.string "for one of my Pokémon?$"
# 262 "data/maps/LavaridgeTown/scripts.pory"
	
# 263 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_Starter_Declined:
# 264 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh well, come again if you change\n"
# 265 "data/maps/LavaridgeTown/scripts.pory"
	.string "your mind.$"
# 266 "data/maps/LavaridgeTown/scripts.pory"
	
# 267 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ComeAgain_Starter:
# 268 "data/maps/LavaridgeTown/scripts.pory"
	.string "Come again if you want another\n"
# 269 "data/maps/LavaridgeTown/scripts.pory"
	.string "one.$"
# 270 "data/maps/LavaridgeTown/scripts.pory"
	
# 271 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ReceivedMonFromOldMan:
# 272 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2} from\n"
# 273 "data/maps/LavaridgeTown/scripts.pory"
	.string "the Old Man.$"
# 274 "data/maps/LavaridgeTown/scripts.pory"
	
# 275 "data/maps/LavaridgeTown/scripts.pory"
//Charmander
# 276 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Give_Charmander::
# 277 "data/maps/LavaridgeTown/scripts.pory"
	bufferspeciesname 1, SPECIES_CHARMANDER
# 278 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 279 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedMonFromOldMan
# 280 "data/maps/LavaridgeTown/scripts.pory"
	givemon SPECIES_CHARMANDER, 10, ITEM_NONE
# 281 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 282 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 283 "data/maps/LavaridgeTown/scripts.pory"
	release
# 284 "data/maps/LavaridgeTown/scripts.pory"
	end
# 285 "data/maps/LavaridgeTown/scripts.pory"
	
# 286 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Give_Charmander_Mega_Y::
# 287 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_unset FLAG_GOT_BADGE_11 LavaridgeTown_EventScript_Give_Charmander
# 288 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_GOT_CHARIZARD_Y_MEGA_STONE LavaridgeTown_EventScript_Give_Charmander_Mega_X
# 289 "data/maps/LavaridgeTown/scripts.pory"
	bufferspeciesname 1, SPECIES_CHARMANDER
# 290 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 291 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedMonFromOldMan
# 292 "data/maps/LavaridgeTown/scripts.pory"
	givemon SPECIES_CHARMANDER, 30, ITEM_CHARIZARDITE_Y
# 293 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_GOT_CHARIZARD_Y_MEGA_STONE
# 294 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 295 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 296 "data/maps/LavaridgeTown/scripts.pory"
	release
# 297 "data/maps/LavaridgeTown/scripts.pory"
	end
# 298 "data/maps/LavaridgeTown/scripts.pory"
	
# 299 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Give_Charmander_Mega_X::
# 300 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_GOT_CHARIZARD_X_MEGA_STONE LavaridgeTown_EventScript_Give_Charmander
# 301 "data/maps/LavaridgeTown/scripts.pory"
	bufferspeciesname 1, SPECIES_CHARMANDER
# 302 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 303 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedMonFromOldMan
# 304 "data/maps/LavaridgeTown/scripts.pory"
	givemon SPECIES_CHARMANDER, 30, ITEM_CHARIZARDITE_X
# 305 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_GOT_CHARIZARD_X_MEGA_STONE
# 306 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 307 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 308 "data/maps/LavaridgeTown/scripts.pory"
	release
# 309 "data/maps/LavaridgeTown/scripts.pory"
	end
# 310 "data/maps/LavaridgeTown/scripts.pory"
	
# 311 "data/maps/LavaridgeTown/scripts.pory"
//Cyndaquil
# 312 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Give_Cyndaquil::
# 313 "data/maps/LavaridgeTown/scripts.pory"
	bufferspeciesname 1, SPECIES_CYNDAQUIL
# 314 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 315 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedMonFromOldMan
# 316 "data/maps/LavaridgeTown/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 10, ITEM_NONE
# 317 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 318 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 319 "data/maps/LavaridgeTown/scripts.pory"
	release
# 320 "data/maps/LavaridgeTown/scripts.pory"
	end
# 321 "data/maps/LavaridgeTown/scripts.pory"
	
# 322 "data/maps/LavaridgeTown/scripts.pory"
//Torchic
# 323 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Give_Torchic::
# 324 "data/maps/LavaridgeTown/scripts.pory"
	bufferspeciesname 1, SPECIES_TORCHIC
# 325 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 326 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedMonFromOldMan
# 327 "data/maps/LavaridgeTown/scripts.pory"
	givemon SPECIES_TORCHIC, 10, ITEM_NONE
# 328 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 329 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 330 "data/maps/LavaridgeTown/scripts.pory"
	release
# 331 "data/maps/LavaridgeTown/scripts.pory"
	end
# 332 "data/maps/LavaridgeTown/scripts.pory"
	
# 333 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Give_Torchic_Mega::
# 334 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_unset FLAG_GOT_BADGE_11 LavaridgeTown_EventScript_Give_Torchic
# 335 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_GOT_BLAZIKEN_MEGA_STONE LavaridgeTown_EventScript_Give_Torchic
# 336 "data/maps/LavaridgeTown/scripts.pory"
	bufferspeciesname 1, SPECIES_TORCHIC
# 337 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 338 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedMonFromOldMan
# 339 "data/maps/LavaridgeTown/scripts.pory"
	givemon SPECIES_TORCHIC, 30, ITEM_BLAZIKENITE
# 340 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 341 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_GOT_BLAZIKEN_MEGA_STONE
# 342 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 343 "data/maps/LavaridgeTown/scripts.pory"
	release
# 344 "data/maps/LavaridgeTown/scripts.pory"
	end
# 345 "data/maps/LavaridgeTown/scripts.pory"
	
# 346 "data/maps/LavaridgeTown/scripts.pory"
//Chimchar
# 347 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Give_Chimchar::
# 348 "data/maps/LavaridgeTown/scripts.pory"
	bufferspeciesname 1, SPECIES_CHIMCHAR
# 349 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 350 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedMonFromOldMan
# 351 "data/maps/LavaridgeTown/scripts.pory"
	givemon SPECIES_CHIMCHAR, 10, ITEM_NONE
# 352 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 353 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 354 "data/maps/LavaridgeTown/scripts.pory"
	release
# 355 "data/maps/LavaridgeTown/scripts.pory"
	end
# 356 "data/maps/LavaridgeTown/scripts.pory"
	
# 357 "data/maps/LavaridgeTown/scripts.pory"
//Tepig
# 358 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Give_Tepig::
# 359 "data/maps/LavaridgeTown/scripts.pory"
	bufferspeciesname 1, SPECIES_TEPIG
# 360 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 361 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedMonFromOldMan
# 362 "data/maps/LavaridgeTown/scripts.pory"
	givemon SPECIES_TEPIG, 10, ITEM_NONE
# 363 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 364 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 365 "data/maps/LavaridgeTown/scripts.pory"
	release
# 366 "data/maps/LavaridgeTown/scripts.pory"
	end
# 367 "data/maps/LavaridgeTown/scripts.pory"
	
# 368 "data/maps/LavaridgeTown/scripts.pory"
//Fennekin
# 369 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Give_Fennekin::
# 370 "data/maps/LavaridgeTown/scripts.pory"
	bufferspeciesname 1, SPECIES_FENNEKIN
# 371 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 372 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedMonFromOldMan
# 373 "data/maps/LavaridgeTown/scripts.pory"
	givemon SPECIES_FENNEKIN, 10, ITEM_NONE
# 374 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 375 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 376 "data/maps/LavaridgeTown/scripts.pory"
	release
# 377 "data/maps/LavaridgeTown/scripts.pory"
	end
# 378 "data/maps/LavaridgeTown/scripts.pory"
	
# 379 "data/maps/LavaridgeTown/scripts.pory"
//Litten
# 380 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Give_Litten::
# 381 "data/maps/LavaridgeTown/scripts.pory"
	bufferspeciesname 1, SPECIES_LITTEN
# 382 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 383 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedMonFromOldMan
# 384 "data/maps/LavaridgeTown/scripts.pory"
	givemon SPECIES_LITTEN, 10, ITEM_NONE
# 385 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 386 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 387 "data/maps/LavaridgeTown/scripts.pory"
	release
# 388 "data/maps/LavaridgeTown/scripts.pory"
	end
# 389 "data/maps/LavaridgeTown/scripts.pory"
	
# 390 "data/maps/LavaridgeTown/scripts.pory"
//Scorbunny
# 391 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Give_Scorbunny::
# 392 "data/maps/LavaridgeTown/scripts.pory"
	bufferspeciesname 1, SPECIES_SCORBUNNY
# 393 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 394 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedMonFromOldMan
# 395 "data/maps/LavaridgeTown/scripts.pory"
	givemon SPECIES_SCORBUNNY, 10, ITEM_NONE
# 396 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 397 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 398 "data/maps/LavaridgeTown/scripts.pory"
	release
# 399 "data/maps/LavaridgeTown/scripts.pory"
	end
# 400 "data/maps/LavaridgeTown/scripts.pory"

# 401 "data/maps/LavaridgeTown/scripts.pory"
//Fuecoco
# 402 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Give_Fuecoco::
# 403 "data/maps/LavaridgeTown/scripts.pory"
	bufferspeciesname 1, SPECIES_FUECOCO
# 404 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 405 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedMonFromOldMan
# 406 "data/maps/LavaridgeTown/scripts.pory"
	givemon SPECIES_FUECOCO, 10, ITEM_NONE
# 407 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 408 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_ComeAgain_Starter, MSGBOX_DEFAULT
# 409 "data/maps/LavaridgeTown/scripts.pory"
	release
# 410 "data/maps/LavaridgeTown/scripts.pory"
	end
# 411 "data/maps/LavaridgeTown/scripts.pory"

# 412 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_OldMan:: @ 81EA717
# 413 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_PokemonNippedBackside, MSGBOX_SIGN
# 414 "data/maps/LavaridgeTown/scripts.pory"
	end
# 415 "data/maps/LavaridgeTown/scripts.pory"

# 416 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_Twin:: @ 81EA720
# 417 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_BatheInHotSpringsEveryDay, MSGBOX_NPC
# 418 "data/maps/LavaridgeTown/scripts.pory"
	end
# 419 "data/maps/LavaridgeTown/scripts.pory"

# 420 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman1:: @ 81EA729
# 421 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_IfPokemonInHotSprings, MSGBOX_NPC
# 422 "data/maps/LavaridgeTown/scripts.pory"
	end
# 423 "data/maps/LavaridgeTown/scripts.pory"

# 424 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HotSpringsOldWoman2:: @ 81EA732
# 425 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HotSpringsClaims, MSGBOX_NPC
# 426 "data/maps/LavaridgeTown/scripts.pory"
	end
# 427 "data/maps/LavaridgeTown/scripts.pory"

# 428 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ExpertF:: @ 81EA73B
# 429 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_OhYouLikeHotSprings, MSGBOX_NPC
# 430 "data/maps/LavaridgeTown/scripts.pory"
	end
# 431 "data/maps/LavaridgeTown/scripts.pory"

# 432 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_EggWoman:: @ 81EA744
# 433 "data/maps/LavaridgeTown/scripts.pory"
	lock
# 434 "data/maps/LavaridgeTown/scripts.pory"
	faceplayer
# 435 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, LavaridgeTown_EventScript_ReceivedEgg
# 436 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
# 437 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, NO
# 438 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_EventScript_DeclineEgg
# 439 "data/maps/LavaridgeTown/scripts.pory"
	getpartysize
# 440 "data/maps/LavaridgeTown/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 441 "data/maps/LavaridgeTown/scripts.pory"
	goto_if_eq LavaridgeTown_EventScript_NoRoomForEgg
# 442 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg, MSGBOX_DEFAULT
# 443 "data/maps/LavaridgeTown/scripts.pory"
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
# 444 "data/maps/LavaridgeTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 445 "data/maps/LavaridgeTown/scripts.pory"
	message LavaridgeTown_Text_ReceivedTheEgg
# 446 "data/maps/LavaridgeTown/scripts.pory"
	waitfanfare
# 447 "data/maps/LavaridgeTown/scripts.pory"
	givemon SPECIES_TOGEPI, 1, ITEM_NONE
# 448 "data/maps/LavaridgeTown/scripts.pory"
	release
# 449 "data/maps/LavaridgeTown/scripts.pory"
	end
# 450 "data/maps/LavaridgeTown/scripts.pory"

# 451 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_ReceivedEgg:: @ 81EA787
# 452 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_DEFAULT
# 453 "data/maps/LavaridgeTown/scripts.pory"
	release
# 454 "data/maps/LavaridgeTown/scripts.pory"
	end
# 455 "data/maps/LavaridgeTown/scripts.pory"

# 456 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_NoRoomForEgg:: @ 81EA791
# 457 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_NoRoomForThisEgg, MSGBOX_DEFAULT
# 458 "data/maps/LavaridgeTown/scripts.pory"
	release
# 459 "data/maps/LavaridgeTown/scripts.pory"
	end
# 460 "data/maps/LavaridgeTown/scripts.pory"

# 461 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_DeclineEgg:: @ 81EA79B
# 462 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_AsYouWishThen, MSGBOX_DEFAULT
# 463 "data/maps/LavaridgeTown/scripts.pory"
	release
# 464 "data/maps/LavaridgeTown/scripts.pory"
	end
# 465 "data/maps/LavaridgeTown/scripts.pory"

# 466 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_TownSign:: @ 81EA7A5
# 467 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_TownSign, MSGBOX_SIGN
# 468 "data/maps/LavaridgeTown/scripts.pory"
	end
# 469 "data/maps/LavaridgeTown/scripts.pory"

# 470 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_GymSign:: @ 81EA7AE
# 471 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_GymSign, MSGBOX_SIGN
# 472 "data/maps/LavaridgeTown/scripts.pory"
	end
# 473 "data/maps/LavaridgeTown/scripts.pory"

# 474 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_EventScript_HerbShopSign:: @ 81EA7B7
# 475 "data/maps/LavaridgeTown/scripts.pory"
	msgbox LavaridgeTown_Text_HerbShopSign, MSGBOX_SIGN
# 476 "data/maps/LavaridgeTown/scripts.pory"
	end
# 477 "data/maps/LavaridgeTown/scripts.pory"

# 478 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayNiceBadgesTakeThis: @ 81EA7C0
# 479 "data/maps/LavaridgeTown/scripts.pory"
	.string "May: {PLAYER}{KUN}! Long time no see!\p"
# 480 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? While I visited the hot springs,\n"
# 481 "data/maps/LavaridgeTown/scripts.pory"
	.string "you got the Lavaridge Gym Badge.\p"
# 482 "data/maps/LavaridgeTown/scripts.pory"
	.string "You must have collected\n"
# 483 "data/maps/LavaridgeTown/scripts.pory"
	.string "good Pokémon…\l"
# 484 "data/maps/LavaridgeTown/scripts.pory"
	.string "No, I believe you raised some.\p"
# 485 "data/maps/LavaridgeTown/scripts.pory"
	.string "I guess it would be okay for you to\n"
# 486 "data/maps/LavaridgeTown/scripts.pory"
	.string "have this.$"
# 487 "data/maps/LavaridgeTown/scripts.pory"

# 488 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_MayExplainGoGogglesChallengeDad: @ 81EA897
# 489 "data/maps/LavaridgeTown/scripts.pory"
	.string "May: With those Go-Goggles, you'll\n"
# 490 "data/maps/LavaridgeTown/scripts.pory"
	.string "have no trouble getting through the\l"
# 491 "data/maps/LavaridgeTown/scripts.pory"
	.string "desert near Route 111.\p"
# 492 "data/maps/LavaridgeTown/scripts.pory"
	.string "But, wow, {PLAYER}{KUN}…\n"
# 493 "data/maps/LavaridgeTown/scripts.pory"
	.string "Challenging Gyms…\p"
# 494 "data/maps/LavaridgeTown/scripts.pory"
	.string "You're trying hard because you don't\n"
# 495 "data/maps/LavaridgeTown/scripts.pory"
	.string "want to lose to me, I bet!\p"
# 496 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER}{KUN}, I think I should challenge\n"
# 497 "data/maps/LavaridgeTown/scripts.pory"
	.string "your dad in Petalburg Gym.\p"
# 498 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you again!$"
# 499 "data/maps/LavaridgeTown/scripts.pory"

# 500 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanNiceBadgesTakeThis: @ 81EA9A2
# 501 "data/maps/LavaridgeTown/scripts.pory"
	.string "Brendan: {PLAYER}, hey, it's been a while.\n"
# 502 "data/maps/LavaridgeTown/scripts.pory"
	.string "How's it going?\p"
# 503 "data/maps/LavaridgeTown/scripts.pory"
	.string "Hmm…\n"
# 504 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's a decent collection of Badges.\p"
# 505 "data/maps/LavaridgeTown/scripts.pory"
	.string "All right, then.\n"
# 506 "data/maps/LavaridgeTown/scripts.pory"
	.string "You may as well have this.$"
# 507 "data/maps/LavaridgeTown/scripts.pory"

# 508 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad: @ 81EAA2E
# 509 "data/maps/LavaridgeTown/scripts.pory"
	.string "Brendan: Keep those with you if you're\n"
# 510 "data/maps/LavaridgeTown/scripts.pory"
	.string "planning on going into that desert near\l"
# 511 "data/maps/LavaridgeTown/scripts.pory"
	.string "Route 111.\p"
# 512 "data/maps/LavaridgeTown/scripts.pory"
	.string "There should be some Pokémon that\n"
# 513 "data/maps/LavaridgeTown/scripts.pory"
	.string "are exclusively desert-dwellers.\l"
# 514 "data/maps/LavaridgeTown/scripts.pory"
	.string "You might look around for those.\p"
# 515 "data/maps/LavaridgeTown/scripts.pory"
	.string "As for me…\n"
# 516 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'm considering challenging Norman,\l"
# 517 "data/maps/LavaridgeTown/scripts.pory"
	.string "the Gym Leader of Petalburg.\p"
# 518 "data/maps/LavaridgeTown/scripts.pory"
	.string "Unlike you, {PLAYER}, your dad looks like\n"
# 519 "data/maps/LavaridgeTown/scripts.pory"
	.string "he really is tough.\p"
# 520 "data/maps/LavaridgeTown/scripts.pory"
	.string "See you around!$"
# 521 "data/maps/LavaridgeTown/scripts.pory"

# 522 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HaveEggWillYouTakeIt: @ 81EAB80
# 523 "data/maps/LavaridgeTown/scripts.pory"
	.string "I have here an Egg.\p"
# 524 "data/maps/LavaridgeTown/scripts.pory"
	.string "I'd hoped to hatch it by covering it in\n"
# 525 "data/maps/LavaridgeTown/scripts.pory"
	.string "hot sand by the hot springs.\l"
# 526 "data/maps/LavaridgeTown/scripts.pory"
	.string "But that doesn't seem to be enough…\p"
# 527 "data/maps/LavaridgeTown/scripts.pory"
	.string "I've heard it would be best if it were\n"
# 528 "data/maps/LavaridgeTown/scripts.pory"
	.string "kept together with Pokémon and\l"
# 529 "data/maps/LavaridgeTown/scripts.pory"
	.string "carried about.\p"
# 530 "data/maps/LavaridgeTown/scripts.pory"
	.string "You are a Trainer, yes?\n"
# 531 "data/maps/LavaridgeTown/scripts.pory"
	.string "And your Pokémon radiate vitality.\p"
# 532 "data/maps/LavaridgeTown/scripts.pory"
	.string "So, what say you?\n"
# 533 "data/maps/LavaridgeTown/scripts.pory"
	.string "Will you take this Egg to hatch?$"
# 534 "data/maps/LavaridgeTown/scripts.pory"

# 535 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg: @ 81EACC0
# 536 "data/maps/LavaridgeTown/scripts.pory"
	.string "Good! I hope you'll walk plenty with\n"
# 537 "data/maps/LavaridgeTown/scripts.pory"
	.string "this here Egg!$"
# 538 "data/maps/LavaridgeTown/scripts.pory"

# 539 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_ReceivedTheEgg: @ 81EACF4
# 540 "data/maps/LavaridgeTown/scripts.pory"
	.string "{PLAYER} received the Egg.$"
# 541 "data/maps/LavaridgeTown/scripts.pory"

# 542 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_NoRoomForThisEgg: @ 81EAD09
# 543 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh? You've too many Pokémon.\n"
# 544 "data/maps/LavaridgeTown/scripts.pory"
	.string "There's no room for this Egg…$"
# 545 "data/maps/LavaridgeTown/scripts.pory"

# 546 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_AsYouWishThen: @ 81EAD44
# 547 "data/maps/LavaridgeTown/scripts.pory"
	.string "As you wish, then…\p"
# 548 "data/maps/LavaridgeTown/scripts.pory"
	.string "If you have a change of heart about\n"
# 549 "data/maps/LavaridgeTown/scripts.pory"
	.string "hatching this Egg, I will be here.$"
# 550 "data/maps/LavaridgeTown/scripts.pory"

# 551 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare: @ 81EAD9E
# 552 "data/maps/LavaridgeTown/scripts.pory"
	.string "Every so often, an Egg will be found at\n"
# 553 "data/maps/LavaridgeTown/scripts.pory"
	.string "the Pokémon Day Care.\p"
# 554 "data/maps/LavaridgeTown/scripts.pory"
	.string "Or at least that's how the rumor goes.$"
# 555 "data/maps/LavaridgeTown/scripts.pory"

# 556 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsNeverRunDry: @ 81EAE03
# 557 "data/maps/LavaridgeTown/scripts.pory"
	.string "We draw as much hot water as we need,\n"
# 558 "data/maps/LavaridgeTown/scripts.pory"
	.string "and yet the hot springs never run dry.\p"
# 559 "data/maps/LavaridgeTown/scripts.pory"
	.string "Isn't it magical?\p"
# 560 "data/maps/LavaridgeTown/scripts.pory"
	.string "These hot springs appear near active\n"
# 561 "data/maps/LavaridgeTown/scripts.pory"
	.string "volcanoes. Veins of water under the\l"
# 562 "data/maps/LavaridgeTown/scripts.pory"
	.string "ground are heated by magma to well up\l"
# 563 "data/maps/LavaridgeTown/scripts.pory"
	.string "as hot springs.$"
# 564 "data/maps/LavaridgeTown/scripts.pory"

# 565 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_PokemonNippedBackside: @ 81EAEE1
# 566 "data/maps/LavaridgeTown/scripts.pory"
	.string "Being buried in this hot sand is…\n"
# 567 "data/maps/LavaridgeTown/scripts.pory"
	.string "Sigh…\p"
# 568 "data/maps/LavaridgeTown/scripts.pory"
	.string "So warm and heavenly…\p"
# 569 "data/maps/LavaridgeTown/scripts.pory"
	.string "Eh? Gyaah! Ouch!\p"
# 570 "data/maps/LavaridgeTown/scripts.pory"
	.string "A Pokémon nipped my backside!$"
# 571 "data/maps/LavaridgeTown/scripts.pory"

# 572 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_OhYouLikeHotSprings: @ 81EAF4E
# 573 "data/maps/LavaridgeTown/scripts.pory"
	.string "Oh, you like hot springs, do you?\p"
# 574 "data/maps/LavaridgeTown/scripts.pory"
	.string "That's surprising for one as young\n"
# 575 "data/maps/LavaridgeTown/scripts.pory"
	.string "as you.$"
# 576 "data/maps/LavaridgeTown/scripts.pory"

# 577 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_BatheInHotSpringsEveryDay: @ 81EAF9B
# 578 "data/maps/LavaridgeTown/scripts.pory"
	.string "I bathe in the hot springs every day.\p"
# 579 "data/maps/LavaridgeTown/scripts.pory"
	.string "I want to become a beautiful and strong\n"
# 580 "data/maps/LavaridgeTown/scripts.pory"
	.string "Gym Leader like Flannery.$"
# 581 "data/maps/LavaridgeTown/scripts.pory"

# 582 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_IfPokemonInHotSprings: @ 81EB003
# 583 "data/maps/LavaridgeTown/scripts.pory"
	.string "If people put Pokémon in hot springs,\n"
# 584 "data/maps/LavaridgeTown/scripts.pory"
	.string "it might be seriously strange.\p"
# 585 "data/maps/LavaridgeTown/scripts.pory"
	.string "Why, it might be an electric bath, or\n"
# 586 "data/maps/LavaridgeTown/scripts.pory"
	.string "a bubble bath, or even a lava bath…$"
# 587 "data/maps/LavaridgeTown/scripts.pory"

# 588 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HotSpringsClaims: @ 81EB092
# 589 "data/maps/LavaridgeTown/scripts.pory"
	.string "They're claiming that these hot springs\n"
# 590 "data/maps/LavaridgeTown/scripts.pory"
	.string "are good for calming nervous tension,\l"
# 591 "data/maps/LavaridgeTown/scripts.pory"
	.string "relieving aching muscles, solving\l"
# 592 "data/maps/LavaridgeTown/scripts.pory"
	.string "romantic problems, and attracting\l"
# 593 "data/maps/LavaridgeTown/scripts.pory"
	.string "money…$"
# 594 "data/maps/LavaridgeTown/scripts.pory"

# 595 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_TownSign: @ 81EB12B
# 596 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lavaridge Town\p"
# 597 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Pokémon Center Hot Springs\n"
# 598 "data/maps/LavaridgeTown/scripts.pory"
	.string "An excellent place for relaxing!”$"
# 599 "data/maps/LavaridgeTown/scripts.pory"

# 600 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_GymSign: @ 81EB178
# 601 "data/maps/LavaridgeTown/scripts.pory"
	.string "Lavaridge Town Pokémon Gym\n"
# 602 "data/maps/LavaridgeTown/scripts.pory"
	.string "Leader: Flannery\l"
# 603 "data/maps/LavaridgeTown/scripts.pory"
	.string "“One with a fiery passion that burns!”$"
# 604 "data/maps/LavaridgeTown/scripts.pory"

# 605 "data/maps/LavaridgeTown/scripts.pory"
LavaridgeTown_Text_HerbShopSign: @ 81EB1CB
# 606 "data/maps/LavaridgeTown/scripts.pory"
	.string "Pokémon Herb Shop\n"
# 607 "data/maps/LavaridgeTown/scripts.pory"
	.string "“Bitter taste--better cure!”$"
