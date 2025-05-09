# 1 "data/maps/Route120/scripts.pory"

# 2 "data/maps/Route120/scripts.pory"
.set LOCALID_INVISIBLE_BRIDGE_KECLEON, 30
# 3 "data/maps/Route120/scripts.pory"
.set LOCALID_STEVEN, 31
# 4 "data/maps/Route120/scripts.pory"
.set LOCALID_VISIBLE_BRIDGE_KECLEON, 36
# 5 "data/maps/Route120/scripts.pory"

# 6 "data/maps/Route120/scripts.pory"
Route120_MapScripts:: @ 81F53EC
# 7 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route120_OnResume
# 8 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route120_OnTransition
# 9 "data/maps/Route120/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route120_OnLoad
# 10 "data/maps/Route120/scripts.pory"
	.byte 0
# 11 "data/maps/Route120/scripts.pory"

# 12 "data/maps/Route120/scripts.pory"
Route120_OnResume: @ 81F53FC
# 13 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route120_EventScript_RemoveKecleonObject
# 14 "data/maps/Route120/scripts.pory"
	end
# 15 "data/maps/Route120/scripts.pory"

# 16 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleonObject:: @ 81F5406
# 17 "data/maps/Route120/scripts.pory"
	compare VAR_0x8009, 0
# 18 "data/maps/Route120/scripts.pory"
	call_if_eq Route120_EventScript_RemoveBridgeKecleon
# 19 "data/maps/Route120/scripts.pory"
	compare VAR_0x8009, 1
# 20 "data/maps/Route120/scripts.pory"
	call_if_eq Route120_EventScript_RemoveKecleon
# 21 "data/maps/Route120/scripts.pory"
	compare VAR_0x8009, 2
# 22 "data/maps/Route120/scripts.pory"
	call_if_eq Route120_EventScript_RemoveKecleon
# 23 "data/maps/Route120/scripts.pory"
	compare VAR_0x8009, 3
# 24 "data/maps/Route120/scripts.pory"
	call_if_eq Route120_EventScript_RemoveKecleon
# 25 "data/maps/Route120/scripts.pory"
	compare VAR_0x8009, 4
# 26 "data/maps/Route120/scripts.pory"
	call_if_eq Route120_EventScript_RemoveKecleon
# 27 "data/maps/Route120/scripts.pory"
	compare VAR_0x8009, 5
# 28 "data/maps/Route120/scripts.pory"
	call_if_eq Route120_EventScript_RemoveKecleon
# 29 "data/maps/Route120/scripts.pory"
	return
# 30 "data/maps/Route120/scripts.pory"

# 31 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleon:: @ 81F5449
# 32 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 33 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 34 "data/maps/Route120/scripts.pory"
	goto_if_ne Common_EventScript_NopReturn
# 35 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_INVISIBLE_BRIDGE_KECLEON
# 36 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_VISIBLE_BRIDGE_KECLEON
# 37 "data/maps/Route120/scripts.pory"
	return
# 38 "data/maps/Route120/scripts.pory"

# 39 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveKecleon:: @ 81F5460
# 40 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 41 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 42 "data/maps/Route120/scripts.pory"
	goto_if_ne Common_EventScript_NopReturn
# 43 "data/maps/Route120/scripts.pory"
	removeobject VAR_LAST_TALKED
# 44 "data/maps/Route120/scripts.pory"
	return
# 45 "data/maps/Route120/scripts.pory"

# 46 "data/maps/Route120/scripts.pory"
Route120_OnLoad: @ 81F5474
# 47 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route120_EventScript_CloseAncientTomb
# 48 "data/maps/Route120/scripts.pory"
	call_if_set FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeClearMetatiles
# 49 "data/maps/Route120/scripts.pory"
	call_if_unset FLAG_RECEIVED_DEVON_SCOPE, Route120_EventScript_SetBridgeKecleonMovement
# 50 "data/maps/Route120/scripts.pory"
	end
# 51 "data/maps/Route120/scripts.pory"

# 52 "data/maps/Route120/scripts.pory"
Route120_EventScript_CloseAncientTomb:: @ 81F5490
# 53 "data/maps/Route120/scripts.pory"
	setmetatile 7, 54, METATILE_General_RockWall_RockBase, 1
# 54 "data/maps/Route120/scripts.pory"
	setmetatile 7, 55, METATILE_General_RockWall_SandBase, 1
