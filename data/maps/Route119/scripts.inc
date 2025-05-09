# 1 "data/maps/Route119/scripts.pory"

# 2 "data/maps/Route119/scripts.pory"
.set LOCALID_RIVAL, 16
# 3 "data/maps/Route119/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 25
# 4 "data/maps/Route119/scripts.pory"
.set LOCALID_SCOTT, 43
# 5 "data/maps/Route119/scripts.pory"

# 6 "data/maps/Route119/scripts.pory"
Route119_MapScripts:: @ 81F4424
# 7 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route119_OnResume
# 8 "data/maps/Route119/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_OnTransition
# 9 "data/maps/Route119/scripts.pory"
	.byte 0
# 10 "data/maps/Route119/scripts.pory"

# 11 "data/maps/Route119/scripts.pory"
Route119_OnResume: @ 81F442F
# 12 "data/maps/Route119/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, Route119_EventScript_TryRemoveKecleon
# 13 "data/maps/Route119/scripts.pory"
	end
# 14 "data/maps/Route119/scripts.pory"

# 15 "data/maps/Route119/scripts.pory"
Route119_EventScript_TryRemoveKecleon:: @ 81F4439
# 16 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 17 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 18 "data/maps/Route119/scripts.pory"
	goto_if_ne Common_EventScript_NopReturn
# 19 "data/maps/Route119/scripts.pory"
	removeobject VAR_LAST_TALKED
# 20 "data/maps/Route119/scripts.pory"
	return
# 21 "data/maps/Route119/scripts.pory"

# 22 "data/maps/Route119/scripts.pory"
Route119_OnTransition: @ 81F444D
# 23 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 24 "data/maps/Route119/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 25 "data/maps/Route119/scripts.pory"
	compare VAR_WEATHER_INSTITUTE_STATE, 1
# 26 "data/maps/Route119/scripts.pory"
	call_if_eq Route119_EventScript_MoveInstituteWorkersDownstairs
# 27 "data/maps/Route119/scripts.pory"
	special SetRoute119Weather
# 28 "data/maps/Route119/scripts.pory"
	end
# 29 "data/maps/Route119/scripts.pory"

# 30 "data/maps/Route119/scripts.pory"
Route119_EventScript_MoveInstituteWorkersDownstairs:: @ 81F4466
# 31 "data/maps/Route119/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 32 "data/maps/Route119/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS
# 33 "data/maps/Route119/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 2
# 34 "data/maps/Route119/scripts.pory"
	return
# 35 "data/maps/Route119/scripts.pory"

# 36 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger1:: @ 81F4472
# 37 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 1
# 38 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 39 "data/maps/Route119/scripts.pory"
	end
# 40 "data/maps/Route119/scripts.pory"

# 41 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalTrigger2:: @ 81F447D
# 42 "data/maps/Route119/scripts.pory"
	setvar VAR_TEMP_1, 2
# 43 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalEncounter
# 44 "data/maps/Route119/scripts.pory"
	end
# 45 "data/maps/Route119/scripts.pory"

# 46 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEncounter:: @ 81F4488
# 47 "data/maps/Route119/scripts.pory"
	lockall
# 48 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 49 "data/maps/Route119/scripts.pory"
	checkplayergender
# 50 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, MALE
# 51 "data/maps/Route119/scripts.pory"
	call_if_eq Route119_EventScript_PlayMayMusic
# 52 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, FEMALE
# 53 "data/maps/Route119/scripts.pory"
	call_if_eq Route119_EventScript_PlayBrendanMusic
# 54 "data/maps/Route119/scripts.pory"
	delay 65
# 55 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
# 56 "data/maps/Route119/scripts.pory"
	call_if_eq Route119_EventScript_RivalEnter1
# 57 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
# 58 "data/maps/Route119/scripts.pory"
	call_if_eq Route119_EventScript_RivalEnter2
# 59 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
# 60 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route119/scripts.pory"
	delay 30
# 62 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
# 63 "data/maps/Route119/scripts.pory"
	call_if_eq Route119_EventScript_SetRivalPos1
# 64 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
# 65 "data/maps/Route119/scripts.pory"
	call_if_eq Route119_EventScript_SetRivalPos2
# 66 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 67 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL
# 68 "data/maps/Route119/scripts.pory"
	delay 30
# 69 "data/maps/Route119/scripts.pory"
	checkplayergender
# 70 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, MALE
# 71 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_BattleMay
# 72 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, FEMALE
# 73 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_BattleBrendan
# 74 "data/maps/Route119/scripts.pory"
	releaseall
# 75 "data/maps/Route119/scripts.pory"
	end
# 76 "data/maps/Route119/scripts.pory"

# 77 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayMayMusic:: @ 81F4501
# 78 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
# 79 "data/maps/Route119/scripts.pory"
	return
# 80 "data/maps/Route119/scripts.pory"

# 81 "data/maps/Route119/scripts.pory"
Route119_EventScript_PlayBrendanMusic:: @ 81F4506
# 82 "data/maps/Route119/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
# 83 "data/maps/Route119/scripts.pory"
	return
# 84 "data/maps/Route119/scripts.pory"

# 85 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMay:: @ 81F450B
# 86 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayIntro, MSGBOX_DEFAULT
# 87 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 88 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleMayTreecko
# 89 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleMayTorchic
# 90 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleMayMudkip
# 91 "data/maps/Route119/scripts.pory"
	end
# 92 "data/maps/Route119/scripts.pory"

