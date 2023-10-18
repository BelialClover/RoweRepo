RustboroCity_Gym_MapScripts:: @ 8212F30
	map_script MAP_SCRIPT_ON_LOAD, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species

//First Team
RustboroCity_Gym_EventScript_Roxanne:: @ 8212F31
	lock
	faceplayer
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Roxanne_PostBattle
	//goto_if_set FLAG_HARD_MODE, RustboroCity_Gym_EventScript_Roxanne_Battle1
	//goto_if_set FLAG_NORMAL_MODE, RustboroCity_Gym_EventScript_Roxanne_Battle1
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
	end
	
RustboroCity_Gym_EventScript_Roxanne_Battle1::
	goto_if_set FLAG_RECEIVED_BADGE_08, RustboroCity_Gym_EventScript_Roxanne_Battle5
	goto_if_set FLAG_RECEIVED_BADGE_07, RustboroCity_Gym_EventScript_Roxanne_Battle4
	goto_if_set FLAG_RECEIVED_BADGE_06, RustboroCity_Gym_EventScript_Roxanne_Battle4
	goto_if_set FLAG_RECEIVED_BADGE_05, RustboroCity_Gym_EventScript_Roxanne_Battle3
	goto_if_set FLAG_RECEIVED_BADGE_04, RustboroCity_Gym_EventScript_Roxanne_Battle3
	goto_if_set FLAG_RECEIVED_BADGE_03, RustboroCity_Gym_EventScript_Roxanne_Battle2
	goto_if_set FLAG_RECEIVED_BADGE_02, RustboroCity_Gym_EventScript_Roxanne_Battle2
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
	end
	
	
//Second Team
RustboroCity_Gym_EventScript_Roxanne_Battle2::
	trainerbattle_single TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
	end
	
//Third Team
RustboroCity_Gym_EventScript_Roxanne_Battle3::
	trainerbattle_single TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
	end
	
//Fourth Team
RustboroCity_Gym_EventScript_Roxanne_Battle4::
	trainerbattle_single TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
	end
	
//Fifth Team
RustboroCity_Gym_EventScript_Roxanne_Battle5::
	trainerbattle_single TRAINER_ROXANNE_5, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
	end

	
RustboroCity_Gym_EventScript_Roxanne_PostBattle::
	goto_if_unset FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_RoxanneRematch
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_DEFAULT
	release
	end
	
RustboroCity_Gym_EventScript_RoxanneRematch:: @ 8212FC8
	msgbox RustboroCity_Gym_Text_RoxannePreRematch, MSGBOX_DEFAULT
	goto RustboroCity_Gym_EventScript_Start_Rematch_1
	end
	
RustboroCity_Gym_EventScript_RoxanneRematchEnd::
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
	call Gym_EventScript_Reset_Random_Rematch
	setflag FLAG_ROXANNE_REMATCH
	end
	
RustboroCity_Gym_EventScript_Start_Rematch_1::
	checkitem ITEM_TM39_ROCK_TOMB, 1
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_Gym_EventScript_Start_Rematch_2
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
	msgbox RustboroCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM39_ROCK_TOMB
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
	end
	
RustboroCity_Gym_EventScript_Start_Rematch_2::
	goto_if_unset FLAG_RECEIVED_TM08 RustboroCity_Gym_EventScript_Start_Rematch_Party_1
	checkitem ITEM_TM69_ROCK_POLISH, 1
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_Gym_EventScript_Start_Rematch_3
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneRematchDefeat
	msgbox RustboroCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM69_ROCK_POLISH
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
	end
	
RustboroCity_Gym_EventScript_Start_Rematch_3::
	goto_if_unset FLAG_RECEIVED_TM42 RustboroCity_Gym_EventScript_Start_Rematch_Party_2
	checkitem ITEM_TM110_STEALTH_ROCK, 1
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_Gym_EventScript_Start_Rematch_4
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneRematchDefeat
	msgbox RustboroCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM110_STEALTH_ROCK
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
	end
	
RustboroCity_Gym_EventScript_Start_Rematch_4::
	goto_if_unset FLAG_RECEIVED_TM40 RustboroCity_Gym_EventScript_Start_Rematch_Party_3
	checkitem ITEM_TM107_POWER_GEM, 1
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_Gym_EventScript_Start_Rematch_5
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneRematchDefeat
	msgbox RustboroCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM107_POWER_GEM
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
	end
	
RustboroCity_Gym_EventScript_Start_Rematch_5::
	goto_if_unset FLAG_RECEIVED_TM04 RustboroCity_Gym_EventScript_Start_Rematch_Party_4
	goto_if_set FLAG_GOT_AGGRONITE RustboroCity_Gym_EventScript_Start_Rematch_6
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneRematchDefeat
	msgbox RustboroCity_Gym_Text_GetMegaStone, MSGBOX_DEFAULT
	giveitem ITEM_AGGRONITE
	setflag FLAG_GOT_AGGRONITE
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
	end
	
RustboroCity_Gym_EventScript_Start_Rematch_6::
	goto_if_unset FLAG_RECEIVED_TM03 RustboroCity_Gym_EventScript_Start_Rematch_Party_4
	checkitem ITEM_TM71_STONE_EDGE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_Gym_EventScript_Start_Rematch_Final
	trainerbattle_no_intro TRAINER_ROXANNE_5, RustboroCity_Gym_Text_RoxanneRematchDefeat
	msgbox RustboroCity_Gym_Text_GetTM, MSGBOX_DEFAULT
	giveitem ITEM_TM71_STONE_EDGE
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
	end
	
RustboroCity_Gym_EventScript_Start_Rematch_Final::
	random 5
	switch VAR_RESULT
	case 0, RustboroCity_Gym_EventScript_Start_Rematch_Party_1
	case 1, RustboroCity_Gym_EventScript_Start_Rematch_Party_2
	case 2, RustboroCity_Gym_EventScript_Start_Rematch_Party_3
	case 3, RustboroCity_Gym_EventScript_Start_Rematch_Party_4
	case 4, RustboroCity_Gym_EventScript_Start_Rematch_Party_5
	end
	
RustboroCity_Gym_EventScript_Start_Rematch_Party_1::
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, RustboroCity_Gym_EventScript_RoxanneRematchEnd
	msgbox RustboroCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_BOLD_MINT, 3
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
	end
	
RustboroCity_Gym_EventScript_Start_Rematch_Party_2::
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, RustboroCity_Gym_EventScript_RoxanneRematchEnd
	msgbox RustboroCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_IMPISH_MINT, 3
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
	end
	
