# 1 "data/maps/MarineCave_End/scripts.pory"

# 2 "data/maps/MarineCave_End/scripts.pory"
.set LOCALID_KYOGRE, 1
# 3 "data/maps/MarineCave_End/scripts.pory"

# 4 "data/maps/MarineCave_End/scripts.pory"
MarineCave_End_MapScripts:: @ 823AFDF
# 5 "data/maps/MarineCave_End/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MarineCave_End_OnResume
# 6 "data/maps/MarineCave_End/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MarineCave_End_OnTransition
# 7 "data/maps/MarineCave_End/scripts.pory"
	.byte 0
# 8 "data/maps/MarineCave_End/scripts.pory"

# 9 "data/maps/MarineCave_End/scripts.pory"
MarineCave_End_OnResume: @ 823AFEA
# 10 "data/maps/MarineCave_End/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, MarineCave_End_EventScript_TryRemoveKyogre
# 11 "data/maps/MarineCave_End/scripts.pory"
	end
# 12 "data/maps/MarineCave_End/scripts.pory"

# 13 "data/maps/MarineCave_End/scripts.pory"
MarineCave_End_EventScript_TryRemoveKyogre:: @ 823AFF4
# 14 "data/maps/MarineCave_End/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/MarineCave_End/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 16 "data/maps/MarineCave_End/scripts.pory"
	goto_if_ne Common_EventScript_NopReturn
# 17 "data/maps/MarineCave_End/scripts.pory"
	removeobject LOCALID_KYOGRE
# 18 "data/maps/MarineCave_End/scripts.pory"
	return
# 19 "data/maps/MarineCave_End/scripts.pory"

# 20 "data/maps/MarineCave_End/scripts.pory"
MarineCave_End_OnTransition: @ 823B008
# 21 "data/maps/MarineCave_End/scripts.pory"
	call_if_unset FLAG_DEFEATED_KYOGRE, MarineCave_End_EventScript_ShowKyogre
# 22 "data/maps/MarineCave_End/scripts.pory"
	end
# 23 "data/maps/MarineCave_End/scripts.pory"

# 24 "data/maps/MarineCave_End/scripts.pory"
MarineCave_End_EventScript_ShowKyogre:: @ 823B012
# 25 "data/maps/MarineCave_End/scripts.pory"
	clearflag FLAG_HIDE_MARINE_CAVE_KYOGRE
# 26 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_TEMP_1, 1
# 27 "data/maps/MarineCave_End/scripts.pory"
	return
# 28 "data/maps/MarineCave_End/scripts.pory"

# 29 "data/maps/MarineCave_End/scripts.pory"
MarineCave_End_EventScript_Kyogre:: @ 823B01B
# 30 "data/maps/MarineCave_End/scripts.pory"
	lockall
# 31 "data/maps/MarineCave_End/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 32 "data/maps/MarineCave_End/scripts.pory"
	waitmovement 0
# 33 "data/maps/MarineCave_End/scripts.pory"
	applymovement LOCALID_KYOGRE, MarineCave_End_Movement_KyogreApproach
# 34 "data/maps/MarineCave_End/scripts.pory"
	waitmovement 0
# 35 "data/maps/MarineCave_End/scripts.pory"
	waitse
# 36 "data/maps/MarineCave_End/scripts.pory"
	playmoncry SPECIES_KYOGRE, 2
# 37 "data/maps/MarineCave_End/scripts.pory"
	delay 40
# 38 "data/maps/MarineCave_End/scripts.pory"
	waitmoncry
# 39 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_KYOGRE
# 40 "data/maps/MarineCave_End/scripts.pory"
	setwildbattle SPECIES_KYOGRE, 70, ITEM_NONE
# 41 "data/maps/MarineCave_End/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 42 "data/maps/MarineCave_End/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 43 "data/maps/MarineCave_End/scripts.pory"
	waitstate
# 44 "data/maps/MarineCave_End/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 45 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_TEMP_1, 0
# 46 "data/maps/MarineCave_End/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 47 "data/maps/MarineCave_End/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 48 "data/maps/MarineCave_End/scripts.pory"
	goto_if_eq MarineCave_End_EventScript_DefeatedKyogre
# 49 "data/maps/MarineCave_End/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 50 "data/maps/MarineCave_End/scripts.pory"
	goto_if_eq MarineCave_End_EventScript_RanFromKyogre
# 51 "data/maps/MarineCave_End/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 52 "data/maps/MarineCave_End/scripts.pory"
	goto_if_eq MarineCave_End_EventScript_RanFromKyogre
# 53 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 54 "data/maps/MarineCave_End/scripts.pory"
	setflag FLAG_DEFEATED_KYOGRE
# 55 "data/maps/MarineCave_End/scripts.pory"
	releaseall
# 56 "data/maps/MarineCave_End/scripts.pory"
	end
# 57 "data/maps/MarineCave_End/scripts.pory"

# 58 "data/maps/MarineCave_End/scripts.pory"
MarineCave_End_EventScript_DefeatedKyogre:: @ 823B084
# 59 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_SHOULD_END_ABNORMAL_WEATHER, 1
# 60 "data/maps/MarineCave_End/scripts.pory"
	setflag FLAG_DEFEATED_KYOGRE
# 61 "data/maps/MarineCave_End/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 62 "data/maps/MarineCave_End/scripts.pory"
	end
# 63 "data/maps/MarineCave_End/scripts.pory"

# 64 "data/maps/MarineCave_End/scripts.pory"
MarineCave_End_EventScript_RanFromKyogre:: @ 823B092
# 65 "data/maps/MarineCave_End/scripts.pory"
	setvar VAR_0x8004, SPECIES_KYOGRE
# 66 "data/maps/MarineCave_End/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 67 "data/maps/MarineCave_End/scripts.pory"
	end
# 68 "data/maps/MarineCave_End/scripts.pory"

# 69 "data/maps/MarineCave_End/scripts.pory"
MarineCave_End_Movement_KyogreApproach: @ 823B09D
# 70 "data/maps/MarineCave_End/scripts.pory"
	init_affine_anim
# 71 "data/maps/MarineCave_End/scripts.pory"
	walk_down_start_affine
# 72 "data/maps/MarineCave_End/scripts.pory"
	delay_16
# 73 "data/maps/MarineCave_End/scripts.pory"
	delay_16
# 74 "data/maps/MarineCave_End/scripts.pory"
	walk_down_affine
# 75 "data/maps/MarineCave_End/scripts.pory"
	delay_16
# 76 "data/maps/MarineCave_End/scripts.pory"
	delay_16
# 77 "data/maps/MarineCave_End/scripts.pory"
	walk_down_affine
# 78 "data/maps/MarineCave_End/scripts.pory"
	step_end