# 55 "data/maps/Route120/scripts.pory"
	return
# 56 "data/maps/Route120/scripts.pory"

# 57 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeClearMetatiles:: @ 81F54A3
# 58 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, 0
# 59 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, 0
# 60 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, 0
# 61 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, 0
# 62 "data/maps/Route120/scripts.pory"
	return
# 63 "data/maps/Route120/scripts.pory"

# 64 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetBridgeKecleonMovement:: @ 81F54C8
# 65 "data/maps/Route120/scripts.pory"
	setobjectmovementtype LOCALID_VISIBLE_BRIDGE_KECLEON, MOVEMENT_TYPE_FACE_RIGHT
# 66 "data/maps/Route120/scripts.pory"
	return
# 67 "data/maps/Route120/scripts.pory"

# 68 "data/maps/Route120/scripts.pory"
Route120_OnTransition: @ 81F54CD
# 69 "data/maps/Route120/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 70 "data/maps/Route120/scripts.pory"
	call Route120_EventScript_SetWeather
# 71 "data/maps/Route120/scripts.pory"
	end
# 72 "data/maps/Route120/scripts.pory"

# 73 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetWeather:: @ 81F54D8
# 74 "data/maps/Route120/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 75 "data/maps/Route120/scripts.pory"
	compare VAR_TEMP_1, 14
# 76 "data/maps/Route120/scripts.pory"
	goto_if_le Route120_EventScript_SetSunnyWeather
# 77 "data/maps/Route120/scripts.pory"
	compare VAR_TEMP_1, 60
# 78 "data/maps/Route120/scripts.pory"
	goto_if_le Route120_EventScript_TrySetRainyWeather
# 79 "data/maps/Route120/scripts.pory"
	compare VAR_TEMP_1, 61
# 80 "data/maps/Route120/scripts.pory"
	goto_if_ge Route120_EventScript_SetCloudyWeather
# 81 "data/maps/Route120/scripts.pory"
	return
# 82 "data/maps/Route120/scripts.pory"

# 83 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetCloudyWeather:: @ 81F54FF
# 84 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY_CLOUDS
# 85 "data/maps/Route120/scripts.pory"
	return
# 86 "data/maps/Route120/scripts.pory"

# 87 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetSunnyWeather:: @ 81F5503
# 88 "data/maps/Route120/scripts.pory"
	setweather WEATHER_SUNNY
# 89 "data/maps/Route120/scripts.pory"
	return
# 90 "data/maps/Route120/scripts.pory"

# 91 "data/maps/Route120/scripts.pory"
Route120_EventScript_TrySetRainyWeather:: @ 81F5507
# 92 "data/maps/Route120/scripts.pory"
	compare VAR_TEMP_0, 7
# 93 "data/maps/Route120/scripts.pory"
	goto_if_le Route120_EventScript_SetRainyWeather
# 94 "data/maps/Route120/scripts.pory"
	compare VAR_TEMP_0, 19
# 95 "data/maps/Route120/scripts.pory"
	goto_if_le Route120_EventScript_SetSunnyWeather
# 96 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_SetRainyWeather
# 97 "data/maps/Route120/scripts.pory"
	end
# 98 "data/maps/Route120/scripts.pory"

# 99 "data/maps/Route120/scripts.pory"
Route120_EventScript_SetRainyWeather:: @ 81F5523
# 100 "data/maps/Route120/scripts.pory"
	setweather WEATHER_RAIN
# 101 "data/maps/Route120/scripts.pory"
	return
# 102 "data/maps/Route120/scripts.pory"

# 103 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryBeauty:: @ 81F5527
# 104 "data/maps/Route120/scripts.pory"
	lock
# 105 "data/maps/Route120/scripts.pory"
	faceplayer
# 106 "data/maps/Route120/scripts.pory"
	dotimebasedevents
# 107 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_120_RECEIVED_BERRY, Route120_EventScript_ReceivedBerry
# 108 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerriesExpressionOfLoveIsntIt, MSGBOX_YESNO
# 109 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, YES
# 110 "data/maps/Route120/scripts.pory"
	call_if_eq Route120_EventScript_BerryLove
# 111 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, NO
# 112 "data/maps/Route120/scripts.pory"
	call_if_eq Route120_EventScript_BerryNotLove
