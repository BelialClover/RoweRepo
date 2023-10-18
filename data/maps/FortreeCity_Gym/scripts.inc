FortreeCity_Gym_MapScripts:: @ 82165AB
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FortreeCity_Gym_OnWarp
	.byte 0

FortreeCity_Gym_OnTransition: @ 82165B6
	call FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species
	special RotatingGate_InitPuzzle
	end

FortreeCity_Gym_OnWarp: @ 82165BA
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, FortreeCity_Gym_EventScript_InitRotatingGates
	.2byte 0

FortreeCity_Gym_EventScript_InitRotatingGates:: @ 82165C4
	special RotatingGate_InitPuzzleAndGraphics
	end

FortreeCity_Gym_EventScript_Winona:: @ 82165C8
	lock
	faceplayer
	call_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Winona_PostBattle
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
	release
	end

FortreeCity_Gym_EventScript_WinonaDefeated:: @ 82165FD
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_FORTREE_GYM
	setflag FLAG_BADGE06_GET
	setvar VAR_0x8008, 6
	call Common_EventScript_SetGymTrainers
	call Special_Gym_EventScript_Give_Item
	call FortreeCity_Gym_EventScript_GiveAerialAce
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
	setvar VAR_GYM_ATTENDANT_STEP_COUNTER, 0
	setflag FLAG_GYM_ATTENDANT_CALL
	call Gym_EventScript_Reset_Rematches
	setflag FLAG_WINONA_REMATCH
	release
	end
	
FortreeCity_Gym_EventScript_Winona_PostBattle::
	goto_if_unset FLAG_WINONA_REMATCH, FortreeCity_Gym_EventScript_WinonaRematch
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
	release
	end
	
//Rematch	
FortreeCity_Gym_EventScript_WinonaRematch:: @ 8204DB3
	msgbox FortreeCity_Gym_Text_WinonaPreRematch, MSGBOX_DEFAULT
	goto FortreeCity_Gym_EventScript_Start_Rematch_1
	end
	
FortreeCity_Gym_EventScript_WinonaRematchEnd::
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
	call Gym_EventScript_Reset_Random_Rematch
	setflag FLAG_WINONA_REMATCH
	end
	
FortreeCity_Gym_EventScript_Start_Rematch_1::
	checkitem ITEM_TM40_AERIAL_ACE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq FortreeCity_Gym_EventScript_Start_Rematch_2
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
	msgbox FortreeCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM40_AERIAL_ACE
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
	end
	
FortreeCity_Gym_EventScript_Start_Rematch_2::
	goto_if_unset FLAG_RECEIVED_TM08 FortreeCity_Gym_EventScript_Start_Rematch_Party_1
	checkitem ITEM_TM58_ROOST, 1
	compare VAR_RESULT, TRUE
	goto_if_eq FortreeCity_Gym_EventScript_Start_Rematch_3
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaRematchDefeat
	msgbox FortreeCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM58_ROOST
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
	end
	
FortreeCity_Gym_EventScript_Start_Rematch_3::
	goto_if_unset FLAG_RECEIVED_TM42 FortreeCity_Gym_EventScript_Start_Rematch_Party_2
	checkitem ITEM_TM62_ACROBATICS, 1
	compare VAR_RESULT, TRUE
	goto_if_eq FortreeCity_Gym_EventScript_Start_Rematch_4
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaRematchDefeat
	msgbox FortreeCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM62_ACROBATICS
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
	end
	
FortreeCity_Gym_EventScript_Start_Rematch_4::
	goto_if_unset FLAG_RECEIVED_TM40 FortreeCity_Gym_EventScript_Start_Rematch_Party_3
	checkitem ITEM_TM76_FLY, 1
	compare VAR_RESULT, TRUE
	goto_if_eq FortreeCity_Gym_EventScript_Start_Rematch_5
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaRematchDefeat
	msgbox FortreeCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM76_FLY
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
	end
	
FortreeCity_Gym_EventScript_Start_Rematch_5::
	goto_if_unset FLAG_RECEIVED_TM04 FortreeCity_Gym_EventScript_Start_Rematch_Party_4
	goto_if_set FLAG_GOT_ALTARIANITE FortreeCity_Gym_EventScript_Start_Rematch_6
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaRematchDefeat
	msgbox FortreeCity_Gym_Text_GetMegaStone, MSGBOX_DEFAULT
	giveitem ITEM_ALTARIANITE
	setflag FLAG_GOT_ALTARIANITE
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
	end
	
FortreeCity_Gym_EventScript_Start_Rematch_6::
	goto_if_unset FLAG_RECEIVED_TM03 FortreeCity_Gym_EventScript_Start_Rematch_Party_4
	checkitem ITEM_TM114_BRAVE_BIRD, 1
	compare VAR_RESULT, TRUE
	goto_if_eq FortreeCity_Gym_EventScript_Start_Rematch_Final
	trainerbattle_no_intro TRAINER_WINONA_5, FortreeCity_Gym_Text_WinonaRematchDefeat
	msgbox FortreeCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM114_BRAVE_BIRD
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
	end
	
FortreeCity_Gym_EventScript_Start_Rematch_Final::
	random 5
	switch VAR_RESULT
	case 0, FortreeCity_Gym_EventScript_Start_Rematch_Party_1
	case 1, FortreeCity_Gym_EventScript_Start_Rematch_Party_2
	case 2, FortreeCity_Gym_EventScript_Start_Rematch_Party_3
	case 3, FortreeCity_Gym_EventScript_Start_Rematch_Party_4
	case 4, FortreeCity_Gym_EventScript_Start_Rematch_Party_5
	end
	
