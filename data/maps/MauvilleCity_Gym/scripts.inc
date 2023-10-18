MauvilleCity_Gym_MapScripts:: @ 820DD6E
	map_script MAP_SCRIPT_ON_LOAD, MauvilleCity_Gym_OnLoad
	.byte 0

MauvilleCity_Gym_OnLoad: @ 820DD74
	call MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_DeactivatePuzzle
	switch VAR_MAUVILLE_GYM_STATE
	case 0, MauvilleCity_Gym_EventScript_UpdateBarriers
	case 1, MauvilleCity_Gym_EventScript_Switch1Pressed
	case 2, MauvilleCity_Gym_EventScript_Switch2Pressed
	case 3, MauvilleCity_Gym_EventScript_Switch3Pressed
	case 4, MauvilleCity_Gym_EventScript_Switch4Pressed
	end

MauvilleCity_Gym_EventScript_UpdateBarriers:: @ 820DDBA
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetAltBarriers
	end

MauvilleCity_Gym_EventScript_SetAltBarriers:: @ 820DDC4
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, 1
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, 1
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, 1
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, 0
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, 0
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, 1
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, 1
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, 0
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, 0
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, 1
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, 1
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, 0
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, 0
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, 0
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, 0
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, 0
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, 0
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, 0
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, 0
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, 1
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, 0
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, 0
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, 0
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, 0
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, 0
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, 0
	end

MauvilleCity_Gym_EventScript_Switch1Pressed:: @ 820DEAF
	setvar VAR_0x8004, 0
	special MauvilleGymPressSwitch
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
	end

MauvilleCity_Gym_EventScript_Switch2Pressed:: @ 820DEBD
	setvar VAR_0x8004, 1
	special MauvilleGymPressSwitch
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
	end

MauvilleCity_Gym_EventScript_Switch3Pressed:: @ 820DECB
	setvar VAR_0x8004, 2
	special MauvilleGymPressSwitch
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
	end

MauvilleCity_Gym_EventScript_Switch4Pressed:: @ 820DED9
	setvar VAR_0x8004, 3
	special MauvilleGymPressSwitch
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
	end

MauvilleCity_Gym_EventScript_DeactivatePuzzle:: @ 820DEE7
	special MauvilleGymDeactivatePuzzle
	end

MauvilleCity_Gym_EventScript_Wattson:: @ 820DEEB
	lock
	faceplayer
	call_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_Wattson_PostBattle
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_WattsonDefeated:: @ 820DF2B
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_MAUVILLE_GYM
	setflag FLAG_BADGE03_GET
	addvar VAR_PETALBURG_GYM_STATE, 1
	compare VAR_PETALBURG_GYM_STATE, 6
	setvar VAR_0x8008, 3
	call Common_EventScript_SetGymTrainers
	special MauvilleGymDeactivatePuzzle
	special DrawWholeMapView
	playse SE_UNLOCK
	call Special_Gym_EventScript_Give_Item
	call MauvilleCity_Gym_EventScript_GiveShockWave
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
	call Gym_EventScript_Reset_Rematches
	setflag FLAG_WATTSON_REMATCH
	release
	end
	
MauvilleCity_Gym_EventScript_WattsonRematch:: @ 820DFDE
	msgbox MauvilleCity_Gym_Text_WattsonPreRematch, MSGBOX_DEFAULT
	goto MauvilleCity_Gym_EventScript_Start_Rematch_1
	end
	
MauvilleCity_Gym_EventScript_Wattson_PostBattle::
	goto_if_unset FLAG_WATTSON_REMATCH, MauvilleCity_Gym_EventScript_WattsonRematch
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
	release
	end
	
//rematches
MauvilleCity_Gym_EventScript_WattsonRematchEnd::
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
	call Gym_EventScript_Reset_Random_Rematch
	setflag FLAG_WATTSON_REMATCH
	release
	end
	
//rematches
MauvilleCity_Gym_EventScript_Start_Rematch_1::
	checkitem ITEM_TM73_THUNDER_WAVE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_Gym_EventScript_Start_Rematch_2
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
	msgbox MauvilleCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM73_THUNDER_WAVE
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
	end
	
MauvilleCity_Gym_EventScript_Start_Rematch_2::
	goto_if_unset FLAG_RECEIVED_TM08 MauvilleCity_Gym_EventScript_Start_Rematch_Party_1
	checkitem ITEM_TM34_SHOCK_WAVE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_Gym_EventScript_Start_Rematch_3
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonRematchDefeat
	msgbox MauvilleCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM34_SHOCK_WAVE
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
	end
	
MauvilleCity_Gym_EventScript_Start_Rematch_3::
	goto_if_unset FLAG_RECEIVED_TM42 MauvilleCity_Gym_EventScript_Start_Rematch_Party_2
	checkitem ITEM_TM57_CHARGE_BEAM, 1
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_Gym_EventScript_Start_Rematch_4
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonRematchDefeat
	msgbox MauvilleCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM57_CHARGE_BEAM
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
	end
	
MauvilleCity_Gym_EventScript_Start_Rematch_4::
	goto_if_unset FLAG_RECEIVED_TM40 MauvilleCity_Gym_EventScript_Start_Rematch_Party_3
	checkitem ITEM_TM72_VOLT_SWITCH, 1
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_Gym_EventScript_Start_Rematch_5
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonRematchDefeat
	msgbox MauvilleCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM72_VOLT_SWITCH
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
	end
	
MauvilleCity_Gym_EventScript_Start_Rematch_5::
	goto_if_unset FLAG_RECEIVED_TM04 MauvilleCity_Gym_EventScript_Start_Rematch_Party_4
	goto_if_set FLAG_GOT_MANECTITE MauvilleCity_Gym_EventScript_Start_Rematch_6
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonRematchDefeat
	msgbox MauvilleCity_Gym_Text_GetMegaStone, MSGBOX_DEFAULT
	giveitem ITEM_MANECTITE
	setflag FLAG_GOT_MANECTITE
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
	end
	