RustboroCity_Gym_EventScript_Start_Rematch_Party_3::
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, RustboroCity_Gym_EventScript_RoxanneRematchEnd
	msgbox RustboroCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_LAX_MINT, 3
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
	end
	
RustboroCity_Gym_EventScript_Start_Rematch_Party_4::
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, RustboroCity_Gym_EventScript_RoxanneRematchEnd
	msgbox RustboroCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_RELAXED_MINT, 3
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
	end
	
RustboroCity_Gym_EventScript_Start_Rematch_Party_5::
	trainerbattle_no_intro TRAINER_ROXANNE_5, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto_if_unset FLAG_RECEIVED_TM04, RustboroCity_Gym_EventScript_RoxanneRematchEnd
	msgbox RustboroCity_Gym_Text_GetReward, MSGBOX_DEFAULT
	giveitem ITEM_ADAMANT_MINT, 3
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
	end

RustboroCity_Gym_EventScript_RoxanneDefeated:: @ 8212F66
	message RustboroCity_Gym_Text_ReceivedStoneBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setflag FLAG_BADGE01_GET
	call Special_Gym_EventScript_Give_Item
	call RustboroCity_Gym_EventScript_GiveRockTomb
	closemessage
	delay 30
	setvar VAR_0x8008, 1
	call Common_EventScript_SetGymTrainers
	waitfanfare
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
	call Gym_EventScript_Reset_Rematches
	setflag FLAG_ROXANNE_REMATCH
	release
	end

RustboroCity_Gym_EventScript_GiveRockTomb:: @ 8212FA4
	msgbox Gym_Text_Takethis2, MSGBOX_DEFAULT
	giveitem ITEM_TM39
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
	return

RustboroCity_Gym_EventScript_Josh:: @ 8212FE3
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Tommy:: @ 8212FFA
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Marc:: @ 8213011
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_GymGuide:: @ 8213028
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_GymGuidePostVictory:: @ 821303D
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_LeftGymStatue:: @ 8213047
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
	goto RustboroCity_Gym_EventScript_GymStatue
	end

RustboroCity_Gym_EventScript_RightGymStatue:: @ 8213057
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
	goto RustboroCity_Gym_EventScript_GymStatue
	end

RustboroCity_Gym_EventScript_GymStatueCertified:: @ 8213067
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_GymStatue:: @ 8213071
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_RegisterRoxanne:: @ 821307B
	lockall
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
	waitmessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	releaseall
	end

RustboroCity_Gym_Text_GymGuideAdvice: @ 821309D
	.string "Yo, how's it going?\p"
	.string "Listen, my friend!\n"
	.string "Would you like to become the Champion?\p"
	.string "I'm no Trainer, not me, but I can\n"
	.string "sure give you winning advice.\p"
	.string "That's settled, then! We'll aim for the\n"
	.string "Pokémon Championship together!\p"
	.string "It's your job as a Trainer to collect\n"
	.string "Gym Badges, am I right?\p"
	.string "But Gym Leaders aren't pushovers!\p"
	.string "And that's where I come in!\n"
	.string "I'm here to provide expert advice!\p"
	.string "Roxanne, the Gym Leader, is a user\n"
	.string "of Rock-type Pokémon.\p"
	.string "The Rock type is very durable, but\n"
	.string "it can't stand Water-type and\l"
	.string "Grass-type moves.\p"
	.string "Come see me afterwards, if you beat\n"
	.string "the Gym Leader.\p"
	.string "Well, go for it!$"

RustboroCity_Gym_Text_GymGuidePostVictory: @ 82132E2
	.string "Whoa! What a breathtaking victory!\n"
	.string "My cheering must've worked!\p"
	.string "Great!\n"
	.string "Check your Trainer card.\p"
	.string "The Stone Badge you got should be\n"
	.string "properly recorded on it.\p"
	.string "In other words…\p"
	.string "You've climbed the first step on\n"
	.string "the stairs to the Championship!\p"
	.string "That's got to feel awesome!$"

RustboroCity_Gym_Text_JoshIntro: @ 82133E9
	.string "Don't take us Gym Trainers lightly!\n"
	.string "I'll show you why we're better!$"

RustboroCity_Gym_Text_JoshDefeat: @ 821342D
	.string "You were too good for me…$"

RustboroCity_Gym_Text_JoshPostBattle: @ 8213447
	.string "You haven't seen anything of the Rock\n"
	.string "type's terrifying power!$"

RustboroCity_Gym_Text_TommyIntro: @ 8213486
	.string "If you can't beat me, you won't stand\n"
	.string "a chance against Roxanne!$"

RustboroCity_Gym_Text_TommyDefeat: @ 82134C6
	.string "Wow! You've got some potential!$"

RustboroCity_Gym_Text_TommyPostBattle: @ 82134E6
	.string "Roxanne is stronger than me by\n"
	.string "several times.\p"
	.string "You'd better be on your guard!$"

RustboroCity_Gym_Text_MarcIntro: @ 8213533
	.string "We might be in the middle of town,\n"
	.string "but so what?\p"
	.string "My Rock Pokémon need room to\n"
	.string "rampage!$"

RustboroCity_Gym_Text_MarcDefeat: @ 8213589
	.string "Oh, man oh man!\n"
	.string "Our challenger is one feisty customer!$"

RustboroCity_Gym_Text_MarcPostBattle: @ 82135C0
	.string "I have to hand it to our Leader.\p"
	.string "It took smarts and sense for her to\n"
	.string "pick the Rock type at her young age.$"

RustboroCity_Gym_Text_RoxanneIntro: @ 821362A
	.string "Hello, I am Roxanne, the Rustboro\n"
	.string "Pokémon Gym Leader.\p"
	.string "I became a Gym Leader so that I might\n"
	.string "apply what I learned at the Pokémon\l"
	.string "Trainer's School in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which Pokémon?$"

RustboroCity_Gym_Text_RoxanneDefeat: @ 821370B
	.string "So…\n"
	.string "I lost…\p"
	.string "It seems that I still have much more\n"
	.string "to learn…\p"
	.string "I understand.\p"
	.string "The Pokémon League's rules state\n"
	.string "that Trainers are to be given this\l"
	.string "if they defeat a Gym Leader.\p"
	.string "Please accept the official Pokémon\n"
	.string "League Stone Badge.$"

