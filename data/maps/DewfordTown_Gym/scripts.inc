DewfordTown_Gym_MapScripts:: @ 81FC63C
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species
	.byte 0

DewfordTown_Gym_OnTransition: @ 81FC642
	call DewfordTown_Gym_EventScript_SetFlashRadius
	end

DewfordTown_Gym_EventScript_SetFlashRadius:: @ 81FC648
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
	copyvar VAR_0x8001, VAR_0x8000
	compare VAR_0x8000, 0
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashRadius7
	compare VAR_0x8000, 1
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashRadius6
	compare VAR_0x8000, 2
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashRadius5
	compare VAR_0x8000, 3
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashRadius4
	compare VAR_0x8000, 4
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashRadius3
	compare VAR_0x8000, 5
	goto_if_eq DewfordTown_Gym_EventScript_SetFlashRadius2
	goto DewfordTown_Gym_EventScript_SetFlashRadius1

DewfordTown_Gym_EventScript_SetLightsOn:: @ 81FC6A2
	setflashradius 0
	return

DewfordTown_Gym_EventScript_SetFlashRadius1:: @ 81FC6A6
	setflashradius 1
	return

DewfordTown_Gym_EventScript_SetFlashRadius2:: @ 81FC6AA
	setflashradius 2
	return

DewfordTown_Gym_EventScript_SetFlashRadius3:: @ 81FC6AE
	setflashradius 3
	return

DewfordTown_Gym_EventScript_SetFlashRadius4:: @ 81FC6B2
	setflashradius 4
	return

DewfordTown_Gym_EventScript_SetFlashRadius5:: @ 81FC6B6
	setflashradius 5
	return

DewfordTown_Gym_EventScript_SetFlashRadius6:: @ 81FC6BA
	setflashradius 6
	return

DewfordTown_Gym_EventScript_SetFlashRadius7:: @ 81FC6BE
	setflashradius 7
	return

DewfordTown_Gym_EventScript_BrightenRoom:: @ 81FC6C2
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
	nop1
	compare VAR_0x8000, VAR_0x8001
	goto_if_eq DewfordTown_Gym_EventScript_NoLightChange
	copyvar VAR_0x8001, VAR_0x8000
	compare VAR_0x8000, 1
	goto_if_eq DewfordTown_Gym_EventScript_AnimateFlash1Trainer
	compare VAR_0x8000, 2
	goto_if_eq DewfordTown_Gym_EventScript_AnimateFlash2Trainers
	compare VAR_0x8000, 3
	goto_if_eq DewfordTown_Gym_EventScript_AnimateFlash3Trainers
	compare VAR_0x8000, 4
	goto_if_eq DewfordTown_Gym_EventScript_AnimateFlash4Trainers
	compare VAR_0x8000, 5
	goto_if_eq DewfordTown_Gym_EventScript_AnimateFlash5Trainers
	compare VAR_0x8000, 6
	goto_if_eq DewfordTown_Gym_EventScript_AnimateFlash6Trainers

DewfordTown_Gym_EventScript_NoLightChange:: @ 81FC71A
	return

@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
DewfordTown_Gym_EventScript_AnimateFlash1Trainer:: @ 81FC71B
	playse SE_SWITCH
	animateflash 6
	call DewfordTown_Gym_EventScript_SetFlashRadius
	return

DewfordTown_Gym_EventScript_AnimateFlash2Trainers:: @ 81FC726
	playse SE_SWITCH
	animateflash 5
	call DewfordTown_Gym_EventScript_SetFlashRadius
	return

DewfordTown_Gym_EventScript_AnimateFlash3Trainers:: @ 81FC731
	playse SE_SWITCH
	animateflash 4
	call DewfordTown_Gym_EventScript_SetFlashRadius
	return

DewfordTown_Gym_EventScript_AnimateFlash4Trainers:: @ 81FC73C
	playse SE_SWITCH
	animateflash 3
	call DewfordTown_Gym_EventScript_SetFlashRadius
	return

DewfordTown_Gym_EventScript_AnimateFlash5Trainers:: @ 81FC747
	playse SE_SWITCH
	animateflash 2
	call DewfordTown_Gym_EventScript_SetFlashRadius
	return

DewfordTown_Gym_EventScript_AnimateFlash6Trainers:: @ 81FC752
	playse SE_SWITCH
	animateflash 1
	call DewfordTown_Gym_EventScript_SetFlashRadius
	return

DewfordTown_Gym_EventScript_AnimateFlashFullBrightness:: @ 81FC75D
	playse SE_SWITCH
	animateflash 0
	call DewfordTown_Gym_EventScript_SetFlashRadius
	return

DewfordTown_Gym_EventScript_CountTrainersDefeated:: @ 81FC768
	setvar VAR_0x8000, 0
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckJocelyn:: @ 81FC77B
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckLaura:: @ 81FC789
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckBrenden:: @ 81FC797
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckCristian:: @ 81FC7A5
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckLilith:: @ 81FC7B3
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_StopCountingTrainers:: @ 81FC7C1
	return

DewfordTown_Gym_EventScript_Brawly:: @ 81FC7C2
	lock
	faceplayer
	call_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Brawly_PostBattle
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_BrawlyDefeated:: @ 81FC7F7
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
	call Special_Gym_EventScript_Give_Item
	call DewfordTown_Gym_EventScript_GiveBulkUp
	closemessage
	delay 30
	setvar VAR_0x8008, 2
	call Common_EventScript_SetGymTrainers
	waitfanfare
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_DEFEATED_DEWFORD_GYM
	setflag FLAG_BADGE02_GET
	call Gym_EventScript_Reset_Rematches
	setflag FLAG_ROXANNE_REMATCH
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
	release
	end


DewfordTown_Gym_EventScript_Brawly_PostBattle::
	goto_if_unset FLAG_ROXANNE_REMATCH, DewfordTown_Gym_EventScript_BrawlyRematch
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_DEFAULT
	release
	end
	
