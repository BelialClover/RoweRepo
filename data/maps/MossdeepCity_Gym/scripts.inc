MossdeepCity_Gym_MapScripts:: @ 8220800
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_Gym_OnLoad
	.byte 0

@ NOTE: Mossdeep Gym was redesigned between R/S and E. Leftover (and now functionally unused) scripts are commented below

@ All the below checks are leftover from RS. FLAG_MOSSDEEP_GYM_SWITCH_X is never set
MossdeepCity_Gym_OnLoad: @ 8220806
    call_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_SetWarpMetatile
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
	end

MossdeepCity_Gym_EventScript_CheckSwitch2:: @ 8220815
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_SetSwitch2Metatiles
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
	end

MossdeepCity_Gym_EventScript_CheckSwitch3:: @ 8220824
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_SetSwitch3Metatiles
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
	end

MossdeepCity_Gym_EventScript_CheckSwitch4:: @ 8220833
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_SetSwitch4Metatiles
	end

MossdeepCity_Gym_EventScript_SetWarpMetatile:: @ 822083D
	setmetatile 7, 30, METATILE_MossdeepGym_GymWarp, 0
	return

@ All the below set metatile scripts are leftover from RS and are functionally unused
MossdeepCity_Gym_EventScript_SetSwitch1Metatiles:: @ 822083D
	setmetatile 5, 5, METATILE_RS_MossdeepGym_RedArrow_Right, 0
	setmetatile 2, 7, METATILE_RS_MossdeepGym_Switch_Down, 1
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
	end

MossdeepCity_Gym_EventScript_SetSwitch2Metatiles:: @ 8220855
	setmetatile 8, 14, METATILE_RS_MossdeepGym_RedArrow_Right, 0
	setmetatile 8, 10, METATILE_RS_MossdeepGym_Switch_Down, 1
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
	end

MossdeepCity_Gym_EventScript_SetSwitch3Metatiles:: @ 822086D
	setmetatile 15, 17, METATILE_RS_MossdeepGym_RedArrow_Left, 0
	setmetatile 17, 15, METATILE_RS_MossdeepGym_Switch_Down, 1
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
	end

MossdeepCity_Gym_EventScript_SetSwitch4Metatiles:: @ 8220885
	setmetatile 1, 23, METATILE_RS_MossdeepGym_RedArrow_Up, 0
	setmetatile 5, 24, METATILE_RS_MossdeepGym_Switch_Down, 1
	end

MossdeepCity_Gym_EventScript_TateAndLiza:: @ 8220898
	lock
	faceplayer
	call_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_TateAndLiza_PostBattle
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons, MossdeepCity_Gym_EventScript_TateAndLizaDefeated, NO_MUSIC
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_TateAndLizaDefeated:: @ 82208D1
	message MossdeepCity_Gym_Text_ReceivedMindBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
	setflag FLAG_BADGE07_GET
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
	setvar VAR_0x8008, 7
	call Common_EventScript_SetGymTrainers
	call Special_Gym_EventScript_Give_Item
	call MossdeepCity_Gym_EventScript_GiveCalmMind
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	call Gym_EventScript_Reset_Rematches
	setflag FLAG_TATE_AND_LIZA_REMATCH
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	call Common_EventScript_SetGymTrainers
	release
	end

//Rematch	
MossdeepCity_Gym_EventScript_TateAndLiza_PostBattle::
	goto_if_unset FLAG_TATE_AND_LIZA_REMATCH, MossdeepCity_Gym_EventScript_TateAndLizaRematch
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_TateAndLizaRematch::
	msgbox MossdeepCity_Gym_Text_TateAndLizaPreRematch, MSGBOX_DEFAULT
	goto MossdeepCity_Gym_EventScript_Start_Rematch_1
	end
	
MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd::
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
	call Gym_EventScript_Reset_Random_Rematch
	setflag FLAG_TATE_AND_LIZA_REMATCH
	end
	
MossdeepCity_Gym_EventScript_Start_Rematch_1::
	checkitem ITEM_TM04_CALM_MIND, 1
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_Gym_EventScript_Start_Rematch_2
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	msgbox MossdeepCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM04_CALM_MIND
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
	end
	
MossdeepCity_Gym_EventScript_Start_Rematch_2::
	goto_if_unset FLAG_RECEIVED_TM08 MossdeepCity_Gym_EventScript_Start_Rematch_Party_1
	checkitem ITEM_TM85_DREAM_EATER, 1
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_Gym_EventScript_Start_Rematch_3
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	msgbox MossdeepCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM85_DREAM_EATER
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
	end
	
MossdeepCity_Gym_EventScript_Start_Rematch_3::
	goto_if_unset FLAG_RECEIVED_TM42 MossdeepCity_Gym_EventScript_Start_Rematch_Party_2
	checkitem ITEM_TM92_TRICK_ROOM, 1
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_Gym_EventScript_Start_Rematch_4
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	msgbox MossdeepCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM92_TRICK_ROOM
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
	end
	
MossdeepCity_Gym_EventScript_Start_Rematch_4::
	goto_if_unset FLAG_RECEIVED_TM40 MossdeepCity_Gym_EventScript_Start_Rematch_Party_3
	checkitem ITEM_TM105_PSYSHOCK, 1
	compare VAR_RESULT, TRUE
	goto_if_eq MossdeepCity_Gym_EventScript_Start_Rematch_5
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	msgbox MossdeepCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM105_PSYSHOCK
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
	end
	
MossdeepCity_Gym_EventScript_Start_Rematch_5::
	goto_if_unset FLAG_RECEIVED_TM03 MossdeepCity_Gym_EventScript_Start_Rematch_Party_4
	goto_if_set FLAG_UNUSED_0x276 MossdeepCity_Gym_EventScript_Start_Rematch_6
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	msgbox MossdeepCity_Gym_Text_GetMegaStone_2, MSGBOX_DEFAULT
	giveitem ITEM_GALLADITE
	setflag FLAG_UNUSED_0x276
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
	end	
	
