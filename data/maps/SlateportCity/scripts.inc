# 1 "data/maps/SlateportCity/scripts.pory"

# 2 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_FAT_MAN, 1
# 3 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_MAN_1, 2
# 4 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RICH_BOY, 3
# 5 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 6 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_COOK, 6
# 7 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_OLD_WOMAN, 7
# 8 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GIRL, 8
# 9 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_TY, 9
# 10 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GABBY, 10
# 11 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_CAPT_STERN, 11
# 12 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_2, 18
# 13 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_3, 19
# 14 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_4, 26
# 15 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_5, 27
# 16 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_6, 28
# 17 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_7, 29
# 18 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_8, 30
# 19 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_9, 31
# 20 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_11, 33
# 21 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_SCOTT, 35
# 22 "data/maps/SlateportCity/scripts.pory"

# 23 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts:: @ 81DCC61
# 24 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 25 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 26 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 27 "data/maps/SlateportCity/scripts.pory"

# 28 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition: @ 81DCC6C
# 29 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 30 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 31 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
# 32 "data/maps/SlateportCity/scripts.pory"
	call_if_eq SlateportCity_EventScript_MovePeopleForSternInterview
# 33 "data/maps/SlateportCity/scripts.pory"
	end
# 34 "data/maps/SlateportCity/scripts.pory"

# 35 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport:: @ 81DCC8D
# 36 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 37 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_ROUTE109
# 38 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 39 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 40 "data/maps/SlateportCity/scripts.pory"
	return
# 41 "data/maps/SlateportCity/scripts.pory"

# 42 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview:: @ 81DCC99
# 43 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 44 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 45 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 46 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 47 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 48 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 49 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 50 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 51 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 52 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 53 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 54 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 55 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 56 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 57 "data/maps/SlateportCity/scripts.pory"
	return
# 58 "data/maps/SlateportCity/scripts.pory"

# 59 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene:: @ 81DCCE7
# 60 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 61 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 62 "data/maps/SlateportCity/scripts.pory"
	compare VAR_0x8004, 30
# 63 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_MoveScottLeft
# 64 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 65 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 66 "data/maps/SlateportCity/scripts.pory"
	return
# 67 "data/maps/SlateportCity/scripts.pory"

# 68 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft:: @ 81DCD06
# 69 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 70 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 71 "data/maps/SlateportCity/scripts.pory"
	return
# 72 "data/maps/SlateportCity/scripts.pory"

# 73 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame: @ 81DCD12
# 74 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 75 "data/maps/SlateportCity/scripts.pory"

# 76 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene:: @ 81DCD1C
# 77 "data/maps/SlateportCity/scripts.pory"
	lockall
# 78 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 79 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 80 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 81 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 82 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 83 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 84 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFastestLeft
# 85 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 86 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 87 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 88 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFastestRight
# 89 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 91 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 92 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 93 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 94 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 95 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 96 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 97 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 98 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 99 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 100 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 101 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 102 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 104 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 105 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 106 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 107 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 108 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 109 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 110 "data/maps/SlateportCity/scripts.pory"
	end
# 111 "data/maps/SlateportCity/scripts.pory"

# 112 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott: @ 81DCDA8
# 113 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 114 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 115 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_fastest_left
# 116 "data/maps/SlateportCity/scripts.pory"
	step_end
# 117 "data/maps/SlateportCity/scripts.pory"

# 118 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer: @ 81DCDAC
# 119 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 120 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 121 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 122 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 123 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 124 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 125 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 126 "data/maps/SlateportCity/scripts.pory"
	step_end
# 127 "data/maps/SlateportCity/scripts.pory"

# 128 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit: @ 81DCDB4
# 129 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 130 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 131 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 132 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 133 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 134 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 135 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 136 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 137 "data/maps/SlateportCity/scripts.pory"
	step_end
# 138 "data/maps/SlateportCity/scripts.pory"

# 139 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru:: @ 81DCDBD
# 140 "data/maps/SlateportCity/scripts.pory"
	lock
# 141 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 142 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 143 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 144 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 145 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 146 "data/maps/SlateportCity/scripts.pory"
	release
# 147 "data/maps/SlateportCity/scripts.pory"
	end
# 148 "data/maps/SlateportCity/scripts.pory"

# 149 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru: @ 81DCDD4
# 150 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 151 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 152 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 153 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 154 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 155 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 156 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 157 "data/maps/SlateportCity/scripts.pory"
	release
# 158 "data/maps/SlateportCity/scripts.pory"
	end
# 159 "data/maps/SlateportCity/scripts.pory"

# 160 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman:: @ 81DCDE4
# 161 "data/maps/SlateportCity/scripts.pory"
	lock
# 162 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 163 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname 0
# 164 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 165 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 166 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, TRUE
# 167 "data/maps/SlateportCity/scripts.pory"
	call_if_eq SlateportCity_EventScript_MonHasEffortRibbon
# 168 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 169 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 170 "data/maps/SlateportCity/scripts.pory"
	call_if_eq SlateportCity_EventScript_MonEVsNotMaxed
# 171 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 172 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 173 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 174 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 175 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 176 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 177 "data/maps/SlateportCity/scripts.pory"
	release
# 178 "data/maps/SlateportCity/scripts.pory"
	end
# 179 "data/maps/SlateportCity/scripts.pory"

# 180 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed:: @ 81DCE2E
# 181 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 182 "data/maps/SlateportCity/scripts.pory"
	release
# 183 "data/maps/SlateportCity/scripts.pory"
	end
# 184 "data/maps/SlateportCity/scripts.pory"

# 185 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon:: @ 81DCE38
# 186 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 187 "data/maps/SlateportCity/scripts.pory"
	release
# 188 "data/maps/SlateportCity/scripts.pory"
	end
# 189 "data/maps/SlateportCity/scripts.pory"

# 190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook:: @ 81DCE42
# 191 "data/maps/SlateportCity/scripts.pory"
	lock
# 192 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 193 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
# 194 "data/maps/SlateportCity/scripts.pory"
	call_if_eq SlateportCity_EventScript_CookSternInterview
# 195 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 196 "data/maps/SlateportCity/scripts.pory"
	release
# 197 "data/maps/SlateportCity/scripts.pory"
	end
