# 1 "data/maps/Route104/scripts.pory"

# 2 "data/maps/Route104/scripts.pory"
.set LOCALID_SUDOWOODO, 34
# 3 "data/maps/Route104/scripts.pory"

# 4 "data/maps/Route104/scripts.pory"
Route104_MapScripts:: @ 81ECC32
# 5 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route104_OnFrame
# 6 "data/maps/Route104/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_OnTransition
# 7 "data/maps/Route104/scripts.pory"
	.byte 0
# 8 "data/maps/Route104/scripts.pory"

# 9 "data/maps/Route104/scripts.pory"
Route104_OnFrame: @ 81ECC3D
# 10 "data/maps/Route104/scripts.pory"
	map_script_2 VAR_BOARD_BRINEY_BOAT_STATE, 1, Route104_EventScript_StartSailToDewford
# 11 "data/maps/Route104/scripts.pory"
	.2byte 0
# 12 "data/maps/Route104/scripts.pory"

# 13 "data/maps/Route104/scripts.pory"
Route104_EventScript_StartSailToDewford:: @ 81ECC47
# 14 "data/maps/Route104/scripts.pory"
	lockall
# 15 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_SailToDewford
# 16 "data/maps/Route104/scripts.pory"
	end
# 17 "data/maps/Route104/scripts.pory"

# 18 "data/maps/Route104/scripts.pory"
Route104_OnTransition: @ 81ECC4E
# 19 "data/maps/Route104/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 20 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_TrySetRivalPos
# 21 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_ShowOrHideWhiteHerbFlorist
# 22 "data/maps/Route104/scripts.pory"
	call EventScript_SetSudowoodoFamilyGfx
# 23 "data/maps/Route104/scripts.pory"
	end
# 24 "data/maps/Route104/scripts.pory"

# 25 "data/maps/Route104/scripts.pory"
Route104_EventScript_ShowOrHideWhiteHerbFlorist:: @ 81ECC5E
# 26 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_EventScript_HideWhiteHerbFlorist
# 27 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_EventScript_HideWhiteHerbFlorist
# 28 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 29 "data/maps/Route104/scripts.pory"
	return
# 30 "data/maps/Route104/scripts.pory"

# 31 "data/maps/Route104/scripts.pory"
Route104_EventScript_HideWhiteHerbFlorist:: @ 81ECC74
# 32 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
# 33 "data/maps/Route104/scripts.pory"
	return
# 34 "data/maps/Route104/scripts.pory"

# 35 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrySetRivalPos:: @ 81ECC78
# 36 "data/maps/Route104/scripts.pory"
	compare VAR_BOARD_BRINEY_BOAT_STATE, 1
# 37 "data/maps/Route104/scripts.pory"
	goto_if_ge Route104_EventScript_DontSetRivalPos
# 38 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, Route104_EventScript_DontSetRivalPos
# 39 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_DontSetRivalPos
# 40 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 17, 52
# 41 "data/maps/Route104/scripts.pory"
	return
# 42 "data/maps/Route104/scripts.pory"

# 43 "data/maps/Route104/scripts.pory"
Route104_EventScript_DontSetRivalPos:: @ 81ECC9D
# 44 "data/maps/Route104/scripts.pory"
	return
# 45 "data/maps/Route104/scripts.pory"

# 46 "data/maps/Route104/scripts.pory"
Route104_EventScript_Rival:: @ 81ECC9E
# 47 "data/maps/Route104/scripts.pory"
	lockall
# 48 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 1
# 49 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 50 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 51 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 52 "data/maps/Route104/scripts.pory"

# 53 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalTrigger:: @ 81ECCB3
# 54 "data/maps/Route104/scripts.pory"
	lockall
# 55 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 56 "data/maps/Route104/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 57 "data/maps/Route104/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 58 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 59 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 60 "data/maps/Route104/scripts.pory"
	delay 10
# 61 "data/maps/Route104/scripts.pory"
	addobject LOCALID_RIVAL
# 62 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_RIVAL
# 63 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBackUp
# 64 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalExitBrineysCottage
# 66 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 67 "data/maps/Route104/scripts.pory"
	delay 20
# 68 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8008, 0
# 69 "data/maps/Route104/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 70 "data/maps/Route104/scripts.pory"
	playse SE_PIN
# 71 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 72 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 74 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_RivalEncounter
# 76 "data/maps/Route104/scripts.pory"

# 77 "data/maps/Route104/scripts.pory"
@ Unused, shares script with Rustboro encounter instead
# 78 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayRivalMusic:: @ 81ECD11
# 79 "data/maps/Route104/scripts.pory"
	checkplayergender
# 80 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, MALE
# 81 "data/maps/Route104/scripts.pory"
	goto_if_eq Route104_EventScript_PlayMayMusic
# 82 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FEMALE
# 83 "data/maps/Route104/scripts.pory"
	goto_if_eq Route104_EventScript_PlayBrendanMusic
# 84 "data/maps/Route104/scripts.pory"
	return
# 85 "data/maps/Route104/scripts.pory"

# 86 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayMayMusic:: @ 81ECD29
# 87 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
# 88 "data/maps/Route104/scripts.pory"
	return
# 89 "data/maps/Route104/scripts.pory"

# 90 "data/maps/Route104/scripts.pory"
Route104_EventScript_PlayBrendanMusic:: @ 81ECD2E
# 91 "data/maps/Route104/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
# 92 "data/maps/Route104/scripts.pory"
	return
# 93 "data/maps/Route104/scripts.pory"

# 94 "data/maps/Route104/scripts.pory"
Route104_EventScript_RivalEncounter:: @ 81ECD33
# 95 "data/maps/Route104/scripts.pory"
	checkplayergender
# 96 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, MALE
# 97 "data/maps/Route104/scripts.pory"
	goto_if_eq Route104_EventScript_MayEncounter
# 98 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FEMALE
# 99 "data/maps/Route104/scripts.pory"
	goto_if_eq Route104_EventScript_BrendanEncounter
# 100 "data/maps/Route104/scripts.pory"
	end
# 101 "data/maps/Route104/scripts.pory"

# 102 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayEncounter:: @ 81ECD4B
# 103 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_MayDefeated
# 104 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_MayAskToBattle
# 105 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 106 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayWeShouldRegister, MSGBOX_DEFAULT
# 107 "data/maps/Route104/scripts.pory"
	closemessage
# 108 "data/maps/Route104/scripts.pory"
	delay 30
# 109 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 110 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredMay, MSGBOX_DEFAULT
# 111 "data/maps/Route104/scripts.pory"
	waitfanfare
# 112 "data/maps/Route104/scripts.pory"
	closemessage
# 113 "data/maps/Route104/scripts.pory"
	delay 30
# 114 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 115 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 116 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 117 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHowsYourPokedex, MSGBOX_DEFAULT
# 118 "data/maps/Route104/scripts.pory"
	closemessage
# 119 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 121 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 122 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 123 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayMinesDecentLetsBattle, MSGBOX_YESNO
# 124 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
# 125 "data/maps/Route104/scripts.pory"
	goto_if_eq Route104_EventScript_BattleMay
# 126 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 127 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 128 "data/maps/Route104/scripts.pory"
	releaseall
# 129 "data/maps/Route104/scripts.pory"
	end
# 130 "data/maps/Route104/scripts.pory"

# 131 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalWalkSlowLeft: @ 81ECDC8
# 132 "data/maps/Route104/scripts.pory"
	walk_slow_left
# 133 "data/maps/Route104/scripts.pory"
	step_end
# 134 "data/maps/Route104/scripts.pory"

# 135 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalApproachPlayer: @ 81ECDCA
# 136 "data/maps/Route104/scripts.pory"
	walk_down