MossdeepCity_Gym_EventScript_Start_Rematch_6::
	goto_if_set FLAG_GOT_GARDEVOIRITE MossdeepCity_Gym_EventScript_Start_Rematch_Final
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_5, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	msgbox MossdeepCity_Gym_Text_GetMegaStone, MSGBOX_DEFAULT
	giveitem ITEM_GARDEVOIRITE
	setflag FLAG_GOT_GARDEVOIRITE
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
	end
	
MossdeepCity_Gym_EventScript_Start_Rematch_Final::
	random 5
	switch VAR_RESULT
	case 0, MossdeepCity_Gym_EventScript_Start_Rematch_Party_1
	case 1, MossdeepCity_Gym_EventScript_Start_Rematch_Party_2
	case 2, MossdeepCity_Gym_EventScript_Start_Rematch_Party_3
	case 3, MossdeepCity_Gym_EventScript_Start_Rematch_Party_4
	case 4, MossdeepCity_Gym_EventScript_Start_Rematch_Party_5
	end
	
MossdeepCity_Gym_EventScript_Start_Rematch_Party_1::
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
	msgbox MossdeepCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_CALM_MINT, 3
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
	end
	
MossdeepCity_Gym_EventScript_Start_Rematch_Party_2::
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
	msgbox MossdeepCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_GENTLE_MINT, 3
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
	end
	
MossdeepCity_Gym_EventScript_Start_Rematch_Party_3::
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
	msgbox MossdeepCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_CAREFUL_MINT, 3
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
	end
	
MossdeepCity_Gym_EventScript_Start_Rematch_Party_4::
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
	msgbox MossdeepCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_SASSY_MINT, 3
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
	end
	
MossdeepCity_Gym_EventScript_Start_Rematch_Party_5::
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_5, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
	msgbox MossdeepCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_MODEST_MINT, 3
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
	end
	
MossdeepCity_Gym_Text_GetTM:
	.string "Tate: Please take this\n"
	.string "Technical Machine.$"

MossdeepCity_Gym_Text_GetMegaStone:
	.string "Tate: Please take this\n"
	.string "Mega Stone, with you.\p"
	.string "Make an Gardevoir hold it to\n"
	.string "unleash its Hidden Potential.$"
	
MossdeepCity_Gym_Text_GetMegaStone_2:
	.string "Tate: Please take this\n"
	.string "Mega Stone, with you.\p"
	.string "Make an Gallade hold it to\n"
	.string "unleash its Hidden Potential.$"
	
MossdeepCity_Gym_Text_GetReward:
	.string "Liza: Please take this\n"
	.string "Item as a Reward.$"

//rematches end

MossdeepCity_Gym_EventScript_GiveCalmMind2:: @ 8220937
	giveitem ITEM_TM04
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_GiveCalmMind:: @ 822095B
	giveitem ITEM_TM04
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
	return

@ All the below switch scripts are leftover from RS and are functionally unused
MossdeepCity_Gym_EventScript_Switch1:: @ 8220999
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 5, 5, METATILE_RS_MossdeepGym_RedArrow_Right, 0
	setmetatile 2, 7, METATILE_RS_MossdeepGym_Switch_Down, 1
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed:: @ 82209C8
	special DrawWholeMapView
	playse SE_CLICK
	releaseall
	end

MossdeepCity_Gym_EventScript_ClearSwitch1:: @ 82209D0
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 5, 5, METATILE_RS_MossdeepGym_RedArrow_Left, 0
	setmetatile 2, 7, METATILE_RS_MossdeepGym_Switch_Up, 1
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch2:: @ 82209F5
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 8, 14, METATILE_RS_MossdeepGym_RedArrow_Right, 0
	setmetatile 8, 10, METATILE_RS_MossdeepGym_Switch_Down, 1
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_ClearSwitch2:: @ 8220A24
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 8, 14, METATILE_RS_MossdeepGym_RedArrow_Down, 0
	setmetatile 8, 10, METATILE_RS_MossdeepGym_Switch_Up, 1
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch3:: @ 8220A49
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 15, 17, METATILE_RS_MossdeepGym_RedArrow_Left, 0
	setmetatile 17, 15, METATILE_RS_MossdeepGym_Switch_Down, 1
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_ClearSwitch3:: @ 8220A78
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 15, 17, METATILE_RS_MossdeepGym_RedArrow_Right, 0
	setmetatile 17, 15, METATILE_RS_MossdeepGym_Switch_Up, 1
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_Switch4:: @ 8220A9D
	lockall
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 1, 23, METATILE_RS_MossdeepGym_RedArrow_Up, 0
	setmetatile 5, 24, METATILE_RS_MossdeepGym_Switch_Down, 1
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_ClearSwitch4:: @ 8220ACC
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
	waitmovement 0
	setmetatile 1, 23, METATILE_RS_MossdeepGym_RedArrow_Right, 0
	setmetatile 5, 24, METATILE_RS_MossdeepGym_Switch_Up, 1
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
	end

MossdeepCity_Gym_EventScript_WarpToEntrance:: @ 8220AF1
	lockall
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 255, 7, 30
	waitstate
	releaseall
	end
	
MossdeepCity_Gym_EventScript_WarpToLeaders:: @ 8220AF1
	goto_if_unset FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_WarpToEntrance
	lockall
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 255, 21, 6
	waitstate
	releaseall
	end

