# 1 "data/maps/Route118/scripts.pory"

# 2 "data/maps/Route118/scripts.pory"
.set LOCALID_STEVEN, 19
# 3 "data/maps/Route118/scripts.pory"

# 4 "data/maps/Route118/scripts.pory"
Route118_MapScripts:: @ 81F3DBC
# 5 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route118_OnTransition
# 6 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route118_OnLoad
# 7 "data/maps/Route118/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route118_OnFrame
# 8 "data/maps/Route118/scripts.pory"
	.byte 0
# 9 "data/maps/Route118/scripts.pory"

# 10 "data/maps/Route118/scripts.pory"
Route118_OnTransition: @ 81F3DCC
# 11 "data/maps/Route118/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 12 "data/maps/Route118/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 13 "data/maps/Route118/scripts.pory"
	call_if_eq AbnormalWeather_EventScript_HideMapNamePopup
# 14 "data/maps/Route118/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST
# 15 "data/maps/Route118/scripts.pory"
	call_if_eq AbnormalWeather_StartGroudonWeather
# 16 "data/maps/Route118/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST
# 17 "data/maps/Route118/scripts.pory"
	call_if_eq AbnormalWeather_StartGroudonWeather
# 18 "data/maps/Route118/scripts.pory"
	end
# 19 "data/maps/Route118/scripts.pory"

# 20 "data/maps/Route118/scripts.pory"
Route118_OnLoad: @ 81F3DF3
# 21 "data/maps/Route118/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_EAST
# 22 "data/maps/Route118/scripts.pory"
	call_if_eq AbnormalWeather_EventScript_PlaceTilesRoute118East
# 23 "data/maps/Route118/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_118_WEST
# 24 "data/maps/Route118/scripts.pory"
	call_if_eq AbnormalWeather_EventScript_PlaceTilesRoute118West
# 25 "data/maps/Route118/scripts.pory"
	end
# 26 "data/maps/Route118/scripts.pory"

# 27 "data/maps/Route118/scripts.pory"
Route118_OnFrame: @ 81F3E0A
# 28 "data/maps/Route118/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 29 "data/maps/Route118/scripts.pory"
	.2byte 0
# 30 "data/maps/Route118/scripts.pory"

# 31 "data/maps/Route118/scripts.pory"
Route118_EventScript_GoodRodFisherman:: @ 81F3E14
# 32 "data/maps/Route118/scripts.pory"
	lock
# 33 "data/maps/Route118/scripts.pory"
	faceplayer
# 34 "data/maps/Route118/scripts.pory"
	goto_if_set FLAG_RECEIVED_GOOD_ROD, Route118_EventScript_ReceivedGoodRod
# 35 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_YouAgreeGoodRodIsGood, MSGBOX_YESNO
# 36 "data/maps/Route118/scripts.pory"
	compare VAR_RESULT, YES
# 37 "data/maps/Route118/scripts.pory"
	goto_if_eq Route118_EventScript_ReceiveGoodRod
# 38 "data/maps/Route118/scripts.pory"
	compare VAR_RESULT, NO
# 39 "data/maps/Route118/scripts.pory"
	goto_if_eq Route118_EventScript_DeclineGoodRod
# 40 "data/maps/Route118/scripts.pory"
	end
# 41 "data/maps/Route118/scripts.pory"

# 42 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceiveGoodRod:: @ 81F3E3E
# 43 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_IdenticalMindsTakeThis, MSGBOX_DEFAULT
# 44 "data/maps/Route118/scripts.pory"
	giveitem ITEM_LURE_BALL, 10
# 45 "data/maps/Route118/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 46 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryYourLuckFishing, MSGBOX_DEFAULT
# 47 "data/maps/Route118/scripts.pory"
	release
# 48 "data/maps/Route118/scripts.pory"
	end
# 49 "data/maps/Route118/scripts.pory"

# 50 "data/maps/Route118/scripts.pory"
Route118_EventScript_DeclineGoodRod:: @ 81F3E5F
# 51 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DontYouLikeToFish, MSGBOX_DEFAULT
# 52 "data/maps/Route118/scripts.pory"
	release
# 53 "data/maps/Route118/scripts.pory"
	end
# 54 "data/maps/Route118/scripts.pory"

# 55 "data/maps/Route118/scripts.pory"
Route118_EventScript_ReceivedGoodRod:: @ 81F3E69
# 56 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
# 57 "data/maps/Route118/scripts.pory"
	release
# 58 "data/maps/Route118/scripts.pory"
	end
# 59 "data/maps/Route118/scripts.pory"