# 93 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTreecko:: @ 81F453A
# 94 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TREECKO, Route119_Text_MayDefeat
# 95 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 96 "data/maps/Route119/scripts.pory"
	end
# 97 "data/maps/Route119/scripts.pory"

# 98 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayTorchic:: @ 81F454A
# 99 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_TORCHIC, Route119_Text_MayDefeat
# 100 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 101 "data/maps/Route119/scripts.pory"
	end
# 102 "data/maps/Route119/scripts.pory"

# 103 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleMayMudkip:: @ 81F455A
# 104 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_119_MUDKIP, Route119_Text_MayDefeat
# 105 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedMay
# 106 "data/maps/Route119/scripts.pory"
	end
# 107 "data/maps/Route119/scripts.pory"

# 108 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedMay:: @ 81F456A
# 109 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayPresentForYou, MSGBOX_DEFAULT
# 110 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 111 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_MayExplainFly, MSGBOX_DEFAULT
# 112 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 113 "data/maps/Route119/scripts.pory"
	end
# 114 "data/maps/Route119/scripts.pory"

# 115 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendan:: @ 81F4585
# 116 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIntro, MSGBOX_DEFAULT
# 117 "data/maps/Route119/scripts.pory"
	switch VAR_STARTER_MON
# 118 "data/maps/Route119/scripts.pory"
	case 0, Route119_EventScript_BattleBrendanTreecko
# 119 "data/maps/Route119/scripts.pory"
	case 1, Route119_EventScript_BattleBrendanTorchic
# 120 "data/maps/Route119/scripts.pory"
	case 2, Route119_EventScript_BattleBrendanMudkip
# 121 "data/maps/Route119/scripts.pory"
	end
# 122 "data/maps/Route119/scripts.pory"

# 123 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTreecko:: @ 81F45B4
# 124 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TREECKO, Route119_Text_BrendanDefeat
# 125 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 126 "data/maps/Route119/scripts.pory"
	end
# 127 "data/maps/Route119/scripts.pory"

# 128 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanTorchic:: @ 81F45C4
# 129 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route119_Text_BrendanDefeat
# 130 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 131 "data/maps/Route119/scripts.pory"
	end
# 132 "data/maps/Route119/scripts.pory"

# 133 "data/maps/Route119/scripts.pory"
Route119_EventScript_BattleBrendanMudkip:: @ 81F45D4
# 134 "data/maps/Route119/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_119_MUDKIP, Route119_Text_BrendanDefeat
# 135 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_DefeatedBrendan
# 136 "data/maps/Route119/scripts.pory"
	end
# 137 "data/maps/Route119/scripts.pory"

# 138 "data/maps/Route119/scripts.pory"
Route119_EventScript_DefeatedBrendan:: @ 81F45E4
# 139 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanIllGiveYouThis, MSGBOX_DEFAULT
# 140 "data/maps/Route119/scripts.pory"
	call Route119_EventScript_GiveFlyHM
# 141 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrendanExplainFly, MSGBOX_DEFAULT
# 142 "data/maps/Route119/scripts.pory"
	goto Route119_EventScript_RivalExitScottArrive
# 143 "data/maps/Route119/scripts.pory"
	end
# 144 "data/maps/Route119/scripts.pory"

# 145 "data/maps/Route119/scripts.pory"
Route119_EventScript_GiveFlyHM:: @ 81F45FF
# 146 "data/maps/Route119/scripts.pory"
	giveitem ITEM_HM02
# 147 "data/maps/Route119/scripts.pory"
	setflag FLAG_RECEIVED_HM02
# 148 "data/maps/Route119/scripts.pory"
	return
# 149 "data/maps/Route119/scripts.pory"

# 150 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExitScottArrive:: @ 81F460F
# 151 "data/maps/Route119/scripts.pory"
	closemessage
# 152 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
# 153 "data/maps/Route119/scripts.pory"
	call_if_eq Route119_EventScript_SetRivalPos1
# 154 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
# 155 "data/maps/Route119/scripts.pory"
	call_if_eq Route119_EventScript_SetRivalPos2
# 156 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL
# 157 "data/maps/Route119/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 158 "data/maps/Route119/scripts.pory"
	delay 30
# 159 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
# 160 "data/maps/Route119/scripts.pory"
	call_if_eq Route119_EventScript_RivalExit1
# 161 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
# 162 "data/maps/Route119/scripts.pory"
	call_if_eq Route119_EventScript_RivalExit2
# 163 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 164 "data/maps/Route119/scripts.pory"
	setvar VAR_ROUTE119_STATE, 1
# 165 "data/maps/Route119/scripts.pory"
	savebgm MUS_DUMMY
# 166 "data/maps/Route119/scripts.pory"
	fadedefaultbgm
# 167 "data/maps/Route119/scripts.pory"
	delay 60
# 168 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
# 169 "data/maps/Route119/scripts.pory"
	call_if_eq Route119_EventScript_SetScottPos1
# 170 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
# 171 "data/maps/Route119/scripts.pory"
	call_if_eq Route119_EventScript_SetScottPos2
# 172 "data/maps/Route119/scripts.pory"
	addobject LOCALID_SCOTT
# 173 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottEnter
# 174 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 175 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 176 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ScottWayToGoBeSeeingYou, MSGBOX_DEFAULT
# 177 "data/maps/Route119/scripts.pory"
	closemessage
# 178 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 1
# 179 "data/maps/Route119/scripts.pory"
	call_if_eq Route119_EventScript_ScottExit1
