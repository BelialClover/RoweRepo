# 1 "data/maps/Route114/scripts.pory"

# 2 "data/maps/Route114/scripts.pory"
Route114_MapScripts:: @ 81F252F
# 3 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_OnTransition
# 4 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route114_OnLoad
# 5 "data/maps/Route114/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route114_OnFrame
# 6 "data/maps/Route114/scripts.pory"
	.byte 0
# 7 "data/maps/Route114/scripts.pory"

# 8 "data/maps/Route114/scripts.pory"
Route114_OnTransition: @ 81F253F
# 9 "data/maps/Route114/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 10 "data/maps/Route114/scripts.pory"
	call_if_eq AbnormalWeather_EventScript_HideMapNamePopup
# 11 "data/maps/Route114/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH
# 12 "data/maps/Route114/scripts.pory"
	call_if_eq AbnormalWeather_StartGroudonWeather
# 13 "data/maps/Route114/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH
# 14 "data/maps/Route114/scripts.pory"
	call_if_eq AbnormalWeather_StartGroudonWeather
# 15 "data/maps/Route114/scripts.pory"
	end
# 16 "data/maps/Route114/scripts.pory"

# 17 "data/maps/Route114/scripts.pory"
Route114_OnLoad: @ 81F2561
# 18 "data/maps/Route114/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_NORTH
# 19 "data/maps/Route114/scripts.pory"
	call_if_eq AbnormalWeather_EventScript_PlaceTilesRoute114North
# 20 "data/maps/Route114/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_114_SOUTH
# 21 "data/maps/Route114/scripts.pory"
	call_if_eq AbnormalWeather_EventScript_PlaceTilesRoute114South
# 22 "data/maps/Route114/scripts.pory"
	end
# 23 "data/maps/Route114/scripts.pory"

# 24 "data/maps/Route114/scripts.pory"
Route114_OnFrame: @ 81F2578
# 25 "data/maps/Route114/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 26 "data/maps/Route114/scripts.pory"
	.2byte 0
# 27 "data/maps/Route114/scripts.pory"

# 28 "data/maps/Route114/scripts.pory"
Route114_EventScript_Man:: @ 81F2582
# 29 "data/maps/Route114/scripts.pory"
	lock
# 30 "data/maps/Route114/scripts.pory"
	faceplayer
# 31 "data/maps/Route114/scripts.pory"
	dotimebasedevents
# 32 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_114_RECEIVED_BERRY, Route114_EventScript_ReceivedBerry
# 33 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LoveUsingBerryCrushShareBerry, MSGBOX_DEFAULT
# 34 "data/maps/Route114/scripts.pory"
	random NUM_ROUTE_114_MAN_BERRIES
# 35 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, NUM_ROUTE_114_MAN_BERRIES_SKIPPED
# 36 "data/maps/Route114/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 37 "data/maps/Route114/scripts.pory"
	giveitem VAR_RESULT
# 38 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, FALSE
# 39 "data/maps/Route114/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 40 "data/maps/Route114/scripts.pory"
	setflag FLAG_DAILY_ROUTE_114_RECEIVED_BERRY
# 41 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TryBerryCrushWithFriends, MSGBOX_DEFAULT
# 42 "data/maps/Route114/scripts.pory"
	release
# 43 "data/maps/Route114/scripts.pory"
	end
# 44 "data/maps/Route114/scripts.pory"

# 45 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedBerry:: @ 81F25C7
# 46 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FunToThinkAboutBerries, MSGBOX_DEFAULT
# 47 "data/maps/Route114/scripts.pory"
	release
# 48 "data/maps/Route114/scripts.pory"
	end
# 49 "data/maps/Route114/scripts.pory"

# 50 "data/maps/Route114/scripts.pory"
Route114_EventScript_RoarGentleman:: @ 81F25D1
# 51 "data/maps/Route114/scripts.pory"
	lock
# 52 "data/maps/Route114/scripts.pory"
	faceplayer
# 53 "data/maps/Route114/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM05, Route114_EventScript_ReceivedRoar
# 54 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AllMyMonDoesIsRoarTakeThis, MSGBOX_DEFAULT
# 55 "data/maps/Route114/scripts.pory"
	giveitem ITEM_TM05
