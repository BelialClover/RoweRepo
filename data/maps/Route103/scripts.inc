# 1 "data/maps/Route103/scripts.pory"

# 2 "data/maps/Route103/scripts.pory"
.set LOCALID_RIVAL, 2
# 3 "data/maps/Route103/scripts.pory"

# 4 "data/maps/Route103/scripts.pory"
Route103_MapScripts:: @ 81EC38E
# 5 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 6 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 7 "data/maps/Route103/scripts.pory"
	.byte 0
# 8 "data/maps/Route103/scripts.pory"

# 9 "data/maps/Route103/scripts.pory"
Route103_OnTransition: @ 81EC399
# 10 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 11 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 12 "data/maps/Route103/scripts.pory"
	end
# 13 "data/maps/Route103/scripts.pory"

# 14 "data/maps/Route103/scripts.pory"
Route103_OnLoad: @ 81EC3A4
# 15 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 16 "data/maps/Route103/scripts.pory"
	end
# 17 "data/maps/Route103/scripts.pory"

# 18 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave:: @ 81EC3AE
# 19 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, 1
# 20 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, 0
# 21 "data/maps/Route103/scripts.pory"
	return
# 22 "data/maps/Route103/scripts.pory"

# 23 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival:: @ 81EC3C1
# 24 "data/maps/Route103/scripts.pory"
	lockall
# 25 "data/maps/Route103/scripts.pory"
	checkplayergender
# 26 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, MALE
# 27 "data/maps/Route103/scripts.pory"
	goto_if_eq Route103_EventScript_RivalMay
# 28 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, FEMALE
# 29 "data/maps/Route103/scripts.pory"
	goto_if_eq Route103_EventScript_RivalBrendan
# 30 "data/maps/Route103/scripts.pory"
	end
# 31 "data/maps/Route103/scripts.pory"

# 32 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay:: @ 81EC3DA
# 33 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 34 "data/maps/Route103/scripts.pory"
	closemessage
# 35 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
# 36 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 37 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 38 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 39 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 40 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 41 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 43 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 44 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartMayBattleTreecko
# 45 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartMayBattleTorchic
# 46 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartMayBattleMudkip
# 47 "data/maps/Route103/scripts.pory"
	end
# 48 "data/maps/Route103/scripts.pory"

# 49 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan:: @ 81EC434
# 50 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 51 "data/maps/Route103/scripts.pory"
	closemessage
# 52 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
# 53 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 54 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 55 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 56 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 58 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 59 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 60 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 61 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartBrendanBattleTreecko
# 62 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartBrendanBattleTorchic
# 63 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartBrendanBattleMudkip
# 64 "data/maps/Route103/scripts.pory"
	end
# 65 "data/maps/Route103/scripts.pory"

# 66 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko:: @ 81EC48E
# 67 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 68 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 69 "data/maps/Route103/scripts.pory"
	end
# 70 "data/maps/Route103/scripts.pory"

# 71 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTorchic:: @ 81EC49E
# 72 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
# 73 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 74 "data/maps/Route103/scripts.pory"
	end
# 75 "data/maps/Route103/scripts.pory"

# 76 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleMudkip:: @ 81EC4AE
# 77 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
# 78 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 79 "data/maps/Route103/scripts.pory"
	end
# 80 "data/maps/Route103/scripts.pory"

# 81 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko:: @ 81EC4BE
# 82 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 83 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 84 "data/maps/Route103/scripts.pory"
	end
# 85 "data/maps/Route103/scripts.pory"

# 86 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTorchic:: @ 81EC4CE
# 87 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
# 88 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 89 "data/maps/Route103/scripts.pory"
	end
# 90 "data/maps/Route103/scripts.pory"

# 91 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleMudkip:: @ 81EC4DE
# 92 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
# 93 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 94 "data/maps/Route103/scripts.pory"
	end
# 95 "data/maps/Route103/scripts.pory"

# 96 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterMayBattle:: @ 81EC4EE
# 97 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 98 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 99 "data/maps/Route103/scripts.pory"
	end
# 100 "data/maps/Route103/scripts.pory"

# 101 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrendanBattle:: @ 81EC4FC
# 102 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 103 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 104 "data/maps/Route103/scripts.pory"
	end
# 105 "data/maps/Route103/scripts.pory"

# 106 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit:: @ 81EC50A
# 107 "data/maps/Route103/scripts.pory"
	closemessage
# 108 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 109 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 110 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 111 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 112 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 113 "data/maps/Route103/scripts.pory"
	end
# 114 "data/maps/Route103/scripts.pory"

# 115 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth:: @ 81EC53D
# 116 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 117 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 118 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 119 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 120 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_EventScript_RivalExitFacingNorth2
# 121 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 122 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 123 "data/maps/Route103/scripts.pory"
	end
# 124 "data/maps/Route103/scripts.pory"

# 125 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest:: @ 81EC561
# 126 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 127 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 128 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 129 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 130 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 131 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 133 "data/maps/Route103/scripts.pory"
	end
# 134 "data/maps/Route103/scripts.pory"