# 180 "data/maps/Route119/scripts.pory"
	compare VAR_TEMP_1, 2
# 181 "data/maps/Route119/scripts.pory"
	call_if_eq Route119_EventScript_ScottExit2
# 182 "data/maps/Route119/scripts.pory"
	removeobject LOCALID_SCOTT
# 183 "data/maps/Route119/scripts.pory"
	releaseall
# 184 "data/maps/Route119/scripts.pory"
	end
# 185 "data/maps/Route119/scripts.pory"

# 186 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos1:: @ 81F46A0
# 187 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 27, 25
# 188 "data/maps/Route119/scripts.pory"
	return
# 189 "data/maps/Route119/scripts.pory"

# 190 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetScottPos2:: @ 81F46A8
# 191 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 28, 25
# 192 "data/maps/Route119/scripts.pory"
	return
# 193 "data/maps/Route119/scripts.pory"

# 194 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit1:: @ 81F46B0
# 195 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit1
# 196 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 197 "data/maps/Route119/scripts.pory"
	return
# 198 "data/maps/Route119/scripts.pory"

# 199 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottExit2:: @ 81F46BB
# 200 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_SCOTT, Route119_Movement_ScottExit2
# 201 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 202 "data/maps/Route119/scripts.pory"
	return
# 203 "data/maps/Route119/scripts.pory"

# 204 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter1:: @ 81F46C6
# 205 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter1
# 206 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 207 "data/maps/Route119/scripts.pory"
	return
# 208 "data/maps/Route119/scripts.pory"

# 209 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalEnter2:: @ 81F46D1
# 210 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalEnter2
# 211 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 212 "data/maps/Route119/scripts.pory"
	return
# 213 "data/maps/Route119/scripts.pory"

# 214 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit1:: @ 81F46DC
# 215 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit1
# 216 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit1
# 217 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 218 "data/maps/Route119/scripts.pory"
	return
# 219 "data/maps/Route119/scripts.pory"

# 220 "data/maps/Route119/scripts.pory"
Route119_EventScript_RivalExit2:: @ 81F46EE
# 221 "data/maps/Route119/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_Movement_PlayerWatchRivalExit2
# 222 "data/maps/Route119/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route119_Movement_RivalExit2
# 223 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 224 "data/maps/Route119/scripts.pory"
	return
# 225 "data/maps/Route119/scripts.pory"

# 226 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos1:: @ 81F4700
# 227 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 25, 32
# 228 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 25, 32
# 229 "data/maps/Route119/scripts.pory"
	return
# 230 "data/maps/Route119/scripts.pory"

# 231 "data/maps/Route119/scripts.pory"
Route119_EventScript_SetRivalPos2:: @ 81F470F
# 232 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 26, 32
# 233 "data/maps/Route119/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 26, 32
# 234 "data/maps/Route119/scripts.pory"
	return
# 235 "data/maps/Route119/scripts.pory"

# 236 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit1: @ 81F471E
# 237 "data/maps/Route119/scripts.pory"
	delay_16
# 238 "data/maps/Route119/scripts.pory"
	walk_in_place_fastest_right
# 239 "data/maps/Route119/scripts.pory"
	delay_8
# 240 "data/maps/Route119/scripts.pory"
	walk_in_place_fastest_up
# 241 "data/maps/Route119/scripts.pory"
	step_end
# 242 "data/maps/Route119/scripts.pory"

# 243 "data/maps/Route119/scripts.pory"
Route119_Movement_PlayerWatchRivalExit2: @ 81F4723
# 244 "data/maps/Route119/scripts.pory"
	delay_16
# 245 "data/maps/Route119/scripts.pory"
	walk_in_place_fastest_left
# 246 "data/maps/Route119/scripts.pory"
	delay_8
# 247 "data/maps/Route119/scripts.pory"
	walk_in_place_fastest_up
# 248 "data/maps/Route119/scripts.pory"
	step_end
# 249 "data/maps/Route119/scripts.pory"

# 250 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter1: @ 81F4728
# 251 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 252 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 253 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 254 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 255 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 256 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 257 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 258 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 259 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 260 "data/maps/Route119/scripts.pory"
	step_end
# 261 "data/maps/Route119/scripts.pory"

# 262 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalEnter2: @ 81F4732
# 263 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 264 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 265 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 266 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 267 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 268 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 269 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 270 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 271 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 272 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 273 "data/maps/Route119/scripts.pory"
	step_end
# 274 "data/maps/Route119/scripts.pory"

# 275 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit1: @ 81F473D
# 276 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 277 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 278 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 279 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 280 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 281 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 282 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 283 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 284 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 285 "data/maps/Route119/scripts.pory"
	step_end
# 286 "data/maps/Route119/scripts.pory"

# 287 "data/maps/Route119/scripts.pory"
Route119_Movement_RivalExit2: @ 81F4747
# 288 "data/maps/Route119/scripts.pory"
	walk_fast_left
# 289 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 290 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 291 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 292 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 293 "data/maps/Route119/scripts.pory"
	walk_fast_right
# 294 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 295 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 296 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 297 "data/maps/Route119/scripts.pory"
	walk_fast_up
# 298 "data/maps/Route119/scripts.pory"
	step_end
# 299 "data/maps/Route119/scripts.pory"

# 300 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottEnter: @ 81F4752
# 301 "data/maps/Route119/scripts.pory"
	walk_down
# 302 "data/maps/Route119/scripts.pory"
	walk_down
# 303 "data/maps/Route119/scripts.pory"
	walk_down