FortreeCity_Gym_EventScript_Start_Rematch_Party_1::
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, FortreeCity_Gym_EventScript_WinonaRematchEnd
	msgbox FortreeCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_TIMID_MINT, 3
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
	end
	
FortreeCity_Gym_EventScript_Start_Rematch_Party_2::
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, FortreeCity_Gym_EventScript_WinonaRematchEnd
	msgbox FortreeCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_HASTY_MINT, 3
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
	end
	
FortreeCity_Gym_EventScript_Start_Rematch_Party_3::
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, FortreeCity_Gym_EventScript_WinonaRematchEnd
	msgbox FortreeCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_JOLLY_MINT, 3
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
	end
	
FortreeCity_Gym_EventScript_Start_Rematch_Party_4::
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, FortreeCity_Gym_EventScript_WinonaRematchEnd
	msgbox FortreeCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_NAIVE_MINT, 3
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
	end
	
FortreeCity_Gym_EventScript_Start_Rematch_Party_5::
	trainerbattle_no_intro TRAINER_WINONA_5, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, FortreeCity_Gym_EventScript_WinonaRematchEnd
	msgbox FortreeCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_MODEST_MINT, 3
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
	end
	
FortreeCity_Gym_Text_GetTM:
	.string "Winona: Please take this\n"
	.string "Technical Machine.$"

FortreeCity_Gym_Text_GetMegaStone:
	.string "Winona: Please take this\n"
	.string "Mega Stone, with you.\p"
	.string "Make an Aggron hold it to\n"
	.string "unleash its Hidden Potential.$"
	
FortreeCity_Gym_Text_GetReward:
	.string "Winona: Please take this\n"
	.string "Item as a Reward.$"

//rematches end
	
FortreeCity_Gym_EventScript_GiveAerialAce2:: @ 8216646
	giveitem ITEM_TM40
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
	release
	end

FortreeCity_Gym_EventScript_GiveAerialAce:: @ 821666A
	msgbox Gym_Text_Takethis2, MSGBOX_DEFAULT
	giveitem ITEM_TM40
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
	return

FortreeCity_Gym_EventScript_Jared:: @ 82166A8
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Edwardo:: @ 82166BF
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Flint:: @ 82166D6
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Ashley:: @ 82166ED
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Humberto:: @ 8216704
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_Darius:: @ 821671B
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
	end

FortreeCity_Gym_EventScript_GymGuide:: @ 8216732
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

FortreeCity_Gym_EventScript_GymGuidePostVictory:: @ 8216747
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

FortreeCity_Gym_EventScript_LeftGymStatue:: @ 8216751
	lockall
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
	goto FortreeCity_Gym_EventScript_GymStatue
	end

FortreeCity_Gym_EventScript_RightGymStatue:: @ 8216761
	lockall
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
	goto FortreeCity_Gym_EventScript_GymStatue
	end

FortreeCity_Gym_EventScript_GymStatueCertified:: @ 8216771
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

FortreeCity_Gym_EventScript_GymStatue:: @ 821677B
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

FortreeCity_Gym_Text_GymGuideAdvice: @ 8216785
	.string "Yo, how's it going, Champion-\n"
	.string "bound {PLAYER}?\p"
	.string "Fortree Gym Leader Winona is\n"
	.string "a master of Flying-type Pokémon.\p"
	.string "She's waiting at the back of this Gym,\n"
	.string "behind the rotating doors.\p"
	.string "She's waiting for new challengers\n"
	.string "who are trying to take wing!\p"
	.string "Okay, go for it!$"

FortreeCity_Gym_Text_GymGuidePostVictory: @ 821687D
	.string "You did it!\n"
	.string "You've achieved liftoff!$"

FortreeCity_Gym_Text_JaredIntro: @ 82168A2
	.string "Behold the elegant battle style of\n"
	.string "Bird Pokémon!$"

FortreeCity_Gym_Text_JaredDefeat: @ 82168D3
	.string "You…\n"
	.string "You're strong…$"

FortreeCity_Gym_Text_JaredPostBattle: @ 82168E7
	.string "A Trainer has to be smart to keep\n"
	.string "up with unexpected turns of events.\p"
	.string "Do you have the smarts to get to\n"
	.string "our Leader?$"

FortreeCity_Gym_Text_EdwardoIntro: @ 821695A
	.string "The lovers of Bird Pokémon aspire\n"
	.string "to join this Gym.\p"
	.string "As a member of the Fortree Gym,\n"
	.string "I'm not allowed to lose!$"

FortreeCity_Gym_Text_EdwardoDefeat: @ 82169C7
	.string "It was too much of a load for me\n"
	.string "to bear…$"

FortreeCity_Gym_Text_EdwardoPostBattle: @ 82169F1
	.string "The world is huge, and there are\n"
	.string "countless tough Trainers.\p"
	.string "I'm going to keep training and make\n"
	.string "myself even stronger.$"

FortreeCity_Gym_Text_FlintIntro: @ 8216A66
	.string "There's no need for Winona, our Gym\n"
	.string "Leader, to deal with you!\p"
	.string "I'm plenty good enough for you!$"

FortreeCity_Gym_Text_FlintDefeat: @ 8216AC4
	.string "Winona, I…\n"
	.string "I lost!$"

FortreeCity_Gym_Text_FlintPostBattle: @ 8216AD7
	.string "Winona is cute and she's strong.\n"
	.string "She's the ultimate Leader!\p"
	.string "Blush…$"

FortreeCity_Gym_Text_AshleyIntro: @ 8216B1A
	.string "Winona taught me personally!\n"
	.string "You can't beat me easily!$"

FortreeCity_Gym_Text_AshleyDefeat: @ 8216B51
	.string "I was beaten…$"