# 198 "data/maps/SlateportCity/scripts.pory"

# 199 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview:: @ 81DCE59
# 200 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 201 "data/maps/SlateportCity/scripts.pory"
	release
# 202 "data/maps/SlateportCity/scripts.pory"
	end
# 203 "data/maps/SlateportCity/scripts.pory"

# 204 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman:: @ 81DCE63
# 205 "data/maps/SlateportCity/scripts.pory"
	lock
# 206 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 207 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
# 208 "data/maps/SlateportCity/scripts.pory"
	call_if_eq SlateportCity_EventScript_OldWomanSternInterview
# 209 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 210 "data/maps/SlateportCity/scripts.pory"
	release
# 211 "data/maps/SlateportCity/scripts.pory"
	end
# 212 "data/maps/SlateportCity/scripts.pory"

# 213 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview:: @ 81DCE7A
# 214 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 215 "data/maps/SlateportCity/scripts.pory"
	release
# 216 "data/maps/SlateportCity/scripts.pory"
	end
# 217 "data/maps/SlateportCity/scripts.pory"

# 218 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl:: @ 81DCE84
# 219 "data/maps/SlateportCity/scripts.pory"
	lock
# 220 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 221 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
# 222 "data/maps/SlateportCity/scripts.pory"
	call_if_eq SlateportCity_EventScript_GirlSternInterview
# 223 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 224 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 225 "data/maps/SlateportCity/scripts.pory"
	release
# 226 "data/maps/SlateportCity/scripts.pory"
	end
# 227 "data/maps/SlateportCity/scripts.pory"

# 228 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview:: @ 81DCEA4
# 229 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 230 "data/maps/SlateportCity/scripts.pory"
	release
# 231 "data/maps/SlateportCity/scripts.pory"
	end
# 232 "data/maps/SlateportCity/scripts.pory"

# 233 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase:: @ 81DCEAE
# 234 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 235 "data/maps/SlateportCity/scripts.pory"
	release
# 236 "data/maps/SlateportCity/scripts.pory"
	end
# 237 "data/maps/SlateportCity/scripts.pory"

# 238 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy:: @ 81DCEB8
# 239 "data/maps/SlateportCity/scripts.pory"
	lock
# 240 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 241 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
# 242 "data/maps/SlateportCity/scripts.pory"
	call_if_eq SlateportCity_EventScript_RichBoySternInterview
# 243 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 244 "data/maps/SlateportCity/scripts.pory"
	release
# 245 "data/maps/SlateportCity/scripts.pory"
	end
# 246 "data/maps/SlateportCity/scripts.pory"

# 247 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview:: @ 81DCECF
# 248 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 249 "data/maps/SlateportCity/scripts.pory"
	release
# 250 "data/maps/SlateportCity/scripts.pory"
	end
# 251 "data/maps/SlateportCity/scripts.pory"

# 252 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan:: @ 81DCED9
# 253 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
# 254 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_FatManSternInterview
# 255 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 256 "data/maps/SlateportCity/scripts.pory"
	end
# 257 "data/maps/SlateportCity/scripts.pory"

# 258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview:: @ 81DCEED
# 259 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 260 "data/maps/SlateportCity/scripts.pory"
	end
# 261 "data/maps/SlateportCity/scripts.pory"

# 262 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1:: @ 81DCEF6
# 263 "data/maps/SlateportCity/scripts.pory"
	lock
# 264 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 265 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
# 266 "data/maps/SlateportCity/scripts.pory"
	call_if_eq SlateportCity_EventScript_Man1SternInterview
# 267 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 268 "data/maps/SlateportCity/scripts.pory"
	release
# 269 "data/maps/SlateportCity/scripts.pory"
	end
# 270 "data/maps/SlateportCity/scripts.pory"

# 271 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview:: @ 81DCF0D
# 272 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 273 "data/maps/SlateportCity/scripts.pory"
	release
# 274 "data/maps/SlateportCity/scripts.pory"
	end
# 275 "data/maps/SlateportCity/scripts.pory"

# 276 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1:: @ 81DCF17
# 277 "data/maps/SlateportCity/scripts.pory"
	lock
# 278 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 279 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 280 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 281 "data/maps/SlateportCity/scripts.pory"
	release
# 282 "data/maps/SlateportCity/scripts.pory"
	end
# 283 "data/maps/SlateportCity/scripts.pory"

# 284 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone:: @ 81DCF2C
# 285 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 286 "data/maps/SlateportCity/scripts.pory"
	release
# 287 "data/maps/SlateportCity/scripts.pory"
	end
# 288 "data/maps/SlateportCity/scripts.pory"

# 289 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign:: @ 81DCF36
# 290 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 291 "data/maps/SlateportCity/scripts.pory"
	end
# 292 "data/maps/SlateportCity/scripts.pory"

# 293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign:: @ 81DCF3F
# 294 "data/maps/SlateportCity/scripts.pory"
	lockall
# 295 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 296 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 297 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 298 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 299 "data/maps/SlateportCity/scripts.pory"
	end
# 300 "data/maps/SlateportCity/scripts.pory"

# 301 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion:: @ 81DCF5C
# 302 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 303 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 304 "data/maps/SlateportCity/scripts.pory"
	end
# 305 "data/maps/SlateportCity/scripts.pory"

# 306 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete:: @ 81DCF66
# 307 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 308 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 309 "data/maps/SlateportCity/scripts.pory"
	end
# 310 "data/maps/SlateportCity/scripts.pory"

# 311 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign:: @ 81DCF70
# 312 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 313 "data/maps/SlateportCity/scripts.pory"
	end
# 314 "data/maps/SlateportCity/scripts.pory"

# 315 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign:: @ 81DCF79
# 316 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 317 "data/maps/SlateportCity/scripts.pory"
	end
# 318 "data/maps/SlateportCity/scripts.pory"

# 319 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign:: @ 81DCF82
# 320 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 321 "data/maps/SlateportCity/scripts.pory"
	end
# 322 "data/maps/SlateportCity/scripts.pory"

# 323 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign:: @ 81DCF8B
# 324 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 325 "data/maps/SlateportCity/scripts.pory"
	end
# 326 "data/maps/SlateportCity/scripts.pory"

# 327 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign:: @ 81DCF94
# 328 "data/maps/SlateportCity/scripts.pory"
	lockall