# 113 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetPlayerTrainerIdOnesDigit
# 114 "data/maps/Route120/scripts.pory"
	switch VAR_RESULT
# 115 "data/maps/Route120/scripts.pory"
	case 0, Route120_EventScript_GiveFigyBerry
# 116 "data/maps/Route120/scripts.pory"
	case 5, Route120_EventScript_GiveFigyBerry
# 117 "data/maps/Route120/scripts.pory"
	case 1, Route120_EventScript_GiveWikiBerry
# 118 "data/maps/Route120/scripts.pory"
	case 6, Route120_EventScript_GiveWikiBerry
# 119 "data/maps/Route120/scripts.pory"
	case 2, Route120_EventScript_GiveMagoBerry
# 120 "data/maps/Route120/scripts.pory"
	case 7, Route120_EventScript_GiveMagoBerry
# 121 "data/maps/Route120/scripts.pory"
	case 3, Route120_EventScript_GiveAguavBerry
# 122 "data/maps/Route120/scripts.pory"
	case 8, Route120_EventScript_GiveAguavBerry
# 123 "data/maps/Route120/scripts.pory"
	case 4, Route120_EventScript_GiveIapapaBerry
# 124 "data/maps/Route120/scripts.pory"
	case 9, Route120_EventScript_GiveIapapaBerry
# 125 "data/maps/Route120/scripts.pory"
	end
# 126 "data/maps/Route120/scripts.pory"

# 127 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveFigyBerry:: @ 81F55CA
# 128 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_FIGY_BERRY
# 129 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 130 "data/maps/Route120/scripts.pory"
	end
# 131 "data/maps/Route120/scripts.pory"

# 132 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveWikiBerry:: @ 81F55D5
# 133 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_WIKI_BERRY
# 134 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 135 "data/maps/Route120/scripts.pory"
	end
# 136 "data/maps/Route120/scripts.pory"

# 137 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveMagoBerry:: @ 81F55E0
# 138 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_MAGO_BERRY
# 139 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 140 "data/maps/Route120/scripts.pory"
	end
# 141 "data/maps/Route120/scripts.pory"

# 142 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveAguavBerry:: @ 81F55EB
# 143 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_AGUAV_BERRY
# 144 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 145 "data/maps/Route120/scripts.pory"
	end
# 146 "data/maps/Route120/scripts.pory"

# 147 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveIapapaBerry:: @ 81F55F6
# 148 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8004, ITEM_IAPAPA_BERRY
# 149 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_GiveBerry
# 150 "data/maps/Route120/scripts.pory"
	end
# 151 "data/maps/Route120/scripts.pory"

# 152 "data/maps/Route120/scripts.pory"
Route120_EventScript_GiveBerry:: @ 81F5601
# 153 "data/maps/Route120/scripts.pory"
	giveitem VAR_0x8004
# 154 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, FALSE
# 155 "data/maps/Route120/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 156 "data/maps/Route120/scripts.pory"
	setflag FLAG_DAILY_ROUTE_120_RECEIVED_BERRY
# 157 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_BerryIsRareRaiseItWithCare, MSGBOX_DEFAULT
# 158 "data/maps/Route120/scripts.pory"
	release
# 159 "data/maps/Route120/scripts.pory"
	end
# 160 "data/maps/Route120/scripts.pory"

# 161 "data/maps/Route120/scripts.pory"
Route120_EventScript_ReceivedBerry:: @ 81F5625
# 162 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_IllGetMoreBerriesFromBerryMaster, MSGBOX_DEFAULT
# 163 "data/maps/Route120/scripts.pory"
	release
# 164 "data/maps/Route120/scripts.pory"
	end
# 165 "data/maps/Route120/scripts.pory"

# 166 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryLove:: @ 81F562F
# 167 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_YesYouUnderstand, MSGBOX_DEFAULT
# 168 "data/maps/Route120/scripts.pory"
	return
# 169 "data/maps/Route120/scripts.pory"

# 170 "data/maps/Route120/scripts.pory"
Route120_EventScript_BerryNotLove:: @ 81F5638
# 171 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_MakeYourOwnImpressions, MSGBOX_DEFAULT
# 172 "data/maps/Route120/scripts.pory"
	return
# 173 "data/maps/Route120/scripts.pory"

# 174 "data/maps/Route120/scripts.pory"
Route120_EventScript_Steven:: @ 81F5641
# 175 "data/maps/Route120/scripts.pory"
	lock
