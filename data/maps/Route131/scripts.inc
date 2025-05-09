# 1 "data/maps/Route131/scripts.pory"

# 2 "data/maps/Route131/scripts.pory"
Route131_MapScripts:: @ 81F7404
# 3 "data/maps/Route131/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route131_OnTransition
# 4 "data/maps/Route131/scripts.pory"
	.byte 0
# 5 "data/maps/Route131/scripts.pory"

# 6 "data/maps/Route131/scripts.pory"
Route131_OnTransition: @ 81F740A
# 7 "data/maps/Route131/scripts.pory"
	compare VAR_SOOTOPOLIS_CITY_STATE, 4
# 8 "data/maps/Route131/scripts.pory"
	call_if_ge Route131_EventScript_CheckSetAbnormalWeather
# 9 "data/maps/Route131/scripts.pory"
	call Route131_EventScript_SetLayout
# 10 "data/maps/Route131/scripts.pory"
	end
# 11 "data/maps/Route131/scripts.pory"

# 12 "data/maps/Route131/scripts.pory"
Route131_EventScript_SetLayout:: @ 81F741B
# 13 "data/maps/Route131/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE131_SKY_PILLAR
# 14 "data/maps/Route131/scripts.pory"
	return
# 15 "data/maps/Route131/scripts.pory"

# 16 "data/maps/Route131/scripts.pory"
Route131_EventScript_CheckSetAbnormalWeather:: @ 81F741F
# 17 "data/maps/Route131/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 18 "data/maps/Route131/scripts.pory"
	return
# 19 "data/maps/Route131/scripts.pory"

# 20 "data/maps/Route131/scripts.pory"
Route131_EventScript_Richard:: @ 81F7429
# 21 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_RICHARD, Route131_Text_RichardIntro, Route131_Text_RichardDefeat
# 22 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_RichardPostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/Route131/scripts.pory"
	end
# 24 "data/maps/Route131/scripts.pory"

# 25 "data/maps/Route131/scripts.pory"
Route131_EventScript_Herman:: @ 81F7440
# 26 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_HERMAN, Route131_Text_HermanIntro, Route131_Text_HermanDefeat
# 27 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_HermanPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/Route131/scripts.pory"
	end
# 29 "data/maps/Route131/scripts.pory"

# 30 "data/maps/Route131/scripts.pory"
Route131_EventScript_Susie:: @ 81F7457
# 31 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_SUSIE, Route131_Text_SusieIntro, Route131_Text_SusieDefeat
# 32 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_SusiePostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/Route131/scripts.pory"
	end
# 34 "data/maps/Route131/scripts.pory"

# 35 "data/maps/Route131/scripts.pory"
Route131_EventScript_Kara:: @ 81F746E
# 36 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_KARA, Route131_Text_KaraIntro, Route131_Text_KaraDefeat
# 37 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_KaraPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/Route131/scripts.pory"
	end
# 39 "data/maps/Route131/scripts.pory"

# 40 "data/maps/Route131/scripts.pory"
Route131_EventScript_Reli:: @ 81F7485
# 41 "data/maps/Route131/scripts.pory"
	trainerbattle_double TRAINER_RELI_AND_IAN, Route131_Text_ReliIntro, Route131_Text_ReliDefeat, Route131_Text_ReliNotEnoughMons
# 42 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_ReliPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route131/scripts.pory"
	end
# 44 "data/maps/Route131/scripts.pory"

# 45 "data/maps/Route131/scripts.pory"
Route131_EventScript_Ian:: @ 81F74A0
# 46 "data/maps/Route131/scripts.pory"
	trainerbattle_double TRAINER_RELI_AND_IAN, Route131_Text_IanIntro, Route131_Text_IanDefeat, Route131_Text_IanNotEnoughMons
# 47 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_IanPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/Route131/scripts.pory"
	end
# 49 "data/maps/Route131/scripts.pory"

# 50 "data/maps/Route131/scripts.pory"
Route131_EventScript_Talia:: @ 81F74BB
# 51 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_TALIA, Route131_Text_TaliaIntro, Route131_Text_TaliaDefeat
# 52 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_TaliaPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/Route131/scripts.pory"
	end
# 54 "data/maps/Route131/scripts.pory"

# 55 "data/maps/Route131/scripts.pory"
Route131_EventScript_Kevin:: @ 81F74D2
# 56 "data/maps/Route131/scripts.pory"
	trainerbattle_single TRAINER_KEVIN, Route131_Text_KevinIntro, Route131_Text_KevinDefeat
# 57 "data/maps/Route131/scripts.pory"
	msgbox Route131_Text_KevinPostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/Route131/scripts.pory"
	end
