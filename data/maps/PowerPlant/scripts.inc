PowerPlant_MapScripts::
	.byte 0

PowerPlant_EventScript_Zapdos::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ZAPDOS, 2
	delay 40
	waitmoncry
	setflag FLAG_TOTEM_BATTLE
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 2
	setwildbattlewithcustommoves SPECIES_ZAPDOS, 70, ITEM_NONE, MOVE_THUNDER, MOVE_HURRICANE, MOVE_HEAT_WAVE, MOVE_EXTRASENSORY, 2, NATURE_TIMID
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq PowerPlant_EventScript_CaughtZapdos
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PowerPlant_EventScript_RanFromZapdos
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq PowerPlant_EventScript_RanFromZapdos
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq PowerPlant_EventScript_RanFromZapdos
	setflag FLAG_DEFEATED_ZAPDOS
	release
	end
	
PowerPlant_EventScript_CaughtZapdos::
	setflag FLAG_DEFEATED_ZAPDOS
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

PowerPlant_EventScript_DefeatedZapdos::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

PowerPlant_EventScript_RanFromZapdos::
	setvar VAR_0x8004, SPECIES_ZAPDOS
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	bufferspeciesname 0, VAR_0x8004
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
	release
	end
	
PowerPlant_EventScript_WarptoNewMauville::
	lock
	waitse
	playmoncry SPECIES_HOOPA, 2
	delay 40
	waitmoncry
	warp MAP_NEW_MAUVILLE_INSIDE, 6, 31, 3 //Z , X , Y
	release
	end