# 176 "data/maps/Route120/scripts.pory"
	faceplayer
# 177 "data/maps/Route120/scripts.pory"
	goto_if_set FLAG_NOT_READY_FOR_BATTLE_ROUTE_120, Route120_EventScript_StevenAskReadyForBattle
# 178 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGreeting, MSGBOX_YESNO
# 179 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, NO
# 180 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_StevenNotReady
# 181 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 182 "data/maps/Route120/scripts.pory"
	end
# 183 "data/maps/Route120/scripts.pory"

# 184 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenNotReady:: @ 81F5665
# 185 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenIllWaitHere, MSGBOX_DEFAULT
# 186 "data/maps/Route120/scripts.pory"
	setflag FLAG_NOT_READY_FOR_BATTLE_ROUTE_120
# 187 "data/maps/Route120/scripts.pory"
	release
# 188 "data/maps/Route120/scripts.pory"
	end
# 189 "data/maps/Route120/scripts.pory"

# 190 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenAskReadyForBattle:: @ 81F5672
# 191 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenReadyForBattle, MSGBOX_YESNO
# 192 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, NO
# 193 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_StevenNotReady
# 194 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenBattleKecleon
# 195 "data/maps/Route120/scripts.pory"
	end
# 196 "data/maps/Route120/scripts.pory"

# 197 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenBattleKecleon:: @ 81F568B
# 198 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenShowMeYourPower, MSGBOX_DEFAULT
# 199 "data/maps/Route120/scripts.pory"
	closemessage
# 200 "data/maps/Route120/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 201 "data/maps/Route120/scripts.pory"
	call_if_eq Route120_EventScript_PlayerApproachKecleonNorth
# 202 "data/maps/Route120/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 203 "data/maps/Route120/scripts.pory"
	call_if_eq Route120_EventScript_PlayerApproachKecleonWest
# 204 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFastestLeft
# 205 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 206 "data/maps/Route120/scripts.pory"
	delay 20
# 207 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenUsedDevonScope, MSGBOX_DEFAULT
# 208 "data/maps/Route120/scripts.pory"
	closemessage
# 209 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_INVISIBLE_BRIDGE_KECLEON, Common_Movement_WalkInPlaceFastestRight
# 210 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 211 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_INVISIBLE_BRIDGE_KECLEON, Movement_KecleonAppears
# 212 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route120/scripts.pory"
	waitse
# 214 "data/maps/Route120/scripts.pory"
	playmoncry SPECIES_KECLEON, 2
# 215 "data/maps/Route120/scripts.pory"
	delay 40
# 216 "data/maps/Route120/scripts.pory"
	waitmoncry
# 217 "data/maps/Route120/scripts.pory"
	setwildbattle SPECIES_KECLEON, 30, ITEM_NONE
# 218 "data/maps/Route120/scripts.pory"
	setvar VAR_0x8009, 0
# 219 "data/maps/Route120/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 220 "data/maps/Route120/scripts.pory"
	dowildbattle
# 221 "data/maps/Route120/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 222 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 223 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 224 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_RemoveBridgeKecleonPostBattle
# 225 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 226 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_RemoveBridgeKecleonPostBattle
# 227 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 228 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_RemoveBridgeKecleonPostBattle
# 229 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 230 "data/maps/Route120/scripts.pory"
	end
# 231 "data/maps/Route120/scripts.pory"

# 232 "data/maps/Route120/scripts.pory"
Route120_EventScript_RemoveBridgeKecleonPostBattle:: @ 81F571C
# 233 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 234 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_INVISIBLE_BRIDGE_KECLEON
# 235 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_VISIBLE_BRIDGE_KECLEON
# 236 "data/maps/Route120/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 237 "data/maps/Route120/scripts.pory"
	goto Route120_EventScript_StevenGiveDeconScope
# 238 "data/maps/Route120/scripts.pory"
	end
# 239 "data/maps/Route120/scripts.pory"

# 240 "data/maps/Route120/scripts.pory"
Route120_EventScript_StevenGiveDeconScope:: @ 81F572C
# 241 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFastestDown
# 242 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 243 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 244 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGiveDevonScope, MSGBOX_DEFAULT
# 245 "data/maps/Route120/scripts.pory"
	giveitem ITEM_DEVON_SCOPE
