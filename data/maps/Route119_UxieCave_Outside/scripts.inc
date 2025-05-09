Route119_UxieCave_Outside_MapScripts::
# 2 "data/maps/Route119_UxieCave_Outside/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route119_UxieCave_Outside_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route119_UxieCave_Outside_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/Route119_UxieCave_Outside/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route119_UxieCave_Outside_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route119_UxieCave_Outside_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/Route119_UxieCave_Outside/scripts.pory"
	setmetatile 9, 0, METATILE_RockTunnel_CaveTile, 1
# 5 "data/maps/Route119_UxieCave_Outside/scripts.pory"
	setmetatile 9, 1, METATILE_RockTunnel_CaveTile, 1
	return