RustboroCity_Gym_Text_ReceivedStoneBadge: @ 82137EC
	.string "{PLAYER} received the Stone Badge\n"
	.string "from Roxanne.$"

RustboroCity_Gym_Text_StoneBadgeInfoTakeThis: @ 8213816
	.string "Please take this with you, too.$"

RustboroCity_Gym_Text_ExplainRockTomb: @ 82138B1
	.string "That Technical Machina, TM39,\n"
	.string "contains Rock Tomb.\p"
	.string "It not only inflicts damage by dropping\n"
	.string "rocks, it also lowers Speed.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a Pokémon.\p"
	.string "A TM can be used indefinitely, so use\n"
	.string "it without thinking it twice.$"

RustboroCity_Gym_Text_RoxannePostBattle: @ 82139A7
	.string "Since you are so strong, you should\n"
	.string "challenge other Gym Leaders.\p"
	.string "By battling many Trainers, you should\n"
	.string "learn many things.$"

RustboroCity_Gym_Text_GymStatue: @ 8213A21
	.string "Rustboro City Pokémon Gym$"

RustboroCity_Gym_Text_GymStatueCertified: @ 8213A3B
	.string "Rustboro City Pokémon Gym\p"
	.string "Roxanne's Certified TrainerS:\n"
	.string "{PLAYER}$"

RustboroCity_Gym_Text_RoxanneRegisterCall: @ 8213A76
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "Roxanne: Oh, hello, {PLAYER}?\n"
	.string "This is Roxanne of Rustboro City.\p"
	.string "I heard from Brawly that you're\n"
	.string "moving up through the ranks of\l"
	.string "TrainerS at an incredible clip.\p"
	.string "Well, I'd rather not think that\n"
	.string "I can't beat you.\p"
	.string "I promise, I will shape up my Gym\n"
	.string "so that you may challenge us again.\p"
	.string "I hope you'll be looking forward to\n"
	.string "that occasion as much as me!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

RustboroCity_Gym_Text_RegisteredRoxanne: @ 8213C01
	.string "Registered Gym Leader Roxanne\n"
	.string "in the Pokénav.$"

RustboroCity_Gym_Text_RoxannePreRematch: @ 8213C2F
	.string "Roxanne: I'm so glad to see you again.\n"
	.string "I'm Roxanne, the Gym Leader here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become. Let us battle!$"

RustboroCity_Gym_Text_RoxanneRematchDefeat: @ 8213CF9
	.string "Grr…\n"
	.string "Again, I have lost…$"

RustboroCity_Gym_Text_RoxannePostRematch: @ 8213D12
	.string "Roxanne: I still have much to learn\n"
	.string "when it comes to battling Pokémon.\p"
	.string "That awareness makes me love battling\n"
	.string "all that much more!$"

RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons: @ 8213D93
	.string "Roxanne: I'm so glad to see you again.\n"
	.string "I'm Roxanne, the Gym Leader here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become…\p"
	.string "Oh, no…\n"
	.string "You only have one Pokémon with you?\p"
	.string "Please return with at least one more\n"
	.string "Pokémon.$"

RustboroCity_Gym_Text_GetTM:
	.string "Roxanne: Please take this\n"
	.string "Technical Machine.$"

RustboroCity_Gym_Text_GetMegaStone:
	.string "Roxanne: Please take this\n"
	.string "Mega Stone, with you.\p"
	.string "Make an Aggron hold it to\n"
	.string "unleash its Hidden Potential.$"
	
RustboroCity_Gym_Text_GetReward:
	.string "Roxanne: Please take this\n"
	.string "Item as a Reward.$"
	
Gym_EventScript_Reset_Rematches::
	clearflag FLAG_ROXANNE_REMATCH
	clearflag FLAG_BRAWLY_REMATCH
	clearflag FLAG_WATTSON_REMATCH
	clearflag FLAG_FLANNERY_REMATCH
	clearflag FLAG_NORMAN_REMATCH
	clearflag FLAG_WINONA_REMATCH
	clearflag FLAG_TATE_AND_LIZA_REMATCH
	clearflag FLAG_JUAN_REMATCH
	clearflag FLAG_DAILY_ABILITY_PATCH	
	return
	
Gym_EventScript_Reset_Random_Rematch::
	random 9
	switch VAR_RESULT
	case 0, Gym_EventScript_Reset_Roxanne_Rematch
	case 1, Gym_EventScript_Reset_Brawly_Rematch
	case 2, Gym_EventScript_Reset_Wattson_Rematch
	case 3, Gym_EventScript_Reset_Flannery_Rematch
	case 4, Gym_EventScript_Reset_Norman_Rematch
	case 5, Gym_EventScript_Reset_Winona_Rematch
	case 6, Gym_EventScript_Reset_Tate_Liza_Rematch
	case 7, Gym_EventScript_Reset_Juan_Rematch
	case 8, Gym_EventScript_Reset_Ability_Capsule
	return
	
Gym_EventScript_Reset_Roxanne_Rematch::
	goto_if_unset FLAG_BADGE01_GET, Gym_EventScript_Reset_Random_Rematch
	clearflag FLAG_ROXANNE_REMATCH
	return
	
Gym_EventScript_Reset_Brawly_Rematch::
	goto_if_unset FLAG_BADGE02_GET, Gym_EventScript_Reset_Random_Rematch
	clearflag FLAG_BRAWLY_REMATCH
	return
	
Gym_EventScript_Reset_Wattson_Rematch::
	goto_if_unset FLAG_BADGE03_GET, Gym_EventScript_Reset_Random_Rematch
	clearflag FLAG_WATTSON_REMATCH
	return
	
Gym_EventScript_Reset_Flannery_Rematch::
	goto_if_unset FLAG_BADGE04_GET, Gym_EventScript_Reset_Random_Rematch
	clearflag FLAG_FLANNERY_REMATCH
	return
	
Gym_EventScript_Reset_Norman_Rematch::
	goto_if_unset FLAG_BADGE05_GET, Gym_EventScript_Reset_Random_Rematch
	clearflag FLAG_NORMAN_REMATCH
	return
	
Gym_EventScript_Reset_Winona_Rematch::
	goto_if_unset FLAG_BADGE06_GET, Gym_EventScript_Reset_Random_Rematch
	clearflag FLAG_WINONA_REMATCH
	return
	
Gym_EventScript_Reset_Tate_Liza_Rematch::
	goto_if_unset FLAG_BADGE07_GET, Gym_EventScript_Reset_Random_Rematch
	clearflag FLAG_TATE_AND_LIZA_REMATCH
	return
	