# 246 "data/maps/Route120/scripts.pory"
	setflag FLAG_RECEIVED_DEVON_SCOPE
# 247 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_StevenGoodbye, MSGBOX_DEFAULT
# 248 "data/maps/Route120/scripts.pory"
	closemessage
# 249 "data/maps/Route120/scripts.pory"
	applymovement LOCALID_STEVEN, Common_Movement_WalkInPlaceFastestDown
# 250 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 251 "data/maps/Route120/scripts.pory"
	delay 50
# 252 "data/maps/Route120/scripts.pory"
	setfieldeffectargument 0, 1
# 253 "data/maps/Route120/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 254 "data/maps/Route120/scripts.pory"
	delay 15
# 255 "data/maps/Route120/scripts.pory"
	removeobject LOCALID_STEVEN
# 256 "data/maps/Route120/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 257 "data/maps/Route120/scripts.pory"
	setmetatile 13, 15, METATILE_Fortree_WoodBridge1_Top, 0
# 258 "data/maps/Route120/scripts.pory"
	setmetatile 12, 16, METATILE_Fortree_WoodBridge1_Bottom, 0
# 259 "data/maps/Route120/scripts.pory"
	setmetatile 12, 17, METATILE_General_ReflectiveWater, 0
# 260 "data/maps/Route120/scripts.pory"
	setmetatile 13, 17, METATILE_General_ReflectiveWater, 0
# 261 "data/maps/Route120/scripts.pory"
	special DrawWholeMapView
# 262 "data/maps/Route120/scripts.pory"
	release
# 263 "data/maps/Route120/scripts.pory"
	end
# 264 "data/maps/Route120/scripts.pory"

# 265 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonNorth:: @ 81F57A3
# 266 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 267 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 268 "data/maps/Route120/scripts.pory"
	return
# 269 "data/maps/Route120/scripts.pory"

# 270 "data/maps/Route120/scripts.pory"
Route120_EventScript_PlayerApproachKecleonWest:: @ 81F57AE
# 271 "data/maps/Route120/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route120_Movement_ApproachKecleonWest
# 272 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 273 "data/maps/Route120/scripts.pory"
	return
# 274 "data/maps/Route120/scripts.pory"

# 275 "data/maps/Route120/scripts.pory"
Route120_Movement_ApproachKecleonWest: @ 81F57B9
# 276 "data/maps/Route120/scripts.pory"
	walk_down
# 277 "data/maps/Route120/scripts.pory"
	walk_left
# 278 "data/maps/Route120/scripts.pory"
	step_end
# 279 "data/maps/Route120/scripts.pory"

# 280 "data/maps/Route120/scripts.pory"
Route120_EventScript_InvisibleBridgeKecleon:: @ 81F57BC
# 281 "data/maps/Route120/scripts.pory"
	msgbox Kecleon_Text_SomethingUnseeable, MSGBOX_NPC
# 282 "data/maps/Route120/scripts.pory"
	end
# 283 "data/maps/Route120/scripts.pory"

# 284 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSignFortree:: @ 81F57C5
# 285 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSignFortree, MSGBOX_SIGN
# 286 "data/maps/Route120/scripts.pory"
	end
# 287 "data/maps/Route120/scripts.pory"

# 288 "data/maps/Route120/scripts.pory"
Route120_EventScript_RouteSign121:: @ 81F57CE
# 289 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RouteSign121, MSGBOX_SIGN
# 290 "data/maps/Route120/scripts.pory"
	end
# 291 "data/maps/Route120/scripts.pory"

# 292 "data/maps/Route120/scripts.pory"
Route120_EventScript_Colin:: @ 81F57D7
# 293 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_COLIN, Route120_Text_ColinIntro, Route120_Text_ColinDefeat
# 294 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ColinPostBattle, MSGBOX_AUTOCLOSE
# 295 "data/maps/Route120/scripts.pory"
	end
# 296 "data/maps/Route120/scripts.pory"

# 297 "data/maps/Route120/scripts.pory"
Route120_EventScript_Robert:: @ 81F57EE
# 298 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_1, Route120_Text_RobertIntro, Route120_Text_RobertDefeat, Route120_EventScript_RegisterRobert
# 299 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 300 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, TRUE
# 301 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_RematchRobert
# 302 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostBattle, MSGBOX_DEFAULT
# 303 "data/maps/Route120/scripts.pory"
	release