# 329 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 330 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 331 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 332 "data/maps/SlateportCity/scripts.pory"
	end
# 333 "data/maps/SlateportCity/scripts.pory"

# 334 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete:: @ 81DCFA8
# 335 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 336 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 337 "data/maps/SlateportCity/scripts.pory"
	end
# 338 "data/maps/SlateportCity/scripts.pory"

# 339 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign:: @ 81DCFB2
# 340 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 341 "data/maps/SlateportCity/scripts.pory"
	end
# 342 "data/maps/SlateportCity/scripts.pory"

# 343 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac:: @ 81DCFBB
# 344 "data/maps/SlateportCity/scripts.pory"
	lock
# 345 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 346 "data/maps/SlateportCity/scripts.pory"
	compare VAR_SLATEPORT_CITY_STATE, 1
# 347 "data/maps/SlateportCity/scripts.pory"
	call_if_eq SlateportCity_EventScript_ManiacSternInterview
# 348 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 349 "data/maps/SlateportCity/scripts.pory"
	release
# 350 "data/maps/SlateportCity/scripts.pory"
	end
# 351 "data/maps/SlateportCity/scripts.pory"

# 352 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 353 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview:: @ 81DCFD2
# 354 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 355 "data/maps/SlateportCity/scripts.pory"
	release
# 356 "data/maps/SlateportCity/scripts.pory"
	end
# 357 "data/maps/SlateportCity/scripts.pory"

# 358 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2:: @ 81DCFDC
# 359 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 360 "data/maps/SlateportCity/scripts.pory"
	end
# 361 "data/maps/SlateportCity/scripts.pory"

# 362 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1:: @ 81DCFE5
# 363 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 364 "data/maps/SlateportCity/scripts.pory"
	end
# 365 "data/maps/SlateportCity/scripts.pory"

# 366 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2:: @ 81DCFEE
# 367 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 368 "data/maps/SlateportCity/scripts.pory"
	end
# 369 "data/maps/SlateportCity/scripts.pory"

# 370 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF:: @ 81DCFF7
# 371 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 372 "data/maps/SlateportCity/scripts.pory"
	end
# 373 "data/maps/SlateportCity/scripts.pory"

# 374 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2:: @ 81DD000
# 375 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 376 "data/maps/SlateportCity/scripts.pory"
	end
# 377 "data/maps/SlateportCity/scripts.pory"

# 378 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1:: @ 81DD009
# 379 "data/maps/SlateportCity/scripts.pory"
	lock
# 380 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 381 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 382 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 383 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 384 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 385 "data/maps/SlateportCity/scripts.pory"
	release
# 386 "data/maps/SlateportCity/scripts.pory"
	end
# 387 "data/maps/SlateportCity/scripts.pory"

# 388 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2:: @ 81DD020
# 389 "data/maps/SlateportCity/scripts.pory"
	lock
# 390 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 391 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 392 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 393 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 394 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 395 "data/maps/SlateportCity/scripts.pory"
	release
# 396 "data/maps/SlateportCity/scripts.pory"
	end
# 397 "data/maps/SlateportCity/scripts.pory"

# 398 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3:: @ 81DD037
# 399 "data/maps/SlateportCity/scripts.pory"
	lock
# 400 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 401 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 402 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 403 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 404 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 405 "data/maps/SlateportCity/scripts.pory"
	release
# 406 "data/maps/SlateportCity/scripts.pory"
	end
# 407 "data/maps/SlateportCity/scripts.pory"

# 408 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4:: @ 81DD04E
# 409 "data/maps/SlateportCity/scripts.pory"
	lock
# 410 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 411 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 412 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 413 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 414 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 415 "data/maps/SlateportCity/scripts.pory"
	release
# 416 "data/maps/SlateportCity/scripts.pory"
	end
# 417 "data/maps/SlateportCity/scripts.pory"

# 418 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5:: @ 81DD065
# 419 "data/maps/SlateportCity/scripts.pory"
	lock
# 420 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 421 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 422 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 423 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 424 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 425 "data/maps/SlateportCity/scripts.pory"
	release
# 426 "data/maps/SlateportCity/scripts.pory"
	end
# 427 "data/maps/SlateportCity/scripts.pory"

# 428 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6:: @ 81DD07C
# 429 "data/maps/SlateportCity/scripts.pory"
	lock
# 430 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 431 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 432 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 433 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 434 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 435 "data/maps/SlateportCity/scripts.pory"
	release
# 436 "data/maps/SlateportCity/scripts.pory"
	end
# 437 "data/maps/SlateportCity/scripts.pory"

# 438 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7:: @ 81DD093
# 439 "data/maps/SlateportCity/scripts.pory"
	lock
# 440 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 441 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 442 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 443 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 444 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 445 "data/maps/SlateportCity/scripts.pory"
	release
# 446 "data/maps/SlateportCity/scripts.pory"
	end
# 447 "data/maps/SlateportCity/scripts.pory"

# 448 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8:: @ 81DD0AA
# 449 "data/maps/SlateportCity/scripts.pory"
	lock
# 450 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 451 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 452 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 453 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 454 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 455 "data/maps/SlateportCity/scripts.pory"
	release
# 456 "data/maps/SlateportCity/scripts.pory"
	end
# 457 "data/maps/SlateportCity/scripts.pory"

# 458 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9:: @ 81DD0C1
# 459 "data/maps/SlateportCity/scripts.pory"
	lock
# 460 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 461 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 462 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 463 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 464 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 465 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 466 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 467 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 468 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 469 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 470 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 471 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 472 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 473 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 474 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 475 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 476 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 477 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 478 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 479 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 480 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 481 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 482 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 483 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 484 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 485 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 486 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 487 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 488 "data/maps/SlateportCity/scripts.pory"
	release
# 489 "data/maps/SlateportCity/scripts.pory"
	end
# 490 "data/maps/SlateportCity/scripts.pory"

# 491 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt: @ 81DD147
# 492 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 493 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 494 "data/maps/SlateportCity/scripts.pory"
	step_end
# 495 "data/maps/SlateportCity/scripts.pory"

# 496 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10:: @ 81DD14A
# 497 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 498 "data/maps/SlateportCity/scripts.pory"
	end
# 499 "data/maps/SlateportCity/scripts.pory"

