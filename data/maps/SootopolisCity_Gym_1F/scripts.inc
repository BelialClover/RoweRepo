SootopolisCity_Gym_1F_MapScripts:: @ 8224E4C
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_Gym_1F_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_Gym_1F_OnResume
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_Gym_1F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_Gym_1F_OnTransition
	.byte 0

SootopolisCity_Gym_1F_OnTransition: @ 8224E61
	call SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species
	setvar VAR_ICE_STEP_COUNT, 1
	end

SootopolisCity_Gym_1F_OnResume: @ 8224E67
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
	end

SootopolisCity_Gym_1F_OnLoad: @ 8224E6A
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special SetSootopolisGymCrackedIceMetatiles
	end

SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles:: @ 8224E73
	compare VAR_ICE_STEP_COUNT, 8
	goto_if_lt SootopolisCity_Gym_1F_EventScript_StopCheckingStairs  @ All stairs ice
	compare VAR_ICE_STEP_COUNT, 28
	goto_if_lt SootopolisCity_Gym_1F_EventScript_OpenFirstStairs
	compare VAR_ICE_STEP_COUNT, 67
	goto_if_lt SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, 0
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, 0
SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs:: @ 8224EA6
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, 0
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, 0
SootopolisCity_Gym_1F_EventScript_OpenFirstStairs:: @ 8224EB8
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, 0
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, 0
SootopolisCity_Gym_1F_EventScript_StopCheckingStairs:: @ 8224ECA
	return

SootopolisCity_Gym_1F_OnFrame: @ 8224ECB
	map_script_2 VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs
	map_script_2 VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs
	map_script_2 VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs
	map_script_2 VAR_ICE_STEP_COUNT, 0, SootopolisCity_Gym_1F_EventScript_FallThroughIce
	.2byte 0

SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs:: @ 8224EED
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs:: @ 8224F01
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs:: @ 8224F15
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

SootopolisCity_Gym_1F_EventScript_FallThroughIce:: @ 8224F29
	lockall
	delay 20
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
	waitmovement 0
	playse SE_FALL
	delay 60
	warphole MAP_SOOTOPOLIS_CITY_GYM_B1F
	waitstate
	end

SootopolisCity_Gym_1F_Movement_FallThroughIce: @ 8224F42
	set_invisible
	step_end

SootopolisCity_Gym_1F_EventScript_Juan:: @ 8224F44
	lock
	faceplayer
	call_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_JuanRematch
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanIntro, SootopolisCity_Gym_1F_Text_JuanDefeat, SootopolisCity_Gym_1F_EventScript_JuanDefeated, NO_MUSIC
	release
	end

SootopolisCity_Gym_1F_EventScript_JuanDefeated:: @ 8224F82
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
	setflag FLAG_BADGE08_GET
	setvar VAR_0x8008, 8
	call Common_EventScript_SetGymTrainers
	call Special_Gym_EventScript_Give_Item
	call SootopolisCity_Gym_1F_EventScript_GiveWaterPulse
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox SootopolisCity_Gym_1F_Text_RegisteredJuan, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
	call Gym_EventScript_Reset_Rematches
	setflag FLAG_JUAN_REMATCH
	call Common_EventScript_SetGymTrainers
	release
	end

SootopolisCity_Gym_1F_EventScript_Juan_PostBattle::
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_DEFAULT
	release
	end
	
//Rematch	
SootopolisCity_Gym_1F_EventScript_JuanRematch:: @ 8204DB3
	goto_if_set FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Juan_PostBattle
	msgbox SootopolisCity_Gym_1F_Text_JuanPreRematch, MSGBOX_DEFAULT
	goto SootopolisCity_Gym_1F_EventScript_Start_Rematch_1
	end
	
SootopolisCity_Gym_1F_EventScript_JuanRematchEnd::
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_AUTOCLOSE
	call Gym_EventScript_Reset_Random_Rematch
	setflag FLAG_JUAN_REMATCH
	end
	
SootopolisCity_Gym_1F_EventScript_Start_Rematch_1::
	checkitem ITEM_TM03_WATER_PULSE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Start_Rematch_2
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	msgbox SootopolisCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM03_WATER_PULSE
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
	end
	