DewfordTown_Gym_EventScript_BrawlyRematch:: @ 81FC89C
	msgbox DewfordTown_Gym_Text_BrawlyPreRematch, MSGBOX_DEFAULT
	goto DewfordTown_Gym_EventScript_Start_Rematch_1
	end
	
DewfordTown_Gym_EventScript_BrawlyRematchEnd::
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
	setflag FLAG_ROXANNE_REMATCH 
	call Gym_EventScript_Reset_Random_Rematch
	end
	
DewfordTown_Gym_EventScript_Start_Rematch_1::
	checkitem ITEM_TM08_BULK_UP, 1
	compare VAR_RESULT, TRUE
	goto_if_eq DewfordTown_Gym_EventScript_Start_Rematch_2
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
	msgbox DewfordTown_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM08_BULK_UP
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
	end
	
DewfordTown_Gym_EventScript_Start_Rematch_2::
	goto_if_unset FLAG_RECEIVED_TM08 DewfordTown_Gym_EventScript_Start_Rematch_Party_1
	checkitem ITEM_TM51_LOW_SWEEP, 1
	compare VAR_RESULT, TRUE
	goto_if_eq DewfordTown_Gym_EventScript_Start_Rematch_3
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyRematchDefeat
	msgbox DewfordTown_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM51_LOW_SWEEP
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
	end
	
DewfordTown_Gym_EventScript_Start_Rematch_3::
	goto_if_unset FLAG_RECEIVED_TM42 DewfordTown_Gym_EventScript_Start_Rematch_Party_2
	checkitem ITEM_TM87_SWAGGER, 1
	compare VAR_RESULT, TRUE
	goto_if_eq DewfordTown_Gym_EventScript_Start_Rematch_4
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyRematchDefeat
	msgbox DewfordTown_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM87_SWAGGER
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
	end
	
DewfordTown_Gym_EventScript_Start_Rematch_4::
	goto_if_unset FLAG_RECEIVED_TM40 DewfordTown_Gym_EventScript_Start_Rematch_Party_3
	checkitem ITEM_TM52_FOCUS_BLAST, 1
	compare VAR_RESULT, TRUE
	goto_if_eq DewfordTown_Gym_EventScript_Start_Rematch_5
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyRematchDefeat
	msgbox DewfordTown_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM52_FOCUS_BLAST
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
	end
	
DewfordTown_Gym_EventScript_Start_Rematch_5::
	goto_if_unset FLAG_RECEIVED_TM04 DewfordTown_Gym_EventScript_Start_Rematch_Party_4
	goto_if_set FLAG_GOT_HERACRONITE DewfordTown_Gym_EventScript_Start_Rematch_6
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyRematchDefeat
	msgbox DewfordTown_Gym_Text_GetMegaStone, MSGBOX_DEFAULT
	giveitem ITEM_HERACRONITE
	setflag FLAG_GOT_HERACRONITE
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
	end
	
DewfordTown_Gym_EventScript_Start_Rematch_6::
	goto_if_unset FLAG_RECEIVED_TM03 DewfordTown_Gym_EventScript_Start_Rematch_Party_4
	checkitem ITEM_TM106_AURA_SPHERE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq DewfordTown_Gym_EventScript_Start_Rematch_Final
	trainerbattle_no_intro TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyRematchDefeat
	msgbox DewfordTown_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM106_AURA_SPHERE
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
	end
	
DewfordTown_Gym_EventScript_Start_Rematch_Final::
	random 5
	switch VAR_RESULT
	case 0, DewfordTown_Gym_EventScript_Start_Rematch_Party_1
	case 1, DewfordTown_Gym_EventScript_Start_Rematch_Party_2
	case 2, DewfordTown_Gym_EventScript_Start_Rematch_Party_3
	case 3, DewfordTown_Gym_EventScript_Start_Rematch_Party_4
	case 4, DewfordTown_Gym_EventScript_Start_Rematch_Party_5
	end
	
DewfordTown_Gym_EventScript_Start_Rematch_Party_1::
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, DewfordTown_Gym_EventScript_BrawlyRematchEnd
	msgbox DewfordTown_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_LONELY_MINT, 3
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
	end
	
DewfordTown_Gym_EventScript_Start_Rematch_Party_2::
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, DewfordTown_Gym_EventScript_BrawlyRematchEnd
	msgbox DewfordTown_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_ADAMANT_MINT, 3
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
	end
	
DewfordTown_Gym_EventScript_Start_Rematch_Party_3::
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, DewfordTown_Gym_EventScript_BrawlyRematchEnd
	msgbox DewfordTown_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_NAUGHTY_MINT, 3
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
	end
	
DewfordTown_Gym_EventScript_Start_Rematch_Party_4::
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, DewfordTown_Gym_EventScript_BrawlyRematchEnd
	msgbox DewfordTown_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_BRAVE_MINT, 3
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
	end
	
DewfordTown_Gym_EventScript_Start_Rematch_Party_5::
	trainerbattle_no_intro TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, DewfordTown_Gym_EventScript_BrawlyRematchEnd
	msgbox DewfordTown_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_JOLLY_MINT, 3
	goto DewfordTown_Gym_EventScript_BrawlyRematchEnd
	end

DewfordTown_Gym_EventScript_GiveBulkUp:: @ 81FC855
	msgbox Gym_Text_Takethis2, MSGBOX_DEFAULT
	giveitem ITEM_TM08_BULK_UP
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
	return
	