# 60 "data/maps/Route118/scripts.pory"
Route118_EventScript_Girl:: @ 81F3E73
# 61 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_CanCrossRiversWithSurf, MSGBOX_NPC
# 62 "data/maps/Route118/scripts.pory"
	end
# 63 "data/maps/Route118/scripts.pory"

# 64 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSignMauville:: @ 81F3E7C
# 65 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSignMauville, MSGBOX_SIGN
# 66 "data/maps/Route118/scripts.pory"
	end
# 67 "data/maps/Route118/scripts.pory"

# 68 "data/maps/Route118/scripts.pory"
Route118_EventScript_RouteSign119:: @ 81F3E85
# 69 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RouteSign119, MSGBOX_SIGN
# 70 "data/maps/Route118/scripts.pory"
	end
# 71 "data/maps/Route118/scripts.pory"

# 72 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger0:: @ 81F3E8E
# 73 "data/maps/Route118/scripts.pory"
	lockall
# 74 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 0
# 75 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 76 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenApproachLedge0
# 78 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 79 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 80 "data/maps/Route118/scripts.pory"
	end
# 81 "data/maps/Route118/scripts.pory"

# 82 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger1:: @ 81F3EAE
# 83 "data/maps/Route118/scripts.pory"
	lockall
# 84 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 1
# 85 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 86 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 88 "data/maps/Route118/scripts.pory"
	end
# 89 "data/maps/Route118/scripts.pory"

# 90 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger2:: @ 81F3EC4
# 91 "data/maps/Route118/scripts.pory"
	lockall
# 92 "data/maps/Route118/scripts.pory"
	setvar VAR_0x8008, 2
# 93 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 94 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenApproachLedge2
# 96 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route118/scripts.pory"
	goto Route118_EventScript_StevenTrigger
# 98 "data/maps/Route118/scripts.pory"
	end
# 99 "data/maps/Route118/scripts.pory"

# 100 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenTrigger:: @ 81F3EE4
# 101 "data/maps/Route118/scripts.pory"
	playse SE_LEDGE
# 102 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenJumpLedge
# 103 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route118/scripts.pory"
	delay 30
# 105 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_StevenQuestions, MSGBOX_DEFAULT
# 106 "data/maps/Route118/scripts.pory"
	closemessage
# 107 "data/maps/Route118/scripts.pory"
	compare VAR_0x8008, 0
# 108 "data/maps/Route118/scripts.pory"
	call_if_eq Route118_EventScript_StevenExit0
# 109 "data/maps/Route118/scripts.pory"
	compare VAR_0x8008, 1
# 110 "data/maps/Route118/scripts.pory"
	call_if_eq Route118_EventScript_StevenExit1
# 111 "data/maps/Route118/scripts.pory"
	compare VAR_0x8008, 2
# 112 "data/maps/Route118/scripts.pory"
	call_if_eq Route118_EventScript_StevenExit2
# 113 "data/maps/Route118/scripts.pory"
	setvar VAR_ROUTE118_STATE, 1
# 114 "data/maps/Route118/scripts.pory"
	removeobject LOCALID_STEVEN
# 115 "data/maps/Route118/scripts.pory"
	releaseall
# 116 "data/maps/Route118/scripts.pory"
	end
# 117 "data/maps/Route118/scripts.pory"

# 118 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit0:: @ 81F3F28
# 119 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 120 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit0
# 121 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 122 "data/maps/Route118/scripts.pory"
	return
# 123 "data/maps/Route118/scripts.pory"

# 124 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit1:: @ 81F3F3A
# 125 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 126 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit1
# 127 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 128 "data/maps/Route118/scripts.pory"
	return
# 129 "data/maps/Route118/scripts.pory"

# 130 "data/maps/Route118/scripts.pory"
Route118_EventScript_StevenExit2:: @ 81F3F4C
# 131 "data/maps/Route118/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route118_Movement_PlayerWatchStevenExit
# 132 "data/maps/Route118/scripts.pory"
	applymovement LOCALID_STEVEN, Route118_Movement_StevenExit2
# 133 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route118/scripts.pory"
	return
# 135 "data/maps/Route118/scripts.pory"

# 136 "data/maps/Route118/scripts.pory"
Route118_Movement_PlayerWatchStevenExit: @ 81F3F5E
# 137 "data/maps/Route118/scripts.pory"
	delay_16
# 138 "data/maps/Route118/scripts.pory"
	walk_in_place_fastest_right
# 139 "data/maps/Route118/scripts.pory"
	step_end
# 140 "data/maps/Route118/scripts.pory"

# 141 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge0: @ 81F3F61
# 142 "data/maps/Route118/scripts.pory"
	walk_left
