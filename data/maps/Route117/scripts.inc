# 1 "data/maps/Route117/scripts.pory"

# 2 "data/maps/Route117/scripts.pory"
.set LOCALID_DAYCARE_MAN, 3
# 3 "data/maps/Route117/scripts.pory"

# 4 "data/maps/Route117/scripts.pory"
Route117_MapScripts:: @ 81F397D
# 5 "data/maps/Route117/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_OnTransition
# 6 "data/maps/Route117/scripts.pory"
	.byte 0
# 7 "data/maps/Route117/scripts.pory"

# 8 "data/maps/Route117/scripts.pory"
Route117_OnTransition: @ 81F3983
# 9 "data/maps/Route117/scripts.pory"
	call Route117_EventScript_TryMoveDayCareMan
# 10 "data/maps/Route117/scripts.pory"
	end
# 11 "data/maps/Route117/scripts.pory"

# 12 "data/maps/Route117/scripts.pory"
Route117_EventScript_TryMoveDayCareMan:: @ 81F3989
# 13 "data/maps/Route117/scripts.pory"
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route117_EventScript_StopMoveDayCareMan
# 14 "data/maps/Route117/scripts.pory"
	setobjectxyperm LOCALID_DAYCARE_MAN, 47, 6
# 15 "data/maps/Route117/scripts.pory"
Route117_EventScript_StopMoveDayCareMan:: @ 81F3999
# 16 "data/maps/Route117/scripts.pory"
	return
# 17 "data/maps/Route117/scripts.pory"

# 18 "data/maps/Route117/scripts.pory"
Route117_EventScript_Woman:: @ 81F399A
# 19 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_ArentTheseFlowersPretty, MSGBOX_NPC
# 20 "data/maps/Route117/scripts.pory"
	end
# 21 "data/maps/Route117/scripts.pory"

# 22 "data/maps/Route117/scripts.pory"
Route117_EventScript_LittleBoy:: @ 81F39A3
# 23 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AirIsTastyHere, MSGBOX_NPC
# 24 "data/maps/Route117/scripts.pory"
	end
# 25 "data/maps/Route117/scripts.pory"

# 26 "data/maps/Route117/scripts.pory"
Route117_EventScript_Girl:: @ 81F39AC
# 27 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCarePokemonHadNewMove, MSGBOX_NPC
# 28 "data/maps/Route117/scripts.pory"
	end
# 29 "data/maps/Route117/scripts.pory"

# 30 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignVerdanturf:: @ 81F39B5
# 31 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignVerdanturf, MSGBOX_SIGN
# 32 "data/maps/Route117/scripts.pory"
	end
# 33 "data/maps/Route117/scripts.pory"

# 34 "data/maps/Route117/scripts.pory"
Route117_EventScript_RouteSignMauville:: @ 81F39BE
# 35 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_RouteSignMauville, MSGBOX_SIGN
# 36 "data/maps/Route117/scripts.pory"
	end
# 37 "data/maps/Route117/scripts.pory"

# 38 "data/maps/Route117/scripts.pory"
Route117_EventScript_DayCareSign:: @ 81F39C7
# 39 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DayCareSign, MSGBOX_SIGN
# 40 "data/maps/Route117/scripts.pory"
	end
# 41 "data/maps/Route117/scripts.pory"

# 42 "data/maps/Route117/scripts.pory"
Route117_EventScript_Isaac:: @ 81F39D0
# 43 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_ISAAC_1, Route117_Text_IsaacIntro, Route117_Text_IsaacDefeat, Route117_EventScript_RegisterIsaac
# 44 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 45 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
# 46 "data/maps/Route117/scripts.pory"
	goto_if_eq Route117_EventScript_RematchIsaac
# 47 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostBattle, MSGBOX_DEFAULT
# 48 "data/maps/Route117/scripts.pory"
	release
# 49 "data/maps/Route117/scripts.pory"
	end
# 50 "data/maps/Route117/scripts.pory"

