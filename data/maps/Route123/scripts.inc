# 1 "data/maps/Route123/scripts.pory"

# 2 "data/maps/Route123/scripts.pory"
Route123_MapScripts:: @ 81F6147
# 3 "data/maps/Route123/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route123_OnTransition
# 4 "data/maps/Route123/scripts.pory"
	.byte 0
# 5 "data/maps/Route123/scripts.pory"

# 6 "data/maps/Route123/scripts.pory"
Route123_OnTransition: @ 81F614D
# 7 "data/maps/Route123/scripts.pory"
	special SetRoute123Weather
# 8 "data/maps/Route123/scripts.pory"
	end
# 9 "data/maps/Route123/scripts.pory"

# 10 "data/maps/Route123/scripts.pory"
Route123_EventScript_GigaDrainGirl:: @ 81F6151
# 11 "data/maps/Route123/scripts.pory"
	lock
# 12 "data/maps/Route123/scripts.pory"
	faceplayer
# 13 "data/maps/Route123/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM19, Route123_EventScript_ReceivedGigaDrain
# 14 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_LoveGrassMonsHaveAny, MSGBOX_DEFAULT
# 15 "data/maps/Route123/scripts.pory"
	special IsGrassTypeInParty
# 16 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, FALSE
# 17 "data/maps/Route123/scripts.pory"
	goto_if_eq Route123_EventScript_NoGrassMons
# 18 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YouLikeGrassMonsTooHaveThis, MSGBOX_DEFAULT
# 19 "data/maps/Route123/scripts.pory"
	giveitem ITEM_TM19
# 20 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, FALSE
# 21 "data/maps/Route123/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 22 "data/maps/Route123/scripts.pory"
	setflag FLAG_RECEIVED_TM19
# 23 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 24 "data/maps/Route123/scripts.pory"
	release
# 25 "data/maps/Route123/scripts.pory"
	end
# 26 "data/maps/Route123/scripts.pory"

# 27 "data/maps/Route123/scripts.pory"
Route123_EventScript_NoGrassMons:: @ 81F619E
# 28 "data/maps/Route123/scripts.pory"
	release
# 29 "data/maps/Route123/scripts.pory"
	end
# 30 "data/maps/Route123/scripts.pory"

# 31 "data/maps/Route123/scripts.pory"
Route123_EventScript_ReceivedGigaDrain:: @ 81F61A0
# 32 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CheckTreesWithMyGrassMon, MSGBOX_DEFAULT
# 33 "data/maps/Route123/scripts.pory"
	release
# 34 "data/maps/Route123/scripts.pory"
	end
# 35 "data/maps/Route123/scripts.pory"

# 36 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSign:: @ 81F61AA
# 37 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSign, MSGBOX_SIGN
# 38 "data/maps/Route123/scripts.pory"
	end
# 39 "data/maps/Route123/scripts.pory"

# 40 "data/maps/Route123/scripts.pory"
Route123_EventScript_RouteSignMtPyre:: @ 81F61B3
# 41 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_RouteSignMtPyre, MSGBOX_SIGN
# 42 "data/maps/Route123/scripts.pory"
	end
# 43 "data/maps/Route123/scripts.pory"

# 44 "data/maps/Route123/scripts.pory"
Route123_EventScript_BerryMastersHouseSign:: @ 81F61BC
# 45 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BerryMastersHouse, MSGBOX_SIGN
# 46 "data/maps/Route123/scripts.pory"
	end
# 47 "data/maps/Route123/scripts.pory"

# 48 "data/maps/Route123/scripts.pory"
Route123_EventScript_Wendy:: @ 81F61C5
# 49 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_WENDY, Route123_Text_WendyIntro, Route123_Text_WendyDefeat
# 50 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_WendyPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/Route123/scripts.pory"
	end
# 52 "data/maps/Route123/scripts.pory"

# 53 "data/maps/Route123/scripts.pory"
Route123_EventScript_Braxton:: @ 81F61DC
# 54 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_BRAXTON, Route123_Text_BraxtonIntro, Route123_Text_BraxtonDefeat
# 55 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_BraxtonPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/Route123/scripts.pory"
	end
# 57 "data/maps/Route123/scripts.pory"

# 58 "data/maps/Route123/scripts.pory"
Route123_EventScript_Violet:: @ 81F61F3
# 59 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_VIOLET, Route123_Text_VioletIntro, Route123_Text_VioletDefeat
# 60 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/Route123/scripts.pory"
	end
# 62 "data/maps/Route123/scripts.pory"

# 63 "data/maps/Route123/scripts.pory"
Route123_EventScript_Cameron:: @ 81F620A
# 64 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_CAMERON_1, Route123_Text_CameronIntro, Route123_Text_CameronDefeat, Route123_EventScript_RegisterCameron
# 65 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 66 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, TRUE
# 67 "data/maps/Route123/scripts.pory"
	goto_if_eq Route123_EventScript_RematchCameron
# 68 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostBattle, MSGBOX_DEFAULT
# 69 "data/maps/Route123/scripts.pory"
	release
# 70 "data/maps/Route123/scripts.pory"
	end