# 143 "data/maps/Route118/scripts.pory"
	step_end
# 144 "data/maps/Route118/scripts.pory"

# 145 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenApproachLedge2: @ 81F3F63
# 146 "data/maps/Route118/scripts.pory"
	walk_right
# 147 "data/maps/Route118/scripts.pory"
	step_end
# 148 "data/maps/Route118/scripts.pory"

# 149 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenJumpLedge: @ 81F3F65
# 150 "data/maps/Route118/scripts.pory"
	jump_2_down
# 151 "data/maps/Route118/scripts.pory"
	delay_16
# 152 "data/maps/Route118/scripts.pory"
	walk_down
# 153 "data/maps/Route118/scripts.pory"
	step_end
# 154 "data/maps/Route118/scripts.pory"

# 155 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit0: @ 81F3F69
# 156 "data/maps/Route118/scripts.pory"
	walk_right
# 157 "data/maps/Route118/scripts.pory"
	walk_right
# 158 "data/maps/Route118/scripts.pory"
	walk_right
# 159 "data/maps/Route118/scripts.pory"
	walk_right
# 160 "data/maps/Route118/scripts.pory"
	walk_right
# 161 "data/maps/Route118/scripts.pory"
	walk_right
# 162 "data/maps/Route118/scripts.pory"
	walk_right
# 163 "data/maps/Route118/scripts.pory"
	walk_right
# 164 "data/maps/Route118/scripts.pory"
	walk_right
# 165 "data/maps/Route118/scripts.pory"
	walk_right
# 166 "data/maps/Route118/scripts.pory"
	step_end
# 167 "data/maps/Route118/scripts.pory"

# 168 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit1: @ 81F3F74
# 169 "data/maps/Route118/scripts.pory"
	walk_right
# 170 "data/maps/Route118/scripts.pory"
	walk_right
# 171 "data/maps/Route118/scripts.pory"
	walk_right
# 172 "data/maps/Route118/scripts.pory"
	walk_right
# 173 "data/maps/Route118/scripts.pory"
	walk_right
# 174 "data/maps/Route118/scripts.pory"
	walk_right
# 175 "data/maps/Route118/scripts.pory"
	walk_right
# 176 "data/maps/Route118/scripts.pory"
	walk_right
# 177 "data/maps/Route118/scripts.pory"
	walk_right
# 178 "data/maps/Route118/scripts.pory"
	step_end
# 179 "data/maps/Route118/scripts.pory"

# 180 "data/maps/Route118/scripts.pory"
Route118_Movement_StevenExit2: @ 81F3F7E
# 181 "data/maps/Route118/scripts.pory"
	walk_right
# 182 "data/maps/Route118/scripts.pory"
	walk_right
# 183 "data/maps/Route118/scripts.pory"
	walk_right
# 184 "data/maps/Route118/scripts.pory"
	walk_right
# 185 "data/maps/Route118/scripts.pory"
	walk_right
# 186 "data/maps/Route118/scripts.pory"
	walk_right
# 187 "data/maps/Route118/scripts.pory"
	walk_right
# 188 "data/maps/Route118/scripts.pory"
	walk_right
# 189 "data/maps/Route118/scripts.pory"
	step_end
# 190 "data/maps/Route118/scripts.pory"

# 191 "data/maps/Route118/scripts.pory"
Route118_EventScript_Rose:: @ 81F3F87
# 192 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_ROSE_1, Route118_Text_RoseIntro, Route118_Text_RoseDefeat, Route118_EventScript_RegisterRose
# 193 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 194 "data/maps/Route118/scripts.pory"
	compare VAR_RESULT, TRUE
# 195 "data/maps/Route118/scripts.pory"
	goto_if_eq Route118_EventScript_RematchRose
# 196 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostBattle, MSGBOX_DEFAULT
# 197 "data/maps/Route118/scripts.pory"
	release
# 198 "data/maps/Route118/scripts.pory"
	end
# 199 "data/maps/Route118/scripts.pory"

# 200 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterRose:: @ 81F3FB3
# 201 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 202 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 203 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RoseRegister, MSGBOX_DEFAULT
# 204 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_ROSE_1
# 205 "data/maps/Route118/scripts.pory"
	release
# 206 "data/maps/Route118/scripts.pory"
	end
# 207 "data/maps/Route118/scripts.pory"

# 208 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchRose:: @ 81F3FD2
# 209 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_ROSE_1, Route118_Text_RoseRematchIntro, Route118_Text_RoseRematchDefeat
# 210 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_RosePostRematch, MSGBOX_AUTOCLOSE
# 211 "data/maps/Route118/scripts.pory"
	end
