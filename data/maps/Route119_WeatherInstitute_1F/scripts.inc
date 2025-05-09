# 1 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
.set LOCALID_LITTLE_BOY, 5
# 3 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 4 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_MapScripts:: @ 826FA86
# 5 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_1F_OnTransition
# 6 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.byte 0
# 7 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 8 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_OnTransition: @ 826FA8C
# 9 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 10 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 11 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_SetLittleBoyPos:: @ 826FA98
# 12 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setobjectxyperm LOCALID_LITTLE_BOY, 0, 5
# 13 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setobjectmovementtype LOCALID_LITTLE_BOY, MOVEMENT_TYPE_FACE_RIGHT
# 14 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	return
# 15 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 16 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LittleBoy:: @ 826FAA4
# 17 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 18 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 19 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	special GetPlayerBigGuyGirlString
# 20 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_WowYoureStrong, MSGBOX_DEFAULT
# 21 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 22 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 23 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 24 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LittleBoyTeamAquaHere:: @ 826FABE
# 25 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs, MSGBOX_DEFAULT
# 26 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 27 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 28 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 29 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker1:: @ 826FAC8
# 30 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 31 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 32 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_1F_EventScript_StudyingRain
# 33 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 34 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
# 35 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated
# 36 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_0x8004, 2  @ Both defeated
# 37 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_1F_EventScript_StudyingRain
# 38 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather, MSGBOX_DEFAULT
# 39 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 40 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 41 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 42 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_LegendaryDefeated:: @ 826FAFF
# 43 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	addvar VAR_0x8004, 1
# 44 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	return
# 45 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 46 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_StudyingRain:: @ 826FB05
# 47 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_ProfStudyingRain, MSGBOX_DEFAULT
# 48 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
# 49 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 50 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 51 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_InstituteWorker2:: @ 826FB0F
# 52 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo, MSGBOX_NPC
# 53 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 54 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 55 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Bed:: @ 826FB18
# 56 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lockall
# 57 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_TakeRestInBed, MSGBOX_DEFAULT
# 58 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	closemessage
# 59 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_set FLAG_IS_DAYNIGHT_INVERTED, Route119_WeatherInstitute_1F_EventScript_Bed2
# 60 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setflag FLAG_IS_DAYNIGHT_INVERTED
# 61 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 62 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	releaseall
# 63 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 64 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	
# 65 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Bed2:: @ 826FB18
# 66 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	clearflag FLAG_IS_DAYNIGHT_INVERTED
# 67 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 68 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	releaseall
# 69 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 70 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 71 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt1:: @ 826FB29
# 72 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Route119_WeatherInstitute_1F_Text_Grunt1Intro, Route119_WeatherInstitute_1F_Text_Grunt1Defeat
# 73 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 75 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 76 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_EventScript_Grunt4:: @ 826FB40
# 77 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Route119_WeatherInstitute_1F_Text_Grunt4Intro, Route119_WeatherInstitute_1F_Text_Grunt4Defeat
# 78 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	end
# 80 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 81 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Intro: @ 826FB57
# 82 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The Boss got interested in\n"
# 83 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "the research they have going here,\l"
# 84 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "so he sent us out.\p"
# 85 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "You quit meddling!$"
# 86 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 87 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1Defeat: @ 826FBBB
# 88 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Blast it…\n"
# 89 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Blasted by a kid…$"
# 90 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 91 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt1PostBattle: @ 826FBD7
# 92 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Our Boss knows everything.\p"
# 93 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "But I'm just a Grunt. What would I know\n"
# 94 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "about what he's thinking?$"
# 95 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 96 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Intro: @ 826FC34
# 97 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Huh?\n"
# 98 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "What's a kid doing here?$"
# 99 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 100 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4Defeat: @ 826FC52
# 101 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Huh?\n"
# 102 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I lost?!$"
# 103 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 104 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_Grunt4PostBattle: @ 826FC60
# 105 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Oh, no…\n"
# 106 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I'll catch an earful for losing to a kid…\p"
# 107 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I should just take a nap in the bed…$"
# 108 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 109 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_EveryoneWentUpstairs: @ 826FCB7
# 110 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "While I was sleeping, everyone went\n"
# 111 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "upstairs!$"
# 112 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 113 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WowYoureStrong: @ 826FCE5
# 114 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Wow, Winona is really strong!\p"
# 115 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "I wish I could be a Pokémon Trainer\n"
# 116 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "like her!$"
# 117 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 118 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_ProfStudyingRain: @ 826FD2E
# 119 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The Professor loves rain.\n"
# 120 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "That's a fact.\p"
# 121 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "But if it keeps raining, people will be in\n"
# 122 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "trouble. That's another fact.\p"
# 123 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "And thus, the Professor is studying\n"
# 124 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "if the rain can be put to good use.$"
# 125 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 126 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_NoticingAbnormalWeather: @ 826FDE8
# 127 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "On the 2nd floor of the Institute,\n"
# 128 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "we study the weather patterns over\l"
# 129 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "the Hoenn region.\p"
# 130 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "We've been noticing temporary and\n"
# 131 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "isolated cases of droughts and\l"
# 132 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "heavy rain lately…$"
# 133 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 134 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_WhatWereAquasUpTo: @ 826FE94
# 135 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Hello!\n"
# 136 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Welcome to the Weather Institute!$"
# 137 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"