# 304 "data/maps/Route119/scripts.pory"
	walk_down
# 305 "data/maps/Route119/scripts.pory"
	walk_left
# 306 "data/maps/Route119/scripts.pory"
	walk_left
# 307 "data/maps/Route119/scripts.pory"
	walk_down
# 308 "data/maps/Route119/scripts.pory"
	step_end
# 309 "data/maps/Route119/scripts.pory"

# 310 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit1: @ 81F475A
# 311 "data/maps/Route119/scripts.pory"
	walk_up
# 312 "data/maps/Route119/scripts.pory"
	walk_right
# 313 "data/maps/Route119/scripts.pory"
	walk_right
# 314 "data/maps/Route119/scripts.pory"
	walk_up
# 315 "data/maps/Route119/scripts.pory"
	walk_up
# 316 "data/maps/Route119/scripts.pory"
	walk_up
# 317 "data/maps/Route119/scripts.pory"
	walk_up
# 318 "data/maps/Route119/scripts.pory"
	walk_up
# 319 "data/maps/Route119/scripts.pory"
	step_end
# 320 "data/maps/Route119/scripts.pory"

# 321 "data/maps/Route119/scripts.pory"
Route119_Movement_ScottExit2: @ 81F4763
# 322 "data/maps/Route119/scripts.pory"
	walk_up
# 323 "data/maps/Route119/scripts.pory"
	walk_right
# 324 "data/maps/Route119/scripts.pory"
	walk_up
# 325 "data/maps/Route119/scripts.pory"
	walk_up
# 326 "data/maps/Route119/scripts.pory"
	walk_up
# 327 "data/maps/Route119/scripts.pory"
	walk_up
# 328 "data/maps/Route119/scripts.pory"
	walk_up
# 329 "data/maps/Route119/scripts.pory"
	step_end
# 330 "data/maps/Route119/scripts.pory"

# 331 "data/maps/Route119/scripts.pory"
Route119_EventScript_CyclingTriathleteM:: @ 81F476B
# 332 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TallGrassSnaresBikeTires, MSGBOX_NPC
# 333 "data/maps/Route119/scripts.pory"
	end
# 334 "data/maps/Route119/scripts.pory"

# 335 "data/maps/Route119/scripts.pory"
Route119_EventScript_RouteSignFortree:: @ 81F4774
# 336 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RouteSignFortree, MSGBOX_SIGN
# 337 "data/maps/Route119/scripts.pory"
	end
# 338 "data/maps/Route119/scripts.pory"

# 339 "data/maps/Route119/scripts.pory"
Route119_EventScript_WeatherInstituteSign:: @ 81F477D
# 340 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_WeatherInstitute, MSGBOX_SIGN
# 341 "data/maps/Route119/scripts.pory"
	end
# 342 "data/maps/Route119/scripts.pory"

# 343 "data/maps/Route119/scripts.pory"
Route119_EventScript_Brent:: @ 81F4786
# 344 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_BRENT, Route119_Text_BrentIntro, Route119_Text_BrentDefeat
# 345 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_BrentPostBattle, MSGBOX_AUTOCLOSE
# 346 "data/maps/Route119/scripts.pory"
	end
# 347 "data/maps/Route119/scripts.pory"

# 348 "data/maps/Route119/scripts.pory"
Route119_EventScript_Donald:: @ 81F479D
# 349 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DONALD, Route119_Text_DonaldIntro, Route119_Text_DonaldDefeat
# 350 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DonaldPostBattle, MSGBOX_AUTOCLOSE
# 351 "data/maps/Route119/scripts.pory"
	end
# 352 "data/maps/Route119/scripts.pory"

# 353 "data/maps/Route119/scripts.pory"
Route119_EventScript_Taylor:: @ 81F47B4
# 354 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, Route119_Text_TaylorIntro, Route119_Text_TaylorDefeat
# 355 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 356 "data/maps/Route119/scripts.pory"
	end
# 357 "data/maps/Route119/scripts.pory"

# 358 "data/maps/Route119/scripts.pory"
Route119_EventScript_Doug:: @ 81F47CB
# 359 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DOUG, Route119_Text_DougIntro, Route119_Text_DougDefeat
# 360 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 361 "data/maps/Route119/scripts.pory"
	end
# 362 "data/maps/Route119/scripts.pory"

# 363 "data/maps/Route119/scripts.pory"
Route119_EventScript_Greg:: @ 81F47E2
# 364 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_GREG, Route119_Text_GregIntro, Route119_Text_GregDefeat
# 365 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_GregPostBattle, MSGBOX_AUTOCLOSE
# 366 "data/maps/Route119/scripts.pory"
	end
# 367 "data/maps/Route119/scripts.pory"

# 368 "data/maps/Route119/scripts.pory"
Route119_EventScript_Kent:: @ 81F47F9
# 369 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_KENT, Route119_Text_KentIntro, Route119_Text_KentDefeat
# 370 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_KentPostBattle, MSGBOX_AUTOCLOSE
# 371 "data/maps/Route119/scripts.pory"
	end
# 372 "data/maps/Route119/scripts.pory"

# 373 "data/maps/Route119/scripts.pory"
Route119_EventScript_Jackson:: @ 81F4810
# 374 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_JACKSON_1, Route119_Text_JacksonIntro, Route119_Text_JacksonDefeat, Route119_EventScript_RegisterJackson
# 375 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 376 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, TRUE
# 377 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RematchJackson
# 378 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostBattle, MSGBOX_DEFAULT
# 379 "data/maps/Route119/scripts.pory"
	release
