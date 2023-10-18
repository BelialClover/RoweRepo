.set LOCALID_COLE, 2
.set LOCALID_GERALD, 3
.set LOCALID_AXLE, 4
.set LOCALID_DANIELLE, 5

LavaridgeTown_Gym_1F_MapScripts:: @ 81FE6F4
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
	.byte 0

LavaridgeTown_Gym_1F_OnTransition: @ 81FE6FA
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
	call LavaridgeTown_Gym_1F_EventScript_CheckHideTrainers
	end

@ Unclear where/if these temp vars are getting checked
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars:: @ 81FE705
	setvar VAR_TEMP_B, 0
	setvar VAR_TEMP_C, 0
	setvar VAR_TEMP_D, 0
	setvar VAR_TEMP_E, 0
	setvar VAR_TEMP_F, 0
	goto_if_defeated TRAINER_COLE LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar
	setvar VAR_TEMP_B, 1
LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar:: @ 81FE72C
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar
	setvar VAR_TEMP_C, 1
LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar:: @ 81FE73A
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar
	setvar VAR_TEMP_D, 1
LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar:: @ 81FE748
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars
	setvar VAR_TEMP_E, 1
LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars:: @ 81FE756
	return

LavaridgeTown_Gym_1F_EventScript_CheckHideTrainers:: @ 81FE757
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_CheckHideGerald
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_HIDDEN
LavaridgeTown_Gym_1F_EventScript_CheckHideGerald:: @ 81FE764
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_CheckHideAxle
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_HIDDEN
LavaridgeTown_Gym_1F_EventScript_CheckHideAxle:: @ 81FE771
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_CheckHideDanielle
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_HIDDEN
LavaridgeTown_Gym_1F_EventScript_CheckHideDanielle:: @ 81FE77E
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndCheckHideTrainers
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_HIDDEN
LavaridgeTown_Gym_1F_EventScript_EndCheckHideTrainers:: @ 81FE78B
	return

LavaridgeTown_Gym_1F_EventScript_Flannery:: @ 81FE78C
	lock
	faceplayer
	call_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_EventScript_Flannery_PostBattle
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated, NO_MUSIC
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated:: @ 81FE7C1
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
	setflag FLAG_BADGE04_GET
	setvar VAR_0x8008, 4
	call Common_EventScript_SetGymTrainers
	call Special_Gym_EventScript_Give_Item
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox LavaridgeTown_Gym_1F_Text_RegisteredFlannery, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
	call Gym_EventScript_Reset_Rematches
	setflag FLAG_FLANNERY_REMATCH
	release
	end
	
LavaridgeTown_Gym_EventScript_Flannery_PostBattle::
	goto_if_unset FLAG_FLANNERY_REMATCH, LavaridgeTown_Gym_1F_EventScript_FlanneryRematch
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
	release
	end
	
LavaridgeTown_Gym_1F_EventScript_FlanneryRematch:: @ 81FC89C
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, MSGBOX_DEFAULT
	goto LavaridgeTown_Gym_1F_EventScript_Start_Rematch_1
	end
	