MauvilleCity_Gym_EventScript_Start_Rematch_6::
	goto_if_unset FLAG_RECEIVED_TM03 MauvilleCity_Gym_EventScript_Start_Rematch_Party_4
	checkitem ITEM_TM93_WILD_CHARGE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq MauvilleCity_Gym_EventScript_Start_Rematch_Final
	trainerbattle_no_intro TRAINER_WATTSON_5, MauvilleCity_Gym_Text_WattsonRematchDefeat
	msgbox MauvilleCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM93_WILD_CHARGE
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
	end
	
MauvilleCity_Gym_EventScript_Start_Rematch_Final::
	random 5
	switch VAR_RESULT
	case 0, MauvilleCity_Gym_EventScript_Start_Rematch_Party_1
	case 1, MauvilleCity_Gym_EventScript_Start_Rematch_Party_2
	case 2, MauvilleCity_Gym_EventScript_Start_Rematch_Party_3
	case 3, MauvilleCity_Gym_EventScript_Start_Rematch_Party_4
	case 4, MauvilleCity_Gym_EventScript_Start_Rematch_Party_5
	end
	
MauvilleCity_Gym_EventScript_Start_Rematch_Party_1::
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, MauvilleCity_Gym_EventScript_WattsonRematchEnd
	msgbox MauvilleCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_TIMID_MINT, 3
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
	end
	
MauvilleCity_Gym_EventScript_Start_Rematch_Party_2::
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, MauvilleCity_Gym_EventScript_WattsonRematchEnd
	msgbox MauvilleCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_HASTY_MINT, 3
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
	end
	
MauvilleCity_Gym_EventScript_Start_Rematch_Party_3::
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, MauvilleCity_Gym_EventScript_WattsonRematchEnd
	msgbox MauvilleCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_JOLLY_MINT, 3
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
	end
	
MauvilleCity_Gym_EventScript_Start_Rematch_Party_4::
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, MauvilleCity_Gym_EventScript_WattsonRematchEnd
	msgbox MauvilleCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_NAIVE_MINT, 3
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
	end
	
MauvilleCity_Gym_EventScript_Start_Rematch_Party_5::
	trainerbattle_no_intro TRAINER_WATTSON_5, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, MauvilleCity_Gym_EventScript_WattsonRematchEnd
	msgbox MauvilleCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_MODEST_MINT, 3
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
	end
	
MauvilleCity_Gym_Text_GetTM:
	.string "Wattson: Please take this\n"
	.string "Technical Machine.$"

MauvilleCity_Gym_Text_GetMegaStone:
	.string "Wattson: Please take this\n"
	.string "Mega Stone, with you.\p"
	.string "Make an Aggron hold it to\n"
	.string "unleash its Hidden Potential.$"
	
MauvilleCity_Gym_Text_GetReward:
	.string "Wattson: Please take this\n"
	.string "Item as a Reward.$"

//rematches end

MauvilleCity_Gym_EventScript_GiveShockWave:: @ 820DFB1
	msgbox Gym_Text_Takethis2, MSGBOX_DEFAULT
	giveitem ITEM_TM34
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
	return

MauvilleCity_Gym_EventScript_CompletedNewMauville:: @ 820DFD4
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_Switch1:: @ 820DFF9
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
	compare VAR_MAUVILLE_GYM_STATE, 1
	goto_if_eq MauvilleCity_Gym_EventScript_SwitchDoNothing
	setvar VAR_MAUVILLE_GYM_STATE, 1
	setvar VAR_0x8004, 0
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
	end

MauvilleCity_Gym_EventScript_Switch2:: @ 820E01E
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
	compare VAR_MAUVILLE_GYM_STATE, 2
	goto_if_eq MauvilleCity_Gym_EventScript_SwitchDoNothing
	setvar VAR_MAUVILLE_GYM_STATE, 2
	setvar VAR_0x8004, 1
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
	end

MauvilleCity_Gym_EventScript_Switch3:: @ 820E043
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
	compare VAR_MAUVILLE_GYM_STATE, 3
	goto_if_eq MauvilleCity_Gym_EventScript_SwitchDoNothing
	setvar VAR_MAUVILLE_GYM_STATE, 3
	setvar VAR_0x8004, 2
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
	end

MauvilleCity_Gym_EventScript_Switch4:: @ 820E068
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
	compare VAR_MAUVILLE_GYM_STATE, 4
	goto_if_eq MauvilleCity_Gym_EventScript_SwitchDoNothing
	setvar VAR_MAUVILLE_GYM_STATE, 4
	setvar VAR_0x8004, 3
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
	end

MauvilleCity_Gym_EventScript_PressFloorSwitch:: @ 820E08D
	special MauvilleGymSetDefaultBarriers
	special MauvilleGymPressSwitch
	special DrawWholeMapView
	playse SE_UNLOCK
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
	releaseall
	end

MauvilleCity_Gym_EventScript_SwitchDoNothing:: @ 820E0AD
	releaseall
	end

MauvilleCity_Gym_EventScript_SetBarriersAltState:: @ 820E0AF
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
	releaseall
	end

MauvilleCity_Gym_EventScript_ClearBarriersAltState:: @ 820E0B4
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
	releaseall
	end

MauvilleCity_Gym_EventScript_Kirk:: @ 820E0B9
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Shawn:: @ 820E0D0
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Ben:: @ 820E0E7
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Vivian:: @ 820E0FE
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_Angelo:: @ 820E115
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
	end

MauvilleCity_Gym_EventScript_GymGuide:: @ 820E12C
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_GymGuidePostVictory:: @ 820E141
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

MauvilleCity_Gym_EventScript_LeftGymStatue:: @ 820E14B
	lockall
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
	goto MauvilleCity_Gym_EventScript_GymStatue
	end