# 500 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11:: @ 81DD153
# 501 "data/maps/SlateportCity/scripts.pory"
	lock
# 502 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 503 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 504 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 505 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 506 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 507 "data/maps/SlateportCity/scripts.pory"
	release
# 508 "data/maps/SlateportCity/scripts.pory"
	end
# 509 "data/maps/SlateportCity/scripts.pory"

# 510 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk:: @ 81DD16A
# 511 "data/maps/SlateportCity/scripts.pory"
	lock
# 512 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 513 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 514 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 515 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 516 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 517 "data/maps/SlateportCity/scripts.pory"
	release
# 518 "data/maps/SlateportCity/scripts.pory"
	end
# 519 "data/maps/SlateportCity/scripts.pory"

# 520 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 521 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls: @ 81DD184
# 522 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 523 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 524 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 525 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 526 "data/maps/SlateportCity/scripts.pory"
	release
# 527 "data/maps/SlateportCity/scripts.pory"
	end
# 528 "data/maps/SlateportCity/scripts.pory"

# 529 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower:: @ 81DD18E
# 530 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 531 "data/maps/SlateportCity/scripts.pory"
	release
# 532 "data/maps/SlateportCity/scripts.pory"
	end
# 533 "data/maps/SlateportCity/scripts.pory"

# 534 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk:: @ 81DD198
# 535 "data/maps/SlateportCity/scripts.pory"
	lock
# 536 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 537 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 538 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 539 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 540 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 541 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 542 "data/maps/SlateportCity/scripts.pory"
	release
# 543 "data/maps/SlateportCity/scripts.pory"
	end
# 544 "data/maps/SlateportCity/scripts.pory"

# 545 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor: @ 81DD1B8
# 546 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 547 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 548 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 549 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 550 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 551 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 552 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 553 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 554 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 555 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 556 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 557 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 558 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 559 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 560 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 561 "data/maps/SlateportCity/scripts.pory"
	release
# 562 "data/maps/SlateportCity/scripts.pory"
	end
# 563 "data/maps/SlateportCity/scripts.pory"

# 564 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_IncenseClerk::
# 565 "data/maps/SlateportCity/scripts.pory"
	lock
# 566 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 567 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 568 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 569 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_Incenses
# 570 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 571 "data/maps/SlateportCity/scripts.pory"
	release
# 572 "data/maps/SlateportCity/scripts.pory"
	end
# 573 "data/maps/SlateportCity/scripts.pory"

# 574 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 575 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_Incenses:
# 576 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 577 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 578 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 579 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 580 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 581 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WAVE_INCENSE
# 582 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 583 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LUCK_INCENSE
# 584 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 585 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 586 "data/maps/SlateportCity/scripts.pory"
	release
# 587 "data/maps/SlateportCity/scripts.pory"
	end
# 588 "data/maps/SlateportCity/scripts.pory"

# 589 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 590 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern:: @ 81DD1F8
# 591 "data/maps/SlateportCity/scripts.pory"
	lockall
# 592 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 593 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 594 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 595 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFastestRight
# 596 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 597 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 598 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFastestDown
# 599 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 600 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 601 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 602 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 603 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 604 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 605 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 606 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 607 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 608 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 609 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFastestUp
# 610 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 611 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 612 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, 0
# 613 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 614 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFastestLeft
# 615 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFastestLeft
# 616 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 617 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 618 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 619 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 620 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFastestDown
# 621 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 622 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 623 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 624 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 625 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 626 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 627 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 628 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFastestUp
# 629 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 630 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 631 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 632 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 633 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 634 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 635 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 636 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 637 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 638 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 639 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 640 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 641 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 642 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 255, 11, 14
# 643 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 644 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 645 "data/maps/SlateportCity/scripts.pory"
	end
# 646 "data/maps/SlateportCity/scripts.pory"

# 647 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern: @ 81DD309
# 648 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 649 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 650 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 651 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_fastest_right
# 652 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 653 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 654 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_fastest_left
# 655 "data/maps/SlateportCity/scripts.pory"
	step_end
# 656 "data/maps/SlateportCity/scripts.pory"

# 657 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern: @ 81DD311
# 658 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 659 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_fastest_up
# 660 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 661 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_fastest_down
# 662 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 663 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 664 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_fastest_left
# 665 "data/maps/SlateportCity/scripts.pory"
	step_end
# 666 "data/maps/SlateportCity/scripts.pory"

# 667 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit: @ 81DD319
# 668 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 669 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 670 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 671 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 672 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 673 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 674 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 675 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 676 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 677 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 678 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 679 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 680 "data/maps/SlateportCity/scripts.pory"
	step_end
# 681 "data/maps/SlateportCity/scripts.pory"

# 682 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit: @ 81DD326
# 683 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 684 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 685 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 686 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 687 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 688 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 689 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 690 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 691 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 692 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 693 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 694 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 695 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 696 "data/maps/SlateportCity/scripts.pory"
	step_end
# 697 "data/maps/SlateportCity/scripts.pory"

# 698 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused: @ 81DD334
# 699 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 700 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_fastest_up
# 701 "data/maps/SlateportCity/scripts.pory"
	step_end
# 702 "data/maps/SlateportCity/scripts.pory"

# 703 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor: @ 81DD337
# 704 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 705 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 706 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 707 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 708 "data/maps/SlateportCity/scripts.pory"
	step_end
# 709 "data/maps/SlateportCity/scripts.pory"

# 710 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit: @ 81DD33C
# 711 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 712 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 713 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 714 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 715 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 716 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 717 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 718 "data/maps/SlateportCity/scripts.pory"
	step_end
# 719 "data/maps/SlateportCity/scripts.pory"

# 720 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor: @ 81DD344
# 721 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_fastest_right
# 722 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 723 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 724 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 725 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 726 "data/maps/SlateportCity/scripts.pory"
	step_end
# 727 "data/maps/SlateportCity/scripts.pory"

# 728 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern: @ 81DD34A
# 729 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 730 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 731 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 732 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 733 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 734 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 735 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 736 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_fastest_down
# 737 "data/maps/SlateportCity/scripts.pory"
	step_end
# 738 "data/maps/SlateportCity/scripts.pory"

