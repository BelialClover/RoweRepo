# 1 "data/maps/Route116/scripts.pory"

# 2 "data/maps/Route116/scripts.pory"
.set LOCALID_BRINEY, 11
# 3 "data/maps/Route116/scripts.pory"
.set LOCALID_WANDAS_BF_OUTSIDE, 21
# 4 "data/maps/Route116/scripts.pory"

# 5 "data/maps/Route116/scripts.pory"
Route116_MapScripts:: @ 81F2C0C
# 6 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route116_OnTransition
# 7 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route116_OnLoad
# 8 "data/maps/Route116/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route116_OnFrame
# 9 "data/maps/Route116/scripts.pory"
	.byte 0
# 10 "data/maps/Route116/scripts.pory"

# 11 "data/maps/Route116/scripts.pory"
Route116_OnTransition: @ 81F2C1C
# 12 "data/maps/Route116/scripts.pory"
	call_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_SetWandasBoyfriendPos
# 13 "data/maps/Route116/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 14 "data/maps/Route116/scripts.pory"
	call_if_eq AbnormalWeather_EventScript_HideMapNamePopup
# 15 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH
# 16 "data/maps/Route116/scripts.pory"
	call_if_eq AbnormalWeather_StartGroudonWeather
# 17 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH
# 18 "data/maps/Route116/scripts.pory"
	call_if_eq AbnormalWeather_StartGroudonWeather
# 19 "data/maps/Route116/scripts.pory"
	end
# 20 "data/maps/Route116/scripts.pory"

# 21 "data/maps/Route116/scripts.pory"
Route116_EventScript_SetWandasBoyfriendPos:: @ 81F2C47
# 22 "data/maps/Route116/scripts.pory"
	setobjectxyperm LOCALID_WANDAS_BF_OUTSIDE, 38, 10
# 23 "data/maps/Route116/scripts.pory"
	return
# 24 "data/maps/Route116/scripts.pory"

# 25 "data/maps/Route116/scripts.pory"
Route116_OnLoad: @ 81F2C4F
# 26 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_NORTH
# 27 "data/maps/Route116/scripts.pory"
	call_if_eq AbnormalWeather_EventScript_PlaceTilesRoute116North
# 28 "data/maps/Route116/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_116_SOUTH
# 29 "data/maps/Route116/scripts.pory"
	call_if_eq AbnormalWeather_EventScript_PlaceTilesRoute116South
# 30 "data/maps/Route116/scripts.pory"
	end
# 31 "data/maps/Route116/scripts.pory"

# 32 "data/maps/Route116/scripts.pory"
Route116_OnFrame: @ 81F2C66
# 33 "data/maps/Route116/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 34 "data/maps/Route116/scripts.pory"
	.2byte 0
# 35 "data/maps/Route116/scripts.pory"

# 36 "data/maps/Route116/scripts.pory"
Route116_EventScript_WandasBoyfriend:: @ 81F2C70
# 37 "data/maps/Route116/scripts.pory"
	lock
# 38 "data/maps/Route116/scripts.pory"
	faceplayer
# 39 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, Route116_EventScript_BoyfriendGruntLeftTunnel
# 40 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, Route116_EventScript_BoyfriendGruntInTunnel
# 41 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_WantToDigTunnel, MSGBOX_DEFAULT
# 42 "data/maps/Route116/scripts.pory"
	release
# 43 "data/maps/Route116/scripts.pory"
	end
# 44 "data/maps/Route116/scripts.pory"

# 45 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntLeftTunnel:: @ 81F2C8E
# 46 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_GoonHightailedItOutOfTunnel, MSGBOX_DEFAULT
# 47 "data/maps/Route116/scripts.pory"
	release
# 48 "data/maps/Route116/scripts.pory"
	end
# 49 "data/maps/Route116/scripts.pory"

# 50 "data/maps/Route116/scripts.pory"
Route116_EventScript_BoyfriendGruntInTunnel:: @ 81F2C98
# 51 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DiggingTunnelWhenGoonOrderedMeOut, MSGBOX_DEFAULT
# 52 "data/maps/Route116/scripts.pory"
	release
# 53 "data/maps/Route116/scripts.pory"
	end
# 54 "data/maps/Route116/scripts.pory"

# 55 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployee:: @ 81F2CA2
# 56 "data/maps/Route116/scripts.pory"
	lock
# 57 "data/maps/Route116/scripts.pory"
	faceplayer
# 58 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, Route116_EventScript_TryGiveRepeatBallAgain
# 59 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ThankYouTokenOfAppreciation, MSGBOX_DEFAULT
# 60 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 61 "data/maps/Route116/scripts.pory"
	end