//rematches
LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd::
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
	call Gym_EventScript_Reset_Random_Rematch
	setflag FLAG_FLANNERY_REMATCH
	end
	
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_1::
	checkitem ITEM_TM61_WILL_O_WISP, 1
	compare VAR_RESULT, TRUE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Start_Rematch_2
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	msgbox LavaridgeTown_Gym_1F_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM61_WILL_O_WISP
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
	end
	
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_2::
	goto_if_unset FLAG_RECEIVED_TM08 LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_1
	checkitem ITEM_TM120_MYSTICAL_FIRE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Start_Rematch_3
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	msgbox LavaridgeTown_Gym_1F_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM120_MYSTICAL_FIRE
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
	end
	
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_3::
	goto_if_unset FLAG_RECEIVED_TM42 LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_2
	checkitem ITEM_TM111_HEAT_CRASH, 1
	compare VAR_RESULT, TRUE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Start_Rematch_4
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	msgbox LavaridgeTown_Gym_1F_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM111_HEAT_CRASH
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
	end
	
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_4::
	goto_if_unset FLAG_RECEIVED_TM40 LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_3
	checkitem ITEM_TM117_BLAZE_KICK, 1
	compare VAR_RESULT, TRUE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Start_Rematch_5
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	msgbox LavaridgeTown_Gym_1F_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM117_BLAZE_KICK
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
	end
	
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_5::
	goto_if_unset FLAG_RECEIVED_TM04 LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_4
	goto_if_set FLAG_GOT_HOUNDOOMINITE LavaridgeTown_Gym_1F_EventScript_Start_Rematch_6
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	msgbox LavaridgeTown_Gym_1F_Text_GetMegaStone, MSGBOX_DEFAULT
	giveitem ITEM_HOUNDOOMINITE
	setflag FLAG_GOT_HOUNDOOMINITE
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
	end
	
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_6::
	goto_if_unset FLAG_RECEIVED_TM03 LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_4
	checkitem ITEM_TM50_OVERHEAT, 1
	compare VAR_RESULT, TRUE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Final
	trainerbattle_no_intro TRAINER_FLANNERY_5, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	msgbox LavaridgeTown_Gym_1F_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM50_OVERHEAT
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
	end
	
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Final::
	random 5
	switch VAR_RESULT
	case 0, LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_1
	case 1, LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_2
	case 2, LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_3
	case 3, LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_4
	case 4, LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_5
	end
	
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_1::
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
	msgbox LavaridgeTown_Gym_1F_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_TIMID_MINT, 3
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
	end
	
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_2::
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
	msgbox LavaridgeTown_Gym_1F_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_MODEST_MINT, 3
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
	end
	
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_3::
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
	msgbox LavaridgeTown_Gym_1F_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_MILD_MINT, 3
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
	end
	
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_4::
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
	msgbox LavaridgeTown_Gym_1F_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_RASH_MINT, 3
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
	end
	
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_5::
	trainerbattle_no_intro TRAINER_FLANNERY_5, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
	msgbox LavaridgeTown_Gym_1F_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_QUIET_MINT, 3
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
	end
	
LavaridgeTown_Gym_1F_Text_GetTM:
	.string "Flannery: Please take this\n"
	.string "Technical Machine.$"

LavaridgeTown_Gym_1F_Text_GetMegaStone:
	.string "Flannery: Please take this\n"
	.string "Mega Stone, with you.\p"
	.string "Make an Aggron hold it to\n"
	.string "unleash its Hidden Potential.$"
	
LavaridgeTown_Gym_1F_Text_GetReward:
	.string "Flannery: Please take this\n"
	.string "Item as a Reward.$"

//rematches end

LavaridgeTown_Gym_1F_EventScript_GiveOverheat2:: @ 81FE81D
	giveitem ITEM_TM50
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_GiveOverheat:: @ 81FE841
	msgbox Gym_Text_Takethis2, MSGBOX_DEFAULT
	giveitem ITEM_TM50
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
	return

LavaridgeTown_Gym_1F_EventScript_Cole:: @ 81FE87F
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_COLE, LOCALID_COLE, LavaridgeTown_Gym_1F_Text_ColeIntro, LavaridgeTown_Gym_1F_Text_ColeDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_EventScript_CheckTrainerScript:: @ 81FE89A
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
	release
	special ShouldTryGetTrainerScript
	compare VAR_RESULT, 1
	goto_if_eq EventScript_GotoTrainerScript
	end

LavaridgeTown_Gym_1F_EventScript_Axle:: @ 81FE8AF
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_AXLE, LOCALID_AXLE, LavaridgeTown_Gym_1F_Text_AxleIntro, LavaridgeTown_Gym_1F_Text_AxleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Keegan:: @ 81FE8CA
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_KEEGAN, LOCALID_KEEGAN, LavaridgeTown_Gym_B1F_Text_KeeganIntro, LavaridgeTown_Gym_B1F_Text_KeeganDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Danielle:: @ 81FE8E5
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_DANIELLE, LOCALID_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Gerald:: @ 81FE900
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_GERALD, LOCALID_GERALD, LavaridgeTown_Gym_1F_Text_GeraldIntro, LavaridgeTown_Gym_1F_Text_GeraldDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Jace:: @ 81FE91B
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_JACE, LOCALID_JACE, LavaridgeTown_Gym_B1F_Text_JaceIntro, LavaridgeTown_Gym_B1F_Text_JaceDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Jeff:: @ 81FE936
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_JEFF, LOCALID_JEFF, LavaridgeTown_Gym_B1F_Text_JeffIntro, LavaridgeTown_Gym_B1F_Text_JeffDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Eli:: @ 81FE951
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_ELI, LOCALID_ELI, LavaridgeTown_Gym_B1F_Text_EliIntro, LavaridgeTown_Gym_B1F_Text_EliDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_GymGuide:: @ 81FE96C
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory:: @ 81FE981
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_LeftGymStatue:: @ 81FE98B
	lockall
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
	end