MauvilleCity_Gym_EventScript_RightGymStatue:: @ 820E15B
	lockall
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
	goto MauvilleCity_Gym_EventScript_GymStatue
	end

MauvilleCity_Gym_EventScript_GymStatueCertified:: @ 820E16B
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

MauvilleCity_Gym_EventScript_GymStatue:: @ 820E175
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

MauvilleCity_Gym_Text_GymGuideAdvice: @ 820E17F
	.string "Hey, how's it going, Champion-\n"
	.string "bound {PLAYER}?\p"
	.string "Wattson, the Leader of Mauville\n"
	.string "Gym, uses Electric-type Pokémon.\p"
	.string "If you challenge him with Water-type\n"
	.string "Pokémon, he'll zap them! Bzzt!\p"
	.string "And, he's put in switch-controlled\n"
	.string "doors all over his Gym! Eccentric!\p"
	.string "Hey, go for it!$"

MauvilleCity_Gym_Text_GymGuidePostVictory: @ 820E283
	.string "Whoa, you're electrifying!\n"
	.string "You've powered the door open!$"

MauvilleCity_Gym_Text_KirkIntro: @ 820E2BC
	.string "My electric soul, it'll shatter your\n"
	.string "dreams whole, whoa-yeahah!$"

MauvilleCity_Gym_Text_KirkDefeat: @ 820E2FC
	.string "That was plugged in, amped up,\n"
	.string "over-driven electric, man!$"

MauvilleCity_Gym_Text_KirkPostBattle: @ 820E336
	.string "Pokémon and rock, it's all about heart,\n"
	.string "whoa-yeah!$"

MauvilleCity_Gym_Text_ShawnIntro: @ 820E369
	.string "I trained under Wattson!\n"
	.string "There ain't no way I'll lose easily!$"

MauvilleCity_Gym_Text_ShawnDefeat: @ 820E3A7
	.string "Unplugged and turned off…$"

MauvilleCity_Gym_Text_ShawnPostBattle: @ 820E3C1
	.string "Wattson, our Gym Leader, has been\n"
	.string "around for a long, long time.\p"
	.string "He was battling even before your\n"
	.string "daddy was born, that tough coot.$"

MauvilleCity_Gym_Text_BenIntro: @ 820E443
	.string "This Gym's got puzzles!\n"
	.string "Isn't it fun?$"

MauvilleCity_Gym_Text_BenDefeat: @ 820E469
	.string "It's no fun to lose…$"

MauvilleCity_Gym_Text_BenPostBattle: @ 820E47E
	.string "Wattson says he likes setting up\n"
	.string "little traps with switches.$"

MauvilleCity_Gym_Text_VivianIntro: @ 820E4BB
	.string "With my charm and my Pokémon's moves,\n"
	.string "you'll be shocked!$"

MauvilleCity_Gym_Text_VivianDefeat: @ 820E4F4
	.string "I'm shocked by your power!$"

MauvilleCity_Gym_Text_VivianPostBattle: @ 820E50F
	.string "I've heard that Mauville was founded\n"
	.string "by Wattson.\p"
	.string "He was a Trainer long before we\n"
	.string "became Trainers.\l"
	.string "He must know all sorts of things!$"

MauvilleCity_Gym_Text_AngeloIntro: @ 820E593
	.string "I love shiny things!$"

MauvilleCity_Gym_Text_AngeloDefeat: @ 820E5A8
	.string "Oh…\n"
	.string "My eyes are frazzled…$"

MauvilleCity_Gym_Text_AngeloPostBattle: @ 820E5C2
	.string "Mauville Gym's Wattson has a shiny\n"
	.string "forehead. It makes me happy!$"

MauvilleCity_Gym_Text_WattsonIntro: @ 820E602
	.string "I've given up on my plans to convert\n"
	.string "the city, I have.\p"
	.string "And so, I put my time into making\n"
	.string "door traps in my Gym.\p"
	.string "Oh? Now, what are you doing here?\p"
	.string "What's that? You say you've gotten\n"
	.string "past all my rigged doors?\p"
	.string "Wahahahah!\n"
	.string "Now, that is amusing!\p"
	.string "Then, I, Wattson, the Leader of\n"
	.string "Mauville Gym, shall electrify you!$"

MauvilleCity_Gym_Text_WattsonDefeat: @ 820E734
	.string "Wahahahah!\n"
	.string "Fine, I lost!\p"
	.string "You ended up giving me a thrill!\n"
	.string "Take this Badge!$"

MauvilleCity_Gym_Text_ReceivedDynamoBadge: @ 820E77F
	.string "{PLAYER} received the Dynamo Badge\n"
	.string "from Wattson.$"

MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis: @ 820E7AA
	.string "Hmm…\n"
	.string "You should take this, too!$"

MauvilleCity_Gym_Text_ExplainShockWave: @ 820E844
	.string "That TM34 there contains Shock Wave.\p"
	.string "It's a trustworthy move that never\n"
	.string "misses! You can count on it!\p"
	.string "… … … … … …$"

MauvilleCity_Gym_Text_RegisteredWattson: @ 820E8B5
	.string "Registered Gym Leader Wattson\n"
	.string "in the Pokénav.$"

MauvilleCity_Gym_Text_WattsonPostBattle: @ 820E8E3
	.string "I swell with optimism, seeing a promising\n"
	.string "young Trainer like you!$"

MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor: @ 820E925
	.string "Wahahahah!\n"
	.string "Go forth and endeavor, youngster!$"

MauvilleCity_Gym_Text_GymStatue: @ 820E952
	.string "Mauville City Pokémon Gym$"

MauvilleCity_Gym_Text_GymStatueCertified: @ 820E96C
	.string "Mauville City Pokémon Gym\p"
	.string "Wattson'S Certified Trainers:\n"
	.string "{PLAYER}$"