# 137 "data/maps/Route104/scripts.pory"
	face_right
# 138 "data/maps/Route104/scripts.pory"
	step_end
# 139 "data/maps/Route104/scripts.pory"

# 140 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerFaceRival: @ 81ECDCD
# 141 "data/maps/Route104/scripts.pory"
	delay_4
# 142 "data/maps/Route104/scripts.pory"
	walk_in_place_fastest_left
# 143 "data/maps/Route104/scripts.pory"
	step_end
# 144 "data/maps/Route104/scripts.pory"

# 145 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayAskToBattle:: @ 81ECDD0
# 146 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayLetsBattle, MSGBOX_YESNO
# 147 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
# 148 "data/maps/Route104/scripts.pory"
	goto_if_eq Route104_EventScript_BattleMay
# 149 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayHaventRaisedPokemon, MSGBOX_DEFAULT
# 150 "data/maps/Route104/scripts.pory"
	releaseall
# 151 "data/maps/Route104/scripts.pory"
	end
# 152 "data/maps/Route104/scripts.pory"

# 153 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMay:: @ 81ECDED
# 154 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayIntro, MSGBOX_DEFAULT
# 155 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 156 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleMayTreecko
# 157 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleMayTorchic
# 158 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleMayMudkip
# 159 "data/maps/Route104/scripts.pory"
	end
# 160 "data/maps/Route104/scripts.pory"

# 161 "data/maps/Route104/scripts.pory"
Route104_EventScript_MayDefeated:: @ 81ECE1C
# 162 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MayPostBattle, MSGBOX_DEFAULT
# 163 "data/maps/Route104/scripts.pory"
	compare VAR_0x8008, 0
# 164 "data/maps/Route104/scripts.pory"
	call_if_eq Route104_EventScript_RestoreMusic
# 165 "data/maps/Route104/scripts.pory"
	releaseall
# 166 "data/maps/Route104/scripts.pory"
	end
# 167 "data/maps/Route104/scripts.pory"

# 168 "data/maps/Route104/scripts.pory"
Route104_EventScript_RestoreMusic:: @ 81ECE31
# 169 "data/maps/Route104/scripts.pory"
	savebgm MUS_DUMMY
# 170 "data/maps/Route104/scripts.pory"
	fadedefaultbgm
# 171 "data/maps/Route104/scripts.pory"
	return
# 172 "data/maps/Route104/scripts.pory"

# 173 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTreecko:: @ 81ECE36
# 174 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, Route104_Text_MayDefeat
# 175 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 176 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 177 "data/maps/Route104/scripts.pory"
	end
# 178 "data/maps/Route104/scripts.pory"

# 179 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayTorchic:: @ 81ECE49
# 180 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, Route104_Text_MayDefeat
# 181 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 182 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 183 "data/maps/Route104/scripts.pory"
	end
# 184 "data/maps/Route104/scripts.pory"

# 185 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleMayMudkip:: @ 81ECE5C
# 186 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, Route104_Text_MayDefeat
# 187 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 188 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_MayDefeated
# 189 "data/maps/Route104/scripts.pory"
	end
# 190 "data/maps/Route104/scripts.pory"

# 191 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanEncounter:: @ 81ECE6F
# 192 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_ROUTE_104, Route104_EventScript_BrendanDefeated
# 193 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_REGISTER_RIVAL_POKENAV, Route104_EventScript_BrendanAskToBattle
# 194 "data/maps/Route104/scripts.pory"
	setflag FLAG_REGISTER_RIVAL_POKENAV
# 195 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanWeShouldRegister, MSGBOX_DEFAULT
# 196 "data/maps/Route104/scripts.pory"
	closemessage
# 197 "data/maps/Route104/scripts.pory"
	delay 30
# 198 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 199 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 200 "data/maps/Route104/scripts.pory"
	waitfanfare
# 201 "data/maps/Route104/scripts.pory"
	closemessage
# 202 "data/maps/Route104/scripts.pory"
	delay 30
# 203 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 204 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerFaceRival
# 205 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalWalkSlowLeft
# 206 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanHowsYourPokedex, MSGBOX_DEFAULT
# 207 "data/maps/Route104/scripts.pory"
	closemessage
# 208 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 209 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_RIVAL, Route104_Movement_RivalApproachPlayer
# 210 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 211 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_RIVAL
# 212 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanDoingGreatLetsBattle, MSGBOX_YESNO
# 213 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
# 214 "data/maps/Route104/scripts.pory"
	goto_if_eq Route104_EventScript_BattleBrendan
# 215 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 216 "data/maps/Route104/scripts.pory"
	call Route104_EventScript_RestoreMusic
# 217 "data/maps/Route104/scripts.pory"
	releaseall
# 218 "data/maps/Route104/scripts.pory"
	end
# 219 "data/maps/Route104/scripts.pory"

# 220 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanAskToBattle:: @ 81ECEEC
# 221 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanLetsBattle, MSGBOX_YESNO
# 222 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, YES
# 223 "data/maps/Route104/scripts.pory"
	goto_if_eq Route104_EventScript_BattleBrendan
# 224 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 225 "data/maps/Route104/scripts.pory"
	releaseall
# 226 "data/maps/Route104/scripts.pory"
	end
# 227 "data/maps/Route104/scripts.pory"

# 228 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendan:: @ 81ECF09
# 229 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanIntro, MSGBOX_DEFAULT
# 230 "data/maps/Route104/scripts.pory"
	switch VAR_STARTER_MON
# 231 "data/maps/Route104/scripts.pory"
	case 0, Route104_EventScript_BattleBrendanTreecko
# 232 "data/maps/Route104/scripts.pory"
	case 1, Route104_EventScript_BattleBrendanTorchic
# 233 "data/maps/Route104/scripts.pory"
	case 2, Route104_EventScript_BattleBrendanMudkip
# 234 "data/maps/Route104/scripts.pory"
	end
# 235 "data/maps/Route104/scripts.pory"

# 236 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrendanDefeated:: @ 81ECF38
# 237 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrendanPostBattle, MSGBOX_DEFAULT
# 238 "data/maps/Route104/scripts.pory"
	compare VAR_0x8008, 0
# 239 "data/maps/Route104/scripts.pory"
	call_if_eq Route104_EventScript_RestoreMusic
# 240 "data/maps/Route104/scripts.pory"
	releaseall
# 241 "data/maps/Route104/scripts.pory"
	end
# 242 "data/maps/Route104/scripts.pory"

# 243 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTreecko:: @ 81ECF4D
# 244 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, Route104_Text_BrendanDefeat
# 245 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 246 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 247 "data/maps/Route104/scripts.pory"
	end
# 248 "data/maps/Route104/scripts.pory"

# 249 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanTorchic:: @ 81ECF60
# 250 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, Route104_Text_BrendanDefeat
# 251 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 252 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 253 "data/maps/Route104/scripts.pory"
	end
# 254 "data/maps/Route104/scripts.pory"

# 255 "data/maps/Route104/scripts.pory"
Route104_EventScript_BattleBrendanMudkip:: @ 81ECF73
# 256 "data/maps/Route104/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, Route104_Text_BrendanDefeat
# 257 "data/maps/Route104/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE_104
# 258 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_BrendanDefeated
# 259 "data/maps/Route104/scripts.pory"
	end
# 260 "data/maps/Route104/scripts.pory"

# 261 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBackUp: @ 81ECF86
# 262 "data/maps/Route104/scripts.pory"
	lock_facing_direction
# 263 "data/maps/Route104/scripts.pory"
	walk_down
# 264 "data/maps/Route104/scripts.pory"
	unlock_facing_direction