# 304 "data/maps/Route120/scripts.pory"
	end
# 305 "data/maps/Route120/scripts.pory"

# 306 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterRobert:: @ 81F581A
# 307 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 308 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 309 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertRegister, MSGBOX_DEFAULT
# 310 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_ROBERT_1
# 311 "data/maps/Route120/scripts.pory"
	release
# 312 "data/maps/Route120/scripts.pory"
	end
# 313 "data/maps/Route120/scripts.pory"

# 314 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchRobert:: @ 81F5839
# 315 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_ROBERT_1, Route120_Text_RobertRematchIntro, Route120_Text_RobertRematchDefeat
# 316 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RobertPostRematch, MSGBOX_AUTOCLOSE
# 317 "data/maps/Route120/scripts.pory"
	end
# 318 "data/maps/Route120/scripts.pory"

# 319 "data/maps/Route120/scripts.pory"
Route120_EventScript_Lorenzo:: @ 81F5850
# 320 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LORENZO, Route120_Text_LorenzoIntro, Route120_Text_LorenzoDefeat
# 321 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LorenzoPostBattle, MSGBOX_AUTOCLOSE
# 322 "data/maps/Route120/scripts.pory"
	end
# 323 "data/maps/Route120/scripts.pory"

# 324 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jenna:: @ 81F5867
# 325 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNA, Route120_Text_JennaIntro, Route120_Text_JennaDefeat
# 326 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JennaPostBattle, MSGBOX_AUTOCLOSE
# 327 "data/maps/Route120/scripts.pory"
	end
# 328 "data/maps/Route120/scripts.pory"

# 329 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jeffrey:: @ 81F587E
# 330 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JEFFREY_1, Route120_Text_JeffreyIntro, Route120_Text_JeffreyDefeat, Route120_EventScript_RegisterJeffrey
# 331 "data/maps/Route120/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 332 "data/maps/Route120/scripts.pory"
	compare VAR_RESULT, TRUE
# 333 "data/maps/Route120/scripts.pory"
	goto_if_eq Route120_EventScript_RematchJeffrey
# 334 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostBattle, MSGBOX_DEFAULT
# 335 "data/maps/Route120/scripts.pory"
	release
# 336 "data/maps/Route120/scripts.pory"
	end
# 337 "data/maps/Route120/scripts.pory"

# 338 "data/maps/Route120/scripts.pory"
Route120_EventScript_RegisterJeffrey:: @ 81F58AA
# 339 "data/maps/Route120/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 340 "data/maps/Route120/scripts.pory"
	waitmovement 0
# 341 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyRegister, MSGBOX_DEFAULT
# 342 "data/maps/Route120/scripts.pory"
	register_matchcall TRAINER_JEFFREY_1
# 343 "data/maps/Route120/scripts.pory"
	release
# 344 "data/maps/Route120/scripts.pory"
	end
# 345 "data/maps/Route120/scripts.pory"

# 346 "data/maps/Route120/scripts.pory"
Route120_EventScript_RematchJeffrey:: @ 81F58C9
# 347 "data/maps/Route120/scripts.pory"
	trainerbattle_rematch TRAINER_JEFFREY_1, Route120_Text_JeffreyRematchIntro, Route120_Text_JeffreyRematchDefeat
# 348 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JeffreyPostRematch, MSGBOX_AUTOCLOSE
# 349 "data/maps/Route120/scripts.pory"
	end
# 350 "data/maps/Route120/scripts.pory"

# 351 "data/maps/Route120/scripts.pory"
Route120_EventScript_Jennifer:: @ 81F58E0
# 352 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_JENNIFER, Route120_Text_JenniferIntro, Route120_Text_JenniferDefeat
# 353 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_JenniferPostBattle, MSGBOX_AUTOCLOSE
# 354 "data/maps/Route120/scripts.pory"
	end
# 355 "data/maps/Route120/scripts.pory"

# 356 "data/maps/Route120/scripts.pory"
Route120_EventScript_Chip:: @ 81F58F7
# 357 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CHIP, Route120_Text_ChipIntro, Route120_Text_ChipDefeat
# 358 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ChipPostBattle, MSGBOX_AUTOCLOSE
# 359 "data/maps/Route120/scripts.pory"
	end
# 360 "data/maps/Route120/scripts.pory"

