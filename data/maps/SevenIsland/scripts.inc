SevenIsland_MapScripts::
# 2 "data/maps/SevenIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SevenIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SevenIsland/scripts.pory"
	setflag FLAG_VISITED_SEVEN_ISLAND
	return