# 135 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth:: @ 81EC585
# 136 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 137 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 138 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 139 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 140 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 141 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 142 "data/maps/Route103/scripts.pory"
	end
# 143 "data/maps/Route103/scripts.pory"

# 144 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd:: @ 81EC5A2
# 145 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_RIVAL
# 146 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 147 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 148 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 149 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 150 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 151 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 152 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 153 "data/maps/Route103/scripts.pory"
	releaseall
# 154 "data/maps/Route103/scripts.pory"
	end
# 155 "data/maps/Route103/scripts.pory"

# 156 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1: @ 81EC5BE
# 157 "data/maps/Route103/scripts.pory"
	walk_left
# 158 "data/maps/Route103/scripts.pory"
	walk_down
# 159 "data/maps/Route103/scripts.pory"
	step_end
# 160 "data/maps/Route103/scripts.pory"

# 161 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth2: @ 81EC5C1
# 162 "data/maps/Route103/scripts.pory"
	jump_2_down
# 163 "data/maps/Route103/scripts.pory"
	delay_16
# 164 "data/maps/Route103/scripts.pory"
	walk_down
# 165 "data/maps/Route103/scripts.pory"
	walk_down
# 166 "data/maps/Route103/scripts.pory"
	walk_down
# 167 "data/maps/Route103/scripts.pory"
	walk_down
# 168 "data/maps/Route103/scripts.pory"
	step_end
# 169 "data/maps/Route103/scripts.pory"

# 170 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth: @ 81EC5C8
# 171 "data/maps/Route103/scripts.pory"
	delay_16
# 172 "data/maps/Route103/scripts.pory"
	delay_4
# 173 "data/maps/Route103/scripts.pory"
	walk_in_place_fastest_left
# 174 "data/maps/Route103/scripts.pory"
	delay_16
# 175 "data/maps/Route103/scripts.pory"
	walk_in_place_fastest_down
# 176 "data/maps/Route103/scripts.pory"
	step_end
# 177 "data/maps/Route103/scripts.pory"

# 178 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1: @ 81EC5CE
# 179 "data/maps/Route103/scripts.pory"
	walk_down
# 180 "data/maps/Route103/scripts.pory"
	step_end
# 181 "data/maps/Route103/scripts.pory"

# 182 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2: @ 81EC5D0
# 183 "data/maps/Route103/scripts.pory"
	jump_2_down
# 184 "data/maps/Route103/scripts.pory"
	delay_16
# 185 "data/maps/Route103/scripts.pory"
	walk_down
# 186 "data/maps/Route103/scripts.pory"
	walk_down
# 187 "data/maps/Route103/scripts.pory"
	walk_down
# 188 "data/maps/Route103/scripts.pory"
	step_end
# 189 "data/maps/Route103/scripts.pory"

# 190 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest: @ 81EC5D6
# 191 "data/maps/Route103/scripts.pory"
	delay_16
# 192 "data/maps/Route103/scripts.pory"
	walk_in_place_fastest_down
# 193 "data/maps/Route103/scripts.pory"
	step_end
# 194 "data/maps/Route103/scripts.pory"

# 195 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy:: @ 81EC5D9
# 196 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 197 "data/maps/Route103/scripts.pory"
	end
# 198 "data/maps/Route103/scripts.pory"

# 199 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man:: @ 81EC5E2
# 200 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 201 "data/maps/Route103/scripts.pory"
	end
# 202 "data/maps/Route103/scripts.pory"

# 203 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign:: @ 81EC5EB
# 204 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 205 "data/maps/Route103/scripts.pory"
	end
# 206 "data/maps/Route103/scripts.pory"

# 207 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy:: @ 81EC5F4
# 208 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 209 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 210 "data/maps/Route103/scripts.pory"
	end
# 211 "data/maps/Route103/scripts.pory"

# 212 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy:: @ 81EC60B
# 213 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 214 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 215 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
# 216 "data/maps/Route103/scripts.pory"
	goto_if_eq Route102_EventScript_AmyRematch
# 217 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route103/scripts.pory"
	end
# 219 "data/maps/Route103/scripts.pory"

# 220 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle:: @ 81EC63A
# 221 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 222 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 223 "data/maps/Route103/scripts.pory"
	release
# 224 "data/maps/Route103/scripts.pory"
	end
# 225 "data/maps/Route103/scripts.pory"

# 226 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch:: @ 81EC653
# 227 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 228 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 229 "data/maps/Route103/scripts.pory"
	end
# 230 "data/maps/Route103/scripts.pory"

# 231 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv:: @ 81EC66E
# 232 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 233 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 234 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
# 235 "data/maps/Route103/scripts.pory"
	goto_if_eq Route102_EventScript_LivRematch
# 236 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 237 "data/maps/Route103/scripts.pory"
	end
# 238 "data/maps/Route103/scripts.pory"

# 239 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle:: @ 81EC69D
# 240 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 241 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 242 "data/maps/Route103/scripts.pory"
	release
# 243 "data/maps/Route103/scripts.pory"
	end
# 244 "data/maps/Route103/scripts.pory"

