# 1 "data/maps/TwoIsland_Capebrink_Hole/scripts.pory"

# 2 "data/maps/TwoIsland_Capebrink_Hole/scripts.pory"
TwoIsland_Capebrink_Hole_MapScripts::
# 3 "data/maps/TwoIsland_Capebrink_Hole/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TwoIsland_Capebrink_Hole_OnLoad
# 4 "data/maps/TwoIsland_Capebrink_Hole/scripts.pory"
	.byte 0
# 5 "data/maps/TwoIsland_Capebrink_Hole/scripts.pory"
	
# 6 "data/maps/TwoIsland_Capebrink_Hole/scripts.pory"
TwoIsland_Capebrink_Hole_OnLoad: @ 8236F16
# 7 "data/maps/TwoIsland_Capebrink_Hole/scripts.pory"
	goto_if_set FLAG_ENABLE_POST_RAYQUAZA_CONTENT, TwoIsland_Capebrink_Hole_EventScript_OpenAzelfCave
# 8 "data/maps/TwoIsland_Capebrink_Hole/scripts.pory"
	end
# 9 "data/maps/TwoIsland_Capebrink_Hole/scripts.pory"
	
# 10 "data/maps/TwoIsland_Capebrink_Hole/scripts.pory"
TwoIsland_Capebrink_Hole_EventScript_OpenAzelfCave:
# 11 "data/maps/TwoIsland_Capebrink_Hole/scripts.pory"
	setmetatile 10, 3, METATILE_RockTunnel_Escalator, 0
# 12 "data/maps/TwoIsland_Capebrink_Hole/scripts.pory"
	end
