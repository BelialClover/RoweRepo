# 1 "data/maps/Route111/scripts.pory"

# 2 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTOR, 1
# 3 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTORIA, 2
# 4 "data/maps/Route111/scripts.pory"
.set LOCALID_VIVI, 3
# 5 "data/maps/Route111/scripts.pory"
.set LOCALID_VICKY, 4
# 6 "data/maps/Route111/scripts.pory"
.set LOCALID_PLAYER_FALLING, 45
# 7 "data/maps/Route111/scripts.pory"
.set LOCALID_ROCK_SMASH_MAN, 46
# 8 "data/maps/Route111/scripts.pory"

# 9 "data/maps/Route111/scripts.pory"
Route111_MapScripts:: @ 81F0CA7
# 10 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 11 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 12 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 13 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 14 "data/maps/Route111/scripts.pory"
	.byte 0
# 15 "data/maps/Route111/scripts.pory"

# 16 "data/maps/Route111/scripts.pory"
Route111_OnLoad: @ 81F0CBC
# 17 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 18 "data/maps/Route111/scripts.pory"
	compare VAR_MIRAGE_TOWER_STATE, 1
# 19 "data/maps/Route111/scripts.pory"
	call_if_eq Route111_EventScript_ShowTemporaryMirageTower
# 20 "data/maps/Route111/scripts.pory"
	end
# 21 "data/maps/Route111/scripts.pory"

# 22 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins:: @ 81F0CD1
# 23 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, 1
# 24 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, 1
# 25 "data/maps/Route111/scripts.pory"
	return
# 26 "data/maps/Route111/scripts.pory"

# 27 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 28 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower:: @ 81F0CE4
# 29 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, 0
# 30 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, 0
# 31 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, 0
# 32 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, 0
# 33 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, 0
# 34 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, 0
# 35 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, 0
# 36 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, 0
# 37 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, 0
# 38 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, 0
# 39 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, 0
# 40 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, 0
# 41 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, 0
# 42 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, 0
# 43 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, 0
# 44 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, 0
# 45 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, 0
# 46 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, 0
# 47 "data/maps/Route111/scripts.pory"
	return
# 48 "data/maps/Route111/scripts.pory"

# 49 "data/maps/Route111/scripts.pory"
Route111_OnTransition: @ 81F0D87
# 50 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 51 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 52 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 53 "data/maps/Route111/scripts.pory"
	compare VAR_MIRAGE_TOWER_STATE, 1
# 54 "data/maps/Route111/scripts.pory"
	call_if_eq Route111_EventScript_SetFallingPlayerGfx
# 55 "data/maps/Route111/scripts.pory"
	compare VAR_MIRAGE_TOWER_STATE, 2
# 56 "data/maps/Route111/scripts.pory"
	call_if_eq Route111_EventScript_SetMirageTowerGone
# 57 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 58 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 59 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 60 "data/maps/Route111/scripts.pory"
	end
# 61 "data/maps/Route111/scripts.pory"

# 62 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx:: @ 81F0DC2
# 63 "data/maps/Route111/scripts.pory"
	checkplayergender
# 64 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, MALE
# 65 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_SetFallingPlayerGfxMale
# 66 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, FEMALE
# 67 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_SetFallingPlayerGfxFemale
# 68 "data/maps/Route111/scripts.pory"
	return
# 69 "data/maps/Route111/scripts.pory"

# 70 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale:: @ 81F0DDA
# 71 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 72 "data/maps/Route111/scripts.pory"
	return
# 73 "data/maps/Route111/scripts.pory"

# 74 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale:: @ 81F0DE0
# 75 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 76 "data/maps/Route111/scripts.pory"
	return
# 77 "data/maps/Route111/scripts.pory"

# 78 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm:: @ 81F0DE6
# 79 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 80 "data/maps/Route111/scripts.pory"
	compare VAR_TEMP_1, 34
# 81 "data/maps/Route111/scripts.pory"
	goto_if_lt Route111_EventScript_EndCheckSetSandstorm