MauvilleCity_Gym_Text_WattsonPreRematch: @ 820E9A7
	.string "Wattson: Ah-ha! Here at last!\n"
	.string "I know what you want.\l"
	.string "You want to battle my Pokémon!\p"
	.string "Wahahahaha!\p"
	.string "I'll make sparks fly from you!\n"
	.string "Don't say I didn't warn you!$"

MauvilleCity_Gym_Text_WattsonRematchDefeat: @ 820EA42
	.string "Oof…\n"
	.string "Our batteries ran dry…$"

MauvilleCity_Gym_Text_WattsonPostRematch: @ 820EA5E
	.string "Wattson: We'll have to recharge our\n"
	.string "batteries again.\p"
	.string "When we're fully charged up, we'll\n"
	.string "gladly accept your challenge.\p"
	.string "So, come back again sometime,\n"
	.string "won't you?$"

MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons: @ 820EAFD
	.string "Wattson: Ah-ha! Here at last!\n"
	.string "I know what you want.\l"
	.string "You want to battle my Pokémon!\p"
	.string "Wahahahaha!\p"
	.string "Oops! Wait!\n"
	.string "You've only one Pokémon with you!\p"
	.string "Come see me with two or more\n"
	.string "Pokémon, all right?$"

MauvilleCity_Gym_Text_ReceivedMegaStone:
	.string "Take this Mega Stone with\n"
	.string "you.$"

MauvilleCity_Gym_EventScript_Wattson_New::
	lock
	faceplayer
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_Wattson_New_20
MauvilleCity_Gym_EventScript_Wattson_New_18:
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_Wattson_New_17
MauvilleCity_Gym_EventScript_Wattson_New_8:
	checktrainerflag TRAINER_KIRK
	goto_if 0, MauvilleCity_Gym_EventScript_Wattson_New_6
	checktrainerflag TRAINER_SHAWN
	goto_if 0, MauvilleCity_Gym_EventScript_Wattson_New_6
	checktrainerflag TRAINER_BEN
	goto_if 0, MauvilleCity_Gym_EventScript_Wattson_New_6
	checktrainerflag TRAINER_VIVIAN
	goto_if 0, MauvilleCity_Gym_EventScript_Wattson_New_6
	checktrainerflag TRAINER_ANGELO
	goto_if 0, MauvilleCity_Gym_EventScript_Wattson_New_6
MauvilleCity_Gym_EventScript_Wattson_New_5:
	msgbox MauvilleCity_Gym_Text_WattsonIntro, MSGBOX_NPC
	call MauvilleCity_Gym_EventScript_Wattson_Battle_New
	message MauvilleCity_Gym_EventScript_Wattson_New_Text_5
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox MauvilleCity_Gym_EventScript_Wattson_New_Text_6, MSGBOX_NPC
	setflag FLAG_DEFEATED_MAUVILLE_GYM
	setflag FLAG_BADGE03_GET
	call Special_Gym_EventScript_Give_Item
	giveitem ITEM_TM73_THUNDER_WAVE
	msgbox MauvilleCity_Gym_EventScript_Wattson_New_Text_7, MSGBOX_NPC
	waitfanfare
	closemessage
	setflag FLAG_TEMP_9
	call MauvilleCity_Gym_EventScript_Wattson_Give_Gifts
	setvar VAR_0x8008, 3
	call Common_EventScript_SetGymTrainers
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
	playfanfare MUS_REGISTER_MATCH_CALL
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
	waitfanfare
	closemessage
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_NPC
	call Gym_EventScript_Reset_Rematches
	setflag FLAG_WATTSON_REMATCH
MauvilleCity_Gym_EventScript_Wattson_New_1:
	release
	end

MauvilleCity_Gym_EventScript_Wattson_New_2:
	msgbox MauvilleCity_Gym_Text_WattsonPreRematch, MSGBOX_NPC
	call MauvilleCity_Gym_EventScript_Wattson_Battle_New
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_NPC
	call Gym_EventScript_Reset_Rematches
	msgbox MauvilleCity_Gym_EventScript_Wattson_New_Text_0, MSGBOX_NPC
	call MauvilleCity_Gym_EventScript_Wattson_Give_Gifts
	msgbox MauvilleCity_Gym_EventScript_Wattson_New_Text_1, MSGBOX_NPC
	setflag FLAG_WATTSON_REMATCH
	goto MauvilleCity_Gym_EventScript_Wattson_New_1

MauvilleCity_Gym_EventScript_Wattson_New_3:
	msgbox MauvilleCity_Gym_EventScript_Wattson_New_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_Gym_EventScript_Wattson_New_23
	setvar VAR_0x8008, 3
	call Common_EventScript_SetGymTrainers
	msgbox MauvilleCity_Gym_EventScript_Wattson_New_Text_1, MSGBOX_NPC
	goto MauvilleCity_Gym_EventScript_Wattson_New_1

MauvilleCity_Gym_EventScript_Wattson_New_4:
	msgbox MauvilleCity_Gym_EventScript_Wattson_New_Text_4, MSGBOX_NPC
	goto MauvilleCity_Gym_EventScript_Wattson_New_1

MauvilleCity_Gym_EventScript_Wattson_New_6:
	goto_if_set FLAG_HARD_MODE, MauvilleCity_Gym_EventScript_Wattson_New_4
	goto MauvilleCity_Gym_EventScript_Wattson_New_5

MauvilleCity_Gym_EventScript_Wattson_New_17:
	goto_if_set FLAG_WATTSON_REMATCH, MauvilleCity_Gym_EventScript_Wattson_New_3
	goto MauvilleCity_Gym_EventScript_Wattson_New_8