# 380 "data/maps/Route119/scripts.pory"
	end
# 381 "data/maps/Route119/scripts.pory"

# 382 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterJackson:: @ 81F483C
# 383 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 384 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 385 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonRegister, MSGBOX_DEFAULT
# 386 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_JACKSON_1
# 387 "data/maps/Route119/scripts.pory"
	release
# 388 "data/maps/Route119/scripts.pory"
	end
# 389 "data/maps/Route119/scripts.pory"

# 390 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchJackson:: @ 81F485B
# 391 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_JACKSON_1, Route119_Text_JacksonRematchIntro, Route119_Text_JacksonRematchDefeat
# 392 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_JacksonPostRematch, MSGBOX_AUTOCLOSE
# 393 "data/maps/Route119/scripts.pory"
	end
# 394 "data/maps/Route119/scripts.pory"

# 395 "data/maps/Route119/scripts.pory"
Route119_EventScript_Catherine:: @ 81F4872
# 396 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CATHERINE_1, Route119_Text_CatherineIntro, Route119_Text_CatherineDefeat, Route119_EventScript_RegisterCatherine
# 397 "data/maps/Route119/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 398 "data/maps/Route119/scripts.pory"
	compare VAR_RESULT, TRUE
# 399 "data/maps/Route119/scripts.pory"
	goto_if_eq Route119_EventScript_RematchCatherine
# 400 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostBattle, MSGBOX_DEFAULT
# 401 "data/maps/Route119/scripts.pory"
	release
# 402 "data/maps/Route119/scripts.pory"
	end
# 403 "data/maps/Route119/scripts.pory"

# 404 "data/maps/Route119/scripts.pory"
Route119_EventScript_RegisterCatherine:: @ 81F489E
# 405 "data/maps/Route119/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 406 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 407 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherineRegister, MSGBOX_DEFAULT
# 408 "data/maps/Route119/scripts.pory"
	register_matchcall TRAINER_CATHERINE_1
# 409 "data/maps/Route119/scripts.pory"
	release
# 410 "data/maps/Route119/scripts.pory"
	end
# 411 "data/maps/Route119/scripts.pory"

# 412 "data/maps/Route119/scripts.pory"
Route119_EventScript_RematchCatherine:: @ 81F48BD
# 413 "data/maps/Route119/scripts.pory"
	trainerbattle_rematch TRAINER_CATHERINE_1, Route119_Text_CatherineRematchIntro, Route119_Text_CatherineRematchDefeat
# 414 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CatherinePostRematch, MSGBOX_AUTOCLOSE
# 415 "data/maps/Route119/scripts.pory"
	end
# 416 "data/maps/Route119/scripts.pory"

# 417 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hugh:: @ 81F48D4
# 418 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HUGH, Route119_Text_HughIntro, Route119_Text_HughDefeat
# 419 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HughPostBattle, MSGBOX_AUTOCLOSE
# 420 "data/maps/Route119/scripts.pory"
	end
# 421 "data/maps/Route119/scripts.pory"

# 422 "data/maps/Route119/scripts.pory"
Route119_EventScript_Danny:: @ 81F48EB
# 423 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DANNY, Route119_Text_DannyIntro, Route119_Text_DannyDefeat
# 424 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DannyPostBattle, MSGBOX_AUTOCLOSE
# 425 "data/maps/Route119/scripts.pory"
	end
# 426 "data/maps/Route119/scripts.pory"

# 427 "data/maps/Route119/scripts.pory"
Route119_EventScript_Yasu:: @ 81F4902
# 428 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_YASU, Route119_Text_YasuIntro, Route119_Text_YasuDefeat
# 429 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_YasuPostBattle, MSGBOX_AUTOCLOSE
# 430 "data/maps/Route119/scripts.pory"
	end
# 431 "data/maps/Route119/scripts.pory"

# 432 "data/maps/Route119/scripts.pory"
Route119_EventScript_Takashi:: @ 81F4919
# 433 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_TAKASHI, Route119_Text_TakashiIntro, Route119_Text_TakashiDefeat
# 434 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 435 "data/maps/Route119/scripts.pory"
	end
# 436 "data/maps/Route119/scripts.pory"

# 437 "data/maps/Route119/scripts.pory"
Route119_EventScript_Hideo:: @ 81F4930
# 438 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_HIDEO, Route119_Text_HideoIntro, Route119_Text_HideoDefeat
# 439 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_HideoPostBattle, MSGBOX_AUTOCLOSE
# 440 "data/maps/Route119/scripts.pory"
	end
# 441 "data/maps/Route119/scripts.pory"

# 442 "data/maps/Route119/scripts.pory"
Route119_EventScript_Chris:: @ 81F4947
# 443 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_CHRIS, Route119_Text_ChrisIntro, Route119_Text_ChrisDefeat
# 444 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ChrisPostBattle, MSGBOX_AUTOCLOSE
# 445 "data/maps/Route119/scripts.pory"
	end
# 446 "data/maps/Route119/scripts.pory"

# 447 "data/maps/Route119/scripts.pory"
Route119_EventScript_Fabian:: @ 81F495E
# 448 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_FABIAN, Route119_Text_FabianIntro, Route119_Text_FabianDefeat
# 449 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_FabianPostBattle, MSGBOX_AUTOCLOSE
# 450 "data/maps/Route119/scripts.pory"
	end
# 451 "data/maps/Route119/scripts.pory"