# 265 "data/maps/Route104/scripts.pory"
	step_end
# 266 "data/maps/Route104/scripts.pory"

# 267 "data/maps/Route104/scripts.pory"
Route104_Movement_RivalExitBrineysCottage: @ 81ECF8A
# 268 "data/maps/Route104/scripts.pory"
	walk_down
# 269 "data/maps/Route104/scripts.pory"
	step_end
# 270 "data/maps/Route104/scripts.pory"

# 271 "data/maps/Route104/scripts.pory"
Route104_EventScript_ExpertF:: @ 81ECF8C
# 272 "data/maps/Route104/scripts.pory"
	lock
# 273 "data/maps/Route104/scripts.pory"
	faceplayer
# 274 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104, Route104_EventScript_ReceivedBerry
# 275 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PlantBerriesInSoilTakeThis, MSGBOX_DEFAULT
# 276 "data/maps/Route104/scripts.pory"
	giveitem ITEM_CHESTO_BERRY
# 277 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
# 278 "data/maps/Route104/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 279 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104
# 280 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 281 "data/maps/Route104/scripts.pory"
	release
# 282 "data/maps/Route104/scripts.pory"
	end
# 283 "data/maps/Route104/scripts.pory"

# 284 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBerry:: @ 81ECFC3
# 285 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainersOftenMakeMonHoldBerries, MSGBOX_DEFAULT
# 286 "data/maps/Route104/scripts.pory"
	release
# 287 "data/maps/Route104/scripts.pory"
	end
# 288 "data/maps/Route104/scripts.pory"

# 289 "data/maps/Route104/scripts.pory"
Route104_EventScript_WhiteHerbFlorist:: @ 81ECFCD
# 290 "data/maps/Route104/scripts.pory"
	lock
# 291 "data/maps/Route104/scripts.pory"
	faceplayer
# 292 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_WHITE_HERB, Route104_EventScript_ReceivedWhiteHerb
# 293 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DontNeedThisTakeIt, MSGBOX_DEFAULT
# 294 "data/maps/Route104/scripts.pory"
	giveitem ITEM_WHITE_HERB
# 295 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
# 296 "data/maps/Route104/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 297 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_WHITE_HERB
# 298 "data/maps/Route104/scripts.pory"
	release
# 299 "data/maps/Route104/scripts.pory"
	end
# 300 "data/maps/Route104/scripts.pory"

# 301 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedWhiteHerb:: @ 81ECFFC
# 302 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_FlowerShopSellingSaplings, MSGBOX_DEFAULT
# 303 "data/maps/Route104/scripts.pory"
	release
# 304 "data/maps/Route104/scripts.pory"
	end
# 305 "data/maps/Route104/scripts.pory"

# 306 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl1:: @ 81ED006
# 307 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BrineyLivesInSeasideCottage, MSGBOX_NPC
# 308 "data/maps/Route104/scripts.pory"
	end
# 309 "data/maps/Route104/scripts.pory"

# 310 "data/maps/Route104/scripts.pory"
Route104_EventScript_BugCatcher:: @ 81ED00F
# 311 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WhatsItLikeAtBottomOfSea, MSGBOX_SIGN
# 312 "data/maps/Route104/scripts.pory"
	end
# 313 "data/maps/Route104/scripts.pory"

# 314 "data/maps/Route104/scripts.pory"
Route104_EventScript_BrineysCottageSign:: @ 81ED018
# 315 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MrBrineysCottage, MSGBOX_SIGN
# 316 "data/maps/Route104/scripts.pory"
	end
# 317 "data/maps/Route104/scripts.pory"

# 318 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignPetalburg:: @ 81ED021
# 319 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignPetalburg, MSGBOX_SIGN
# 320 "data/maps/Route104/scripts.pory"
	end
# 321 "data/maps/Route104/scripts.pory"

# 322 "data/maps/Route104/scripts.pory"
Route104_EventScript_RouteSignRustboro:: @ 81ED02A
# 323 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RouteSignRustboro, MSGBOX_SIGN
# 324 "data/maps/Route104/scripts.pory"
	end
# 325 "data/maps/Route104/scripts.pory"

# 326 "data/maps/Route104/scripts.pory"
Route104_EventScript_FlowerShopSign:: @ 81ED033
# 327 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_PrettyPetalFlowShop, MSGBOX_SIGN
# 328 "data/maps/Route104/scripts.pory"
	end
# 329 "data/maps/Route104/scripts.pory"

# 330 "data/maps/Route104/scripts.pory"
Route104_EventScript_TrainerTipsDoubleBattles:: @ 81ED03C
# 331 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TrainerTipsDoubleBattles, MSGBOX_SIGN
# 332 "data/maps/Route104/scripts.pory"
	end
# 333 "data/maps/Route104/scripts.pory"

# 334 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy1:: @ 81ED045
# 335 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ThrowBallAtWeakenedPokemon, MSGBOX_NPC
# 336 "data/maps/Route104/scripts.pory"
	end
# 337 "data/maps/Route104/scripts.pory"

# 338 "data/maps/Route104/scripts.pory"
Route104_EventScript_Woman:: @ 81ED04E
# 339 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_OnlyThrowBallAtWildPokemon, MSGBOX_NPC
# 340 "data/maps/Route104/scripts.pory"
	end
# 341 "data/maps/Route104/scripts.pory"

# 342 "data/maps/Route104/scripts.pory"
Route104_EventScript_Boy2:: @ 81ED057
# 343 "data/maps/Route104/scripts.pory"
	lock
# 344 "data/maps/Route104/scripts.pory"
	faceplayer
# 345 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM09, Route104_EventScript_ReceivedBulletSeed
# 346 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LikeFillingMouthWithSeedsTakeThis, MSGBOX_DEFAULT
# 347 "data/maps/Route104/scripts.pory"
	giveitem ITEM_TM09
# 348 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
# 349 "data/maps/Route104/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 350 "data/maps/Route104/scripts.pory"
	setflag FLAG_RECEIVED_TM09
# 351 "data/maps/Route104/scripts.pory"
	release
# 352 "data/maps/Route104/scripts.pory"
	end
# 353 "data/maps/Route104/scripts.pory"

# 354 "data/maps/Route104/scripts.pory"
Route104_EventScript_ReceivedBulletSeed:: @ 81ED086
# 355 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_TMsAreOneTimeUse, MSGBOX_DEFAULT
# 356 "data/maps/Route104/scripts.pory"
	release
# 357 "data/maps/Route104/scripts.pory"
	end
# 358 "data/maps/Route104/scripts.pory"

# 359 "data/maps/Route104/scripts.pory"
Route104_EventScript_Girl2:: @ 81ED090
# 360 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_ImNotATrainer, MSGBOX_NPC
# 361 "data/maps/Route104/scripts.pory"
	end
# 362 "data/maps/Route104/scripts.pory"

# 363 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewford:: @ 81ED099
# 364 "data/maps/Route104/scripts.pory"
	setobjectpriority LOCALID_BRINEY_R104, MAP_ROUTE104, 0
# 365 "data/maps/Route104/scripts.pory"
	setobjectpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104, 0
# 366 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_R104, Route104_Movement_BrineyBoardBoat
# 367 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 368 "data/maps/Route104/scripts.pory"
	removeobject LOCALID_BRINEY_R104
# 369 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerBoardBoat
# 370 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 371 "data/maps/Route104/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 372 "data/maps/Route104/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 373 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordNoCall
# 374 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_ENABLE_NORMAN_MATCH_CALL, Route104_EventScript_SailToDewfordDadCalls
# 375 "data/maps/Route104/scripts.pory"
	end
# 376 "data/maps/Route104/scripts.pory"