# 361 "data/maps/Route120/scripts.pory"
Route120_EventScript_Clarissa:: @ 81F590E
# 362 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CLARISSA, Route120_Text_ClarissaIntro, Route120_Text_ClarissaDefeat
# 363 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_ClarissaPostBattle, MSGBOX_AUTOCLOSE
# 364 "data/maps/Route120/scripts.pory"
	end
# 365 "data/maps/Route120/scripts.pory"

# 366 "data/maps/Route120/scripts.pory"
Route120_EventScript_Angelica:: @ 81F5925
# 367 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_ANGELICA, Route120_Text_AngelicaIntro, Route120_Text_AngelicaDefeat
# 368 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_AngelicaPostBattle, MSGBOX_AUTOCLOSE
# 369 "data/maps/Route120/scripts.pory"
	end
# 370 "data/maps/Route120/scripts.pory"

# 371 "data/maps/Route120/scripts.pory"
Route120_EventScript_Keigo:: @ 81F593C
# 372 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_KEIGO, Route120_Text_KeigoIntro, Route120_Text_KeigoDefeat
# 373 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_KeigoPostBattle, MSGBOX_AUTOCLOSE
# 374 "data/maps/Route120/scripts.pory"
	end
# 375 "data/maps/Route120/scripts.pory"

# 376 "data/maps/Route120/scripts.pory"
Route120_EventScript_Riley:: @ 81F5953
# 377 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_RILEY, Route120_Text_RileyIntro, Route120_Text_RileyDefeat
# 378 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_RileyPostBattle, MSGBOX_AUTOCLOSE
# 379 "data/maps/Route120/scripts.pory"
	end
# 380 "data/maps/Route120/scripts.pory"

# 381 "data/maps/Route120/scripts.pory"
Route120_EventScript_Leonel:: @ 81F596A
# 382 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_LEONEL, Route120_Text_LeonelIntro, Route120_Text_LeonelDefeat
# 383 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_LeonelPostBattle, MSGBOX_AUTOCLOSE
# 384 "data/maps/Route120/scripts.pory"
	end
# 385 "data/maps/Route120/scripts.pory"

# 386 "data/maps/Route120/scripts.pory"
Route120_EventScript_Callie:: @ 81F5981
# 387 "data/maps/Route120/scripts.pory"
	trainerbattle_single TRAINER_CALLIE, Route120_Text_CallieIntro, Route120_Text_CallieDefeat
# 388 "data/maps/Route120/scripts.pory"
	msgbox Route120_Text_CalliePostBattle, MSGBOX_AUTOCLOSE
# 389 "data/maps/Route120/scripts.pory"
	end
# 390 "data/maps/Route120/scripts.pory"

# 391 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGreeting: @ 81F5998
# 392 "data/maps/Route120/scripts.pory"
	.string "Steven: Hm? {PLAYER}{KUN}, hi.\n"
# 393 "data/maps/Route120/scripts.pory"
	.string "It's been a while.\p"
# 394 "data/maps/Route120/scripts.pory"
	.string "There's something here that you can't\n"
# 395 "data/maps/Route120/scripts.pory"
	.string "see, right?\p"
# 396 "data/maps/Route120/scripts.pory"
	.string "Now, if I were to use this device on\n"
# 397 "data/maps/Route120/scripts.pory"
	.string "the invisible obstacle…\p"
# 398 "data/maps/Route120/scripts.pory"
	.string "No, no. Rather than describing it,\n"
# 399 "data/maps/Route120/scripts.pory"
	.string "I should just show you.\l"
# 400 "data/maps/Route120/scripts.pory"
	.string "That would be more fun.\p"
# 401 "data/maps/Route120/scripts.pory"
	.string "{PLAYER}{KUN}, are your Pokémon ready for\n"
# 402 "data/maps/Route120/scripts.pory"
	.string "battle?$"
# 403 "data/maps/Route120/scripts.pory"

# 404 "data/maps/Route120/scripts.pory"
Route120_Text_StevenIllWaitHere: @ 81F5AAC
# 405 "data/maps/Route120/scripts.pory"
	.string "Steven: No?\p"
# 406 "data/maps/Route120/scripts.pory"
	.string "I'll wait here, so you can get ready.$"
# 407 "data/maps/Route120/scripts.pory"