MossdeepCity_Gym_EventScript_Preston:: @ 8220AFD
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Virgil:: @ 8220B14
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Blake:: @ 8220B2B
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Hannah:: @ 8220B42
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Samantha:: @ 8220B59
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Maura:: @ 8220B70
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Sylvia:: @ 8220B87
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Nate:: @ 8220B9E
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Macey:: @ 8220BB5
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Clifford:: @ 8220BCC
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Nicholas:: @ 8220BE3
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_Kathleen:: @ 8220BFA
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
	end

MossdeepCity_Gym_EventScript_GymGuide:: @ 8220C11
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

MossdeepCity_Gym_EventScript_GymGuidePostVictory:: @ 8220C26
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

@ Leftover from RS, functionally unused
MossdeepCity_Gym_Movement_WaitAfterSwitchUse: @ 8220C30
	delay_16
	delay_16
	step_end

MossdeepCity_Gym_EventScript_LeftGymStatue:: @ 8220C33
	lockall
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
	goto MossdeepCity_Gym_EventScript_GymStatue
	end

MossdeepCity_Gym_EventScript_RightGymStatue:: @ 8220C43
	lockall
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
	goto MossdeepCity_Gym_EventScript_GymStatue
	end

MossdeepCity_Gym_EventScript_GymStatueCertified:: @ 8220C53
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_Gym_EventScript_GymStatue:: @ 8220C5D
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

MossdeepCity_Gym_EventScript_YellowFloorSwitch:: @ 8220C67
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 0
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_BlueFloorSwitch:: @ 8220C7D
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 1
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_GreenFloorSwitch:: @ 8220C93
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 2
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_PurpleFloorSwitch:: @ 8220CA9
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 3
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_EventScript_RedFloorSwitch:: @ 8220CBF
	playse SE_SWITCH
	waitse
	playse SE_REPEL
	initrotatingtilepuzzle FALSE
	moverotatingtileobjects 4
	waitmovement 0
	turnrotatingtileobjects
	waitmovement 0
	freerotatingtilepuzzle
	end

MossdeepCity_Gym_Text_GymGuideAdvice: @ 8220CD5
	.string "Yo, how's it going, Champion-bound\n"
	.string "{PLAYER}?\p"
	.string "The Gym Leaders here use\n"
	.string "Psychic-type Pokémon.\p"
	.string "If you go up against them with\n"
	.string "Fighting- or Poison-type Pokémon,\l"
	.string "they'll inflict horrible damage!\p"
	.string "Plus, they'll come at you with\n"
	.string "outstanding combination attacks.\p"
	.string "If you want to win, you'll need to show\n"
	.string "them how tight you are with your\l"
	.string "Pokémon. Go for it!$"

MossdeepCity_Gym_Text_GymGuidePostVictory: @ 8220E2A
	.string "Wow, you're astounding!\n"
	.string "You're one great Trainer!$"

MossdeepCity_Gym_Text_PrestonIntro: @ 8220E5C
	.string "Battles hinge on the strength of your\n"
	.string "spirit! The weak-spirited will never win!$"

MossdeepCity_Gym_Text_PrestonDefeat: @ 8220EAC
	.string "I lost!\n"
	.string "I must temper my spirit again!$"

MossdeepCity_Gym_Text_PrestonPostBattle: @ 8220ED3
	.string "The indecisive lose.\n"
	.string "That's my warning to you.$"

MossdeepCity_Gym_Text_VirgilIntro: @ 8220F02
	.string "Let me see your talent!$"

MossdeepCity_Gym_Text_VirgilDefeat: @ 8220F1A
	.string "You possess spectacular talent!$"

MossdeepCity_Gym_Text_VirgilPostBattle: @ 8220F3A
	.string "If there are prodigies in the world,\n"
	.string "then our Gym Leaders are them!\p"
	.string "However, you may be even more talented\n"
	.string "than them…$"

MossdeepCity_Gym_Text_BlakeIntro: @ 8220FB0
	.string "Fufufufu… Watch me levitate a Poké\n"
	.string "Ball telekinetically!\p"
	.string "Wrooooooooaaaar!\n"
	.string "… … … … … … …\p"
	.string "Sometimes, I'm out of sync…$"

MossdeepCity_Gym_Text_BlakeDefeat: @ 8221024
	.string "My Pokémon battling skills are out\n"
	.string "of sync, too!$"

MossdeepCity_Gym_Text_BlakePostBattle: @ 8221055
	.string "A Poké Ball was too heavy to lift\n"
	.string "psychically. But this dust bunny…\p"
	.string "Whoooooooooooooooh!\n"
	.string "… … … … … …\p"
	.string "No, I'm not cheating!\n"
	.string "I didn't blow on it! Honestly!$"

MossdeepCity_Gym_Text_HannahIntro: @ 82210EE
	.string "When you lose to me, don't be too hard\n"
	.string "on yourself.\p"
	.string "It's not that you're weak--I'm just\n"
	.string "too strong!$"

MossdeepCity_Gym_Text_HannahDefeat: @ 8221152
	.string "You're just too strong!$"

MossdeepCity_Gym_Text_HannahPostBattle: @ 822116A
	.string "I'm not going to get down on myself for\n"
	.string "losing. I just need to train harder.\p"
	.string "Positive thinking--that's my strong\n"
	.string "point!$"

MossdeepCity_Gym_Text_SamanthaIntro: @ 82211E2
	.string "I see it…\n"
	.string "I see your future…\p"
	.string "If you can beat me, I will tell you\n"
	.string "your future!$"

MossdeepCity_Gym_Text_SamanthaDefeat: @ 8221230
	.string "I surrender!$"

MossdeepCity_Gym_Text_SamanthaPostBattle: @ 822123D
	.string "You will wage a terrifically intense\n"
	.string "battle with our Gym Leaders…\p"
	.string "The result…\n"
	.string "You won't hear it from me!$"