# 377 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordNoCall:: @ 81ED0D9
# 378 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewford
# 379 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewford
# 380 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 381 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 382 "data/maps/Route104/scripts.pory"

# 383 "data/maps/Route104/scripts.pory"
Route104_EventScript_SailToDewfordDadCalls:: @ 81ED0EF
# 384 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordBeforeDadCalls
# 385 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordBeforeDadCalls
# 386 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 387 "data/maps/Route104/scripts.pory"
	pokenavcall Route104_Text_DadPokenavCall
# 388 "data/maps/Route104/scripts.pory"
	waitmessage
# 389 "data/maps/Route104/scripts.pory"
	delay 30
# 390 "data/maps/Route104/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 391 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_RegisteredDadInPokenav, MSGBOX_DEFAULT
# 392 "data/maps/Route104/scripts.pory"
	waitfanfare
# 393 "data/maps/Route104/scripts.pory"
	closemessage
# 394 "data/maps/Route104/scripts.pory"
	delay 30
# 395 "data/maps/Route104/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 396 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_SailToDewfordAfterDadCalls
# 397 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BOAT_R104, Route104_Movement_SailToDewfordAfterDadCalls, MAP_ROUTE104
# 398 "data/maps/Route104/scripts.pory"
	waitmovement LOCALID_BOAT_R104, MAP_ROUTE104
# 399 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 400 "data/maps/Route104/scripts.pory"
	goto Route104_EventScript_ArriveInDewford
# 401 "data/maps/Route104/scripts.pory"

# 402 "data/maps/Route104/scripts.pory"
Route104_EventScript_ArriveInDewford:: @ 81ED139
# 403 "data/maps/Route104/scripts.pory"
	delay 50
# 404 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerExitBoat
# 405 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 406 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 407 "data/maps/Route104/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 408 "data/maps/Route104/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route104_Movement_PlayerMoveForBriney
# 409 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 410 "data/maps/Route104/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_DEWFORD, 12, 8
# 411 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BRINEY_DEWFORD
# 412 "data/maps/Route104/scripts.pory"
	setobjectpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 413 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
# 414 "data/maps/Route104/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, Route104_Movement_BrineyExitBoat
# 415 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 416 "data/maps/Route104/scripts.pory"
	addobject LOCALID_BOAT_DEWFORD
# 417 "data/maps/Route104/scripts.pory"
	clearflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 418 "data/maps/Route104/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 419 "data/maps/Route104/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 420 "data/maps/Route104/scripts.pory"
	hideobjectat LOCALID_BOAT_R104, MAP_ROUTE104
# 421 "data/maps/Route104/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 422 "data/maps/Route104/scripts.pory"
	resetobjectpriority OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 423 "data/maps/Route104/scripts.pory"
	resetobjectpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN
# 424 "data/maps/Route104/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_DEWFORD
# 425 "data/maps/Route104/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 0
# 426 "data/maps/Route104/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_DeliverLetterReminder
# 427 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, Route104_EventScript_LandedInDewford
# 428 "data/maps/Route104/scripts.pory"
	end
# 429 "data/maps/Route104/scripts.pory"

# 430 "data/maps/Route104/scripts.pory"
Route104_EventScript_DeliverLetterReminder:: @ 81ED1B4
# 431 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_LandedInDewfordDeliverLetter, MSGBOX_DEFAULT
# 432 "data/maps/Route104/scripts.pory"
	releaseall
# 433 "data/maps/Route104/scripts.pory"
	end
# 434 "data/maps/Route104/scripts.pory"

# 435 "data/maps/Route104/scripts.pory"
Route104_EventScript_LandedInDewford:: @ 81ED1BE
# 436 "data/maps/Route104/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInDewford, MSGBOX_DEFAULT
# 437 "data/maps/Route104/scripts.pory"
	releaseall
# 438 "data/maps/Route104/scripts.pory"
	end
# 439 "data/maps/Route104/scripts.pory"

# 440 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordBeforeDadCalls: @ 81ED1C8
# 441 "data/maps/Route104/scripts.pory"
	walk_down
# 442 "data/maps/Route104/scripts.pory"
	walk_down
# 443 "data/maps/Route104/scripts.pory"
	walk_down
# 444 "data/maps/Route104/scripts.pory"
	walk_down
# 445 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 446 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 447 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 448 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 449 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 450 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 451 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 452 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 453 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 454 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 455 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 456 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 457 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 458 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 459 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 460 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 461 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 462 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 463 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 464 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 465 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 466 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 467 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 468 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 469 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 470 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 471 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 472 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 473 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 474 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 475 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 476 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 477 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 478 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 479 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 480 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 481 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 482 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 483 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 484 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 485 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 486 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 487 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 488 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 489 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 490 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 491 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 492 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 493 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 494 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 495 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 496 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 497 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 498 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 499 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 500 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 501 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 502 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 503 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 504 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 505 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 506 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 507 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 508 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 509 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 510 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 511 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 512 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 513 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 514 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 515 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 516 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 517 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 518 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 519 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 520 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 521 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 522 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 523 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 524 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 525 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 526 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 527 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 528 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 529 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 530 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 531 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 532 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 533 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 534 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 535 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 536 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 537 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 538 "data/maps/Route104/scripts.pory"
	step_end
# 539 "data/maps/Route104/scripts.pory"

# 540 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewfordAfterDadCalls: @ 81ED22A
# 541 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 542 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 543 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 544 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 545 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 546 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 547 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 548 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 549 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 550 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 551 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 552 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 553 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 554 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 555 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 556 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 557 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 558 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 559 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 560 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 561 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 562 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 563 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 564 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 565 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 566 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 567 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 568 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 569 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 570 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 571 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 572 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 573 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 574 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 575 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 576 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 577 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 578 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 579 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 580 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 581 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 582 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 583 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 584 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 585 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 586 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 587 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 588 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 589 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 590 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 591 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 592 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 593 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 594 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 595 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 596 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 597 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 598 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 599 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 600 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 601 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 602 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 603 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 604 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 605 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 606 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 607 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 608 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 609 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 610 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 611 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 612 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 613 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 614 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 615 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 616 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 617 "data/maps/Route104/scripts.pory"
	walk_right
# 618 "data/maps/Route104/scripts.pory"
	walk_right
# 619 "data/maps/Route104/scripts.pory"
	walk_down
# 620 "data/maps/Route104/scripts.pory"
	walk_down
# 621 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 622 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 623 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 624 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 625 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 626 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 627 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 628 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 629 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 630 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 631 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 632 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 633 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 634 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 635 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 636 "data/maps/Route104/scripts.pory"
	walk_down
# 637 "data/maps/Route104/scripts.pory"
	walk_down
# 638 "data/maps/Route104/scripts.pory"
	step_end
# 639 "data/maps/Route104/scripts.pory"

# 640 "data/maps/Route104/scripts.pory"
Route104_Movement_SailToDewford: @ 81ED28C
# 641 "data/maps/Route104/scripts.pory"
	walk_down
# 642 "data/maps/Route104/scripts.pory"
	walk_down
# 643 "data/maps/Route104/scripts.pory"
	walk_down
# 644 "data/maps/Route104/scripts.pory"
	walk_down