DewfordTown_Gym_EventScript_GiveBulkUp2: @ 81FC878
	giveitem ITEM_TM08_BULK_UP
	compare VAR_RESULT, 0
	goto_if_eq Common_EventScript_ShowBagIsFull
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_Takao:: @ 81FC8B7
	trainerbattle_single TRAINER_TAKAO, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_TakaoBrightenRoom:: @ 81FC8D2
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Jocelyn:: @ 81FC8D9
	trainerbattle_single TRAINER_JOCELYN, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_JocelynBrightenRoom:: @ 81FC8F4
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Laura:: @ 81FC8FB
	trainerbattle_single TRAINER_LAURA, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_LauraBrightenRoom:: @ 81FC916
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Brenden:: @ 81FC91D
	trainerbattle_single TRAINER_BRENDEN, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_BrendenBrightenRoom:: @ 81FC938
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Cristian:: @ 81FC93F
	trainerbattle_single TRAINER_CRISTIAN, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_CristianBrightenRoom:: @ 81FC95A
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Lilith:: @ 81FC961
	trainerbattle_single TRAINER_LILITH, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_LilithBrightenRoom:: @ 81FC97C
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_GymGuide:: @ 81FC983
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_GymGuidePostVictory:: @ 81FC998
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_LeftGymStatue:: @ 81FC9A2
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_RightGymStatue:: @ 81FC9B2
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_GymStatueCertified:: @ 81FC9C2
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_EventScript_GymStatue:: @ 81FC9CC
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_Text_GymGuideAdvice: @ 81FC9D6
	.string "Hey, how's it going, Champion-\n"
	.string "bound {PLAYER}?\p"
	.string "Dewford's Gym Leader Brawly commands\n"
	.string "Fighting-type Pokémon.\p"
	.string "Going against him with Normal-type\n"
	.string "Pokémon is asking for trouble.\p"
	.string "Fighting Pokémon will lay a serious\n"
	.string "smack down on Normal Pokémon,\l"
	.string "so be careful!\p"
	.string "What's worse, the Gym is as dark as\n"
	.string "the ocean floor.\p"
	.string "But it will get brighter after defeating\n"
	.string "the Trainers in your way.\p"
	.string "Hey, okay, go for it!$"

DewfordTown_Gym_Text_GymGuidePostVictory: @ 81FCB5C
	.string "Whoah! It's turned too bright in here!\p"
	.string "Your future is bright, too!$"

DewfordTown_Gym_Text_TakaoIntro: @ 81FCB9F
	.string "Might is right!\n"
	.string "Come on!$"

DewfordTown_Gym_Text_TakaoDefeat: @ 81FCBB8
	.string "Not enough power…$"

DewfordTown_Gym_Text_TakaoPostBattle: @ 81FCBCA
	.string "Your skill overcame my strength!\n"
	.string "Your technique is commendable!$"

DewfordTown_Gym_Text_JocelynIntro: @ 81FCC0A
	.string "There's no need for Brawly to be\n"
	.string "involved!\p"
	.string "I'll crush you!$"

DewfordTown_Gym_Text_JocelynDefeat: @ 81FCC45
	.string "But… How?\n"
	.string "How could I lose so easily?$"

DewfordTown_Gym_Text_JocelynPostBattle: @ 81FCC6B
	.string "I'm not going to waste this loss.\n"
	.string "I'll use it to motivate me to train!\p"
	.string "One day I'll become a Gym Leader…\p"
	.string "No, I'll become the Pokémon League\n"
	.string "Champion!$"

DewfordTown_Gym_Text_LauraIntro: @ 81FCD01
	.string "Don't you dare brush me off!\n"
	.string "It's not my fault if you cry!$"

DewfordTown_Gym_Text_LauraDefeat: @ 81FCD3C
	.string "Waaaaaaah!\n"
	.string "I lost!$"

DewfordTown_Gym_Text_LauraPostBattle: @ 81FCD4F
	.string "I battle in the dark to make my heart\n"
	.string "stronger.\p"
	.string "But because it's so dark, I can never\n"
	.string "see Brawly's face…$"

DewfordTown_Gym_Text_LilithIntro: @ 81FCDB8
	.string "Ufufu…\n"
	.string "Are you stumbling around in the dark?$"

DewfordTown_Gym_Text_LilithDefeat: @ 81FCDE5
	.string "Oh, you…\n"
	.string "I don't want to know you!$"

DewfordTown_Gym_Text_LilithPostBattle: @ 81FCE08
	.string "You deserve to stay lost and end up\n"
	.string "back at the entrance again!$"

DewfordTown_Gym_Text_BrendenIntro: @ 81FCE48
	.string "I'll show you the gumption of\n"
	.string "a sailing man!$"

DewfordTown_Gym_Text_BrendenDefeat: @ 81FCE75
	.string "How'd this happen?\n"
	.string "It's not like me to lose this way!$"

DewfordTown_Gym_Text_BrendenPostBattle: @ 81FCEAB
	.string "Oh, aye! You're worthy of seeing\n"
	.string "our Gym Leader.$"

DewfordTown_Gym_Text_CristianIntro: @ 81FCEDC
	.string "If you mean to pass, it has to be\n"
	.string "through me!$"

DewfordTown_Gym_Text_CristianDefeat: @ 81FCF0A
	.string "Grrrrr!\n"
	.string "Vastly overpowered!$"

DewfordTown_Gym_Text_CristianPostBattle: @ 81FCF26
	.string "You win!\n"
	.string "Go after that Badge!$"

DewfordTown_Gym_Text_BrawlyIntro: @ 81FCF44
	.string "I'm Brawly!\n"
	.string "Dewford's Gym Leader!\p"
	.string "I've been churned in the rough waves\n"
	.string "of these parts, and I've grown tough\l"
	.string "in the pitch-black cave!\p"
	.string "So you wanted to challenge me?\n"
	.string "Let me see what you're made of!$"

DewfordTown_Gym_Text_BrawlyDefeat: @ 81FD008
	.string "Whoah, wow! You made a much bigger\n"
	.string "splash than I expected!\p"
	.string "You swamped me!\p"
	.string "Okay, you've got me.\n"
	.string "Take this Gym Badge!$"

DewfordTown_Gym_Text_ReceivedKnuckleBadge: @ 81FD07D
	.string "{PLAYER} received the Knuckle Badge\n"
	.string "from Brawly.$"

DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis: @ 81FD0A8
	.string "If you'd like, use this Technical\n"
	.string "Machine, too.$"

DewfordTown_Gym_Text_ExplainBulkUp: @ 81FD181
	.string "That TM08 contains Bulk Up.\p"
	.string "It's a move that raises both Attack\n"
	.string "and Defense stats.\p"
	.string "… … … … … …$"

DewfordTown_Gym_Text_RegisteredBrawly: @ 81FD1E0
	.string "Registered Gym Leader Brawly\n"
	.string "in the Pokénav.$"

DewfordTown_Gym_Text_BrawlyPostBattle: @ 81FD20D
	.string "I can see your talent becoming a giant\n"
	.string "wave to cause a storm of astonishment\l"
	.string "among Trainers one day!$"

DewfordTown_Gym_Text_GymStatue: @ 81FD272
	.string "Dewford Town Pokémon Gym$"

DewfordTown_Gym_Text_GymStatueCertified: @ 81FD28B
	.string "Dewford Town Pokémon Gym\p"
	.string "Brawly'S Certified Trainers:\n"
	.string "{PLAYER}$"

DewfordTown_Gym_Text_BrawlyPreRematch: @ 81FD2C4
	.string "Brawly: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Show me how much higher\n"
	.string "you've gone!$"

DewfordTown_Gym_Text_BrawlyRematchDefeat: @ 81FD367
	.string "Wow!\n"
	.string "Swamped again!$"

DewfordTown_Gym_Text_BrawlyPostRematch: @ 81FD37B
	.string "Brawly: Battling is vast and it's deep.\n"
	.string "You can't see the bottom.\l"
	.string "It's just like the sea of Hoenn!$"

DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons: @ 81FD3DE
	.string "Brawly: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Oh? You only have one Pokémon\n"
	.string "that can battle.\p"
	.string "I'm sorry, but I'd like you to come back\n"
	.string "with at least two Pokémon.$"
	
DewfordTown_Gym_Text_GetTM:
	.string "Brawly: Please take this\n"
	.string "Technical Machine.$"

DewfordTown_Gym_Text_GetMegaStone:
	.string "Brawly: Please take this\n"
	.string "Mega Stone, with you.\p"
	.string "Make a Heracross hold it to\n"
	.string "unleash its Hidden Potential.$"
	
DewfordTown_Gym_Text_GetReward:
	.string "Brawly: Please take this\n"
	.string "Item as a Reward.$"

DewfordTown_Gym_EventScript_Brawly_New::
	lock
	faceplayer
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Brawly_New_22
DewfordTown_Gym_EventScript_Brawly_New_20:
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Brawly_New_19
DewfordTown_Gym_EventScript_Brawly_New_8:
	checktrainerflag TRAINER_TAKAO
	goto_if 0, DewfordTown_Gym_EventScript_Brawly_New_6
	checktrainerflag TRAINER_JOCELYN
	goto_if 0, DewfordTown_Gym_EventScript_Brawly_New_6
	checktrainerflag TRAINER_LAURA
	goto_if 0, DewfordTown_Gym_EventScript_Brawly_New_6
	checktrainerflag TRAINER_BRENDEN
	goto_if 0, DewfordTown_Gym_EventScript_Brawly_New_6
	checktrainerflag TRAINER_CRISTIAN
	goto_if 0, DewfordTown_Gym_EventScript_Brawly_New_6
	checktrainerflag TRAINER_LILITH
	goto_if 0, DewfordTown_Gym_EventScript_Brawly_New_6
DewfordTown_Gym_EventScript_Brawly_New_5:
	msgbox DewfordTown_Gym_Text_BrawlyIntro, MSGBOX_NPC
	call DewfordTown_Gym_EventScript_Brawly_Battle_New
	message DewfordTown_Gym_EventScript_Brawly_New_Text_5
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox DewfordTown_Gym_EventScript_Brawly_New_Text_6, MSGBOX_NPC
	setflag FLAG_DEFEATED_DEWFORD_GYM
	setflag FLAG_BADGE02_GET
	call Special_Gym_EventScript_Give_Item
	giveitem ITEM_TM08_BULK_UP
	msgbox DewfordTown_Gym_EventScript_Brawly_New_Text_7, MSGBOX_NPC
	waitfanfare
	closemessage
	setflag FLAG_TEMP_9
	call DewfordTown_Gym_EventScript_Brawly_Give_Gifts
	setvar VAR_0x8008, 2
	call Common_EventScript_SetGymTrainers
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
	playfanfare MUS_REGISTER_MATCH_CALL
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
	waitfanfare
	closemessage
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_NPC
	call Gym_EventScript_Reset_Rematches
	setflag FLAG_BRAWLY_REMATCH
DewfordTown_Gym_EventScript_Brawly_New_1:
	release
	end

DewfordTown_Gym_EventScript_Brawly_New_2:
	msgbox DewfordTown_Gym_Text_BrawlyPreRematch, MSGBOX_NPC
	call DewfordTown_Gym_EventScript_Brawly_Battle_New
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_NPC
	call Gym_EventScript_Reset_Rematches
	msgbox DewfordTown_Gym_EventScript_Brawly_New_Text_0, MSGBOX_NPC
	call DewfordTown_Gym_EventScript_Brawly_Give_Gifts
	msgbox DewfordTown_Gym_EventScript_Brawly_New_Text_1, MSGBOX_NPC
	setflag FLAG_BRAWLY_REMATCH
	goto DewfordTown_Gym_EventScript_Brawly_New_1

DewfordTown_Gym_EventScript_Brawly_New_3:
	msgbox DewfordTown_Gym_EventScript_Brawly_New_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_New_25
	setvar VAR_0x8008, 2
	call Common_EventScript_SetGymTrainers
	msgbox DewfordTown_Gym_EventScript_Brawly_New_Text_1, MSGBOX_NPC
	goto DewfordTown_Gym_EventScript_Brawly_New_1