FortreeCity_Gym_Text_AshleyPostBattle: @ 8216B5F
	.string "Thanks to Winona, the people of\n"
	.string "Fortree can live without fear.$"

FortreeCity_Gym_Text_HumbertoIntro: @ 8216B9E
	.string "When Winona takes to battle, her face\n"
	.string "shines with beautiful determination…\p"
	.string "I'm not letting you witness that\n"
	.string "lovely sight!$"

FortreeCity_Gym_Text_HumbertoDefeat: @ 8216C18
	.string "Urk!\n"
	.string "I couldn't stop you.$"

FortreeCity_Gym_Text_HumbertoPostBattle: @ 8216C32
	.string "You'd better watch it!\n"
	.string "Don't get distracted staring at Winona\l"
	.string "or you'll go crashing down in a heap!$"

FortreeCity_Gym_Text_DariusIntro: @ 8216C96
	.string "You'd better know that there are all\n"
	.string "sorts of Flying-type Pokémon.\p"
	.string "You do know that, right?$"

FortreeCity_Gym_Text_DariusDefeat: @ 8216CF2
	.string "You seem to know your stuff!$"

FortreeCity_Gym_Text_DariusPostBattle: @ 8216D0F
	.string "Sure, you beat me all right.\n"
	.string "But you'd better watch it! Our Leader\l"
	.string "Winona's Pokémon are all business.$"

FortreeCity_Gym_Text_WinonaIntro: @ 8216D75
	.string "I am Winona. I am the Leader of\n"
	.string "the Fortree Pokémon Gym.\p"
	.string "I have become one with Bird Pokémon\n"
	.string "and have soared the skies…\p"
	.string "However grueling the battle, we have\n"
	.string "triumphed with grace…\p"
	.string "Witness the elegant choreography\n"
	.string "of Bird Pokémon and I!$"

FortreeCity_Gym_Text_WinonaDefeat: @ 8216E60
	.string "Never before have I seen a Trainer\n"
	.string "command Pokémon with more grace\l"
	.string "than I…\p"
	.string "In recognition of your prowess,\n"
	.string "I present to you this Gym Badge.$"

FortreeCity_Gym_Text_ReceivedFeatherBadge: @ 8216EEC
	.string "{PLAYER} received the Feather Badge\n"
	.string "from Winona.$"

FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis: @ 8216F17
	.string "This…\n"
	.string "This is a gift from me.$"

FortreeCity_Gym_Text_ExplainAerialAce: @ 8216FEC
	.string "TM40 contains Aerial Ace.\p"
	.string "Its speed…\n"
	.string "No Pokémon should be able to avoid it.\p"
	.string "… … … … … …$"

FortreeCity_Gym_Text_RegisteredWinona: @ 8217044
	.string "Registered Gym Leader Winona\n"
	.string "in the Pokénav.$"

FortreeCity_Gym_Text_WinonaPostBattle: @ 8217071
	.string "Though I fell to you, I will remain\n"
	.string "devoted to Bird Pokémon.$"

FortreeCity_Gym_Text_GymStatue: @ 82170AE
	.string "Fortree City Pokémon Gym$"

FortreeCity_Gym_Text_GymStatueCertified: @ 82170C7
	.string "Fortree City Pokémon Gym\p"
	.string "Winona'S Certified Trainers:\n"
	.string "{PLAYER}$"

FortreeCity_Gym_Text_WinonaPreRematch: @ 8217100
	.string "Winona: We humans can never escape\n"
	.string "gravity's pull on the ground.\p"
	.string "But by striving for excellence,\n"
	.string "we have the power to soar!\p"
	.string "Please, allow me to see your power\n"
	.string "at full flight!$"

FortreeCity_Gym_Text_WinonaRematchDefeat: @ 82171E6
	.string "I failed to reach your height again…$"

FortreeCity_Gym_Text_WinonaPostRematch: @ 821720B
	.string "Winona: Even though I have lost,\n"
	.string "the wings of my heart remain unbroken.\p"
	.string "I can rise and soar again and\n"
	.string "yet again.\p"
	.string "I am convinced of it!$"

FortreeCity_Gym_Text_WinonaRematchNeedTwoMons: @ 8217292
	.string "Winona: We humans can never escape\n"
	.string "gravity's pull on the ground.\p"
	.string "But by striving for excellence,\n"
	.string "we have the power to soar!\p"
	.string "You have scaled the pinnacle as\n"
	.string "the reigning Champion.\p"
	.string "Please, allow me to see your power\n"
	.string "at full flight!\p"
	.string "Oh, no… Do you have but one\n"
	.string "Pokémon with you?\p"
	.string "Please return with two Pokémon\n"
	.string "at the very least.$"

FortreeCity_Gym_EventScript_Winona_New::
	lock
	faceplayer
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Winona_New_22
FortreeCity_Gym_EventScript_Winona_New_20:
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Winona_New_19
FortreeCity_Gym_EventScript_Winona_New_8:
	checktrainerflag TRAINER_JARED
	goto_if 0, FortreeCity_Gym_EventScript_Winona_New_6
	checktrainerflag TRAINER_FLINT
	goto_if 0, FortreeCity_Gym_EventScript_Winona_New_6
	checktrainerflag TRAINER_ASHLEY
	goto_if 0, FortreeCity_Gym_EventScript_Winona_New_6
	checktrainerflag TRAINER_EDWARDO
	goto_if 0, FortreeCity_Gym_EventScript_Winona_New_6
	checktrainerflag TRAINER_HUMBERTO
	goto_if 0, FortreeCity_Gym_EventScript_Winona_New_6
	checktrainerflag TRAINER_DARIUS
	goto_if 0, FortreeCity_Gym_EventScript_Winona_New_6