# 82 "data/maps/Route111/scripts.pory"
	compare VAR_TEMP_1, 107
# 83 "data/maps/Route111/scripts.pory"
	goto_if_gt Route111_EventScript_EndCheckSetSandstorm
# 84 "data/maps/Route111/scripts.pory"
	compare VAR_TEMP_1, 72
# 85 "data/maps/Route111/scripts.pory"
	goto_if_gt Route111_EventScript_SetSandstorm
# 86 "data/maps/Route111/scripts.pory"
	compare VAR_TEMP_0, 2000
# 87 "data/maps/Route111/scripts.pory"
	goto_if_gt Route111_EventScript_EndCheckSetSandstorm
# 88 "data/maps/Route111/scripts.pory"
	compare VAR_TEMP_0, 8
# 89 "data/maps/Route111/scripts.pory"
	goto_if_lt Route111_EventScript_EndCheckSetSandstorm
# 90 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm:: @ 81F0E22
# 91 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 92 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm:: @ 81F0E25
# 93 "data/maps/Route111/scripts.pory"
	return
# 94 "data/maps/Route111/scripts.pory"

# 95 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated:: @ 81F0E26
# 96 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 97 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 98 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 99 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 100 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 101 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 102 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 103 "data/maps/Route111/scripts.pory"
	end
# 104 "data/maps/Route111/scripts.pory"

# 105 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower:: @ 81F0E3C
# 106 "data/maps/Route111/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE111_NO_MIRAGE_TOWER
# 107 "data/maps/Route111/scripts.pory"
	return
# 108 "data/maps/Route111/scripts.pory"

# 109 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone:: @ 81F0E40
# 110 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 111 "data/maps/Route111/scripts.pory"
	return
# 112 "data/maps/Route111/scripts.pory"

# 113 "data/maps/Route111/scripts.pory"
Route111_OnWarp: @ 81F0E46
# 114 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 115 "data/maps/Route111/scripts.pory"
	.2byte 0
# 116 "data/maps/Route111/scripts.pory"

# 117 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower:: @ 81F0E50
# 118 "data/maps/Route111/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 119 "data/maps/Route111/scripts.pory"
	end
# 120 "data/maps/Route111/scripts.pory"

# 121 "data/maps/Route111/scripts.pory"
Route111_OnFrame: @ 81F0E56
# 122 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 123 "data/maps/Route111/scripts.pory"
	.2byte 0
# 124 "data/maps/Route111/scripts.pory"

# 125 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear:: @ 81F0E60
# 126 "data/maps/Route111/scripts.pory"
	lockall
# 127 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 128 "data/maps/Route111/scripts.pory"
	waitstate
# 129 "data/maps/Route111/scripts.pory"
	delay 24
# 130 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 131 "data/maps/Route111/scripts.pory"
	addobject LOCALID_PLAYER_FALLING
# 132 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 133 "data/maps/Route111/scripts.pory"
	waitstate
# 134 "data/maps/Route111/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 135 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_PLAYER_FALLING
# 136 "data/maps/Route111/scripts.pory"
	delay 16
# 137 "data/maps/Route111/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 138 "data/maps/Route111/scripts.pory"
	delay 16
# 139 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 140 "data/maps/Route111/scripts.pory"
	waitstate
# 141 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 142 "data/maps/Route111/scripts.pory"
	waitstate
# 143 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 144 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 145 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 146 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 147 "data/maps/Route111/scripts.pory"
	releaseall
# 148 "data/maps/Route111/scripts.pory"
	end
# 149 "data/maps/Route111/scripts.pory"

# 150 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared:: @ 81F0EA7
# 151 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 152 "data/maps/Route111/scripts.pory"
	releaseall
# 153 "data/maps/Route111/scripts.pory"
	end
# 154 "data/maps/Route111/scripts.pory"

# 155 "data/maps/Route111/scripts.pory"
@ Unused
# 156 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall:: @ 81F0EB1
# 157 "data/maps/Route111/scripts.pory"
	store_lock_anim