DewfordTown_Gym_EventScript_Brawly_New_4:
	msgbox DewfordTown_Gym_EventScript_Brawly_New_Text_4, MSGBOX_NPC
	goto DewfordTown_Gym_EventScript_Brawly_New_1

DewfordTown_Gym_EventScript_Brawly_New_6:
	goto_if_set FLAG_HARD_MODE, DewfordTown_Gym_EventScript_Brawly_New_4
	goto DewfordTown_Gym_EventScript_Brawly_New_5

DewfordTown_Gym_EventScript_Brawly_New_19:
	goto_if_set FLAG_BRAWLY_REMATCH, DewfordTown_Gym_EventScript_Brawly_New_3
	goto DewfordTown_Gym_EventScript_Brawly_New_8

DewfordTown_Gym_EventScript_Brawly_New_22:
	goto_if_unset FLAG_BRAWLY_REMATCH, DewfordTown_Gym_EventScript_Brawly_New_2
	goto DewfordTown_Gym_EventScript_Brawly_New_20

DewfordTown_Gym_EventScript_Brawly_New_25:
	cleartrainerflag TRAINER_TAKAO
	cleartrainerflag TRAINER_JOCELYN
	cleartrainerflag TRAINER_LAURA
	cleartrainerflag TRAINER_BRENDEN
	cleartrainerflag TRAINER_CRISTIAN
	cleartrainerflag TRAINER_LILITH
	msgbox DewfordTown_Gym_EventScript_Brawly_New_Text_3, MSGBOX_NPC
	goto DewfordTown_Gym_EventScript_Brawly_New_1


DewfordTown_Gym_EventScript_Brawly_Battle_New::
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Brawly_Battle_New_2
	goto_if_set FLAG_HARD_MODE, DewfordTown_Gym_EventScript_Brawly_Battle_New_10
	goto_if_set FLAG_NORMAL_MODE, DewfordTown_Gym_EventScript_Brawly_Battle_New_11
	switch VAR_NUM_BADGES
	case 0, DewfordTown_Gym_EventScript_Brawly_Battle_New_66
	case 1, DewfordTown_Gym_EventScript_Brawly_Battle_New_67
	case 2, DewfordTown_Gym_EventScript_Brawly_Battle_New_68
	case 3, DewfordTown_Gym_EventScript_Brawly_Battle_New_69
	case 4, DewfordTown_Gym_EventScript_Brawly_Battle_New_70
	case 5, DewfordTown_Gym_EventScript_Brawly_Battle_New_71
	case 6, DewfordTown_Gym_EventScript_Brawly_Battle_New_72
	case 7, DewfordTown_Gym_EventScript_Brawly_Battle_New_73
	goto_if_set FLAG_SYS_GAME_CLEAR, DewfordTown_Gym_EventScript_Brawly_Battle_New_90
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyDefeat
DewfordTown_Gym_EventScript_Brawly_Battle_New_1:
	return

