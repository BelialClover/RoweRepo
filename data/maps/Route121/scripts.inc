# 1 "data/maps/Route121/scripts.pory"

# 2 "data/maps/Route121/scripts.pory"
.set LOCALID_GRUNT_1, 12
# 3 "data/maps/Route121/scripts.pory"
.set LOCALID_GRUNT_2, 13
# 4 "data/maps/Route121/scripts.pory"
.set LOCALID_GRUNT_3, 14
# 5 "data/maps/Route121/scripts.pory"

# 6 "data/maps/Route121/scripts.pory"
Route121_MapScripts:: @ 81F5DFC
# 7 "data/maps/Route121/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route121_OnTransition
# 8 "data/maps/Route121/scripts.pory"
	.byte 0
# 9 "data/maps/Route121/scripts.pory"

# 10 "data/maps/Route121/scripts.pory"
Route121_OnTransition:
# 11 "data/maps/Route121/scripts.pory"
	call EventScript_SetMunchlaxFamilyGfx
# 12 "data/maps/Route121/scripts.pory"
	end
# 13 "data/maps/Route121/scripts.pory"

# 14 "data/maps/Route121/scripts.pory"
Route121_EventScript_Woman:: @ 81F5DFD
# 15 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_AheadLoomsMtPyre, MSGBOX_NPC
# 16 "data/maps/Route121/scripts.pory"
	end
# 17 "data/maps/Route121/scripts.pory"

# 18 "data/maps/Route121/scripts.pory"
Route121_EventScript_MtPyrePierSign:: @ 81F5E06
# 19 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MtPyrePierSign, MSGBOX_SIGN
# 20 "data/maps/Route121/scripts.pory"
	end
# 21 "data/maps/Route121/scripts.pory"

# 22 "data/maps/Route121/scripts.pory"
Route121_EventScript_SafariZoneSign:: @ 81F5E0F
# 23 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_SafariZoneSign, MSGBOX_SIGN
# 24 "data/maps/Route121/scripts.pory"
	end
# 25 "data/maps/Route121/scripts.pory"

# 26 "data/maps/Route121/scripts.pory"
Route121_EventScript_AquaGruntsMoveOut:: @ 81F5E18
# 27 "data/maps/Route121/scripts.pory"
	lockall
# 28 "data/maps/Route121/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, 0
# 29 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceRight
# 30 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 31 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_OkayMoveOutToMtPyre, MSGBOX_DEFAULT
# 32 "data/maps/Route121/scripts.pory"
	closemessage
# 33 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_1, Route121_Movement_Grunt1Exit
# 34 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_2, Route121_Movement_Grunt2Exit
# 35 "data/maps/Route121/scripts.pory"
	applymovement LOCALID_GRUNT_3, Route121_Movement_Grunt3Exit
# 36 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 37 "data/maps/Route121/scripts.pory"
	fadedefaultbgm
# 38 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 39 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 40 "data/maps/Route121/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 41 "data/maps/Route121/scripts.pory"
	setvar VAR_ROUTE121_STATE, 1
# 42 "data/maps/Route121/scripts.pory"
	releaseall
# 43 "data/maps/Route121/scripts.pory"
	end
# 44 "data/maps/Route121/scripts.pory"

# 45 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt1Exit: @ 81F5E59
# 46 "data/maps/Route121/scripts.pory"
	walk_down
# 47 "data/maps/Route121/scripts.pory"
	walk_down
# 48 "data/maps/Route121/scripts.pory"
	walk_down
# 49 "data/maps/Route121/scripts.pory"
	walk_down
# 50 "data/maps/Route121/scripts.pory"
	walk_down
# 51 "data/maps/Route121/scripts.pory"
	walk_down
# 52 "data/maps/Route121/scripts.pory"
	walk_down
# 53 "data/maps/Route121/scripts.pory"
	walk_down
# 54 "data/maps/Route121/scripts.pory"
	step_end
# 55 "data/maps/Route121/scripts.pory"

# 56 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt2Exit: @ 81F5E62
# 57 "data/maps/Route121/scripts.pory"
	walk_down
# 58 "data/maps/Route121/scripts.pory"
	walk_down
# 59 "data/maps/Route121/scripts.pory"
	walk_down
# 60 "data/maps/Route121/scripts.pory"
	walk_down
# 61 "data/maps/Route121/scripts.pory"
	walk_down
# 62 "data/maps/Route121/scripts.pory"
	walk_down
# 63 "data/maps/Route121/scripts.pory"
	walk_down
# 64 "data/maps/Route121/scripts.pory"
	walk_down
# 65 "data/maps/Route121/scripts.pory"
	step_end
# 66 "data/maps/Route121/scripts.pory"

# 67 "data/maps/Route121/scripts.pory"
Route121_Movement_Grunt3Exit: @ 81F5E6B
# 68 "data/maps/Route121/scripts.pory"
	walk_down
# 69 "data/maps/Route121/scripts.pory"
	walk_down
# 70 "data/maps/Route121/scripts.pory"
	walk_down
# 71 "data/maps/Route121/scripts.pory"
	walk_down