# 158 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 159 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 160 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 161 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 162 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 163 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 164 "data/maps/Route111/scripts.pory"
	step_end
# 165 "data/maps/Route111/scripts.pory"

# 166 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl:: @ 81F0EB9
# 167 "data/maps/Route111/scripts.pory"
	lock
# 168 "data/maps/Route111/scripts.pory"
	faceplayer
# 169 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 170 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 171 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 172 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 173 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, FALSE
# 174 "data/maps/Route111/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 175 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 176 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 177 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 178 "data/maps/Route111/scripts.pory"
	release
# 179 "data/maps/Route111/scripts.pory"
	end
# 180 "data/maps/Route111/scripts.pory"

# 181 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry:: @ 81F0EF4
# 182 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 183 "data/maps/Route111/scripts.pory"
	release
# 184 "data/maps/Route111/scripts.pory"
	end
# 185 "data/maps/Route111/scripts.pory"

# 186 "data/maps/Route111/scripts.pory"
@ Unused
# 187 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp:: @ 81F0EFE
# 188 "data/maps/Route111/scripts.pory"
	lockall
# 189 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 190 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 191 "data/maps/Route111/scripts.pory"
	end
# 192 "data/maps/Route111/scripts.pory"

# 193 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown:: @ 81F0F0A
# 194 "data/maps/Route111/scripts.pory"
	lockall
# 195 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 196 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 197 "data/maps/Route111/scripts.pory"
	end
# 198 "data/maps/Route111/scripts.pory"

# 199 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft:: @ 81F0F16
# 200 "data/maps/Route111/scripts.pory"
	lockall
# 201 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 202 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 203 "data/maps/Route111/scripts.pory"
	end
# 204 "data/maps/Route111/scripts.pory"

# 205 "data/maps/Route111/scripts.pory"
@ Unused
# 206 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight:: @ 81F0F22
# 207 "data/maps/Route111/scripts.pory"
	lockall
# 208 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 209 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 210 "data/maps/Route111/scripts.pory"
	end
# 211 "data/maps/Route111/scripts.pory"

# 212 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger:: @ 81F0F2E
# 213 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES, 1
# 214 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, FALSE
# 215 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_PreventRouteAccess
# 216 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 217 "data/maps/Route111/scripts.pory"
	releaseall
# 218 "data/maps/Route111/scripts.pory"
	end
# 219 "data/maps/Route111/scripts.pory"

# 220 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess:: @ 81F0F45
# 221 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 222 "data/maps/Route111/scripts.pory"
	closemessage
# 223 "data/maps/Route111/scripts.pory"
	compare VAR_0x8004, 0
# 224 "data/maps/Route111/scripts.pory"
	call_if_eq Route111_EventScript_PushUpFromRoute
# 225 "data/maps/Route111/scripts.pory"
	compare VAR_0x8004, 1
# 226 "data/maps/Route111/scripts.pory"
	call_if_eq Route111_EventScript_PushDownFromRoute
# 227 "data/maps/Route111/scripts.pory"
	compare VAR_0x8004, 2
# 228 "data/maps/Route111/scripts.pory"
	call_if_eq Route111_EventScript_PushLeftFromRoute
# 229 "data/maps/Route111/scripts.pory"
	compare VAR_0x8004, 3
# 230 "data/maps/Route111/scripts.pory"
	call_if_eq Route111_EventScript_PushRightFromRoute
# 231 "data/maps/Route111/scripts.pory"
	releaseall
# 232 "data/maps/Route111/scripts.pory"
	end
# 233 "data/maps/Route111/scripts.pory"

# 234 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute:: @ 81F0F7C
# 235 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushUpFromRoute
# 236 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 237 "data/maps/Route111/scripts.pory"
	return
# 238 "data/maps/Route111/scripts.pory"

# 239 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute:: @ 81F0F87
# 240 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushDownFromRoute
# 241 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 242 "data/maps/Route111/scripts.pory"
	return
# 243 "data/maps/Route111/scripts.pory"