DewfordTown_Gym_EventScript_Brawly_Battle_New_2:
	goto_if_set FLAG_HARD_MODE, DewfordTown_Gym_EventScript_Brawly_Battle_New_5
	goto_if_set FLAG_NORMAL_MODE, DewfordTown_Gym_EventScript_Brawly_Battle_New_6
	switch VAR_NUM_BADGES
	case 0, DewfordTown_Gym_EventScript_Brawly_Battle_New_36
	case 1, DewfordTown_Gym_EventScript_Brawly_Battle_New_37
	case 2, DewfordTown_Gym_EventScript_Brawly_Battle_New_38
	case 3, DewfordTown_Gym_EventScript_Brawly_Battle_New_39
	case 4, DewfordTown_Gym_EventScript_Brawly_Battle_New_40
	case 5, DewfordTown_Gym_EventScript_Brawly_Battle_New_41
	case 6, DewfordTown_Gym_EventScript_Brawly_Battle_New_42
	case 7, DewfordTown_Gym_EventScript_Brawly_Battle_New_43
	goto_if_set FLAG_SYS_GAME_CLEAR, DewfordTown_Gym_EventScript_Brawly_Battle_New_81
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_5:
	switch VAR_NUM_BADGES
	case 0, DewfordTown_Gym_EventScript_Brawly_Battle_New_16
	case 1, DewfordTown_Gym_EventScript_Brawly_Battle_New_17
	case 2, DewfordTown_Gym_EventScript_Brawly_Battle_New_18
	case 3, DewfordTown_Gym_EventScript_Brawly_Battle_New_19
	case 4, DewfordTown_Gym_EventScript_Brawly_Battle_New_20
	case 5, DewfordTown_Gym_EventScript_Brawly_Battle_New_21
	case 6, DewfordTown_Gym_EventScript_Brawly_Battle_New_22
	case 7, DewfordTown_Gym_EventScript_Brawly_Battle_New_23
	goto_if_set FLAG_SYS_GAME_CLEAR, DewfordTown_Gym_EventScript_Brawly_Battle_New_75
	trainerbattle_no_intro TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_6:
	switch VAR_NUM_BADGES
	case 0, DewfordTown_Gym_EventScript_Brawly_Battle_New_26
	case 1, DewfordTown_Gym_EventScript_Brawly_Battle_New_27
	case 2, DewfordTown_Gym_EventScript_Brawly_Battle_New_28
	case 3, DewfordTown_Gym_EventScript_Brawly_Battle_New_29
	case 4, DewfordTown_Gym_EventScript_Brawly_Battle_New_30
	case 5, DewfordTown_Gym_EventScript_Brawly_Battle_New_31
	case 6, DewfordTown_Gym_EventScript_Brawly_Battle_New_32
	case 7, DewfordTown_Gym_EventScript_Brawly_Battle_New_33
	goto_if_set FLAG_SYS_GAME_CLEAR, DewfordTown_Gym_EventScript_Brawly_Battle_New_78
	trainerbattle_no_intro TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_10:
	switch VAR_NUM_BADGES
	case 0, DewfordTown_Gym_EventScript_Brawly_Battle_New_46
	case 1, DewfordTown_Gym_EventScript_Brawly_Battle_New_47
	case 2, DewfordTown_Gym_EventScript_Brawly_Battle_New_48
	case 3, DewfordTown_Gym_EventScript_Brawly_Battle_New_49
	case 4, DewfordTown_Gym_EventScript_Brawly_Battle_New_50
	case 5, DewfordTown_Gym_EventScript_Brawly_Battle_New_51
	case 6, DewfordTown_Gym_EventScript_Brawly_Battle_New_52
	case 7, DewfordTown_Gym_EventScript_Brawly_Battle_New_53
	goto_if_set FLAG_SYS_GAME_CLEAR, DewfordTown_Gym_EventScript_Brawly_Battle_New_84
	trainerbattle_no_intro TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_11:
	switch VAR_NUM_BADGES
	case 0, DewfordTown_Gym_EventScript_Brawly_Battle_New_56
	case 1, DewfordTown_Gym_EventScript_Brawly_Battle_New_57
	case 2, DewfordTown_Gym_EventScript_Brawly_Battle_New_58
	case 3, DewfordTown_Gym_EventScript_Brawly_Battle_New_59
	case 4, DewfordTown_Gym_EventScript_Brawly_Battle_New_60
	case 5, DewfordTown_Gym_EventScript_Brawly_Battle_New_61
	case 6, DewfordTown_Gym_EventScript_Brawly_Battle_New_62
	case 7, DewfordTown_Gym_EventScript_Brawly_Battle_New_63
	goto_if_set FLAG_SYS_GAME_CLEAR, DewfordTown_Gym_EventScript_Brawly_Battle_New_87
	trainerbattle_no_intro TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_16:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_17:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_18:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_19:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_20:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_21:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_22:
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_23:
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_26:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_27:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_28:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_29:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_30:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_31:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_32:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_33:
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_36:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_37:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_38:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_39:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_40:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_41:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_42:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_43:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_46:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_47:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_48:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_49:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_50:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_51:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_52:
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_53:
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_56:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_57:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_58:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_59:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_60:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_61:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_62:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_63:
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_66:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_67:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_68:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_69:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_70:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_71:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_72:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_73:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_75:
	random 5
	switch VAR_RESULT
	case 0, DewfordTown_Gym_EventScript_Brawly_Battle_New_94
	case 1, DewfordTown_Gym_EventScript_Brawly_Battle_New_95
	case 2, DewfordTown_Gym_EventScript_Brawly_Battle_New_96
	case 3, DewfordTown_Gym_EventScript_Brawly_Battle_New_97
	case 4, DewfordTown_Gym_EventScript_Brawly_Battle_New_98
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_78:
	random 5
	switch VAR_RESULT
	case 0, DewfordTown_Gym_EventScript_Brawly_Battle_New_100
	case 1, DewfordTown_Gym_EventScript_Brawly_Battle_New_101
	case 2, DewfordTown_Gym_EventScript_Brawly_Battle_New_102
	case 3, DewfordTown_Gym_EventScript_Brawly_Battle_New_103
	case 4, DewfordTown_Gym_EventScript_Brawly_Battle_New_104
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_81:
	random 5
	switch VAR_RESULT
	case 0, DewfordTown_Gym_EventScript_Brawly_Battle_New_106
	case 1, DewfordTown_Gym_EventScript_Brawly_Battle_New_107
	case 2, DewfordTown_Gym_EventScript_Brawly_Battle_New_108
	case 3, DewfordTown_Gym_EventScript_Brawly_Battle_New_109
	case 4, DewfordTown_Gym_EventScript_Brawly_Battle_New_110
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_84:
	random 5
	switch VAR_RESULT
	case 0, DewfordTown_Gym_EventScript_Brawly_Battle_New_112
	case 1, DewfordTown_Gym_EventScript_Brawly_Battle_New_113
	case 2, DewfordTown_Gym_EventScript_Brawly_Battle_New_114
	case 3, DewfordTown_Gym_EventScript_Brawly_Battle_New_115
	case 4, DewfordTown_Gym_EventScript_Brawly_Battle_New_116
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_87:
	random 5
	switch VAR_RESULT
	case 0, DewfordTown_Gym_EventScript_Brawly_Battle_New_118
	case 1, DewfordTown_Gym_EventScript_Brawly_Battle_New_119
	case 2, DewfordTown_Gym_EventScript_Brawly_Battle_New_120
	case 3, DewfordTown_Gym_EventScript_Brawly_Battle_New_121
	case 4, DewfordTown_Gym_EventScript_Brawly_Battle_New_122
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_90:
	random 5
	switch VAR_RESULT
	case 0, DewfordTown_Gym_EventScript_Brawly_Battle_New_124
	case 1, DewfordTown_Gym_EventScript_Brawly_Battle_New_125
	case 2, DewfordTown_Gym_EventScript_Brawly_Battle_New_126
	case 3, DewfordTown_Gym_EventScript_Brawly_Battle_New_127
	case 4, DewfordTown_Gym_EventScript_Brawly_Battle_New_128
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_94:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_95:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_96:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_97:
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_98:
	trainerbattle_no_intro TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_100:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_101:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_102:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_103:
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_104:
	trainerbattle_no_intro TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_106:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_107:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_108:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_109:
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_110:
	trainerbattle_no_intro TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_112:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_113:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_114:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_115:
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_116:
	trainerbattle_no_intro TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_118:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_119:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_120:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_121:
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_122:
	trainerbattle_no_intro TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_124:
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_125:
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_126:
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_127:
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_128:
	trainerbattle_no_intro TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1