FortreeCity_Gym_EventScript_Winona_New_5:
	msgbox FortreeCity_Gym_Text_WinonaIntro, MSGBOX_NPC
	call FortreeCity_Gym_EventScript_Winona_Battle_New
	message FortreeCity_Gym_EventScript_Winona_New_Text_5
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox FortreeCity_Gym_EventScript_Winona_New_Text_6, MSGBOX_NPC
	setflag FLAG_DEFEATED_FORTREE_GYM
	setflag FLAG_BADGE06_GET
	call Special_Gym_EventScript_Give_Item
	giveitem ITEM_TM58_ROOST
	msgbox FortreeCity_Gym_EventScript_Winona_New_Text_7, MSGBOX_NPC
	waitfanfare
	closemessage
	setflag FLAG_TEMP_9
	call FortreeCity_Gym_EventScript_Winona_Give_Gifts
	setvar VAR_0x8008, 6
	call Common_EventScript_SetGymTrainers
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
	playfanfare MUS_REGISTER_MATCH_CALL
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
	waitfanfare
	closemessage
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_NPC
	call Gym_EventScript_Reset_Rematches
	setflag FLAG_WINONA_REMATCH
FortreeCity_Gym_EventScript_Winona_New_1:
	release
	end

FortreeCity_Gym_EventScript_Winona_New_2:
	msgbox FortreeCity_Gym_Text_WinonaPreRematch, MSGBOX_NPC
	call FortreeCity_Gym_EventScript_Winona_Battle_New
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_NPC
	call Gym_EventScript_Reset_Rematches
	msgbox FortreeCity_Gym_EventScript_Winona_New_Text_0, MSGBOX_NPC
	call FortreeCity_Gym_EventScript_Winona_Give_Gifts
	msgbox FortreeCity_Gym_EventScript_Winona_New_Text_1, MSGBOX_NPC
	setflag FLAG_WINONA_REMATCH
	goto FortreeCity_Gym_EventScript_Winona_New_1

FortreeCity_Gym_EventScript_Winona_New_3:
	msgbox FortreeCity_Gym_EventScript_Winona_New_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq FortreeCity_Gym_EventScript_Winona_New_25
	setvar VAR_0x8008, 6
	call Common_EventScript_SetGymTrainers
	msgbox FortreeCity_Gym_EventScript_Winona_New_Text_1, MSGBOX_NPC
	goto FortreeCity_Gym_EventScript_Winona_New_1

FortreeCity_Gym_EventScript_Winona_New_4:
	msgbox FortreeCity_Gym_EventScript_Winona_New_Text_4, MSGBOX_NPC
	goto FortreeCity_Gym_EventScript_Winona_New_1

FortreeCity_Gym_EventScript_Winona_New_6:
	goto_if_set FLAG_HARD_MODE, FortreeCity_Gym_EventScript_Winona_New_4
	goto FortreeCity_Gym_EventScript_Winona_New_5

FortreeCity_Gym_EventScript_Winona_New_19:
	goto_if_set FLAG_WINONA_REMATCH, FortreeCity_Gym_EventScript_Winona_New_3
	goto FortreeCity_Gym_EventScript_Winona_New_8

FortreeCity_Gym_EventScript_Winona_New_22:
	goto_if_unset FLAG_WINONA_REMATCH, FortreeCity_Gym_EventScript_Winona_New_2
	goto FortreeCity_Gym_EventScript_Winona_New_20

FortreeCity_Gym_EventScript_Winona_New_25:
	cleartrainerflag TRAINER_JARED
	cleartrainerflag TRAINER_FLINT
	cleartrainerflag TRAINER_ASHLEY
	cleartrainerflag TRAINER_EDWARDO
	cleartrainerflag TRAINER_HUMBERTO
	cleartrainerflag TRAINER_DARIUS
	msgbox FortreeCity_Gym_EventScript_Winona_New_Text_3, MSGBOX_NPC
	goto FortreeCity_Gym_EventScript_Winona_New_1


FortreeCity_Gym_EventScript_Winona_Battle_New::
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Winona_Battle_New_2
	goto_if_set FLAG_HARD_MODE, FortreeCity_Gym_EventScript_Winona_Battle_New_10
	goto_if_set FLAG_NORMAL_MODE, FortreeCity_Gym_EventScript_Winona_Battle_New_11
	switch VAR_NUM_BADGES
	case 0, FortreeCity_Gym_EventScript_Winona_Battle_New_66
	case 1, FortreeCity_Gym_EventScript_Winona_Battle_New_67
	case 2, FortreeCity_Gym_EventScript_Winona_Battle_New_68
	case 3, FortreeCity_Gym_EventScript_Winona_Battle_New_69
	case 4, FortreeCity_Gym_EventScript_Winona_Battle_New_70
	case 5, FortreeCity_Gym_EventScript_Winona_Battle_New_71
	case 6, FortreeCity_Gym_EventScript_Winona_Battle_New_72
	case 7, FortreeCity_Gym_EventScript_Winona_Battle_New_73
	goto_if_set FLAG_SYS_GAME_CLEAR, FortreeCity_Gym_EventScript_Winona_Battle_New_90
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaDefeat
FortreeCity_Gym_EventScript_Winona_Battle_New_1:
	return