# 244 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute:: @ 81F0F92
# 245 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushLeftFromRoute
# 246 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 247 "data/maps/Route111/scripts.pory"
	return
# 248 "data/maps/Route111/scripts.pory"

# 249 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute:: @ 81F0F9D
# 250 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushRightFromRoute
# 251 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route111/scripts.pory"
	return
# 253 "data/maps/Route111/scripts.pory"

# 254 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute: @ 81F0FA8
# 255 "data/maps/Route111/scripts.pory"
	walk_up
# 256 "data/maps/Route111/scripts.pory"
	step_end
# 257 "data/maps/Route111/scripts.pory"

# 258 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute: @ 81F0FAA
# 259 "data/maps/Route111/scripts.pory"
	walk_down
# 260 "data/maps/Route111/scripts.pory"
	step_end
# 261 "data/maps/Route111/scripts.pory"

# 262 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute: @ 81F0FAC
# 263 "data/maps/Route111/scripts.pory"
	walk_left
# 264 "data/maps/Route111/scripts.pory"
	step_end
# 265 "data/maps/Route111/scripts.pory"

# 266 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute: @ 81F0FAE
# 267 "data/maps/Route111/scripts.pory"
	walk_right
# 268 "data/maps/Route111/scripts.pory"
	step_end
# 269 "data/maps/Route111/scripts.pory"

# 270 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger:: @ 81F0FB0
# 271 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 272 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE110
# 273 "data/maps/Route111/scripts.pory"
	doweather
# 274 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 275 "data/maps/Route111/scripts.pory"
	end
# 276 "data/maps/Route111/scripts.pory"

# 277 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger:: @ 81F0FBD
# 278 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 279 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_ROUTE111
# 280 "data/maps/Route111/scripts.pory"
	doweather
# 281 "data/maps/Route111/scripts.pory"
	end
# 282 "data/maps/Route111/scripts.pory"

# 283 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor:: @ 81F0FC5
# 284 "data/maps/Route111/scripts.pory"
	lock
# 285 "data/maps/Route111/scripts.pory"
	faceplayer
# 286 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 287 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 288 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, YES
# 289 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_BattleWinstrates
# 290 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 291 "data/maps/Route111/scripts.pory"
	release
# 292 "data/maps/Route111/scripts.pory"
	end
# 293 "data/maps/Route111/scripts.pory"

# 294 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates:: @ 81F0FE7
# 295 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 296 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 297 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Common_Movement_WalkInPlaceFastestUp
# 298 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 299 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 300 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 301 "data/maps/Route111/scripts.pory"
	closemessage
# 302 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Route111_Movement_WinstrateEnterHouse
# 303 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 304 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTOR
# 305 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 306 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 307 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 308 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 309 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICTORIA
# 310 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateExitHouse
# 311 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 312 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 313 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 314 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 315 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Common_Movement_WalkInPlaceFastestUp
# 316 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 317 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 318 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 319 "data/maps/Route111/scripts.pory"
	closemessage
# 320 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 321 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 322 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTORIA
# 323 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 324 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 325 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 326 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 327 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VIVI
# 328 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateExitHouse
# 329 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 330 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 331 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 332 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 333 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Common_Movement_WalkInPlaceFastestUp
# 334 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 335 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 336 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 337 "data/maps/Route111/scripts.pory"
	closemessage
# 338 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateEnterHouse
# 339 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 340 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VIVI
# 341 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 342 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 343 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 344 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 345 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICKY
# 346 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateExitHouse
# 347 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 348 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 349 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 350 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 351 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 352 "data/maps/Route111/scripts.pory"
	closemessage
# 353 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Common_Movement_WalkInPlaceFastestUp
# 354 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 355 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 356 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateEnterHouse
# 357 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 358 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICKY
# 359 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 360 "data/maps/Route111/scripts.pory"
	release
# 361 "data/maps/Route111/scripts.pory"
	end
# 362 "data/maps/Route111/scripts.pory"

# 363 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor:: @ 81F113C
# 364 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 365 "data/maps/Route111/scripts.pory"
	waitdooranim
