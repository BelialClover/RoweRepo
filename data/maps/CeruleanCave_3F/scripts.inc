CeruleanCave_3F_MapScripts::
	.byte 0

CeruleanCave_3F_EventScript_Mewtwo::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MEWTWO, 2
	delay 40
	waitmoncry
	setflag FLAG_TOTEM_BATTLE
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 4
	setwildbattlewithcustommoves SPECIES_MEWTWO, 75, ITEM_MEWTWONITE_Y, MOVE_PSYSTRIKE, MOVE_AURA_SPHERE, MOVE_SHADOW_BALL, MOVE_ICE_BEAM, 0, NATURE_TIMID
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq CeruleanCave_3F_EventScript_CaughtMewtwo
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq CeruleanCave_3F_EventScript_DefeatedMewtwo
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq CeruleanCave_3F_EventScript_RanFromMewtwo
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq CeruleanCave_3F_EventScript_RanFromMewtwo
	setflag FLAG_DEFEATED_MEWTWO
	release
	end

CeruleanCave_3F_EventScript_CaughtMewtwo::
	setflag FLAG_DEFEATED_MEWTWO
	goto Common_EventScript_RemoveStaticPokemon
	end

CeruleanCave_3F_EventScript_DefeatedMewtwo::
	goto Common_EventScript_RemoveStaticPokemon
	end

CeruleanCave_3F_EventScript_RanFromMewtwo::
	setvar VAR_0x8004, SPECIES_MEWTWO
	goto Common_EventScript_LegendaryFlewAway
	end
