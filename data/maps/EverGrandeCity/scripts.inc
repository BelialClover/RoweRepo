# 1 "data/maps/EverGrandeCity/scripts.pory"

# 2 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts:: @ 81E7D1B
# 3 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 4 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 5 "data/maps/EverGrandeCity/scripts.pory"

# 6 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition: @ 81E7D21
# 7 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 8 "data/maps/EverGrandeCity/scripts.pory"
	end
# 9 "data/maps/EverGrandeCity/scripts.pory"

# 10 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign:: @ 81E7D2B
# 11 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 12 "data/maps/EverGrandeCity/scripts.pory"
	end
# 13 "data/maps/EverGrandeCity/scripts.pory"

# 14 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign:: @ 81E7D34
# 15 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 16 "data/maps/EverGrandeCity/scripts.pory"
	end
# 17 "data/maps/EverGrandeCity/scripts.pory"

# 18 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign:: @ 81E7D3D
# 19 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 20 "data/maps/EverGrandeCity/scripts.pory"
	end
# 21 "data/maps/EverGrandeCity/scripts.pory"

# 22 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande:: @ 81E7D46
# 23 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 24 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 25 "data/maps/EverGrandeCity/scripts.pory"
	end
# 26 "data/maps/EverGrandeCity/scripts.pory"

# 27 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad: @ 81E7D4F
# 28 "data/maps/EverGrandeCity/scripts.pory"
	.string "Entering Victory Road$"
# 29 "data/maps/EverGrandeCity/scripts.pory"

# 30 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague: @ 81E7D65
# 31 "data/maps/EverGrandeCity/scripts.pory"
	.string "Entering Pokémon League\n"
# 32 "data/maps/EverGrandeCity/scripts.pory"
	.string "Center Gate$"
# 33 "data/maps/EverGrandeCity/scripts.pory"

# 34 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign: @ 81E7D89
# 35 "data/maps/EverGrandeCity/scripts.pory"
	.string "Ever Grande City\p"
# 36 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 37 "data/maps/EverGrandeCity/scripts.pory"
	.string "and Pokémon.”$"
# 38 "data/maps/EverGrandeCity/scripts.pory"
	
# 39 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_MustHaveAllGymBadges: @ 82296E8
# 40 "data/maps/EverGrandeCity/scripts.pory"
	.string "Beyond this point, only those Trainers\n"
# 41 "data/maps/EverGrandeCity/scripts.pory"
	.string "who have collected all the 16 Gym\l"
# 42 "data/maps/EverGrandeCity/scripts.pory"
	.string "Badges are permitted to enter.\p"

EverGrandeCity_EventScript_CaveGuard::
# 47 "data/maps/EverGrandeCity/scripts.pory"
	lockall
# 48 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_EventScript_CaveGuard_Text_0
# 49 "data/maps/EverGrandeCity/scripts.pory"
	waitmessage
# 50 "data/maps/EverGrandeCity/scripts.pory"
	releaseall
	end


EverGrandeCity_EventScript_CaveGuard_Text_0:
# 48 "data/maps/EverGrandeCity/scripts.pory"
	.string "Beyond this point, only those Trainers\n"
	.string "who have collected all the 16 Gym\l"
	.string "Badges are permitted to enter, if you\l"
	.string "defeated all the Hoenn Leaders make\l"
	.string "sure to visit the Sevii Island using\l"
	.string "Slateport or Lilycove Harbor to gain\l"
	.string "the remaining 8 badges.$"
