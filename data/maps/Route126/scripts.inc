# 1 "data/maps/Route126/scripts.pory"

# 2 "data/maps/Route126/scripts.pory"
Route126_MapScripts:: @ 81F68C6
# 3 "data/maps/Route126/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route126_OnTransition
# 4 "data/maps/Route126/scripts.pory"
	.byte 0
# 5 "data/maps/Route126/scripts.pory"

# 6 "data/maps/Route126/scripts.pory"
Route126_OnTransition: @ 81F68CC
# 7 "data/maps/Route126/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 8 "data/maps/Route126/scripts.pory"
	end
# 9 "data/maps/Route126/scripts.pory"

# 10 "data/maps/Route126/scripts.pory"
Route126_EventScript_Barry:: @ 81F68D6
# 11 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_BARRY, Route126_Text_BarryIntro, Route126_Text_BarryDefeat
# 12 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_BarryPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/Route126/scripts.pory"
	end
# 14 "data/maps/Route126/scripts.pory"

# 15 "data/maps/Route126/scripts.pory"
Route126_EventScript_Dean:: @ 81F68ED
# 16 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_DEAN, Route126_Text_DeanIntro, Route126_Text_DeanDefeat
# 17 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_DeanPostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/Route126/scripts.pory"
	end
# 19 "data/maps/Route126/scripts.pory"

# 20 "data/maps/Route126/scripts.pory"
Route126_EventScript_Nikki:: @ 81F6904
# 21 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_NIKKI, Route126_Text_NikkiIntro, Route126_Text_NikkiDefeat
# 22 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_NikkiPostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/Route126/scripts.pory"
	end
# 24 "data/maps/Route126/scripts.pory"

# 25 "data/maps/Route126/scripts.pory"
Route126_EventScript_Brenda:: @ 81F691B
# 26 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_BRENDA, Route126_Text_BrendaIntro, Route126_Text_BrendaDefeat
# 27 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_BrendaPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/Route126/scripts.pory"
	end
# 29 "data/maps/Route126/scripts.pory"

# 30 "data/maps/Route126/scripts.pory"
Route126_EventScript_Leonardo:: @ 81F6932
# 31 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_LEONARDO, Route126_Text_LeonardoIntro, Route126_Text_LeonardoDefeat
# 32 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_LeonardoPostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/Route126/scripts.pory"
	end
# 34 "data/maps/Route126/scripts.pory"

# 35 "data/maps/Route126/scripts.pory"
Route126_EventScript_Isobel:: @ 81F6949
# 36 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_ISOBEL, Route126_Text_IsobelIntro, Route126_Text_IsobelDefeat
# 37 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_IsobelPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/Route126/scripts.pory"
	end
# 39 "data/maps/Route126/scripts.pory"

# 40 "data/maps/Route126/scripts.pory"
Route126_EventScript_Sienna:: @ 81F6960
# 41 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_SIENNA, Route126_Text_SiennaIntro, Route126_Text_SiennaDefeat
# 42 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_SiennaPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route126/scripts.pory"
	end
# 44 "data/maps/Route126/scripts.pory"

# 45 "data/maps/Route126/scripts.pory"
Route126_EventScript_Pablo:: @ 81F6977
# 46 "data/maps/Route126/scripts.pory"
	trainerbattle_single TRAINER_PABLO_1, Route126_Text_PabloIntro, Route126_Text_PabloDefeat, Route126_EventScript_RegisterPablo
# 47 "data/maps/Route126/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 48 "data/maps/Route126/scripts.pory"
	compare VAR_RESULT, TRUE
# 49 "data/maps/Route126/scripts.pory"
	goto_if_eq Route126_EventScript_RematchPablo
# 50 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloPostBattle, MSGBOX_DEFAULT
# 51 "data/maps/Route126/scripts.pory"
	release
# 52 "data/maps/Route126/scripts.pory"
	end
# 53 "data/maps/Route126/scripts.pory"

# 54 "data/maps/Route126/scripts.pory"
Route126_EventScript_RegisterPablo:: @ 81F69A3
# 55 "data/maps/Route126/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 56 "data/maps/Route126/scripts.pory"
	waitmovement 0
# 57 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloRegister, MSGBOX_DEFAULT
# 58 "data/maps/Route126/scripts.pory"
	register_matchcall TRAINER_PABLO_1
# 59 "data/maps/Route126/scripts.pory"
	release
# 60 "data/maps/Route126/scripts.pory"
	end
# 61 "data/maps/Route126/scripts.pory"

# 62 "data/maps/Route126/scripts.pory"
Route126_EventScript_RematchPablo:: @ 81F69C2
# 63 "data/maps/Route126/scripts.pory"
	trainerbattle_rematch TRAINER_PABLO_1, Route126_Text_PabloRematchIntro, Route126_Text_PabloRematchDefeat
# 64 "data/maps/Route126/scripts.pory"
	msgbox Route126_Text_PabloPostRematch, MSGBOX_AUTOCLOSE
# 65 "data/maps/Route126/scripts.pory"
	end