LavaridgeTown_Gym_1F_EventScript_RightGymStatue:: @ 81FE99B
	lockall
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
	end

LavaridgeTown_Gym_1F_EventScript_GymStatueCertified:: @ 81FE9AB
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

LavaridgeTown_Gym_1F_EventScript_GymStatue:: @ 81FE9B5
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

LavaridgeTown_Gym_1F_Text_GymGuideAdvice: @ 81FE9BF
	.string "Hey, how's it going, Champion-\n"
	.string "bound {PLAYER}?\p"
	.string "Lavaridge's Gym Leader Flannery\n"
	.string "uses Fire-type Pokémon.\p"
	.string "Her passion for Pokémon burns stronger\n"
	.string "and hotter than a volcano.\p"
	.string "Don't get too close to her--you'll burn!\n"
	.string "Hose her down with water and then\l"
	.string "go for it!$"

LavaridgeTown_Gym_1F_Text_GymGuidePostVictory: @ 81FEAB8
	.string "Yow! That was a scorching-hot battle!$"

LavaridgeTown_Gym_1F_Text_ColeIntro: @ 81FEADE
	.string "Owowowowow!\n"
	.string "Yikes, it's hot!$"

LavaridgeTown_Gym_1F_Text_ColeDefeat: @ 81FEAFB
	.string "I'm blinded by sweat in my eyes…$"

LavaridgeTown_Gym_1F_Text_ColePostBattle: @ 81FEB1C
	.string "Being buried in hot sand promotes\n"
	.string "circulation.\p"
	.string "It's effective for healing pain in\n"
	.string "your joints.$"

LavaridgeTown_Gym_1F_Text_AxleIntro: @ 81FEB7B
	.string "I'm trying to relieve my stress.\n"
	.string "Don't come along and stress me out!$"

LavaridgeTown_Gym_1F_Text_AxleDefeat: @ 81FEBC0
	.string "I hope Flannery flames you good!$"

LavaridgeTown_Gym_1F_Text_AxlePostBattle: @ 81FEBE1
	.string "Haaah… Whew…\p"
	.string "If you spend too much time buried in\n"
	.string "hot sand, it tuckers you out…$"

LavaridgeTown_Gym_B1F_Text_KeeganIntro: @ 81FEC31
	.string "You must be getting tired by now.\n"
	.string "You'd like to rest in the hot sand,\l"
	.string "wouldn't you?\p"
	.string "But you should know that maintaining\n"
	.string "your willpower is an important ability\l"
	.string "for all Trainers.$"

LavaridgeTown_Gym_B1F_Text_KeeganDefeat: @ 81FECE3
	.string "Play with fire, and be burned…$"

LavaridgeTown_Gym_B1F_Text_KeeganPostBattle: @ 81FED02
	.string "Your skill is real…\n"
	.string "But our Leader Flannery is strong.\p"
	.string "If you don't watch yourself, you'll be\n"
	.string "burned seriously.$"

LavaridgeTown_Gym_1F_Text_GeraldIntro: @ 81FED72
	.string "Can your Pokémon withstand\n"
	.string "392-degree heat?$"

LavaridgeTown_Gym_1F_Text_GeraldDefeat: @ 81FED9E
	.string "It didn't burn hotly enough…$"

LavaridgeTown_Gym_1F_Text_GeraldPostBattle: @ 81FEDBB
	.string "The temperature of magma is\n"
	.string "392 degrees.\p"
	.string "Your Pokémon beat me, so they should\n"
	.string "easily survive in magma.$"

LavaridgeTown_Gym_1F_Text_DanielleIntro: @ 81FEE22
	.string "Um…\n"
	.string "Okay, I'll battle with you.$"

LavaridgeTown_Gym_1F_Text_DanielleDefeat: @ 81FEE42
	.string "Oh, but you're too strong.$"

LavaridgeTown_Gym_1F_Text_DaniellePostBattle: @ 81FEE5D
	.string "I'm going to be a pretty and strong\n"
	.string "Trainer just like Flannery.$"