# 645 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 646 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 647 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 648 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 649 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 650 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 651 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 652 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 653 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 654 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 655 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 656 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 657 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 658 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 659 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 660 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 661 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 662 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 663 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 664 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 665 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 666 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 667 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 668 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 669 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 670 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 671 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 672 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 673 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 674 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 675 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 676 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 677 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 678 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 679 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 680 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 681 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 682 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 683 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 684 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 685 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 686 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 687 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 688 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 689 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 690 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 691 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 692 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 693 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 694 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 695 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 696 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 697 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 698 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 699 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 700 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 701 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 702 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 703 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 704 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 705 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 706 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 707 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 708 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 709 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 710 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 711 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 712 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 713 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 714 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 715 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 716 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 717 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 718 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 719 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 720 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 721 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 722 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 723 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 724 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 725 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 726 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 727 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 728 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 729 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 730 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 731 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 732 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 733 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 734 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 735 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 736 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 737 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 738 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 739 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 740 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 741 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 742 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 743 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 744 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 745 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 746 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 747 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 748 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 749 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 750 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 751 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 752 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 753 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 754 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 755 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 756 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 757 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 758 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 759 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 760 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 761 "data/maps/Route104/scripts.pory"
	walk_fastest_down
# 762 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 763 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 764 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 765 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 766 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 767 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 768 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 769 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 770 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 771 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 772 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 773 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 774 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 775 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 776 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 777 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 778 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 779 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 780 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 781 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 782 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 783 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 784 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 785 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 786 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 787 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 788 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 789 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 790 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 791 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 792 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 793 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 794 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 795 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 796 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 797 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 798 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 799 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 800 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 801 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 802 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 803 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 804 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 805 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 806 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 807 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 808 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 809 "data/maps/Route104/scripts.pory"
	walk_fastest_right
# 810 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 811 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 812 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 813 "data/maps/Route104/scripts.pory"
	walk_fast_right
# 814 "data/maps/Route104/scripts.pory"
	walk_right
# 815 "data/maps/Route104/scripts.pory"
	walk_right
# 816 "data/maps/Route104/scripts.pory"
	walk_down
# 817 "data/maps/Route104/scripts.pory"
	walk_down
# 818 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 819 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 820 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 821 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 822 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 823 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 824 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 825 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 826 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 827 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 828 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 829 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 830 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 831 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 832 "data/maps/Route104/scripts.pory"
	walk_fast_down
# 833 "data/maps/Route104/scripts.pory"
	walk_down
# 834 "data/maps/Route104/scripts.pory"
	walk_down
# 835 "data/maps/Route104/scripts.pory"
	step_end
# 836 "data/maps/Route104/scripts.pory"

# 837 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerBoardBoat: @ 81ED34F
# 838 "data/maps/Route104/scripts.pory"
	walk_left
# 839 "data/maps/Route104/scripts.pory"
	walk_down
# 840 "data/maps/Route104/scripts.pory"
	walk_down
# 841 "data/maps/Route104/scripts.pory"
	step_end
# 842 "data/maps/Route104/scripts.pory"

# 843 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerExitBoat: @ 81ED353
# 844 "data/maps/Route104/scripts.pory"
	walk_down
# 845 "data/maps/Route104/scripts.pory"
	step_end
# 846 "data/maps/Route104/scripts.pory"

# 847 "data/maps/Route104/scripts.pory"
Route104_Movement_PlayerMoveForBriney: @ 81ED355
# 848 "data/maps/Route104/scripts.pory"
	walk_down
# 849 "data/maps/Route104/scripts.pory"
	walk_left
# 850 "data/maps/Route104/scripts.pory"
	walk_in_place_fastest_right
# 851 "data/maps/Route104/scripts.pory"
	step_end
# 852 "data/maps/Route104/scripts.pory"

# 853 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyBoardBoat: @ 81ED359
# 854 "data/maps/Route104/scripts.pory"
	walk_down
# 855 "data/maps/Route104/scripts.pory"
	walk_down
# 856 "data/maps/Route104/scripts.pory"
	step_end
# 857 "data/maps/Route104/scripts.pory"

# 858 "data/maps/Route104/scripts.pory"
Route104_Movement_BrineyExitBoat: @ 81ED35C
# 859 "data/maps/Route104/scripts.pory"
	walk_down
# 860 "data/maps/Route104/scripts.pory"
	walk_in_place_fastest_left
# 861 "data/maps/Route104/scripts.pory"
	step_end
# 862 "data/maps/Route104/scripts.pory"

# 863 "data/maps/Route104/scripts.pory"
Route104_EventScript_Ivan:: @ 81ED35F
# 864 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_IVAN, Route104_Text_IvanIntro, Route104_Text_IvanDefeat
# 865 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 866 "data/maps/Route104/scripts.pory"
	end
# 867 "data/maps/Route104/scripts.pory"

# 868 "data/maps/Route104/scripts.pory"
Route104_EventScript_Billy:: @ 81ED376
# 869 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_BILLY, Route104_Text_BillyIntro, Route104_Text_BillyDefeat
# 870 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_BillyPostBattle, MSGBOX_AUTOCLOSE
# 871 "data/maps/Route104/scripts.pory"
	end
# 872 "data/maps/Route104/scripts.pory"

# 873 "data/maps/Route104/scripts.pory"
Route104_EventScript_Haley:: @ 81ED38D
# 874 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_HALEY_1, Route104_Text_HaleyIntro, Route104_Text_HaleyDefeat, Route104_EventScript_TryRegisterHaleyAfterBattle
# 875 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 876 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, TRUE
# 877 "data/maps/Route104/scripts.pory"
	goto_if_eq Route104_EventScript_RematchHaley
# 878 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_HALEY_1
# 879 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 880 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
# 881 "data/maps/Route104/scripts.pory"
	goto_if_eq Route104_EventScript_TryRegisterHaley
# 882 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 883 "data/maps/Route104/scripts.pory"
	release
# 884 "data/maps/Route104/scripts.pory"
	end
# 885 "data/maps/Route104/scripts.pory"

# 886 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaleyAfterBattle:: @ 81ED3CE
# 887 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 888 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 889 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaleyAfterBattle
# 890 "data/maps/Route104/scripts.pory"
	release
# 891 "data/maps/Route104/scripts.pory"
	end
# 892 "data/maps/Route104/scripts.pory"

# 893 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaleyAfterBattle:: @ 81ED3DF
# 894 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister2, MSGBOX_DEFAULT
# 895 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 896 "data/maps/Route104/scripts.pory"
	release
# 897 "data/maps/Route104/scripts.pory"
	end
# 898 "data/maps/Route104/scripts.pory"

# 899 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterHaley:: @ 81ED3F8
# 900 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterHaley
# 901 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostBattle, MSGBOX_DEFAULT
# 902 "data/maps/Route104/scripts.pory"
	release
# 903 "data/maps/Route104/scripts.pory"
	end
# 904 "data/maps/Route104/scripts.pory"

# 905 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterHaley:: @ 81ED40B
# 906 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyRegister1, MSGBOX_DEFAULT
# 907 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_HALEY_1
# 908 "data/maps/Route104/scripts.pory"
	release
# 909 "data/maps/Route104/scripts.pory"
	end
# 910 "data/maps/Route104/scripts.pory"

# 911 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchHaley:: @ 81ED424
# 912 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_HALEY_1, Route104_Text_HaleyRematchIntro, Route104_Text_HaleyRematchDefeat
# 913 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_HaleyPostRematch, MSGBOX_AUTOCLOSE
# 914 "data/maps/Route104/scripts.pory"
	end
# 915 "data/maps/Route104/scripts.pory"

# 916 "data/maps/Route104/scripts.pory"
Route104_EventScript_Winston:: @ 81ED43B
# 917 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_WINSTON_1, Route104_Text_WinstonIntro, Route104_Text_WinstonDefeat, Route104_EventScript_TryRegisterWinstonAfterBattle
# 918 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 919 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, TRUE
# 920 "data/maps/Route104/scripts.pory"
	goto_if_eq Route104_EventScript_RematchWinston