# 366 "data/maps/Route111/scripts.pory"
	return
# 367 "data/maps/Route111/scripts.pory"

# 368 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor:: @ 81F1143
# 369 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 370 "data/maps/Route111/scripts.pory"
	waitdooranim
# 371 "data/maps/Route111/scripts.pory"
	return
# 372 "data/maps/Route111/scripts.pory"

# 373 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse: @ 81F114A
# 374 "data/maps/Route111/scripts.pory"
	walk_in_place_fastest_up
# 375 "data/maps/Route111/scripts.pory"
	walk_up
# 376 "data/maps/Route111/scripts.pory"
	step_end
# 377 "data/maps/Route111/scripts.pory"

# 378 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse: @ 81F114D
# 379 "data/maps/Route111/scripts.pory"
	walk_down
# 380 "data/maps/Route111/scripts.pory"
	step_end
# 381 "data/maps/Route111/scripts.pory"

# 382 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate: @ 81F114F
# 383 "data/maps/Route111/scripts.pory"
	delay_16
# 384 "data/maps/Route111/scripts.pory"
	delay_16
# 385 "data/maps/Route111/scripts.pory"
	delay_16
# 386 "data/maps/Route111/scripts.pory"
	step_end
# 387 "data/maps/Route111/scripts.pory"

# 388 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville:: @ 81F1153
# 389 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 390 "data/maps/Route111/scripts.pory"
	end
# 391 "data/maps/Route111/scripts.pory"

# 392 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign:: @ 81F115C
# 393 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 394 "data/maps/Route111/scripts.pory"
	end
# 395 "data/maps/Route111/scripts.pory"

# 396 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112:: @ 81F1165
# 397 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 398 "data/maps/Route111/scripts.pory"
	end
# 399 "data/maps/Route111/scripts.pory"

# 400 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113:: @ 81F116E
# 401 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 402 "data/maps/Route111/scripts.pory"
	end
# 403 "data/maps/Route111/scripts.pory"

# 404 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign:: @ 81F1177
# 405 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 406 "data/maps/Route111/scripts.pory"
	end
# 407 "data/maps/Route111/scripts.pory"

# 408 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef:: @ 81F1180
# 409 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 410 "data/maps/Route111/scripts.pory"
	end
# 411 "data/maps/Route111/scripts.pory"

# 412 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1:: @ 81F1189
# 413 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 414 "data/maps/Route111/scripts.pory"
	end
# 415 "data/maps/Route111/scripts.pory"

# 416 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2:: @ 81F1192
# 417 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 418 "data/maps/Route111/scripts.pory"
	end
# 419 "data/maps/Route111/scripts.pory"

# 420 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker:: @ 81F119B
# 421 "data/maps/Route111/scripts.pory"
	lock
# 422 "data/maps/Route111/scripts.pory"
	faceplayer
# 423 "data/maps/Route111/scripts.pory"
	compare VAR_MIRAGE_TOWER_STATE, 3
# 424 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_HikerMirageTowerGone
# 425 "data/maps/Route111/scripts.pory"
	compare VAR_MIRAGE_TOWER_STATE, 2
# 426 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_HikerMirageTowerDisintegrated
# 427 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 428 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 429 "data/maps/Route111/scripts.pory"
	release
# 430 "data/maps/Route111/scripts.pory"
	end
# 431 "data/maps/Route111/scripts.pory"

# 432 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone:: @ 81F11C6
# 433 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 434 "data/maps/Route111/scripts.pory"
	release
# 435 "data/maps/Route111/scripts.pory"
	end
# 436 "data/maps/Route111/scripts.pory"

# 437 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated:: @ 81F11D0
# 438 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 439 "data/maps/Route111/scripts.pory"
	release
# 440 "data/maps/Route111/scripts.pory"
	end
# 441 "data/maps/Route111/scripts.pory"

# 442 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible:: @ 81F11DA
# 443 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 444 "data/maps/Route111/scripts.pory"
	release
# 445 "data/maps/Route111/scripts.pory"
	end