SootopolisCity_Gym_1F_EventScript_Start_Rematch_2::
	goto_if_unset FLAG_RECEIVED_TM08 SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_1
	checkitem ITEM_TM55_SCALD, 1
	compare VAR_RESULT, TRUE
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Start_Rematch_3
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	msgbox SootopolisCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM55_SCALD
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
	end
	
SootopolisCity_Gym_1F_EventScript_Start_Rematch_3::
	goto_if_unset FLAG_RECEIVED_TM42 SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_2
	checkitem ITEM_TM94_SURF, 1
	compare VAR_RESULT, TRUE
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Start_Rematch_4
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	msgbox SootopolisCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM94_SURF
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
	end
	
SootopolisCity_Gym_1F_EventScript_Start_Rematch_4::
	goto_if_unset FLAG_RECEIVED_TM40 SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_3
	checkitem ITEM_TM98_WATERFALL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Start_Rematch_5
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	msgbox SootopolisCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM98_WATERFALL
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
	end
	
SootopolisCity_Gym_1F_EventScript_Start_Rematch_5::
	goto_if_unset FLAG_RECEIVED_TM04 SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_4
	goto_if_set FLAG_GOT_GYARADOSITE SootopolisCity_Gym_1F_EventScript_Start_Rematch_6
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	msgbox SootopolisCity_Gym_Text_GetMegaStone, MSGBOX_DEFAULT
	giveitem ITEM_GYARADOSITE
	setflag FLAG_GOT_GYARADOSITE
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
	end
	
SootopolisCity_Gym_1F_EventScript_Start_Rematch_6::
	goto_if_unset FLAG_RECEIVED_TM03 SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_4
	checkitem ITEM_TM102_LIQUIDATION, 1
	compare VAR_RESULT, TRUE
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Start_Rematch_Final
	trainerbattle_no_intro TRAINER_JUAN_5, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	msgbox SootopolisCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM102_LIQUIDATION
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
	end
	
SootopolisCity_Gym_1F_EventScript_Start_Rematch_Final::
	random 5
	switch VAR_RESULT
	case 0, SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_1
	case 1, SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_2
	case 2, SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_3
	case 3, SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_4
	case 4, SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_5
	end
	
SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_1::
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
	msgbox SootopolisCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_MODEST_MINT, 3
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
	end
	
SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_2::
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
	msgbox SootopolisCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_MILD_MINT, 3
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
	end
	
SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_3::
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
	msgbox SootopolisCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_RASH_MINT, 3
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
	end
	
SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_4::
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
	msgbox SootopolisCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_QUIET_MINT, 3
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
	end
	
SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_5::
	trainerbattle_no_intro TRAINER_JUAN_5, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
	msgbox SootopolisCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_TIMID_MINT, 3
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
	end
	
SootopolisCity_Gym_Text_GetTM:
	.string "Juan: Please take this\n"
	.string "Technical Machine.$"

SootopolisCity_Gym_Text_GetMegaStone:
	.string "Juan: Please take this\n"
	.string "Mega Stone, with you.\p"
	.string "Make an Gyarados hold it to\n"
	.string "unleash its Hidden Potential.$"
	
SootopolisCity_Gym_Text_GetReward:
	.string "Juan: Please take this\n"
	.string "Item as a Reward.$"

//rematches end

SootopolisCity_Gym_1F_EventScript_GiveWaterPulse:: @ 8224FD4
	giveitem ITEM_TM03
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_BagIsFull
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
	return

SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2:: @ 8224FF7
	giveitem ITEM_TM03
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge:: @ 822501B
	msgbox SootopolisCity_Gym_1F_Text_GoGetFortreeBadge, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_GymGuide:: @ 8225040
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory:: @ 8225055
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

SootopolisCity_Gym_1F_EventScript_LeftGymStatue:: @ 822505F
	lockall
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
	end

SootopolisCity_Gym_1F_EventScript_RightGymStatue:: @ 822506F
	lockall
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
	end

SootopolisCity_Gym_1F_EventScript_GymStatueCertified:: @ 822507F
	msgbox SootopolisCity_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_Gym_1F_EventScript_GymStatue:: @ 8225089
	msgbox SootopolisCity_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

