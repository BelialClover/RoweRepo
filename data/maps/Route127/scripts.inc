# 1 "data/maps/Route127/scripts.pory"

# 2 "data/maps/Route127/scripts.pory"
Route127_MapScripts:: @ 81F69D9
# 3 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route127_OnTransition
# 4 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route127_OnLoad
# 5 "data/maps/Route127/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route127_OnFrame
# 6 "data/maps/Route127/scripts.pory"
	.byte 0
# 7 "data/maps/Route127/scripts.pory"

# 8 "data/maps/Route127/scripts.pory"
Route127_OnTransition: @ 81F69E9
# 9 "data/maps/Route127/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 10 "data/maps/Route127/scripts.pory"
	compare VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 11 "data/maps/Route127/scripts.pory"
	call_if_eq AbnormalWeather_EventScript_HideMapNamePopup
# 12 "data/maps/Route127/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_NORTH
# 13 "data/maps/Route127/scripts.pory"
	call_if_eq AbnormalWeather_StartKyogreWeather
# 14 "data/maps/Route127/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_SOUTH
# 15 "data/maps/Route127/scripts.pory"
	call_if_eq AbnormalWeather_StartKyogreWeather
# 16 "data/maps/Route127/scripts.pory"
	end
# 17 "data/maps/Route127/scripts.pory"

# 18 "data/maps/Route127/scripts.pory"
Route127_OnLoad: @ 81F6A14
# 19 "data/maps/Route127/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_NORTH
# 20 "data/maps/Route127/scripts.pory"
	call_if_eq AbnormalWeather_EventScript_PlaceTilesRoute127North
# 21 "data/maps/Route127/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, ABNORMAL_WEATHER_ROUTE_127_SOUTH
# 22 "data/maps/Route127/scripts.pory"
	call_if_eq AbnormalWeather_EventScript_PlaceTilesRoute127South
# 23 "data/maps/Route127/scripts.pory"
	end
# 24 "data/maps/Route127/scripts.pory"

# 25 "data/maps/Route127/scripts.pory"
Route127_OnFrame: @ 81F6A2B
# 26 "data/maps/Route127/scripts.pory"
	map_script_2 VAR_SHOULD_END_ABNORMAL_WEATHER, 1, AbnormalWeather_EventScript_EndEventAndCleanup_1
# 27 "data/maps/Route127/scripts.pory"
	.2byte 0
# 28 "data/maps/Route127/scripts.pory"

# 29 "data/maps/Route127/scripts.pory"
Route127_EventScript_Camden:: @ 81F6A35
# 30 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_CAMDEN, Route127_Text_CamdenIntro, Route127_Text_CamdenDefeat
# 31 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_CamdenPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/Route127/scripts.pory"
	end
# 33 "data/maps/Route127/scripts.pory"

# 34 "data/maps/Route127/scripts.pory"
Route127_EventScript_Donny:: @ 81F6A4C
# 35 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_DONNY, Route127_Text_DonnyIntro, Route127_Text_DonnyDefeat
# 36 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_DonnyPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/Route127/scripts.pory"
	end
# 38 "data/maps/Route127/scripts.pory"

# 39 "data/maps/Route127/scripts.pory"
Route127_EventScript_Jonah:: @ 81F6A63
# 40 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_JONAH, Route127_Text_JonahIntro, Route127_Text_JonahDefeat
# 41 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_JonahPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route127/scripts.pory"
	end
# 43 "data/maps/Route127/scripts.pory"

# 44 "data/maps/Route127/scripts.pory"
Route127_EventScript_Henry:: @ 81F6A7A
# 45 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_HENRY, Route127_Text_HenryIntro, Route127_Text_HenryDefeat
# 46 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_HenryPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route127/scripts.pory"
	end
# 48 "data/maps/Route127/scripts.pory"

# 49 "data/maps/Route127/scripts.pory"
Route127_EventScript_Roger:: @ 81F6A91
# 50 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_ROGER, Route127_Text_RogerIntro, Route127_Text_RogerDefeat
# 51 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_RogerPostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/Route127/scripts.pory"
	end
# 53 "data/maps/Route127/scripts.pory"

# 54 "data/maps/Route127/scripts.pory"
Route127_EventScript_Aidan:: @ 81F6AA8
# 55 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_AIDAN, Route127_Text_AidanIntro, Route127_Text_AidanDefeat
# 56 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_AidanPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/Route127/scripts.pory"
	end
# 58 "data/maps/Route127/scripts.pory"

# 59 "data/maps/Route127/scripts.pory"
Route127_EventScript_Athena:: @ 81F6ABF
# 60 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_ATHENA, Route127_Text_AthenaIntro, Route127_Text_AthenaDefeat
# 61 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_AthenaPostBattle, MSGBOX_AUTOCLOSE
# 62 "data/maps/Route127/scripts.pory"
	end
# 63 "data/maps/Route127/scripts.pory"

# 64 "data/maps/Route127/scripts.pory"
Route127_EventScript_Koji:: @ 81F6AD6
# 65 "data/maps/Route127/scripts.pory"
	trainerbattle_single TRAINER_KOJI_1, Route127_Text_KojiIntro, Route127_Text_KojiDefeat, Route127_EventScript_RegisterKoji
# 66 "data/maps/Route127/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 67 "data/maps/Route127/scripts.pory"
	compare VAR_RESULT, TRUE
# 68 "data/maps/Route127/scripts.pory"
	goto_if_eq Route127_EventScript_RematchKoji
# 69 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiPostBattle, MSGBOX_DEFAULT
# 70 "data/maps/Route127/scripts.pory"
	release
# 71 "data/maps/Route127/scripts.pory"
	end
# 72 "data/maps/Route127/scripts.pory"

# 73 "data/maps/Route127/scripts.pory"
Route127_EventScript_RegisterKoji:: @ 81F6B02
# 74 "data/maps/Route127/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 75 "data/maps/Route127/scripts.pory"
	waitmovement 0
# 76 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiRegister, MSGBOX_DEFAULT
# 77 "data/maps/Route127/scripts.pory"
	register_matchcall TRAINER_KOJI_1
# 78 "data/maps/Route127/scripts.pory"
	release
# 79 "data/maps/Route127/scripts.pory"
	end
# 80 "data/maps/Route127/scripts.pory"

# 81 "data/maps/Route127/scripts.pory"
Route127_EventScript_RematchKoji:: @ 81F6B21
# 82 "data/maps/Route127/scripts.pory"
	trainerbattle_rematch TRAINER_KOJI_1, Route127_Text_KojiRematchIntro, Route127_Text_KojiRematchDefeat
# 83 "data/maps/Route127/scripts.pory"
	msgbox Route127_Text_KojiPostRematch, MSGBOX_AUTOCLOSE
# 84 "data/maps/Route127/scripts.pory"
	end