MauvilleCity_Gym_EventScript_Wattson_New_20:
	goto_if_unset FLAG_WATTSON_REMATCH, MauvilleCity_Gym_EventScript_Wattson_New_2
	goto MauvilleCity_Gym_EventScript_Wattson_New_18

MauvilleCity_Gym_EventScript_Wattson_New_23:
	cleartrainerflag TRAINER_KIRK
	cleartrainerflag TRAINER_SHAWN
	cleartrainerflag TRAINER_BEN
	cleartrainerflag TRAINER_VIVIAN
	cleartrainerflag TRAINER_ANGELO
	msgbox MauvilleCity_Gym_EventScript_Wattson_New_Text_3, MSGBOX_NPC
	goto MauvilleCity_Gym_EventScript_Wattson_New_1


MauvilleCity_Gym_EventScript_Wattson_Battle_New::
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_Wattson_Battle_New_2
	goto_if_set FLAG_HARD_MODE, MauvilleCity_Gym_EventScript_Wattson_Battle_New_10
	goto_if_set FLAG_NORMAL_MODE, MauvilleCity_Gym_EventScript_Wattson_Battle_New_11
	switch VAR_NUM_BADGES
	case 0, MauvilleCity_Gym_EventScript_Wattson_Battle_New_66
	case 1, MauvilleCity_Gym_EventScript_Wattson_Battle_New_67
	case 2, MauvilleCity_Gym_EventScript_Wattson_Battle_New_68
	case 3, MauvilleCity_Gym_EventScript_Wattson_Battle_New_69
	case 4, MauvilleCity_Gym_EventScript_Wattson_Battle_New_70
	case 5, MauvilleCity_Gym_EventScript_Wattson_Battle_New_71
	case 6, MauvilleCity_Gym_EventScript_Wattson_Battle_New_72
	case 7, MauvilleCity_Gym_EventScript_Wattson_Battle_New_73
	goto_if_set FLAG_SYS_GAME_CLEAR, MauvilleCity_Gym_EventScript_Wattson_Battle_New_90
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonDefeat
MauvilleCity_Gym_EventScript_Wattson_Battle_New_1:
	return

