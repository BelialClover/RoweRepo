# 1 "data/maps/Router1062/scripts.pory"

# 2 "data/maps/Router1062/scripts.pory"
Router1062_MapScripts::
# 3 "data/maps/Router1062/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Router1062_OnLoad
# 4 "data/maps/Router1062/scripts.pory"
	.byte 0
# 5 "data/maps/Router1062/scripts.pory"

# 6 "data/maps/Router1062/scripts.pory"
Router1062_OnLoad: @ 8236F16
# 7 "data/maps/Router1062/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, Router1062_EventScript_OpenDianceCave
# 8 "data/maps/Router1062/scripts.pory"
	end
# 9 "data/maps/Router1062/scripts.pory"
	
# 10 "data/maps/Router1062/scripts.pory"
Router1062_EventScript_OpenDianceCave:
# 11 "data/maps/Router1062/scripts.pory"
	setmetatile 17, 15, METATILE_General_RockWall_RockBase, 1
# 12 "data/maps/Router1062/scripts.pory"
	setmetatile 13, 7, METATILE_General_RockWall_RockBase, 1
# 13 "data/maps/Router1062/scripts.pory"
	setmetatile 13, 8, METATILE_General_RockWall_RockBase, 1
# 14 "data/maps/Router1062/scripts.pory"
	end