SootopolisCity_Gym_1F_Text_GymGuideAdvice: @ 8225093
	.string "Yo! How's it going, Champion-\n"
	.string "bound {PLAYER}?\p"
	.string "Sootopolis's Gym Jaun is\n"
	.string "a master of Water-type Pokémon.\p"
	.string "And, to get to Juan, an icy floor\n"
	.string "will hamper your progress…\p"
	.string "Listen, I'm sorry, but that's all the\n"
	.string "advice that I have for you.\p"
	.string "The rest of the way, you have to\n"
	.string "go for it yourself!$"

SootopolisCity_Gym_1F_Text_GymGuidePostVictory: @ 82251AF
	.string "Yow! You've beaten even Juan, who\n"
	.string "was supposedly the best in all Hoenn!$"

SootopolisCity_Gym_1F_Text_JuanIntro: @ 8225268
	.string "Welcome Challenger my name is Juan,\n"
	.string "The Gym leader of Sootopolis.\p"
	.string "Once, I had given up my position as\n"
	.string "the Gym Leader to my apprentice,\l"
	.string "However, a compelling reason arose\l"
	.string "for me to make a comeback.\p"
	.string "Ah, but enough chatter. Let us,\n"
	.string "begin our match, shall we?\p"
	.string "Please, you shall bear witness to our\n"
	.string "artistry.\l"
	.string "A grand illusion of water sculpted\l"
	.string "by Pokémon and myself!$"

@ NOTE: This defeat text actually causes a buffer overflow. It's about 50 bytes too long for
@ the gDisplayedStringBattle buffer that it's put into, and it stomps all over the gBattleTextBuffs
@ after, as well as the otherwise unused array after that. One wonders if that's the reason for
@ the existence of that unused array of ints.
SootopolisCity_Gym_1F_Text_JuanDefeat: @ 8225432
	.string "I see! Your elegance radiates\n"
	.string "glitz and glamor.\p"
	.string "It's only natural that you won.\n"
	.string "I shall reward you with this,\n"
	.string "the Rain Badge, Please accept it!$"

SootopolisCity_Gym_1F_Text_ReceivedRainBadge: @ 8225598
	.string "{PLAYER} received the Rain Badge\n"
	.string "from Juan.$"

SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis: @ 82255BE
	.string "And, so that you never forget the\n"
	.string "battle we shared, take this…$"

SootopolisCity_Gym_1F_Text_ExplainWaterPulse: @ 82256C1
	.string "The Technical Machine I handed you\n"
	.string "contains Rain Dance.\p"
	.string "When used, it will summon a heavy\n"
	.string "rain that last 5 turns.\p"
	.string "… … … … … …$"

SootopolisCity_Gym_1F_Text_RegisteredJuan: @ 822574D
	.string "Registered Gym Leader Juan\n"
	.string "in the Pokenav.$"

SootopolisCity_Gym_1F_Text_JuanPostBattle: @ 8225778
	.string "The Trainers who have gathered all\n"
	.string "the Gym Badges of Hoenn should make\l"
	.string "way to the ultimate destination.\p"
	.string "The Pokémon League.\p"
	.string "Travel to the easternmost reaches\n"
	.string "of Hoenn, to the island EVER GRANDE.\p"
	.string "There, you shall find the Pokémon\n"
	.string "League.$"

SootopolisCity_Gym_1F_Text_GoGetFortreeBadge: @ 8225865
	.string "There remains but one Badge to\n"
	.string "obtain in Hoenn.\p"
	.string "If you wish to challenge the Pokémon\n"
	.string "League, you must obtain the last\l"
	.string "Badge from the Gym in Fortree.$"

SootopolisCity_Gym_1F_Text_GymStatue: @ 82258FA
	.string "Sootopolis City Pokémon Gym$"

SootopolisCity_Gym_1F_Text_GymStatueCertified: @ 8225916
	.string "Sootopolis City Pokémon Gym\p"
	.string "Juan'S Certified Trainers:\n"
	.string "{PLAYER}$"