# 62 "data/maps/Route116/scripts.pory"

# 63 "data/maps/Route116/scripts.pory"
Route116_EventScript_GiveRepeatBall:: @ 81F2CBB
# 64 "data/maps/Route116/scripts.pory"
	setflag FLAG_MET_DEVON_EMPLOYEE
# 65 "data/maps/Route116/scripts.pory"
	giveitem ITEM_REPEAT_BALL
# 66 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, FALSE
# 67 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_NoRoomForRepeatBall
# 68 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NewBallAvailableAtMart, MSGBOX_DEFAULT
# 69 "data/maps/Route116/scripts.pory"
	closemessage
# 70 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 71 "data/maps/Route116/scripts.pory"
	call_if_eq Route116_EventScript_DevonEmployeeExit
# 72 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 73 "data/maps/Route116/scripts.pory"
	call_if_eq Route116_EventScript_DevonEmployeeExit
# 74 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 75 "data/maps/Route116/scripts.pory"
	call_if_eq Route116_EventScript_DevonEmployeeExit
# 76 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 77 "data/maps/Route116/scripts.pory"
	call_if_eq Route116_EventScript_DevonEmployeeExitEast
# 78 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 79 "data/maps/Route116/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 80 "data/maps/Route116/scripts.pory"
	setflag FLAG_RECEIVED_REPEAT_BALL
# 81 "data/maps/Route116/scripts.pory"
	release
# 82 "data/maps/Route116/scripts.pory"
	end
# 83 "data/maps/Route116/scripts.pory"

# 84 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExit:: @ 81F2D15
# 85 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExit
# 86 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route116/scripts.pory"
	return
# 88 "data/maps/Route116/scripts.pory"

# 89 "data/maps/Route116/scripts.pory"
Route116_EventScript_DevonEmployeeExitEast:: @ 81F2D20
# 90 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_DevonEmployeeExitEast
# 91 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route116/scripts.pory"
	return
# 93 "data/maps/Route116/scripts.pory"

# 94 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryGiveRepeatBallAgain:: @ 81F2D2B
# 95 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TokenOfAppreciation, MSGBOX_DEFAULT
# 96 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GiveRepeatBall
# 97 "data/maps/Route116/scripts.pory"
	end
# 98 "data/maps/Route116/scripts.pory"

# 99 "data/maps/Route116/scripts.pory"
Route116_EventScript_NoRoomForRepeatBall:: @ 81F2D39
# 100 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_BagIsJamPacked, MSGBOX_DEFAULT
# 101 "data/maps/Route116/scripts.pory"
	release
# 102 "data/maps/Route116/scripts.pory"
	end
# 103 "data/maps/Route116/scripts.pory"

# 104 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExit: @ 81F2D43
# 105 "data/maps/Route116/scripts.pory"
	walk_left
# 106 "data/maps/Route116/scripts.pory"
	walk_left
# 107 "data/maps/Route116/scripts.pory"
	walk_left
# 108 "data/maps/Route116/scripts.pory"
	walk_left
# 109 "data/maps/Route116/scripts.pory"
	walk_left
# 110 "data/maps/Route116/scripts.pory"
	walk_left
# 111 "data/maps/Route116/scripts.pory"
	walk_left
# 112 "data/maps/Route116/scripts.pory"
	walk_left
# 113 "data/maps/Route116/scripts.pory"
	step_end
# 114 "data/maps/Route116/scripts.pory"

# 115 "data/maps/Route116/scripts.pory"
Route116_Movement_DevonEmployeeExitEast: @ 81F2D4C
# 116 "data/maps/Route116/scripts.pory"
	walk_down
# 117 "data/maps/Route116/scripts.pory"
	walk_left
# 118 "data/maps/Route116/scripts.pory"
	walk_left
# 119 "data/maps/Route116/scripts.pory"
	walk_left
# 120 "data/maps/Route116/scripts.pory"
	walk_left
# 121 "data/maps/Route116/scripts.pory"
	walk_left
# 122 "data/maps/Route116/scripts.pory"
	walk_left
# 123 "data/maps/Route116/scripts.pory"
	walk_left
# 124 "data/maps/Route116/scripts.pory"
	walk_left
# 125 "data/maps/Route116/scripts.pory"
	walk_left
# 126 "data/maps/Route116/scripts.pory"
	step_end
# 127 "data/maps/Route116/scripts.pory"

# 128 "data/maps/Route116/scripts.pory"
Route116_EventScript_RouteSignRustboro:: @ 81F2D57
# 129 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RouteSignRustboro, MSGBOX_SIGN
# 130 "data/maps/Route116/scripts.pory"
	end