# 56 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, FALSE
# 57 "data/maps/Route114/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 58 "data/maps/Route114/scripts.pory"
	setflag FLAG_RECEIVED_TM05
# 59 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 60 "data/maps/Route114/scripts.pory"
	release
# 61 "data/maps/Route114/scripts.pory"
	end
# 62 "data/maps/Route114/scripts.pory"

# 63 "data/maps/Route114/scripts.pory"
Route114_EventScript_ReceivedRoar:: @ 81F2608
# 64 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ExplainRoar, MSGBOX_DEFAULT
# 65 "data/maps/Route114/scripts.pory"
	release
# 66 "data/maps/Route114/scripts.pory"
	end
# 67 "data/maps/Route114/scripts.pory"

# 68 "data/maps/Route114/scripts.pory"
Route114_EventScript_Poochyena:: @ 81F2612
# 69 "data/maps/Route114/scripts.pory"
	lock
# 70 "data/maps/Route114/scripts.pory"
	faceplayer
# 71 "data/maps/Route114/scripts.pory"
	waitse
# 72 "data/maps/Route114/scripts.pory"
	playmoncry SPECIES_POOCHYENA, 2
# 73 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_Poochyena, MSGBOX_DEFAULT
# 74 "data/maps/Route114/scripts.pory"
	waitmoncry
# 75 "data/maps/Route114/scripts.pory"
	release
# 76 "data/maps/Route114/scripts.pory"
	end
# 77 "data/maps/Route114/scripts.pory"

# 78 "data/maps/Route114/scripts.pory"
Route114_EventScript_MeteorFallsSign:: @ 81F2625
# 79 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_MeteorFallsSign, MSGBOX_SIGN
# 80 "data/maps/Route114/scripts.pory"
	end
# 81 "data/maps/Route114/scripts.pory"

# 82 "data/maps/Route114/scripts.pory"
Route114_EventScript_FossilManiacsHouseSign:: @ 81F262E
# 83 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_FossilManiacsHouseSign, MSGBOX_SIGN
# 84 "data/maps/Route114/scripts.pory"
	end
# 85 "data/maps/Route114/scripts.pory"

# 86 "data/maps/Route114/scripts.pory"
Route114_EventScript_LanettesHouseSign:: @ 81F2637
# 87 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LanettesHouse, MSGBOX_SIGN
# 88 "data/maps/Route114/scripts.pory"
	end
# 89 "data/maps/Route114/scripts.pory"

# 90 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lenny:: @ 81F2640
# 91 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LENNY, Route114_Text_LennyIntro, Route114_Text_LennyDefeat
# 92 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LennyPostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/Route114/scripts.pory"
	end
# 94 "data/maps/Route114/scripts.pory"

# 95 "data/maps/Route114/scripts.pory"
Route114_EventScript_Lucas:: @ 81F2657
# 96 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_LUCAS_1, Route114_Text_LucasIntro, Route114_Text_LucasDefeat
# 97 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_LucasPostBattle, MSGBOX_AUTOCLOSE
# 98 "data/maps/Route114/scripts.pory"
	end
# 99 "data/maps/Route114/scripts.pory"

# 100 "data/maps/Route114/scripts.pory"
Route114_EventScript_Shane:: @ 81F266E
# 101 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_SHANE, Route114_Text_ShaneIntro, Route114_Text_ShaneDefeat
# 102 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ShanePostBattle, MSGBOX_AUTOCLOSE
# 103 "data/maps/Route114/scripts.pory"
	end
# 104 "data/maps/Route114/scripts.pory"

# 105 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nancy:: @ 81F2685
# 106 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NANCY, Route114_Text_NancyIntro, Route114_Text_NancyDefeat
# 107 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NancyPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/Route114/scripts.pory"
	end
# 109 "data/maps/Route114/scripts.pory"

# 110 "data/maps/Route114/scripts.pory"
Route114_EventScript_Steve:: @ 81F269C
# 111 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_STEVE_1, Route114_Text_SteveIntro, Route114_Text_SteveDefeat, Route114_EventScript_RegisterSteve
# 112 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 113 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
# 114 "data/maps/Route114/scripts.pory"
	goto_if_eq Route114_EventScript_RematchSteve