# 446 "data/maps/Route111/scripts.pory"

# 447 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan:: @ 81F11E4
# 448 "data/maps/Route111/scripts.pory"
	lockall
# 449 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 450 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 451 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 452 "data/maps/Route111/scripts.pory"
	closemessage
# 453 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 454 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 455 "data/maps/Route111/scripts.pory"
	releaseall
# 456 "data/maps/Route111/scripts.pory"
	end
# 457 "data/maps/Route111/scripts.pory"

# 458 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew:: @ 81F1204
# 459 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 460 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 461 "data/maps/Route111/scripts.pory"
	end
# 462 "data/maps/Route111/scripts.pory"

# 463 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi:: @ 81F121B
# 464 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 465 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 466 "data/maps/Route111/scripts.pory"
	end
# 467 "data/maps/Route111/scripts.pory"

# 468 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau:: @ 81F1232
# 469 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 470 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 471 "data/maps/Route111/scripts.pory"
	end
# 472 "data/maps/Route111/scripts.pory"

# 473 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky:: @ 81F1249
# 474 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 475 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 476 "data/maps/Route111/scripts.pory"
	end
# 477 "data/maps/Route111/scripts.pory"

# 478 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty:: @ 81F1260
# 479 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat, Route111_EventScript_RegisterDusty
# 480 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 481 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, TRUE
# 482 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_RematchDusty
# 483 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 484 "data/maps/Route111/scripts.pory"
	release
# 485 "data/maps/Route111/scripts.pory"
	end
# 486 "data/maps/Route111/scripts.pory"

# 487 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty:: @ 81F128C
# 488 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 489 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 490 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 491 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 492 "data/maps/Route111/scripts.pory"
	release
# 493 "data/maps/Route111/scripts.pory"
	end
# 494 "data/maps/Route111/scripts.pory"

# 495 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty:: @ 81F12AB
# 496 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 497 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 498 "data/maps/Route111/scripts.pory"
	end
# 499 "data/maps/Route111/scripts.pory"

# 500 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis:: @ 81F12C2
# 501 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 502 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 503 "data/maps/Route111/scripts.pory"
	end
# 504 "data/maps/Route111/scripts.pory"

# 505 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene:: @ 81F12D9
# 506 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 507 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 508 "data/maps/Route111/scripts.pory"
	end
# 509 "data/maps/Route111/scripts.pory"

# 510 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke:: @ 81F12F0
# 511 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 512 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 513 "data/maps/Route111/scripts.pory"
	end
# 514 "data/maps/Route111/scripts.pory"

# 515 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton:: @ 81F1307
# 516 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat, Route111_EventScript_RegisterWilton
# 517 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 518 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, TRUE
# 519 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_RematchWilton
# 520 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 521 "data/maps/Route111/scripts.pory"
	release
# 522 "data/maps/Route111/scripts.pory"
	end
# 523 "data/maps/Route111/scripts.pory"

# 524 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton:: @ 81F1333
# 525 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 526 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 527 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 528 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 529 "data/maps/Route111/scripts.pory"
	release
# 530 "data/maps/Route111/scripts.pory"
	end
# 531 "data/maps/Route111/scripts.pory"

# 532 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton:: @ 81F1352
# 533 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 534 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 535 "data/maps/Route111/scripts.pory"
	end
# 536 "data/maps/Route111/scripts.pory"

# 537 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke:: @ 81F1369
# 538 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat, Route111_EventScript_RegisterBrooke
# 539 "data/maps/Route111/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 540 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, TRUE
# 541 "data/maps/Route111/scripts.pory"
	goto_if_eq Route111_EventScript_RematchBrooke
# 542 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 543 "data/maps/Route111/scripts.pory"
	release
# 544 "data/maps/Route111/scripts.pory"
	end
# 545 "data/maps/Route111/scripts.pory"

# 546 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke:: @ 81F1395
# 547 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 548 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 549 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 550 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 551 "data/maps/Route111/scripts.pory"
	release