# 131 "data/maps/Route116/scripts.pory"

# 132 "data/maps/Route116/scripts.pory"
Route116_EventScript_RusturfTunnelSign:: @ 81F2D60
# 133 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_RusturfTunnelSign, MSGBOX_SIGN
# 134 "data/maps/Route116/scripts.pory"
	end
# 135 "data/maps/Route116/scripts.pory"

# 136 "data/maps/Route116/scripts.pory"
Route116_EventScript_TunnelersRestHouseSign:: @ 81F2D69
# 137 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TunnelersRestHouse, MSGBOX_SIGN
# 138 "data/maps/Route116/scripts.pory"
	end
# 139 "data/maps/Route116/scripts.pory"

# 140 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBToStopEvolution:: @ 81F2D72
# 141 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBToStopEvolution, MSGBOX_SIGN
# 142 "data/maps/Route116/scripts.pory"
	end
# 143 "data/maps/Route116/scripts.pory"

# 144 "data/maps/Route116/scripts.pory"
Route116_EventScript_TrainerTipsBagHasPockets:: @ 81F2D7B
# 145 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_TrainerTipsBagHasPockets, MSGBOX_SIGN
# 146 "data/maps/Route116/scripts.pory"
	end
# 147 "data/maps/Route116/scripts.pory"

# 148 "data/maps/Route116/scripts.pory"
Route116_EventScript_Briney:: @ 81F2D84
# 149 "data/maps/Route116/scripts.pory"
	lock
# 150 "data/maps/Route116/scripts.pory"
	faceplayer
# 151 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 152 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 153 "data/maps/Route116/scripts.pory"
	release
# 154 "data/maps/Route116/scripts.pory"
	end
# 155 "data/maps/Route116/scripts.pory"

# 156 "data/maps/Route116/scripts.pory"
Route116_EventScript_BrineyTrigger:: @ 81F2D95
# 157 "data/maps/Route116/scripts.pory"
	lockall
# 158 "data/maps/Route116/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFastestRight
# 159 "data/maps/Route116/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 160 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 161 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ScoundrelMadeOffWithPeeko, MSGBOX_DEFAULT
# 162 "data/maps/Route116/scripts.pory"
	setvar VAR_ROUTE116_STATE, 2
# 163 "data/maps/Route116/scripts.pory"
	releaseall
# 164 "data/maps/Route116/scripts.pory"
	end
# 165 "data/maps/Route116/scripts.pory"

# 166 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesMan:: @ 81F2DB6
# 167 "data/maps/Route116/scripts.pory"
	lock
# 168 "data/maps/Route116/scripts.pory"
	faceplayer
# 169 "data/maps/Route116/scripts.pory"
	checkitem ITEM_BLACK_GLASSES, 1
# 170 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
# 171 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_PlayerHasGlasses
# 172 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 173 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
# 174 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_FoundGlassesNotOnPlayer
# 175 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 176 "data/maps/Route116/scripts.pory"
	release
# 177 "data/maps/Route116/scripts.pory"
	end
# 178 "data/maps/Route116/scripts.pory"

# 179 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesNotOnPlayer:: @ 81F2DE2
# 180 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CantFindGlassesNotHere, MSGBOX_DEFAULT
# 181 "data/maps/Route116/scripts.pory"
	closemessage
# 182 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 183 "data/maps/Route116/scripts.pory"
	end
# 184 "data/maps/Route116/scripts.pory"

# 185 "data/maps/Route116/scripts.pory"
Route116_EventScript_PlayerHasGlasses:: @ 81F2DF1
# 186 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_CanYouHelpMeFindGlasses, MSGBOX_DEFAULT
# 187 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_MayISeeThoseGlasses, MSGBOX_DEFAULT
# 188 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, FoundBlackGlasses
# 189 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
# 190 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_FoundGlassesOnPlayer
# 191 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingFor, MSGBOX_DEFAULT
# 192 "data/maps/Route116/scripts.pory"
	release
# 193 "data/maps/Route116/scripts.pory"
	end
# 194 "data/maps/Route116/scripts.pory"

# 195 "data/maps/Route116/scripts.pory"
Route116_EventScript_FoundGlassesOnPlayer:: @ 81F2E1B
# 196 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_NotWhatImLookingForMaybeTheyArentHere, MSGBOX_DEFAULT
# 197 "data/maps/Route116/scripts.pory"
	closemessage
# 198 "data/maps/Route116/scripts.pory"
	goto Route116_EventScript_GlassesManExit