DewfordTown_Gym_EventScript_Brawly_Give_Gifts::
	checkitem ITEM_TM51_LOW_SWEEP, 1
	compare VAR_NUM_BADGES, 2
	goto_if_ge DewfordTown_Gym_EventScript_Brawly_Give_Gifts_3
DewfordTown_Gym_EventScript_Brawly_Give_Gifts_1:
	checkitem ITEM_TM87_SWAGGER, 1
	compare VAR_NUM_BADGES, 4
	goto_if_ge DewfordTown_Gym_EventScript_Brawly_Give_Gifts_8
DewfordTown_Gym_EventScript_Brawly_Give_Gifts_6:
	checkitem ITEM_TM52_FOCUS_BLAST, 1
	compare VAR_NUM_BADGES, 6
	goto_if_ge DewfordTown_Gym_EventScript_Brawly_Give_Gifts_13
DewfordTown_Gym_EventScript_Brawly_Give_Gifts_11:
	checkitem ITEM_TM106_AURA_SPHERE, 1
	compare VAR_NUM_BADGES, 8
	goto_if_ge DewfordTown_Gym_EventScript_Brawly_Give_Gifts_18
DewfordTown_Gym_EventScript_Brawly_Give_Gifts_16:
	compare VAR_NUM_BADGES, 7
	goto_if_ge DewfordTown_Gym_EventScript_Brawly_Give_Gifts_25
DewfordTown_Gym_EventScript_Brawly_Give_Gifts_24:
	goto_if_unset FLAG_TEMP_9, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_23
DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21:
	return

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_2:
	giveitem ITEM_TM51_LOW_SWEEP
	msgbox DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_0, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_1

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_3:
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_Give_Gifts_2
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_1

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_7:
	giveitem ITEM_TM87_SWAGGER
	msgbox DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_1, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_6

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_8:
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_Give_Gifts_7
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_6

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_12:
	giveitem ITEM_TM52_FOCUS_BLAST
	msgbox DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_2, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_11

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_13:
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_Give_Gifts_12
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_11

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_17:
	giveitem ITEM_TM106_AURA_SPHERE
	msgbox DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_3, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_16

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_18:
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_Give_Gifts_17
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_16

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_22:
	msgbox DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_4, MSGBOX_NPC
	giveitem ITEM_HERACRONITE
	msgbox DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_5, MSGBOX_NPC
	setflag FLAG_GOT_HERACRONITE
	setflag FLAG_TEMP_9
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_23:
	random 7
	switch VAR_RESULT
	case 0, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_29
	case 1, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_30
	case 2, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_31
	case 3, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_32
	case 4, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_33
	case 5, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_34
	case 6, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_35
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_25:
	goto_if_unset FLAG_GOT_HERACRONITE, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_22
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_24

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_29:
	giveitem ITEM_FIGHTING_GEM, 2
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_30:
	giveitem ITEM_MUSCLE_WING, 10
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_31:
	giveitem ITEM_FOCUS_BAND, 2
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_32:
	giveitem ITEM_CHOICE_BAND, 2
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_33:
	giveitem ITEM_PAYAPA_BERRY, 5
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_34:
	giveitem ITEM_KINGS_ROCK, 2
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_35:
	giveitem ITEM_EXPERT_BELT, 2
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21


DewfordTown_Gym_EventScript_GymGuide_New::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuide_New_2
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_NPC
DewfordTown_Gym_EventScript_GymGuide_New_1:
	release
	end

DewfordTown_Gym_EventScript_GymGuide_New_2:
	goto_if_unset FLAG_BRAWLY_REMATCH, DewfordTown_Gym_EventScript_GymGuide_New_5
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_NPC
	goto DewfordTown_Gym_EventScript_GymGuide_New_1

DewfordTown_Gym_EventScript_GymGuide_New_5:
	msgbox DewfordTown_Gym_EventScript_GymGuide_New_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq DewfordTown_Gym_EventScript_GymGuide_New_8
	msgbox DewfordTown_Gym_EventScript_GymGuide_New_Text_2, MSGBOX_NPC
	goto DewfordTown_Gym_EventScript_GymGuide_New_1

DewfordTown_Gym_EventScript_GymGuide_New_8:
	msgbox DewfordTown_Gym_EventScript_GymGuide_New_Text_1, MSGBOX_NPC
	warp MAP_DEWFORD_TOWN_GYM, 255, 4, 4
	goto DewfordTown_Gym_EventScript_GymGuide_New_1


DewfordTown_Gym_EventScript_Gym_Makuhita::
	lock
	faceplayer
	switch VAR_GYM_POKEMON_SPECIES
	case SPECIES_MAKUHITA, DewfordTown_Gym_EventScript_Gym_Makuhita_3
	case SPECIES_HARIYAMA, DewfordTown_Gym_EventScript_Gym_Makuhita_4
DewfordTown_Gym_EventScript_Gym_Makuhita_1:
	release
	end

DewfordTown_Gym_EventScript_Gym_Makuhita_3:
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Gym_Makuhita_11
DewfordTown_Gym_EventScript_Gym_Makuhita_9:
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Gym_Makuhita_8
DewfordTown_Gym_EventScript_Gym_Makuhita_7:
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_4, MSGBOX_NPC
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_5, MSGBOX_SIGN
	waitmessage
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_1

DewfordTown_Gym_EventScript_Gym_Makuhita_4:
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Gym_Makuhita_20
DewfordTown_Gym_EventScript_Gym_Makuhita_18:
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Gym_Makuhita_17
DewfordTown_Gym_EventScript_Gym_Makuhita_16:
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_10, MSGBOX_NPC
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_11, MSGBOX_SIGN
	waitmessage
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_1

DewfordTown_Gym_EventScript_Gym_Makuhita_5:
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_0, MSGBOX_NPC
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_1, MSGBOX_SIGN
	waitmessage
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_1

DewfordTown_Gym_EventScript_Gym_Makuhita_6:
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_2, MSGBOX_NPC
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_3, MSGBOX_SIGN
	waitmessage
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_1