# 408 "data/maps/Route120/scripts.pory"
Route120_Text_StevenReadyForBattle: @ 81F5ADE
# 409 "data/maps/Route120/scripts.pory"
	.string "Steven: {PLAYER}{KUN}, are your Pokémon\n"
# 410 "data/maps/Route120/scripts.pory"
	.string "ready for battle?$"
# 411 "data/maps/Route120/scripts.pory"

# 412 "data/maps/Route120/scripts.pory"
Route120_Text_StevenShowMeYourPower: @ 81F5B0F
# 413 "data/maps/Route120/scripts.pory"
	.string "Steven: {PLAYER}{KUN}, show me your true\n"
# 414 "data/maps/Route120/scripts.pory"
	.string "power as a Trainer!$"
# 415 "data/maps/Route120/scripts.pory"

# 416 "data/maps/Route120/scripts.pory"
Route120_Text_StevenUsedDevonScope: @ 81F5B43
# 417 "data/maps/Route120/scripts.pory"
	.string "Steven used the Devon Scope.\p"
# 418 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 419 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 420 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 421 "data/maps/Route120/scripts.pory"

# 422 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGiveDevonScope: @ 81F5BAF
# 423 "data/maps/Route120/scripts.pory"
	.string "Steven: I see…\n"
# 424 "data/maps/Route120/scripts.pory"
	.string "Your battle style is intriguing.\p"
# 425 "data/maps/Route120/scripts.pory"
	.string "Your Pokémon have obviously grown\n"
# 426 "data/maps/Route120/scripts.pory"
	.string "since I first met you in Dewford.\p"
# 427 "data/maps/Route120/scripts.pory"
	.string "I'd like you to have this\n"
# 428 "data/maps/Route120/scripts.pory"
	.string "Devon Scope.\p"
# 429 "data/maps/Route120/scripts.pory"
	.string "Who knows, there may be other\n"
# 430 "data/maps/Route120/scripts.pory"
	.string "concealed Pokémon.$"
# 431 "data/maps/Route120/scripts.pory"

# 432 "data/maps/Route120/scripts.pory"
Route120_Text_StevenGoodbye: @ 81F5C7B
# 433 "data/maps/Route120/scripts.pory"
	.string "Steven: {PLAYER}{KUN}.\p"
# 434 "data/maps/Route120/scripts.pory"
	.string "I enjoy seeing Pokémon and Trainers\n"
# 435 "data/maps/Route120/scripts.pory"
	.string "who strive together.\p"
# 436 "data/maps/Route120/scripts.pory"
	.string "I think you're doing great.\p"
# 437 "data/maps/Route120/scripts.pory"
	.string "Well, let's meet again somewhere.$"
# 438 "data/maps/Route120/scripts.pory"

# 439 "data/maps/Route120/scripts.pory"
Kecleon_Text_SomethingUnseeable: @ 81F5D00
# 440 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.$"
# 441 "data/maps/Route120/scripts.pory"

# 442 "data/maps/Route120/scripts.pory"
Kecleon_Text_WantToUseDevonScope: @ 81F5D23
# 443 "data/maps/Route120/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 444 "data/maps/Route120/scripts.pory"
	.string "Want to use the Devon Scope?$"
# 445 "data/maps/Route120/scripts.pory"

# 446 "data/maps/Route120/scripts.pory"
Kecleon_Text_UseDevonScopeMonAttacked: @ 81F5D63
# 447 "data/maps/Route120/scripts.pory"
	.string "{PLAYER} used the Devon Scope.\p"
# 448 "data/maps/Route120/scripts.pory"
	.string "An invisible Pokémon became completely\n"
# 449 "data/maps/Route120/scripts.pory"
	.string "visible!\p"
# 450 "data/maps/Route120/scripts.pory"
	.string "The startled Pokémon attacked!$"
# 451 "data/maps/Route120/scripts.pory"

# 452 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSignFortree: @ 81F5DCB
# 453 "data/maps/Route120/scripts.pory"
	.string "Route 120\n"
# 454 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Fortree City$"
# 455 "data/maps/Route120/scripts.pory"

# 456 "data/maps/Route120/scripts.pory"
Route120_Text_RouteSign121: @ 81F5DE4
# 457 "data/maps/Route120/scripts.pory"
	.string "{RIGHT_ARROW} Route 121\n"
# 458 "data/maps/Route120/scripts.pory"
	.string "{LEFT_ARROW} Route 120$"