LavaridgeTown_Gym_B1F_Text_JaceIntro: @ 81FEE9D
	.string "Come on, get with it!\n"
	.string "Let's go before my feelings cool!$"

LavaridgeTown_Gym_B1F_Text_JaceDefeat: @ 81FEED5
	.string "It's so hot, and yet my heart is\n"
	.string "clutched by ice…$"

LavaridgeTown_Gym_B1F_Text_JacePostBattle: @ 81FEF07
	.string "The way the battling spirit burns\n"
	.string "within you, you may stand a chance\l"
	.string "against our Leader.$"

LavaridgeTown_Gym_B1F_Text_JeffIntro: @ 81FEF60
	.string "See how the flames blaze wildly?\n"
	.string "They flare in anticipation of my win!$"

LavaridgeTown_Gym_B1F_Text_JeffDefeat: @ 81FEFA7
	.string "Something didn't go right.$"

LavaridgeTown_Gym_B1F_Text_JeffPostBattle: @ 81FEFC2
	.string "Well, so what? I say so what?\n"
	.string "I can walk on hot coals barefoot!\p"
	.string "…Don't even think about trying it!$"

LavaridgeTown_Gym_B1F_Text_EliIntro: @ 81FF025
	.string "As much as I love mountains,\n"
	.string "I especially love volcanoes.$"

LavaridgeTown_Gym_B1F_Text_EliDefeat: @ 81FF05F
	.string "Well, it seems to me I lost without\n"
	.string "ever being in control.$"

LavaridgeTown_Gym_B1F_Text_EliPostBattle: @ 81FF09A
	.string "I stay here because I became a fan\n"
	.string "of Flannery's power.\p"
	.string "Hehehehe.$"

LavaridgeTown_Gym_1F_Text_FlanneryIntro: @ 81FF0DC
	.string "Welcome… No, wait.\p"
	.string "Puny Trainer, how good to see you've\n"
	.string "made it here!\p"
	.string "I have been entrusted with the…\n"
	.string "No, wait.\p"
	.string "I am Flannery, and I'm the Gym\n"
	.string "Leader here!\p"
	.string "Uh…\n"
	.string "Dare not underestimate me, though\l"
	.string "I have been Leader only a short time!\p"
	.string "With skills inherited from my grand-\n"
	.string "father, I shall, uh…demonstrate the\l"
	.string "hot moves we have honed on this land!$"

LavaridgeTown_Gym_1F_Text_FlanneryDefeat: @ 81FF233
	.string "Oh…\n"
	.string "I guess I was trying too hard…\p"
	.string "I… I've only recently become\n"
	.string "a Gym Leader.\p"
	.string "I tried too hard to be someone\n"
	.string "I'm not.\p"
	.string "I have to do things my natural way. If\n"
	.string "I don't, my Pokémon will be confused.\p"
	.string "Thanks for teaching me that.\n"
	.string "For that, you deserve this.$"

LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge: @ 81FF32F
	.string "{PLAYER} received the Heat Badge\n"
	.string "from Flannery.$"

LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis: @ 81FF359
	.string "This is a token of my appreciation.\n"
	.string "Don't be shy about taking it!$"

LavaridgeTown_Gym_1F_Text_ExplainOverheat: @ 81FF45C
	.string "That TM50 contains Overheat.\p"
	.string "That move inflicts serious damage on\n"
	.string "the opponent.\p"
	.string "But it also sharply cuts the Special. Attack\n"
	.string "of the Pokémon using it. It might not\l"
	.string "be suitable for longer battles.$"

LavaridgeTown_Gym_1F_Text_RegisteredFlannery: @ 81FF517
	.string "Registered Gym Leader Flannery\n"
	.string "in the Pokénav.$"

LavaridgeTown_Gym_1F_Text_FlanneryPostBattle: @ 81FF546
	.string "Your power reminds me of someone…\p"
	.string "Oh! I know! You battle like Norman,\n"
	.string "the Gym Leader of Petalburg.$"

LavaridgeTown_Gym_1F_Text_GymStatue: @ 81FF5A9
	.string "Lavaridge Town Pokémon Gym$"

LavaridgeTown_Gym_1F_Text_GymStatueCertified: @ 81FF5C4
	.string "Lavaridge Town Pokémon Gym\p"
	.string "Flannery'S Certified Trainers:\n"
	.string "{PLAYER}$"