# 739 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty:: @ 81DD353
# 740 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 741 "data/maps/SlateportCity/scripts.pory"
	end
# 742 "data/maps/SlateportCity/scripts.pory"

# 743 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby:: @ 81DD35C
# 744 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 745 "data/maps/SlateportCity/scripts.pory"
	end
# 746 "data/maps/SlateportCity/scripts.pory"

# 747 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3:: @ 81DD365
# 748 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 749 "data/maps/SlateportCity/scripts.pory"
	end
# 750 "data/maps/SlateportCity/scripts.pory"

# 751 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk:: @ 81DD36E
# 752 "data/maps/SlateportCity/scripts.pory"
	lock
# 753 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 754 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 755 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 756 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 757 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 758 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 759 "data/maps/SlateportCity/scripts.pory"
	release
# 760 "data/maps/SlateportCity/scripts.pory"
	end
# 761 "data/maps/SlateportCity/scripts.pory"

# 762 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar:: @ 81DD39A
# 763 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 764 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 765 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 766 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_ExplainBerryPowder
# 767 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 768 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 769 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 770 "data/maps/SlateportCity/scripts.pory"
	end
# 771 "data/maps/SlateportCity/scripts.pory"

# 772 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder:: @ 81DD3C0
# 773 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 774 "data/maps/SlateportCity/scripts.pory"
	release
# 775 "data/maps/SlateportCity/scripts.pory"
	end
# 776 "data/maps/SlateportCity/scripts.pory"

# 777 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem:: @ 81DD3CA
# 778 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 779 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 780 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 781 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 782 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 783 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 784 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 785 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 786 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 787 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 788 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 789 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 790 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 791 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 792 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 793 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 794 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 795 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 796 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 797 "data/maps/SlateportCity/scripts.pory"
	end
# 798 "data/maps/SlateportCity/scripts.pory"

# 799 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder:: @ 81DD46E
# 800 "data/maps/SlateportCity/scripts.pory"
	bufferitemname 0, ITEM_ENERGY_POWDER
# 801 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 802 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 803 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 804 "data/maps/SlateportCity/scripts.pory"
	end
# 805 "data/maps/SlateportCity/scripts.pory"

# 806 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot:: @ 81DD482
# 807 "data/maps/SlateportCity/scripts.pory"
	bufferitemname 0, ITEM_ENERGY_ROOT
# 808 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 809 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 810 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 811 "data/maps/SlateportCity/scripts.pory"
	end
# 812 "data/maps/SlateportCity/scripts.pory"

# 813 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder:: @ 81DD496
# 814 "data/maps/SlateportCity/scripts.pory"
	bufferitemname 0, ITEM_HEAL_POWDER
# 815 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 816 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 817 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 818 "data/maps/SlateportCity/scripts.pory"
	end
# 819 "data/maps/SlateportCity/scripts.pory"

# 820 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb:: @ 81DD4AA
# 821 "data/maps/SlateportCity/scripts.pory"
	bufferitemname 0, ITEM_REVIVAL_HERB
# 822 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 823 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 824 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 825 "data/maps/SlateportCity/scripts.pory"
	end
# 826 "data/maps/SlateportCity/scripts.pory"

# 827 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein:: @ 81DD4BE
# 828 "data/maps/SlateportCity/scripts.pory"
	bufferitemname 0, ITEM_PROTEIN
# 829 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 830 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 831 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 832 "data/maps/SlateportCity/scripts.pory"
	end
# 833 "data/maps/SlateportCity/scripts.pory"

# 834 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron:: @ 81DD4D2
# 835 "data/maps/SlateportCity/scripts.pory"
	bufferitemname 0, ITEM_IRON
# 836 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 837 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 838 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 839 "data/maps/SlateportCity/scripts.pory"
	end
# 840 "data/maps/SlateportCity/scripts.pory"

# 841 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos:: @ 81DD4E6
# 842 "data/maps/SlateportCity/scripts.pory"
	bufferitemname 0, ITEM_CARBOS
# 843 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 844 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 845 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 846 "data/maps/SlateportCity/scripts.pory"
	end
# 847 "data/maps/SlateportCity/scripts.pory"

# 848 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium:: @ 81DD4FA
# 849 "data/maps/SlateportCity/scripts.pory"
	bufferitemname 0, ITEM_CALCIUM
# 850 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 851 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 852 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 853 "data/maps/SlateportCity/scripts.pory"
	end
# 854 "data/maps/SlateportCity/scripts.pory"

# 855 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc:: @ 81DD50E
# 856 "data/maps/SlateportCity/scripts.pory"
	bufferitemname 0, ITEM_ZINC
# 857 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 858 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 859 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 860 "data/maps/SlateportCity/scripts.pory"
	end
# 861 "data/maps/SlateportCity/scripts.pory"

# 862 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp:: @ 81DD522
# 863 "data/maps/SlateportCity/scripts.pory"
	bufferitemname 0, ITEM_HP_UP
# 864 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 865 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 866 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 867 "data/maps/SlateportCity/scripts.pory"
	end
# 868 "data/maps/SlateportCity/scripts.pory"

# 869 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp:: @ 81DD536
# 870 "data/maps/SlateportCity/scripts.pory"
	bufferitemname 0, ITEM_POKE_BALL
# 871 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_POKE_BALL
# 872 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 873 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 874 "data/maps/SlateportCity/scripts.pory"
	end
# 875 "data/maps/SlateportCity/scripts.pory"

# 876 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect:: @ 81DD54A
# 877 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 878 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 879 "data/maps/SlateportCity/scripts.pory"
	release
# 880 "data/maps/SlateportCity/scripts.pory"
	end
# 881 "data/maps/SlateportCity/scripts.pory"

# 882 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem:: @ 81DD557
# 883 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 884 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, NO
# 885 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_ChooseBerryPowderItem
# 886 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 887 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 888 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 889 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_NotEnoughBerryPowder
# 890 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 891 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 892 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_NoRoomForBerryPowderItem
# 893 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 894 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 895 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 896 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 897 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, YES
# 898 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_ChooseBerryPowderItem
# 899 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 900 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 901 "data/maps/SlateportCity/scripts.pory"
	release
# 902 "data/maps/SlateportCity/scripts.pory"
	end
# 903 "data/maps/SlateportCity/scripts.pory"