# 72 "data/maps/Route121/scripts.pory"
	walk_down
# 73 "data/maps/Route121/scripts.pory"
	walk_down
# 74 "data/maps/Route121/scripts.pory"
	walk_down
# 75 "data/maps/Route121/scripts.pory"
	walk_down
# 76 "data/maps/Route121/scripts.pory"
	step_end
# 77 "data/maps/Route121/scripts.pory"

# 78 "data/maps/Route121/scripts.pory"
Route121_EventScript_Vanessa:: @ 81F5E74
# 79 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_VANESSA, Route121_Text_VanessaIntro, Route121_Text_VanessaDefeat
# 80 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_VanessaPostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/Route121/scripts.pory"
	end
# 82 "data/maps/Route121/scripts.pory"

# 83 "data/maps/Route121/scripts.pory"
Route121_EventScript_Walter:: @ 81F5E8B
# 84 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_WALTER_1, Route121_Text_WalterIntro, Route121_Text_WalterDefeat, Route121_EventScript_RegisterWalter
# 85 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 86 "data/maps/Route121/scripts.pory"
	compare VAR_RESULT, TRUE
# 87 "data/maps/Route121/scripts.pory"
	goto_if_eq Route121_EventScript_RematchWalter
# 88 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostBattle, MSGBOX_DEFAULT
# 89 "data/maps/Route121/scripts.pory"
	release
# 90 "data/maps/Route121/scripts.pory"
	end
# 91 "data/maps/Route121/scripts.pory"

# 92 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterWalter:: @ 81F5EB7
# 93 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 94 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterRegister, MSGBOX_DEFAULT
# 96 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_WALTER_1
# 97 "data/maps/Route121/scripts.pory"
	release
# 98 "data/maps/Route121/scripts.pory"
	end
# 99 "data/maps/Route121/scripts.pory"

# 100 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchWalter:: @ 81F5ED6
# 101 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_WALTER_1, Route121_Text_WalterRematchIntro, Route121_Text_WalterRematchDefeat
# 102 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_WalterPostRematch, MSGBOX_AUTOCLOSE
# 103 "data/maps/Route121/scripts.pory"
	end
# 104 "data/maps/Route121/scripts.pory"

# 105 "data/maps/Route121/scripts.pory"
Route121_EventScript_Tammy:: @ 81F5EED
# 106 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_TAMMY, Route121_Text_TammyIntro, Route121_Text_TammyDefeat
# 107 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_TammyPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/Route121/scripts.pory"
	end
# 109 "data/maps/Route121/scripts.pory"

# 110 "data/maps/Route121/scripts.pory"
Route121_EventScript_Kate:: @ 81F5F04
# 111 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_KateIntro, Route121_Text_KateDefeat, Route121_Text_KateNotEnoughMons
# 112 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_KatePostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/Route121/scripts.pory"
	end
# 114 "data/maps/Route121/scripts.pory"

# 115 "data/maps/Route121/scripts.pory"
Route121_EventScript_Joy:: @ 81F5F1F
# 116 "data/maps/Route121/scripts.pory"
	trainerbattle_double TRAINER_KATE_AND_JOY, Route121_Text_JoyIntro, Route121_Text_JoyDefeat, Route121_Text_JoyNotEnoughMons
# 117 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JoyPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/Route121/scripts.pory"
	end
# 119 "data/maps/Route121/scripts.pory"

# 120 "data/maps/Route121/scripts.pory"
Route121_EventScript_Jessica:: @ 81F5F3A
# 121 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_JESSICA_1, Route121_Text_JessicaIntro, Route121_Text_JessicaDefeat, Route121_EventScript_RegisterJessica
# 122 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 123 "data/maps/Route121/scripts.pory"
	compare VAR_RESULT, TRUE
# 124 "data/maps/Route121/scripts.pory"
	goto_if_eq Route121_EventScript_RematchJessica
# 125 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostBattle, MSGBOX_DEFAULT
# 126 "data/maps/Route121/scripts.pory"
	release
# 127 "data/maps/Route121/scripts.pory"
	end
# 128 "data/maps/Route121/scripts.pory"

# 129 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterJessica:: @ 81F5F66
# 130 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 131 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 132 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaRegister, MSGBOX_DEFAULT
# 133 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_JESSICA_1
# 134 "data/maps/Route121/scripts.pory"
	release
# 135 "data/maps/Route121/scripts.pory"
	end
# 136 "data/maps/Route121/scripts.pory"

# 137 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchJessica:: @ 81F5F85
# 138 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_JESSICA_1, Route121_Text_JessicaRematchIntro, Route121_Text_JessicaRematchDefeat
# 139 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_JessicaPostRematch, MSGBOX_AUTOCLOSE
# 140 "data/maps/Route121/scripts.pory"
	end
# 141 "data/maps/Route121/scripts.pory"

# 142 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cale:: @ 81F5F9C
# 143 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CALE, Route121_Text_CaleIntro, Route121_Text_CaleDefeat
# 144 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CalePostBattle, MSGBOX_AUTOCLOSE
# 145 "data/maps/Route121/scripts.pory"
	end
