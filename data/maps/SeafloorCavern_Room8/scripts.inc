# 1 "data/maps/SeafloorCavern_Room8/scripts.pory"

# 2 "data/maps/SeafloorCavern_Room8/scripts.pory"
SeafloorCavern_Room8_MapScripts:: @ 8234DC7
# 3 "data/maps/SeafloorCavern_Room8/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SeafloorCavern_Room8_OnLoad
# 4 "data/maps/SeafloorCavern_Room8/scripts.pory"
	.byte 0
# 5 "data/maps/SeafloorCavern_Room8/scripts.pory"
	
# 6 "data/maps/SeafloorCavern_Room8/scripts.pory"
SeafloorCavern_Room8_OnLoad::
# 7 "data/maps/SeafloorCavern_Room8/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, SeafloorCavern_Room8_EventScript_OpenKyogreCave
# 8 "data/maps/SeafloorCavern_Room8/scripts.pory"
	end
# 9 "data/maps/SeafloorCavern_Room8/scripts.pory"
	
# 10 "data/maps/SeafloorCavern_Room8/scripts.pory"
SeafloorCavern_Room8_EventScript_OpenKyogreCave::
# 11 "data/maps/SeafloorCavern_Room8/scripts.pory"
	setmetatile 5, 1, METATILE_Cave_CaveEntrance_Top, 1
# 12 "data/maps/SeafloorCavern_Room8/scripts.pory"
	setmetatile 5, 2, METATILE_Cave_CaveEntrance_Bottom, 0
# 13 "data/maps/SeafloorCavern_Room8/scripts.pory"
	return