# 212 "data/maps/Route118/scripts.pory"

# 213 "data/maps/Route118/scripts.pory"
Route118_EventScript_Barny:: @ 81F3FE9
# 214 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_BARNY, Route118_Text_BarnyIntro, Route118_Text_BarnyDefeat
# 215 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_BarnyPostBattle, MSGBOX_AUTOCLOSE
# 216 "data/maps/Route118/scripts.pory"
	end
# 217 "data/maps/Route118/scripts.pory"

# 218 "data/maps/Route118/scripts.pory"
Route118_EventScript_Wade:: @ 81F4000
# 219 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_WADE, Route118_Text_WadeIntro, Route118_Text_WadeDefeat
# 220 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_WadePostBattle, MSGBOX_AUTOCLOSE
# 221 "data/maps/Route118/scripts.pory"
	end
# 222 "data/maps/Route118/scripts.pory"

# 223 "data/maps/Route118/scripts.pory"
Route118_EventScript_Dalton:: @ 81F4017
# 224 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DALTON_1, Route118_Text_DaltonIntro, Route118_Text_DaltonDefeat, Route118_EventScript_RegisterDalton
# 225 "data/maps/Route118/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 226 "data/maps/Route118/scripts.pory"
	compare VAR_RESULT, TRUE
# 227 "data/maps/Route118/scripts.pory"
	goto_if_eq Route118_EventScript_RematchDalton
# 228 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostBattle, MSGBOX_DEFAULT
# 229 "data/maps/Route118/scripts.pory"
	release
# 230 "data/maps/Route118/scripts.pory"
	end
# 231 "data/maps/Route118/scripts.pory"

# 232 "data/maps/Route118/scripts.pory"
Route118_EventScript_RegisterDalton:: @ 81F4043
# 233 "data/maps/Route118/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 234 "data/maps/Route118/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonRegister, MSGBOX_DEFAULT
# 236 "data/maps/Route118/scripts.pory"
	register_matchcall TRAINER_DALTON_1
# 237 "data/maps/Route118/scripts.pory"
	release
# 238 "data/maps/Route118/scripts.pory"
	end
# 239 "data/maps/Route118/scripts.pory"

# 240 "data/maps/Route118/scripts.pory"
Route118_EventScript_RematchDalton:: @ 81F4062
# 241 "data/maps/Route118/scripts.pory"
	trainerbattle_rematch TRAINER_DALTON_1, Route118_Text_DaltonRematchIntro, Route118_Text_DaltonRematchDefeat
# 242 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DaltonPostRematch, MSGBOX_AUTOCLOSE
# 243 "data/maps/Route118/scripts.pory"
	end
# 244 "data/maps/Route118/scripts.pory"

# 245 "data/maps/Route118/scripts.pory"
Route118_EventScript_Perry:: @ 81F4079
# 246 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_PERRY, Route118_Text_PerryIntro, Route118_Text_PerryDefeat
# 247 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_PerryPostBattle, MSGBOX_AUTOCLOSE
# 248 "data/maps/Route118/scripts.pory"
	end
# 249 "data/maps/Route118/scripts.pory"

# 250 "data/maps/Route118/scripts.pory"
Route118_EventScript_Chester:: @ 81F4090
# 251 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_CHESTER, Route118_Text_ChesterIntro, Route118_Text_ChesterDefeat
# 252 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_ChesterPostBattle, MSGBOX_AUTOCLOSE
# 253 "data/maps/Route118/scripts.pory"
	end
# 254 "data/maps/Route118/scripts.pory"

# 255 "data/maps/Route118/scripts.pory"
Route118_EventScript_Deandre:: @ 81F40A7
# 256 "data/maps/Route118/scripts.pory"
	trainerbattle_single TRAINER_DEANDRE, Route118_Text_DeandreIntro, Route118_Text_DeandreDefeat
# 257 "data/maps/Route118/scripts.pory"
	msgbox Route118_Text_DeandrePostBattle, MSGBOX_AUTOCLOSE
# 258 "data/maps/Route118/scripts.pory"
	end
# 259 "data/maps/Route118/scripts.pory"

# 260 "data/maps/Route118/scripts.pory"
Route118_Text_StevenQuestions: @ 81F40BE
# 261 "data/maps/Route118/scripts.pory"
	.string "Steven: Hi, {PLAYER}{KUN}!\p"
# 262 "data/maps/Route118/scripts.pory"
	.string "It's me, Steven!\n"
# 263 "data/maps/Route118/scripts.pory"
	.string "We met in the cave near Dewford.\p"