SootopolisCity_Gym_1F_Text_JuanPreRematch: @ 8225950
	.string "Juan: Ah, this Gym had returned to its\n"
	.string "usual state of serenity…\p"
	.string "But our young typhoon has returned\n"
	.string "to put us to the test again!\p"
	.string "Well, my friend, most certainly!\p"
	.string "I shall be delighted to dance with you\n"
	.string "as often as you wish!$"

SootopolisCity_Gym_1F_Text_JuanRematchDefeat: @ 8225A2E
	.string "Ahahaha, you are the winner!\n"
	.string "You have defeated me again!$"

SootopolisCity_Gym_1F_Text_JuanPostRematch: @ 8225A67
	.string "Juan: If I told you to become my\n"
	.string "apprentice, you will refuse, I am sure.\p"
	.string "I would like to make a gift of my coat\n"
	.string "to you.\p"
	.string "But again, you will refuse.\n"
	.string "I imagine that to be so.\p"
	.string "And that, my friend, is a certain sign\n"
	.string "of nobility!$"

SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons: @ 8225B48
	.string "Juan: Ah, this Gym had returned to its\n"
	.string "usual state of serenity…\p"
	.string "But our young typhoon has returned\n"
	.string "to put us to the test again!\p"
	.string "Well, my friend, most certainly!\n"
	.string "I shall be delighted to dance with you…\p"
	.string "Ah, no, no, no.\n"
	.string "You have with you but one Pokémon.\p"
	.string "I wish that you would return with\n"
	.string "two, perhaps more, Pokémon, please.$"

SootopolisCity_Gym_1F_EventScript_Juan_New::
	lock
	faceplayer
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Juan_New_30
SootopolisCity_Gym_1F_EventScript_Juan_New_28:
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Juan_New_27
SootopolisCity_Gym_1F_EventScript_Juan_New_8:
	checktrainerflag TRAINER_ANDREA
	goto_if 0, SootopolisCity_Gym_1F_EventScript_Juan_New_6
	checktrainerflag TRAINER_CRISSY
	goto_if 0, SootopolisCity_Gym_1F_EventScript_Juan_New_6
	checktrainerflag TRAINER_BRIANNA
	goto_if 0, SootopolisCity_Gym_1F_EventScript_Juan_New_6
	checktrainerflag TRAINER_CONNIE
	goto_if 0, SootopolisCity_Gym_1F_EventScript_Juan_New_6
	checktrainerflag TRAINER_BRIDGET
	goto_if 0, SootopolisCity_Gym_1F_EventScript_Juan_New_6
	checktrainerflag TRAINER_OLIVIA
	goto_if 0, SootopolisCity_Gym_1F_EventScript_Juan_New_6
	checktrainerflag TRAINER_TIFFANY
	goto_if 0, SootopolisCity_Gym_1F_EventScript_Juan_New_6
	checktrainerflag TRAINER_BETHANY
	goto_if 0, SootopolisCity_Gym_1F_EventScript_Juan_New_6
	checktrainerflag TRAINER_ANNIKA
	goto_if 0, SootopolisCity_Gym_1F_EventScript_Juan_New_6
	checktrainerflag TRAINER_DAPHNE
	goto_if 0, SootopolisCity_Gym_1F_EventScript_Juan_New_6
SootopolisCity_Gym_1F_EventScript_Juan_New_5:
	msgbox SootopolisCity_Gym_1F_Text_JuanIntro, MSGBOX_NPC
	call SootopolisCity_Gym_1F_EventScript_Juan_Battle_New
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_New_Text_5, MSGBOX_NPC
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
	setflag FLAG_BADGE08_GET
	call Special_Gym_EventScript_Give_Item
	giveitem ITEM_TM03_WATER_PULSE
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_New_Text_6, MSGBOX_NPC
	waitfanfare
	closemessage
	setflag FLAG_TEMP_9
	call SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts
	setvar VAR_0x8008, 8
	call Common_EventScript_SetGymTrainers
	msgbox SootopolisCity_Gym_1F_Text_RegisteredJuan, MSGBOX_DEFAULT
	playfanfare MUS_REGISTER_MATCH_CALL
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
	waitfanfare
	closemessage
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_NPC
	call Gym_EventScript_Reset_Rematches
	setflag FLAG_JUAN_REMATCH
SootopolisCity_Gym_1F_EventScript_Juan_New_1:
	release
	end