Gym_EventScript_Reset_Juan_Rematch::
	goto_if_unset FLAG_BADGE08_GET, Gym_EventScript_Reset_Random_Rematch
	clearflag FLAG_JUAN_REMATCH
	return
	
Gym_EventScript_Reset_Ability_Capsule::
	goto_if_unset FLAG_BADGE08_GET, Gym_EventScript_Reset_Random_Rematch
	clearflag FLAG_DAILY_ABILITY_PATCH
	return

EventScript_Gym_Attendant_Call::
	lockall
	switch VAR_NUM_BADGES
	case 1, EventScript_Gym_Attendant_Call_3
	case 2, EventScript_Gym_Attendant_Call_4
	case 3, EventScript_Gym_Attendant_Call_5
	case 4, EventScript_Gym_Attendant_Call_6
	case 5, EventScript_Gym_Attendant_Call_7
	case 6, EventScript_Gym_Attendant_Call_8
	case 7, EventScript_Gym_Attendant_Call_9
	case 8, EventScript_Gym_Attendant_Call_10
EventScript_Gym_Attendant_Call_1:
	waitmessage
	clearflag FLAG_GYM_ATTENDANT_CALL
	setvar VAR_GYM_ATTENDANT_STEP_COUNTER, 0
	releaseall
	end

EventScript_Gym_Attendant_Call_3:
	pokenavcall EventScript_Gym_Attendant_Call_Text_0
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_4:
	pokenavcall EventScript_Gym_Attendant_Call_Text_1
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_5:
	pokenavcall EventScript_Gym_Attendant_Call_Text_2
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_6:
	pokenavcall EventScript_Gym_Attendant_Call_Text_3
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_7:
	pokenavcall EventScript_Gym_Attendant_Call_Text_4
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_8:
	pokenavcall EventScript_Gym_Attendant_Call_Text_5
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_9:
	pokenavcall EventScript_Gym_Attendant_Call_Text_6
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_10:
	pokenavcall EventScript_Gym_Attendant_Call_Text_7
	goto EventScript_Gym_Attendant_Call_1


RustboroCity_Gym_EventScript_Roxanne_New::
	lock
	faceplayer
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Roxanne_New_16
RustboroCity_Gym_EventScript_Roxanne_New_14:
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Roxanne_New_13
RustboroCity_Gym_EventScript_Roxanne_New_8:
	checktrainerflag TRAINER_JOSH
	goto_if 0, RustboroCity_Gym_EventScript_Roxanne_New_6
	checktrainerflag TRAINER_TOMMY
	goto_if 0, RustboroCity_Gym_EventScript_Roxanne_New_6
	checktrainerflag TRAINER_MARC
	goto_if 0, RustboroCity_Gym_EventScript_Roxanne_New_6
RustboroCity_Gym_EventScript_Roxanne_New_5:
	msgbox RustboroCity_Gym_Text_RoxanneIntro, MSGBOX_NPC
	call RustboroCity_Gym_EventScript_Roxanne_Battle_New
	message RustboroCity_Gym_Text_ReceivedStoneBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_5, MSGBOX_NPC
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setflag FLAG_BADGE01_GET
	call Special_Gym_EventScript_Give_Item
	giveitem ITEM_TM39_ROCK_TOMB
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_6, MSGBOX_NPC
	waitfanfare
	closemessage
	setflag FLAG_TEMP_9
	call RustboroCity_Gym_EventScript_Roxanne_Give_Gifts
	setvar VAR_0x8008, 1
	call Common_EventScript_SetGymTrainers
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
	playfanfare MUS_REGISTER_MATCH_CALL
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
	waitfanfare
	closemessage
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_NPC
	call Gym_EventScript_Reset_Rematches
	setflag FLAG_ROXANNE_REMATCH
RustboroCity_Gym_EventScript_Roxanne_New_1:
	release
	end

RustboroCity_Gym_EventScript_Roxanne_New_2:
	msgbox RustboroCity_Gym_Text_RoxannePreRematch, MSGBOX_NPC
	call RustboroCity_Gym_EventScript_Roxanne_Battle_New
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_NPC
	call Gym_EventScript_Reset_Rematches
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	call RustboroCity_Gym_EventScript_Roxanne_Give_Gifts
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_1, MSGBOX_NPC
	setflag FLAG_ROXANNE_REMATCH
	goto RustboroCity_Gym_EventScript_Roxanne_New_1

RustboroCity_Gym_EventScript_Roxanne_New_3:
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_Gym_EventScript_Roxanne_New_19
	setvar VAR_0x8008, 1
	call Common_EventScript_SetGymTrainers
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_1, MSGBOX_NPC
	goto RustboroCity_Gym_EventScript_Roxanne_New_1

RustboroCity_Gym_EventScript_Roxanne_New_4:
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_4, MSGBOX_NPC
	goto RustboroCity_Gym_EventScript_Roxanne_New_1

RustboroCity_Gym_EventScript_Roxanne_New_6:
	goto_if_set FLAG_HARD_MODE, RustboroCity_Gym_EventScript_Roxanne_New_4
	goto RustboroCity_Gym_EventScript_Roxanne_New_5

RustboroCity_Gym_EventScript_Roxanne_New_13:
	goto_if_set FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_Roxanne_New_3
	goto RustboroCity_Gym_EventScript_Roxanne_New_8

RustboroCity_Gym_EventScript_Roxanne_New_16:
	goto_if_unset FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_Roxanne_New_2
	goto RustboroCity_Gym_EventScript_Roxanne_New_14

RustboroCity_Gym_EventScript_Roxanne_New_19:
	cleartrainerflag TRAINER_JOSH
	cleartrainerflag TRAINER_TOMMY
	cleartrainerflag TRAINER_MARC
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_3, MSGBOX_NPC
	goto RustboroCity_Gym_EventScript_Roxanne_New_1


