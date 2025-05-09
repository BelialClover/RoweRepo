# 1 "data/maps/MagmaHideout_4F/scripts.pory"

# 2 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_MapScripts::
# 3 "data/maps/MagmaHideout_4F/scripts.pory"
	.byte 0
# 4 "data/maps/MagmaHideout_4F/scripts.pory"
	
# 5 "data/maps/MagmaHideout_4F/scripts.pory"
//Entei
# 6 "data/maps/MagmaHideout_4F/scripts.pory"

# 7 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Entei::
# 8 "data/maps/MagmaHideout_4F/scripts.pory"
	lock
# 9 "data/maps/MagmaHideout_4F/scripts.pory"
	faceplayer
# 10 "data/maps/MagmaHideout_4F/scripts.pory"
	waitse
# 11 "data/maps/MagmaHideout_4F/scripts.pory"
	playmoncry SPECIES_ENTEI, 2
# 12 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 40
# 13 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmoncry
# 14 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 15 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 2
# 16 "data/maps/MagmaHideout_4F/scripts.pory"
	setwildbattlewithcustommoves SPECIES_ENTEI, 75, ITEM_NONE, MOVE_SACRED_FIRE, MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, 0, NATURE_ADAMANT
# 17 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 18 "data/maps/MagmaHideout_4F/scripts.pory"
	dowildbattle
# 19 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 20 "data/maps/MagmaHideout_4F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 21 "data/maps/MagmaHideout_4F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 22 "data/maps/MagmaHideout_4F/scripts.pory"
	goto_if_eq MagmaHideout_4F_EventScript_CaughtEntei
# 23 "data/maps/MagmaHideout_4F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 24 "data/maps/MagmaHideout_4F/scripts.pory"
	goto_if_eq MagmaHideout_4F_EventScript_RanFromEntei
# 25 "data/maps/MagmaHideout_4F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 26 "data/maps/MagmaHideout_4F/scripts.pory"
	goto_if_eq MagmaHideout_4F_EventScript_RanFromEntei
# 27 "data/maps/MagmaHideout_4F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 28 "data/maps/MagmaHideout_4F/scripts.pory"
	goto_if_eq MagmaHideout_4F_EventScript_RanFromEntei
# 29 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_DEFEATED_ENTEI
# 30 "data/maps/MagmaHideout_4F/scripts.pory"
	release
# 31 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 32 "data/maps/MagmaHideout_4F/scripts.pory"

# 33 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_CaughtEntei::
# 34 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_DEFEATED_ENTEI
# 35 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 36 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 37 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 38 "data/maps/MagmaHideout_4F/scripts.pory"
	release
# 39 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 40 "data/maps/MagmaHideout_4F/scripts.pory"

# 41 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_DefeatedEntei::
# 42 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 43 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 44 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 45 "data/maps/MagmaHideout_4F/scripts.pory"
	release
# 46 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 47 "data/maps/MagmaHideout_4F/scripts.pory"

# 48 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_RanFromEntei::
# 49 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, SPECIES_ENTEI
# 50 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 51 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 52 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 53 "data/maps/MagmaHideout_4F/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 54 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 55 "data/maps/MagmaHideout_4F/scripts.pory"
	release
# 56 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 57 "data/maps/MagmaHideout_4F/scripts.pory"

# 58 "data/maps/MagmaHideout_4F/scripts.pory"
//Volcanion
# 59 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_Volcanion::
# 60 "data/maps/MagmaHideout_4F/scripts.pory"
	lock
# 61 "data/maps/MagmaHideout_4F/scripts.pory"
	faceplayer
# 62 "data/maps/MagmaHideout_4F/scripts.pory"
	waitse
# 63 "data/maps/MagmaHideout_4F/scripts.pory"
	playmoncry SPECIES_VOLCANION, 2
# 64 "data/maps/MagmaHideout_4F/scripts.pory"
	delay 40
# 65 "data/maps/MagmaHideout_4F/scripts.pory"
	waitmoncry
# 66 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 67 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 3
# 68 "data/maps/MagmaHideout_4F/scripts.pory"
	setwildbattlewithcustommoves SPECIES_VOLCANION, 75, ITEM_NONE, MOVE_STEAM_ERUPTION, MOVE_SCALD, MOVE_SCORCHING_SANDS, MOVE_FLASH_CANNON, 0, NATURE_MODEST
# 69 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 70 "data/maps/MagmaHideout_4F/scripts.pory"
	dowildbattle
# 71 "data/maps/MagmaHideout_4F/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 72 "data/maps/MagmaHideout_4F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 73 "data/maps/MagmaHideout_4F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 74 "data/maps/MagmaHideout_4F/scripts.pory"
	goto_if_eq MagmaHideout_4F_EventScript_CaughtVolcanion
# 75 "data/maps/MagmaHideout_4F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 76 "data/maps/MagmaHideout_4F/scripts.pory"
	goto_if_eq MagmaHideout_4F_EventScript_RanFromVolcanion
# 77 "data/maps/MagmaHideout_4F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 78 "data/maps/MagmaHideout_4F/scripts.pory"
	goto_if_eq MagmaHideout_4F_EventScript_RanFromVolcanion
# 79 "data/maps/MagmaHideout_4F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 80 "data/maps/MagmaHideout_4F/scripts.pory"
	goto_if_eq MagmaHideout_4F_EventScript_RanFromVolcanion
# 81 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_DEFEATED_VOLCANION
# 82 "data/maps/MagmaHideout_4F/scripts.pory"
	release
# 83 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 84 "data/maps/MagmaHideout_4F/scripts.pory"

# 85 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_CaughtVolcanion::
# 86 "data/maps/MagmaHideout_4F/scripts.pory"
	setflag FLAG_DEFEATED_VOLCANION
# 87 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 88 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 89 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 90 "data/maps/MagmaHideout_4F/scripts.pory"
	release
# 91 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 92 "data/maps/MagmaHideout_4F/scripts.pory"

# 93 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_DefeatedVolcanion::
# 94 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 95 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 96 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 97 "data/maps/MagmaHideout_4F/scripts.pory"
	release
# 98 "data/maps/MagmaHideout_4F/scripts.pory"
	end
# 99 "data/maps/MagmaHideout_4F/scripts.pory"

# 100 "data/maps/MagmaHideout_4F/scripts.pory"
MagmaHideout_4F_EventScript_RanFromVolcanion::
# 101 "data/maps/MagmaHideout_4F/scripts.pory"
	setvar VAR_0x8004, SPECIES_VOLCANION
# 102 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 103 "data/maps/MagmaHideout_4F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 104 "data/maps/MagmaHideout_4F/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 105 "data/maps/MagmaHideout_4F/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 106 "data/maps/MagmaHideout_4F/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 107 "data/maps/MagmaHideout_4F/scripts.pory"
	release
# 108 "data/maps/MagmaHideout_4F/scripts.pory"
	end
