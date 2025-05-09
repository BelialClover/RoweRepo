# 1 "data/maps/ValorCavern/scripts.pory"

# 2 "data/maps/ValorCavern/scripts.pory"
ValorCavern_MapScripts::
# 3 "data/maps/ValorCavern/scripts.pory"
	.byte 0
# 4 "data/maps/ValorCavern/scripts.pory"

# 5 "data/maps/ValorCavern/scripts.pory"
ValorCavern_EventScript_Azelf::
# 6 "data/maps/ValorCavern/scripts.pory"
	lock
# 7 "data/maps/ValorCavern/scripts.pory"
	faceplayer
# 8 "data/maps/ValorCavern/scripts.pory"
	waitse
# 9 "data/maps/ValorCavern/scripts.pory"
	playmoncry SPECIES_AZELF, 2
# 10 "data/maps/ValorCavern/scripts.pory"
	delay 40
# 11 "data/maps/ValorCavern/scripts.pory"
	waitmoncry
# 12 "data/maps/ValorCavern/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 13 "data/maps/ValorCavern/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 2
# 14 "data/maps/ValorCavern/scripts.pory"
	setwildbattlewithcustommoves SPECIES_AZELF, 70, ITEM_NONE, MOVE_PSYCHIC, MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, 0, NATURE_MODEST
# 15 "data/maps/ValorCavern/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 16 "data/maps/ValorCavern/scripts.pory"
	dowildbattle
# 17 "data/maps/ValorCavern/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 18 "data/maps/ValorCavern/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 19 "data/maps/ValorCavern/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 20 "data/maps/ValorCavern/scripts.pory"
	goto_if_eq ValorCavern_EventScript_CaughtAzelf
# 21 "data/maps/ValorCavern/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 22 "data/maps/ValorCavern/scripts.pory"
	goto_if_eq ValorCavern_EventScript_RanFromAzelf
# 23 "data/maps/ValorCavern/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 24 "data/maps/ValorCavern/scripts.pory"
	goto_if_eq ValorCavern_EventScript_RanFromAzelf
# 25 "data/maps/ValorCavern/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 26 "data/maps/ValorCavern/scripts.pory"
	goto_if_eq ValorCavern_EventScript_RanFromAzelf
# 27 "data/maps/ValorCavern/scripts.pory"
	setflag FLAG_DEFEATED_AZELF
# 28 "data/maps/ValorCavern/scripts.pory"
	release
# 29 "data/maps/ValorCavern/scripts.pory"
	end
# 30 "data/maps/ValorCavern/scripts.pory"
	
# 31 "data/maps/ValorCavern/scripts.pory"
ValorCavern_EventScript_CaughtAzelf::
# 32 "data/maps/ValorCavern/scripts.pory"
	setflag FLAG_DEFEATED_AZELF
# 33 "data/maps/ValorCavern/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 34 "data/maps/ValorCavern/scripts.pory"
	removeobject VAR_LAST_TALKED
# 35 "data/maps/ValorCavern/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 36 "data/maps/ValorCavern/scripts.pory"
	release
# 37 "data/maps/ValorCavern/scripts.pory"
	end
# 38 "data/maps/ValorCavern/scripts.pory"

# 39 "data/maps/ValorCavern/scripts.pory"
ValorCavern_EventScript_DefeatedAzelf::
# 40 "data/maps/ValorCavern/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 41 "data/maps/ValorCavern/scripts.pory"
	removeobject VAR_LAST_TALKED
# 42 "data/maps/ValorCavern/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 43 "data/maps/ValorCavern/scripts.pory"
	release
# 44 "data/maps/ValorCavern/scripts.pory"
	end
# 45 "data/maps/ValorCavern/scripts.pory"

# 46 "data/maps/ValorCavern/scripts.pory"
ValorCavern_EventScript_RanFromAzelf::
# 47 "data/maps/ValorCavern/scripts.pory"
	setvar VAR_0x8004, SPECIES_AZELF
# 48 "data/maps/ValorCavern/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 49 "data/maps/ValorCavern/scripts.pory"
	removeobject VAR_LAST_TALKED
# 50 "data/maps/ValorCavern/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 51 "data/maps/ValorCavern/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 52 "data/maps/ValorCavern/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 53 "data/maps/ValorCavern/scripts.pory"
	release
# 54 "data/maps/ValorCavern/scripts.pory"
	end
