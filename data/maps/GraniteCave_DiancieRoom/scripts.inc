# 1 "data/maps/GraniteCave_DiancieRoom/scripts.pory"

# 2 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
GraniteCave_DiancieRoom_MapScripts::
# 3 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	.byte 0
# 4 "data/maps/GraniteCave_DiancieRoom/scripts.pory"

# 5 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
GraniteCave_DiancieRoom_EventScript_Diance::
# 6 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	lock
# 7 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	faceplayer
# 8 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	waitse
# 9 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	playmoncry SPECIES_DIANCIE, 2
# 10 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	delay 40
# 11 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	waitmoncry
# 12 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 13 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	setflag FLAG_MEGA_EVOLVE_WILD_POKEMON
# 14 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 2
# 15 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	setwildbattlewithcustommoves SPECIES_DIANCIE, 70, ITEM_NONE, MOVE_DIAMOND_STORM, MOVE_MOONBLAST, MOVE_EARTH_POWER, MOVE_PSYCHIC, 2, NATURE_TIMID
# 16 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 17 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	dowildbattle
# 18 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 19 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 20 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 21 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	goto_if_eq GraniteCave_DiancieRoom_EventScript_CaughtDiance
# 22 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 23 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	goto_if_eq GraniteCave_DiancieRoom_EventScript_RanFromDiance
# 24 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 25 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	goto_if_eq GraniteCave_DiancieRoom_EventScript_RanFromDiance
# 26 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 27 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	goto_if_eq GraniteCave_DiancieRoom_EventScript_RanFromDiance
# 28 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	setflag FLAG_DEFEATED_DIANCIE
# 29 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	release
# 30 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	end
# 31 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	
# 32 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
GraniteCave_DiancieRoom_EventScript_CaughtDiance::
# 33 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	giveitem ITEM_DIANCITE
# 34 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	setflag FLAG_DEFEATED_DIANCIE
# 35 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 36 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 37 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 38 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	release
# 39 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	end
# 40 "data/maps/GraniteCave_DiancieRoom/scripts.pory"

# 41 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
GraniteCave_DiancieRoom_EventScript_DefeatedDiance::
# 42 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 43 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 44 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 45 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	release
# 46 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	end
# 47 "data/maps/GraniteCave_DiancieRoom/scripts.pory"

# 48 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
GraniteCave_DiancieRoom_EventScript_RanFromDiance::
# 49 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	setvar VAR_0x8004, SPECIES_DIANCIE
# 50 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 51 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	removeobject VAR_LAST_TALKED
# 52 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 53 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 54 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 55 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	release
# 56 "data/maps/GraniteCave_DiancieRoom/scripts.pory"
	end
