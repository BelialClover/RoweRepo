# 1 "data/maps/ArtisanCave_B1F/scripts.pory"

# 2 "data/maps/ArtisanCave_B1F/scripts.pory"
ArtisanCave_B1F_MapScripts:: @ 823AFAD
# 3 "data/maps/ArtisanCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ArtisanCave_B1F_OnTransition
# 4 "data/maps/ArtisanCave_B1F/scripts.pory"
	.byte 0
# 5 "data/maps/ArtisanCave_B1F/scripts.pory"

# 6 "data/maps/ArtisanCave_B1F/scripts.pory"
ArtisanCave_B1F_OnTransition: @ 823AFB3
# 7 "data/maps/ArtisanCave_B1F/scripts.pory"
	setflag FLAG_LANDMARK_ARTISAN_CAVE
# 8 "data/maps/ArtisanCave_B1F/scripts.pory"
	end
# 9 "data/maps/ArtisanCave_B1F/scripts.pory"

# 10 "data/maps/ArtisanCave_B1F/scripts.pory"
ArtisanCave_B1F_EventScript_Jirachi::
# 11 "data/maps/ArtisanCave_B1F/scripts.pory"
	lock
# 12 "data/maps/ArtisanCave_B1F/scripts.pory"
	faceplayer
# 13 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitse
# 14 "data/maps/ArtisanCave_B1F/scripts.pory"
	playmoncry SPECIES_JIRACHI, 2
# 15 "data/maps/ArtisanCave_B1F/scripts.pory"
	delay 40
# 16 "data/maps/ArtisanCave_B1F/scripts.pory"
	waitmoncry
# 17 "data/maps/ArtisanCave_B1F/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 18 "data/maps/ArtisanCave_B1F/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 3
# 19 "data/maps/ArtisanCave_B1F/scripts.pory"
	setwildbattlewithcustommoves SPECIES_JIRACHI, 70, ITEM_KINGS_ROCK, MOVE_ZEN_HEADBUTT, MOVE_IRON_HEAD, MOVE_FIRE_PUNCH, MOVE_PLAY_ROUGH, 0, NATURE_JOLLY
# 20 "data/maps/ArtisanCave_B1F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 21 "data/maps/ArtisanCave_B1F/scripts.pory"
	dowildbattle
# 22 "data/maps/ArtisanCave_B1F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 23 "data/maps/ArtisanCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 24 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 25 "data/maps/ArtisanCave_B1F/scripts.pory"
	goto_if_eq ArtisanCave_B1F_EventScript_CaughtJirachi
# 26 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 27 "data/maps/ArtisanCave_B1F/scripts.pory"
	goto_if_eq ArtisanCave_B1F_EventScript_RanFromJirachi
# 28 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 29 "data/maps/ArtisanCave_B1F/scripts.pory"
	goto_if_eq ArtisanCave_B1F_EventScript_RanFromJirachi
# 30 "data/maps/ArtisanCave_B1F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 31 "data/maps/ArtisanCave_B1F/scripts.pory"
	goto_if_eq ArtisanCave_B1F_EventScript_RanFromJirachi
# 32 "data/maps/ArtisanCave_B1F/scripts.pory"
	setflag FLAG_DEFEATED_JIRACHI
# 33 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
# 34 "data/maps/ArtisanCave_B1F/scripts.pory"
	end
# 35 "data/maps/ArtisanCave_B1F/scripts.pory"
	ArtisanCave_B1F_EventScript_CaughtJirachi::
# 36 "data/maps/ArtisanCave_B1F/scripts.pory"
	setflag FLAG_DEFEATED_JIRACHI
# 37 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 38 "data/maps/ArtisanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 39 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 40 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
# 41 "data/maps/ArtisanCave_B1F/scripts.pory"
	end
# 42 "data/maps/ArtisanCave_B1F/scripts.pory"
ArtisanCave_B1F_EventScript_DefeatedJirachi::
# 43 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 44 "data/maps/ArtisanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 45 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 46 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
# 47 "data/maps/ArtisanCave_B1F/scripts.pory"
	end
# 48 "data/maps/ArtisanCave_B1F/scripts.pory"
ArtisanCave_B1F_EventScript_RanFromJirachi::
# 49 "data/maps/ArtisanCave_B1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_JIRACHI
# 50 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 51 "data/maps/ArtisanCave_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 52 "data/maps/ArtisanCave_B1F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 53 "data/maps/ArtisanCave_B1F/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 54 "data/maps/ArtisanCave_B1F/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 55 "data/maps/ArtisanCave_B1F/scripts.pory"
	release
# 56 "data/maps/ArtisanCave_B1F/scripts.pory"
	end
# 57 "data/maps/ArtisanCave_B1F/scripts.pory"

# 58 "data/maps/ArtisanCave_B1F/scripts.pory"
ArtisanCave_B1F_Text_Jirachi::
# 59 "data/maps/ArtisanCave_B1F/scripts.pory"
	.string "Gwogobo weobobobo!$"