# 245 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch:: @ 81EC6B6
# 246 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 247 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 248 "data/maps/Route103/scripts.pory"
	end
# 249 "data/maps/Route103/scripts.pory"

# 250 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew:: @ 81EC6D1
# 251 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 252 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 253 "data/maps/Route103/scripts.pory"
	end
# 254 "data/maps/Route103/scripts.pory"

# 255 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel:: @ 81EC6E8
# 256 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 257 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 258 "data/maps/Route103/scripts.pory"
	compare VAR_RESULT, TRUE
# 259 "data/maps/Route103/scripts.pory"
	goto_if_eq Route103_EventScript_MiguelRematch
# 260 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 261 "data/maps/Route103/scripts.pory"
	release
# 262 "data/maps/Route103/scripts.pory"
	end
# 263 "data/maps/Route103/scripts.pory"

# 264 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle:: @ 81EC714
# 265 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 266 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 267 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 268 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 269 "data/maps/Route103/scripts.pory"
	release
# 270 "data/maps/Route103/scripts.pory"
	end
# 271 "data/maps/Route103/scripts.pory"

# 272 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch:: @ 81EC733
# 273 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 274 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 275 "data/maps/Route103/scripts.pory"
	end
# 276 "data/maps/Route103/scripts.pory"

# 277 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos:: @ 81EC74A
# 278 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 279 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 280 "data/maps/Route103/scripts.pory"
	end
# 281 "data/maps/Route103/scripts.pory"

# 282 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett:: @ 81EC761
# 283 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 284 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 285 "data/maps/Route103/scripts.pory"
	end
# 286 "data/maps/Route103/scripts.pory"

# 287 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete:: @ 81EC778
# 288 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 289 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 290 "data/maps/Route103/scripts.pory"
	end
# 291 "data/maps/Route103/scripts.pory"

# 292 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle:: @ 81EC78F
# 293 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 294 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 295 "data/maps/Route103/scripts.pory"
	end
# 296 "data/maps/Route103/scripts.pory"

# 297 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon: @ 81EC7A6
# 298 "data/maps/Route103/scripts.pory"
	.string "May: Let's see… The Pokémon found\n"
# 299 "data/maps/Route103/scripts.pory"
	.string "on Route 103 include…$"
# 300 "data/maps/Route103/scripts.pory"

# 301 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle: @ 81EC7DE
# 302 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 303 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 304 "data/maps/Route103/scripts.pory"
	.string "a Pokémon as a gift.\p"
# 305 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 306 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 307 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 308 "data/maps/Route103/scripts.pory"
	.string "a Trainer is like.$"
# 309 "data/maps/Route103/scripts.pory"

# 310 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated: @ 81EC881
# 311 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 312 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 313 "data/maps/Route103/scripts.pory"

# 314 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack: @ 81EC8AE
# 315 "data/maps/Route103/scripts.pory"
	.string "May: I think I know why my dad has\n"
# 316 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 317 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that Pokémon,\n"
# 318 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 319 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 320 "data/maps/Route103/scripts.pory"
	.string "kind of Pokémon easily.\p"
# 321 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 322 "data/maps/Route103/scripts.pory"
	.string "the Lab.$"
# 323 "data/maps/Route103/scripts.pory"

# 324 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon: @ 81EC989
# 325 "data/maps/Route103/scripts.pory"
	.string "Brendan: Okay, so it's this one and\n"
# 326 "data/maps/Route103/scripts.pory"
	.string "that one that live on Route 103…$"
# 327 "data/maps/Route103/scripts.pory"

# 328 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle: @ 81EC9CE
# 329 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 330 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a Pokémon.\p"
# 331 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 332 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 333 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a Trainer's\n"
# 334 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 335 "data/maps/Route103/scripts.pory"

# 336 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated: @ 81ECA59
# 337 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 338 "data/maps/Route103/scripts.pory"

# 339 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack: @ 81ECA79
# 340 "data/maps/Route103/scripts.pory"
	.string "Brendan: I think I get it.\n"
# 341 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 342 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 343 "data/maps/Route103/scripts.pory"
	.string "Look, your Pokémon already likes you,\n"
# 344 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 345 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 346 "data/maps/Route103/scripts.pory"
	.string "could befriend any Pokémon with ease.\p"
# 347 "data/maps/Route103/scripts.pory"
	.string "We should head back to the Lab.$"
# 348 "data/maps/Route103/scripts.pory"

# 349 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion: @ 81ECB73
# 350 "data/maps/Route103/scripts.pory"
	.string "My Pokémon is staggeringly tired…\n"
# 351 "data/maps/Route103/scripts.pory"
	.string "I should have brought a Potion…$"
# 352 "data/maps/Route103/scripts.pory"

# 353 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale: @ 81ECBB5
# 354 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 355 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to Oldale Town.\p"
# 356 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 357 "data/maps/Route103/scripts.pory"

# 358 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign: @ 81ECC1A
# 359 "data/maps/Route103/scripts.pory"
	.string "Route 103\n"
# 360 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} Oldale Town$"