RustboroCity_Gym_EventScript_Roxanne_Battle_New::
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Roxanne_Battle_New_2
	goto_if_set FLAG_HARD_MODE, RustboroCity_Gym_EventScript_Roxanne_Battle_New_10
	goto_if_set FLAG_NORMAL_MODE, RustboroCity_Gym_EventScript_Roxanne_Battle_New_11
	switch VAR_NUM_BADGES
	case 0, RustboroCity_Gym_EventScript_Roxanne_Battle_New_66
	case 1, RustboroCity_Gym_EventScript_Roxanne_Battle_New_67
	case 2, RustboroCity_Gym_EventScript_Roxanne_Battle_New_68
	case 3, RustboroCity_Gym_EventScript_Roxanne_Battle_New_69
	case 4, RustboroCity_Gym_EventScript_Roxanne_Battle_New_70
	case 5, RustboroCity_Gym_EventScript_Roxanne_Battle_New_71
	case 6, RustboroCity_Gym_EventScript_Roxanne_Battle_New_72
	case 7, RustboroCity_Gym_EventScript_Roxanne_Battle_New_73
	goto_if_set FLAG_SYS_GAME_CLEAR, RustboroCity_Gym_EventScript_Roxanne_Battle_New_90
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneDefeat
RustboroCity_Gym_EventScript_Roxanne_Battle_New_1:
	return

RustboroCity_Gym_EventScript_Roxanne_Battle_New_2:
	goto_if_set FLAG_HARD_MODE, RustboroCity_Gym_EventScript_Roxanne_Battle_New_5
	goto_if_set FLAG_NORMAL_MODE, RustboroCity_Gym_EventScript_Roxanne_Battle_New_6
	switch VAR_NUM_BADGES
	case 0, RustboroCity_Gym_EventScript_Roxanne_Battle_New_36
	case 1, RustboroCity_Gym_EventScript_Roxanne_Battle_New_37
	case 2, RustboroCity_Gym_EventScript_Roxanne_Battle_New_38
	case 3, RustboroCity_Gym_EventScript_Roxanne_Battle_New_39
	case 4, RustboroCity_Gym_EventScript_Roxanne_Battle_New_40
	case 5, RustboroCity_Gym_EventScript_Roxanne_Battle_New_41
	case 6, RustboroCity_Gym_EventScript_Roxanne_Battle_New_42
	case 7, RustboroCity_Gym_EventScript_Roxanne_Battle_New_43
	goto_if_set FLAG_SYS_GAME_CLEAR, RustboroCity_Gym_EventScript_Roxanne_Battle_New_81
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_5:
	switch VAR_NUM_BADGES
	case 0, RustboroCity_Gym_EventScript_Roxanne_Battle_New_16
	case 1, RustboroCity_Gym_EventScript_Roxanne_Battle_New_17
	case 2, RustboroCity_Gym_EventScript_Roxanne_Battle_New_18
	case 3, RustboroCity_Gym_EventScript_Roxanne_Battle_New_19
	case 4, RustboroCity_Gym_EventScript_Roxanne_Battle_New_20
	case 5, RustboroCity_Gym_EventScript_Roxanne_Battle_New_21
	case 6, RustboroCity_Gym_EventScript_Roxanne_Battle_New_22
	case 7, RustboroCity_Gym_EventScript_Roxanne_Battle_New_23
	goto_if_set FLAG_SYS_GAME_CLEAR, RustboroCity_Gym_EventScript_Roxanne_Battle_New_75
	trainerbattle_no_intro TRAINER_ROXANNE_5, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_6:
	switch VAR_NUM_BADGES
	case 0, RustboroCity_Gym_EventScript_Roxanne_Battle_New_26
	case 1, RustboroCity_Gym_EventScript_Roxanne_Battle_New_27
	case 2, RustboroCity_Gym_EventScript_Roxanne_Battle_New_28
	case 3, RustboroCity_Gym_EventScript_Roxanne_Battle_New_29
	case 4, RustboroCity_Gym_EventScript_Roxanne_Battle_New_30
	case 5, RustboroCity_Gym_EventScript_Roxanne_Battle_New_31
	case 6, RustboroCity_Gym_EventScript_Roxanne_Battle_New_32
	case 7, RustboroCity_Gym_EventScript_Roxanne_Battle_New_33
	goto_if_set FLAG_SYS_GAME_CLEAR, RustboroCity_Gym_EventScript_Roxanne_Battle_New_78
	trainerbattle_no_intro TRAINER_ROXANNE_5, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_10:
	switch VAR_NUM_BADGES
	case 0, RustboroCity_Gym_EventScript_Roxanne_Battle_New_46
	case 1, RustboroCity_Gym_EventScript_Roxanne_Battle_New_47
	case 2, RustboroCity_Gym_EventScript_Roxanne_Battle_New_48
	case 3, RustboroCity_Gym_EventScript_Roxanne_Battle_New_49
	case 4, RustboroCity_Gym_EventScript_Roxanne_Battle_New_50
	case 5, RustboroCity_Gym_EventScript_Roxanne_Battle_New_51
	case 6, RustboroCity_Gym_EventScript_Roxanne_Battle_New_52
	case 7, RustboroCity_Gym_EventScript_Roxanne_Battle_New_53
	goto_if_set FLAG_SYS_GAME_CLEAR, RustboroCity_Gym_EventScript_Roxanne_Battle_New_84
	trainerbattle_no_intro TRAINER_ROXANNE_5, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_11:
	switch VAR_NUM_BADGES
	case 0, RustboroCity_Gym_EventScript_Roxanne_Battle_New_56
	case 1, RustboroCity_Gym_EventScript_Roxanne_Battle_New_57
	case 2, RustboroCity_Gym_EventScript_Roxanne_Battle_New_58
	case 3, RustboroCity_Gym_EventScript_Roxanne_Battle_New_59
	case 4, RustboroCity_Gym_EventScript_Roxanne_Battle_New_60
	case 5, RustboroCity_Gym_EventScript_Roxanne_Battle_New_61
	case 6, RustboroCity_Gym_EventScript_Roxanne_Battle_New_62
	case 7, RustboroCity_Gym_EventScript_Roxanne_Battle_New_63
	goto_if_set FLAG_SYS_GAME_CLEAR, RustboroCity_Gym_EventScript_Roxanne_Battle_New_87
	trainerbattle_no_intro TRAINER_ROXANNE_5, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_16:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_17:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_18:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_19:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_20:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_21:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_22:
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_23:
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_26:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_27:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_28:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_29:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_30:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_31:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_32:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_33:
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_36:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_37:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_38:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_39:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_40:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_41:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_42:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_43:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_46:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_47:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_48:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_49:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_50:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_51:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_52:
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_53:
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_56:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_57:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_58:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_59:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_60:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_61:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_62:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_63:
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_66:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_67:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_68:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_69:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_70:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_71:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_72:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_73:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_75:
	random 5
	switch VAR_RESULT
	case 0, RustboroCity_Gym_EventScript_Roxanne_Battle_New_94
	case 1, RustboroCity_Gym_EventScript_Roxanne_Battle_New_95
	case 2, RustboroCity_Gym_EventScript_Roxanne_Battle_New_96
	case 3, RustboroCity_Gym_EventScript_Roxanne_Battle_New_97
	case 4, RustboroCity_Gym_EventScript_Roxanne_Battle_New_98
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_78:
	random 5
	switch VAR_RESULT
	case 0, RustboroCity_Gym_EventScript_Roxanne_Battle_New_100
	case 1, RustboroCity_Gym_EventScript_Roxanne_Battle_New_101
	case 2, RustboroCity_Gym_EventScript_Roxanne_Battle_New_102
	case 3, RustboroCity_Gym_EventScript_Roxanne_Battle_New_103
	case 4, RustboroCity_Gym_EventScript_Roxanne_Battle_New_104
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_81:
	random 5
	switch VAR_RESULT
	case 0, RustboroCity_Gym_EventScript_Roxanne_Battle_New_106
	case 1, RustboroCity_Gym_EventScript_Roxanne_Battle_New_107
	case 2, RustboroCity_Gym_EventScript_Roxanne_Battle_New_108
	case 3, RustboroCity_Gym_EventScript_Roxanne_Battle_New_109
	case 4, RustboroCity_Gym_EventScript_Roxanne_Battle_New_110
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_84:
	random 5
	switch VAR_RESULT
	case 0, RustboroCity_Gym_EventScript_Roxanne_Battle_New_112
	case 1, RustboroCity_Gym_EventScript_Roxanne_Battle_New_113
	case 2, RustboroCity_Gym_EventScript_Roxanne_Battle_New_114
	case 3, RustboroCity_Gym_EventScript_Roxanne_Battle_New_115
	case 4, RustboroCity_Gym_EventScript_Roxanne_Battle_New_116
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_87:
	random 5
	switch VAR_RESULT
	case 0, RustboroCity_Gym_EventScript_Roxanne_Battle_New_118
	case 1, RustboroCity_Gym_EventScript_Roxanne_Battle_New_119
	case 2, RustboroCity_Gym_EventScript_Roxanne_Battle_New_120
	case 3, RustboroCity_Gym_EventScript_Roxanne_Battle_New_121
	case 4, RustboroCity_Gym_EventScript_Roxanne_Battle_New_122
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_90:
	random 5
	switch VAR_RESULT
	case 0, RustboroCity_Gym_EventScript_Roxanne_Battle_New_124
	case 1, RustboroCity_Gym_EventScript_Roxanne_Battle_New_125
	case 2, RustboroCity_Gym_EventScript_Roxanne_Battle_New_126
	case 3, RustboroCity_Gym_EventScript_Roxanne_Battle_New_127
	case 4, RustboroCity_Gym_EventScript_Roxanne_Battle_New_128
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_94:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_95:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_96:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_97:
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_98:
	trainerbattle_no_intro TRAINER_ROXANNE_5, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_100:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_101:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_102:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_103:
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_104:
	trainerbattle_no_intro TRAINER_ROXANNE_5, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_106:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_107:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_108:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_109:
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_110:
	trainerbattle_no_intro TRAINER_ROXANNE_5, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_112:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_113:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_114:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_115:
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_116:
	trainerbattle_no_intro TRAINER_ROXANNE_5, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_118:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_119:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_120:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_121:
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_122:
	trainerbattle_no_intro TRAINER_ROXANNE_5, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_124:
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_125:
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_126:
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_127:
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_128:
	trainerbattle_no_intro TRAINER_ROXANNE_5, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1