FortreeCity_Gym_EventScript_Winona_Battle_New_2:
	goto_if_set FLAG_HARD_MODE, FortreeCity_Gym_EventScript_Winona_Battle_New_5
	goto_if_set FLAG_NORMAL_MODE, FortreeCity_Gym_EventScript_Winona_Battle_New_6
	switch VAR_NUM_BADGES
	case 0, FortreeCity_Gym_EventScript_Winona_Battle_New_36
	case 1, FortreeCity_Gym_EventScript_Winona_Battle_New_37
	case 2, FortreeCity_Gym_EventScript_Winona_Battle_New_38
	case 3, FortreeCity_Gym_EventScript_Winona_Battle_New_39
	case 4, FortreeCity_Gym_EventScript_Winona_Battle_New_40
	case 5, FortreeCity_Gym_EventScript_Winona_Battle_New_41
	case 6, FortreeCity_Gym_EventScript_Winona_Battle_New_42
	case 7, FortreeCity_Gym_EventScript_Winona_Battle_New_43
	goto_if_set FLAG_SYS_GAME_CLEAR, FortreeCity_Gym_EventScript_Winona_Battle_New_81
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_5:
	switch VAR_NUM_BADGES
	case 0, FortreeCity_Gym_EventScript_Winona_Battle_New_16
	case 1, FortreeCity_Gym_EventScript_Winona_Battle_New_17
	case 2, FortreeCity_Gym_EventScript_Winona_Battle_New_18
	case 3, FortreeCity_Gym_EventScript_Winona_Battle_New_19
	case 4, FortreeCity_Gym_EventScript_Winona_Battle_New_20
	case 5, FortreeCity_Gym_EventScript_Winona_Battle_New_21
	case 6, FortreeCity_Gym_EventScript_Winona_Battle_New_22
	case 7, FortreeCity_Gym_EventScript_Winona_Battle_New_23
	goto_if_set FLAG_SYS_GAME_CLEAR, FortreeCity_Gym_EventScript_Winona_Battle_New_75
	trainerbattle_no_intro TRAINER_WINONA_5, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_6:
	switch VAR_NUM_BADGES
	case 0, FortreeCity_Gym_EventScript_Winona_Battle_New_26
	case 1, FortreeCity_Gym_EventScript_Winona_Battle_New_27
	case 2, FortreeCity_Gym_EventScript_Winona_Battle_New_28
	case 3, FortreeCity_Gym_EventScript_Winona_Battle_New_29
	case 4, FortreeCity_Gym_EventScript_Winona_Battle_New_30
	case 5, FortreeCity_Gym_EventScript_Winona_Battle_New_31
	case 6, FortreeCity_Gym_EventScript_Winona_Battle_New_32
	case 7, FortreeCity_Gym_EventScript_Winona_Battle_New_33
	goto_if_set FLAG_SYS_GAME_CLEAR, FortreeCity_Gym_EventScript_Winona_Battle_New_78
	trainerbattle_no_intro TRAINER_WINONA_5, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_10:
	switch VAR_NUM_BADGES
	case 0, FortreeCity_Gym_EventScript_Winona_Battle_New_46
	case 1, FortreeCity_Gym_EventScript_Winona_Battle_New_47
	case 2, FortreeCity_Gym_EventScript_Winona_Battle_New_48
	case 3, FortreeCity_Gym_EventScript_Winona_Battle_New_49
	case 4, FortreeCity_Gym_EventScript_Winona_Battle_New_50
	case 5, FortreeCity_Gym_EventScript_Winona_Battle_New_51
	case 6, FortreeCity_Gym_EventScript_Winona_Battle_New_52
	case 7, FortreeCity_Gym_EventScript_Winona_Battle_New_53
	goto_if_set FLAG_SYS_GAME_CLEAR, FortreeCity_Gym_EventScript_Winona_Battle_New_84
	trainerbattle_no_intro TRAINER_WINONA_5, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_11:
	switch VAR_NUM_BADGES
	case 0, FortreeCity_Gym_EventScript_Winona_Battle_New_56
	case 1, FortreeCity_Gym_EventScript_Winona_Battle_New_57
	case 2, FortreeCity_Gym_EventScript_Winona_Battle_New_58
	case 3, FortreeCity_Gym_EventScript_Winona_Battle_New_59
	case 4, FortreeCity_Gym_EventScript_Winona_Battle_New_60
	case 5, FortreeCity_Gym_EventScript_Winona_Battle_New_61
	case 6, FortreeCity_Gym_EventScript_Winona_Battle_New_62
	case 7, FortreeCity_Gym_EventScript_Winona_Battle_New_63
	goto_if_set FLAG_SYS_GAME_CLEAR, FortreeCity_Gym_EventScript_Winona_Battle_New_87
	trainerbattle_no_intro TRAINER_WINONA_5, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_16:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_17:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_18:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_19:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_20:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_21:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_22:
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_23:
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_26:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_27:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_28:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_29:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_30:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_31:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_32:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_33:
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_36:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_37:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_38:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_39:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_40:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_41:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_42:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_43:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_46:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_47:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_48:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_49:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_50:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_51:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_52:
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_53:
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_56:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_57:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_58:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_59:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_60:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_61:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_62:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_63:
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_66:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_67:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_68:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_69:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_70:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_71:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_72:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_73:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_75:
	random 5
	switch VAR_RESULT
	case 0, FortreeCity_Gym_EventScript_Winona_Battle_New_94
	case 1, FortreeCity_Gym_EventScript_Winona_Battle_New_95
	case 2, FortreeCity_Gym_EventScript_Winona_Battle_New_96
	case 3, FortreeCity_Gym_EventScript_Winona_Battle_New_97
	case 4, FortreeCity_Gym_EventScript_Winona_Battle_New_98
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_78:
	random 5
	switch VAR_RESULT
	case 0, FortreeCity_Gym_EventScript_Winona_Battle_New_100
	case 1, FortreeCity_Gym_EventScript_Winona_Battle_New_101
	case 2, FortreeCity_Gym_EventScript_Winona_Battle_New_102
	case 3, FortreeCity_Gym_EventScript_Winona_Battle_New_103
	case 4, FortreeCity_Gym_EventScript_Winona_Battle_New_104
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_81:
	random 5
	switch VAR_RESULT
	case 0, FortreeCity_Gym_EventScript_Winona_Battle_New_106
	case 1, FortreeCity_Gym_EventScript_Winona_Battle_New_107
	case 2, FortreeCity_Gym_EventScript_Winona_Battle_New_108
	case 3, FortreeCity_Gym_EventScript_Winona_Battle_New_109
	case 4, FortreeCity_Gym_EventScript_Winona_Battle_New_110
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_84:
	random 5
	switch VAR_RESULT
	case 0, FortreeCity_Gym_EventScript_Winona_Battle_New_112
	case 1, FortreeCity_Gym_EventScript_Winona_Battle_New_113
	case 2, FortreeCity_Gym_EventScript_Winona_Battle_New_114
	case 3, FortreeCity_Gym_EventScript_Winona_Battle_New_115
	case 4, FortreeCity_Gym_EventScript_Winona_Battle_New_116
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_87:
	random 5
	switch VAR_RESULT
	case 0, FortreeCity_Gym_EventScript_Winona_Battle_New_118
	case 1, FortreeCity_Gym_EventScript_Winona_Battle_New_119
	case 2, FortreeCity_Gym_EventScript_Winona_Battle_New_120
	case 3, FortreeCity_Gym_EventScript_Winona_Battle_New_121
	case 4, FortreeCity_Gym_EventScript_Winona_Battle_New_122
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_90:
	random 5
	switch VAR_RESULT
	case 0, FortreeCity_Gym_EventScript_Winona_Battle_New_124
	case 1, FortreeCity_Gym_EventScript_Winona_Battle_New_125
	case 2, FortreeCity_Gym_EventScript_Winona_Battle_New_126
	case 3, FortreeCity_Gym_EventScript_Winona_Battle_New_127
	case 4, FortreeCity_Gym_EventScript_Winona_Battle_New_128
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_94:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_95:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_96:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_97:
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_98:
	trainerbattle_no_intro TRAINER_WINONA_5, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_100:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_101:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_102:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_103:
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_104:
	trainerbattle_no_intro TRAINER_WINONA_5, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_106:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_107:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_108:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_109:
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_110:
	trainerbattle_no_intro TRAINER_WINONA_5, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_112:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_113:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_114:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_115:
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_116:
	trainerbattle_no_intro TRAINER_WINONA_5, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_118:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_119:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_120:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_121:
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_122:
	trainerbattle_no_intro TRAINER_WINONA_5, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_124:
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_125:
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_126:
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_127:
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_128:
	trainerbattle_no_intro TRAINER_WINONA_5, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1