DewfordTown_Gym_EventScript_Gym_Makuhita_8:
	goto_if_set FLAG_BRAWLY_REMATCH, DewfordTown_Gym_EventScript_Gym_Makuhita_6
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_7

DewfordTown_Gym_EventScript_Gym_Makuhita_11:
	goto_if_unset FLAG_BRAWLY_REMATCH, DewfordTown_Gym_EventScript_Gym_Makuhita_5
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_9

DewfordTown_Gym_EventScript_Gym_Makuhita_14:
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_6, MSGBOX_NPC
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_7, MSGBOX_SIGN
	waitmessage
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_1

DewfordTown_Gym_EventScript_Gym_Makuhita_15:
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_8, MSGBOX_NPC
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_9, MSGBOX_SIGN
	waitmessage
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_1

DewfordTown_Gym_EventScript_Gym_Makuhita_17:
	goto_if_set FLAG_BRAWLY_REMATCH, DewfordTown_Gym_EventScript_Gym_Makuhita_15
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_16

DewfordTown_Gym_EventScript_Gym_Makuhita_20:
	goto_if_unset FLAG_BRAWLY_REMATCH, DewfordTown_Gym_EventScript_Gym_Makuhita_14
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_18


DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species::
	switch VAR_NUM_BADGES
	case 0, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_3
	case 1, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_4
	case 2, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_5
	case 3, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_6
	case 4, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_7
	case 5, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_8
	case 6, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_9
	case 7, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_10
	case 8, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_11
DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1:
	goto_if_set FLAG_NO_EVOLUTION_MODE, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_13
DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_12:
	return

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_3:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MAKUHITA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MAKUHITA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_4:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MAKUHITA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MAKUHITA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_5:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HARIYAMA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HARIYAMA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_6:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HARIYAMA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HARIYAMA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_7:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HARIYAMA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HARIYAMA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_8:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HARIYAMA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HARIYAMA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_9:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HARIYAMA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HARIYAMA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_10:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HARIYAMA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HARIYAMA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_11:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HARIYAMA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HARIYAMA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_13:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MAKUHITA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MAKUHITA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_12


DewfordTown_Gym_EventScript_Brawly_New_Text_0:
	.string "Please take these items with you.$"

DewfordTown_Gym_EventScript_Brawly_New_Text_1:
	.string "Brawly: Come back tomorrow so we can\n"
	.string "battle again.$"

DewfordTown_Gym_EventScript_Brawly_New_Text_2:
	.string "Brawly: My Pokémon are tired for today,\n"
	.string "but the other trainers here need\l"
	.string "training, do you want to try battling\l"
	.string "them again?$"

DewfordTown_Gym_EventScript_Brawly_New_Text_3:
	.string "Brawly: I will tell them to get ready, so\n"
	.string "take care on your way out.$"

DewfordTown_Gym_EventScript_Brawly_New_Text_4:
	.string "Brawly: Sorry, but you need to defeat\n"
	.string "every trainer on this Gym before\l"
	.string "battling me$"

DewfordTown_Gym_EventScript_Brawly_New_Text_5:
	.string "{PLAYER} received the Knuckle Badge\n"
	.string "from Brawly.$"

DewfordTown_Gym_EventScript_Brawly_New_Text_6:
	.string "Please take these items with you, too,$"

DewfordTown_Gym_EventScript_Brawly_New_Text_7:
	.string "That technical machine contains the\n"
	.string "move Bulk Up.\p"
	.string "It's a move that raises both Attack and\n"
	.string "Defense stats for the User.$"

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_0:
	.string "Brawly: This move not only inflicts\n"
	.string "damage, it also lowers the target Speed\l"
	.string "stat by one stage.$"

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_1:
	.string "Brawly: This move confuses the target\n"
	.string "but it also raises its attack stat, use\l"
	.string "it with caution.$"

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_2:
	.string "Brawly: This is a Fighting-type damage\n"
	.string "move with a really high base attack,\l"
	.string "but misses a lot too so be careful when\l"
	.string "using it.$"

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_3:
	.string "Brawly: This is a Fighting-type damage\n"
	.string "move made specially for Fighting-type\l"
	.string "Pokémon with high Special Attack.$"

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_4:
	.string "Brawly: Take this as an special gift\n"
	.string "from me, it's a Heracronite.$"

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_5:
	.string "Make a Heracross hold it to unleash its\n"
	.string "real potential.$"

DewfordTown_Gym_EventScript_GymGuide_New_Text_0:
	.string "Guide: Hello {PLAYER}, I see you came\n"
	.string "to this Gym again, do you want me to\l"
	.string "take you to the Leader?$"

DewfordTown_Gym_EventScript_GymGuide_New_Text_1:
	.string "Let me tell the leader that you are\n"
	.string "here.$"

DewfordTown_Gym_EventScript_GymGuide_New_Text_2:
	.string "I see, you can also go throught the Gym\n"
	.string "if you want.$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_0:
	.string "Makuhita: hita!$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_1:
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, it has a really\l"
	.string "professional fighting stance.$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_2:
	.string "Makuhita: hita...$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_3:
	.string "The Pokémon seems tired after today's\n"
	.string "battle, but even then it has a lot of\l"
	.string "energy left.$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_4:
	.string "Makuhita: hita?$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_5:
	.string "The Pokémon is looking at a little\n"
	.string "surfboard on its hand.$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_6:
	.string "Hariyama: yama!$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_7:
	.string "The Pokémon seems like it wants a\n"
	.string "rematch, it is stomping the ground with\l"
	.string "determination.$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_8:
	.string "Hariyama: yama...$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_9:
	.string "The Pokémon seems tired after today's\n"
	.string "battle, but its thanking you for the\l"
	.string "battle very politely.$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_10:
	.string "Hariyama: yama?$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_11:
	.string "The Pokémon is currently looking at\n"
	.string "you, it may be studying your movements.$"
