MagmaHideout_4F_MapScripts::
	.byte 0
	
//Entei

MagmaHideout_4F_EventScript_Entei::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ENTEI, 2
	delay 40
	waitmoncry
	setflag FLAG_TOTEM_BATTLE
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 2
	setwildbattlewithcustommoves SPECIES_ENTEI, 75, ITEM_NONE, MOVE_SACRED_FIRE, MOVE_IRON_HEAD, MOVE_EARTHQUAKE, MOVE_CLOSE_COMBAT, 0, NATURE_ADAMANT
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MagmaHideout_4F_EventScript_CaughtEntei
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MagmaHideout_4F_EventScript_RanFromEntei
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MagmaHideout_4F_EventScript_RanFromEntei
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MagmaHideout_4F_EventScript_RanFromEntei
	setflag FLAG_DEFEATED_ENTEI
	release
	end

MagmaHideout_4F_EventScript_CaughtEntei::
	setflag FLAG_DEFEATED_ENTEI
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

MagmaHideout_4F_EventScript_DefeatedEntei::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

MagmaHideout_4F_EventScript_RanFromEntei::
	setvar VAR_0x8004, SPECIES_ENTEI
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	bufferspeciesname 0, VAR_0x8004
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
	release
	end

//Volcanion
MagmaHideout_4F_EventScript_Volcanion::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_VOLCANION, 2
	delay 40
	waitmoncry
	setflag FLAG_TOTEM_BATTLE
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 3
	setwildbattlewithcustommoves SPECIES_VOLCANION, 75, ITEM_NONE, MOVE_STEAM_ERUPTION, MOVE_SCALD, MOVE_SCORCHING_SANDS, MOVE_FLASH_CANNON, 0, NATURE_MODEST
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq MagmaHideout_4F_EventScript_CaughtVolcanion
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq MagmaHideout_4F_EventScript_RanFromVolcanion
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq MagmaHideout_4F_EventScript_RanFromVolcanion
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq MagmaHideout_4F_EventScript_RanFromVolcanion
	setflag FLAG_DEFEATED_VOLCANION
	release
	end

MagmaHideout_4F_EventScript_CaughtVolcanion::
	setflag FLAG_DEFEATED_VOLCANION
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

MagmaHideout_4F_EventScript_DefeatedVolcanion::
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

MagmaHideout_4F_EventScript_RanFromVolcanion::
	setvar VAR_0x8004, SPECIES_VOLCANION
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	bufferspeciesname 0, VAR_0x8004
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
	release
	end