FortreeCity_Gym_EventScript_Winona_Give_Gifts::
	checkitem ITEM_TM40_AERIAL_ACE, 1
	compare VAR_NUM_BADGES, 2
	goto_if_ge FortreeCity_Gym_EventScript_Winona_Give_Gifts_3
FortreeCity_Gym_EventScript_Winona_Give_Gifts_1:
	checkitem ITEM_TM62_ACROBATICS, 1
	compare VAR_NUM_BADGES, 4
	goto_if_ge FortreeCity_Gym_EventScript_Winona_Give_Gifts_8
FortreeCity_Gym_EventScript_Winona_Give_Gifts_6:
	checkitem ITEM_TM76_FLY, 1
	compare VAR_NUM_BADGES, 6
	goto_if_ge FortreeCity_Gym_EventScript_Winona_Give_Gifts_13
FortreeCity_Gym_EventScript_Winona_Give_Gifts_11:
	checkitem ITEM_TM114_BRAVE_BIRD, 1
	compare VAR_NUM_BADGES, 8
	goto_if_ge FortreeCity_Gym_EventScript_Winona_Give_Gifts_18
FortreeCity_Gym_EventScript_Winona_Give_Gifts_16:
	compare VAR_NUM_BADGES, 7
	goto_if_ge FortreeCity_Gym_EventScript_Winona_Give_Gifts_25
FortreeCity_Gym_EventScript_Winona_Give_Gifts_24:
	goto_if_unset FLAG_TEMP_9, FortreeCity_Gym_EventScript_Winona_Give_Gifts_23
FortreeCity_Gym_EventScript_Winona_Give_Gifts_21:
	return

FortreeCity_Gym_EventScript_Winona_Give_Gifts_2:
	giveitem ITEM_TM40_AERIAL_ACE
	msgbox FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_0, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_1

FortreeCity_Gym_EventScript_Winona_Give_Gifts_3:
	compare VAR_RESULT, FALSE
	goto_if_eq FortreeCity_Gym_EventScript_Winona_Give_Gifts_2
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_1

FortreeCity_Gym_EventScript_Winona_Give_Gifts_7:
	giveitem ITEM_TM62_ACROBATICS
	msgbox FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_1, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_6

FortreeCity_Gym_EventScript_Winona_Give_Gifts_8:
	compare VAR_RESULT, FALSE
	goto_if_eq FortreeCity_Gym_EventScript_Winona_Give_Gifts_7
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_6

FortreeCity_Gym_EventScript_Winona_Give_Gifts_12:
	giveitem ITEM_TM76_FLY
	msgbox FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_2, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_11

FortreeCity_Gym_EventScript_Winona_Give_Gifts_13:
	compare VAR_RESULT, FALSE
	goto_if_eq FortreeCity_Gym_EventScript_Winona_Give_Gifts_12
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_11

FortreeCity_Gym_EventScript_Winona_Give_Gifts_17:
	giveitem ITEM_TM114_BRAVE_BIRD
	msgbox FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_3, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_16

FortreeCity_Gym_EventScript_Winona_Give_Gifts_18:
	compare VAR_RESULT, FALSE
	goto_if_eq FortreeCity_Gym_EventScript_Winona_Give_Gifts_17
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_16

