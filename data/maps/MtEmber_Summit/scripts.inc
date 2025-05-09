# 1 "data/maps/MtEmber_Summit/scripts.pory"

# 2 "data/maps/MtEmber_Summit/scripts.pory"
MtEmber_Summit_MapScripts::
# 3 "data/maps/MtEmber_Summit/scripts.pory"
	.byte 0
# 4 "data/maps/MtEmber_Summit/scripts.pory"

# 5 "data/maps/MtEmber_Summit/scripts.pory"
//Moltres
# 6 "data/maps/MtEmber_Summit/scripts.pory"
MtEmber_Summit_EventScript_Moltres::
# 7 "data/maps/MtEmber_Summit/scripts.pory"
	lock
# 8 "data/maps/MtEmber_Summit/scripts.pory"
	faceplayer
# 9 "data/maps/MtEmber_Summit/scripts.pory"
	waitse
# 10 "data/maps/MtEmber_Summit/scripts.pory"
	playmoncry SPECIES_MOLTRES, 2
# 11 "data/maps/MtEmber_Summit/scripts.pory"
	delay 40
# 12 "data/maps/MtEmber_Summit/scripts.pory"
	waitmoncry
# 13 "data/maps/MtEmber_Summit/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 14 "data/maps/MtEmber_Summit/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 2
# 15 "data/maps/MtEmber_Summit/scripts.pory"
	setwildbattlewithcustommoves SPECIES_MOLTRES, 70, ITEM_POWER_HERB, MOVE_FIRE_BLAST, MOVE_HURRICANE, MOVE_EXTRASENSORY, MOVE_SOLAR_BEAM, 2, NATURE_TIMID
# 16 "data/maps/MtEmber_Summit/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 17 "data/maps/MtEmber_Summit/scripts.pory"
	dowildbattle
# 18 "data/maps/MtEmber_Summit/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 19 "data/maps/MtEmber_Summit/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 20 "data/maps/MtEmber_Summit/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 21 "data/maps/MtEmber_Summit/scripts.pory"
	goto_if_eq MtEmber_Summit_EventScript_CaughtMoltres
# 22 "data/maps/MtEmber_Summit/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 23 "data/maps/MtEmber_Summit/scripts.pory"
	goto_if_eq MtEmber_Summit_EventScript_RanFromMoltres
# 24 "data/maps/MtEmber_Summit/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 25 "data/maps/MtEmber_Summit/scripts.pory"
	goto_if_eq MtEmber_Summit_EventScript_RanFromMoltres
# 26 "data/maps/MtEmber_Summit/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 27 "data/maps/MtEmber_Summit/scripts.pory"
	goto_if_eq MtEmber_Summit_EventScript_RanFromMoltres
# 28 "data/maps/MtEmber_Summit/scripts.pory"
	setflag FLAG_DEFEATED_MOLTRES
# 29 "data/maps/MtEmber_Summit/scripts.pory"
	release
# 30 "data/maps/MtEmber_Summit/scripts.pory"
	end
# 31 "data/maps/MtEmber_Summit/scripts.pory"

# 32 "data/maps/MtEmber_Summit/scripts.pory"
MtEmber_Summit_EventScript_CaughtMoltres::
# 33 "data/maps/MtEmber_Summit/scripts.pory"
	setflag FLAG_DEFEATED_MOLTRES
# 34 "data/maps/MtEmber_Summit/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 35 "data/maps/MtEmber_Summit/scripts.pory"
	removeobject VAR_LAST_TALKED
# 36 "data/maps/MtEmber_Summit/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 37 "data/maps/MtEmber_Summit/scripts.pory"
	release
# 38 "data/maps/MtEmber_Summit/scripts.pory"
	end
# 39 "data/maps/MtEmber_Summit/scripts.pory"

# 40 "data/maps/MtEmber_Summit/scripts.pory"
MtEmber_Summit_EventScript_DefeatedMoltres::
# 41 "data/maps/MtEmber_Summit/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 42 "data/maps/MtEmber_Summit/scripts.pory"
	removeobject VAR_LAST_TALKED
# 43 "data/maps/MtEmber_Summit/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 44 "data/maps/MtEmber_Summit/scripts.pory"
	release
# 45 "data/maps/MtEmber_Summit/scripts.pory"
	end
# 46 "data/maps/MtEmber_Summit/scripts.pory"

# 47 "data/maps/MtEmber_Summit/scripts.pory"
MtEmber_Summit_EventScript_RanFromMoltres::
# 48 "data/maps/MtEmber_Summit/scripts.pory"
	setvar VAR_0x8004, SPECIES_MOLTRES
# 49 "data/maps/MtEmber_Summit/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 50 "data/maps/MtEmber_Summit/scripts.pory"
	removeobject VAR_LAST_TALKED
# 51 "data/maps/MtEmber_Summit/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 52 "data/maps/MtEmber_Summit/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 53 "data/maps/MtEmber_Summit/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 54 "data/maps/MtEmber_Summit/scripts.pory"
	release
# 55 "data/maps/MtEmber_Summit/scripts.pory"
	end