RustboroCity_Gym_EventScript_Roxanne_Give_Gifts::
	checkitem ITEM_TM69_ROCK_POLISH, 1
	compare VAR_NUM_BADGES, 2
	goto_if_ge RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_3
RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_1:
	checkitem ITEM_TM110_STEALTH_ROCK, 1
	compare VAR_NUM_BADGES, 4
	goto_if_ge RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_8
RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_6:
	checkitem ITEM_TM107_POWER_GEM, 1
	compare VAR_NUM_BADGES, 6
	goto_if_ge RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_13
RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_11:
	checkitem ITEM_TM71_STONE_EDGE, 1
	compare VAR_NUM_BADGES, 8
	goto_if_ge RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_18
RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_16:
	compare VAR_NUM_BADGES, 7
	goto_if_ge RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_25
RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_24:
	goto_if_unset FLAG_TEMP_9, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_23
RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21:
	return

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_2:
	giveitem ITEM_TM69_ROCK_POLISH
	msgbox RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_0, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_1

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_3:
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_2
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_1

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_7:
	giveitem ITEM_TM110_STEALTH_ROCK
	msgbox RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_1, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_6

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_8:
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_7
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_6

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_12:
	giveitem ITEM_TM107_POWER_GEM
	msgbox RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_2, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_11

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_13:
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_12
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_11

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_17:
	giveitem ITEM_TM71_STONE_EDGE
	msgbox RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_3, MSGBOX_NPC
	setflag FLAG_TEMP_9
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_16

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_18:
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_17
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_16

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_22:
	msgbox RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_4, MSGBOX_NPC
	giveitem ITEM_AGGRONITE
	msgbox RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_5, MSGBOX_NPC
	setflag FLAG_GOT_AGGRONITE
	setflag FLAG_TEMP_9
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_23:
	random 7
	switch VAR_RESULT
	case 0, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_29
	case 1, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_30
	case 2, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_31
	case 3, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_32
	case 4, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_33
	case 5, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_34
	case 6, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_35
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_25:
	goto_if_unset FLAG_GOT_AGGRONITE, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_22
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_24

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_29:
	giveitem ITEM_ROCK_GEM, 2
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_30:
	giveitem ITEM_ROCKY_HELMET, 2
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_31:
	giveitem ITEM_FOCUS_SASH, 2
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_32:
	giveitem ITEM_HARD_STONE, 2
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_33:
	giveitem ITEM_FLOAT_STONE, 2
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_34:
	giveitem ITEM_METAL_COAT, 2
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_35:
	giveitem ITEM_PROTECTOR, 2
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21


RustboroCity_Gym_EventScript_GymGuide_New::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuide_New_2
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_NPC
RustboroCity_Gym_EventScript_GymGuide_New_1:
	release
	end

RustboroCity_Gym_EventScript_GymGuide_New_2:
	goto_if_unset FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_GymGuide_New_5
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_NPC
	goto RustboroCity_Gym_EventScript_GymGuide_New_1