# 904 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem:: @ 81DD5C1
# 905 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 906 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 907 "data/maps/SlateportCity/scripts.pory"
	release
# 908 "data/maps/SlateportCity/scripts.pory"
	end
# 909 "data/maps/SlateportCity/scripts.pory"

# 910 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder:: @ 81DD5CE
# 911 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 912 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 913 "data/maps/SlateportCity/scripts.pory"
	end
# 914 "data/maps/SlateportCity/scripts.pory"

# 915 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene:: @ 81DD5DC
# 916 "data/maps/SlateportCity/scripts.pory"
	lockall
# 917 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 918 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 919 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 920 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 921 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 922 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 923 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 924 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 925 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 926 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 927 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 928 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 929 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 930 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 931 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 932 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 933 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 934 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 935 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 936 "data/maps/SlateportCity/scripts.pory"
	end
# 937 "data/maps/SlateportCity/scripts.pory"

# 938 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown: @ 81DD630
# 939 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 940 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 941 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 942 "data/maps/SlateportCity/scripts.pory"
	step_end
# 943 "data/maps/SlateportCity/scripts.pory"

# 944 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit: @ 81DD634
# 945 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 946 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_fastest_right
# 947 "data/maps/SlateportCity/scripts.pory"
	step_end
# 948 "data/maps/SlateportCity/scripts.pory"

# 949 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent: @ 81DD637
# 950 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 951 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 952 "data/maps/SlateportCity/scripts.pory"
	step_end
# 953 "data/maps/SlateportCity/scripts.pory"

# 954 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent: @ 81DD63A
# 955 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 956 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 957 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 958 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 959 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 960 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 961 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 962 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 963 "data/maps/SlateportCity/scripts.pory"
	step_end
# 964 "data/maps/SlateportCity/scripts.pory"

# 965 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign:: @ 81DD643
# 966 "data/maps/SlateportCity/scripts.pory"
	lockall
# 967 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 968 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 969 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 970 "data/maps/SlateportCity/scripts.pory"
	end
# 971 "data/maps/SlateportCity/scripts.pory"

# 972 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed: @ 81DD64A
# 973 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the Energy Guru! I'll go for it and\n"
# 974 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 975 "data/maps/SlateportCity/scripts.pory"

# 976 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon: @ 81DD68A
# 977 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 978 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 979 "data/maps/SlateportCity/scripts.pory"

# 980 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon: @ 81DD697
# 981 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 982 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 983 "data/maps/SlateportCity/scripts.pory"
	.string "Effort Ribbon.$"
# 984 "data/maps/SlateportCity/scripts.pory"

# 985 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon: @ 81DD6E3
# 986 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the Effort Ribbon.$"
# 987 "data/maps/SlateportCity/scripts.pory"

# 988 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon: @ 81DD702
# 989 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the Effort Ribbon\n"
# 990 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 991 "data/maps/SlateportCity/scripts.pory"

# 992 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder: @ 81DD722
# 993 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 994 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your Pokémon\n"
# 995 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 996 "data/maps/SlateportCity/scripts.pory"

# 997 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt: @ 81DD77B
# 998 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that Effort\n"
# 999 "data/maps/SlateportCity/scripts.pory"
	.string "Ribbon looks good on it!$"
# 1000 "data/maps/SlateportCity/scripts.pory"

# 1001 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon: @ 81DD7AD
# 1002 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 1003 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1004 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle Pokémon\n"
# 1005 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1006 "data/maps/SlateportCity/scripts.pory"

# 1007 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife: @ 81DD81A
# 1008 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 1009 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 1010 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 1011 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 1012 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 1013 "data/maps/SlateportCity/scripts.pory"

# 1014 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows: @ 81DD8A6
# 1015 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1016 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1017 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1018 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1019 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1020 "data/maps/SlateportCity/scripts.pory"

# 1021 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace: @ 81DD93D
# 1022 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1023 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1024 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport is such a wonderful place!$"
# 1025 "data/maps/SlateportCity/scripts.pory"

# 1026 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty: @ 81DD999
# 1027 "data/maps/SlateportCity/scripts.pory"
	.string "If you put Dolls or Cushions on\n"
# 1028 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1029 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some Bricks so my\n"
# 1030 "data/maps/SlateportCity/scripts.pory"
	.string "Dolls and Cushions won't get dirty\l"
# 1031 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1032 "data/maps/SlateportCity/scripts.pory"

# 1033 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent: @ 81DDA34
# 1034 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1035 "data/maps/SlateportCity/scripts.pory"
	.string "the Battle Tent, too!\p"
# 1036 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1037 "data/maps/SlateportCity/scripts.pory"
	.string "some Pokémon!$"
# 1038 "data/maps/SlateportCity/scripts.pory"

# 1039 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville: @ 81DDA9A
# 1040 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1041 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from Mauville City.\n"
# 1042 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1043 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1044 "data/maps/SlateportCity/scripts.pory"
	.string "my Bike here.$"
# 1045 "data/maps/SlateportCity/scripts.pory"

# 1046 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern: @ 81DDB21
# 1047 "data/maps/SlateportCity/scripts.pory"
	.string "Stern, the fellow who built the\n"
# 1048 "data/maps/SlateportCity/scripts.pory"
	.string "Museum, also happens to be the leader\l"
# 1049 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1050 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him Capt. Stern.$"
# 1051 "data/maps/SlateportCity/scripts.pory"

# 1052 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere: @ 81DDBAC
# 1053 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1054 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1055 "data/maps/SlateportCity/scripts.pory"

# 1056 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften: @ 81DDBD5
# 1057 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1058 "data/maps/SlateportCity/scripts.pory"
	.string "the Museum often.\p"
# 1059 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1060 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1061 "data/maps/SlateportCity/scripts.pory"

# 1062 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing: @ 81DDC4F
# 1063 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1064 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1065 "data/maps/SlateportCity/scripts.pory"

# 1066 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy: @ 81DDC8A
# 1067 "data/maps/SlateportCity/scripts.pory"
	.string "Team Aqua has a policy of\n"
# 1068 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1069 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1070 "data/maps/SlateportCity/scripts.pory"

# 1071 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant: @ 81DDCD5
# 1072 "data/maps/SlateportCity/scripts.pory"
	.string "Our Boss is brilliant.\p"