# 921 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_WINSTON_1
# 922 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 923 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
# 924 "data/maps/Route104/scripts.pory"
	goto_if_eq Route104_EventScript_TryRegisterWinston
# 925 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 926 "data/maps/Route104/scripts.pory"
	release
# 927 "data/maps/Route104/scripts.pory"
	end
# 928 "data/maps/Route104/scripts.pory"

# 929 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinstonAfterBattle:: @ 81ED47C
# 930 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 931 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 932 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinstonAfterBattle
# 933 "data/maps/Route104/scripts.pory"
	release
# 934 "data/maps/Route104/scripts.pory"
	end
# 935 "data/maps/Route104/scripts.pory"

# 936 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinstonAfterBattle:: @ 81ED48D
# 937 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister2, MSGBOX_DEFAULT
# 938 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 939 "data/maps/Route104/scripts.pory"
	release
# 940 "data/maps/Route104/scripts.pory"
	end
# 941 "data/maps/Route104/scripts.pory"

# 942 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterWinston:: @ 81ED4A6
# 943 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterWinston
# 944 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostBattle, MSGBOX_DEFAULT
# 945 "data/maps/Route104/scripts.pory"
	release
# 946 "data/maps/Route104/scripts.pory"
	end
# 947 "data/maps/Route104/scripts.pory"

# 948 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterWinston:: @ 81ED4B9
# 949 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonRegister1, MSGBOX_DEFAULT
# 950 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_WINSTON_1
# 951 "data/maps/Route104/scripts.pory"
	release
# 952 "data/maps/Route104/scripts.pory"
	end
# 953 "data/maps/Route104/scripts.pory"

# 954 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchWinston:: @ 81ED4D2
# 955 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_WINSTON_1, Route104_Text_WinstonRematchIntro, Route104_Text_WinstonRematchDefeat
# 956 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_WinstonPostRematch, MSGBOX_AUTOCLOSE
# 957 "data/maps/Route104/scripts.pory"
	end
# 958 "data/maps/Route104/scripts.pory"

# 959 "data/maps/Route104/scripts.pory"
Route104_EventScript_Cindy:: @ 81ED4E9
# 960 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_CINDY_1, Route104_Text_CindyIntro, Route104_Text_CindyDefeat, Route104_EventScript_TryRegisterCindyAfterBattle
# 961 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 962 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, TRUE
# 963 "data/maps/Route104/scripts.pory"
	goto_if_eq Route104_EventScript_RematchCindy
# 964 "data/maps/Route104/scripts.pory"
	setvar VAR_0x8004, TRAINER_CINDY_1
# 965 "data/maps/Route104/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 966 "data/maps/Route104/scripts.pory"
	compare VAR_RESULT, FALSE
# 967 "data/maps/Route104/scripts.pory"
	goto_if_eq Route104_EventScript_TryRegisterCindy
# 968 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 969 "data/maps/Route104/scripts.pory"
	release
# 970 "data/maps/Route104/scripts.pory"
	end
# 971 "data/maps/Route104/scripts.pory"

# 972 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindyAfterBattle:: @ 81ED52A
# 973 "data/maps/Route104/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 974 "data/maps/Route104/scripts.pory"
	waitmovement 0
# 975 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindyAfterBattle
# 976 "data/maps/Route104/scripts.pory"
	release
# 977 "data/maps/Route104/scripts.pory"
	end
# 978 "data/maps/Route104/scripts.pory"

# 979 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindyAfterBattle:: @ 81ED53B
# 980 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister2, MSGBOX_DEFAULT
# 981 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 982 "data/maps/Route104/scripts.pory"
	release
# 983 "data/maps/Route104/scripts.pory"
	end
# 984 "data/maps/Route104/scripts.pory"

# 985 "data/maps/Route104/scripts.pory"
Route104_EventScript_TryRegisterCindy:: @ 81ED554
# 986 "data/maps/Route104/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route104_EventScript_RegisterCindy
# 987 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostBattle, MSGBOX_DEFAULT
# 988 "data/maps/Route104/scripts.pory"
	release
# 989 "data/maps/Route104/scripts.pory"
	end
# 990 "data/maps/Route104/scripts.pory"

# 991 "data/maps/Route104/scripts.pory"
Route104_EventScript_RegisterCindy:: @ 81ED567
# 992 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyRegister1, MSGBOX_DEFAULT
# 993 "data/maps/Route104/scripts.pory"
	register_matchcall TRAINER_CINDY_1
# 994 "data/maps/Route104/scripts.pory"
	release
# 995 "data/maps/Route104/scripts.pory"
	end
# 996 "data/maps/Route104/scripts.pory"

# 997 "data/maps/Route104/scripts.pory"
Route104_EventScript_RematchCindy:: @ 81ED580
# 998 "data/maps/Route104/scripts.pory"
	trainerbattle_rematch TRAINER_CINDY_1, Route104_Text_CindyRematchIntro, Route104_Text_CindyRematchDefeat
# 999 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_CindyPostRematch, MSGBOX_AUTOCLOSE
# 1000 "data/maps/Route104/scripts.pory"
	end
# 1001 "data/maps/Route104/scripts.pory"

# 1002 "data/maps/Route104/scripts.pory"
Route104_EventScript_Gina:: @ 81ED597
# 1003 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_GinaIntro, Route104_Text_GinaDefeat, Route104_Text_GinaNotEnoughMons
# 1004 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1005 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_GinaPostBattle, MSGBOX_DEFAULT
# 1006 "data/maps/Route104/scripts.pory"
	release
# 1007 "data/maps/Route104/scripts.pory"
	end
# 1008 "data/maps/Route104/scripts.pory"

# 1009 "data/maps/Route104/scripts.pory"
Route104_EventScript_Mia:: @ 81ED5B6
# 1010 "data/maps/Route104/scripts.pory"
	trainerbattle_double TRAINER_GINA_AND_MIA_1, Route104_Text_MiaIntro, Route104_Text_MiaDefeat, Route104_Text_MiaNotEnoughMons
# 1011 "data/maps/Route104/scripts.pory"
	special GetPlayerBigGuyGirlString
# 1012 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_MiaPostBattle, MSGBOX_DEFAULT
# 1013 "data/maps/Route104/scripts.pory"
	release
# 1014 "data/maps/Route104/scripts.pory"
	end
# 1015 "data/maps/Route104/scripts.pory"

# 1016 "data/maps/Route104/scripts.pory"
Route104_EventScript_Darian:: @ 81ED5D5
# 1017 "data/maps/Route104/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Route104_Text_DarianIntro, Route104_Text_DarianDefeat
# 1018 "data/maps/Route104/scripts.pory"
	msgbox Route104_Text_DarianPostBattle, MSGBOX_AUTOCLOSE
# 1019 "data/maps/Route104/scripts.pory"
	end
# 1020 "data/maps/Route104/scripts.pory"

# 1021 "data/maps/Route104/scripts.pory"
Route104_Text_BrineyLivesInSeasideCottage: @ 81ED5EC
# 1022 "data/maps/Route104/scripts.pory"
	.string "That seaside cottage is where\n"
# 1023 "data/maps/Route104/scripts.pory"
	.string "Mr. Briney lives.\p"
# 1024 "data/maps/Route104/scripts.pory"
	.string "He was once a mighty sailor who never\n"
# 1025 "data/maps/Route104/scripts.pory"
	.string "feared the sea, however stormy.$"
# 1026 "data/maps/Route104/scripts.pory"

# 1027 "data/maps/Route104/scripts.pory"
Route104_Text_WhatsItLikeAtBottomOfSea: @ 81ED662
# 1028 "data/maps/Route104/scripts.pory"
	.string "The sea, huh?\p"