# 115 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostBattle, MSGBOX_DEFAULT
# 116 "data/maps/Route114/scripts.pory"
	release
# 117 "data/maps/Route114/scripts.pory"
	end
# 118 "data/maps/Route114/scripts.pory"

# 119 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterSteve:: @ 81F26C8
# 120 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 121 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 122 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_SteveRegister, MSGBOX_DEFAULT
# 123 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_STEVE_1
# 124 "data/maps/Route114/scripts.pory"
	release
# 125 "data/maps/Route114/scripts.pory"
	end
# 126 "data/maps/Route114/scripts.pory"

# 127 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchSteve:: @ 81F26E7
# 128 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_STEVE_1, Route114_Text_SteveRematchIntro, Route114_Text_SteveRematchDefeat
# 129 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_StevePostRematch, MSGBOX_AUTOCLOSE
# 130 "data/maps/Route114/scripts.pory"
	end
# 131 "data/maps/Route114/scripts.pory"

# 132 "data/maps/Route114/scripts.pory"
Route114_EventScript_Bernie:: @ 81F26FE
# 133 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_BERNIE_1, Route114_Text_BernieIntro, Route114_Text_BernieDefeat, Route114_EventScript_RegisterBernie
# 134 "data/maps/Route114/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 135 "data/maps/Route114/scripts.pory"
	compare VAR_RESULT, TRUE
# 136 "data/maps/Route114/scripts.pory"
	goto_if_eq Route114_EventScript_RematchBernie
# 137 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostBattle, MSGBOX_DEFAULT
# 138 "data/maps/Route114/scripts.pory"
	release
# 139 "data/maps/Route114/scripts.pory"
	end
# 140 "data/maps/Route114/scripts.pory"

# 141 "data/maps/Route114/scripts.pory"
Route114_EventScript_RegisterBernie:: @ 81F272A
# 142 "data/maps/Route114/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 143 "data/maps/Route114/scripts.pory"
	waitmovement 0
# 144 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BernieRegister, MSGBOX_DEFAULT
# 145 "data/maps/Route114/scripts.pory"
	register_matchcall TRAINER_BERNIE_1
# 146 "data/maps/Route114/scripts.pory"
	release
# 147 "data/maps/Route114/scripts.pory"
	end
# 148 "data/maps/Route114/scripts.pory"

# 149 "data/maps/Route114/scripts.pory"
Route114_EventScript_RematchBernie:: @ 81F2749
# 150 "data/maps/Route114/scripts.pory"
	trainerbattle_rematch TRAINER_BERNIE_1, Route114_Text_BernieRematchIntro, Route114_Text_BernieRematchDefeat
# 151 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_BerniePostRematch, MSGBOX_AUTOCLOSE
# 152 "data/maps/Route114/scripts.pory"
	end
# 153 "data/maps/Route114/scripts.pory"

# 154 "data/maps/Route114/scripts.pory"
Route114_EventScript_Claude:: @ 81F2760
# 155 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CLAUDE, Route114_Text_ClaudeIntro, Route114_Text_ClaudeDefeat
# 156 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_ClaudePostBattle, MSGBOX_AUTOCLOSE
# 157 "data/maps/Route114/scripts.pory"
	end
# 158 "data/maps/Route114/scripts.pory"

# 159 "data/maps/Route114/scripts.pory"
Route114_EventScript_Nolan:: @ 81F2777
# 160 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_NOLAN, Route114_Text_NolanIntro, Route114_Text_NolanDefeat
# 161 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_NolanPostBattle, MSGBOX_AUTOCLOSE
# 162 "data/maps/Route114/scripts.pory"
	end
# 163 "data/maps/Route114/scripts.pory"

# 164 "data/maps/Route114/scripts.pory"
Route114_EventScript_Tyra:: @ 81F278E
# 165 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_TyraIntro, Route114_Text_TyraDefeat, Route114_Text_TyraNotEnoughMons
# 166 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 167 "data/maps/Route114/scripts.pory"
	end
# 168 "data/maps/Route114/scripts.pory"