# 552 "data/maps/Route111/scripts.pory"
	end
# 553 "data/maps/Route111/scripts.pory"

# 554 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke:: @ 81F13B4
# 555 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 556 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 557 "data/maps/Route111/scripts.pory"
	end
# 558 "data/maps/Route111/scripts.pory"

# 559 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden:: @ 81F13CB
# 560 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 561 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 562 "data/maps/Route111/scripts.pory"
	end
# 563 "data/maps/Route111/scripts.pory"

# 564 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca:: @ 81F13E2
# 565 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 566 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 567 "data/maps/Route111/scripts.pory"
	end
# 568 "data/maps/Route111/scripts.pory"

# 569 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron:: @ 81F13F9
# 570 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 571 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 572 "data/maps/Route111/scripts.pory"
	end
# 573 "data/maps/Route111/scripts.pory"

# 574 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina:: @ 81F1410
# 575 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 576 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 577 "data/maps/Route111/scripts.pory"
	end
# 578 "data/maps/Route111/scripts.pory"

# 579 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia:: @ 81F1427
# 580 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 581 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 582 "data/maps/Route111/scripts.pory"
	end
# 583 "data/maps/Route111/scripts.pory"

# 584 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan:: @ 81F143E
# 585 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 586 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 587 "data/maps/Route111/scripts.pory"
	end
# 588 "data/maps/Route111/scripts.pory"

# 589 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden:: @ 81F1455
# 590 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 591 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 592 "data/maps/Route111/scripts.pory"
	end
# 593 "data/maps/Route111/scripts.pory"

# 594 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign:: @ 81F146C
# 595 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 596 "data/maps/Route111/scripts.pory"
	end
# 597 "data/maps/Route111/scripts.pory"

# 598 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily: @ 81F1475
# 599 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 600 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 601 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 602 "data/maps/Route111/scripts.pory"
	.string "Pokémon battles?$"
# 603 "data/maps/Route111/scripts.pory"

# 604 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo: @ 81F14F5
# 605 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 606 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 607 "data/maps/Route111/scripts.pory"

# 608 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro: @ 81F1523
# 609 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 610 "data/maps/Route111/scripts.pory"

# 611 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat: @ 81F1542
# 612 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 613 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 614 "data/maps/Route111/scripts.pory"

# 615 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle: @ 81F156F
# 616 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 617 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong Trainer!$"
# 618 "data/maps/Route111/scripts.pory"

# 619 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro: @ 81F159D
# 620 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 621 "data/maps/Route111/scripts.pory"
	.string "You must be quite the Trainer to beat\n"
# 622 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 623 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 624 "data/maps/Route111/scripts.pory"

# 625 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat: @ 81F1616
# 626 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 627 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 628 "data/maps/Route111/scripts.pory"

# 629 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle: @ 81F1645
# 630 "data/maps/Route111/scripts.pory"
	.string "There's a strong Trainer here!\n"
# 631 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 632 "data/maps/Route111/scripts.pory"

# 633 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro: @ 81F167E
# 634 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 635 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 636 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 637 "data/maps/Route111/scripts.pory"

# 638 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat: @ 81F16C6
# 639 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 640 "data/maps/Route111/scripts.pory"

# 641 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle: @ 81F16DC
# 642 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 643 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 644 "data/maps/Route111/scripts.pory"

# 645 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro: @ 81F16FB
# 646 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 647 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 648 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 649 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 650 "data/maps/Route111/scripts.pory"

# 651 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat: @ 81F1756
# 652 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 653 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 654 "data/maps/Route111/scripts.pory"

# 655 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle: @ 81F1788
# 656 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 657 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 658 "data/maps/Route111/scripts.pory"

# 659 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks: @ 81F17BA
# 660 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your Pokémon some\n"
# 661 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 662 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 663 "data/maps/Route111/scripts.pory"
	.string "I've heard the Pokémon League's\n"
# 664 "data/maps/Route111/scripts.pory"
	.string "Elite Four are far stronger than\l"
