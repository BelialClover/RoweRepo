# 1 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 2 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_1, 1
# 3 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_2, 2
# 4 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_SHELLY, 3
# 5 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_SCIENTIST, 5
# 6 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_3, 7
# 7 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
.set LOCALID_GRUNT_4, 8
# 8 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 9 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_MapScripts:: @ 826FF1E
# 10 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route119_WeatherInstitute_2F_OnTransition
# 11 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.byte 0
# 12 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 13 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_OnTransition: @ 826FF24
# 14 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_WEATHER_INSTITUTE_STATE, 1
# 15 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_eq Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone
# 16 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear
# 17 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 18 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 19 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaHere:: @ 826FF44
# 20 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 1, 6
# 21 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 22 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 23 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 24 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosAquaGone:: @ 826FF50
# 25 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 4, 6
# 26 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 27 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 28 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 29 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SetScientistPosGameClear:: @ 826FF5C
# 30 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 2, 2
# 31 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST, MOVEMENT_TYPE_FACE_UP
# 32 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 33 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 34 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt5:: @ 826FF68
# 35 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, Route119_WeatherInstitute_2F_Text_Grunt5Intro, Route119_WeatherInstitute_2F_Text_Grunt5Defeat
# 36 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 38 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 39 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt2:: @ 826FF7F
# 40 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Route119_WeatherInstitute_2F_Text_Grunt2Intro, Route119_WeatherInstitute_2F_Text_Grunt2Defeat
# 41 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 43 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 44 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Grunt3:: @ 826FF96
# 45 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Route119_WeatherInstitute_2F_Text_Grunt3Intro, Route119_WeatherInstitute_2F_Text_Grunt3Defeat
# 46 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 48 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 49 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_Shelly:: @ 826FFAD
# 50 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, Route119_WeatherInstitute_2F_Text_ShellyIntro, Route119_WeatherInstitute_2F_Text_ShellyDefeat, Route119_WeatherInstitute_2F_EventScript_ShellyDefeated
# 51 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 53 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 54 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ShellyDefeated:: @ 826FFC8
# 55 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ShellyPostBattle, MSGBOX_DEFAULT
# 56 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 57 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addobject LOCALID_GRUNT_3
# 58 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_GRUNT_3, Route119_WeatherInstitute_2F_Movement_GruntApproachShelly
# 59 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay
# 60 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 61 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy, MSGBOX_DEFAULT
# 62 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 63 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playse SE_PIN
# 64 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_ExclamationMark
# 65 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 66 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SHELLY, Common_Movement_Delay48
# 67 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre, MSGBOX_DEFAULT
# 69 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	closemessage
# 70 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_WEATHER_INSTITUTE_STATE, 1
# 71 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 72 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadedefaultbgm
# 73 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 74 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M
# 75 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 76 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 77 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_SHELLY
# 78 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 79 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 80 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition
# 81 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 83 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	applymovement LOCALID_SCIENTIST, Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer
# 84 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	copyobjectxytoperm LOCALID_SCIENTIST
# 86 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 87 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 88 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 89 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastform:: @ 827004D
# 90 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon, MSGBOX_DEFAULT
# 91 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CASTFORM
# 92 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	givemon SPECIES_CASTFORM, 10, ITEM_MYSTIC_WATER
# 93 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, 0
# 94 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty
# 95 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, 1
# 96 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC
# 97 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 98 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 99 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 100 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformParty:: @ 8270085
# 101 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 102 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 103 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, NO
# 104 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 105 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 106 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 107 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 108 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 109 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 110 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceiveCastformPC:: @ 82700AD
# 111 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare
# 112 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 113 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, NO
# 114 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 115 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 116 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_SendCastformToPC
# 117 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 118 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 119 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_SendCastformToPC:: @ 82700D0
# 120 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 121 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ExplainCastform
# 122 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 123 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 124 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ReceivedCastformFanfare:: @ 82700DB
# 125 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 126 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	message Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform
# 127 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitmessage
# 128 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	waitfanfare
# 129 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	bufferspeciesname 0, SPECIES_CASTFORM
# 130 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 131 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 132 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ExplainCastform:: @ 82700EA
# 133 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather, MSGBOX_DEFAULT
# 134 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_RECEIVED_CASTFORM
# 135 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 136 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 137 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 138 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather:: @ 82700F7
# 139 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather
# 140 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous, MSGBOX_DEFAULT
# 141 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 142 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 143 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 144 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_TryStartAbnormalWeather:: @ 827010A
# 145 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setvar VAR_0x8004, 0
# 146 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 147 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated
# 148 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_0x8004, 2  @ Both defeated
# 149 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather
# 150 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	call_if_unset FLAG_TEMP_2, Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather
# 151 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	specialvar VAR_RESULT, GetAbnormalWeatherMapNameAndType
# 152 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, 1
# 153 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_KyogreWeather
# 154 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_GroudonWeather, MSGBOX_DEFAULT
# 155 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 156 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 157 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 158 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_KyogreWeather:: @ 827014F
# 159 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_KyogreWeather, MSGBOX_DEFAULT
# 160 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 161 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 162 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 163 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_CreateAbnormalWeather:: @ 8270159
# 164 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	special CreateAbnormalWeatherEvent
# 165 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_TEMP_2
# 166 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 167 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 168 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_LegendaryDefeated:: @ 8270160
# 169 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	addvar VAR_0x8004, 1
# 170 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	return
# 171 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 172 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_NoAbnormalWeather:: @ 8270166
# 173 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_Text_NoAbnormalWeather, MSGBOX_DEFAULT
# 174 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
# 175 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 176 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 177 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_GruntApproachShelly: @ 8270170
# 178 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 179 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 180 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 181 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 182 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 183 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 184 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 185 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 186 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 187 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 188 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_fast_left
# 189 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 190 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 191 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ShovePlayerOutOfWay: @ 827017C
# 192 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 193 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 194 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 195 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 196 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	delay_16
# 197 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	ride_water_current_up
# 198 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_fastest_down
# 199 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 200 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 201 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_PlayerReturnToPosition: @ 8270184
# 202 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	slide_down
# 203 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_in_place_fastest_left
# 204 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 205 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 206 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Movement_ScientistApproachPlayer: @ 8270187
# 207 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 208 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 209 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	walk_right
# 210 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	step_end
# 211 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 212 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_EventScript_WeatherScientist:: @ 827018B
# 213 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 214 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 215 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_ScientistMentionWeather
# 216 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto Route119_WeatherInstitute_2F_EventScript_ReceiveCastform
# 217 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	end
# 218 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 219 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2Intro: @ 827019C
# 220 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The Institute created a type of\n"
# 221 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Pokémon that has something to do with\l"
# 222 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the weather. We're here to take them!$"
# 223 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 224 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2Defeat: @ 8270208
# 225 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Our plan's being spoiled by a kid?$"
# 226 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 227 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt2PostBattle: @ 827022B
# 228 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "If the Pokémon they made here can\n"
# 229 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "control the weather freely, then we of\l"
# 230 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Team Aqua definitely need it!$"
# 231 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 232 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Intro: @ 8270292
# 233 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We're Team Aqua!\n"
# 234 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We appear wherever anything rare is\l"
# 235 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "found!$"
# 236 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 237 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3Defeat: @ 82702CE
# 238 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You got me!$"
# 239 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 240 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt3PostBattle: @ 82702DA
# 241 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You don't have any idea what we of\n"
# 242 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Team Aqua are working towards!\l"
# 243 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You stay out of our way!$"
# 244 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 245 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Intro: @ 8270335
# 246 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Don't tell me you're looking for that\n"
# 247 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "weather Pokémon, too?\p"
# 248 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "That's a no-no!\n"
# 249 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We were here to get it first!$"
# 250 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 251 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5Defeat: @ 827039F
# 252 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Oh, will you look at my Pokémon?$"
# 253 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 254 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_Grunt5PostBattle: @ 82703C0
# 255 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Humph, so what?\n"
# 256 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What we want…\p"
# 257 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What we really want isn't here…\n"
# 258 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ihihihihi…$"
# 259 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 260 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyIntro: @ 8270409
# 261 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\p"
# 262 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're going to meddle in Team Aqua's\n"
# 263 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "affairs?\p"
# 264 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're either absolutely fearless,\n"
# 265 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "simply ignorant, or both!\p"
# 266 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're so cute, you're disgusting!\n"
# 267 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I'll put you down, kiddy!$"
# 268 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 269 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyDefeat: @ 82704BD
# 270 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\n"
# 271 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You're disgustingly strong!$"
# 272 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 273 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ShellyPostBattle: @ 82704E4
# 274 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "It's bad enough to have Team Magma\n"
# 275 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "blunder about, but now there's you!\p"
# 276 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What makes you want to sniff around\n"
# 277 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in our business, anyway?$"
# 278 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 279 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_TeamMagmaJustPassedBy: @ 8270568
# 280 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have a situation here!\p"
# 281 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "A Team Magma mob just passed\n"
# 282 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the Weather Institute.\p"
# 283 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "They appear to be headed for\n"
# 284 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Mt. Pyre!$"
# 285 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 286 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_WeHaveToHurryToMtPyre: @ 82705DD
# 287 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "What?!\p"
# 288 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We can't waste any more time here!\n"
# 289 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "We have to hurry to Mt. Pyre, too!\p"
# 290 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Ahahahaha!\n"
# 291 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Team Magma, just you wait!$"
# 292 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 293 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ThanksPleaseTakePokemon: @ 8270650
# 294 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hello, im looking for a pokemon trainer\n"
# 295 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "to rise this Pokémon.\p"
# 296 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "You seem strong please take good care of\n"
# 297 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "it.$"
# 298 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 299 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
@ Unused
# 300 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoRoomForPokemon: @ 82706B2
# 301 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Hm? You don't seem to have any room\n"
# 302 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "for this Pokémon.$"
# 303 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 304 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PlayerReceivedCastform: @ 82706E8
# 305 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{PLAYER} received Castform!$"
# 306 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 307 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_PokemonChangesWithWeather: @ 82706FE
# 308 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "That Pokémon changes shape according\n"
# 309 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "to the weather conditions.\p"
# 310 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "There're plenty of them in the\n"
# 311 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Institute--go ahead and take it.$"
# 312 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 313 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_ChangingWeatherRidiculous: @ 827077E
# 314 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I've been researching rain for many\n"
# 315 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "years, but it's ridiculous to think that\l"
# 316 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "humans can freely change the weather.$"
# 317 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 318 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_GroudonWeather: @ 82707F1
# 319 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 320 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the Hoenn region.\p"
# 321 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, a drought has been recorded\n"
# 322 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "in {STR_VAR_1}.\p"
# 323 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 324 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 325 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 326 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_KyogreWeather: @ 8270873
# 327 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I track weather patterns over\n"
# 328 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "the Hoenn region.\p"
# 329 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Presently, heavy rainfall has been\n"
# 330 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "recorded over {STR_VAR_1}.\p"
# 331 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Could that mean, somewhere near\n"
# 332 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{STR_VAR_1}…$"
# 333 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"