# 1029 "data/maps/Route104/scripts.pory"
	.string "I wonder what it's like at the bottom\n"
# 1030 "data/maps/Route104/scripts.pory"
	.string "of the sea?$"
# 1031 "data/maps/Route104/scripts.pory"

# 1032 "data/maps/Route104/scripts.pory"
Route104_Text_ThrowBallAtWeakenedPokemon: @ 81ED6A2
# 1033 "data/maps/Route104/scripts.pory"
	.string "If you're going to throw a Poké Ball,\n"
# 1034 "data/maps/Route104/scripts.pory"
	.string "weaken the wild Pokémon first.\p"
# 1035 "data/maps/Route104/scripts.pory"
	.string "It will be easier to catch if it's been\n"
# 1036 "data/maps/Route104/scripts.pory"
	.string "poisoned, burned, or lulled to sleep.$"
# 1037 "data/maps/Route104/scripts.pory"

# 1038 "data/maps/Route104/scripts.pory"
Route104_Text_OnlyThrowBallAtWildPokemon: @ 81ED735
# 1039 "data/maps/Route104/scripts.pory"
	.string "You're a thief if you try to steal\n"
# 1040 "data/maps/Route104/scripts.pory"
	.string "someone else's Pokémon.\p"
# 1041 "data/maps/Route104/scripts.pory"
	.string "You should throw Poké Balls only at\n"
# 1042 "data/maps/Route104/scripts.pory"
	.string "wild Pokémon.$"
# 1043 "data/maps/Route104/scripts.pory"

# 1044 "data/maps/Route104/scripts.pory"
Route104_Text_ImNotATrainer: @ 81ED7A2
# 1045 "data/maps/Route104/scripts.pory"
	.string "Oh, no, I'm not a Trainer.\p"
# 1046 "data/maps/Route104/scripts.pory"
	.string "But that's right, if Trainers lock eyes,\n"
# 1047 "data/maps/Route104/scripts.pory"
	.string "it's a challenge to battle.\p"
# 1048 "data/maps/Route104/scripts.pory"
	.string "If you don't want to battle, stay out\n"
# 1049 "data/maps/Route104/scripts.pory"
	.string "of their sight.$"
# 1050 "data/maps/Route104/scripts.pory"

# 1051 "data/maps/Route104/scripts.pory"
Route104_Text_LikeFillingMouthWithSeedsTakeThis: @ 81ED838
# 1052 "data/maps/Route104/scripts.pory"
	.string "I like filling my mouth with seeds,\n"
# 1053 "data/maps/Route104/scripts.pory"
	.string "then spitting them out fast!\p"
# 1054 "data/maps/Route104/scripts.pory"
	.string "You can have this, so you try it out!\p"
# 1055 "data/maps/Route104/scripts.pory"
	.string "Use it on a Pokémon, and it will learn\n"
# 1056 "data/maps/Route104/scripts.pory"
	.string "a move for firing seeds rapidly.$"
# 1057 "data/maps/Route104/scripts.pory"

# 1058 "data/maps/Route104/scripts.pory"
Route104_Text_TMsAreOneTimeUse: @ 81ED8E7
# 1059 "data/maps/Route104/scripts.pory"
	.string "A word of advice!\p"
# 1060 "data/maps/Route104/scripts.pory"
	.string "A TM, Technical Machine, can be\n"
# 1061 "data/maps/Route104/scripts.pory"
	.string "used indefinitely.$"
# 1062 "data/maps/Route104/scripts.pory"
	.string "So you can teach it to all.\n"
# 1063 "data/maps/Route104/scripts.pory"
	.string "of your Pokémon if you wish!$"
# 1064 "data/maps/Route104/scripts.pory"

# 1065 "data/maps/Route104/scripts.pory"
Route104_Text_DontNeedThisTakeIt: @ 81ED96A
# 1066 "data/maps/Route104/scripts.pory"
	.string "This Flower Shop started selling\n"
# 1067 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1068 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1069 "data/maps/Route104/scripts.pory"
	.string "shopping.\p"
# 1070 "data/maps/Route104/scripts.pory"
	.string "I don't need this White Herb anymore.\n"
# 1071 "data/maps/Route104/scripts.pory"
	.string "Would you take it, please?$"
# 1072 "data/maps/Route104/scripts.pory"

# 1073 "data/maps/Route104/scripts.pory"
Route104_Text_FlowerShopSellingSaplings: @ 81EDA0F
# 1074 "data/maps/Route104/scripts.pory"
	.string "This Flower Shop started selling\n"
# 1075 "data/maps/Route104/scripts.pory"
	.string "saplings recently.\p"
# 1076 "data/maps/Route104/scripts.pory"
	.string "It made me so happy, I went overboard\n"
# 1077 "data/maps/Route104/scripts.pory"
	.string "shopping. Where should I put them?$"
# 1078 "data/maps/Route104/scripts.pory"

# 1079 "data/maps/Route104/scripts.pory"
Route104_Text_MrBrineysCottage: @ 81EDA8C
# 1080 "data/maps/Route104/scripts.pory"
	.string "Mr. Briney's Cottage$"
# 1081 "data/maps/Route104/scripts.pory"

# 1082 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignPetalburg: @ 81EDAA1
# 1083 "data/maps/Route104/scripts.pory"
	.string "Route 1O4\n"
# 1084 "data/maps/Route104/scripts.pory"
	.string "{RIGHT_ARROW} Petalburg City$"
# 1085 "data/maps/Route104/scripts.pory"

# 1086 "data/maps/Route104/scripts.pory"
Route104_Text_RouteSignRustboro: @ 81EDABC
# 1087 "data/maps/Route104/scripts.pory"
	.string "Route 1O4\n"
# 1088 "data/maps/Route104/scripts.pory"
	.string "{UP_ARROW} Rustboro City$"
# 1089 "data/maps/Route104/scripts.pory"

# 1090 "data/maps/Route104/scripts.pory"
Route104_Text_PrettyPetalFlowShop: @ 81EDAD6
# 1091 "data/maps/Route104/scripts.pory"
	.string "Pretty Petal Flower Shop$"
# 1092 "data/maps/Route104/scripts.pory"

# 1093 "data/maps/Route104/scripts.pory"
Route104_Text_TrainerTipsDoubleBattles: @ 81EDAEF
# 1094 "data/maps/Route104/scripts.pory"
	.string "Trainer Tips\p"
# 1095 "data/maps/Route104/scripts.pory"
	.string "In the Hoenn region there are pairs\n"
# 1096 "data/maps/Route104/scripts.pory"
	.string "of Trainers who challenge others\l"
# 1097 "data/maps/Route104/scripts.pory"
	.string "for 2-on-2 Pokémon battles called\l"
# 1098 "data/maps/Route104/scripts.pory"
	.string "Double Battles.\p"
# 1099 "data/maps/Route104/scripts.pory"
	.string "In a Double Battle, the Trainer must\n"
# 1100 "data/maps/Route104/scripts.pory"
	.string "send out two Pokémon, the one at the\l"
# 1101 "data/maps/Route104/scripts.pory"
	.string "left of the list and the top one.\l"
# 1102 "data/maps/Route104/scripts.pory"
	.string "Watch how Pokémon are lined up.$"
# 1103 "data/maps/Route104/scripts.pory"

# 1104 "data/maps/Route104/scripts.pory"
Route104_Text_MayWeShouldRegister: @ 81EDBFF
# 1105 "data/maps/Route104/scripts.pory"
	.string "May: Oh, hi, {PLAYER}{KUN}!\p"
# 1106 "data/maps/Route104/scripts.pory"
	.string "Devon upgraded your Pokénav with\n"