# 199 "data/maps/Route116/scripts.pory"
	end
# 200 "data/maps/Route116/scripts.pory"

# 201 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExit:: @ 81F2E2A
# 202 "data/maps/Route116/scripts.pory"
	delay 20
# 203 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 204 "data/maps/Route116/scripts.pory"
	call_if_eq Route116_EventScript_GlassesManExitNormal
# 205 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 206 "data/maps/Route116/scripts.pory"
	call_if_eq Route116_EventScript_GlassesManExitNormal
# 207 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 208 "data/maps/Route116/scripts.pory"
	call_if_eq Route116_EventScript_GlassesManExitNormal
# 209 "data/maps/Route116/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 210 "data/maps/Route116/scripts.pory"
	call_if_eq Route116_EventScript_GlassesManExitEast
# 211 "data/maps/Route116/scripts.pory"
	removeobject VAR_LAST_TALKED
# 212 "data/maps/Route116/scripts.pory"
	release
# 213 "data/maps/Route116/scripts.pory"
	end
# 214 "data/maps/Route116/scripts.pory"

# 215 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitNormal:: @ 81F2E5E
# 216 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExit
# 217 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route116/scripts.pory"
	return
# 219 "data/maps/Route116/scripts.pory"

# 220 "data/maps/Route116/scripts.pory"
Route116_EventScript_GlassesManExitEast:: @ 81F2E69
# 221 "data/maps/Route116/scripts.pory"
	applymovement VAR_LAST_TALKED, Route116_Movement_GlassesManExitEast
# 222 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 223 "data/maps/Route116/scripts.pory"
	return
# 224 "data/maps/Route116/scripts.pory"

# 225 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExit: @ 81F2E74
# 226 "data/maps/Route116/scripts.pory"
	walk_left
# 227 "data/maps/Route116/scripts.pory"
	walk_left
# 228 "data/maps/Route116/scripts.pory"
	walk_left
# 229 "data/maps/Route116/scripts.pory"
	walk_left
# 230 "data/maps/Route116/scripts.pory"
	walk_left
# 231 "data/maps/Route116/scripts.pory"
	walk_left
# 232 "data/maps/Route116/scripts.pory"
	walk_left
# 233 "data/maps/Route116/scripts.pory"
	walk_left
# 234 "data/maps/Route116/scripts.pory"
	walk_left
# 235 "data/maps/Route116/scripts.pory"
	step_end
# 236 "data/maps/Route116/scripts.pory"

# 237 "data/maps/Route116/scripts.pory"
Route116_Movement_GlassesManExitEast: @ 81F2E7E
# 238 "data/maps/Route116/scripts.pory"
	walk_up
# 239 "data/maps/Route116/scripts.pory"
	walk_left
# 240 "data/maps/Route116/scripts.pory"
	walk_left
# 241 "data/maps/Route116/scripts.pory"
	walk_left
# 242 "data/maps/Route116/scripts.pory"
	walk_left
# 243 "data/maps/Route116/scripts.pory"
	walk_left
# 244 "data/maps/Route116/scripts.pory"
	walk_left
# 245 "data/maps/Route116/scripts.pory"
	walk_left
# 246 "data/maps/Route116/scripts.pory"
	walk_left
# 247 "data/maps/Route116/scripts.pory"
	walk_left
# 248 "data/maps/Route116/scripts.pory"
	step_end
# 249 "data/maps/Route116/scripts.pory"

# 250 "data/maps/Route116/scripts.pory"
Route116_EventScript_Joey:: @ 81F2E89
# 251 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOEY, Route116_Text_JoeyIntro, Route116_Text_JoeyDefeat
# 252 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JoeyPostBattle, MSGBOX_AUTOCLOSE
# 253 "data/maps/Route116/scripts.pory"
	end
# 254 "data/maps/Route116/scripts.pory"

# 255 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jose:: @ 81F2EA0
# 256 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOSE, Route116_Text_JoseIntro, Route116_Text_JoseDefeat
# 257 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 258 "data/maps/Route116/scripts.pory"
	end
# 259 "data/maps/Route116/scripts.pory"

# 260 "data/maps/Route116/scripts.pory"
Route116_EventScript_Jerry:: @ 81F2EB7
# 261 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JERRY_1, Route116_Text_JerryIntro, Route116_Text_JerryDefeat, Route116_EventScript_TryRegisterJerryAfterBattle
# 262 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 263 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
# 264 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_RematchJerry
# 265 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_JERRY_1
# 266 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 267 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, FALSE
# 268 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_TryRegisterJerry
# 269 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 270 "data/maps/Route116/scripts.pory"
	release