RustboroCity_Gym_EventScript_GymGuide_New_5:
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_Gym_EventScript_GymGuide_New_8
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_2, MSGBOX_NPC
	goto RustboroCity_Gym_EventScript_GymGuide_New_1

RustboroCity_Gym_EventScript_GymGuide_New_8:
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_1, MSGBOX_NPC
	warp MAP_RUSTBORO_CITY_GYM, 255, 5, 3
	goto RustboroCity_Gym_EventScript_GymGuide_New_1


RustboroCity_Gym_EventScript_Gym_Aaron::
	lock
	faceplayer
	switch VAR_GYM_POKEMON_SPECIES
	case SPECIES_ARON, RustboroCity_Gym_EventScript_Gym_Aaron_3
	case SPECIES_LAIRON, RustboroCity_Gym_EventScript_Gym_Aaron_4
	case SPECIES_AGGRON, RustboroCity_Gym_EventScript_Gym_Aaron_5
RustboroCity_Gym_EventScript_Gym_Aaron_1:
	release
	end

RustboroCity_Gym_EventScript_Gym_Aaron_3:
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Gym_Aaron_12
RustboroCity_Gym_EventScript_Gym_Aaron_10:
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Gym_Aaron_9
RustboroCity_Gym_EventScript_Gym_Aaron_8:
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_4, MSGBOX_NPC
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_5, MSGBOX_SIGN
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_4:
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Gym_Aaron_21
RustboroCity_Gym_EventScript_Gym_Aaron_19:
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Gym_Aaron_18
RustboroCity_Gym_EventScript_Gym_Aaron_17:
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_8, MSGBOX_NPC
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_9, MSGBOX_SIGN
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_5:
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Gym_Aaron_34
RustboroCity_Gym_EventScript_Gym_Aaron_32:
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Gym_Aaron_31
RustboroCity_Gym_EventScript_Gym_Aaron_29:
	compare VAR_NUM_BADGES, 6
	goto_if_ge RustboroCity_Gym_EventScript_Gym_Aaron_28
RustboroCity_Gym_EventScript_Gym_Aaron_27:
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_14, MSGBOX_NPC
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_15, MSGBOX_SIGN
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_6:
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_0, MSGBOX_NPC
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_1, MSGBOX_SIGN
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_7:
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_2, MSGBOX_NPC
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_3, MSGBOX_SIGN
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_9:
	goto_if_set FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_Gym_Aaron_7
	goto RustboroCity_Gym_EventScript_Gym_Aaron_8

RustboroCity_Gym_EventScript_Gym_Aaron_12:
	goto_if_unset FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_Gym_Aaron_6
	goto RustboroCity_Gym_EventScript_Gym_Aaron_10

RustboroCity_Gym_EventScript_Gym_Aaron_15:
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_6, MSGBOX_NPC
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_1, MSGBOX_SIGN
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_16:
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_7, MSGBOX_NPC
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_3, MSGBOX_SIGN
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_18:
	goto_if_set FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_Gym_Aaron_16
	goto RustboroCity_Gym_EventScript_Gym_Aaron_17

RustboroCity_Gym_EventScript_Gym_Aaron_21:
	goto_if_unset FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_Gym_Aaron_15
	goto RustboroCity_Gym_EventScript_Gym_Aaron_19

RustboroCity_Gym_EventScript_Gym_Aaron_24:
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_10, MSGBOX_NPC
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_11, MSGBOX_SIGN
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_25:
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_12, MSGBOX_NPC
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_3, MSGBOX_SIGN
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_26:
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_10, MSGBOX_NPC
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_13, MSGBOX_SIGN
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_28:
	goto_if_unset FLAG_GOT_AGGRONITE, RustboroCity_Gym_EventScript_Gym_Aaron_26
	goto RustboroCity_Gym_EventScript_Gym_Aaron_27

RustboroCity_Gym_EventScript_Gym_Aaron_31:
	goto_if_set FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_Gym_Aaron_25
	goto RustboroCity_Gym_EventScript_Gym_Aaron_29

RustboroCity_Gym_EventScript_Gym_Aaron_34:
	goto_if_unset FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_Gym_Aaron_24
	goto RustboroCity_Gym_EventScript_Gym_Aaron_32


RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species::
	switch VAR_NUM_BADGES
	case 0, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_3
	case 1, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_4
	case 2, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_5
	case 3, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_6
	case 4, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_7
	case 5, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_8
	case 6, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_9
	case 7, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_10
	case 8, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_11
RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1:
	goto_if_set FLAG_NO_EVOLUTION_MODE, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_13
RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_12:
	return

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_3:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_ARON
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_ARON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_4:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_ARON
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_ARON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_5:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_ARON
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_ARON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_6:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_LAIRON
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_LAIRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_7:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_LAIRON
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_LAIRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_8:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_AGGRON
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_AGGRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_9:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_AGGRON
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_AGGRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_10:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_AGGRON
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_AGGRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_11:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_AGGRON
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_AGGRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_13:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_ARON
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_ARON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_12


EventScript_Gym_Attendant_Call_Text_0:
	.string "Scott: Congratulations\n"
	.string "{PLAYER} on winning your first\l"
	.string "Gym battle, its just your first\l"
	.string "step to become the Champion,\l"
	.string "hang in there.\p"
	.string "Check your Achievements, there is\n"
	.string "a little gift that should be\l"
	.string "helpful to you there.\p"
	.string "Good Luck!$"

EventScript_Gym_Attendant_Call_Text_1:
	.string "Scott: Congratulations\n"
	.string "{PLAYER} on winning your second\l"
	.string "Gym badge, I knew you had it in\l"
	.string "you.\p"
	.string "Did you know that you can change\n"
	.string "your outfit in any Pokémon\l"
	.string "Center?\p"
	.string "Good luck on your journey!$"

EventScript_Gym_Attendant_Call_Text_2:
	.string "Scott: {PLAYER} you just won\n"
	.string "your third badge, that was really\l"
	.string "fast!\p"
	.string "Did you know that by making your\n"
	.string "first Pokémon hold an everstone\l"
	.string "or an eviolite you will only find\l"
	.string "first stage Pokémon in the wild?\p"
	.string "Take care.$"

