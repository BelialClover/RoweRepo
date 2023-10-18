ShoalCave_LowTideIceRoom_MapScripts:: @ 82396A1
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideIceRoom_OnLoad
	.byte 0
	
ShoalCave_LowTideIceRoom_OnLoad: @ 8236F16
	goto_if_unset FLAG_DEBUG_MODE, ShoalCave_LowTideIceRoom_EventScript_CloseRedgyRoom
	end
	
ShoalCave_LowTideIceRoom_EventScript_CloseRedgyRoom:
	setmetatile 12, 20, METATILE_SeafoamIslands_Normal_Tile, 0
	end