SootopolisCity_Gym_1F_EventScript_Juan_New_2:
	msgbox SootopolisCity_Gym_1F_Text_JuanPreRematch, MSGBOX_NPC
	call SootopolisCity_Gym_1F_EventScript_Juan_Battle_New
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_NPC
	call Gym_EventScript_Reset_Rematches
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_New_Text_0, MSGBOX_NPC
	call SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_New_Text_1, MSGBOX_NPC
	setflag FLAG_JUAN_REMATCH
	goto SootopolisCity_Gym_1F_EventScript_Juan_New_1

SootopolisCity_Gym_1F_EventScript_Juan_New_3:
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_New_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Juan_New_33
	setvar VAR_0x8008, 8
	call Common_EventScript_SetGymTrainers
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_New_Text_1, MSGBOX_NPC
	goto SootopolisCity_Gym_1F_EventScript_Juan_New_1

SootopolisCity_Gym_1F_EventScript_Juan_New_4:
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_New_Text_4, MSGBOX_NPC
	goto SootopolisCity_Gym_1F_EventScript_Juan_New_1

SootopolisCity_Gym_1F_EventScript_Juan_New_6:
	goto_if_set FLAG_HARD_MODE, SootopolisCity_Gym_1F_EventScript_Juan_New_4
	goto SootopolisCity_Gym_1F_EventScript_Juan_New_5

SootopolisCity_Gym_1F_EventScript_Juan_New_27:
	goto_if_set FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Juan_New_3
	goto SootopolisCity_Gym_1F_EventScript_Juan_New_8

SootopolisCity_Gym_1F_EventScript_Juan_New_30:
	goto_if_unset FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Juan_New_2
	goto SootopolisCity_Gym_1F_EventScript_Juan_New_28

SootopolisCity_Gym_1F_EventScript_Juan_New_33:
	cleartrainerflag TRAINER_ANDREA
	cleartrainerflag TRAINER_CRISSY
	cleartrainerflag TRAINER_BRIANNA
	cleartrainerflag TRAINER_CONNIE
	cleartrainerflag TRAINER_BRIDGET
	cleartrainerflag TRAINER_OLIVIA
	cleartrainerflag TRAINER_TIFFANY
	cleartrainerflag TRAINER_BETHANY
	cleartrainerflag TRAINER_ANNIKA
	cleartrainerflag TRAINER_DAPHNE
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_New_Text_3, MSGBOX_NPC
	goto SootopolisCity_Gym_1F_EventScript_Juan_New_1


