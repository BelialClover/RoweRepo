.set LOCALID_LITTLE_BOY, 5

Route119_WeatherInstitute_1F_MapScripts:: @ 826FA86
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_1F_OnTransition
	.byte 0

Route119_WeatherInstitute_1F_OnTransition: @ 826FA8C
	end

Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos:: @ 826FA98
	setobjectxyperm LOCALID_LITTLE_BOY, 0, 5
	setobjectmovementtype LOCALID_LITTLE_BOY, MOVEMENT_TYPE_FACE_RIGHT
	return

Route119_WeatherInstitute_1F_EventScript_LittleBoy:: @ 826FAA4
	lock
	faceplayer
	special GetPlayerBigGuyGirlString
	msgbox Route119_WeatherInstitute_1F_Text_WowYoureStrong, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere:: @ 826FABE
	msgbox Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_InstituteWorker1:: @ 826FAC8
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_1F_EventScript_StudyingRain
	setvar VAR_0x8004, 0
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
	compare VAR_0x8004, 2  @ Both defeated
	goto_if_eq Route119_WeatherInstitute_1F_EventScript_StudyingRain
	msgbox Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated:: @ 826FAFF
	addvar VAR_0x8004, 1
	return

Route119_WeatherInstitute_1F_EventScript_StudyingRain:: @ 826FB05
	msgbox Route119_WeatherInstitute_1F_Text_ProfStudyingRain, MSGBOX_DEFAULT
	release
	end

Route119_WeatherInstitute_1F_EventScript_InstituteWorker2:: @ 826FB0F
	msgbox Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo, MSGBOX_NPC
	end

Route119_WeatherInstitute_1F_EventScript_Bed:: @ 826FB18
	lockall
	msgbox Route119_WeatherInstitute_1F_Text_TakeRestInBed, MSGBOX_DEFAULT
	closemessage
	goto_if_set FLAG_IS_DAYNIGHT_INVERTED, Route119_WeatherInstitute_1F_EventScript_Bed2
	setflag FLAG_IS_DAYNIGHT_INVERTED
	call Common_EventScript_OutOfCenterPartyHeal
	releaseall
	end
	
Route119_WeatherInstitute_1F_EventScript_Bed2:: @ 826FB18
	clearflag FLAG_IS_DAYNIGHT_INVERTED
	call Common_EventScript_OutOfCenterPartyHeal
	releaseall
	end

Route119_WeatherInstitute_1F_EventScript_Grunt1:: @ 826FB29
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Route119_WeatherInstitute_1F_Text_Grunt1Intro, Route119_WeatherInstitute_1F_Text_Grunt1Defeat
	msgbox Route119_WeatherInstitute_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_1F_EventScript_Grunt4:: @ 826FB40
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Route119_WeatherInstitute_1F_Text_Grunt4Intro, Route119_WeatherInstitute_1F_Text_Grunt4Defeat
	msgbox Route119_WeatherInstitute_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

Route119_WeatherInstitute_1F_Text_Grunt1Intro: @ 826FB57
	.string "The Boss got interested in\n"
	.string "the research they have going here,\l"
	.string "so he sent us out.\p"
	.string "You quit meddling!$"

Route119_WeatherInstitute_1F_Text_Grunt1Defeat: @ 826FBBB
	.string "Blast it…\n"
	.string "Blasted by a kid…$"

Route119_WeatherInstitute_1F_Text_Grunt1PostBattle: @ 826FBD7
	.string "Our Boss knows everything.\p"
	.string "But I'm just a Grunt. What would I know\n"
	.string "about what he's thinking?$"

Route119_WeatherInstitute_1F_Text_Grunt4Intro: @ 826FC34
	.string "Huh?\n"
	.string "What's a kid doing here?$"

Route119_WeatherInstitute_1F_Text_Grunt4Defeat: @ 826FC52
	.string "Huh?\n"
	.string "I lost?!$"

Route119_WeatherInstitute_1F_Text_Grunt4PostBattle: @ 826FC60
	.string "Oh, no…\n"
	.string "I'll catch an earful for losing to a kid…\p"
	.string "I should just take a nap in the bed…$"

Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs: @ 826FCB7
	.string "While I was sleeping, everyone went\n"
	.string "upstairs!$"

Route119_WeatherInstitute_1F_Text_WowYoureStrong: @ 826FCE5
	.string "Wow, Winona is really strong!\p"
	.string "I wish I could be a Pokémon Trainer\n"
	.string "like her!$"

