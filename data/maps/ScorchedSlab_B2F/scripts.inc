# 1 "data/maps/ScorchedSlab_B2F/scripts.pory"

# 2 "data/maps/ScorchedSlab_B2F/scripts.pory"
ScorchedSlab_B2F_MapScripts::
# 3 "data/maps/ScorchedSlab_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ScorchedSlab_B2F_OnLoad
# 4 "data/maps/ScorchedSlab_B2F/scripts.pory"
	.byte 0
# 5 "data/maps/ScorchedSlab_B2F/scripts.pory"
	
# 6 "data/maps/ScorchedSlab_B2F/scripts.pory"
ScorchedSlab_B2F_OnLoad::
# 7 "data/maps/ScorchedSlab_B2F/scripts.pory"
	goto_if_set FLAG_ENABLE_POST_RAYQUAZA_CONTENT, ScorchedSlab_B2F_EventScript_OpenHeatran
# 8 "data/maps/ScorchedSlab_B2F/scripts.pory"
	end
# 9 "data/maps/ScorchedSlab_B2F/scripts.pory"
	
# 10 "data/maps/ScorchedSlab_B2F/scripts.pory"
ScorchedSlab_B2F_EventScript_OpenHeatran::
# 11 "data/maps/ScorchedSlab_B2F/scripts.pory"
	setmetatile 18, 6, METATILE_MtEmber_Escalator_Tile, 0
# 12 "data/maps/ScorchedSlab_B2F/scripts.pory"
	end