# 271 "data/maps/Route116/scripts.pory"
	end
# 272 "data/maps/Route116/scripts.pory"

# 273 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerryAfterBattle:: @ 81F2EF8
# 274 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerryAfterBattle
# 275 "data/maps/Route116/scripts.pory"
	release
# 276 "data/maps/Route116/scripts.pory"
	end
# 277 "data/maps/Route116/scripts.pory"

# 278 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerryAfterBattle:: @ 81F2F03
# 279 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 280 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 281 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister2, MSGBOX_DEFAULT
# 282 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 283 "data/maps/Route116/scripts.pory"
	release
# 284 "data/maps/Route116/scripts.pory"
	end
# 285 "data/maps/Route116/scripts.pory"

# 286 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterJerry:: @ 81F2F22
# 287 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterJerry
# 288 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostBattle, MSGBOX_DEFAULT
# 289 "data/maps/Route116/scripts.pory"
	release
# 290 "data/maps/Route116/scripts.pory"
	end
# 291 "data/maps/Route116/scripts.pory"

# 292 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterJerry:: @ 81F2F35
# 293 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryRegister1, MSGBOX_DEFAULT
# 294 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_JERRY_1
# 295 "data/maps/Route116/scripts.pory"
	release
# 296 "data/maps/Route116/scripts.pory"
	end
# 297 "data/maps/Route116/scripts.pory"

# 298 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchJerry:: @ 81F2F4E
# 299 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_JERRY_1, Route116_Text_JerryRematchIntro, Route116_Text_JerryRematchDefeat
# 300 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JerryPostRematch, MSGBOX_AUTOCLOSE
# 301 "data/maps/Route116/scripts.pory"
	end
# 302 "data/maps/Route116/scripts.pory"

# 303 "data/maps/Route116/scripts.pory"
Route116_EventScript_Clark:: @ 81F2F65
# 304 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_CLARK, Route116_Text_ClarkIntro, Route116_Text_ClarkDefeat
# 305 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_ClarkPostBattle, MSGBOX_AUTOCLOSE
# 306 "data/maps/Route116/scripts.pory"
	end
# 307 "data/maps/Route116/scripts.pory"

# 308 "data/maps/Route116/scripts.pory"
Route116_EventScript_Janice:: @ 81F2F7C
# 309 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JANICE, Route116_Text_JaniceIntro, Route116_Text_JaniceDefeat
# 310 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
# 311 "data/maps/Route116/scripts.pory"
	end
# 312 "data/maps/Route116/scripts.pory"

# 313 "data/maps/Route116/scripts.pory"
Route116_EventScript_Karen:: @ 81F2F93
# 314 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_KAREN_1, Route116_Text_KarenIntro, Route116_Text_KarenDefeat, Route116_EventScript_TryRegisterKarenAfterBattle
# 315 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 316 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, TRUE
# 317 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_RematchKaren
# 318 "data/maps/Route116/scripts.pory"
	setvar VAR_0x8004, TRAINER_KAREN_1
# 319 "data/maps/Route116/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 320 "data/maps/Route116/scripts.pory"
	compare VAR_RESULT, FALSE
# 321 "data/maps/Route116/scripts.pory"
	goto_if_eq Route116_EventScript_TryRegisterKaren
# 322 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 323 "data/maps/Route116/scripts.pory"
	release
# 324 "data/maps/Route116/scripts.pory"
	end
# 325 "data/maps/Route116/scripts.pory"

# 326 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKarenAfterBattle:: @ 81F2FD4
# 327 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKarenAfterBattle
# 328 "data/maps/Route116/scripts.pory"
	release
# 329 "data/maps/Route116/scripts.pory"
	end
# 330 "data/maps/Route116/scripts.pory"

# 331 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKarenAfterBattle:: @ 81F2FDF
# 332 "data/maps/Route116/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 333 "data/maps/Route116/scripts.pory"
	waitmovement 0
# 334 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister2, MSGBOX_DEFAULT
# 335 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 336 "data/maps/Route116/scripts.pory"
	release
# 337 "data/maps/Route116/scripts.pory"
	end
# 338 "data/maps/Route116/scripts.pory"

# 339 "data/maps/Route116/scripts.pory"
Route116_EventScript_TryRegisterKaren:: @ 81F2FFE
# 340 "data/maps/Route116/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route116_EventScript_RegisterKaren
# 341 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostBattle, MSGBOX_DEFAULT
# 342 "data/maps/Route116/scripts.pory"
	release
# 343 "data/maps/Route116/scripts.pory"
	end
# 344 "data/maps/Route116/scripts.pory"

