Route119_UxieCave_Inside_MapScripts::
	.byte 0


Route119_UxieCave_Inside_EventScript_Uxie::
# 5 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	lock
# 6 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	faceplayer
# 7 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	playmoncry SPECIES_UXIE, 2
# 8 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	msgbox Route119_UxieCave_Inside_EventScript_Uxie_Text_0
# 11 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 12 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 2
# 13 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	setwildbattlewithcustommoves SPECIES_UXIE, 75, ITEM_LEFTOVERS, MOVE_PSYSHOCK, MOVE_DAZZLING_GLEAM, MOVE_GRASS_KNOT, MOVE_POWER_GEM, 0, NATURE_TIMID
# 14 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 15 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	dowildbattle
# 16 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 17 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 18 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	switch VAR_RESULT
# 19 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	case B_OUTCOME_CAUGHT, Route119_UxieCave_Inside_EventScript_Uxie_3
# 26 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	case B_OUTCOME_RAN, Route119_UxieCave_Inside_EventScript_Uxie_4
# 27 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	case B_OUTCOME_WON, Route119_UxieCave_Inside_EventScript_Uxie_4
# 28 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, Route119_UxieCave_Inside_EventScript_Uxie_4
Route119_UxieCave_Inside_EventScript_Uxie_1:
# 38 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	release
	end

Route119_UxieCave_Inside_EventScript_Uxie_3:
# 20 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	setflag FLAG_DEFEATED_UXIE
# 21 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	setweather WEATHER_NONE
# 22 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 23 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	removeobject VAR_LAST_TALKED
# 24 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Route119_UxieCave_Inside_EventScript_Uxie_1

Route119_UxieCave_Inside_EventScript_Uxie_4:
# 29 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	setvar VAR_0x8004, SPECIES_UXIE
# 30 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	setweather WEATHER_NONE
# 31 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 32 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	removeobject VAR_LAST_TALKED
# 33 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 34 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 35 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
	goto Route119_UxieCave_Inside_EventScript_Uxie_1


Route119_UxieCave_Inside_EventScript_Uxie_Text_0:
# 8 "data/maps/Route119_UxieCave_Inside/scripts.pory"
	.string "Uxie: Ux...$"
