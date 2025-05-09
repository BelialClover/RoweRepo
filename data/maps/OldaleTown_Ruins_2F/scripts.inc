# 1 "data/maps/OldaleTown_Ruins_2F/scripts.pory"

# 2 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
.equ LOCALID_TERRAKION, 1
# 3 "data/maps/OldaleTown_Ruins_2F/scripts.pory"

# 4 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
OldaleTown_Ruins_2F_MapScripts::
# 5 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OldaleTown_Ruins_MapScripts_OnLoad
# 6 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	.byte 0
# 7 "data/maps/OldaleTown_Ruins_2F/scripts.pory"

# 8 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
OldaleTown_Ruins_MapScripts_OnLoad: @ 8236F16
# 9 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, OldaleTown_Ruins_MapScripts_RemoveTerrakion
# 10 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	end
# 11 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	
# 12 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
OldaleTown_Ruins_MapScripts_RemoveTerrakion: @ 8236F16
# 13 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	removeobject LOCALID_TERRAKION
# 14 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	setobjectxyperm LOCALID_TERRAKION, 1, 1
# 15 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	end
# 16 "data/maps/OldaleTown_Ruins_2F/scripts.pory"

# 17 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
OldaleTown_Ruins_EventScript_Terrakion::
# 18 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	lock
# 19 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	faceplayer
# 20 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	waitse
# 21 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	playmoncry SPECIES_TERRAKION, 2
# 22 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	delay 40
# 23 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	waitmoncry
# 24 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 25 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 3
# 26 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	setwildbattlewithcustommoves SPECIES_TERRAKION, 70, ITEM_NONE, MOVE_SACRED_SWORD, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_POISON_JAB, 0, NATURE_MODEST
# 27 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 28 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	dowildbattle
# 29 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 30 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 31 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 32 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	goto_if_eq OldaleTown_Ruins_EventScript_CaughtTerrakion
# 33 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 34 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	goto_if_eq OldaleTown_Ruins_EventScript_RanFromTerrakion
# 35 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 36 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	goto_if_eq OldaleTown_Ruins_EventScript_RanFromTerrakion
# 37 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 38 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	goto_if_eq OldaleTown_Ruins_EventScript_RanFromTerrakion
# 39 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	setflag FLAG_DEFEATED_TERRAKION
# 40 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	release
# 41 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	end
# 42 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	
# 43 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
OldaleTown_Ruins_EventScript_CaughtTerrakion::
# 44 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	setflag FLAG_DEFEATED_TERRAKION
# 45 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 46 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 47 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 48 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	release
# 49 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	end
# 50 "data/maps/OldaleTown_Ruins_2F/scripts.pory"

# 51 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
OldaleTown_Ruins_EventScript_DefeatedTerrakion::
# 52 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 53 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 54 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 55 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	release
# 56 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	end
# 57 "data/maps/OldaleTown_Ruins_2F/scripts.pory"

# 58 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
OldaleTown_Ruins_EventScript_RanFromTerrakion::
# 59 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	setvar VAR_0x8004, SPECIES_TERRAKION
# 60 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 61 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 62 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 63 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 64 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 65 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	release
# 66 "data/maps/OldaleTown_Ruins_2F/scripts.pory"
	end