# 51 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterIsaac:: @ 81F39FC
# 52 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 53 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacRegister, MSGBOX_DEFAULT
# 55 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ISAAC_1
# 56 "data/maps/Route117/scripts.pory"
	release
# 57 "data/maps/Route117/scripts.pory"
	end
# 58 "data/maps/Route117/scripts.pory"

# 59 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchIsaac:: @ 81F3A1B
# 60 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_ISAAC_1, Route117_Text_IsaacRematchIntro, Route117_Text_IsaacRematchDefeat
# 61 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_IsaacPostRematch, MSGBOX_AUTOCLOSE
# 62 "data/maps/Route117/scripts.pory"
	end
# 63 "data/maps/Route117/scripts.pory"

# 64 "data/maps/Route117/scripts.pory"
Route117_EventScript_Lydia:: @ 81F3A32
# 65 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_LYDIA_1, Route117_Text_LydiaIntro, Route117_Text_LydiaDefeat, Route117_EventScript_RegisterLydia
# 66 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 67 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
# 68 "data/maps/Route117/scripts.pory"
	goto_if_eq Route117_EventScript_RematchLydia
# 69 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostBattle, MSGBOX_DEFAULT
# 70 "data/maps/Route117/scripts.pory"
	release
# 71 "data/maps/Route117/scripts.pory"
	end
# 72 "data/maps/Route117/scripts.pory"

# 73 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterLydia:: @ 81F3A5E
# 74 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 75 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaRegister, MSGBOX_DEFAULT
# 77 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_LYDIA_1
# 78 "data/maps/Route117/scripts.pory"
	release
# 79 "data/maps/Route117/scripts.pory"
	end
# 80 "data/maps/Route117/scripts.pory"

# 81 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchLydia:: @ 81F3A7D
# 82 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_LYDIA_1, Route117_Text_LydiaRematchIntro, Route117_Text_LydiaRematchDefeat
# 83 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_LydiaPostRematch, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route117/scripts.pory"
	end
# 85 "data/maps/Route117/scripts.pory"

# 86 "data/maps/Route117/scripts.pory"
Route117_EventScript_Dylan:: @ 81F3A94
# 87 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DYLAN_1, Route117_Text_DylanIntro, Route117_Text_DylanDefeat, Route117_EventScript_RegisterDylan
# 88 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 89 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
# 90 "data/maps/Route117/scripts.pory"
	goto_if_eq Route117_EventScript_RematchDylan
# 91 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostBattle, MSGBOX_DEFAULT
# 92 "data/maps/Route117/scripts.pory"
	release
# 93 "data/maps/Route117/scripts.pory"
	end
# 94 "data/maps/Route117/scripts.pory"

# 95 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterDylan:: @ 81F3AC0
# 96 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 97 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanRegister, MSGBOX_DEFAULT
# 99 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_DYLAN_1
# 100 "data/maps/Route117/scripts.pory"
	release
# 101 "data/maps/Route117/scripts.pory"
	end
# 102 "data/maps/Route117/scripts.pory"

# 103 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchDylan:: @ 81F3ADF
# 104 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_DYLAN_1, Route117_Text_DylanRematchIntro, Route117_Text_DylanRematchDefeat
# 105 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DylanPostRematch, MSGBOX_AUTOCLOSE
# 106 "data/maps/Route117/scripts.pory"
	end
# 107 "data/maps/Route117/scripts.pory"

# 108 "data/maps/Route117/scripts.pory"
Route117_EventScript_Maria:: @ 81F3AF6
# 109 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Route117_Text_MariaIntro, Route117_Text_MariaDefeat, Route117_EventScript_RegisterMaria
# 110 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 111 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
# 112 "data/maps/Route117/scripts.pory"
	goto_if_eq Route117_EventScript_RematchMaria
# 113 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostBattle, MSGBOX_DEFAULT
# 114 "data/maps/Route117/scripts.pory"
	release
# 115 "data/maps/Route117/scripts.pory"
	end
# 116 "data/maps/Route117/scripts.pory"

# 117 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMaria:: @ 81F3B22
# 118 "data/maps/Route117/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 119 "data/maps/Route117/scripts.pory"
	waitmovement 0