# 71 "data/maps/Route123/scripts.pory"

# 72 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterCameron:: @ 81F6236
# 73 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 74 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 75 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronRegister, MSGBOX_DEFAULT
# 76 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_CAMERON_1
# 77 "data/maps/Route123/scripts.pory"
	release
# 78 "data/maps/Route123/scripts.pory"
	end
# 79 "data/maps/Route123/scripts.pory"

# 80 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchCameron:: @ 81F6255
# 81 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_CAMERON_1, Route123_Text_CameronRematchIntro, Route123_Text_CameronRematchDefeat
# 82 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_CameronPostRematch, MSGBOX_AUTOCLOSE
# 83 "data/maps/Route123/scripts.pory"
	end
# 84 "data/maps/Route123/scripts.pory"

# 85 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jacki:: @ 81F626C
# 86 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JACKI_1, Route123_Text_JackiIntro, Route123_Text_JackiDefeat, Route123_EventScript_RegisterJacki
# 87 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 88 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, TRUE
# 89 "data/maps/Route123/scripts.pory"
	goto_if_eq Route123_EventScript_RematchJacki
# 90 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostBattle, MSGBOX_DEFAULT
# 91 "data/maps/Route123/scripts.pory"
	release
# 92 "data/maps/Route123/scripts.pory"
	end
# 93 "data/maps/Route123/scripts.pory"

# 94 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterJacki:: @ 81F6298
# 95 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 96 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiRegister, MSGBOX_DEFAULT
# 98 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_JACKI_1
# 99 "data/maps/Route123/scripts.pory"
	release
# 100 "data/maps/Route123/scripts.pory"
	end
# 101 "data/maps/Route123/scripts.pory"

# 102 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchJacki:: @ 81F62B7
# 103 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_JACKI_1, Route123_Text_JackiRematchIntro, Route123_Text_JackiRematchDefeat
# 104 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JackiPostRematch, MSGBOX_AUTOCLOSE
# 105 "data/maps/Route123/scripts.pory"
	end
# 106 "data/maps/Route123/scripts.pory"

# 107 "data/maps/Route123/scripts.pory"
Route123_EventScript_Miu:: @ 81F62CE
# 108 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_MiuIntro, Route123_Text_MiuDefeat, Route123_Text_MiuNotEnoughMons
# 109 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_MiuPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/Route123/scripts.pory"
	end
# 111 "data/maps/Route123/scripts.pory"

# 112 "data/maps/Route123/scripts.pory"
Route123_EventScript_Yuki:: @ 81F62E9
# 113 "data/maps/Route123/scripts.pory"
	trainerbattle_double TRAINER_MIU_AND_YUKI, Route123_Text_YukiIntro, Route123_Text_YukiDefeat, Route123_Text_YukiNotEnoughMons
# 114 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/Route123/scripts.pory"
	end
# 116 "data/maps/Route123/scripts.pory"

# 117 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kindra:: @ 81F6304
# 118 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KINDRA, Route123_Text_KindraIntro, Route123_Text_KindraDefeat
# 119 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KindraPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/Route123/scripts.pory"
	end
# 121 "data/maps/Route123/scripts.pory"

# 122 "data/maps/Route123/scripts.pory"
Route123_EventScript_Frederick:: @ 81F631B
# 123 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, Route123_Text_FrederickIntro, Route123_Text_FrederickDefeat
# 124 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FrederickPostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/Route123/scripts.pory"
	end
# 126 "data/maps/Route123/scripts.pory"

# 127 "data/maps/Route123/scripts.pory"
Route123_EventScript_Alberto:: @ 81F6332
# 128 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Route123_Text_AlbertoIntro, Route123_Text_AlbertoDefeat
# 129 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
# 130 "data/maps/Route123/scripts.pory"
	end
# 131 "data/maps/Route123/scripts.pory"

# 132 "data/maps/Route123/scripts.pory"
Route123_EventScript_Ed:: @ 81F6349
# 133 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_ED, Route123_Text_EdIntro, Route123_Text_EdDefeat
# 134 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 135 "data/maps/Route123/scripts.pory"
	end
# 136 "data/maps/Route123/scripts.pory"

# 137 "data/maps/Route123/scripts.pory"
Route123_EventScript_Kayley:: @ 81F6360
# 138 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_KAYLEY, Route123_Text_KayleyIntro, Route123_Text_KayleyDefeat
# 139 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_KayleyPostBattle, MSGBOX_AUTOCLOSE
# 140 "data/maps/Route123/scripts.pory"
	end
# 141 "data/maps/Route123/scripts.pory"

# 142 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jonas:: @ 81F6377
# 143 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JONAS, Route123_Text_JonasIntro, Route123_Text_JonasDefeat
# 144 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JonasPostBattle, MSGBOX_AUTOCLOSE
# 145 "data/maps/Route123/scripts.pory"
	end
# 146 "data/maps/Route123/scripts.pory"

# 147 "data/maps/Route123/scripts.pory"
Route123_EventScript_Jazmyn:: @ 81F638E
# 148 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_JAZMYN, Route123_Text_JazmynIntro, Route123_Text_JazmynDefeat
# 149 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_JazmynPostBattle, MSGBOX_AUTOCLOSE
# 150 "data/maps/Route123/scripts.pory"
	end
