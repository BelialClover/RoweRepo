# 1 "data/maps/PowerPlant/scripts.pory"

# 2 "data/maps/PowerPlant/scripts.pory"
PowerPlant_MapScripts::
# 3 "data/maps/PowerPlant/scripts.pory"
	.byte 0
# 4 "data/maps/PowerPlant/scripts.pory"

# 5 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_Zapdos::
# 6 "data/maps/PowerPlant/scripts.pory"
	lock
# 7 "data/maps/PowerPlant/scripts.pory"
	faceplayer
# 8 "data/maps/PowerPlant/scripts.pory"
	waitse
# 9 "data/maps/PowerPlant/scripts.pory"
	playmoncry SPECIES_ZAPDOS, 2
# 10 "data/maps/PowerPlant/scripts.pory"
	delay 40
# 11 "data/maps/PowerPlant/scripts.pory"
	waitmoncry
# 12 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 13 "data/maps/PowerPlant/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 2
# 14 "data/maps/PowerPlant/scripts.pory"
	setwildbattlewithcustommoves SPECIES_ZAPDOS, 70, ITEM_NONE, MOVE_THUNDER, MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_EXTRASENSORY, 2, NATURE_TIMID
# 15 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 16 "data/maps/PowerPlant/scripts.pory"
	dowildbattle
# 17 "data/maps/PowerPlant/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 18 "data/maps/PowerPlant/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 19 "data/maps/PowerPlant/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 20 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq PowerPlant_EventScript_CaughtZapdos
# 21 "data/maps/PowerPlant/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 22 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq PowerPlant_EventScript_RanFromZapdos
# 23 "data/maps/PowerPlant/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 24 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq PowerPlant_EventScript_RanFromZapdos
# 25 "data/maps/PowerPlant/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 26 "data/maps/PowerPlant/scripts.pory"
	goto_if_eq PowerPlant_EventScript_RanFromZapdos
# 27 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_DEFEATED_ZAPDOS
# 28 "data/maps/PowerPlant/scripts.pory"
	release
# 29 "data/maps/PowerPlant/scripts.pory"
	end
# 30 "data/maps/PowerPlant/scripts.pory"
	
# 31 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_CaughtZapdos::
# 32 "data/maps/PowerPlant/scripts.pory"
	setflag FLAG_DEFEATED_ZAPDOS
# 33 "data/maps/PowerPlant/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 34 "data/maps/PowerPlant/scripts.pory"
	removeobject VAR_LAST_TALKED
# 35 "data/maps/PowerPlant/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 36 "data/maps/PowerPlant/scripts.pory"
	release
# 37 "data/maps/PowerPlant/scripts.pory"
	end
# 38 "data/maps/PowerPlant/scripts.pory"

# 39 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_DefeatedZapdos::
# 40 "data/maps/PowerPlant/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 41 "data/maps/PowerPlant/scripts.pory"
	removeobject VAR_LAST_TALKED
# 42 "data/maps/PowerPlant/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 43 "data/maps/PowerPlant/scripts.pory"
	release
# 44 "data/maps/PowerPlant/scripts.pory"
	end
# 45 "data/maps/PowerPlant/scripts.pory"

# 46 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_RanFromZapdos::
# 47 "data/maps/PowerPlant/scripts.pory"
	setvar VAR_0x8004, SPECIES_ZAPDOS
# 48 "data/maps/PowerPlant/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 49 "data/maps/PowerPlant/scripts.pory"
	removeobject VAR_LAST_TALKED
# 50 "data/maps/PowerPlant/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 51 "data/maps/PowerPlant/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 52 "data/maps/PowerPlant/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 53 "data/maps/PowerPlant/scripts.pory"
	release
# 54 "data/maps/PowerPlant/scripts.pory"
	end
# 55 "data/maps/PowerPlant/scripts.pory"
	
# 56 "data/maps/PowerPlant/scripts.pory"
PowerPlant_EventScript_WarptoNewMauville::
# 57 "data/maps/PowerPlant/scripts.pory"
	lock
# 58 "data/maps/PowerPlant/scripts.pory"
	waitse
# 59 "data/maps/PowerPlant/scripts.pory"
	playmoncry SPECIES_HOOPA, 2
# 60 "data/maps/PowerPlant/scripts.pory"
	delay 40
# 61 "data/maps/PowerPlant/scripts.pory"
	waitmoncry
# 62 "data/maps/PowerPlant/scripts.pory"
	warp MAP_NEW_MAUVILLE_INSIDE, 6, 31, 3 //Z , X , Y
# 63 "data/maps/PowerPlant/scripts.pory"
	release
# 64 "data/maps/PowerPlant/scripts.pory"
	end