# 345 "data/maps/Route116/scripts.pory"
Route116_EventScript_RegisterKaren:: @ 81F3011
# 346 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenRegister1, MSGBOX_DEFAULT
# 347 "data/maps/Route116/scripts.pory"
	register_matchcall TRAINER_KAREN_1
# 348 "data/maps/Route116/scripts.pory"
	release
# 349 "data/maps/Route116/scripts.pory"
	end
# 350 "data/maps/Route116/scripts.pory"

# 351 "data/maps/Route116/scripts.pory"
Route116_EventScript_RematchKaren:: @ 81F302A
# 352 "data/maps/Route116/scripts.pory"
	trainerbattle_rematch TRAINER_KAREN_1, Route116_Text_KarenRematchIntro, Route116_Text_KarenRematchDefeat
# 353 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_KarenPostRematch, MSGBOX_AUTOCLOSE
# 354 "data/maps/Route116/scripts.pory"
	end
# 355 "data/maps/Route116/scripts.pory"

# 356 "data/maps/Route116/scripts.pory"
Route116_EventScript_Sarah:: @ 81F3041
# 357 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_SARAH, Route116_Text_SarahIntro, Route116_Text_SarahDefeat
# 358 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
# 359 "data/maps/Route116/scripts.pory"
	end
# 360 "data/maps/Route116/scripts.pory"

# 361 "data/maps/Route116/scripts.pory"
Route116_EventScript_Dawson:: @ 81F3058
# 362 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DAWSON, Route116_Text_DawsonIntro, Route116_Text_DawsonDefeat
# 363 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 364 "data/maps/Route116/scripts.pory"
	end
# 365 "data/maps/Route116/scripts.pory"

# 366 "data/maps/Route116/scripts.pory"
Route116_EventScript_Devan:: @ 81F306F
# 367 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_DEVAN, Route116_Text_DevanIntro, Route116_Text_DevanDefeat
# 368 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_DevanPostBattle, MSGBOX_AUTOCLOSE
# 369 "data/maps/Route116/scripts.pory"
	end
# 370 "data/maps/Route116/scripts.pory"

# 371 "data/maps/Route116/scripts.pory"
Route116_EventScript_Johnson:: @ 81F3086
# 372 "data/maps/Route116/scripts.pory"
	trainerbattle_single TRAINER_JOHNSON, Route116_Text_JohnsonIntro, Route116_Text_JohnsonDefeat
# 373 "data/maps/Route116/scripts.pory"
	msgbox Route116_Text_JohnsonPostBattle, MSGBOX_AUTOCLOSE
# 374 "data/maps/Route116/scripts.pory"
	end
# 375 "data/maps/Route116/scripts.pory"

# 376 "data/maps/Route116/scripts.pory"
Route116_Text_ScoundrelMadeOffWithPeeko: @ 81F309D
# 377 "data/maps/Route116/scripts.pory"
	.string "Ohhh, what am I to do?\p"
# 378 "data/maps/Route116/scripts.pory"
	.string "We were on our walk, Peeko and I, when\n"
# 379 "data/maps/Route116/scripts.pory"
	.string "we were jumped by an odd thug…\p"
# 380 "data/maps/Route116/scripts.pory"
	.string "The scoundrel made off with my\n"
# 381 "data/maps/Route116/scripts.pory"
	.string "darling Peeko!\p"
# 382 "data/maps/Route116/scripts.pory"
	.string "Wrrrooooooaaaar! Peeko!$"
# 383 "data/maps/Route116/scripts.pory"

# 384 "data/maps/Route116/scripts.pory"
Route116_Text_WantToDigTunnel: @ 81F3140
# 385 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 386 "data/maps/Route116/scripts.pory"
	.string "I want to dig that tunnel!$"
# 387 "data/maps/Route116/scripts.pory"

# 388 "data/maps/Route116/scripts.pory"
Route116_Text_DiggingTunnelWhenGoonOrderedMeOut: @ 81F3166
# 389 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\n"
# 390 "data/maps/Route116/scripts.pory"
	.string "What's going on?\p"
# 391 "data/maps/Route116/scripts.pory"
	.string "I was digging the tunnel without any\n"
# 392 "data/maps/Route116/scripts.pory"
	.string "tools when some goon ordered me out!\p"
# 393 "data/maps/Route116/scripts.pory"
	.string "That tunnel's filled with Pokémon\n"
# 394 "data/maps/Route116/scripts.pory"
	.string "that react badly to loud noises.\l"
# 395 "data/maps/Route116/scripts.pory"
	.string "They could cause an uproar.\p"
