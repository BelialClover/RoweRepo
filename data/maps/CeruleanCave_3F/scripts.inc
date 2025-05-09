# 1 "data/maps/CeruleanCave_3F/scripts.pory"

# 2 "data/maps/CeruleanCave_3F/scripts.pory"
CeruleanCave_3F_MapScripts::
# 3 "data/maps/CeruleanCave_3F/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCave_3F/scripts.pory"

# 5 "data/maps/CeruleanCave_3F/scripts.pory"
CeruleanCave_3F_EventScript_Mewtwo::
# 6 "data/maps/CeruleanCave_3F/scripts.pory"
	lock
# 7 "data/maps/CeruleanCave_3F/scripts.pory"
	faceplayer
# 8 "data/maps/CeruleanCave_3F/scripts.pory"
	waitse
# 9 "data/maps/CeruleanCave_3F/scripts.pory"
	playmoncry SPECIES_MEWTWO, 2
# 10 "data/maps/CeruleanCave_3F/scripts.pory"
	delay 40
# 11 "data/maps/CeruleanCave_3F/scripts.pory"
	waitmoncry
# 12 "data/maps/CeruleanCave_3F/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 13 "data/maps/CeruleanCave_3F/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 4
# 14 "data/maps/CeruleanCave_3F/scripts.pory"
	setwildbattlewithcustommoves SPECIES_MEWTWO, 75, ITEM_NONE, MOVE_PSYSTRIKE, MOVE_AURA_SPHERE, MOVE_SHADOW_BALL, MOVE_ICE_BEAM, 0, NATURE_TIMID
# 15 "data/maps/CeruleanCave_3F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 16 "data/maps/CeruleanCave_3F/scripts.pory"
	dowildbattle
# 17 "data/maps/CeruleanCave_3F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 18 "data/maps/CeruleanCave_3F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 19 "data/maps/CeruleanCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 20 "data/maps/CeruleanCave_3F/scripts.pory"
	goto_if_eq CeruleanCave_3F_EventScript_CaughtMewtwo
# 21 "data/maps/CeruleanCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 22 "data/maps/CeruleanCave_3F/scripts.pory"
	goto_if_eq CeruleanCave_3F_EventScript_DefeatedMewtwo
# 23 "data/maps/CeruleanCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 24 "data/maps/CeruleanCave_3F/scripts.pory"
	goto_if_eq CeruleanCave_3F_EventScript_RanFromMewtwo
# 25 "data/maps/CeruleanCave_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 26 "data/maps/CeruleanCave_3F/scripts.pory"
	goto_if_eq CeruleanCave_3F_EventScript_RanFromMewtwo
# 27 "data/maps/CeruleanCave_3F/scripts.pory"
	setflag FLAG_DEFEATED_MEWTWO
# 28 "data/maps/CeruleanCave_3F/scripts.pory"
	release
# 29 "data/maps/CeruleanCave_3F/scripts.pory"
	end
# 30 "data/maps/CeruleanCave_3F/scripts.pory"

# 31 "data/maps/CeruleanCave_3F/scripts.pory"
CeruleanCave_3F_EventScript_CaughtMewtwo::
# 32 "data/maps/CeruleanCave_3F/scripts.pory"
	setflag FLAG_DEFEATED_MEWTWO
# 33 "data/maps/CeruleanCave_3F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 34 "data/maps/CeruleanCave_3F/scripts.pory"
	end
# 35 "data/maps/CeruleanCave_3F/scripts.pory"

# 36 "data/maps/CeruleanCave_3F/scripts.pory"
CeruleanCave_3F_EventScript_DefeatedMewtwo::
# 37 "data/maps/CeruleanCave_3F/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 38 "data/maps/CeruleanCave_3F/scripts.pory"
	end
# 39 "data/maps/CeruleanCave_3F/scripts.pory"

# 40 "data/maps/CeruleanCave_3F/scripts.pory"
CeruleanCave_3F_EventScript_RanFromMewtwo::
# 41 "data/maps/CeruleanCave_3F/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEWTWO
# 42 "data/maps/CeruleanCave_3F/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 43 "data/maps/CeruleanCave_3F/scripts.pory"
	end