# 1107 "data/maps/Route104/scripts.pory"
	.string "the Match Call system, huh?\p"
# 1108 "data/maps/Route104/scripts.pory"
	.string "We should register each other so we\n"
# 1109 "data/maps/Route104/scripts.pory"
	.string "can get in contact anytime.$"
# 1110 "data/maps/Route104/scripts.pory"

# 1111 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredMay: @ 81EDC8F
# 1112 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered May\n"
# 1113 "data/maps/Route104/scripts.pory"
	.string "in the Pokénav.$"
# 1114 "data/maps/Route104/scripts.pory"

# 1115 "data/maps/Route104/scripts.pory"
Route104_Text_MayHowsYourPokedex: @ 81EDCB1
# 1116 "data/maps/Route104/scripts.pory"
	.string "May: Oh, by the way, {PLAYER}{KUN},\n"
# 1117 "data/maps/Route104/scripts.pory"
	.string "how's your Pokédex coming along?$"
# 1118 "data/maps/Route104/scripts.pory"

# 1119 "data/maps/Route104/scripts.pory"
Route104_Text_MayMinesDecentLetsBattle: @ 81EDCED
# 1120 "data/maps/Route104/scripts.pory"
	.string "Mine's looking pretty decent.\n"
# 1121 "data/maps/Route104/scripts.pory"
	.string "So…\l"
# 1122 "data/maps/Route104/scripts.pory"
	.string "How about a little battle?$"
# 1123 "data/maps/Route104/scripts.pory"

# 1124 "data/maps/Route104/scripts.pory"
Route104_Text_MayHaventRaisedPokemon: @ 81EDD2A
# 1125 "data/maps/Route104/scripts.pory"
	.string "May: Oh, what's the matter?\p"
# 1126 "data/maps/Route104/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1127 "data/maps/Route104/scripts.pory"
	.string "Pokémon very much?\p"
# 1128 "data/maps/Route104/scripts.pory"
	.string "That's not very good for a Trainer!$"
# 1129 "data/maps/Route104/scripts.pory"

# 1130 "data/maps/Route104/scripts.pory"
Route104_Text_MayLetsBattle: @ 81EDD9F
# 1131 "data/maps/Route104/scripts.pory"
	.string "May: So, what do you think?\n"
# 1132 "data/maps/Route104/scripts.pory"
	.string "How about a little battle here?$"
# 1133 "data/maps/Route104/scripts.pory"

# 1134 "data/maps/Route104/scripts.pory"
Route104_Text_MayIntro: @ 81EDDDB
# 1135 "data/maps/Route104/scripts.pory"
	.string "May: You just became a Trainer,\n"
# 1136 "data/maps/Route104/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1137 "data/maps/Route104/scripts.pory"

# 1138 "data/maps/Route104/scripts.pory"
Route104_Text_MayDefeat: @ 81EDE18
# 1139 "data/maps/Route104/scripts.pory"
	.string "Yikes!\n"
# 1140 "data/maps/Route104/scripts.pory"
	.string "You're better than I expected!$"
# 1141 "data/maps/Route104/scripts.pory"

# 1142 "data/maps/Route104/scripts.pory"
Route104_Text_MayPostBattle: @ 81EDE3E
# 1143 "data/maps/Route104/scripts.pory"
	.string "May: I can tell you've gotten pretty\n"
# 1144 "data/maps/Route104/scripts.pory"
	.string "good with the way you handle Pokémon.\p"
# 1145 "data/maps/Route104/scripts.pory"
	.string "But instead of only making them\n"
# 1146 "data/maps/Route104/scripts.pory"
	.string "battle, you should be like Mr. Briney.\p"
# 1147 "data/maps/Route104/scripts.pory"
	.string "It's important to become friends with\n"
# 1148 "data/maps/Route104/scripts.pory"
	.string "Pokémon, too.$"
# 1149 "data/maps/Route104/scripts.pory"

# 1150 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanWeShouldRegister: @ 81EDF04
# 1151 "data/maps/Route104/scripts.pory"
	.string "Brendan: Oh, hey, {PLAYER}!\p"
# 1152 "data/maps/Route104/scripts.pory"
	.string "Cool, you had Devon install the Match\n"
# 1153 "data/maps/Route104/scripts.pory"
	.string "Call system on your Pokénav!\p"
# 1154 "data/maps/Route104/scripts.pory"
	.string "Let's register each other in our\n"
# 1155 "data/maps/Route104/scripts.pory"
	.string "Pokénavs so we can keep in touch.$"
# 1156 "data/maps/Route104/scripts.pory"

# 1157 "data/maps/Route104/scripts.pory"
Route104_Text_RegisteredBrendan: @ 81EDFA0
# 1158 "data/maps/Route104/scripts.pory"
	.string "{PLAYER} registered Brendan\n"
# 1159 "data/maps/Route104/scripts.pory"
	.string "in the Pokénav.$"
# 1160 "data/maps/Route104/scripts.pory"

# 1161 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanHowsYourPokedex: @ 81EDFC6
# 1162 "data/maps/Route104/scripts.pory"
	.string "Brendan: {PLAYER}, how's your Pokédex?\n"
# 1163 "data/maps/Route104/scripts.pory"
	.string "Have you filled in any pages yet?$"
# 1164 "data/maps/Route104/scripts.pory"

# 1165 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDoingGreatLetsBattle: @ 81EE009
# 1166 "data/maps/Route104/scripts.pory"
	.string "Me, I'm doing great!\p"
# 1167 "data/maps/Route104/scripts.pory"
	.string "Want to check out how good I am with\n"
# 1168 "data/maps/Route104/scripts.pory"
	.string "a battle?$"
# 1169 "data/maps/Route104/scripts.pory"

# 1170 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanNoConfidence: @ 81EE04D
# 1171 "data/maps/Route104/scripts.pory"
	.string "Brendan: What's the matter? Don't have\n"
# 1172 "data/maps/Route104/scripts.pory"
	.string "any confidence in your Pokémon?$"
# 1173 "data/maps/Route104/scripts.pory"

# 1174 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanLetsBattle: @ 81EE094
# 1175 "data/maps/Route104/scripts.pory"
	.string "Brendan: What's up?\n"
# 1176 "data/maps/Route104/scripts.pory"
	.string "Want to have a battle with me?$"
# 1177 "data/maps/Route104/scripts.pory"

# 1178 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanIntro: @ 81EE0C7
# 1179 "data/maps/Route104/scripts.pory"
	.string "Brendan: I know you just became\n"
# 1180 "data/maps/Route104/scripts.pory"
	.string "a Trainer, but I won't go easy!$"
# 1181 "data/maps/Route104/scripts.pory"

# 1182 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanDefeat: @ 81EE107
# 1183 "data/maps/Route104/scripts.pory"
	.string "Hmm…\n"
# 1184 "data/maps/Route104/scripts.pory"
	.string "You're pretty good.$"
# 1185 "data/maps/Route104/scripts.pory"

# 1186 "data/maps/Route104/scripts.pory"
Route104_Text_BrendanPostBattle: @ 81EE120
# 1187 "data/maps/Route104/scripts.pory"
	.string "Brendan: You've gotten pretty decent\n"
# 1188 "data/maps/Route104/scripts.pory"
	.string "at handling Pokémon.\p"
# 1189 "data/maps/Route104/scripts.pory"
	.string "But, you know, you shouldn't just be\n"
# 1190 "data/maps/Route104/scripts.pory"
	.string "making Pokémon battle.\p"
# 1191 "data/maps/Route104/scripts.pory"
	.string "Like Mr. Briney, it's important to\n"
# 1192 "data/maps/Route104/scripts.pory"
	.string "become friends with your Pokémon.$"