# 396 "data/maps/Route116/scripts.pory"
	.string "That's why we stopped using heavy\n"
# 397 "data/maps/Route116/scripts.pory"
	.string "equipment for tunneling…\p"
# 398 "data/maps/Route116/scripts.pory"
	.string "I'm worried that the goon will do\n"
# 399 "data/maps/Route116/scripts.pory"
	.string "something stupid and startle the\l"
# 400 "data/maps/Route116/scripts.pory"
	.string "Pokémon into an uproar.$"
# 401 "data/maps/Route116/scripts.pory"

# 402 "data/maps/Route116/scripts.pory"
Route116_Text_GoonHightailedItOutOfTunnel: @ 81F32C1
# 403 "data/maps/Route116/scripts.pory"
	.string "Nnn… Roar!\p"
# 404 "data/maps/Route116/scripts.pory"
	.string "That goofy goon hightailed it out of\n"
# 405 "data/maps/Route116/scripts.pory"
	.string "the tunnel! I can go back to digging!$"
# 406 "data/maps/Route116/scripts.pory"

# 407 "data/maps/Route116/scripts.pory"
Route116_Text_ThankYouTokenOfAppreciation: @ 81F3317
# 408 "data/maps/Route116/scripts.pory"
	.string "Oh! It's you!\p"
# 409 "data/maps/Route116/scripts.pory"
	.string "You're that person who not only helped\n"
# 410 "data/maps/Route116/scripts.pory"
	.string "me in Petalburg Woods, but also got\l"
# 411 "data/maps/Route116/scripts.pory"
	.string "back my stolen package and then even\l"
# 412 "data/maps/Route116/scripts.pory"
	.string "graciously delivered it to Slateport!\p"
# 413 "data/maps/Route116/scripts.pory"
	.string "Capt. Stern informed us that the\n"
# 414 "data/maps/Route116/scripts.pory"
	.string "package arrived, too!\p"
# 415 "data/maps/Route116/scripts.pory"
	.string "I thank you very, very much!\p"
# 416 "data/maps/Route116/scripts.pory"
	.string "Why, if I were a rain cloud, I would\n"
# 417 "data/maps/Route116/scripts.pory"
	.string "shower you with gratitude and hail\l"
# 418 "data/maps/Route116/scripts.pory"
	.string "you as a hero!\p"
# 419 "data/maps/Route116/scripts.pory"
	.string "For you, the most wonderful Trainer,\n"
# 420 "data/maps/Route116/scripts.pory"
	.string "I bear good news!\p"
# 421 "data/maps/Route116/scripts.pory"
	.string "Recently, our company developed\n"
# 422 "data/maps/Route116/scripts.pory"
	.string "a new kind of Poké Ball.\p"
# 423 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation, this\n"
# 424 "data/maps/Route116/scripts.pory"
	.string "is our gift to our wonderful Trainer!$"
# 425 "data/maps/Route116/scripts.pory"

# 426 "data/maps/Route116/scripts.pory"
Route116_Text_NewBallAvailableAtMart: @ 81F3521
# 427 "data/maps/Route116/scripts.pory"
	.string "Our new Poké Ball will be available\n"
# 428 "data/maps/Route116/scripts.pory"
	.string "at the Pokémon Mart in Rustboro.\p"
# 429 "data/maps/Route116/scripts.pory"
	.string "Please do try it out!\n"
# 430 "data/maps/Route116/scripts.pory"
	.string "Thank you and bye-bye!$"
# 431 "data/maps/Route116/scripts.pory"

# 432 "data/maps/Route116/scripts.pory"
Route116_Text_BagIsJamPacked: @ 81F3593
# 433 "data/maps/Route116/scripts.pory"
	.string "Your Bag is jam-packed.\n"
# 434 "data/maps/Route116/scripts.pory"
	.string "I can't give you this Repeat Ball.$"
# 435 "data/maps/Route116/scripts.pory"

# 436 "data/maps/Route116/scripts.pory"
Route116_Text_TokenOfAppreciation: @ 81F35CE
# 437 "data/maps/Route116/scripts.pory"
	.string "As a token of our appreciation for\n"
# 438 "data/maps/Route116/scripts.pory"
	.string "your delivering our package, I have\l"
# 439 "data/maps/Route116/scripts.pory"
	.string "a gift of a new kind of Poké Ball\l"
# 440 "data/maps/Route116/scripts.pory"
	.string "for our most wonderful Trainer!$"
# 441 "data/maps/Route116/scripts.pory"

# 442 "data/maps/Route116/scripts.pory"
Route116_Text_CanYouHelpMeFindGlasses: @ 81F3657
# 443 "data/maps/Route116/scripts.pory"
	.string "I dropped my glasses…\n"