# 334 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
Route119_WeatherInstitute_2F_Text_NoAbnormalWeather: @ 82708FC
# 335 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Abnormal weather conditions are\n"
# 336 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "no longer being reported.\p"
# 337 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "The occasional rainfall is a blessing,\n"
# 338 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "really.$"

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform::
# 342 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	lock
# 343 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	faceplayer
# 344 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CASTFORM, Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_2
# 356 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_Text_4, MSGBOX_YESNO
# 359 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_20
# 365 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_Text_7
Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_1:
# 368 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	release
	end

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_2:
# 345 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_17
Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_15:
# 347 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_14
Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_11:
# 349 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_10
Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_8:
# 352 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_Text_3
	goto Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_1

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_5:
# 346 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_Text_0
	goto Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_1

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_6:
# 348 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_Text_1
	goto Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_1

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_7:
# 350 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_Text_2
	goto Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_1

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_9:
# 349 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_7
	goto Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_8

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_10:
# 349 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_set FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_9
	goto Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_8

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_14:
# 347 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_unset FLAG_DEFEATED_KYOGRE, Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_6
	goto Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_11

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_17:
# 345 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	goto_if_unset FLAG_DEFEATED_GROUDON, Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_5
	goto Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_15

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_20:
# 360 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	givemon SPECIES_CASTFORM, 1, ITEM_MYSTIC_WATER
# 361 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	setflag FLAG_RECEIVED_CASTFORM
# 362 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_Text_5
# 363 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	msgbox Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_Text_6
	goto Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_1


Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_Text_0:
# 346 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I been getting reports of some intense\n"
	.string "sunlight near Mt.Chimney, it seems\l"
	.string "there have been some loud sound coming\l"
	.string "from a cave in the Jagged Pass.$"

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_Text_1:
# 348 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I been getting reports of heavy rain\n"
	.string "near Route 128, there have been some\l"
	.string "loud sounds coming from an underwater\l"
	.string "cave there according to my sources.$"

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_Text_2:
# 350 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Abnormal weather conditions are no\n"
	.string "longer being reported. The occasional\l"
	.string "rainfall is a blessing, really.$"

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_Text_3:
# 352 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I've been researching rain for many\n"
	.string "years, but it's ridiculous to think that\l"
	.string "humans can freely change the weather.$"

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_Text_4:
# 356 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "I found this Pokémon while I was\n"
	.string "researching rain, It looks like it has\l"
	.string "something to do with the sudden\l"
	.string "changes on the weather.\p"
	.string "I'm no trainer so I can't use it in\n"
	.string "battle to see if it can change it.\p"
	.string "Can you please take it with you to see\n"
	.string "if my hipotesis was right?$"

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_Text_5:
# 362 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "{PLAYER} received Castform!$"

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_Text_6:
# 363 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "Please tell me if you find anything\n"
	.string "interesting!$"

Route119_WeatherInstitute_2F_EventScript_WeatherScientist_GiveCastform_Text_7:
# 365 "data/maps/Route119_WeatherInstitute_2F/scripts.pory"
	.string "That's too bad, I hoped you could find\n"
	.string "the secret to this Pokémon, Please tell\l"
	.string "me if you want it.$"