# 120 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaRegister, MSGBOX_DEFAULT
# 121 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_MARIA_1
# 122 "data/maps/Route117/scripts.pory"
	release
# 123 "data/maps/Route117/scripts.pory"
	end
# 124 "data/maps/Route117/scripts.pory"

# 125 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMaria:: @ 81F3B41
# 126 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch TRAINER_MARIA_1, Route117_Text_MariaRematchIntro, Route117_Text_MariaRematchDefeat
# 127 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MariaPostRematch, MSGBOX_AUTOCLOSE
# 128 "data/maps/Route117/scripts.pory"
	end
# 129 "data/maps/Route117/scripts.pory"

# 130 "data/maps/Route117/scripts.pory"
Route117_EventScript_Derek:: @ 81F3B58
# 131 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_DEREK, Route117_Text_DerekIntro, Route117_Text_DerekDefeat
# 132 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/Route117/scripts.pory"
	end
# 134 "data/maps/Route117/scripts.pory"

# 135 "data/maps/Route117/scripts.pory"
Route117_EventScript_Anna:: @ 81F3B6F
# 136 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaIntro, Route117_Text_AnnaDefeat, Route117_Text_AnnaNotEnoughMons, Route117_EventScript_RegisterAnna
# 137 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 138 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
# 139 "data/maps/Route117/scripts.pory"
	goto_if_eq Route117_EventScript_RematchAnna
# 140 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostBattle, MSGBOX_DEFAULT
# 141 "data/maps/Route117/scripts.pory"
	release
# 142 "data/maps/Route117/scripts.pory"
	end
# 143 "data/maps/Route117/scripts.pory"

# 144 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterAnna:: @ 81F3B9F
# 145 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 146 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 147 "data/maps/Route117/scripts.pory"
	release
# 148 "data/maps/Route117/scripts.pory"
	end
# 149 "data/maps/Route117/scripts.pory"

# 150 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchAnna:: @ 81F3BB8
# 151 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_AnnaRematchIntro, Route117_Text_AnnaRematchDefeat, Route117_Text_AnnaRematchNotEnoughMons
# 152 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaPostRematch, MSGBOX_AUTOCLOSE
# 153 "data/maps/Route117/scripts.pory"
	end
# 154 "data/maps/Route117/scripts.pory"

# 155 "data/maps/Route117/scripts.pory"
Route117_EventScript_Meg:: @ 81F3BD3
# 156 "data/maps/Route117/scripts.pory"
	trainerbattle_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegIntro, Route117_Text_MegDefeat, Route117_Text_MegNotEnoughMons, Route117_EventScript_RegisterMeg
# 157 "data/maps/Route117/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 158 "data/maps/Route117/scripts.pory"
	compare VAR_RESULT, TRUE
# 159 "data/maps/Route117/scripts.pory"
	goto_if_eq Route117_EventScript_RematchMeg
# 160 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostBattle, MSGBOX_DEFAULT
# 161 "data/maps/Route117/scripts.pory"
	release
# 162 "data/maps/Route117/scripts.pory"
	end
# 163 "data/maps/Route117/scripts.pory"

# 164 "data/maps/Route117/scripts.pory"
Route117_EventScript_RegisterMeg:: @ 81F3C03
# 165 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AnnaAndMegRegister, MSGBOX_DEFAULT
# 166 "data/maps/Route117/scripts.pory"
	register_matchcall TRAINER_ANNA_AND_MEG_1
# 167 "data/maps/Route117/scripts.pory"
	release
# 168 "data/maps/Route117/scripts.pory"
	end
# 169 "data/maps/Route117/scripts.pory"

# 170 "data/maps/Route117/scripts.pory"
Route117_EventScript_RematchMeg:: @ 81F3C1C
# 171 "data/maps/Route117/scripts.pory"
	trainerbattle_rematch_double TRAINER_ANNA_AND_MEG_1, Route117_Text_MegRematchIntro, Route117_Text_MegRematchDefeat, Route117_Text_MegRematchNotEnoughMons