LavaridgeTown_Gym_1F_Text_FlanneryPreRematch: @ 81FF601
	.string "Flannery: Losing a battle isn't going\n"
	.string "to deflate me.\p"
	.string "I love Pokémon.\n"
	.string "I love to battle.\l"
	.string "And… I love this Gym!\p"
	.string "Let's exchange superhot moves\n"
	.string "in another battle!$"

LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat: @ 81FF69F
	.string "Whew!\n"
	.string "On the verge of eruption!$"

LavaridgeTown_Gym_1F_Text_FlanneryPostRematch: @ 81FF6BF
	.string "Flannery: I lost the match,\n"
	.string "but I'm completely satisfied.\p"
	.string "It's not often I get to enjoy a battle\n"
	.string "this heated.\p"
	.string "Let's have another one like this\n"
	.string "again sometime!$"

LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons: @ 81FF75E
	.string "Flannery: Losing a battle isn't going\n"
	.string "to deflate me.\p"
	.string "I love Pokémon.\n"
	.string "I love to battle.\l"
	.string "And… I love this Gym!\p"
	.string "Let's exchange superhot moves\n"
	.string "in another battle!\p"
	.string "Oh, wait. Do you only have one Pokémon\n"
	.string "that can battle?\p"
	.string "I hate to say this, but when you come\n"
	.string "see me, bring at least two Pokémon.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_New::
	lock
	faceplayer
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_Flannery_New_26
LavaridgeTown_Gym_1F_EventScript_Flannery_New_24:
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_Flannery_New_23
LavaridgeTown_Gym_1F_EventScript_Flannery_New_8:
	checktrainerflag TRAINER_COLE
	goto_if 0, LavaridgeTown_Gym_1F_EventScript_Flannery_New_6
	checktrainerflag TRAINER_AXLE
	goto_if 0, LavaridgeTown_Gym_1F_EventScript_Flannery_New_6
	checktrainerflag TRAINER_KEEGAN
	goto_if 0, LavaridgeTown_Gym_1F_EventScript_Flannery_New_6
	checktrainerflag TRAINER_GERALD
	goto_if 0, LavaridgeTown_Gym_1F_EventScript_Flannery_New_6
	checktrainerflag TRAINER_JEFF
	goto_if 0, LavaridgeTown_Gym_1F_EventScript_Flannery_New_6
	checktrainerflag TRAINER_JACE
	goto_if 0, LavaridgeTown_Gym_1F_EventScript_Flannery_New_6
	checktrainerflag TRAINER_DANIELLE
	goto_if 0, LavaridgeTown_Gym_1F_EventScript_Flannery_New_6
	checktrainerflag TRAINER_ELI
	goto_if 0, LavaridgeTown_Gym_1F_EventScript_Flannery_New_6
LavaridgeTown_Gym_1F_EventScript_Flannery_New_5:
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryIntro, MSGBOX_NPC
	call LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New
	message LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_5
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_6, MSGBOX_NPC
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
	setflag FLAG_BADGE04_GET
	call Special_Gym_EventScript_Give_Item
	giveitem ITEM_TM61_WILL_O_WISP
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_7, MSGBOX_NPC
	waitfanfare
	closemessage
	setflag FLAG_TEMP_9
	call LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts
	setvar VAR_0x8008, 4
	call Common_EventScript_SetGymTrainers
	msgbox LavaridgeTown_Gym_1F_Text_RegisteredFlannery, MSGBOX_DEFAULT
	playfanfare MUS_REGISTER_MATCH_CALL
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
	waitfanfare
	closemessage
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_NPC
	call Gym_EventScript_Reset_Rematches
	setflag FLAG_FLANNERY_REMATCH
LavaridgeTown_Gym_1F_EventScript_Flannery_New_1:
	release
	end

LavaridgeTown_Gym_1F_EventScript_Flannery_New_2:
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, MSGBOX_NPC
	call LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_NPC
	call Gym_EventScript_Reset_Rematches
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_0, MSGBOX_NPC
	call LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_1, MSGBOX_NPC
	setflag FLAG_FLANNERY_REMATCH
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_New_3:
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Flannery_New_29
	setvar VAR_0x8008, 4
	call Common_EventScript_SetGymTrainers
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_1, MSGBOX_NPC
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_New_4:
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_4, MSGBOX_NPC
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_New_6:
	goto_if_set FLAG_HARD_MODE, LavaridgeTown_Gym_1F_EventScript_Flannery_New_4
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_New_5

