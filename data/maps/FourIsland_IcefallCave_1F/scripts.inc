FourIsland_IcefallCave_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FourIsland_IcefallCave_1F_OnFrame
    map_script MAP_SCRIPT_ON_RESUME, FourIsland_IcefallCave_1F_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_IcefallCave_1F_OnTransition
	.byte 0

FourIsland_IcefallCave_1F_OnResume:
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
	end

FourIsland_IcefallCave_1F_OnTransition: @ 8224E61
	setvar VAR_ICE_STEP_COUNT, 1
	end

FourIsland_IcefallCave_1F_OnFrame: @ 8224ECB
	map_script_2 VAR_ICE_STEP_COUNT, 0, FourIsland_IcefallCave_1F_EventScript_FallThroughIce
	.2byte 0

FourIsland_IcefallCave_1F_EventScript_FallThroughIce:: @ 8224F29
	lockall
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
	waitmovement 0
	playse SE_FALL
	delay 60
	warphole MAP_FOUR_ISLAND_ICEFALL_CAVE_B1F
	waitstate
	end