MauvilleCity_Gym_EventScript_Wattson_Battle_New_2:
	goto_if_set FLAG_HARD_MODE, MauvilleCity_Gym_EventScript_Wattson_Battle_New_5
	goto_if_set FLAG_NORMAL_MODE, MauvilleCity_Gym_EventScript_Wattson_Battle_New_6
	switch VAR_NUM_BADGES
	case 0, MauvilleCity_Gym_EventScript_Wattson_Battle_New_36
	case 1, MauvilleCity_Gym_EventScript_Wattson_Battle_New_37
	case 2, MauvilleCity_Gym_EventScript_Wattson_Battle_New_38
	case 3, MauvilleCity_Gym_EventScript_Wattson_Battle_New_39
	case 4, MauvilleCity_Gym_EventScript_Wattson_Battle_New_40
	case 5, MauvilleCity_Gym_EventScript_Wattson_Battle_New_41
	case 6, MauvilleCity_Gym_EventScript_Wattson_Battle_New_42
	case 7, MauvilleCity_Gym_EventScript_Wattson_Battle_New_43
	goto_if_set FLAG_SYS_GAME_CLEAR, MauvilleCity_Gym_EventScript_Wattson_Battle_New_81
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_5:
	switch VAR_NUM_BADGES
	case 0, MauvilleCity_Gym_EventScript_Wattson_Battle_New_16
	case 1, MauvilleCity_Gym_EventScript_Wattson_Battle_New_17
	case 2, MauvilleCity_Gym_EventScript_Wattson_Battle_New_18
	case 3, MauvilleCity_Gym_EventScript_Wattson_Battle_New_19
	case 4, MauvilleCity_Gym_EventScript_Wattson_Battle_New_20
	case 5, MauvilleCity_Gym_EventScript_Wattson_Battle_New_21
	case 6, MauvilleCity_Gym_EventScript_Wattson_Battle_New_22
	case 7, MauvilleCity_Gym_EventScript_Wattson_Battle_New_23
	goto_if_set FLAG_SYS_GAME_CLEAR, MauvilleCity_Gym_EventScript_Wattson_Battle_New_75
	trainerbattle_no_intro TRAINER_WATTSON_5, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_6:
	switch VAR_NUM_BADGES
	case 0, MauvilleCity_Gym_EventScript_Wattson_Battle_New_26
	case 1, MauvilleCity_Gym_EventScript_Wattson_Battle_New_27
	case 2, MauvilleCity_Gym_EventScript_Wattson_Battle_New_28
	case 3, MauvilleCity_Gym_EventScript_Wattson_Battle_New_29
	case 4, MauvilleCity_Gym_EventScript_Wattson_Battle_New_30
	case 5, MauvilleCity_Gym_EventScript_Wattson_Battle_New_31
	case 6, MauvilleCity_Gym_EventScript_Wattson_Battle_New_32
	case 7, MauvilleCity_Gym_EventScript_Wattson_Battle_New_33
	goto_if_set FLAG_SYS_GAME_CLEAR, MauvilleCity_Gym_EventScript_Wattson_Battle_New_78
	trainerbattle_no_intro TRAINER_WATTSON_5, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_10:
	switch VAR_NUM_BADGES
	case 0, MauvilleCity_Gym_EventScript_Wattson_Battle_New_46
	case 1, MauvilleCity_Gym_EventScript_Wattson_Battle_New_47
	case 2, MauvilleCity_Gym_EventScript_Wattson_Battle_New_48
	case 3, MauvilleCity_Gym_EventScript_Wattson_Battle_New_49
	case 4, MauvilleCity_Gym_EventScript_Wattson_Battle_New_50
	case 5, MauvilleCity_Gym_EventScript_Wattson_Battle_New_51
	case 6, MauvilleCity_Gym_EventScript_Wattson_Battle_New_52
	case 7, MauvilleCity_Gym_EventScript_Wattson_Battle_New_53
	goto_if_set FLAG_SYS_GAME_CLEAR, MauvilleCity_Gym_EventScript_Wattson_Battle_New_84
	trainerbattle_no_intro TRAINER_WATTSON_5, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_11:
	switch VAR_NUM_BADGES
	case 0, MauvilleCity_Gym_EventScript_Wattson_Battle_New_56
	case 1, MauvilleCity_Gym_EventScript_Wattson_Battle_New_57
	case 2, MauvilleCity_Gym_EventScript_Wattson_Battle_New_58
	case 3, MauvilleCity_Gym_EventScript_Wattson_Battle_New_59
	case 4, MauvilleCity_Gym_EventScript_Wattson_Battle_New_60
	case 5, MauvilleCity_Gym_EventScript_Wattson_Battle_New_61
	case 6, MauvilleCity_Gym_EventScript_Wattson_Battle_New_62
	case 7, MauvilleCity_Gym_EventScript_Wattson_Battle_New_63
	goto_if_set FLAG_SYS_GAME_CLEAR, MauvilleCity_Gym_EventScript_Wattson_Battle_New_87
	trainerbattle_no_intro TRAINER_WATTSON_5, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_16:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_17:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_18:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_19:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_20:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_21:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_22:
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_23:
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_26:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_27:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_28:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_29:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_30:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_31:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_32:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_33:
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_36:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_37:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_38:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_39:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_40:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_41:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_42:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_43:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_46:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_47:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_48:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_49:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_50:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_51:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_52:
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_53:
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_56:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_57:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_58:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_59:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_60:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_61:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_62:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_63:
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_66:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_67:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_68:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_69:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_70:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_71:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_72:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_73:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_75:
	random 5
	switch VAR_RESULT
	case 0, MauvilleCity_Gym_EventScript_Wattson_Battle_New_94
	case 1, MauvilleCity_Gym_EventScript_Wattson_Battle_New_95
	case 2, MauvilleCity_Gym_EventScript_Wattson_Battle_New_96
	case 3, MauvilleCity_Gym_EventScript_Wattson_Battle_New_97
	case 4, MauvilleCity_Gym_EventScript_Wattson_Battle_New_98
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_78:
	random 5
	switch VAR_RESULT
	case 0, MauvilleCity_Gym_EventScript_Wattson_Battle_New_100
	case 1, MauvilleCity_Gym_EventScript_Wattson_Battle_New_101
	case 2, MauvilleCity_Gym_EventScript_Wattson_Battle_New_102
	case 3, MauvilleCity_Gym_EventScript_Wattson_Battle_New_103
	case 4, MauvilleCity_Gym_EventScript_Wattson_Battle_New_104
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_81:
	random 5
	switch VAR_RESULT
	case 0, MauvilleCity_Gym_EventScript_Wattson_Battle_New_106
	case 1, MauvilleCity_Gym_EventScript_Wattson_Battle_New_107
	case 2, MauvilleCity_Gym_EventScript_Wattson_Battle_New_108
	case 3, MauvilleCity_Gym_EventScript_Wattson_Battle_New_109
	case 4, MauvilleCity_Gym_EventScript_Wattson_Battle_New_110
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_84:
	random 5
	switch VAR_RESULT
	case 0, MauvilleCity_Gym_EventScript_Wattson_Battle_New_112
	case 1, MauvilleCity_Gym_EventScript_Wattson_Battle_New_113
	case 2, MauvilleCity_Gym_EventScript_Wattson_Battle_New_114
	case 3, MauvilleCity_Gym_EventScript_Wattson_Battle_New_115
	case 4, MauvilleCity_Gym_EventScript_Wattson_Battle_New_116
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_87:
	random 5
	switch VAR_RESULT
	case 0, MauvilleCity_Gym_EventScript_Wattson_Battle_New_118
	case 1, MauvilleCity_Gym_EventScript_Wattson_Battle_New_119
	case 2, MauvilleCity_Gym_EventScript_Wattson_Battle_New_120
	case 3, MauvilleCity_Gym_EventScript_Wattson_Battle_New_121
	case 4, MauvilleCity_Gym_EventScript_Wattson_Battle_New_122
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_90:
	random 5
	switch VAR_RESULT
	case 0, MauvilleCity_Gym_EventScript_Wattson_Battle_New_124
	case 1, MauvilleCity_Gym_EventScript_Wattson_Battle_New_125
	case 2, MauvilleCity_Gym_EventScript_Wattson_Battle_New_126
	case 3, MauvilleCity_Gym_EventScript_Wattson_Battle_New_127
	case 4, MauvilleCity_Gym_EventScript_Wattson_Battle_New_128
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_94:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_95:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_96:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_97:
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_98:
	trainerbattle_no_intro TRAINER_WATTSON_5, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_100:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_101:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_102:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_103:
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_104:
	trainerbattle_no_intro TRAINER_WATTSON_5, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_106:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_107:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_108:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_109:
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_110:
	trainerbattle_no_intro TRAINER_WATTSON_5, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_112:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_113:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_114:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_115:
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_116:
	trainerbattle_no_intro TRAINER_WATTSON_5, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_118:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_119:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_120:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_121:
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_122:
	trainerbattle_no_intro TRAINER_WATTSON_5, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_124:
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_125:
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_126:
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_127:
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_128:
	trainerbattle_no_intro TRAINER_WATTSON_5, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1


MauvilleCity_Gym_EventScript_Wattson_Give_Gifts::
	checkitem ITEM_TM34_SHOCK_WAVE, 1
	compare VAR_NUM_BADGES, 2
	goto_if_ge MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_3
MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_1:
	checkitem ITEM_TM57_CHARGE_BEAM, 1
	compare VAR_NUM_BADGES, 4
	goto_if_ge MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_8
MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_6:
	checkitem ITEM_TM72_VOLT_SWITCH, 1
	compare VAR_NUM_BADGES, 6
	goto_if_ge MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_13
MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_11:
	checkitem ITEM_TM93_WILD_CHARGE, 1
	compare VAR_NUM_BADGES, 8
	goto_if_ge MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_18
MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_16:
	compare VAR_NUM_BADGES, 6
	goto_if_ge MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_25
MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_24:
	goto_if_unset FLAG_TEMP_9, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_23
MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21:
	return

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_2:
	giveitem ITEM_TM34_SHOCK_WAVE
	msgbox MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_0, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_1

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_3:
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_2
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_1

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_7:
	giveitem ITEM_TM57_CHARGE_BEAM
	msgbox MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_1, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_6

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_8:
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_7
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_6

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_12:
	giveitem ITEM_TM72_VOLT_SWITCH
	msgbox MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_2, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_11

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_13:
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_12
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_11

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_17:
	giveitem ITEM_TM93_WILD_CHARGE
	msgbox MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_3, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_16

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_18:
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_17
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_16

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_22:
	msgbox MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_4, MSGBOX_NPC
	giveitem ITEM_MANECTITE
	msgbox MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_5, MSGBOX_NPC
	setflag FLAG_GOT_MANECTITE
	setflag FLAG_TEMP_9
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_23:
	random 7
	switch VAR_RESULT
	case 0, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_29
	case 1, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_30
	case 2, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_31
	case 3, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_32
	case 4, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_33
	case 5, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_34
	case 6, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_35
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_25:
	goto_if_unset FLAG_GOT_MANECTITE, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_22
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_24

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_29:
	giveitem ITEM_CELL_BATTERY, 2
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_30:
	giveitem ITEM_MAGNET, 2
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_31:
	giveitem ITEM_LIGHT_BALL, 2
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_32:
	giveitem ITEM_ELECTRIC_SEED, 2
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_33:
	giveitem ITEM_WACAN_BERRY, 5
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_34:
	giveitem ITEM_THUNDER_STONE, 2
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_35:
	giveitem ITEM_ELECTRIC_GEM, 2
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21


MauvilleCity_Gym_EventScript_GymGuide_New::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuide_New_2
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_NPC
MauvilleCity_Gym_EventScript_GymGuide_New_1:
	release
	end

MauvilleCity_Gym_EventScript_GymGuide_New_2:
	goto_if_unset FLAG_WATTSON_REMATCH, MauvilleCity_Gym_EventScript_GymGuide_New_5
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_NPC
	goto MauvilleCity_Gym_EventScript_GymGuide_New_1

MauvilleCity_Gym_EventScript_GymGuide_New_5:
	msgbox MauvilleCity_Gym_EventScript_GymGuide_New_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_Gym_EventScript_GymGuide_New_8
	msgbox MauvilleCity_Gym_EventScript_GymGuide_New_Text_2, MSGBOX_NPC
	goto MauvilleCity_Gym_EventScript_GymGuide_New_1

MauvilleCity_Gym_EventScript_GymGuide_New_8:
	msgbox MauvilleCity_Gym_EventScript_GymGuide_New_Text_1, MSGBOX_NPC
	warp MAP_MAUVILLE_CITY_GYM, 255, 5, 3
	goto MauvilleCity_Gym_EventScript_GymGuide_New_1


MauvilleCity_Gym_EventScript_Gym_Electrike::
	lock
	faceplayer
	switch VAR_GYM_POKEMON_SPECIES
	case SPECIES_ELECTRIKE, MauvilleCity_Gym_EventScript_Gym_Electrike_3
	case SPECIES_MANECTRIC, MauvilleCity_Gym_EventScript_Gym_Electrike_4
MauvilleCity_Gym_EventScript_Gym_Electrike_1:
	release
	end

MauvilleCity_Gym_EventScript_Gym_Electrike_3:
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_Gym_Electrike_11
MauvilleCity_Gym_EventScript_Gym_Electrike_9:
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_Gym_Electrike_8
MauvilleCity_Gym_EventScript_Gym_Electrike_7:
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_4, MSGBOX_NPC
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_5, MSGBOX_SIGN
	waitmessage
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_1

MauvilleCity_Gym_EventScript_Gym_Electrike_4:
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_Gym_Electrike_24
MauvilleCity_Gym_EventScript_Gym_Electrike_22:
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_Gym_Electrike_21
MauvilleCity_Gym_EventScript_Gym_Electrike_19:
	compare VAR_NUM_BADGES, 6
	goto_if_ge MauvilleCity_Gym_EventScript_Gym_Electrike_18
MauvilleCity_Gym_EventScript_Gym_Electrike_17:
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_12, MSGBOX_NPC
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_13, MSGBOX_SIGN
	waitmessage
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_1

MauvilleCity_Gym_EventScript_Gym_Electrike_5:
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_0, MSGBOX_NPC
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_1, MSGBOX_SIGN
	waitmessage
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_1

MauvilleCity_Gym_EventScript_Gym_Electrike_6:
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_2, MSGBOX_NPC
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_3, MSGBOX_SIGN
	waitmessage
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_1

MauvilleCity_Gym_EventScript_Gym_Electrike_8:
	goto_if_set FLAG_WATTSON_REMATCH, MauvilleCity_Gym_EventScript_Gym_Electrike_6
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_7

MauvilleCity_Gym_EventScript_Gym_Electrike_11:
	goto_if_unset FLAG_WATTSON_REMATCH, MauvilleCity_Gym_EventScript_Gym_Electrike_5
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_9

MauvilleCity_Gym_EventScript_Gym_Electrike_14:
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_6, MSGBOX_NPC
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_7, MSGBOX_SIGN
	waitmessage
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_1

MauvilleCity_Gym_EventScript_Gym_Electrike_15:
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_8, MSGBOX_NPC
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_9, MSGBOX_SIGN
	waitmessage
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_1