# 452 "data/maps/Route119/scripts.pory"
Route119_EventScript_Dayton:: @ 81F4975
# 453 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_DAYTON, Route119_Text_DaytonIntro, Route119_Text_DaytonDefeat
# 454 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DaytonPostBattle, MSGBOX_AUTOCLOSE
# 455 "data/maps/Route119/scripts.pory"
	end
# 456 "data/maps/Route119/scripts.pory"

# 457 "data/maps/Route119/scripts.pory"
Route119_EventScript_Rachel:: @ 81F498C
# 458 "data/maps/Route119/scripts.pory"
	trainerbattle_single TRAINER_RACHEL, Route119_Text_RachelIntro, Route119_Text_RachelDefeat
# 459 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_RachelPostBattle, MSGBOX_AUTOCLOSE
# 460 "data/maps/Route119/scripts.pory"
	end
# 461 "data/maps/Route119/scripts.pory"

# 462 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt1:: @ 81F49A3
# 463 "data/maps/Route119/scripts.pory"
	lock
# 464 "data/maps/Route119/scripts.pory"
	faceplayer
# 465 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_StayAwayFromWeatherInstitute, MSGBOX_DEFAULT
# 466 "data/maps/Route119/scripts.pory"
	closemessage
# 467 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 468 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 469 "data/maps/Route119/scripts.pory"
	release
# 470 "data/maps/Route119/scripts.pory"
	end
# 471 "data/maps/Route119/scripts.pory"

# 472 "data/maps/Route119/scripts.pory"
Route119_EventScript_BridgeAquaGrunt2:: @ 81F49BA
# 473 "data/maps/Route119/scripts.pory"
	lock
# 474 "data/maps/Route119/scripts.pory"
	faceplayer
# 475 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_DontGoNearWeatherInstitute, MSGBOX_DEFAULT
# 476 "data/maps/Route119/scripts.pory"
	closemessage
# 477 "data/maps/Route119/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 478 "data/maps/Route119/scripts.pory"
	waitmovement 0
# 479 "data/maps/Route119/scripts.pory"
	release
# 480 "data/maps/Route119/scripts.pory"
	end
# 481 "data/maps/Route119/scripts.pory"

# 482 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy1:: @ 81F49D1
# 483 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_ThoughtFlyByCatchingBirdMons, MSGBOX_NPC
# 484 "data/maps/Route119/scripts.pory"
	end
# 485 "data/maps/Route119/scripts.pory"

# 486 "data/maps/Route119/scripts.pory"
Route119_EventScript_Boy2:: @ 81F49DA
# 487 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_CanYourMonMakeSecretBase, MSGBOX_NPC
# 488 "data/maps/Route119/scripts.pory"
	end
# 489 "data/maps/Route119/scripts.pory"

# 490 "data/maps/Route119/scripts.pory"
Route119_EventScript_TrainerTipsDecoration:: @ 81F49E3
# 491 "data/maps/Route119/scripts.pory"
	msgbox Route119_Text_TrainerTipsDecoration, MSGBOX_SIGN
# 492 "data/maps/Route119/scripts.pory"
	end
# 493 "data/maps/Route119/scripts.pory"

# 494 "data/maps/Route119/scripts.pory"
Route119_EventScript_ScottWonAtFortreeGymCall:: @ 81F49EC
# 495 "data/maps/Route119/scripts.pory"
	lockall
# 496 "data/maps/Route119/scripts.pory"
	pokenavcall Route119_Text_ScottYouWonAtFortreeGym
# 497 "data/maps/Route119/scripts.pory"
	waitmessage
# 498 "data/maps/Route119/scripts.pory"
	clearflag FLAG_GYM_ATTENDANT_CALL
# 499 "data/maps/Route119/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 500 "data/maps/Route119/scripts.pory"
	releaseall
# 501 "data/maps/Route119/scripts.pory"
	end
# 502 "data/maps/Route119/scripts.pory"

# 503 "data/maps/Route119/scripts.pory"
Route119_Text_MayIntro: @ 81F49FD
# 504 "data/maps/Route119/scripts.pory"
	.string "May: {PLAYER}{KUN}!\n"
# 505 "data/maps/Route119/scripts.pory"
	.string "Where were you? I was looking for you!\p"
# 506 "data/maps/Route119/scripts.pory"
	.string "How much stronger have you gotten?\n"
# 507 "data/maps/Route119/scripts.pory"
	.string "Let me check for you!\p"
# 508 "data/maps/Route119/scripts.pory"
	.string "Ready with your Pokémon?\n"
# 509 "data/maps/Route119/scripts.pory"
	.string "Of course you are! Go!$"
# 510 "data/maps/Route119/scripts.pory"

# 511 "data/maps/Route119/scripts.pory"
Route119_Text_MayDefeat: @ 81F4A98
# 512 "data/maps/Route119/scripts.pory"
	.string "Achah!\n"
# 513 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}, you're strong!\p"
# 514 "data/maps/Route119/scripts.pory"
	.string "I was worried that you might be\n"
# 515 "data/maps/Route119/scripts.pory"
	.string "struggling with your training.$"
# 516 "data/maps/Route119/scripts.pory"

# 517 "data/maps/Route119/scripts.pory"
Route119_Text_MayPresentForYou: @ 81F4AF3
# 518 "data/maps/Route119/scripts.pory"
	.string "May: But I had absolutely nothing to\n"
# 519 "data/maps/Route119/scripts.pory"
	.string "worry about! Keep it up!\p"