# 1073 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1074 "data/maps/SlateportCity/scripts.pory"
	.string "a Museum now?$"
# 1075 "data/maps/SlateportCity/scripts.pory"

# 1076 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder: @ 81DDD18
# 1077 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1078 "data/maps/SlateportCity/scripts.pory"
	.string "Our Boss is scary when he's mad, so\n"
# 1079 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1080 "data/maps/SlateportCity/scripts.pory"

# 1081 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll: @ 81DDD7D
# 1082 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1083 "data/maps/SlateportCity/scripts.pory"
	.string "the Museum, we should take it all!$"
# 1084 "data/maps/SlateportCity/scripts.pory"

# 1085 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn: @ 81DDDC0
# 1086 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1087 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1088 "data/maps/SlateportCity/scripts.pory"

# 1089 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames: @ 81DDDDF
# 1090 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1091 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1092 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1093 "data/maps/SlateportCity/scripts.pory"

# 1094 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp: @ 81DDE2F
# 1095 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1096 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1097 "data/maps/SlateportCity/scripts.pory"

# 1098 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant: @ 81DDE6E
# 1099 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1100 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1101 "data/maps/SlateportCity/scripts.pory"

# 1102 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou: @ 81DDE86
# 1103 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1104 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1105 "data/maps/SlateportCity/scripts.pory"

# 1106 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless: @ 81DDEB8
# 1107 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1108 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1109 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1110 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1111 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1112 "data/maps/SlateportCity/scripts.pory"

# 1113 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy: @ 81DDF32
# 1114 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1115 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1116 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1117 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1118 "data/maps/SlateportCity/scripts.pory"

# 1119 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation: @ 81DDF8D
# 1120 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1121 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1122 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1123 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1124 "data/maps/SlateportCity/scripts.pory"

# 1125 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet: @ 81DDFF7
# 1126 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1127 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1128 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by Pokémon?$"
# 1129 "data/maps/SlateportCity/scripts.pory"

# 1130 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats: @ 81DE04B
# 1131 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1132 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1133 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1134 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for Pokémon.$"
# 1135 "data/maps/SlateportCity/scripts.pory"

# 1136 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch: @ 81DE0D2
# 1137 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1138 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1139 "data/maps/SlateportCity/scripts.pory"

# 1140 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou: @ 81DE10E
# 1141 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your Pokémon's\n"
# 1142 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the Name\l"
# 1143 "data/maps/SlateportCity/scripts.pory"
	.string "Rater to help you.$"
# 1144 "data/maps/SlateportCity/scripts.pory"

# 1145 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName: @ 81DE16C
# 1146 "data/maps/SlateportCity/scripts.pory"
	.string "Any Pokémon you get in a trade,\n"
# 1147 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1148 "data/maps/SlateportCity/scripts.pory"
	.string "The original Trainer's love for that\n"
# 1149 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon is in the nickname.$"
# 1150 "data/maps/SlateportCity/scripts.pory"

# 1151 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently: @ 81DE1EC
# 1152 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a Battle Tent was built\n"
# 1153 "data/maps/SlateportCity/scripts.pory"
	.string "in Slateport.\p"
# 1154 "data/maps/SlateportCity/scripts.pory"
	.string "Gyms are fun, but the Battle Tent's\n"
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1156 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough Pokémon\n"
# 1157 "data/maps/SlateportCity/scripts.pory"
	.string "for the Battle Tent!$"
# 1158 "data/maps/SlateportCity/scripts.pory"

# 1159 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed: @ 81DE28E
# 1160 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1161 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1162 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1163 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that Capt. Stern?$"
# 1164 "data/maps/SlateportCity/scripts.pory"

# 1165 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool: @ 81DE30C
# 1166 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1168 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1169 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1170 "data/maps/SlateportCity/scripts.pory"

# 1171 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething: @ 81DE376
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern says they discovered\n"
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1174 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1175 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1176 "data/maps/SlateportCity/scripts.pory"

# 1177 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish: @ 81DE3E2
# 1178 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1179 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good Captain come back with\n"
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1181 "data/maps/SlateportCity/scripts.pory"

# 1182 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV: @ 81DE43D
# 1183 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1184 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1185 "data/maps/SlateportCity/scripts.pory"

# 1186 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity: @ 81DE460
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "The Captain's a celebrity!$"
# 1189 "data/maps/SlateportCity/scripts.pory"

# 1190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera: @ 81DE491
# 1191 "data/maps/SlateportCity/scripts.pory"
	.string "Ty: Okay, Capt. Stern, a big smile\n"
# 1192 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1193 "data/maps/SlateportCity/scripts.pory"

# 1194 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience: @ 81DE4C4
# 1195 "data/maps/SlateportCity/scripts.pory"
	.string "Gabby: I see, I see. You've had a most\n"
# 1196 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1197 "data/maps/SlateportCity/scripts.pory"

# 1198 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration: @ 81DE502
# 1199 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern: Yes, indeed. We intend to\n"
# 1200 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1201 "data/maps/SlateportCity/scripts.pory"

# 1202 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview: @ 81DE54A
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "Gabby: That's wonderful, Capt. Stern!\n"
# 1204 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1205 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1208 "data/maps/SlateportCity/scripts.pory"

# 1209 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview: @ 81DE5F7
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern: Whew…\p"
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1212 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1213 "data/maps/SlateportCity/scripts.pory"

# 1214 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery: @ 81DE64F
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "Route 128.\p"
# 1221 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a Pokémon\n"
# 1222 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1223 "data/maps/SlateportCity/scripts.pory"

# 1224 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine: @ 81DE724
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1226 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern, I presume.\p"
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "We of Team Aqua will assume\n"
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1230 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what Team\l"
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "Aqua has planned!$"
# 1234 "data/maps/SlateportCity/scripts.pory"

# 1235 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat: @ 81DE7F7
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern: What was that all about?\p"
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1239 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1240 "data/maps/SlateportCity/scripts.pory"

# 1241 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub: @ 81DE860
# 1242 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the Harbor!\p"
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1245 "data/maps/SlateportCity/scripts.pory"

# 1246 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe: @ 81DE8A0
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1249 "data/maps/SlateportCity/scripts.pory"

