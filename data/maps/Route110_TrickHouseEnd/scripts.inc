# 1 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 2 "data/maps/Route110_TrickHouseEnd/scripts.pory"
.set LOCALID_TRICK_MASTER, 1
# 3 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 4 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_MapScripts:: @ 826ACAF
# 5 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_TrickHouseEnd_OnResume
# 6 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_TrickHouseEnd_OnTransition
# 7 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_TrickHouseEnd_OnFrame
# 8 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route110_TrickHouseEnd_OnWarp
# 9 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.byte 0
# 10 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 11 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_OnResume: @ 826ACC4
# 12 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_TEMP_1, 1
# 13 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq Route110_TrickHouseEnd_EventScript_SetDoorClosedMetatile
# 14 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 15 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 16 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_OnTransition: @ 826ACD0
# 17 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_1, 0
# 18 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_2, 0
# 19 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	special SetTrickHouseNuggetFlag
# 20 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 21 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 22 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_OnWarp: @ 826ACDE
# 23 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script_2 VAR_TEMP_2, 0, Route110_TrickHouseEnd_EventScript_SetTrickMasterPos
# 24 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.2byte 0
# 25 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 26 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_SetTrickMasterPos:: @ 826ACE8
# 27 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	addobject LOCALID_TRICK_MASTER
# 28 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	showobjectat LOCALID_TRICK_MASTER, MAP_ROUTE110_TRICK_HOUSE_END
# 29 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_EAST
# 30 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 31 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 32 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_OnFrame: @ 826ACF5
# 33 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, Route110_TrickHouseEnd_EventScript_CloseDoor
# 34 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.2byte 0
# 35 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 36 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CloseDoor:: @ 826ACFF
# 37 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_1, 1
# 38 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_SetDoorClosedMetatile
# 39 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	special DrawWholeMapView
# 40 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 41 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 42 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_SetDoorClosedMetatile:: @ 826AD0D
# 43 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setmetatile 10, 1, METATILE_GenericBuilding_TrickHouse_Door_Closed, 1
# 44 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 45 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 46 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMaster:: @ 826AD17
# 47 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	lock
# 48 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	faceplayer
# 49 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouveMadeItToMe, MSGBOX_DEFAULT
# 50 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TEMP_2, 1
# 51 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	switch VAR_TRICK_HOUSE_LEVEL
# 52 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 0, Route110_TrickHouseEnd_EventScript_CompletedPuzzle1
# 53 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 1, Route110_TrickHouseEnd_EventScript_CompletedPuzzle2
# 54 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 2, Route110_TrickHouseEnd_EventScript_CompletedPuzzle3
# 55 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 3, Route110_TrickHouseEnd_EventScript_CompletedPuzzle4
# 56 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 4, Route110_TrickHouseEnd_EventScript_CompletedPuzzle5
# 57 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 5, Route110_TrickHouseEnd_EventScript_CompletedPuzzle6
# 58 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 6, Route110_TrickHouseEnd_EventScript_CompletedPuzzle7
# 59 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 7, Route110_TrickHouseEnd_EventScript_CompletedPuzzle8
# 60 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 61 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 62 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle1:: @ 826AD84
# 63 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToPlantTrees, MSGBOX_DEFAULT
# 64 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 65 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 66 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_STARDUST
# 67 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
# 68 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq Route110_TrickHouseEnd_EventScript_BagFull
# 69 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 70 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 71 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 72 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 73 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 74 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 75 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle2:: @ 826ADC0
# 76 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToMakeMaze, MSGBOX_DEFAULT
# 77 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 78 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 79 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_TIMER_BALL
# 80 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
# 81 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq Route110_TrickHouseEnd_EventScript_BagFull
# 82 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 83 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 84 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 85 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 86 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 87 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 88 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle3:: @ 826ADFC
# 89 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToPreparePanels, MSGBOX_DEFAULT
# 90 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 91 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 92 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_HARD_STONE
# 93 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
# 94 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq Route110_TrickHouseEnd_EventScript_BagFull
# 95 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 96 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 97 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 98 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 99 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 100 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 101 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle4:: @ 826AE38
# 102 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToShoveBoulders, MSGBOX_DEFAULT
# 103 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 104 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 105 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_SMOKE_BALL
# 106 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
# 107 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq Route110_TrickHouseEnd_EventScript_BagFull
# 108 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 109 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 110 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 111 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 112 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 113 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 114 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle5:: @ 826AE74
# 115 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls, MSGBOX_DEFAULT
# 116 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 117 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 118 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_TM12
# 119 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
# 120 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq Route110_TrickHouseEnd_EventScript_BagFull
# 121 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 122 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 123 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 124 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 125 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 126 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 127 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle6:: @ 826AEB0
# 128 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightToInstallDoors, MSGBOX_DEFAULT
# 129 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 130 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 131 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_MAGNET
# 132 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
# 133 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq Route110_TrickHouseEnd_EventScript_BagFull
# 134 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 135 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 136 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 137 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 138 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 139 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 140 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle7:: @ 826AEEC
# 141 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightSettingUpArrows, MSGBOX_DEFAULT
# 142 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward, MSGBOX_DEFAULT
# 143 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 144 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	giveitem ITEM_MAGNET
# 145 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
# 146 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq Route110_TrickHouseEnd_EventScript_BagFull
# 147 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou, MSGBOX_DEFAULT
# 148 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 149 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 150 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 151 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 152 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 153 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_CompletedPuzzle8:: @ 826AF28
# 154 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_AllNightPolishingFloors, MSGBOX_DEFAULT
# 155 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 156 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 157 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwaySouth
# 158 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 159 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayNorth
# 160 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 161 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayWest
# 162 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 163 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayEast
# 164 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 30
# 165 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry, MSGBOX_DEFAULT
# 166 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 167 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_FacePlayer
# 168 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 169 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 30
# 170 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent, MSGBOX_DEFAULT
# 171 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 0
# 172 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_ChooseTent
# 173 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	compare VAR_RESULT, FALSE
# 174 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call_if_eq Route110_TrickHouseEnd_EventScript_NoRoomForTent
# 175 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_LeavingOnJourney, MSGBOX_DEFAULT
# 176 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Route110_TrickHouseEnd_EventScript_TrickMasterExit
# 177 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	special ResetTrickHouseNuggetFlag
# 178 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	release
# 179 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 180 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 181 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_ChooseTent:: @ 826AFA5
# 182 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	multichoice 0, 0, MULTI_TENT, 1
# 183 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	switch VAR_RESULT
# 184 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	case 0, Route110_TrickHouseEnd_EventScript_GiveRedTent
# 185 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	goto Route110_TrickHouseEnd_EventScript_GiveBlueTent
# 186 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 187 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_GiveRedTent:: @ 826AFBF
# 188 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	givedecoration DECOR_RED_TENT
# 189 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 190 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 191 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_GiveBlueTent:: @ 826AFC7
# 192 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	givedecoration DECOR_BLUE_TENT
# 193 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 194 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 195 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterExit:: @ 826AFCF
# 196 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterSpin
# 197 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 198 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	playse SE_M_EXPLOSION
# 199 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouse_Movement_TrickMasterJumpAway
# 200 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 201 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	removeobject LOCALID_TRICK_MASTER
# 202 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	addvar VAR_TRICK_HOUSE_LEVEL, 1
# 203 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 204 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 205 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_BagFull:: @ 826AFEF
# 206 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Common_EventScript_BagIsFull
# 207 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_NoRoomForThis, MSGBOX_DEFAULT
# 208 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 1
# 209 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 210 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 211 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_NoRoomForTent:: @ 826B002
# 212 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	call Common_EventScript_NoRoomForDecor
# 213 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_NoRoomInPC, MSGBOX_DEFAULT
# 214 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	setvar VAR_TRICK_HOUSE_PRIZE_PICKUP, 1
# 215 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 216 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 217 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwaySouth:: @ 826B015
# 218 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_WalkInPlaceFastestDown
# 219 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 220 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 221 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 222 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayNorth:: @ 826B020
# 223 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_WalkInPlaceFastestUp
# 224 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 225 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 226 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 227 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayWest:: @ 826B02B
# 228 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_WalkInPlaceFastestLeft
# 229 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 230 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 231 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 232 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterFaceAwayEast:: @ 826B036
# 233 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_WalkInPlaceFastestRight
# 234 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 235 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	return
# 236 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 237 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_EventScript_TrickMasterExitTrigger:: @ 826B041
# 238 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	lockall
# 239 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_WEST
# 240 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	playse SE_PIN
# 241 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Common_Movement_ExclamationMark
# 242 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 243 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 20
# 244 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement LOCALID_TRICK_MASTER, Route110_TrickHouseEnd_Movement_TrickMasterSurprise
# 245 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 246 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	playse SE_M_EXPLOSION
# 247 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
# 248 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 249 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	msgbox Route110_TrickHouseEnd_Text_YoureIgnoringMe, MSGBOX_DEFAULT
# 250 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	closemessage
# 251 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route110_TrickHouseEnd_Movement_KeepPlayerInRoom
# 252 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	waitmovement 0
# 253 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	delay 4
# 254 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	turnobject LOCALID_TRICK_MASTER, DIR_EAST
# 255 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	releaseall
# 256 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	end
# 257 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 258 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Movement_KeepPlayerInRoom: @ 826B089
# 259 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	walk_down
# 260 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	step_end
# 261 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 262 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Movement_TrickMasterSurprise: @ 826B08B
# 263 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	jump_in_place_left
# 264 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	step_end
# 265 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 266 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_YouveMadeItToMe: @ 826B08D
# 267 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Aak!\n"
# 268 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You've made it to me?\l"
# 269 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Hmmm… You're sharp!$"
# 270 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 271 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToPlantTrees: @ 826B0BC
# 272 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to plant all those\n"
# 273 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "trees…\p"
# 274 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You're almost my equal in greatness by\n"
# 275 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "one, two, three, four, five, six places!$"
# 276 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 277 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToMakeMaze: @ 826B13B
# 278 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to make the maze…\p"
# 279 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You're almost my equal in greatness by\n"
# 280 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "one, two, three, four, five places!$"
# 281 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 282 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToPreparePanels: @ 826B1AD
# 283 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to prepare\n"
# 284 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "the wall panels…\p"
# 285 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You're almost my equal in greatness by\n"
# 286 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "one, two, three, four places!$"
# 287 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 288 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToShoveBoulders: @ 826B223
# 289 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to shove in those\n"
# 290 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "boulders…\p"
# 291 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You're almost my equal in greatness by\n"
# 292 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "one, two, three places!$"
# 293 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 294 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls: @ 826B293
# 295 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to make Mechadolls\n"
# 296 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "and another to think up the quiz…\p"
# 297 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You're almost my equal in greatness by\n"
# 298 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "one, two places!$"
# 299 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 300 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightToInstallDoors: @ 826B315
# 301 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night to install\n"
# 302 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "the doors…\p"
# 303 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You're almost my equal in greatness!$"
# 304 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 305 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightSettingUpArrows: @ 826B365
# 306 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night setting up arrows…\p"
# 307 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You're my equal in greatness!$"
# 308 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 309 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_AllNightPolishingFloors: @ 826B3AB
# 310 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It took me all night polishing floors…\p"
# 311 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You're above me in greatness!\n"
# 312 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Possibly…$"
# 313 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 314 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry: @ 826B3FA
# 315 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Wh-what should I do?\n"
# 316 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "My fountain of ideas for tricks has\l"
# 317 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "run dry…\p"
# 318 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Perhaps it is time I toured the country\n"
# 319 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "on a quest to devise new tricks…$"
# 320 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 321 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent: @ 826B485
# 322 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "I hate to admit defeat, but you have\n"
# 323 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "bested me!\p"
# 324 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Still, you must have been reeled in by\n"
# 325 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "my charisma for you to visit me again\l"
# 326 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "and again. Yes, you must have!\p"
# 327 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "But that has nothing to do with my\n"
# 328 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "losing!\p"
# 329 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "In recognition of the friendship\n"
# 330 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "between you, the driven, and the genius\l"
# 331 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "that is myself, I demand that you take\l"
# 332 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "this keepsake!\p"
# 333 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Actually there are two--\n"
# 334 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "a Red Tent and a Blue Tent.\l"
# 335 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Which do you prefer?$"
# 336 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 337 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_NoRoomInPC: @ 826B615
# 338 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "What? No room in your PC?\n"
# 339 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "What am I to make of that?\p"
# 340 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "I wish I could say that, but I am much\n"
# 341 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "too kind and caring, so come back later!$"
# 342 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 343 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_LeavingOnJourney: @ 826B69A
# 344 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "… … … … … …\p"
# 345 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "I am leaving on a journey of discovery.\n"
# 346 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "A quest in search of new tricks.\p"
# 347 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "I wish that you will one day visit and\n"
# 348 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "entertain me again.\p"
# 349 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "And now, farewell!$"
# 350 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 351 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward: @ 826B73D
# 352 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Fine!\n"
# 353 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You have earned this reward!$"
# 354 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 355 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_NoRoomForThis: @ 826B760
# 356 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "What? Have you no room for this?\n"
# 357 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "What manner of items do you carry?\p"
# 358 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "But fine, since you've reached me,\n"
# 359 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "your reward will be with me till later.$"
# 360 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 361 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou: @ 826B7EF
# 362 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Scrub that smug smirk from your face!\n"
# 363 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "It's much too early to think you've won!\p"
# 364 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "I'll make new tricks to stump you, I will.\n"
# 365 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "You may mock me only when you're done.\p"
# 366 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Come back for the next exciting\n"
# 367 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "installment!$"
# 368 "data/maps/Route110_TrickHouseEnd/scripts.pory"

# 369 "data/maps/Route110_TrickHouseEnd/scripts.pory"
Route110_TrickHouseEnd_Text_YoureIgnoringMe: @ 826B8BD
# 370 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Now, now! You're ignoring me now?\n"
# 371 "data/maps/Route110_TrickHouseEnd/scripts.pory"
	.string "Now that, I consider heartbreaking!$"