# 444 "data/maps/Route116/scripts.pory"
	.string "Can you help me find them?$"
# 445 "data/maps/Route116/scripts.pory"

# 446 "data/maps/Route116/scripts.pory"
Route116_Text_MayISeeThoseGlasses: @ 81F3688
# 447 "data/maps/Route116/scripts.pory"
	.string "Those glasses!\n"
# 448 "data/maps/Route116/scripts.pory"
	.string "May I see them for a second?$"
# 449 "data/maps/Route116/scripts.pory"

# 450 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingForMaybeTheyArentHere: @ 81F36B4
# 451 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 452 "data/maps/Route116/scripts.pory"
	.string "These are Blackglasses.\l"
# 453 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…\p"
# 454 "data/maps/Route116/scripts.pory"
	.string "Maybe my glasses aren't around\n"
# 455 "data/maps/Route116/scripts.pory"
	.string "here…$"
# 456 "data/maps/Route116/scripts.pory"

# 457 "data/maps/Route116/scripts.pory"
Route116_Text_CantFindGlassesNotHere: @ 81F3718
# 458 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 459 "data/maps/Route116/scripts.pory"
	.string "I can't find my glasses anywhere…\l"
# 460 "data/maps/Route116/scripts.pory"
	.string "Maybe they're not around here…$"
# 461 "data/maps/Route116/scripts.pory"

# 462 "data/maps/Route116/scripts.pory"
Route116_Text_NotWhatImLookingFor: @ 81F375E
# 463 "data/maps/Route116/scripts.pory"
	.string "Hmm…\n"
# 464 "data/maps/Route116/scripts.pory"
	.string "These are Blackglasses.\l"
# 465 "data/maps/Route116/scripts.pory"
	.string "They're not what I'm looking for…$"
# 466 "data/maps/Route116/scripts.pory"

# 467 "data/maps/Route116/scripts.pory"
Route116_Text_RouteSignRustboro: @ 81F379D
# 468 "data/maps/Route116/scripts.pory"
	.string "Route 116\n"
# 469 "data/maps/Route116/scripts.pory"
	.string "{LEFT_ARROW} Rustboro City$"
# 470 "data/maps/Route116/scripts.pory"

# 471 "data/maps/Route116/scripts.pory"
Route116_Text_RusturfTunnelSign: @ 81F37B7
# 472 "data/maps/Route116/scripts.pory"
	.string "Rusturf Tunnel\n"
# 473 "data/maps/Route116/scripts.pory"
	.string "“Linking Rustboro and Verdanturf\p"
# 474 "data/maps/Route116/scripts.pory"
	.string "“The tunnel project has been\n"
# 475 "data/maps/Route116/scripts.pory"
	.string "canceled.”$"
# 476 "data/maps/Route116/scripts.pory"

# 477 "data/maps/Route116/scripts.pory"
Route116_Text_TunnelersRestHouse: @ 81F380F
# 478 "data/maps/Route116/scripts.pory"
	.string "Tunneler's Rest House$"
# 479 "data/maps/Route116/scripts.pory"

# 480 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBToStopEvolution: @ 81F3825
# 481 "data/maps/Route116/scripts.pory"
	.string "Trainer Tips\p"
# 482 "data/maps/Route116/scripts.pory"
	.string "If you want to stop a Pokémon from\n"
# 483 "data/maps/Route116/scripts.pory"
	.string "evolving, press the B Button while it\l"
# 484 "data/maps/Route116/scripts.pory"
	.string "is trying to evolve.\l"
# 485 "data/maps/Route116/scripts.pory"
	.string "The startled Pokémon will stop.\p"
# 486 "data/maps/Route116/scripts.pory"
	.string "This is called an evolution cancel.$"
# 487 "data/maps/Route116/scripts.pory"

# 488 "data/maps/Route116/scripts.pory"
Route116_Text_TrainerTipsBagHasPockets: @ 81F38D4
# 489 "data/maps/Route116/scripts.pory"
	.string "Trainer Tips\p"
# 490 "data/maps/Route116/scripts.pory"
	.string "Your Bag has several Pockets.\p"
# 491 "data/maps/Route116/scripts.pory"
	.string "Items you obtain are automatically\n"
# 492 "data/maps/Route116/scripts.pory"
	.string "placed in the appropriate Pockets.\p"
# 493 "data/maps/Route116/scripts.pory"
	.string "No Trainer can afford to be without\n"
# 494 "data/maps/Route116/scripts.pory"
	.string "a Bag of their own.$"