SootopolisCity_Gym_1F_EventScript_Juan_Battle_New::
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_2
	goto_if_set FLAG_HARD_MODE, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_10
	goto_if_set FLAG_NORMAL_MODE, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_11
	switch VAR_NUM_BADGES
	case 0, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_66
	case 1, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_67
	case 2, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_68
	case 3, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_69
	case 4, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_70
	case 5, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_71
	case 6, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_72
	case 7, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_73
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_90
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanDefeat
SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1:
	return

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_2:
	goto_if_set FLAG_HARD_MODE, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_5
	goto_if_set FLAG_NORMAL_MODE, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_6
	switch VAR_NUM_BADGES
	case 0, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_36
	case 1, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_37
	case 2, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_38
	case 3, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_39
	case 4, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_40
	case 5, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_41
	case 6, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_42
	case 7, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_43
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_81
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_5:
	switch VAR_NUM_BADGES
	case 0, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_16
	case 1, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_17
	case 2, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_18
	case 3, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_19
	case 4, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_20
	case 5, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_21
	case 6, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_22
	case 7, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_23
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_75
	trainerbattle_no_intro TRAINER_JUAN_5, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_6:
	switch VAR_NUM_BADGES
	case 0, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_26
	case 1, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_27
	case 2, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_28
	case 3, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_29
	case 4, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_30
	case 5, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_31
	case 6, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_32
	case 7, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_33
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_78
	trainerbattle_no_intro TRAINER_JUAN_5, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_10:
	switch VAR_NUM_BADGES
	case 0, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_46
	case 1, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_47
	case 2, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_48
	case 3, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_49
	case 4, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_50
	case 5, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_51
	case 6, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_52
	case 7, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_53
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_84
	trainerbattle_no_intro TRAINER_JUAN_5, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_11:
	switch VAR_NUM_BADGES
	case 0, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_56
	case 1, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_57
	case 2, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_58
	case 3, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_59
	case 4, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_60
	case 5, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_61
	case 6, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_62
	case 7, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_63
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_87
	trainerbattle_no_intro TRAINER_JUAN_5, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_16:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_17:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_18:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_19:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_20:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_21:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_22:
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_23:
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_26:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_27:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_28:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_29:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_30:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_31:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_32:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_33:
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_36:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_37:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_38:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_39:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_40:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_41:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_42:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_43:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_46:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_47:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_48:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_49:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_50:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_51:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_52:
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_53:
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_56:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_57:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_58:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_59:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_60:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_61:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_62:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_63:
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_66:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_67:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_68:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_69:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_70:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_71:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_72:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_73:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_75:
	random 5
	switch VAR_RESULT
	case 0, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_94
	case 1, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_95
	case 2, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_96
	case 3, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_97
	case 4, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_98
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_78:
	random 5
	switch VAR_RESULT
	case 0, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_100
	case 1, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_101
	case 2, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_102
	case 3, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_103
	case 4, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_104
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_81:
	random 5
	switch VAR_RESULT
	case 0, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_106
	case 1, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_107
	case 2, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_108
	case 3, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_109
	case 4, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_110
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_84:
	random 5
	switch VAR_RESULT
	case 0, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_112
	case 1, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_113
	case 2, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_114
	case 3, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_115
	case 4, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_116
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_87:
	random 5
	switch VAR_RESULT
	case 0, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_118
	case 1, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_119
	case 2, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_120
	case 3, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_121
	case 4, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_122
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_90:
	random 5
	switch VAR_RESULT
	case 0, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_124
	case 1, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_125
	case 2, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_126
	case 3, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_127
	case 4, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_128
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_94:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_95:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_96:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_97:
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_98:
	trainerbattle_no_intro TRAINER_JUAN_5, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_100:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_101:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_102:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_103:
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_104:
	trainerbattle_no_intro TRAINER_JUAN_5, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_106:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_107:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_108:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_109:
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_110:
	trainerbattle_no_intro TRAINER_JUAN_5, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_112:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_113:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_114:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_115:
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_116:
	trainerbattle_no_intro TRAINER_JUAN_5, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_118:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_119:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_120:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_121:
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_122:
	trainerbattle_no_intro TRAINER_JUAN_5, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_124:
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_125:
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_126:
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_127:
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_128:
	trainerbattle_no_intro TRAINER_JUAN_5, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1


SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts::
	checkitem ITEM_TM55_SCALD, 1
	compare VAR_NUM_BADGES, 4
	goto_if_ge SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_3
SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_1:
	checkitem ITEM_TM94_SURF, 1
	compare VAR_NUM_BADGES, 6
	goto_if_ge SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_8
SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_6:
	checkitem ITEM_TM98_WATERFALL, 1
	compare VAR_NUM_BADGES, 7
	goto_if_ge SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_13
SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_11:
	checkitem ITEM_TM102_LIQUIDATION, 1
	compare VAR_NUM_BADGES, 8
	goto_if_ge SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_18
SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_16:
	compare VAR_NUM_BADGES, 7
	goto_if_ge SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_25
SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_24:
	goto_if_unset FLAG_TEMP_9, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_23
SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21:
	return

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_2:
	giveitem ITEM_TM55_SCALD
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_0, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_1

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_3:
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_2
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_1

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_7:
	giveitem ITEM_TM94_SURF
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_1, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_6

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_8:
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_7
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_6

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_12:
	giveitem ITEM_TM98_WATERFALL
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_2, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_11

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_13:
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_12
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_11

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_17:
	giveitem ITEM_TM102_LIQUIDATION
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_3, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_16

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_18:
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_17
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_16

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_22:
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_4, MSGBOX_NPC
	giveitem ITEM_GYARADOSITE
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_5, MSGBOX_NPC
	setflag FLAG_GOT_GYARADOSITE
	setflag FLAG_TEMP_9
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_23:
	random 7
	switch VAR_RESULT
	case 0, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_29
	case 1, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_30
	case 2, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_31
	case 3, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_32
	case 4, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_33
	case 5, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_34
	case 6, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_35
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_25:
	goto_if_unset FLAG_GOT_GYARADOSITE, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_22
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_24

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_29:
	giveitem ITEM_WATER_GEM, 2
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_30:
	giveitem ITEM_WATER_STONE, 2
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_31:
	giveitem ITEM_LURE_BALL_SEAL, 2
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_32:
	giveitem ITEM_DRAGON_SCALE, 2
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_33:
	giveitem ITEM_PRISM_SCALE, 2
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_34:
	giveitem ITEM_DAMP_ROCK, 2
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_35:
	giveitem ITEM_LUSTROUS_ORB, 2
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21


SootopolisCity_Gym_1F_EventScript_GymGuide_New::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuide_New_2
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_NPC
SootopolisCity_Gym_1F_EventScript_GymGuide_New_1:
	release
	end

SootopolisCity_Gym_1F_EventScript_GymGuide_New_2:
	goto_if_unset FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_GymGuide_New_5
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_NPC
	goto SootopolisCity_Gym_1F_EventScript_GymGuide_New_1

SootopolisCity_Gym_1F_EventScript_GymGuide_New_5:
	msgbox SootopolisCity_Gym_1F_EventScript_GymGuide_New_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq SootopolisCity_Gym_1F_EventScript_GymGuide_New_8
	msgbox SootopolisCity_Gym_1F_EventScript_GymGuide_New_Text_2, MSGBOX_NPC
	goto SootopolisCity_Gym_1F_EventScript_GymGuide_New_1

SootopolisCity_Gym_1F_EventScript_GymGuide_New_8:
	msgbox SootopolisCity_Gym_1F_EventScript_GymGuide_New_Text_1, MSGBOX_NPC
	warp MAP_SOOTOPOLIS_CITY_GYM_1F, 255, 8, 3
	goto SootopolisCity_Gym_1F_EventScript_GymGuide_New_1


SootopolisCity_Gym_1F_EventScript_Gym_Horsea::
	lock
	faceplayer
	switch VAR_GYM_POKEMON_SPECIES
	case SPECIES_HORSEA, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_3
	case SPECIES_SEADRA, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_4
	case SPECIES_KINGDRA, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_5
SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1:
	release
	end

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_3:
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_12
SootopolisCity_Gym_1F_EventScript_Gym_Horsea_10:
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_9
SootopolisCity_Gym_1F_EventScript_Gym_Horsea_8:
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_4, MSGBOX_NPC
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_5, MSGBOX_SIGN
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_4:
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_21
SootopolisCity_Gym_1F_EventScript_Gym_Horsea_19:
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_18
SootopolisCity_Gym_1F_EventScript_Gym_Horsea_17:
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_8, MSGBOX_NPC
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_9, MSGBOX_SIGN
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_5:
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_30
SootopolisCity_Gym_1F_EventScript_Gym_Horsea_28:
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_27
SootopolisCity_Gym_1F_EventScript_Gym_Horsea_26:
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_13, MSGBOX_NPC
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_14, MSGBOX_SIGN
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_6:
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_0, MSGBOX_NPC
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_1, MSGBOX_SIGN
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_7:
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_2, MSGBOX_NPC
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_3, MSGBOX_SIGN
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_9:
	goto_if_set FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_7
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_8

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_12:
	goto_if_unset FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_6
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_10

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_15:
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_6, MSGBOX_NPC
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_1, MSGBOX_SIGN
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_16:
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_7, MSGBOX_NPC
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_3, MSGBOX_SIGN
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_18:
	goto_if_set FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_16
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_17

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_21:
	goto_if_unset FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_15
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_19

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_24:
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_10, MSGBOX_NPC
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_11, MSGBOX_SIGN
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_25:
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_12, MSGBOX_NPC
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_3, MSGBOX_SIGN
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_27:
	goto_if_set FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_25
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_26

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_30:
	goto_if_unset FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_24
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_28


SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species::
	switch VAR_NUM_BADGES
	case 0, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_3
	case 1, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_4
	case 2, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_5
	case 3, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_6
	case 4, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_7
	case 5, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_8
	case 6, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_9
	case 7, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_10
	case 8, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_11
SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1:
	goto_if_set FLAG_NO_EVOLUTION_MODE, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_13
SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_12:
	return

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_3:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HORSEA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HORSEA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_4:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HORSEA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HORSEA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_5:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HORSEA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HORSEA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_6:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SEADRA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SEADRA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_7:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SEADRA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SEADRA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_8:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_KINGDRA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_KINGDRA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_9:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_KINGDRA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_KINGDRA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_10:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_KINGDRA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_KINGDRA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_11:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_KINGDRA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_KINGDRA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_13:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HORSEA
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HORSEA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_12


SootopolisCity_Gym_1F_EventScript_Juan_New_Text_0:
	.string "Please take these items with you.$"

SootopolisCity_Gym_1F_EventScript_Juan_New_Text_1:
	.string "Juan: Come back tomorrow so we can\n"
	.string "battle again.$"

SootopolisCity_Gym_1F_EventScript_Juan_New_Text_2:
	.string "Juan: My Pokémon are tired for today,\n"
	.string "but the other trainers here need\l"
	.string "training, do you want to try battling\l"
	.string "them again?$"

SootopolisCity_Gym_1F_EventScript_Juan_New_Text_3:
	.string "Juan: I will tell them to get ready, so\n"
	.string "take care on your way out.$"

SootopolisCity_Gym_1F_EventScript_Juan_New_Text_4:
	.string "Juan: Sorry, but you need to defeat\n"
	.string "every trainer on this Gym before\l"
	.string "battling me$"

SootopolisCity_Gym_1F_EventScript_Juan_New_Text_5:
	.string "Please take these items with you, too,$"

SootopolisCity_Gym_1F_EventScript_Juan_New_Text_6:
	.string "That Technical Machine contains the\n"
	.string "move Water Pulse.\p"
	.string "This move inflicts damage and has a\n"
	.string "chance of confusing the target.$"

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_0:
	.string "Juan: This move inflicts damage and has\n"
	.string "a high chance of burning the target.$"

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_1:
	.string "Juan: This move does damages\n"
	.string "everything on the field even your\l"
	.string "allies.$"

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_2:
	.string "Juan: This is a Physical oriented\n"
	.string "Water-type move, it can flinch the\l"
	.string "target.$"

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_3:
	.string "Juan: This is one of the best physical\n"
	.string "Water-type moves it has a chance of\l"
	.string "lowering the target defense.$"

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_4:
	.string "Juan: Take this as an special gift from\n"
	.string "me, it's an Gyarados.$"

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_5:
	.string "Make an Gyarados hold it to unleash its\n"
	.string "real potential.$"

SootopolisCity_Gym_1F_EventScript_GymGuide_New_Text_0:
	.string "Guide: Hello {PLAYER}, I see you came\n"
	.string "to this Gym again, do you want me to\l"
	.string "take you to the Leader?$"

SootopolisCity_Gym_1F_EventScript_GymGuide_New_Text_1:
	.string "Let me tell the leader that you are\n"
	.string "here.$"

SootopolisCity_Gym_1F_EventScript_GymGuide_New_Text_2:
	.string "I see, you can also go throught the Gym\n"
	.string "if you want.$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_0:
	.string "Horsea: sea!$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_1:
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, it looks really\l"
	.string "excited.$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_2:
	.string "Horsea: sea...$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_3:
	.string "The Pokémon seems tired after today's\n"
	.string "battle, its better to let it rest.$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_4:
	.string "Horsea: sea?$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_5:
	.string "The Pokémon is currently looking\n"
	.string "shooting ink from its mouth.$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_6:
	.string "Seadra: dra!$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_7:
	.string "Seadra: dra...$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_8:
	.string "Seadra: dra?$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_9:
	.string "The Pokémon is currently looking at\n"
	.string "some ring targets.$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_10:
	.string "Seaking: ron!$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_11:
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, its skin look's really\l"
	.string "tought.$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_12:
	.string "Seaking: king...$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_13:
	.string "Seaking: king?$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_14:
	.string "The Pokémon is currently shooting some\n"
	.string "ring targets.$"