# 520 "data/maps/Route119/scripts.pory"
	.string "And, here! I have a present for you.$"
# 521 "data/maps/Route119/scripts.pory"

# 522 "data/maps/Route119/scripts.pory"
Route119_Text_MayExplainFly: @ 81F4B56
# 523 "data/maps/Route119/scripts.pory"
	.string "May: Use Fly, and your Pokémon will\n"
# 524 "data/maps/Route119/scripts.pory"
	.string "instantly carry you to any town you've\l"
# 525 "data/maps/Route119/scripts.pory"
	.string "already visited.\p"
# 526 "data/maps/Route119/scripts.pory"
	.string "But, to use Fly, you have to get\n"
# 527 "data/maps/Route119/scripts.pory"
	.string "the Gym Badge from Fortree City.\l"
# 528 "data/maps/Route119/scripts.pory"
	.string "That's important, so don't forget.\p"
# 529 "data/maps/Route119/scripts.pory"
	.string "You should Fly home and visit\n"
# 530 "data/maps/Route119/scripts.pory"
	.string "Littleroot for a change.\p"
# 531 "data/maps/Route119/scripts.pory"
	.string "I bet your mom's worried about you,\n"
# 532 "data/maps/Route119/scripts.pory"
	.string "{PLAYER}{KUN}.\p"
# 533 "data/maps/Route119/scripts.pory"
	.string "Well, let's meet again somewhere!$"
# 534 "data/maps/Route119/scripts.pory"

# 535 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIntro: @ 81F4C9A
# 536 "data/maps/Route119/scripts.pory"
	.string "Brendan: {PLAYER}! So this is where\n"
# 537 "data/maps/Route119/scripts.pory"
	.string "you've been looking for Pokémon?\p"
# 538 "data/maps/Route119/scripts.pory"
	.string "Let me see how good you got.\n"
# 539 "data/maps/Route119/scripts.pory"
	.string "I'll test you!\p"
# 540 "data/maps/Route119/scripts.pory"
	.string "Now!\n"
# 541 "data/maps/Route119/scripts.pory"
	.string "It's a battle, so battle!$"
# 542 "data/maps/Route119/scripts.pory"

# 543 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanDefeat: @ 81F4D24
# 544 "data/maps/Route119/scripts.pory"
	.string "Hmm…\n"
# 545 "data/maps/Route119/scripts.pory"
	.string "You've gotten pretty darn decent.$"
# 546 "data/maps/Route119/scripts.pory"

# 547 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanIllGiveYouThis: @ 81F4D4B
# 548 "data/maps/Route119/scripts.pory"
	.string "Brendan: I'd say you're good enough\n"
# 549 "data/maps/Route119/scripts.pory"
	.string "to search for Pokémon anywhere.\p"
# 550 "data/maps/Route119/scripts.pory"
	.string "Here, I'll give you this.\n"
# 551 "data/maps/Route119/scripts.pory"
	.string "Try it out.$"
# 552 "data/maps/Route119/scripts.pory"

# 553 "data/maps/Route119/scripts.pory"
Route119_Text_BrendanExplainFly: @ 81F4DB5
# 554 "data/maps/Route119/scripts.pory"
	.string "Brendan: Use Fly, and your Pokémon\n"
# 555 "data/maps/Route119/scripts.pory"
	.string "instantly carries you to any town\l"
# 556 "data/maps/Route119/scripts.pory"
	.string "you've already visited.\p"
# 557 "data/maps/Route119/scripts.pory"
	.string "But you need the Fortree Gym Badge \n"
# 558 "data/maps/Route119/scripts.pory"
	.string "to do that.\p"
# 559 "data/maps/Route119/scripts.pory"
	.string "Anyway, I have to move along.$"
# 560 "data/maps/Route119/scripts.pory"

# 561 "data/maps/Route119/scripts.pory"
Route119_Text_ScottWayToGoBeSeeingYou: @ 81F4E60
# 562 "data/maps/Route119/scripts.pory"
	.string "Scott: Hahahah!\n"
# 563 "data/maps/Route119/scripts.pory"
	.string "Way to go, {PLAYER}{KUN}!\p"
# 564 "data/maps/Route119/scripts.pory"
	.string "I just passed by a Trainer riding\n"
# 565 "data/maps/Route119/scripts.pory"
	.string "a Bike.\p"
# 566 "data/maps/Route119/scripts.pory"
	.string "You just beat that Trainer, didn't you?\n"
# 567 "data/maps/Route119/scripts.pory"
	.string "It was pretty obvious that you did.\p"
# 568 "data/maps/Route119/scripts.pory"
	.string "The kid looked really upset with\n"
# 569 "data/maps/Route119/scripts.pory"
	.string "a face all red from anger.\p"
# 570 "data/maps/Route119/scripts.pory"
	.string "I sure seem to run into you often.\n"
# 571 "data/maps/Route119/scripts.pory"
	.string "Are you off to Fortree Gym next?\p"
# 572 "data/maps/Route119/scripts.pory"
	.string "I expect that you'll do well at the Gym.\n"
# 573 "data/maps/Route119/scripts.pory"
	.string "Well, I'll be seeing you!$"
# 574 "data/maps/Route119/scripts.pory"

# 575 "data/maps/Route119/scripts.pory"

# 576 "data/maps/Route119/scripts.pory"
Route119_Text_ScottYouWonAtFortreeGym: @ 81F4FBA
# 577 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 578 "data/maps/Route119/scripts.pory"
	.string "… … … … … Beep!\p"
