# 1 "data/maps/EverGrandeCity_Hall4/scripts.pory"

# 2 "data/maps/EverGrandeCity_Hall4/scripts.pory"
EverGrandeCity_Hall4_MapScripts:: @ 82295A8
# 3 "data/maps/EverGrandeCity_Hall4/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_Hall4_OnWarp
# 4 "data/maps/EverGrandeCity_Hall4/scripts.pory"
	.byte 0
# 5 "data/maps/EverGrandeCity_Hall4/scripts.pory"

# 6 "data/maps/EverGrandeCity_Hall4/scripts.pory"
EverGrandeCity_Hall4_OnWarp: @ 82295AE
# 7 "data/maps/EverGrandeCity_Hall4/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_Hall4_EventScript_TurnPlayerNorth
# 8 "data/maps/EverGrandeCity_Hall4/scripts.pory"
	.2byte 0
# 9 "data/maps/EverGrandeCity_Hall4/scripts.pory"

# 10 "data/maps/EverGrandeCity_Hall4/scripts.pory"
EverGrandeCity_Hall4_EventScript_TurnPlayerNorth:: @ 82295B8
# 11 "data/maps/EverGrandeCity_Hall4/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 12 "data/maps/EverGrandeCity_Hall4/scripts.pory"
	end