# 264 "data/maps/Route118/scripts.pory"
	.string "Have you met many kinds of Pokémon\n"
# 265 "data/maps/Route118/scripts.pory"
	.string "since I last saw you?\p"
# 266 "data/maps/Route118/scripts.pory"
	.string "There are many, many kinds of Pokémon\n"
# 267 "data/maps/Route118/scripts.pory"
	.string "in this wide world of ours.\p"
# 268 "data/maps/Route118/scripts.pory"
	.string "If you wanted to raise only your\n"
# 269 "data/maps/Route118/scripts.pory"
	.string "favorites, that's fine.\p"
# 270 "data/maps/Route118/scripts.pory"
	.string "Perhaps you find it more fun to raise\n"
# 271 "data/maps/Route118/scripts.pory"
	.string "all sorts of Pokémon.\p"
# 272 "data/maps/Route118/scripts.pory"
	.string "As a Trainer of Pokémon,\n"
# 273 "data/maps/Route118/scripts.pory"
	.string "what do you think?\p"
# 274 "data/maps/Route118/scripts.pory"
	.string "Of course, it's not any of my business.\p"
# 275 "data/maps/Route118/scripts.pory"
	.string "It would be nice if we were to meet\n"
# 276 "data/maps/Route118/scripts.pory"
	.string "again somewhere.$"
# 277 "data/maps/Route118/scripts.pory"

# 278 "data/maps/Route118/scripts.pory"
Route118_Text_YouAgreeGoodRodIsGood: @ 81F427B
# 279 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 280 "data/maps/Route118/scripts.pory"
	.string "Fishing is really good!\p"
# 281 "data/maps/Route118/scripts.pory"
	.string "Wouldn't you agree?$"
# 282 "data/maps/Route118/scripts.pory"

# 283 "data/maps/Route118/scripts.pory"
Route118_Text_IdenticalMindsTakeThis: @ 81F42AF
# 284 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 285 "data/maps/Route118/scripts.pory"
	.string "We're of identical minds!\p"
# 286 "data/maps/Route118/scripts.pory"
	.string "Hmm!\n"
# 287 "data/maps/Route118/scripts.pory"
	.string "Take this Lure Balls!$"
# 288 "data/maps/Route118/scripts.pory"

# 289 "data/maps/Route118/scripts.pory"
Route118_Text_TryYourLuckFishing: @ 81F42E7
# 290 "data/maps/Route118/scripts.pory"
	.string "Wherever there's water, try your luck\n"
# 291 "data/maps/Route118/scripts.pory"
	.string "at fishing.$"
# 292 "data/maps/Route118/scripts.pory"

# 293 "data/maps/Route118/scripts.pory"
Route118_Text_DontYouLikeToFish: @ 81F4319
# 294 "data/maps/Route118/scripts.pory"
	.string "Don't you like to fish?$"
# 295 "data/maps/Route118/scripts.pory"

# 296 "data/maps/Route118/scripts.pory"
Route118_Text_TryCatchingMonWithGoodRod: @ 81F4331
# 297 "data/maps/Route118/scripts.pory"
	.string "Try catching all sorts of Pokémon\n"
# 298 "data/maps/Route118/scripts.pory"
	.string "with your Good Rod.$"
# 299 "data/maps/Route118/scripts.pory"

# 300 "data/maps/Route118/scripts.pory"
Route118_Text_CanCrossRiversWithSurf: @ 81F4367
# 301 "data/maps/Route118/scripts.pory"
	.string "Even if there isn't a boat, you can\n"
# 302 "data/maps/Route118/scripts.pory"
	.string "cross rivers and the sea if you have\l"
# 303 "data/maps/Route118/scripts.pory"
	.string "a Pokémon that knows Surf.\p"
# 304 "data/maps/Route118/scripts.pory"
	.string "Pokémon can be counted on to do so\n"
# 305 "data/maps/Route118/scripts.pory"
	.string "much!$"
# 306 "data/maps/Route118/scripts.pory"

# 307 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSignMauville: @ 81F43F4
# 308 "data/maps/Route118/scripts.pory"
	.string "Route 118\n"
# 309 "data/maps/Route118/scripts.pory"
	.string "{LEFT_ARROW} Mauville City$"
# 310 "data/maps/Route118/scripts.pory"

# 311 "data/maps/Route118/scripts.pory"
Route118_Text_RouteSign119: @ 81F440E
# 312 "data/maps/Route118/scripts.pory"
	.string "Route 118\n"
# 313 "data/maps/Route118/scripts.pory"
	.string "{UP_ARROW} Route 119$"