MossdeepCity_Gym_Text_MauraIntro: @ 82212A6
	.string "The roads you have traveled…\n"
	.string "What you have experienced…\p"
	.string "Come at me with everything you've\n"
	.string "learned!$"

MossdeepCity_Gym_Text_MauraDefeat: @ 8221309
	.string "You've traveled a path of greatness!$"

MossdeepCity_Gym_Text_MauraPostBattle: @ 822132E
	.string "A bright future awaits those who have\n"
	.string "worked diligently.\p"
	.string "For those who lazed idly, there is\n"
	.string "only despair at the end.\p"
	.string "What goes around comes around…$"

MossdeepCity_Gym_Text_SylviaIntro: @ 82213C2
	.string "Even at the risk of life, I will win\n"
	.string "this battle!$"

MossdeepCity_Gym_Text_SylviaDefeat: @ 82213F4
	.string "What you do…\n"
	.string "It horrifies me…$"

MossdeepCity_Gym_Text_SylviaPostBattle: @ 8221412
	.string "How dare you beat me…\p"
	.string "It won't be my fault if something\n"
	.string "horrible befalls you…$"

MossdeepCity_Gym_Text_NateIntro: @ 8221460
	.string "Hohoho.\p"
	.string "You need me to show you how tenacious\n"
	.string "the Psychic type can be.$"

MossdeepCity_Gym_Text_NateDefeat: @ 82214A7
	.string "Oh! My, my!\n"
	.string "Your battle style is fantastic!$"

MossdeepCity_Gym_Text_NatePostBattle: @ 82214D3
	.string "I… I don't let defeat rattle m-me,\n"
	.string "however b-badly.$"

MossdeepCity_Gym_Text_KathleenIntro: @ 8221507
	.string "Let me show you a perfectly awful,\n"
	.string "horrifying time!$"

MossdeepCity_Gym_Text_KathleenDefeat: @ 822153B
	.string "N-nooooo!$"

MossdeepCity_Gym_Text_KathleenPostBattle: @ 8221545
	.string "Your vitality is contagious!\n"
	.string "Get away from me quickly!$"

MossdeepCity_Gym_Text_CliffordIntro: @ 822157C
	.string "I may be past my prime, but I suggest\n"
	.string "you not patronize me.$"

MossdeepCity_Gym_Text_CliffordDefeat: @ 82215B8
	.string "Ah, you overflow with the power\n"
	.string "of youth!$"

MossdeepCity_Gym_Text_CliffordPostBattle: @ 82215E2
	.string "It seems that I could not overcome\n"
	.string "your youthful energy.$"

MossdeepCity_Gym_Text_MaceyIntro: @ 822161B
	.string "You're not getting through to the end!\n"
	.string "Not if I can help it!$"

MossdeepCity_Gym_Text_MaceyDefeat: @ 8221658
	.string "How could you be so ludicrously\n"
	.string "strong?$"

MossdeepCity_Gym_Text_MaceyPostBattle: @ 8221680
	.string "Humph! You may be strong, but you're\n"
	.string "not suitable for the Psychic type!\p"
	.string "The way you battle is somehow brutal!$"

MossdeepCity_Gym_Text_NicholasIntro: @ 82216EE
	.string "Wroooar! Have a taste of my super\n"
	.string "Pokémon hard-battling power!$"

MossdeepCity_Gym_Text_NicholasDefeat: @ 822172D
	.string "Oh!\n"
	.string "Done in!$"

MossdeepCity_Gym_Text_NicholasPostBattle: @ 822173A
	.string "All right! I think I'll develop a special\n"
	.string "invincible Pokémon power next.$"

MossdeepCity_Gym_Text_TateAndLizaIntro: @ 8221783
	.string "Tate: Hehehe… Were you surprised?\p"
	.string "Liza: Fufufu… Were you surprised?\p"
	.string "Tate: That there are two Gym Leaders?\n"
	.string "Liza: That there are two Gym Leaders?\p"
	.string "Tate: We're twins!\n"
	.string "Liza: We're twins!\p"
	.string "Tate: We don't need to talk because…\n"
	.string "Liza: We can each determine what…\p"
	.string "Tate: The other is thinking…\n"
	.string "Liza: All in our minds!\p"
	.string "Tate: This combination of ours…\n"
	.string "Liza: Can you beat it?$"

MossdeepCity_Gym_Text_TateAndLizaDefeat: @ 82218EC
	.string "Tate: What?! Our combination…\n"
	.string "Liza: Was shattered!\p"
	.string "Tate: It can't be helped. You've won…\n"
	.string "Liza: So, in recognition, take this.$"

MossdeepCity_Gym_Text_ReceivedMindBadge: @ 822196A
	.string "{PLAYER} received the Mind Badge\n"
	.string "from Tate and Liza.$"

MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis: @ 8221999
	.string "Tate: You should take this.$"

MossdeepCity_Gym_Text_ExplainCalmMind: @ 8221A40
	.string "Tate: That TM04 contains…\n"
	.string "Liza: Calm Mind!\p"
	.string "Tate: It raises Special Attack and…\n"
	.string "Liza: It raises Special Defense!\p"
	.string "Tate: It's a move that's perfect…\n"
	.string "Liza: For Psychic Pokémon!\p"
	.string "… … … … … …$"

MossdeepCity_Gym_Text_RegisteredTateAndLiza: @ 8221AEA
	.string "Registered Gym Leaders Tate & Liza\n"
	.string "in the Pokénav.$"

MossdeepCity_Gym_Text_TateAndLizaPostBattle: @ 8221B1D
	.string "Tate: Looks like the bond between you\n"
	.string "and your Pokémon is far stronger than\l"
	.string "the bond that we share as twins.\p"
	.string "Liza: You will become even stronger!\n"
	.string "We've battled you, so we know.$"

MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons: @ 8221BCE
	.string "Tate: Hehehe… Were you surprised?\p"
	.string "Liza: That there are two Gym Leaders?\p"
	.string "Tate: Oops, you have only one…\n"
	.string "Liza: Pokémon that can battle.\p"
	.string "Tate: We can't battle that way!\p"
	.string "Liza: If you want to challenge us,\n"
	.string "bring some more Pokémon.$"

MossdeepCity_Gym_Text_GymStatue: @ 8221CB0
	.string "Mossdeep City Pokémon Gym$"

MossdeepCity_Gym_Text_GymStatueCertified: @ 8221CCA
	.string "Mossdeep City Pokémon Gym\p"
	.string "Liza AND Tate'S Certified Trainers:\n"
	.string "{PLAYER}$"

MossdeepCity_Gym_Text_TateAndLizaPreRematch: @ 8221D0B
	.string "Tate: Pokémon…\n"
	.string "Liza: Pokémon…\p"
	.string "Tate: By changing the party's mix…\n"
	.string "Liza: The battle style changes.\p"
	.string "Tate: But me…\n"
	.string "Liza: But me…\p"
	.string "Tate: I'll always be with Liza!\n"
	.string "Liza: I'll always be with Tate!\p"
	.string "Tate: Our combination…\n"
	.string "Liza: We'll show you again and again!$"

MossdeepCity_Gym_Text_TateAndLizaRematchDefeat: @ 8221E05
	.string "Tate: You and your Pokémon…\n"
	.string "Liza: It's as if you were siblings!$"

MossdeepCity_Gym_Text_TateAndLizaPostRematch: @ 8221E45
	.string "Tate: You can knock us down,\n"
	.string "but we'll never stay down!\p"
	.string "Liza: Because the two of us,\n"
	.string "we always support each other!$"

MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons: @ 8221EB8
	.string "Tate: You're back again…\n"
	.string "Liza: You're back again…\p"
	.string "Tate: To give us a rematch.\n"
	.string "Liza: To give us a rematch.\p"
	.string "Tate: But…\n"
	.string "Liza: For our match…\p"
	.string "Tate: You brought just one Pokémon!\n"
	.string "Liza: You brought just one Pokémon!\p"
	.string "Tate: We need you to bring at least…\n"
	.string "Liza: Two Pokémon when you come back.$"

MossdeepCity_Gym_EventScript_TateAndLiza_New::
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_TateAndLiza_New_34
MossdeepCity_Gym_EventScript_TateAndLiza_New_32:
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_TateAndLiza_New_31
MossdeepCity_Gym_EventScript_TateAndLiza_New_8:
	checktrainerflag TRAINER_PRESTON
	goto_if 0, MossdeepCity_Gym_EventScript_TateAndLiza_New_6
	checktrainerflag TRAINER_VIRGIL
	goto_if 0, MossdeepCity_Gym_EventScript_TateAndLiza_New_6
	checktrainerflag TRAINER_BLAKE
	goto_if 0, MossdeepCity_Gym_EventScript_TateAndLiza_New_6
	checktrainerflag TRAINER_HANNAH
	goto_if 0, MossdeepCity_Gym_EventScript_TateAndLiza_New_6
	checktrainerflag TRAINER_SAMANTHA
	goto_if 0, MossdeepCity_Gym_EventScript_TateAndLiza_New_6
	checktrainerflag TRAINER_MAURA
	goto_if 0, MossdeepCity_Gym_EventScript_TateAndLiza_New_6
	checktrainerflag TRAINER_NICHOLAS
	goto_if 0, MossdeepCity_Gym_EventScript_TateAndLiza_New_6
	checktrainerflag TRAINER_MACEY
	goto_if 0, MossdeepCity_Gym_EventScript_TateAndLiza_New_6
	checktrainerflag TRAINER_CLIFFORD
	goto_if 0, MossdeepCity_Gym_EventScript_TateAndLiza_New_6
	checktrainerflag TRAINER_KATHLEEN
	goto_if 0, MossdeepCity_Gym_EventScript_TateAndLiza_New_6
	checktrainerflag TRAINER_NATE
	goto_if 0, MossdeepCity_Gym_EventScript_TateAndLiza_New_6
	checktrainerflag TRAINER_SYLVIA
	goto_if 0, MossdeepCity_Gym_EventScript_TateAndLiza_New_6
MossdeepCity_Gym_EventScript_TateAndLiza_New_5:
	msgbox MossdeepCity_Gym_Text_TateAndLizaIntro, MSGBOX_NPC
	call MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New
	message MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_11
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_12, MSGBOX_NPC
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
	setflag FLAG_BADGE07_GET
	call Special_Gym_EventScript_Give_Item
	giveitem ITEM_TM04_CALM_MIND
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_13, MSGBOX_NPC
	waitfanfare
	closemessage
	setflag FLAG_TEMP_9
	call MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts
	setvar VAR_0x8008, 4
	call Common_EventScript_SetGymTrainers
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
	playfanfare MUS_REGISTER_MATCH_CALL
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
	waitfanfare
	closemessage
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_NPC
	call Gym_EventScript_Reset_Rematches
	setflag FLAG_TATE_AND_LIZA_REMATCH
MossdeepCity_Gym_EventScript_TateAndLiza_New_1:
	release
	end