# 146 "data/maps/Route121/scripts.pory"

# 147 "data/maps/Route121/scripts.pory"
Route121_EventScript_Myles:: @ 81F5FB3
# 148 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MYLES, Route121_Text_MylesIntro, Route121_Text_MylesDefeat
# 149 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MylesPostBattle, MSGBOX_AUTOCLOSE
# 150 "data/maps/Route121/scripts.pory"
	end
# 151 "data/maps/Route121/scripts.pory"

# 152 "data/maps/Route121/scripts.pory"
Route121_EventScript_Pat:: @ 81F5FCA
# 153 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_PAT, Route121_Text_PatIntro, Route121_Text_PatDefeat
# 154 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_PatPostBattle, MSGBOX_AUTOCLOSE
# 155 "data/maps/Route121/scripts.pory"
	end
# 156 "data/maps/Route121/scripts.pory"

# 157 "data/maps/Route121/scripts.pory"
Route121_EventScript_Marcel:: @ 81F5FE1
# 158 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_MARCEL, Route121_Text_MarcelIntro, Route121_Text_MarcelDefeat
# 159 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_MarcelPostBattle, MSGBOX_AUTOCLOSE
# 160 "data/maps/Route121/scripts.pory"
	end
# 161 "data/maps/Route121/scripts.pory"

# 162 "data/maps/Route121/scripts.pory"
Route121_EventScript_Cristin:: @ 81F5FF8
# 163 "data/maps/Route121/scripts.pory"
	trainerbattle_single TRAINER_CRISTIN_1, Route121_Text_CristinIntro, Route121_Text_CristinDefeat, Route121_EventScript_RegisterCristin
# 164 "data/maps/Route121/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 165 "data/maps/Route121/scripts.pory"
	compare VAR_RESULT, TRUE
# 166 "data/maps/Route121/scripts.pory"
	goto_if_eq Route121_EventScript_RematchCristin
# 167 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostBattle, MSGBOX_DEFAULT
# 168 "data/maps/Route121/scripts.pory"
	release
# 169 "data/maps/Route121/scripts.pory"
	end
# 170 "data/maps/Route121/scripts.pory"

# 171 "data/maps/Route121/scripts.pory"
Route121_EventScript_RegisterCristin:: @ 81F6024
# 172 "data/maps/Route121/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 173 "data/maps/Route121/scripts.pory"
	waitmovement 0
# 174 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinRegister, MSGBOX_DEFAULT
# 175 "data/maps/Route121/scripts.pory"
	register_matchcall TRAINER_CRISTIN_1
# 176 "data/maps/Route121/scripts.pory"
	release
# 177 "data/maps/Route121/scripts.pory"
	end
# 178 "data/maps/Route121/scripts.pory"

# 179 "data/maps/Route121/scripts.pory"
Route121_EventScript_RematchCristin:: @ 81F6043
# 180 "data/maps/Route121/scripts.pory"
	trainerbattle_rematch TRAINER_CRISTIN_1, Route121_Text_CristinRematchIntro, Route121_Text_CristinRematchDefeat
# 181 "data/maps/Route121/scripts.pory"
	msgbox Route121_Text_CristinPostRematch, MSGBOX_AUTOCLOSE
# 182 "data/maps/Route121/scripts.pory"
	end
# 183 "data/maps/Route121/scripts.pory"

# 184 "data/maps/Route121/scripts.pory"
Route121_Text_OkayMoveOutToMtPyre: @ 81F605A
# 185 "data/maps/Route121/scripts.pory"
	.string "Okay!\n"
# 186 "data/maps/Route121/scripts.pory"
	.string "We're to move out to Mt. Pyre!$"
# 187 "data/maps/Route121/scripts.pory"

# 188 "data/maps/Route121/scripts.pory"
Route121_Text_AheadLoomsMtPyre: @ 81F607F
# 189 "data/maps/Route121/scripts.pory"
	.string "Ahead looms Mt. Pyre…\p"
# 190 "data/maps/Route121/scripts.pory"
	.string "It is a natural monument to the spirits \n"
# 191 "data/maps/Route121/scripts.pory"
	.string "of departed Pokémon…$"
# 192 "data/maps/Route121/scripts.pory"

# 193 "data/maps/Route121/scripts.pory"
Route121_Text_MtPyrePierSign: @ 81F60D3
# 194 "data/maps/Route121/scripts.pory"
	.string "Mt. Pyre Pier\p"
# 195 "data/maps/Route121/scripts.pory"
	.string "…The sign is old and worn out.\n"
# 196 "data/maps/Route121/scripts.pory"
	.string "The words are barely legible…$"
# 197 "data/maps/Route121/scripts.pory"

# 198 "data/maps/Route121/scripts.pory"
Route121_Text_SafariZoneSign: @ 81F611E
# 199 "data/maps/Route121/scripts.pory"
	.string "“Filled with rare Pokémon!”\n"
# 200 "data/maps/Route121/scripts.pory"
	.string "Safari Zone$"