# 1250 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign: @ 81DE8BC
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "Battle Tent Slateport Site\n"
# 1252 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate Pokémon!”$"
# 1253 "data/maps/SlateportCity/scripts.pory"

# 1254 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign: @ 81DE8F8
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1257 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1258 "data/maps/SlateportCity/scripts.pory"

# 1259 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion: @ 81DE940
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
# 1261 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. Tidal nears\n"
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport and Lilycove.”$"
# 1264 "data/maps/SlateportCity/scripts.pory"

# 1265 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete: @ 81DE9AA
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the Slateport-Lilycove\n"
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. Tidal is handled at the\l"
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "Harbor.”$"
# 1270 "data/maps/SlateportCity/scripts.pory"

# 1271 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign: @ 81DEA0B
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon Fan Club\n"
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of Pokémon!”$"
# 1274 "data/maps/SlateportCity/scripts.pory"

# 1275 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign: @ 81DEA3B
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "Oceanic Museum$"
# 1279 "data/maps/SlateportCity/scripts.pory"

# 1280 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign: @ 81DEA6F
# 1281 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport City\p"
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and Pokémon\n"
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1284 "data/maps/SlateportCity/scripts.pory"

# 1285 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign: @ 81DEAAF
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport Market\n"
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1288 "data/maps/SlateportCity/scripts.pory"

# 1289 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction: @ 81DEAE3
# 1290 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport Harbor\p"
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. Tidal is under\n"
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the Shipyard.\p"
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1295 "data/maps/SlateportCity/scripts.pory"

# 1296 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign: @ 81DEB5A
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport Harbor\p"
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. Tidal.”$"
# 1300 "data/maps/SlateportCity/scripts.pory"

# 1301 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign: @ 81DEBA0
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "Tradeback Guy's House\n"
# 1303 "data/maps/SlateportCity/scripts.pory"
	.string "“Evolution made easier.”$"
# 1304 "data/maps/SlateportCity/scripts.pory"

# 1305 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries: @ 81DEBCE
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild Pokémon gets hurt, it heals\n"
# 1307 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on Berries.\p"
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from Berries.\p"
# 1311 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1312 "data/maps/SlateportCity/scripts.pory"
	.string "To turn Berries into medicine,\n"
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "in Berries!\p"
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1318 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1319 "data/maps/SlateportCity/scripts.pory"

# 1320 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder: @ 81DED27
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1322 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon Centers for crushing Berries.\p"
# 1323 "data/maps/SlateportCity/scripts.pory"
	.string "The Berry Crush machines are at\n"
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "the Direct Corner upstairs.\p"
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make Berry Powder for\n"
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1328 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1329 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of Berry Powder.$"
# 1330 "data/maps/SlateportCity/scripts.pory"

# 1331 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder: @ 81DEE40
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1333 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder?$"
# 1334 "data/maps/SlateportCity/scripts.pory"

# 1335 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt: @ 81DEE67
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1338 "data/maps/SlateportCity/scripts.pory"

# 1339 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem: @ 81DEE90
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1341 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder for one {STR_VAR_1}?$"
# 1342 "data/maps/SlateportCity/scripts.pory"

# 1343 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder: @ 81DEEC9
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder.$"
# 1346 "data/maps/SlateportCity/scripts.pory"

# 1347 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse: @ 81DEEF7
# 1348 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine Berry Powder.\n"
# 1349 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder for something else?$"
# 1352 "data/maps/SlateportCity/scripts.pory"

# 1353 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe: @ 81DEF79
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1355 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder, bring it to me, please!$"
# 1356 "data/maps/SlateportCity/scripts.pory"

# 1357 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder: @ 81DEFBC
# 1358 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1359 "data/maps/SlateportCity/scripts.pory"
	.string "Berry Powder for some medicine.\p"
# 1360 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1361 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1362 "data/maps/SlateportCity/scripts.pory"

# 1363 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway: @ 81DF032
# 1364 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: Huh?\n"
# 1365 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1366 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1367 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's Scott.\p"
# 1368 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw Team Aqua run away from\n"
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1370 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1371 "data/maps/SlateportCity/scripts.pory"

# 1372 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer: @ 81DF0FE
# 1373 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: Hmm…\n"
# 1374 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this Trainer…$"
# 1375 "data/maps/SlateportCity/scripts.pory"

# 1376 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther: @ 81DF12B
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: All right! I think you're going\n"
# 1378 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1379 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1380 "data/maps/SlateportCity/scripts.pory"
	.string "Pokénavs.\p"
# 1381 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1382 "data/maps/SlateportCity/scripts.pory"

# 1383 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott: @ 81DF1A6
# 1384 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this Scott person\n"
# 1385 "data/maps/SlateportCity/scripts.pory"
	.string "in the Pokénav.$"
# 1386 "data/maps/SlateportCity/scripts.pory"

# 1387 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou: @ 81DF1D3
# 1388 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: What I'd like to do is tag along\n"
# 1389 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1390 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1391 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1392 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1393 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1394 "data/maps/SlateportCity/scripts.pory"

# 1395 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge: @ 81DF28C
# 1396 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: Oh, hey!\n"
# 1397 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1398 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1399 "data/maps/SlateportCity/scripts.pory"
	.string "to take the Battle Tent challenge?\p"
# 1400 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1401 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1402 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough Trainer is\n"
# 1403 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the Battle Tent!\p"
# 1404 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"

	.align 2
# 1407 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 1408 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RED_SHARD
# 1409 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLUE_SHARD
# 1410 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GREEN_SHARD
# 1411 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_YELLOW_SHARD
	.2byte ITEM_NONE

SlateportCity_EventScript_PowerTMClerk::
# 1416 "data/maps/SlateportCity/scripts.pory"
	lock
# 1417 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1418 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SHOP_TYPE, MART_TYPE_NORMAL
# 1419 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SHOP_MONEY_TYPE, MART_MONEY_TYPE_BATTLE_POINTS
# 1420 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_EventScript_PowerTMClerk_Text_0
# 1421 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1422 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 1423 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 1424 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_EventScript_PowerTMClerk_Text_0:
# 1420 "data/maps/SlateportCity/scripts.pory"
	.string "Welcome to my Shop!, How may I serve\n"
	.string "you?$"