EventScript_Gym_Attendant_Call_Text_3:
	.string "Scott: Congratulations on your\n"
	.string "Fourth badge {PLAYER}, you're\l"
	.string "halfway there!\p"
	.string "I heard that the Lilycove's\n"
	.string "department store now sells\l"
	.string "Evolution items maybe I should\l"
	.string "buy some of them.\p"
	.string "I have to go now, keep it up!$"

EventScript_Gym_Attendant_Call_Text_4:
	.string "Scott: You now have 5 badges\n"
	.string "{PLAYER}, that's great!\p"
	.string "It seems like the Lilycove's\n"
	.string "department store now has some\l"
	.string "great held items in stock, you\l"
	.string "should buy some of them!\p"
	.string "See you later!$"

EventScript_Gym_Attendant_Call_Text_5:
	.string "Scott: Congratulations on your\n"
	.string "6th badge {PLAYER}, you're\l"
	.string "nearly a champion.\p"
	.string "I heard that the Blue lady next to\n"
	.string "the Nurse Joy can now teach your\l"
	.string "Pokémon some unique Egg moves,\l"
	.string "they should be helpful on your\l"
	.string "next Gym, give them a try!\p"
	.string "Good Luck!$"

EventScript_Gym_Attendant_Call_Text_6:
	.string "Scott: 7 badges, great just great,\n"
	.string "{PLAYER} there is only one to\l"
	.string "go!\p"
	.string "The Blue haired lady in the\n"
	.string "Pokemon Center is now teaching\l"
	.string "trainers some strong tutor moves\l"
	.string "they cost a little but they are\l"
	.string "worth it, you should go and check\l"
	.string "them yourself.\p"
	.string "By the way, I heard you got a Mega\n"
	.string "Ring, you should now be able to\l"
	.string "Mega Evolve your Pokémon, you can\l"
	.string "do so by pressing the Start\l"
	.string "Button while selecting your moves\l"
	.string "in battle.\p"
	.string "One to go kid, I'm waiting the good\n"
	.string "news, see you soon!$"

EventScript_Gym_Attendant_Call_Text_7:
	.string "Scott: {PLAYER} Wow! you now\n"
	.string "have all the Gym badges in Hoenn,\l"
	.string "that's great!\p"
	.string "I will wait for you in the Pokémon\n"
	.string "center on Evergrade City before\l"
	.string "you tackle the Victory Road and\l"
	.string "the Pokémon League.\p"
	.string "There is a green haired trainer\n"
	.string "here that seems really strong\l"
	.string "maybe you can fight him!\p"
	.string "Make sure you check the TM tutor\n"
	.string "with the Blue Nurse in the\l"
	.string "Pokemon Center it should help you\l"
	.string "in this tought challenge!\p"
	.string "See you soon!$"

RustboroCity_Gym_EventScript_Roxanne_New_Text_0:
	.string "Please take these items with you.$"

RustboroCity_Gym_EventScript_Roxanne_New_Text_1:
	.string "Roxanne: Come back tomorrow so we can\n"
	.string "battle again.$"

RustboroCity_Gym_EventScript_Roxanne_New_Text_2:
	.string "Roxanne: My Pokémon are tired for\n"
	.string "today, but the other trainers here\l"
	.string "need training, do you want to try\l"
	.string "battling them again?$"

RustboroCity_Gym_EventScript_Roxanne_New_Text_3:
	.string "Roxanne: I will tell them to get ready,\n"
	.string "so take care on your way out.$"

RustboroCity_Gym_EventScript_Roxanne_New_Text_4:
	.string "Roxanne: Sorry, but you need to defeat\n"
	.string "every trainer on this Gym before\l"
	.string "battling me$"

RustboroCity_Gym_EventScript_Roxanne_New_Text_5:
	.string "Please take these items with you, too,$"

RustboroCity_Gym_EventScript_Roxanne_New_Text_6:
	.string "That Technical Machine contains the\n"
	.string "move Rock Tomb.\p"
	.string "It not only inflicts damage by dropping\n"
	.string "rocks, it also lowers the target Speed.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a Pokémon.\p"
	.string "A TM can be used indefinitely, so use it\n"
	.string "without thinking it twice.$"

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_0:
	.string "Roxanne: This move raises the speed of\n"
	.string "Rock-type Pokémon by 2 stages, its\l"
	.string "really useful.$"

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_1:
	.string "Roxanne: This move does damage every\n"
	.string "time an opposing Pokémon enters to the\l"
	.string "battle, try it at the start of the\l"
	.string "battle.$"

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_2:
	.string "Roxanne: This is a Rock-type damage\n"
	.string "move made specially for Rock-type\l"
	.string "Pokémon with high Special Attack.$"

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_3:
	.string "Roxanne: This is a Rock-type damage\n"
	.string "move with a high base attack, but\l"
	.string "misses a lot too so be careful when\l"
	.string "using it.$"

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_4:
	.string "Roxanne: Take this as an special gift\n"
	.string "from me, it's an Aggronite.$"

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_5:
	.string "Make an Aggron hold it to unleash its\n"
	.string "real potential.$"

RustboroCity_Gym_EventScript_GymGuide_New_Text_0:
	.string "Guide: Hello {PLAYER}, I see you came\n"
	.string "to this Gym again, do you want me to\l"
	.string "take you to the Leader?$"

RustboroCity_Gym_EventScript_GymGuide_New_Text_1:
	.string "Let me tell the leader that you are\n"
	.string "here.$"

RustboroCity_Gym_EventScript_GymGuide_New_Text_2:
	.string "I see, you can also go throught the Gym\n"
	.string "if you want.$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_0:
	.string "Aron: ron!$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_1:
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, its skin look's really\l"
	.string "shiny.$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_2:
	.string "Aron: ron...$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_3:
	.string "The Pokémon seems tired after today's\n"
	.string "battle, its better to let it rest.$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_4:
	.string "Aron: ron?$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_5:
	.string "The Pokémon is currently eating a little\n"
	.string "chunk of metal.$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_6:
	.string "Lairon: ron!$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_7:
	.string "Lairon: ron...$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_8:
	.string "Lairon: ron?$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_9:
	.string "The Pokémon is currently eating a chunk\n"
	.string "of metal.$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_10:
	.string "Aggron: ron!$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_11:
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, its skin look's really\l"
	.string "tought.$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_12:
	.string "Aggron: ron...$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_13:
	.string "The Pokémon is currently looking at a\n"
	.string "shiny rock on its arm with\l"
	.string "determination.$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_14:
	.string "Aggron: ron?$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_15:
	.string "The Pokémon is currently eating what it\n"
	.string "looks to be a big rock.$"