MossdeepCity_Gym_EventScript_TateAndLiza_New_2:
	msgbox MossdeepCity_Gym_Text_TateAndLizaPreRematch, MSGBOX_NPC
	call MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_NPC
	call Gym_EventScript_Reset_Rematches
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_0, MSGBOX_NPC
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_1, MSGBOX_NPC
	call MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_2, MSGBOX_NPC
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_3, MSGBOX_NPC
	setflag FLAG_TATE_AND_LIZA_REMATCH
	goto MossdeepCity_Gym_EventScript_TateAndLiza_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_New_3:
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_4, MSGBOX_NPC
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_5, MSGBOX_NPC
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MossdeepCity_Gym_EventScript_TateAndLiza_New_37
	setvar VAR_0x8008, 4
	call Common_EventScript_SetGymTrainers
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_2, MSGBOX_NPC
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_3, MSGBOX_NPC
	goto MossdeepCity_Gym_EventScript_TateAndLiza_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_New_4:
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_9, MSGBOX_NPC
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_10, MSGBOX_NPC
	goto MossdeepCity_Gym_EventScript_TateAndLiza_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_New_6:
	goto_if_set FLAG_HARD_MODE, MossdeepCity_Gym_EventScript_TateAndLiza_New_4
	goto MossdeepCity_Gym_EventScript_TateAndLiza_New_5

MossdeepCity_Gym_EventScript_TateAndLiza_New_31:
	goto_if_set FLAG_TATE_AND_LIZA_REMATCH, MossdeepCity_Gym_EventScript_TateAndLiza_New_3
	goto MossdeepCity_Gym_EventScript_TateAndLiza_New_8

MossdeepCity_Gym_EventScript_TateAndLiza_New_34:
	goto_if_unset FLAG_TATE_AND_LIZA_REMATCH, MossdeepCity_Gym_EventScript_TateAndLiza_New_2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_New_32

MossdeepCity_Gym_EventScript_TateAndLiza_New_37:
	cleartrainerflag TRAINER_PRESTON
	cleartrainerflag TRAINER_VIRGIL
	cleartrainerflag TRAINER_BLAKE
	cleartrainerflag TRAINER_HANNAH
	cleartrainerflag TRAINER_SAMANTHA
	cleartrainerflag TRAINER_MAURA
	cleartrainerflag TRAINER_SYLVIA
	cleartrainerflag TRAINER_NATE
	cleartrainerflag TRAINER_KATHLEEN
	cleartrainerflag TRAINER_CLIFFORD
	cleartrainerflag TRAINER_MACEY
	cleartrainerflag TRAINER_NICHOLAS
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_7, MSGBOX_NPC
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_8, MSGBOX_NPC
	goto MossdeepCity_Gym_EventScript_TateAndLiza_New_1


MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New::
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_2
	goto_if_set FLAG_HARD_MODE, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_10
	goto_if_set FLAG_NORMAL_MODE, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_11
	switch VAR_NUM_BADGES
	case 0, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_66
	case 1, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_67
	case 2, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_68
	case 3, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_69
	case 4, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_70
	case 5, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_71
	case 6, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_72
	case 7, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_73
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_90
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaDefeat
MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1:
	return

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_2:
	goto_if_set FLAG_HARD_MODE, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_5
	goto_if_set FLAG_NORMAL_MODE, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_6
	switch VAR_NUM_BADGES
	case 0, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_36
	case 1, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_37
	case 2, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_38
	case 3, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_39
	case 4, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_40
	case 5, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_41
	case 6, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_42
	case 7, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_43
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_81
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_5:
	switch VAR_NUM_BADGES
	case 0, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_16
	case 1, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_17
	case 2, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_18
	case 3, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_19
	case 4, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_20
	case 5, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_21
	case 6, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_22
	case 7, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_23
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_75
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_5, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_6:
	switch VAR_NUM_BADGES
	case 0, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_26
	case 1, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_27
	case 2, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_28
	case 3, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_29
	case 4, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_30
	case 5, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_31
	case 6, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_32
	case 7, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_33
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_78
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_5, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_10:
	switch VAR_NUM_BADGES
	case 0, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_46
	case 1, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_47
	case 2, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_48
	case 3, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_49
	case 4, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_50
	case 5, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_51
	case 6, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_52
	case 7, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_53
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_84
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_5, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_11:
	switch VAR_NUM_BADGES
	case 0, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_56
	case 1, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_57
	case 2, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_58
	case 3, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_59
	case 4, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_60
	case 5, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_61
	case 6, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_62
	case 7, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_63
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_87
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_5, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_16:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_17:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_18:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_19:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_20:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_21:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_22:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_23:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_26:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_27:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_28:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_29:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_30:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_31:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_32:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_33:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_36:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_37:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_38:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_39:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_40:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_41:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_42:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_43:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_46:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_47:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_48:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_49:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_50:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_51:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_52:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_53:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_56:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_57:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_58:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_59:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_60:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_61:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_62:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_63:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_66:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_67:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_68:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_69:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_70:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_71:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_72:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_73:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_75:
	random 5
	switch VAR_RESULT
	case 0, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_94
	case 1, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_95
	case 2, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_96
	case 3, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_97
	case 4, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_98
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_78:
	random 5
	switch VAR_RESULT
	case 0, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_100
	case 1, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_101
	case 2, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_102
	case 3, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_103
	case 4, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_104
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_81:
	random 5
	switch VAR_RESULT
	case 0, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_106
	case 1, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_107
	case 2, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_108
	case 3, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_109
	case 4, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_110
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_84:
	random 5
	switch VAR_RESULT
	case 0, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_112
	case 1, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_113
	case 2, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_114
	case 3, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_115
	case 4, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_116
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_87:
	random 5
	switch VAR_RESULT
	case 0, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_118
	case 1, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_119
	case 2, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_120
	case 3, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_121
	case 4, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_122
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_90:
	random 5
	switch VAR_RESULT
	case 0, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_124
	case 1, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_125
	case 2, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_126
	case 3, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_127
	case 4, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_128
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_94:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_95:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_96:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_97:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_98:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_5, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_100:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_101:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_102:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_103:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_104:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_5, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_106:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_107:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_108:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_109:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_110:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_5, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_112:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_113:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_114:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_115:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_116:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_5, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_118:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_119:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_120:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_121:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_122:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_5, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_124:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_125:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_126:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_127:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_128:
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_5, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1


MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts::
	checkitem ITEM_TM85_DREAM_EATER, 1
	compare VAR_NUM_BADGES, 3
	goto_if_ge MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_3
MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_1:
	checkitem ITEM_TM92_TRICK_ROOM, 1
	compare VAR_NUM_BADGES, 5
	goto_if_ge MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_8
MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_6:
	checkitem ITEM_TM105_PSYSHOCK, 1
	compare VAR_NUM_BADGES, 7
	goto_if_ge MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_13
MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_11:
	compare VAR_NUM_BADGES, 7
	goto_if_ge MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_20
MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_19:
	goto_if_unset FLAG_TEMP_9, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_18
MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16:
	return

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_2:
	giveitem ITEM_TM85_DREAM_EATER
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_0, MSGBOX_NPC
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_1, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_1

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_3:
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_1

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_7:
	giveitem ITEM_TM92_TRICK_ROOM
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_2, MSGBOX_NPC
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_3, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_6

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_8:
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_7
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_6

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_12:
	giveitem ITEM_TM105_PSYSHOCK
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_4, MSGBOX_NPC
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_5, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_11

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_13:
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_12
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_11

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_17:
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_6, MSGBOX_NPC
	giveitem ITEM_GARDEVOIRITE
	giveitem ITEM_GALLADITE
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_7, MSGBOX_NPC
	setflag FLAG_GOT_GARDEVOIRITE
	setflag FLAG_TEMP_9
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_18:
	random 7
	switch VAR_RESULT
	case 0, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_24
	case 1, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_25
	case 2, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_26
	case 3, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_27
	case 4, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_28
	case 5, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_29
	case 6, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_30
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_20:
	goto_if_unset FLAG_GOT_GARDEVOIRITE, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_17
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_19

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_24:
	giveitem ITEM_LIFE_ORB, 2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_25:
	giveitem ITEM_PSYCHIC_GEM, 2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_26:
	giveitem ITEM_SUN_STONE, 2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_27:
	giveitem ITEM_MOON_STONE, 2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_28:
	giveitem ITEM_SCOPE_LENS, 2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_29:
	giveitem ITEM_TERRAIN_EXTENDER, 2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_30:
	giveitem ITEM_COLBUR_BERRY, 2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16


MossdeepCity_Gym_EventScript_GymGuide_New::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuide_New_2
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_NPC
MossdeepCity_Gym_EventScript_GymGuide_New_1:
	release
	end

MossdeepCity_Gym_EventScript_GymGuide_New_2:
	goto_if_unset FLAG_TATE_AND_LIZA_REMATCH, MossdeepCity_Gym_EventScript_GymGuide_New_5
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_NPC
	goto MossdeepCity_Gym_EventScript_GymGuide_New_1

MossdeepCity_Gym_EventScript_GymGuide_New_5:
	msgbox MossdeepCity_Gym_EventScript_GymGuide_New_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MossdeepCity_Gym_EventScript_GymGuide_New_8
	msgbox MossdeepCity_Gym_EventScript_GymGuide_New_Text_2, MSGBOX_NPC
	goto MossdeepCity_Gym_EventScript_GymGuide_New_1

MossdeepCity_Gym_EventScript_GymGuide_New_8:
	msgbox MossdeepCity_Gym_EventScript_GymGuide_New_Text_1, MSGBOX_NPC
	warp MAP_MOSSDEEP_CITY_GYM, 255, 23, 8
	goto MossdeepCity_Gym_EventScript_GymGuide_New_1


MossdeepCity_Gym_EventScript_Gym_Solrock::
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_Gym_Solrock_8
MossdeepCity_Gym_EventScript_Gym_Solrock_6:
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_Gym_Solrock_5
MossdeepCity_Gym_EventScript_Gym_Solrock_4:
	msgbox MossdeepCity_Gym_EventScript_Gym_Solrock_Text_4, MSGBOX_NPC
	msgbox MossdeepCity_Gym_EventScript_Gym_Solrock_Text_5, MSGBOX_SIGN
	waitmessage
MossdeepCity_Gym_EventScript_Gym_Solrock_1:
	release
	end

MossdeepCity_Gym_EventScript_Gym_Solrock_2:
	msgbox MossdeepCity_Gym_EventScript_Gym_Solrock_Text_0, MSGBOX_NPC
	msgbox MossdeepCity_Gym_EventScript_Gym_Solrock_Text_1, MSGBOX_SIGN
	waitmessage
	goto MossdeepCity_Gym_EventScript_Gym_Solrock_1

MossdeepCity_Gym_EventScript_Gym_Solrock_3:
	msgbox MossdeepCity_Gym_EventScript_Gym_Solrock_Text_2, MSGBOX_NPC
	msgbox MossdeepCity_Gym_EventScript_Gym_Solrock_Text_3, MSGBOX_SIGN
	waitmessage
	goto MossdeepCity_Gym_EventScript_Gym_Solrock_1

MossdeepCity_Gym_EventScript_Gym_Solrock_5:
	goto_if_set FLAG_TATE_AND_LIZA_REMATCH, MossdeepCity_Gym_EventScript_Gym_Solrock_3
	goto MossdeepCity_Gym_EventScript_Gym_Solrock_4

