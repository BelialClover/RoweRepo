# 1 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"

# 2 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
ScorchedSlab_HeatransRoom_MapScripts::
# 3 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	.byte 0
# 4 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	
# 5 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
ScorchedSlab_HeatransRoom_EventScript_Heatran::
# 6 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	lock
# 7 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	faceplayer
# 8 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	waitse
# 9 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	playmoncry SPECIES_HEATRAN, 2
# 10 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	delay 40
# 11 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	waitmoncry
# 12 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 13 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 3
# 14 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	setwildbattlewithcustommoves SPECIES_HEATRAN, 70, ITEM_NONE, MOVE_MAGMA_STORM, MOVE_FLASH_CANNON, MOVE_EARTH_POWER, MOVE_DARK_PULSE, 2, NATURE_MODEST
# 15 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 16 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	dowildbattle
# 17 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 18 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 19 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 20 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	goto_if_eq ScorchedSlab_HeatransRoom_EventScript_CaughtHeatran
# 21 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 22 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	goto_if_eq ScorchedSlab_HeatransRoom_EventScript_RanFromHeatran
# 23 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 24 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	goto_if_eq ScorchedSlab_HeatransRoom_EventScript_RanFromHeatran
# 25 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 26 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	goto_if_eq ScorchedSlab_HeatransRoom_EventScript_RanFromHeatran
# 27 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	setflag FLAG_DEFEATED_HEATRAN
# 28 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	release
# 29 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	end
# 30 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	
# 31 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
ScorchedSlab_HeatransRoom_EventScript_CaughtHeatran::
# 32 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	setflag FLAG_DEFEATED_HEATRAN
# 33 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 34 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 35 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 36 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	release
# 37 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	end
# 38 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"

# 39 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
ScorchedSlab_HeatransRoom_EventScript_DefeatedHeatran::
# 40 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 41 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 42 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 43 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	release
# 44 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	end
# 45 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"

# 46 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
ScorchedSlab_HeatransRoom_EventScript_RanFromHeatran::
# 47 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	setvar VAR_0x8004, SPECIES_HEATRAN
# 48 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 49 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 50 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 51 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 52 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 53 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	release
# 54 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	end
# 55 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	
# 56 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
ScorchedSlab_HeatransRoom_Text_Heatran::
# 57 "data/maps/ScorchedSlab_HeatransRoom/scripts.pory"
	.string "Gwogobo weobobobo!$"