Route119_WeatherInstitute_1F_Text_ProfStudyingRain: @ 826FD2E
	.string "The Professor loves rain.\n"
	.string "That's a fact.\p"
	.string "But if it keeps raining, people will be in\n"
	.string "trouble. That's another fact.\p"
	.string "And thus, the Professor is studying\n"
	.string "if the rain can be put to good use.$"

Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather: @ 826FDE8
	.string "On the 2nd floor of the Institute,\n"
	.string "we study the weather patterns over\l"
	.string "the Hoenn region.\p"
	.string "We've been noticing temporary and\n"
	.string "isolated cases of droughts and\l"
	.string "heavy rain lately…$"

Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo: @ 826FE94
	.string "Hello!\n"
	.string "Welcome to the Weather Institute!$"

Route119_WeatherInstitute_1F_Text_TakeRestInBed: @ 826FEFC
	.string "There's a bed…\n"
	.string "Let's take a rest.$"

Route119_WeatherInstitute_1F_EventScript_Girl::
	lock
	faceplayer
	msgbox Route119_WeatherInstitute_1F_EventScript_Girl_Text_0
	release
	end


Route119_WeatherInstitute_1F_EventScript_InstituteWorker::
	lock
	faceplayer
	msgbox Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Text_0
	release
	end


Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet::
	lock
	faceplayer
	checkitem ITEM_DAMP_ROCK, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_7
Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_5:
	compare VAR_TEMP_1, 1
	goto_if_eq Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_3
	msgbox Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_5
Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_1:
	release
	end

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_2:
	msgbox Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_11
	msgbox Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_3
	goto Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_1

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_3:
	msgbox Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_4
	goto Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_1

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_6:
	goto_if_unset FLAG_WEATHER_INSTITUTE_ROCKY_HELMET, Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_2
	goto Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_5

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_7:
	compare VAR_TEMP_1, 1
	goto_if_ne Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_6
	goto Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_5

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_11:
	msgbox Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_1
	removeitem ITEM_DAMP_ROCK
	setflag FLAG_WEATHER_INSTITUTE_ROCKY_HELMET
	giveitem ITEM_ROCKY_HELMET
	setvar VAR_TEMP_1, 1
	msgbox Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_2
	goto Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_1


Route119_WeatherInstitute_1F_EventScript_Kid::
	lock
	faceplayer
	msgbox Route119_WeatherInstitute_1F_EventScript_Kid_Text_0
	goto_if_set FLAG_RECEIVED_TM04, Route119_WeatherInstitute_1F_EventScript_Kid_2
Route119_WeatherInstitute_1F_EventScript_Kid_1:
	release
	end

Route119_WeatherInstitute_1F_EventScript_Kid_2:
	msgbox Route119_WeatherInstitute_1F_EventScript_Kid_Text_1
	goto Route119_WeatherInstitute_1F_EventScript_Kid_1


Route119_WeatherInstitute_1F_EventScript_Girl_Text_0:
	.string "We observe the weather in the Hoenn\n"
	.string "region with Pokémon$"

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Text_0:
	.string "Some pokemon are known to alter the\n"
	.string "weather with their presence alone,\l"
	.string "thats amazing!$"

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_0:
	.string "Oh?, that item you have... That's a Damp\n"
	.string "Rock!\p"
	.string "That would sure help the professor.\n"
	.string "Would you trade your Damp Rock for a\l"
	.string "Rocky Helmet?$"

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_1:
	.string "Yes! Thanks. This will help our research\n"
	.string "a lot!\p"
	.string "Take this item as a token of my\n"
	.string "appreciation for your generosity.$"

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_2:
	.string "This item was given to me while we were\n"
	.string "remodeling this place!\p"
	.string "Using this should help you in battle.$"

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_3:
	.string "Let me know if you reconsider it.$"

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_4:
	.string "This will help the profesor on his\n"
	.string "research!$"

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_5:
	.string "The Professor loves rain. That's a fact.\p"
	.string "But if it keeps raining, people will be in\n"
	.string "trouble. That's another fact.\p"
	.string "And thus, the Professor is studying if\n"
	.string "the rain can be put to good use.$"

Route119_WeatherInstitute_1F_EventScript_Kid_Text_0:
	.string "Wow, Winona is really strong!.\p"
	.string "I wish I could be a Pokémon Trainer like\n"
	.string "her!$"

Route119_WeatherInstitute_1F_EventScript_Kid_Text_1:
	.string "What?! you defeated her!.\n"
	.string "Don't be silly, nobody can beat Winona!$"