# 665 "data/maps/Route111/scripts.pory"
	.string "any Gym Leader.$"
# 666 "data/maps/Route111/scripts.pory"

# 667 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe: @ 81F186E
# 668 "data/maps/Route111/scripts.pory"
	.string "I challenged the Winstrate family,\n"
# 669 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 670 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 671 "data/maps/Route111/scripts.pory"

# 672 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville: @ 81F18CE
# 673 "data/maps/Route111/scripts.pory"
	.string "Route 111\n"
# 674 "data/maps/Route111/scripts.pory"
	.string "{DOWN_ARROW} Mauville City$"
# 675 "data/maps/Route111/scripts.pory"

# 676 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign: @ 81F18E8
# 677 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 678 "data/maps/Route111/scripts.pory"
	.string "The Winstrate's House$"
# 679 "data/maps/Route111/scripts.pory"

# 680 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112: @ 81F1921
# 681 "data/maps/Route111/scripts.pory"
	.string "Route 111\n"
# 682 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} Route 112$"
# 683 "data/maps/Route111/scripts.pory"

# 684 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113: @ 81F1937
# 685 "data/maps/Route111/scripts.pory"
	.string "Route 111\n"
# 686 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} Route 113$"
# 687 "data/maps/Route111/scripts.pory"

# 688 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign: @ 81F194D
# 689 "data/maps/Route111/scripts.pory"
	.string "Old Lady's Rest Stop\n"
# 690 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 691 "data/maps/Route111/scripts.pory"

# 692 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef: @ 81F1987
# 693 "data/maps/Route111/scripts.pory"
	.string "Trainer Tips\p"
# 694 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a Pokémon's\n"
# 695 "data/maps/Route111/scripts.pory"
	.string "powerfulness is Sp. Atk. It stands for\l"
# 696 "data/maps/Route111/scripts.pory"
	.string "“Special Attack.”\p"
# 697 "data/maps/Route111/scripts.pory"
	.string "Likewise, Sp. Def stands for “Special\n"
# 698 "data/maps/Route111/scripts.pory"
	.string "Defense.”$"
# 699 "data/maps/Route111/scripts.pory"

# 700 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere: @ 81F1A22
# 701 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 702 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 703 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 704 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 705 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the Mirage Tower.$"
# 706 "data/maps/Route111/scripts.pory"

# 707 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible: @ 81F1AC7
# 708 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 709 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 710 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 711 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 712 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 713 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 714 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 715 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 716 "data/maps/Route111/scripts.pory"

# 717 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown: @ 81F1B92
# 718 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 719 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 720 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 721 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 722 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 723 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 724 "data/maps/Route111/scripts.pory"

# 725 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince: @ 81F1C12
# 726 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 727 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 728 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 729 "data/maps/Route111/scripts.pory"
	.string "the Mirage Tower…$"
# 730 "data/maps/Route111/scripts.pory"

# 731 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared: @ 81F1C74
# 732 "data/maps/Route111/scripts.pory"
	.string "The Claw Fossil disappeared into\n"
# 733 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 734 "data/maps/Route111/scripts.pory"

# 735 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared: @ 81F1C9F
# 736 "data/maps/Route111/scripts.pory"
	.string "The Root Fossil disappeared into\n"
# 737 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 738 "data/maps/Route111/scripts.pory"

# 739 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash: @ 81F1CCA
# 740 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 741 "data/maps/Route111/scripts.pory"
	.string "My uncle in Mauville told me to take\n"
# 742 "data/maps/Route111/scripts.pory"
	.string "Rock Smash with me if I was going to\l"
# 743 "data/maps/Route111/scripts.pory"
	.string "Route 111!\p"
# 744 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives across from\n"
# 745 "data/maps/Route111/scripts.pory"
	.string "the bike shop in Mauville.$"
# 746 "data/maps/Route111/scripts.pory"

# 747 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign: @ 81F1D61
# 748 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} Trainer Hill Entrance\p"
# 749 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 750 "data/maps/Route111/scripts.pory"
	.string "Trainers!”$"