# 151 "data/maps/Route123/scripts.pory"

# 152 "data/maps/Route123/scripts.pory"
Route123_EventScript_Davis:: @ 81F63A5
# 153 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_DAVIS, Route123_Text_DavisIntro, Route123_Text_DavisDefeat
# 154 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_DavisPostBattle, MSGBOX_AUTOCLOSE
# 155 "data/maps/Route123/scripts.pory"
	end
# 156 "data/maps/Route123/scripts.pory"

# 157 "data/maps/Route123/scripts.pory"
Route123_EventScript_Fernando:: @ 81F63BC
# 158 "data/maps/Route123/scripts.pory"
	trainerbattle_single TRAINER_FERNANDO_1, Route123_Text_FernandoIntro, Route123_Text_FernandoDefeat, Route123_EventScript_RegisterFernando
# 159 "data/maps/Route123/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 160 "data/maps/Route123/scripts.pory"
	compare VAR_RESULT, TRUE
# 161 "data/maps/Route123/scripts.pory"
	goto_if_eq Route123_EventScript_RematchFernando
# 162 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostBattle, MSGBOX_DEFAULT
# 163 "data/maps/Route123/scripts.pory"
	release
# 164 "data/maps/Route123/scripts.pory"
	end
# 165 "data/maps/Route123/scripts.pory"

# 166 "data/maps/Route123/scripts.pory"
Route123_EventScript_RegisterFernando:: @ 81F63E8
# 167 "data/maps/Route123/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 168 "data/maps/Route123/scripts.pory"
	waitmovement 0
# 169 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoRegister, MSGBOX_DEFAULT
# 170 "data/maps/Route123/scripts.pory"
	register_matchcall TRAINER_FERNANDO_1
# 171 "data/maps/Route123/scripts.pory"
	release
# 172 "data/maps/Route123/scripts.pory"
	end
# 173 "data/maps/Route123/scripts.pory"

# 174 "data/maps/Route123/scripts.pory"
Route123_EventScript_RematchFernando:: @ 81F6407
# 175 "data/maps/Route123/scripts.pory"
	trainerbattle_rematch TRAINER_FERNANDO_1, Route123_Text_FernandoRematchIntro, Route123_Text_FernandoRematchDefeat
# 176 "data/maps/Route123/scripts.pory"
	msgbox Route123_Text_FernandoPostRematch, MSGBOX_AUTOCLOSE
# 177 "data/maps/Route123/scripts.pory"
	end
# 178 "data/maps/Route123/scripts.pory"

# 179 "data/maps/Route123/scripts.pory"
Route123_Text_LoveGrassMonsHaveAny: @ 81F641E
# 180 "data/maps/Route123/scripts.pory"
	.string "I love Grass-type Pokémon!\p"
# 181 "data/maps/Route123/scripts.pory"
	.string "Do you have any Grass-type Pokémon?$"
# 182 "data/maps/Route123/scripts.pory"

# 183 "data/maps/Route123/scripts.pory"
Route123_Text_YouLikeGrassMonsTooHaveThis: @ 81F645D
# 184 "data/maps/Route123/scripts.pory"
	.string "Oh?\p"
# 185 "data/maps/Route123/scripts.pory"
	.string "You like Grass-type Pokémon, too,\n"
# 186 "data/maps/Route123/scripts.pory"
	.string "don't you?\p"
# 187 "data/maps/Route123/scripts.pory"
	.string "I'm so happy, you can have this!\n"
# 188 "data/maps/Route123/scripts.pory"
	.string "It's a token of our friendship.$"
# 189 "data/maps/Route123/scripts.pory"

# 190 "data/maps/Route123/scripts.pory"
Route123_Text_CheckTreesWithMyGrassMon: @ 81F64CF
# 191 "data/maps/Route123/scripts.pory"
	.string "I check trees with my Grass-type\n"
# 192 "data/maps/Route123/scripts.pory"
	.string "Pokémon. I'm like a tree doctor.$"
# 193 "data/maps/Route123/scripts.pory"

# 194 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSign: @ 81F6511
# 195 "data/maps/Route123/scripts.pory"
	.string "{RIGHT_ARROW} Route 123\n"
# 196 "data/maps/Route123/scripts.pory"
	.string "{LEFT_ARROW} Route 118$"
# 197 "data/maps/Route123/scripts.pory"

# 198 "data/maps/Route123/scripts.pory"
Route123_Text_RouteSignMtPyre: @ 81F6529
# 199 "data/maps/Route123/scripts.pory"
	.string "{UP_ARROW} Mt. Pyre\n"
# 200 "data/maps/Route123/scripts.pory"
	.string "“Forbidden to the faint of heart.”$"
# 201 "data/maps/Route123/scripts.pory"

# 202 "data/maps/Route123/scripts.pory"
Route123_Text_BerryMastersHouse: @ 81F6557
# 203 "data/maps/Route123/scripts.pory"
	.string "Berry Master's House$"
