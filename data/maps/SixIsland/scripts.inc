SixIsland_MapScripts::
# 2 "data/maps/SixIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SixIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SixIsland/scripts.pory"
	setflag FLAG_VISITED_SIX_ISLAND
	return

