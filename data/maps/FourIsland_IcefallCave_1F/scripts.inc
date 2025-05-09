# 1 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"

# 2 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
FourIsland_IcefallCave_1F_MapScripts::
# 3 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FourIsland_IcefallCave_1F_OnFrame
# 4 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
    map_script MAP_SCRIPT_ON_RESUME, FourIsland_IcefallCave_1F_OnResume
# 5 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_IcefallCave_1F_OnTransition
# 6 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	.byte 0
# 7 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"

# 8 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
FourIsland_IcefallCave_1F_OnResume:
# 9 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
# 10 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	end
# 11 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"

# 12 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
FourIsland_IcefallCave_1F_OnTransition: @ 8224E61
# 13 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 1
# 14 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	end
# 15 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"

# 16 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
FourIsland_IcefallCave_1F_OnFrame: @ 8224ECB
# 17 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, FourIsland_IcefallCave_1F_EventScript_FallThroughIce
# 18 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	.2byte 0
# 19 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"

# 20 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
FourIsland_IcefallCave_1F_EventScript_FallThroughIce:: @ 8224F29
# 21 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	lockall
# 22 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	delay 20
# 23 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
# 24 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	waitmovement 0
# 25 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	playse SE_FALL
# 26 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	delay 60
# 27 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	warphole MAP_FOUR_ISLAND_ICEFALL_CAVE_B1F
# 28 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	waitstate
# 29 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	end