LavaridgeTown_Gym_1F_EventScript_Flannery_New_23:
	goto_if_set FLAG_FLANNERY_REMATCH, LavaridgeTown_Gym_1F_EventScript_Flannery_New_3
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_New_8

LavaridgeTown_Gym_1F_EventScript_Flannery_New_26:
	goto_if_unset FLAG_FLANNERY_REMATCH, LavaridgeTown_Gym_1F_EventScript_Flannery_New_2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_New_24

LavaridgeTown_Gym_1F_EventScript_Flannery_New_29:
	cleartrainerflag TRAINER_COLE
	cleartrainerflag TRAINER_AXLE
	cleartrainerflag TRAINER_KEEGAN
	cleartrainerflag TRAINER_GERALD
	cleartrainerflag TRAINER_DANIELLE
	cleartrainerflag TRAINER_JACE
	cleartrainerflag TRAINER_JEFF
	cleartrainerflag TRAINER_ELI
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_3, MSGBOX_NPC
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_New_1


LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New::
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_2
	goto_if_set FLAG_HARD_MODE, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_10
	goto_if_set FLAG_NORMAL_MODE, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_11
	switch VAR_NUM_BADGES
	case 0, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_66
	case 1, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_67
	case 2, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_68
	case 3, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_69
	case 4, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_70
	case 5, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_71
	case 6, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_72
	case 7, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_73
	goto_if_set FLAG_SYS_GAME_CLEAR, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_90
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1:
	return

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_2:
	goto_if_set FLAG_HARD_MODE, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_5
	goto_if_set FLAG_NORMAL_MODE, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_6
	switch VAR_NUM_BADGES
	case 0, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_36
	case 1, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_37
	case 2, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_38
	case 3, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_39
	case 4, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_40
	case 5, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_41
	case 6, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_42
	case 7, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_43
	goto_if_set FLAG_SYS_GAME_CLEAR, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_81
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_5:
	switch VAR_NUM_BADGES
	case 0, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_16
	case 1, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_17
	case 2, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_18
	case 3, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_19
	case 4, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_20
	case 5, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_21
	case 6, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_22
	case 7, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_23
	goto_if_set FLAG_SYS_GAME_CLEAR, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_75
	trainerbattle_no_intro TRAINER_FLANNERY_5, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_6:
	switch VAR_NUM_BADGES
	case 0, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_26
	case 1, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_27
	case 2, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_28
	case 3, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_29
	case 4, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_30
	case 5, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_31
	case 6, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_32
	case 7, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_33
	goto_if_set FLAG_SYS_GAME_CLEAR, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_78
	trainerbattle_no_intro TRAINER_FLANNERY_5, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_10:
	switch VAR_NUM_BADGES
	case 0, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_46
	case 1, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_47
	case 2, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_48
	case 3, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_49
	case 4, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_50
	case 5, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_51
	case 6, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_52
	case 7, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_53
	goto_if_set FLAG_SYS_GAME_CLEAR, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_84
	trainerbattle_no_intro TRAINER_FLANNERY_5, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_11:
	switch VAR_NUM_BADGES
	case 0, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_56
	case 1, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_57
	case 2, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_58
	case 3, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_59
	case 4, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_60
	case 5, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_61
	case 6, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_62
	case 7, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_63
	goto_if_set FLAG_SYS_GAME_CLEAR, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_87
	trainerbattle_no_intro TRAINER_FLANNERY_5, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_16:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_17:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_18:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_19:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_20:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_21:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_22:
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_23:
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_26:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_27:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_28:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_29:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_30:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_31:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_32:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_33:
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_36:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_37:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_38:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_39:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_40:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_41:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_42:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_43:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_46:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_47:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_48:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_49:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_50:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_51:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_52:
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_53:
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_56:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_57:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_58:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_59:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_60:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_61:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_62:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_63:
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_66:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_67:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_68:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_69:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_70:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_71:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_72:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_73:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_75:
	random 5
	switch VAR_RESULT
	case 0, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_94
	case 1, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_95
	case 2, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_96
	case 3, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_97
	case 4, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_98
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_78:
	random 5
	switch VAR_RESULT
	case 0, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_100
	case 1, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_101
	case 2, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_102
	case 3, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_103
	case 4, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_104
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_81:
	random 5
	switch VAR_RESULT
	case 0, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_106
	case 1, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_107
	case 2, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_108
	case 3, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_109
	case 4, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_110
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_84:
	random 5
	switch VAR_RESULT
	case 0, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_112
	case 1, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_113
	case 2, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_114
	case 3, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_115
	case 4, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_116
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_87:
	random 5
	switch VAR_RESULT
	case 0, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_118
	case 1, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_119
	case 2, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_120
	case 3, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_121
	case 4, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_122
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_90:
	random 5
	switch VAR_RESULT
	case 0, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_124
	case 1, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_125
	case 2, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_126
	case 3, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_127
	case 4, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_128
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_94:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_95:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_96:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_97:
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_98:
	trainerbattle_no_intro TRAINER_FLANNERY_5, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_100:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_101:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_102:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_103:
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_104:
	trainerbattle_no_intro TRAINER_FLANNERY_5, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_106:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_107:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_108:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_109:
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_110:
	trainerbattle_no_intro TRAINER_FLANNERY_5, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_112:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_113:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_114:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_115:
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_116:
	trainerbattle_no_intro TRAINER_FLANNERY_5, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_118:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_119:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_120:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_121:
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_122:
	trainerbattle_no_intro TRAINER_FLANNERY_5, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_124:
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_125:
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_126:
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_127:
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_128:
	trainerbattle_no_intro TRAINER_FLANNERY_5, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1


LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts::
	checkitem ITEM_TM120_MYSTICAL_FIRE, 1
	compare VAR_NUM_BADGES, 2
	goto_if_ge LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_3
LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_1:
	checkitem ITEM_TM111_HEAT_CRASH, 1
	compare VAR_NUM_BADGES, 4
	goto_if_ge LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_8
LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_6:
	checkitem ITEM_TM117_BLAZE_KICK, 1
	compare VAR_NUM_BADGES, 6
	goto_if_ge LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_13
LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_11:
	checkitem ITEM_TM50_OVERHEAT, 1
	compare VAR_NUM_BADGES, 8
	goto_if_ge LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_18
LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_16:
	compare VAR_NUM_BADGES, 7
	goto_if_ge LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_25
LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_24:
	goto_if_unset FLAG_TEMP_9, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_23
LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21:
	return

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_2:
	giveitem ITEM_TM120_MYSTICAL_FIRE
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_0, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_3:
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_7:
	giveitem ITEM_TM111_HEAT_CRASH
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_1, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_6

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_8:
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_7
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_6

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_12:
	giveitem ITEM_TM117_BLAZE_KICK
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_2, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_11

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_13:
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_12
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_11

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_17:
	giveitem ITEM_TM50_OVERHEAT
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_3, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_16

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_18:
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_17
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_16

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_22:
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_4, MSGBOX_NPC
	giveitem ITEM_HOUNDOOMINITE
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_5, MSGBOX_NPC
	setflag FLAG_GOT_HOUNDOOMINITE
	setflag FLAG_TEMP_9
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_23:
	random 7
	switch VAR_RESULT
	case 0, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_29
	case 1, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_30
	case 2, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_31
	case 3, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_32
	case 4, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_33
	case 5, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_34
	case 6, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_35
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_25:
	goto_if_unset FLAG_GOT_HOUNDOOMINITE, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_22
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_24

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_29:
	giveitem ITEM_FIRE_GEM, 2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_30:
	giveitem ITEM_CHARCOAL, 2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_31:
	giveitem ITEM_FLAME_ORB, 2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_32:
	giveitem ITEM_HEAT_ROCK, 2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_33:
	giveitem ITEM_OCCA_BERRY, 5
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_34:
	giveitem ITEM_FIRE_STONE, 2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_35:
	giveitem ITEM_MAGMARIZER, 2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21


LavaridgeTown_Gym_1F_EventScript_GymGuide_New::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuide_New_2
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_NPC
LavaridgeTown_Gym_1F_EventScript_GymGuide_New_1:
	release
	end

LavaridgeTown_Gym_1F_EventScript_GymGuide_New_2:
	goto_if_unset FLAG_FLANNERY_REMATCH, LavaridgeTown_Gym_1F_EventScript_GymGuide_New_5
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_NPC
	goto LavaridgeTown_Gym_1F_EventScript_GymGuide_New_1