# 138 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
Route119_WeatherInstitute_1F_Text_TakeRestInBed: @ 826FEFC
# 139 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "There's a bed…\n"
# 140 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Let's take a rest.$"

Route119_WeatherInstitute_1F_EventScript_Girl::
# 144 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 145 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 146 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_EventScript_Girl_Text_0
# 147 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
	end


Route119_WeatherInstitute_1F_EventScript_InstituteWorker::
# 152 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 153 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 154 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Text_0
# 155 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
	end


Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet::
# 160 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 161 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 162 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	checkitem ITEM_DAMP_ROCK, 1
# 163 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_7
Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_5:
# 178 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_3
# 181 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_5
Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_1:
# 185 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
	end

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_2:
# 164 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_0, MSGBOX_YESNO
# 166 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_11
# 176 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_3
	goto Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_1

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_3:
# 179 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_4
	goto Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_1

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_6:
# 163 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_unset FLAG_WEATHER_INSTITUTE_ROCKY_HELMET, Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_2
	goto Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_5

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_7:
# 163 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_ne Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_6
	goto Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_5

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_11:
# 167 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_1
# 169 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	removeitem ITEM_DAMP_ROCK
# 170 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setflag FLAG_WEATHER_INSTITUTE_ROCKY_HELMET
# 171 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	giveitem ITEM_ROCKY_HELMET
# 172 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 173 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_2
	goto Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_1


Route119_WeatherInstitute_1F_EventScript_Kid::
# 190 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	lock
# 191 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	faceplayer
# 192 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_EventScript_Kid_Text_0
# 194 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	goto_if_set FLAG_ENABLE_WINONA_MATCH_CALL, Route119_WeatherInstitute_1F_EventScript_Kid_2
Route119_WeatherInstitute_1F_EventScript_Kid_1:
# 198 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	release
	end

Route119_WeatherInstitute_1F_EventScript_Kid_2:
# 195 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	msgbox Route119_WeatherInstitute_1F_EventScript_Kid_Text_1
	goto Route119_WeatherInstitute_1F_EventScript_Kid_1


Route119_WeatherInstitute_1F_EventScript_Girl_Text_0:
# 146 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "We observe the weather in the Hoenn\n"
	.string "region with Pokémon$"

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Text_0:
# 154 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Some pokemon are known to alter the\n"
	.string "weather with their presence alone,\l"
	.string "thats amazing!$"

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_0:
# 164 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Oh?, that item you have... That's a Damp\n"
	.string "Rock!\p"
	.string "That would sure help the professor.\n"
	.string "Would you trade your Damp Rock for a\l"
	.string "Rocky Helmet?$"

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_1:
# 167 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Yes! Thanks. This will help our research\n"
	.string "a lot!\p"
	.string "Take this item as a token of my\n"
	.string "appreciation for your generosity.$"

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_2:
# 173 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "This item was given to me while we were\n"
	.string "remodeling this place!\p"
	.string "Using this should help you in battle.$"

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_3:
# 176 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Let me know if you reconsider it.$"

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_4:
# 179 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "This will help the profesor on his\n"
	.string "research!$"

Route119_WeatherInstitute_1F_EventScript_InstituteWorker_Rocky_Helmet_Text_5:
# 181 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "The Professor loves rain. That's a fact.\p"
	.string "But if it keeps raining, people will be in\n"
	.string "trouble. That's another fact.\p"
	.string "And thus, the Professor is studying if\n"
	.string "the rain can be put to good use.$"

Route119_WeatherInstitute_1F_EventScript_Kid_Text_0:
# 192 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "Wow, Winona is really strong!.\p"
	.string "I wish I could be a Pokémon Trainer like\n"
	.string "her!$"

Route119_WeatherInstitute_1F_EventScript_Kid_Text_1:
# 195 "data/maps/Route119_WeatherInstitute_1F/scripts.pory"
	.string "What?! you defeated her!.\n"
	.string "Don't be silly, nobody can beat Winona!$"