# 579 "data/maps/Route119/scripts.pory"
	.string "Scott: Hiya, {PLAYER}{KUN}, it's me!\p"
# 580 "data/maps/Route119/scripts.pory"
	.string "Just as I thought, you won at\n"
# 581 "data/maps/Route119/scripts.pory"
	.string "the Fortree Gym.\p"
# 582 "data/maps/Route119/scripts.pory"
	.string "Your strength…\n"
# 583 "data/maps/Route119/scripts.pory"
	.string "Perhaps you really are the Trainer\l"
# 584 "data/maps/Route119/scripts.pory"
	.string "that I've been searching for.\p"
# 585 "data/maps/Route119/scripts.pory"
	.string "Remember, you have a fan in me.\n"
# 586 "data/maps/Route119/scripts.pory"
	.string "I'll be cheering from the sidelines.\l"
# 587 "data/maps/Route119/scripts.pory"
	.string "Keep up the great work!\p"
# 588 "data/maps/Route119/scripts.pory"
	.string "… … … … … …\n"
# 589 "data/maps/Route119/scripts.pory"
	.string "… … … … … Click!$"
# 590 "data/maps/Route119/scripts.pory"

# 591 "data/maps/Route119/scripts.pory"
Route119_Text_StayAwayFromWeatherInstitute: @ 81F50EB
# 592 "data/maps/Route119/scripts.pory"
	.string "We're standing lookout here.\p"
# 593 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Stay away from the Weather\n"
# 594 "data/maps/Route119/scripts.pory"
	.string "Institute. It's not safe.$"
# 595 "data/maps/Route119/scripts.pory"

# 596 "data/maps/Route119/scripts.pory"
Route119_Text_DontGoNearWeatherInstitute: @ 81F5147
# 597 "data/maps/Route119/scripts.pory"
	.string "Lookout duty is surprisingly boring.\p"
# 598 "data/maps/Route119/scripts.pory"
	.string "Hey, you! Please don't go near the\n"
# 599 "data/maps/Route119/scripts.pory"
	.string "Weather Institute.$"
# 600 "data/maps/Route119/scripts.pory"

# 601 "data/maps/Route119/scripts.pory"
Route119_Text_ThoughtFlyByCatchingBirdMons: @ 81F51A2
# 602 "data/maps/Route119/scripts.pory"
	.string "I thought you Fly by catching a whole\n"
# 603 "data/maps/Route119/scripts.pory"
	.string "flock of Bird Pokémon, and then\l"
# 604 "data/maps/Route119/scripts.pory"
	.string "hanging on to them somehow.\p"
# 605 "data/maps/Route119/scripts.pory"
	.string "But it turns out there's an HM move\n"
# 606 "data/maps/Route119/scripts.pory"
	.string "called Fly!\p"
# 607 "data/maps/Route119/scripts.pory"
	.string "I wish I'd known about that a long\n"
# 608 "data/maps/Route119/scripts.pory"
	.string "time ago…$"
# 609 "data/maps/Route119/scripts.pory"

# 610 "data/maps/Route119/scripts.pory"
Route119_Text_TallGrassSnaresBikeTires: @ 81F5261
# 611 "data/maps/Route119/scripts.pory"
	.string "Tch…\n"
# 612 "data/maps/Route119/scripts.pory"
	.string "It's a no-go…\p"
# 613 "data/maps/Route119/scripts.pory"
	.string "The tall grass snares Bike tires.\n"
# 614 "data/maps/Route119/scripts.pory"
	.string "There's no way you can cycle here.$"
# 615 "data/maps/Route119/scripts.pory"

# 616 "data/maps/Route119/scripts.pory"
Route119_Text_CanYourMonMakeSecretBase: @ 81F52B9
# 617 "data/maps/Route119/scripts.pory"
	.string "Can your Pokémon use its Secret Power\n"
# 618 "data/maps/Route119/scripts.pory"
	.string "on a big pile of grass and make a\l"
# 619 "data/maps/Route119/scripts.pory"
	.string "Secret Base?$"
# 620 "data/maps/Route119/scripts.pory"

# 621 "data/maps/Route119/scripts.pory"
Route119_Text_RouteSignFortree: @ 81F530E
# 622 "data/maps/Route119/scripts.pory"
	.string "Route 119\n"
# 623 "data/maps/Route119/scripts.pory"
	.string "{RIGHT_ARROW} Fortree City$"
# 624 "data/maps/Route119/scripts.pory"

# 625 "data/maps/Route119/scripts.pory"
Route119_Text_WeatherInstitute: @ 81F5327
# 626 "data/maps/Route119/scripts.pory"
	.string "Weather Institute$"
# 627 "data/maps/Route119/scripts.pory"

# 628 "data/maps/Route119/scripts.pory"
Route119_Text_TrainerTipsDecoration: @ 81F5339
# 629 "data/maps/Route119/scripts.pory"
	.string "Trainer Tips\p"
# 630 "data/maps/Route119/scripts.pory"
	.string "Up to sixteen decorations and\n"
# 631 "data/maps/Route119/scripts.pory"
	.string "furniture items can be placed in\l"
# 632 "data/maps/Route119/scripts.pory"
	.string "a Secret Base.\p"
# 633 "data/maps/Route119/scripts.pory"
	.string "Pick your favorite items and create\n"
# 634 "data/maps/Route119/scripts.pory"
	.string "your very own Secret Base exactly the\l"
# 635 "data/maps/Route119/scripts.pory"
	.string "way you want.$"