MauvilleCity_Gym_EventScript_Gym_Electrike_16:
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_10, MSGBOX_NPC
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_11, MSGBOX_SIGN
	waitmessage
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_1

MauvilleCity_Gym_EventScript_Gym_Electrike_18:
	goto_if_unset FLAG_GOT_MANECTITE, MauvilleCity_Gym_EventScript_Gym_Electrike_16
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_17

MauvilleCity_Gym_EventScript_Gym_Electrike_21:
	goto_if_set FLAG_WATTSON_REMATCH, MauvilleCity_Gym_EventScript_Gym_Electrike_15
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_19

MauvilleCity_Gym_EventScript_Gym_Electrike_24:
	goto_if_unset FLAG_WATTSON_REMATCH, MauvilleCity_Gym_EventScript_Gym_Electrike_14
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_22


MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species::
	switch VAR_NUM_BADGES
	case 0, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_3
	case 1, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_4
	case 2, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_5
	case 3, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_6
	case 4, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_7
	case 5, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_8
	case 6, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_9
	case 7, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_10
	case 8, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_11
MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1:
	goto_if_set FLAG_NO_EVOLUTION_MODE, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_13
MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_12:
	return

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_3:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_ELECTRIKE
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_ELECTRIKE
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_4:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_ELECTRIKE
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_ELECTRIKE
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_5:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MANECTRIC
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MANECTRIC
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_6:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MANECTRIC
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MANECTRIC
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_7:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MANECTRIC
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MANECTRIC
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_8:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MANECTRIC
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MANECTRIC
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_9:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MANECTRIC
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MANECTRIC
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_10:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MANECTRIC
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MANECTRIC
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_11:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MANECTRIC
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MANECTRIC
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_13:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_ELECTRIKE
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_ELECTRIKE
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_12


MauvilleCity_Gym_EventScript_Wattson_New_Text_0:
	.string "Please take these items with you.$"

MauvilleCity_Gym_EventScript_Wattson_New_Text_1:
	.string "Wattson: Come back tomorrow so we can\n"
	.string "battle again.$"

MauvilleCity_Gym_EventScript_Wattson_New_Text_2:
	.string "Wattson: My Pokémon are tired for\n"
	.string "today, but the other trainers here\l"
	.string "need training, do you want to try\l"
	.string "battling them again?$"

MauvilleCity_Gym_EventScript_Wattson_New_Text_3:
	.string "Wattson: I will tell them to get ready,\n"
	.string "so take care on your way out.$"

MauvilleCity_Gym_EventScript_Wattson_New_Text_4:
	.string "Wattson: Sorry, but you need to defeat\n"
	.string "every trainer on this Gym before\l"
	.string "battling me$"

MauvilleCity_Gym_EventScript_Wattson_New_Text_5:
	.string "{PLAYER} received the Dynamo Badge\n"
	.string "from Wattson.$"

MauvilleCity_Gym_EventScript_Wattson_New_Text_6:
	.string "Please take these items with you, too,$"

MauvilleCity_Gym_EventScript_Wattson_New_Text_7:
	.string "That technical machine contains the\n"
	.string "move Thunder Wave.\p"
	.string "This move paralyzes the target so you\n"
	.string "can attack before them, its really\l"
	.string "useful.$"

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_0:
	.string "Wattson: This move inflicts damage and\n"
	.string "always lands, use it if you had your\l"
	.string "accuracy lowered.$"

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_1:
	.string "Wattson: This move inflicts damage and\n"
	.string "always rises the user Special Attack\l"
	.string "so it becomes stronger on each hit.$"

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_2:
	.string "Wattson: This move inflicts damage and\n"
	.string "lets you switch your Pokémon on the\l"
	.string "same turn, use it to switch if you are\l"
	.string "faster than your enemy.$"

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_3:
	.string "Wattson: This is an Electric-type\n"
	.string "damage move made specially for\l"
	.string "Electric-type Pokémon with high\l"
	.string "Physical Attack, it also inflicts recoil\l"
	.string "damage to the user so use it wisely.$"

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_4:
	.string "Wattson: Take this as an special gift\n"
	.string "from me, it's a Manectite.$"

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_5:
	.string "Make a Manectric hold it to unleash its\n"
	.string "real potential.$"

MauvilleCity_Gym_EventScript_GymGuide_New_Text_0:
	.string "Guide: Hello {PLAYER}, I see you came\n"
	.string "to this Gym again, do you want me to\l"
	.string "take you to the Leader?$"

MauvilleCity_Gym_EventScript_GymGuide_New_Text_1:
	.string "Let me tell the leader that you are\n"
	.string "here.$"

MauvilleCity_Gym_EventScript_GymGuide_New_Text_2:
	.string "I see, you can also go throught the Gym\n"
	.string "if you want.$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_0:
	.string "Electrike: trike!$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_1:
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, its fur looks like it\l"
	.string "has a lot of electricity.$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_2:
	.string "Electrike: trike...$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_3:
	.string "The Pokémon seems tired after today's\n"
	.string "battle, it let out a loud yawn.$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_4:
	.string "Electrike: trike?$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_5:
	.string "The Pokémon is chewing on a little toy.$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_6:
	.string "Manectric: tric!$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_7:
	.string "The Pokémon seems like it wants a\n"
	.string "rematch, it may even create\l"
	.string "thunderclouds.$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_8:
	.string "Manectric: tric...$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_9:
	.string "The Pokémon seems tired after today's\n"
	.string "battle, but it is still alert.$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_10:
	.string "Manectric: ron!$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_11:
	.string "The Pokémon is proudly wearing a collar\n"
	.string "with an stone attatched to it.$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_12:
	.string "Manectric: tric?$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_13:
	.string "The Pokémon is currently eating\n"
	.string "something.$"