LavaridgeTown_Gym_1F_EventScript_GymGuide_New_5:
	msgbox LavaridgeTown_Gym_1F_EventScript_GymGuide_New_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_GymGuide_New_8
	msgbox LavaridgeTown_Gym_1F_EventScript_GymGuide_New_Text_2, MSGBOX_NPC
	goto LavaridgeTown_Gym_1F_EventScript_GymGuide_New_1

LavaridgeTown_Gym_1F_EventScript_GymGuide_New_8:
	msgbox LavaridgeTown_Gym_1F_EventScript_GymGuide_New_Text_1, MSGBOX_NPC
	warp MAP_LAVARIDGE_TOWN_GYM_1F, 255, 13, 10
	goto LavaridgeTown_Gym_1F_EventScript_GymGuide_New_1


LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal::
	lock
	faceplayer
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_8
LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_6:
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_5
LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_4:
	msgbox LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_4, MSGBOX_NPC
	msgbox LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_5, MSGBOX_SIGN
	waitmessage
LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_1:
	release
	end

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_2:
	msgbox LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_0, MSGBOX_NPC
	msgbox LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_1, MSGBOX_SIGN
	waitmessage
	goto LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_1

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_3:
	msgbox LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_2, MSGBOX_NPC
	msgbox LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_3, MSGBOX_SIGN
	waitmessage
	goto LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_1

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_5:
	goto_if_set FLAG_FLANNERY_REMATCH, LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_3
	goto LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_4

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_8:
	goto_if_unset FLAG_FLANNERY_REMATCH, LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_2
	goto LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_6


LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_0:
	.string "Please take these items with you.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_1:
	.string "Flannery: Come back tomorrow so we can\n"
	.string "battle again.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_2:
	.string "Flannery: My Pokémon are tired for\n"
	.string "today, but the other trainers here\l"
	.string "need training, do you want to try\l"
	.string "battling them again?$"

LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_3:
	.string "Flannery: I will tell them to get ready,\n"
	.string "so take care on your way out.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_4:
	.string "Flannery: Sorry, but you need to defeat\n"
	.string "every trainer on this Gym before\l"
	.string "battling me$"

LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_5:
	.string "{PLAYER} received the Heat Badge\n"
	.string "from Flannery.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_6:
	.string "Please take these items with you, too,$"

LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_7:
	.string "That technical machine contains the\n"
	.string "move Will-o-Wisp.\p"
	.string "This move burns the target damaging\n"
	.string "the Pokémon every turn while also\l"
	.string "lowering its Physical Attack.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_0:
	.string "Flannery: This move inflicts damage and\n"
	.string "always lowers the enemy Special\l"
	.string "Attack.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_1:
	.string "Flannery: This move inflicts damage\n"
	.string "depending on the user's weight, use it\l"
	.string "with Pokémon like my Torkoal.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_2:
	.string "Flannery: This is an Fire-type damage\n"
	.string "move made specially for Fire-type\l"
	.string "Pokémon with high Physical Attack.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_3:
	.string "Flannery: This is one of the strongest\n"
	.string "Fire-type moves but it also lowers the\l"
	.string "user Special Attack after each use,\l"
	.string "use it only while you are in a pinch or\l"
	.string "with a Pokémon holding a White Herb.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_4:
	.string "Flannery: Take this as an special gift\n"
	.string "from me, it's a Houndoomite.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_5:
	.string "Make a Houndoom hold it to unleash its\n"
	.string "real potential.$"

LavaridgeTown_Gym_1F_EventScript_GymGuide_New_Text_0:
	.string "Guide: Hello {PLAYER}, I see you came\n"
	.string "to this Gym again, do you want me to\l"
	.string "take you to the Leader?$"

LavaridgeTown_Gym_1F_EventScript_GymGuide_New_Text_1:
	.string "Let me tell the leader that you are\n"
	.string "here.$"

LavaridgeTown_Gym_1F_EventScript_GymGuide_New_Text_2:
	.string "I see, you can also go throught the Gym\n"
	.string "if you want.$"

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_0:
	.string "Torkoal: koal!$"

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_1:
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, the smoke on its back\l"
	.string "its really hot.$"

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_2:
	.string "Torkoal: koal...$"

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_3:
	.string "The Pokémon seems tired after today's\n"
	.string "battle, its better to leave it rest$"

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_4:
	.string "Torkoal: koal?$"

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_5:
	.string "The Pokémon seems curious about how\n"
	.string "strong you are.$"