FortreeCity_Gym_EventScript_Winona_Give_Gifts_22:
	msgbox FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_4, MSGBOX_NPC
	giveitem ITEM_ALTARIANITE
	msgbox FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_5, MSGBOX_NPC
	setflag FLAG_GOT_ALTARIANITE
	setflag FLAG_TEMP_9
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21

FortreeCity_Gym_EventScript_Winona_Give_Gifts_23:
	random 7
	switch VAR_RESULT
	case 0, FortreeCity_Gym_EventScript_Winona_Give_Gifts_29
	case 1, FortreeCity_Gym_EventScript_Winona_Give_Gifts_30
	case 2, FortreeCity_Gym_EventScript_Winona_Give_Gifts_31
	case 3, FortreeCity_Gym_EventScript_Winona_Give_Gifts_32
	case 4, FortreeCity_Gym_EventScript_Winona_Give_Gifts_33
	case 5, FortreeCity_Gym_EventScript_Winona_Give_Gifts_34
	case 6, FortreeCity_Gym_EventScript_Winona_Give_Gifts_35
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21

FortreeCity_Gym_EventScript_Winona_Give_Gifts_25:
	goto_if_unset FLAG_GOT_ALTARIANITE, FortreeCity_Gym_EventScript_Winona_Give_Gifts_22
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_24

FortreeCity_Gym_EventScript_Winona_Give_Gifts_29:
	giveitem ITEM_FLYING_GEM, 2
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21

FortreeCity_Gym_EventScript_Winona_Give_Gifts_30:
	giveitem ITEM_POWER_HERB, 2
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21

FortreeCity_Gym_EventScript_Winona_Give_Gifts_31:
	giveitem ITEM_AIR_BALLOON, 2
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21

FortreeCity_Gym_EventScript_Winona_Give_Gifts_32:
	giveitem ITEM_SWIFT_WING, 2
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21

FortreeCity_Gym_EventScript_Winona_Give_Gifts_33:
	giveitem ITEM_SHARP_BEAK, 5
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21

FortreeCity_Gym_EventScript_Winona_Give_Gifts_34:
	giveitem ITEM_COBA_BERRY, 2
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21

FortreeCity_Gym_EventScript_Winona_Give_Gifts_35:
	giveitem ITEM_GREPA_BERRY, 2
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21


FortreeCity_Gym_EventScript_GymGuide_New::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuide_New_2
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_NPC
FortreeCity_Gym_EventScript_GymGuide_New_1:
	release
	end

FortreeCity_Gym_EventScript_GymGuide_New_2:
	goto_if_unset FLAG_WINONA_REMATCH, FortreeCity_Gym_EventScript_GymGuide_New_5
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_NPC
	goto FortreeCity_Gym_EventScript_GymGuide_New_1

FortreeCity_Gym_EventScript_GymGuide_New_5:
	msgbox FortreeCity_Gym_EventScript_GymGuide_New_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq FortreeCity_Gym_EventScript_GymGuide_New_8
	msgbox FortreeCity_Gym_EventScript_GymGuide_New_Text_2, MSGBOX_NPC
	goto FortreeCity_Gym_EventScript_GymGuide_New_1

FortreeCity_Gym_EventScript_GymGuide_New_8:
	msgbox FortreeCity_Gym_EventScript_GymGuide_New_Text_1, MSGBOX_NPC
	warp MAP_FORTREE_CITY_GYM, 255, 15, 3
	goto FortreeCity_Gym_EventScript_GymGuide_New_1


FortreeCity_Gym_EventScript_Gym_Taillow::
	lock
	faceplayer
	switch VAR_GYM_POKEMON_SPECIES
	case SPECIES_TAILLOW, FortreeCity_Gym_EventScript_Gym_Taillow_3
	case SPECIES_SWELLOW, FortreeCity_Gym_EventScript_Gym_Taillow_4
FortreeCity_Gym_EventScript_Gym_Taillow_1:
	release
	end

FortreeCity_Gym_EventScript_Gym_Taillow_3:
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Gym_Taillow_11
FortreeCity_Gym_EventScript_Gym_Taillow_9:
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Gym_Taillow_8
FortreeCity_Gym_EventScript_Gym_Taillow_7:
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_4, MSGBOX_NPC
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_5, MSGBOX_SIGN
	waitmessage
	goto FortreeCity_Gym_EventScript_Gym_Taillow_1

FortreeCity_Gym_EventScript_Gym_Taillow_4:
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Gym_Taillow_20
FortreeCity_Gym_EventScript_Gym_Taillow_18:
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Gym_Taillow_17
FortreeCity_Gym_EventScript_Gym_Taillow_16:
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_10, MSGBOX_NPC
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_11, MSGBOX_SIGN
	waitmessage
	goto FortreeCity_Gym_EventScript_Gym_Taillow_1

FortreeCity_Gym_EventScript_Gym_Taillow_5:
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_0, MSGBOX_NPC
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_1, MSGBOX_SIGN
	waitmessage
	goto FortreeCity_Gym_EventScript_Gym_Taillow_1

FortreeCity_Gym_EventScript_Gym_Taillow_6:
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_2, MSGBOX_NPC
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_3, MSGBOX_SIGN
	waitmessage
	goto FortreeCity_Gym_EventScript_Gym_Taillow_1

FortreeCity_Gym_EventScript_Gym_Taillow_8:
	goto_if_set FLAG_WINONA_REMATCH, FortreeCity_Gym_EventScript_Gym_Taillow_6
	goto FortreeCity_Gym_EventScript_Gym_Taillow_7

