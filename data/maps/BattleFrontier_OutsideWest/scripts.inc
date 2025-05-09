# 1 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 2 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
.set LOCALID_SS_TIDAL, 2
# 3 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
.set LOCALID_FERRY_ATTENDANT, 3
# 4 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
.set LOCALID_MANIAC_1, 9
# 5 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
.set LOCALID_MANIAC_2, 10
# 6 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
.set LOCALID_GIRL, 12
# 7 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
.set LOCALID_CAMPER, 14
# 8 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
.set LOCALID_FISHERMAN_2, 18
# 9 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
.set LOCALID_MAN_4, 23
# 10 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 11 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_MapScripts:: @ 823D3E1
# 12 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_OnTransition
# 13 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.byte 0
# 14 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 15 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_OnTransition: @ 823D3E7
# 16 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 17 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 18 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 19 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 20 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryAttendant:: @ 823D3F0
# 21 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 22 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 23 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 24 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo
# 25 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 26 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 27 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 28 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 29 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination:: @ 823D416
# 30 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	multichoicedefault 18, 6, MULTI_SSTIDAL_BATTLE_FRONTIER, 2, 0
# 31 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 0, BattleFrontier_OutsideWest_EventScript_FerryToSlateport
# 33 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 1, BattleFrontier_OutsideWest_EventScript_FerryToLilycove
# 34 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case 2, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 35 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
# 36 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 37 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 38 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_NoSSTicket:: @ 823D44E
# 39 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard, MSGBOX_DEFAULT
# 40 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 41 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 42 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 43 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToSlateport:: @ 823D458
# 44 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SlateportItIs, MSGBOX_YESNO
# 45 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
# 46 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 47 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 48 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 49 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 255, 8, 11
# 50 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 51 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 52 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 53 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 54 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FerryToLilycove:: @ 823D483
# 55 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LilycoveItIs, MSGBOX_YESNO
# 56 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, NO
# 57 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
# 58 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 59 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
# 60 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 255, 8, 11
# 61 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitstate
# 62 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 63 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 64 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 65 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination:: @ 823D4AE
# 66 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo
# 67 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 68 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
# 69 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 70 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 71 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BoardFerry:: @ 823D4BA
# 72 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 73 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestDown
# 74 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 75 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 30
# 76 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	hideobjectat LOCALID_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
# 77 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	special HideFollower
# 78 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 79 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 80 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 81 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 82 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CancelFerrySelect:: @ 823D4D8
# 83 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime, MSGBOX_DEFAULT
# 84 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 85 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 86 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 87 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleDomeSign:: @ 823D4E2
# 88 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign, MSGBOX_SIGN
# 89 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 90 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 91 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattleFactorySign:: @ 823D4EB
# 92 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign, MSGBOX_SIGN
# 93 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 94 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 95 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_BattlePikeSign:: @ 823D4F4
# 96 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign, MSGBOX_SIGN
# 97 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 98 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 99 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused. Of note, Battle Tower is in the East section in the final release
# 100 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC1:: @ 823D4FD
# 101 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower, MSGBOX_NPC
# 102 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 103 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 104 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 105 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC2:: @ 823D4FD
# 106 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower, MSGBOX_NPC
# 107 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 108 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 109 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy1:: @ 823D50F
# 110 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends, MSGBOX_NPC
# 111 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 112 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 113 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman2:: @ 823D518
# 114 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 115 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 116 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
# 117 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 118 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_FISHERMAN_2, Common_Movement_FaceAwayPlayer
# 119 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 120 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 121 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 122 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 123 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 124 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man1:: @ 823D52D
# 125 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere, MSGBOX_NPC
# 126 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 127 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 128 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac1:: @ 823D536
# 129 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 130 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 131 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 132 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 133 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Maniac2:: @ 823D53D
# 134 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 135 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
# 136 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 137 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 138 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk:: @ 823D544
# 139 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_MANIAC_1, Common_Movement_WalkInPlaceFastestRight
# 140 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 141 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons, MSGBOX_DEFAULT
# 142 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_MANIAC_2, Common_Movement_WalkInPlaceFastestLeft
# 143 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 144 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons, MSGBOX_DEFAULT
# 145 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 146 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 25
# 147 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_MANIAC_1, Common_Movement_WalkInPlaceFastestUp
# 148 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_MANIAC_2, Common_Movement_WalkInPlaceFastestUp
# 149 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 150 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 151 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 152 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 153 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Camper:: @ 823D57F
# 154 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 155 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 156 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	delay 20
# 157 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 158 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 159 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 160 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory
# 161 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 162 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 163 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 164 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
# 165 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons, MSGBOX_DEFAULT
# 166 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 167 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 168 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 169 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperFaceFactory:: @ 823D5BA
# 170 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_CAMPER, Common_Movement_WalkInPlaceFastestUp
# 171 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 172 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 173 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 174 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory:: @ 823D5C5
# 175 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 176 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 177 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Girl:: @ 823D5C6
# 178 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 179 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 180 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	message BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
# 181 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmessage
# 182 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 183 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq BattleFrontier_OutsideWest_EventScript_GirlShudderNorth
# 184 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 185 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq BattleFrontier_OutsideWest_EventScript_GirlShudderSouth
# 186 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 187 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq BattleFrontier_OutsideWest_EventScript_GirlShudderWest
# 188 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 189 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	call_if_eq BattleFrontier_OutsideWest_EventScript_GirlShudderEast
# 190 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitbuttonpress
# 191 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 192 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 193 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 194 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderNorth:: @ 823D5FD
# 195 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderNorth
# 196 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 197 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 198 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 199 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderSouth:: @ 823D608
# 200 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderSouth
# 201 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 202 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 203 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 204 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderWest:: @ 823D613
# 205 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderWest
# 206 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 207 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 208 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 209 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_GirlShudderEast:: @ 823D61E
# 210 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderEast
# 211 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 212 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	return
# 213 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 214 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderNorth: @ 823D629
# 215 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_fastest_down
# 216 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_fastest_down
# 217 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 218 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 219 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderSouth: @ 823D62C
# 220 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_fastest_up
# 221 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_fastest_up
# 222 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 223 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 224 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderWest: @ 823D62F
# 225 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_fastest_right
# 226 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_fastest_right
# 227 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 228 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 229 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Movement_GirlShudderEast: @ 823D632
# 230 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_fastest_left
# 231 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	walk_in_place_fastest_left
# 232 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	step_end
# 233 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 234 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman2:: @ 823D635
# 235 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 236 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 237 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors, MSGBOX_DEFAULT
# 238 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	random 2
# 239 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	compare VAR_RESULT, 1
# 240 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto_if_eq BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors
# 241 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	goto BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors
# 242 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 243 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 244 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors:: @ 823D653
# 245 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge, MSGBOX_DEFAULT
# 246 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 247 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 248 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 249 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors:: @ 823D65D
# 250 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge, MSGBOX_DEFAULT
# 251 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 252 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 253 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 254 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Fisherman1:: @ 823D667
# 255 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling, MSGBOX_NPC
# 256 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 257 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 258 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
@ Unused
# 259 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_UnusedNPC3:: @ 823D670
# 260 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa, MSGBOX_NPC
# 261 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 262 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 263 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Gentleman:: @ 823D679
# 264 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome, MSGBOX_NPC
# 265 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 266 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 267 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Lass:: @ 823D682
# 268 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol, MSGBOX_NPC
# 269 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 270 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 271 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_ExpertM:: @ 823D68B
# 272 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe, MSGBOX_NPC
# 273 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 274 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 275 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man2:: @ 823D694
# 276 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo, MSGBOX_NPC
# 277 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 278 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 279 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman1:: @ 823D69D
# 280 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier, MSGBOX_NPC
# 281 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 282 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 283 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan1:: @ 823D6A6
# 284 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople, MSGBOX_NPC
# 285 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 286 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 287 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_FatMan2:: @ 823D6AF
# 288 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike, MSGBOX_NPC
# 289 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 290 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 291 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Woman3:: @ 823D6B8
# 292 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 293 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet, MSGBOX_DEFAULT
# 294 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 295 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 296 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 297 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Boy2:: @ 823D6C3
# 298 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 299 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering, MSGBOX_DEFAULT
# 300 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 301 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 302 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 303 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_OldMan:: @ 823D6CE
# 304 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_DomeAceIsMine, MSGBOX_NPC
# 305 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 306 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 307 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_Man4:: @ 823D6D7
# 308 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	lock
# 309 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	faceplayer
# 310 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers, MSGBOX_DEFAULT
# 311 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	closemessage
# 312 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	applymovement LOCALID_MAN_4, Common_Movement_FaceOriginalDirection
# 313 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	waitmovement 0
# 314 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	release
# 315 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 316 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 317 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_EventScript_PokefanF:: @ 823D6EE
# 318 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier, MSGBOX_NPC
# 319 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	end
# 320 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 321 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleDomeSign: @ 823D6F7
# 322 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the Battle Dome!\n"
# 323 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Your path to the invincible superstar!$"
# 324 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 325 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattleFactorySign: @ 823D737
# 326 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the Battle Factory!\n"
# 327 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Seek out the toughest Pokémon!$"
# 328 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 329 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BattlePikeSign: @ 823D772
# 330 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the Battle Pike!\n"
# 331 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Choose one of three paths!$"
# 332 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 333 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThisIsBattleTower: @ 823D7A6
# 334 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This is the Battle Tower.\p"
# 335 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Trainers bring their best-raised\n"
# 336 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pokémon for elimination-style matches.$"
# 337 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 338 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MayISeeYourTicket: @ 823D808
# 339 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 340 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "May I see your Ticket?$"
# 341 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 342 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard: @ 823D842
# 343 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} doesn't have the Ticket…\p"
# 344 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm terribly sorry.\p"
# 345 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You must have a Ticket to board\n"
# 346 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the ferry.$"
# 347 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 348 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo: @ 823D89D
# 349 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "{PLAYER} flashed the Ticket.\p"
# 350 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 351 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "And where would you like to go?$"
# 352 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 353 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SlateportItIs: @ 823D8F2
# 354 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Slateport City it is, then!$"
# 355 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 356 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LilycoveItIs: @ 823D90E
# 357 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Lilycove City it is, then!$"
# 358 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 359 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime: @ 823D929
# 360 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please sail with us another time!$"
# 361 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 362 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_PleaseBoardFerry: @ 823D94B
# 363 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 364 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "departure.$"
# 365 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 366 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo: @ 823D97A
# 367 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Then, where would you like to go?$"
# 368 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 369 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends: @ 823D99C
# 370 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm the best out of all my friends.\n"
# 371 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But here…\l"
# 372 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've been useless!$"
# 373 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 374 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_CantFindBattleTower: @ 823D9DD
# 375 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I want to go to the Battle Tower,\n"
# 376 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "but I can't find it even though I have\l"
# 377 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a map of the Battle Frontier.\p"
# 378 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "This place is just too big!$"
# 379 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 380 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere: @ 823DA60
# 381 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I wanted to take a challenge as soon\n"
# 382 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "as I arrived here.\p"
# 383 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But on the way, I got seasick…\n"
# 384 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Urrrrp…$"
# 385 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 386 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere: @ 823DABF
# 387 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's not as if just anyone can come\n"
# 388 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "here, you know?\p"
# 389 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Only those Trainers who've been\n"
# 390 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "recognized as tough are brought here.\p"
# 391 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's why many Trainers don't even\n"
# 392 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "know about the Battle Frontier.$"
# 393 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 394 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons: @ 823DB7D
# 395 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Hey, bro…\p"
# 396 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Are you sure we can make challenges\n"
# 397 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "even if we don't have any Pokémon?$"
# 398 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 399 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons: @ 823DBCE
# 400 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Uh…\n"
# 401 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure it'll be okay.\p"
# 402 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I think…\p"
# 403 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But remember that big scary guy?\n"
# 404 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "He said, “I'll lend you Pokémon!”$"
# 405 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 406 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons: @ 823DC36
# 407 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's the Battle Factory.\n"
# 408 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You can rent strong Pokémon there.\p"
# 409 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But it makes me wonder.\n"
# 410 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Who's raising those rental Pokémon?$"
# 411 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 412 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper: @ 823DCB0
# 413 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm scared of going into the Battle\n"
# 414 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pike because of Seviper…\p"
# 415 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "B-but I came all the way here, so I will\n"
# 416 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "try to conquer everything!\l"
# 417 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "…Shudder…$"
# 418 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 419 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors: @ 823DD3B
# 420 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let's play rock, paper, scissors!\n"
# 421 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "One, two, three!\p"
# 422 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "… … … … … …$"
# 423 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 424 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WonIllTakePikeChallenge: @ 823DD7A
# 425 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Yay! I won!\n"
# 426 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I will take the Battle Pike challenge!$"
# 427 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 428 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LostIllPutOffPikeChallenge: @ 823DDAD
# 429 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, no…\n"
# 430 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I lost.\p"
# 431 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I guess I'm not very lucky today.\n"
# 432 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll put off my Battle Pike challenge\l"
# 433 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "until tomorrow.$"
# 434 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 435 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_ChooseFishingOverBattling: @ 823DE15
# 436 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I believe I'm the only person here who,\n"
# 437 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "for some unknown reason, would choose\l"
# 438 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "fishing over battling.\p"
# 439 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? You can't catch anything here?\n"
# 440 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's disappointing…$"
# 441 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 442 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_KeepBattlingUntilIGetSymbol: @ 823DEB4
# 443 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Today, I'm going to keep battling, no\n"
# 444 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "matter what, until I get a Symbol.$"
# 445 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 446 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_YoureOffToChallengeDome: @ 823DEFD
# 447 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh? You're off to challenge\n"
# 448 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "the Battle Dome?\p"
# 449 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll wish you the best of luck.\n"
# 450 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Let us both win our way up and meet\l"
# 451 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in challenges.$"
# 452 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 453 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa: @ 823DF7D
# 454 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Grandpa, over here!\n"
# 455 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The Battle Dome is here!\l"
# 456 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Go get 'em, Grandpa!$"
# 457 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 458 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_WontLetGentlemenBeatMe: @ 823DFBF
# 459 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Ah, so this here is the Battle Dome?\n"
# 460 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I won't let Gentlemen beat me!\p"
# 461 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But where is the entrance?$"
# 462 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 463 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_NothingHereNotLongAgo: @ 823E01E
# 464 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "There used to be nothing here not all\n"
# 465 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "that long ago.\p"
# 466 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But, now look at this place! Amazing!\n"
# 467 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'll bring my mother out to see this.$"
# 468 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 469 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FinallyArrivedAtFrontier: @ 823E09F
# 470 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I've finally arrived at the Battle\n"
# 471 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Frontier!\p"
# 472 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I'm sure to grab attention with\n"
# 473 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "my looks and ability!$"
# 474 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 475 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_SquareFilledWithToughPeople: @ 823E102
# 476 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…\p"
# 477 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It looks like this square's filled with\n"
# 478 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "tough people.\p"
# 479 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Munch, munch…$"
# 480 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 481 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MetOlderGirlAtPike: @ 823E154
# 482 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 483 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "A while back, I met this older girl\n"
# 484 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "at the Battle Pike.\p"
# 485 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She had these eyes that were scary\n"
# 486 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "in a real ornery way.\p"
# 487 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…\p"
# 488 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "She got all furious: “Will you quit\n"
# 489 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "eating!” Then she whaled on me.\p"
# 490 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It was a hair-raising kind of\n"
# 491 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "scary experience, sure enough.\p"
# 492 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Crunch, munch…$"
# 493 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 494 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_LastTimeOurEyesMet: @ 823E273
# 495 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Huh? Will you listen to yourself?\n"
# 496 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That's nothing!\p"
# 497 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Why, the last time I cheered for him,\n"
# 498 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "our eyes met and sparks flew!$"
# 499 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 500 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceLookedBecauseOfMyCheering: @ 823E2E9
# 501 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Whaaaaaat?!\n"
# 502 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Pfft!\p"
# 503 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "That only happened because\n"
# 504 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I happened to be sitting next to you!\p"
# 505 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The Dome Ace only looked our way\n"
# 506 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "because my cheering was so loud!$"
# 507 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 508 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_DomeAceIsMine: @ 823E37E
# 509 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, shush!\n"
# 510 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Keep that racket down!\p"
# 511 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "You fair-weather fans should stick\n"
# 512 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "to cheering for some Gym Leader!\p"
# 513 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The Dome Ace is mine!\n"
# 514 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "The only idol for me!$"
# 515 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 516 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers: @ 823E410
# 517 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Those people squabbling over there…\p"
# 518 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It's hard to believe, but they once\n"
# 519 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "were Trainers, and good ones, too.\p"
# 520 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They used to be incredibly tough,\n"
# 521 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "and they were famous, too.\p"
# 522 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "But they were obliterated by this\n"
# 523 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "certain Trainer at a tournament.\p"
# 524 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They were so thoroughly whipped,\n"
# 525 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "they became smitten by the Trainer.\p"
# 526 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Now they're just fans of the Trainer.\n"
# 527 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "They go cheer for their idol at the\l"
# 528 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Battle Dome every day now.$"
# 529 "data/maps/BattleFrontier_OutsideWest/scripts.pory"

# 530 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier: @ 823E5A5
# 531 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "I heard a rumor that someone saw\n"
# 532 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "a Pokémon with an unusually long tail\l"
# 533 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "somewhere in the Battle Frontier.\p"
# 534 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "It must be adorable. I'm sure of it…\p"
# 535 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "Oh, challenges can wait. I feel driven\n"
# 536 "data/maps/BattleFrontier_OutsideWest/scripts.pory"
	.string "to find the delightful creature!$"