MossdeepCity_Gym_EventScript_Gym_Solrock_8:
	goto_if_unset FLAG_TATE_AND_LIZA_REMATCH, MossdeepCity_Gym_EventScript_Gym_Solrock_2
	goto MossdeepCity_Gym_EventScript_Gym_Solrock_6


MossdeepCity_Gym_EventScript_Gym_Lunatone::
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_Gym_Lunatone_8
MossdeepCity_Gym_EventScript_Gym_Lunatone_6:
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_Gym_Lunatone_5
MossdeepCity_Gym_EventScript_Gym_Lunatone_4:
	msgbox MossdeepCity_Gym_EventScript_Gym_Lunatone_Text_2, MSGBOX_NPC
	msgbox MossdeepCity_Gym_EventScript_Gym_Solrock_Text_5, MSGBOX_SIGN
	waitmessage
MossdeepCity_Gym_EventScript_Gym_Lunatone_1:
	release
	end

MossdeepCity_Gym_EventScript_Gym_Lunatone_2:
	msgbox MossdeepCity_Gym_EventScript_Gym_Lunatone_Text_0, MSGBOX_NPC
	msgbox MossdeepCity_Gym_EventScript_Gym_Solrock_Text_1, MSGBOX_SIGN
	waitmessage
	goto MossdeepCity_Gym_EventScript_Gym_Lunatone_1

MossdeepCity_Gym_EventScript_Gym_Lunatone_3:
	msgbox MossdeepCity_Gym_EventScript_Gym_Lunatone_Text_1, MSGBOX_NPC
	msgbox MossdeepCity_Gym_EventScript_Gym_Solrock_Text_3, MSGBOX_SIGN
	waitmessage
	goto MossdeepCity_Gym_EventScript_Gym_Lunatone_1

MossdeepCity_Gym_EventScript_Gym_Lunatone_5:
	goto_if_set FLAG_TATE_AND_LIZA_REMATCH, MossdeepCity_Gym_EventScript_Gym_Lunatone_3
	goto MossdeepCity_Gym_EventScript_Gym_Lunatone_4

MossdeepCity_Gym_EventScript_Gym_Lunatone_8:
	goto_if_unset FLAG_TATE_AND_LIZA_REMATCH, MossdeepCity_Gym_EventScript_Gym_Lunatone_2
	goto MossdeepCity_Gym_EventScript_Gym_Lunatone_6


MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_0:
	.string "Tate: Please take$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_1:
	.string "Liza: these items with you.$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_2:
	.string "Tate: Come back tomorrow$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_3:
	.string "Liza: so we can battle again.$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_4:
	.string "Tate: Our Pokémon are tired for today,\n"
	.string "do you want to try battling them\l"
	.string "again?$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_5:
	.string "Liza: but the other trainers here need\n"
	.string "training$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_6:
	.string "Tate: Do you want to try battling them\n"
	.string "again?$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_7:
	.string "Tate: I will tell them to get ready.$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_8:
	.string "Liza: so take care on your way out.$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_9:
	.string "Tate: Sorry, but you need to defeat\n"
	.string "every$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_10:
	.string "Liza: trainer on this Gym before\n"
	.string "battling us$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_11:
	.string "{PLAYER} received the Mind Badge\n"
	.string "from Tate and Liza.$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_12:
	.string "Please take these items with you, too,$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_13:
	.string "Tate: That technical machine contains\n"
	.string "the move Calm Mind.\p"
	.string "Liza: This move raises your Pokémon\n"
	.string "Special Attack and Special Defense at\l"
	.string "the same time.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_0:
	.string "Tate: This move can only hit.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_1:
	.string "Liza: if the Target is asleep.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_2:
	.string "Tate: This move reverses the turn\n"
	.string "order.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_3:
	.string "Liza: but only for 5 turns.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_4:
	.string "Tate: This move inflicts damage.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_5:
	.string "Liza: but its based on the target\n"
	.string "physical Defense.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_6:
	.string "Tate: Take this as an special gift from\n"
	.string "us, it's a pair of Mega Stones.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_7:
	.string "Liza: Make a Gardevoir or a Gallade hold\n"
	.string "it to unleash their real potential.$"

MossdeepCity_Gym_EventScript_GymGuide_New_Text_0:
	.string "Guide: Hello {PLAYER}, I see you came\n"
	.string "to this Gym again, do you want me to\l"
	.string "take you to the Leaders?$"

MossdeepCity_Gym_EventScript_GymGuide_New_Text_1:
	.string "Let me tell them that you are here.$"

MossdeepCity_Gym_EventScript_GymGuide_New_Text_2:
	.string "I see, you can also go throught the Gym\n"
	.string "if you want.$"

MossdeepCity_Gym_EventScript_Gym_Solrock_Text_0:
	.string "Solrock: rock!$"

MossdeepCity_Gym_EventScript_Gym_Solrock_Text_1:
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, it looks really\l"
	.string "bright.$"

MossdeepCity_Gym_EventScript_Gym_Solrock_Text_2:
	.string "Solrock: rock...$"

MossdeepCity_Gym_EventScript_Gym_Solrock_Text_3:
	.string "The Pokémon seems tired after today's\n"
	.string "battle, its better to leave it rest$"

MossdeepCity_Gym_EventScript_Gym_Solrock_Text_4:
	.string "Solrock: rock?$"

MossdeepCity_Gym_EventScript_Gym_Solrock_Text_5:
	.string "The Pokémon seems curious about how\n"
	.string "strong you are.$"

MossdeepCity_Gym_EventScript_Gym_Lunatone_Text_0:
	.string "Lunatone: tone!$"

MossdeepCity_Gym_EventScript_Gym_Lunatone_Text_1:
	.string "Lunatone: tone...$"

MossdeepCity_Gym_EventScript_Gym_Lunatone_Text_2:
	.string "Lunatone: tone?$"
