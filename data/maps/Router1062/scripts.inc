Router1062_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Router1062_OnLoad
	.byte 0

Router1062_OnLoad: @ 8236F16
	goto_if_unset FLAG_SYS_GAME_CLEAR, Router1062_EventScript_OpenDianceCave
	end
	
Router1062_EventScript_OpenDianceCave:
	setmetatile 17, 15, METATILE_General_RockWall_RockBase, 1
	setmetatile 13, 7, METATILE_General_RockWall_RockBase, 1
	setmetatile 13, 8, METATILE_General_RockWall_RockBase, 1
	end