# 169 "data/maps/Route114/scripts.pory"
Route114_EventScript_Ivy:: @ 81F27A9
# 170 "data/maps/Route114/scripts.pory"
	trainerbattle_double TRAINER_TYRA_AND_IVY, Route114_Text_IvyIntro, Route114_Text_IvyDefeat, Route114_Text_IvyNotEnoughMons
# 171 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_IvyPostBattle, MSGBOX_AUTOCLOSE
# 172 "data/maps/Route114/scripts.pory"
	end
# 173 "data/maps/Route114/scripts.pory"

# 174 "data/maps/Route114/scripts.pory"
Route114_EventScript_Angelina:: @ 81F27C4
# 175 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_ANGELINA, Route114_Text_AngelinaIntro, Route114_Text_AngelinaDefeat
# 176 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_AngelinaPostBattle, MSGBOX_AUTOCLOSE
# 177 "data/maps/Route114/scripts.pory"
	end
# 178 "data/maps/Route114/scripts.pory"

# 179 "data/maps/Route114/scripts.pory"
Route114_EventScript_Charlotte:: @ 81F27DB
# 180 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_CHARLOTTE, Route114_Text_CharlotteIntro, Route114_Text_CharlotteDefeat
# 181 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_CharlottePostBattle, MSGBOX_AUTOCLOSE
# 182 "data/maps/Route114/scripts.pory"
	end
# 183 "data/maps/Route114/scripts.pory"

# 184 "data/maps/Route114/scripts.pory"
Route114_EventScript_Kai:: @ 81F27F2
# 185 "data/maps/Route114/scripts.pory"
	trainerbattle_single TRAINER_KAI, Route114_Text_KaiIntro, Route114_Text_KaiDefeat
# 186 "data/maps/Route114/scripts.pory"
	msgbox Route114_Text_KaiPostBattle, MSGBOX_AUTOCLOSE
# 187 "data/maps/Route114/scripts.pory"
	end
# 188 "data/maps/Route114/scripts.pory"

# 189 "data/maps/Route114/scripts.pory"
Route114_Text_AllMyMonDoesIsRoarTakeThis: @ 81F2809
# 190 "data/maps/Route114/scripts.pory"
	.string "All my Pokémon does is Roar…\n"
# 191 "data/maps/Route114/scripts.pory"
	.string "No one dares to come near me…\p"
# 192 "data/maps/Route114/scripts.pory"
	.string "Sigh… If you would, please take\n"
# 193 "data/maps/Route114/scripts.pory"
	.string "this TM away…$"
# 194 "data/maps/Route114/scripts.pory"

# 195 "data/maps/Route114/scripts.pory"
Route114_Text_ExplainRoar: @ 81F2872
# 196 "data/maps/Route114/scripts.pory"
	.string "TM05 contains Roar.\n"
# 197 "data/maps/Route114/scripts.pory"
	.string "A Roar sends Pokémon scurrying.$"
# 198 "data/maps/Route114/scripts.pory"

# 199 "data/maps/Route114/scripts.pory"
Route114_Text_Poochyena: @ 81F28A6
# 200 "data/maps/Route114/scripts.pory"
	.string "Bow! Bowwow!$"
# 201 "data/maps/Route114/scripts.pory"

# 202 "data/maps/Route114/scripts.pory"
Route114_Text_MeteorFallsSign: @ 81F28B3
# 203 "data/maps/Route114/scripts.pory"
	.string "Meteor Falls\n"
# 204 "data/maps/Route114/scripts.pory"
	.string "Rustboro City through here$"
# 205 "data/maps/Route114/scripts.pory"

# 206 "data/maps/Route114/scripts.pory"
Route114_Text_FossilManiacsHouseSign: @ 81F28DB
# 207 "data/maps/Route114/scripts.pory"
	.string "Fossil Maniac's House\n"
# 208 "data/maps/Route114/scripts.pory"
	.string "“Fossils gratefully accepted!”$"
# 209 "data/maps/Route114/scripts.pory"

# 210 "data/maps/Route114/scripts.pory"
Route114_Text_LanettesHouse: @ 81F2910
# 211 "data/maps/Route114/scripts.pory"
	.string "Lanette's House$"