FortreeCity_Gym_EventScript_Gym_Taillow_11:
	goto_if_unset FLAG_WINONA_REMATCH, FortreeCity_Gym_EventScript_Gym_Taillow_5
	goto FortreeCity_Gym_EventScript_Gym_Taillow_9

FortreeCity_Gym_EventScript_Gym_Taillow_14:
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_6, MSGBOX_NPC
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_7, MSGBOX_SIGN
	waitmessage
	goto FortreeCity_Gym_EventScript_Gym_Taillow_1

FortreeCity_Gym_EventScript_Gym_Taillow_15:
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_8, MSGBOX_NPC
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_9, MSGBOX_SIGN
	waitmessage
	goto FortreeCity_Gym_EventScript_Gym_Taillow_1

FortreeCity_Gym_EventScript_Gym_Taillow_17:
	goto_if_set FLAG_WINONA_REMATCH, FortreeCity_Gym_EventScript_Gym_Taillow_15
	goto FortreeCity_Gym_EventScript_Gym_Taillow_16

FortreeCity_Gym_EventScript_Gym_Taillow_20:
	goto_if_unset FLAG_WINONA_REMATCH, FortreeCity_Gym_EventScript_Gym_Taillow_14
	goto FortreeCity_Gym_EventScript_Gym_Taillow_18


FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species::
	switch VAR_NUM_BADGES
	case 0, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_3
	case 1, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_4
	case 2, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_5
	case 3, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_6
	case 4, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_7
	case 5, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_8
	case 6, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_9
	case 7, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_10
	case 8, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_11
FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1:
	goto_if_set FLAG_NO_EVOLUTION_MODE, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_13
FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_12:
	return

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_3:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_TAILLOW
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_TAILLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_4:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_TAILLOW
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_TAILLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_5:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_TAILLOW
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_TAILLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_6:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SWELLOW
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SWELLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_7:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SWELLOW
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SWELLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_8:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SWELLOW
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SWELLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_9:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SWELLOW
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SWELLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_10:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SWELLOW
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SWELLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_11:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SWELLOW
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SWELLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_13:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_TAILLOW
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_TAILLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_12


FortreeCity_Gym_EventScript_Winona_New_Text_0:
	.string "Please take these items with you.$"

FortreeCity_Gym_EventScript_Winona_New_Text_1:
	.string "Winona: Come back tomorrow so we can\n"
	.string "battle again.$"

FortreeCity_Gym_EventScript_Winona_New_Text_2:
	.string "Winona: My Pokémon are tired for today,\n"
	.string "but the other trainers here need\l"
	.string "training, do you want to try battling\l"
	.string "them again?$"

FortreeCity_Gym_EventScript_Winona_New_Text_3:
	.string "Winona: I will tell them to get ready, so\n"
	.string "take care on your way out.$"

FortreeCity_Gym_EventScript_Winona_New_Text_4:
	.string "Winona: Sorry, but you need to defeat\n"
	.string "every trainer on this Gym before\l"
	.string "battling me$"

FortreeCity_Gym_EventScript_Winona_New_Text_5:
	.string "{PLAYER} received the Feather Badge\n"
	.string "from Winona.$"

FortreeCity_Gym_EventScript_Winona_New_Text_6:
	.string "Please take these items with you, too,$"

FortreeCity_Gym_EventScript_Winona_New_Text_7:
	.string "That technical machine contains the\n"
	.string "move Bulk Up.\p"
	.string "It's a move that raises both Attack and\n"
	.string "Defense stats for the User.$"

FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_0:
	.string "Winona: This move inflicts damage and\n"
	.string "never fails, use it when you are low on\l"
	.string "accuracy.$"

FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_1:
	.string "Winona: This move inflicts double the\n"
	.string "damage if its used by a Pokémon\l"
	.string "without a held item.$"

FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_2:
	.string "Winona: This is a two turns Flying-type\n"
	.string "move, its really powerful and lets you\l"
	.string "stay out of the enemy range for 1 turn.$"

FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_3:
	.string "Winona: This is one of the best\n"
	.string "Flying-type moves, it does a lot of\l"
	.string "damage but also hurts the user.$"

FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_4:
	.string "Winona: Take this as an special gift\n"
	.string "from me, it's a Altaria.$"

FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_5:
	.string "Make a Altaria hold it to unleash its\n"
	.string "real potential.$"

FortreeCity_Gym_EventScript_GymGuide_New_Text_0:
	.string "Guide: Hello {PLAYER}, I see you came\n"
	.string "to this Gym again, do you want me to\l"
	.string "take you to the Leader?$"

FortreeCity_Gym_EventScript_GymGuide_New_Text_1:
	.string "Let me tell the leader that you are\n"
	.string "here.$"

FortreeCity_Gym_EventScript_GymGuide_New_Text_2:
	.string "I see, you can also go throught the Gym\n"
	.string "if you want.$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_0:
	.string "Taillow: low!$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_1:
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, it is flying really\l"
	.string "fast.$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_2:
	.string "Taillow: low...$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_3:
	.string "The Pokémon seems tired after today's\n"
	.string "battle, it is currently eating a\l"
	.string "sunflower seed.$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_4:
	.string "Taillow: low?$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_5:
	.string "The Pokémon is looking confused on how\n"
	.string "you finished the puzzle.$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_6:
	.string "Swellow: low!$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_7:
	.string "The Pokémon seems like it wants a\n"
	.string "rematch, it is flying really fast.$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_8:
	.string "Swellow: low...$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_9:
	.string "The Pokémon seems tired after today's\n"
	.string "battle, it may want to rest a little\l"
	.string "more.$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_10:
	.string "Swellow: low?$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_11:
	.string "The Pokémon is currently looking at you\n"
	.string "while flying.$"