# 172 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MegPostRematch, MSGBOX_AUTOCLOSE
# 173 "data/maps/Route117/scripts.pory"
	end
# 174 "data/maps/Route117/scripts.pory"

# 175 "data/maps/Route117/scripts.pory"
Route117_EventScript_Melina:: @ 81F3C37
# 176 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_MELINA, Route117_Text_MelinaIntro, Route117_Text_MelinaDefeat
# 177 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_MelinaPostBattle, MSGBOX_AUTOCLOSE
# 178 "data/maps/Route117/scripts.pory"
	end
# 179 "data/maps/Route117/scripts.pory"

# 180 "data/maps/Route117/scripts.pory"
Route117_EventScript_Brandi:: @ 81F3C4E
# 181 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_BRANDI, Route117_Text_BrandiIntro, Route117_Text_BrandiDefeat
# 182 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_BrandiPostBattle, MSGBOX_AUTOCLOSE
# 183 "data/maps/Route117/scripts.pory"
	end
# 184 "data/maps/Route117/scripts.pory"

# 185 "data/maps/Route117/scripts.pory"
Route117_EventScript_Aisha:: @ 81F3C65
# 186 "data/maps/Route117/scripts.pory"
	trainerbattle_single TRAINER_AISHA, Route117_Text_AishaIntro, Route117_Text_AishaDefeat
# 187 "data/maps/Route117/scripts.pory"
	msgbox Route117_Text_AishaPostBattle, MSGBOX_AUTOCLOSE
# 188 "data/maps/Route117/scripts.pory"
	end
# 189 "data/maps/Route117/scripts.pory"

# 190 "data/maps/Route117/scripts.pory"
Route117_Text_DayCarePokemonHadNewMove: @ 81F3C7C
# 191 "data/maps/Route117/scripts.pory"
	.string "I left my Pokémon at the Day Care.\p"
# 192 "data/maps/Route117/scripts.pory"
	.string "When I got it back, it had a new move\n"
# 193 "data/maps/Route117/scripts.pory"
	.string "that I didn't teach it.\l"
# 194 "data/maps/Route117/scripts.pory"
	.string "I was really, really surprised.$"
# 195 "data/maps/Route117/scripts.pory"

# 196 "data/maps/Route117/scripts.pory"
Route117_Text_ArentTheseFlowersPretty: @ 81F3CFD
# 197 "data/maps/Route117/scripts.pory"
	.string "What do you think?\n"
# 198 "data/maps/Route117/scripts.pory"
	.string "Aren't these flowers pretty?\p"
# 199 "data/maps/Route117/scripts.pory"
	.string "I planted them all!$"
# 200 "data/maps/Route117/scripts.pory"

# 201 "data/maps/Route117/scripts.pory"
Route117_Text_AirIsTastyHere: @ 81F3D41
# 202 "data/maps/Route117/scripts.pory"
	.string "The air is tasty here!$"
# 203 "data/maps/Route117/scripts.pory"

# 204 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignVerdanturf: @ 81F3D58
# 205 "data/maps/Route117/scripts.pory"
	.string "Route 117\n"
# 206 "data/maps/Route117/scripts.pory"
	.string "{LEFT_ARROW} Verdanturf Town$"
# 207 "data/maps/Route117/scripts.pory"

# 208 "data/maps/Route117/scripts.pory"
Route117_Text_RouteSignMauville: @ 81F3D74
# 209 "data/maps/Route117/scripts.pory"
	.string "Route 117\n"
# 210 "data/maps/Route117/scripts.pory"
	.string "{RIGHT_ARROW} Mauville City$"
# 211 "data/maps/Route117/scripts.pory"

# 212 "data/maps/Route117/scripts.pory"
Route117_Text_DayCareSign: @ 81F3D8E
# 213 "data/maps/Route117/scripts.pory"
	.string "Pokémon Day Care\n"
# 214 "data/maps/Route117/scripts.pory"
	.string "“Let us raise your Pokémon.”$"
