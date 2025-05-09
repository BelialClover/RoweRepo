# 1 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 2 "data/maps/Route104_MrBrineysHouse/scripts.pory"
.set LOCALID_BRINEY, 1
# 3 "data/maps/Route104_MrBrineysHouse/scripts.pory"
.set LOCALID_PEEKO, 2
# 4 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 5 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_MapScripts:: @ 8229D2E
# 6 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.byte 0
# 7 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 8 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_OnTransition: @ 8229D34
# 9 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_LANDMARK_MR_BRINEY_HOUSE
# 10 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	compare VAR_BRINEY_HOUSE_STATE, 1
# 11 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call_if_eq Route104_MrBrineysHouse_EventScript_SetBrineyPeekoPos
# 12 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call_if_set FLAG_RECEIVED_POKENAV, Route104_MrBrineysHouse_EventScript_HideRustboroRival
# 13 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 14 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 15 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_HideRustboroRival:: @ 8229D4C
# 16 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 17 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	return
# 18 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 19 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SetBrineyPeekoPos:: @ 8229D50
# 20 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_BRINEY, 9, 3
# 21 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_BRINEY, MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_UP_RIGHT
# 22 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectxyperm LOCALID_PEEKO, 9, 6
# 23 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setobjectmovementtype LOCALID_PEEKO, MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_RIGHT_DOWN
# 24 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	return
# 25 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 26 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailingIntro:: @ 8229D8A
# 27 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_MR_BRINEY_SAILING_INTRO
# 28 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_WaitUpPeeko, MSGBOX_DEFAULT
# 29 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford, MSGBOX_YESNO
# 30 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	compare VAR_RESULT, NO
# 31 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 32 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 33 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 34 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 35 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_WhereAreWeBound:: @ 8229DAE
# 36 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	message Route104_MrBrineysHouse_Text_WhereAreWeBound
# 37 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmessage
# 38 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	multichoicedefault 20, 8, MULTI_BRINEY_OFF_DEWFORD, 1, 0
# 39 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	switch VAR_RESULT
# 40 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case 0, Route104_MrBrineysHouse_EventScript_SailToDewford
# 41 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case 1, Route104_MrBrineysHouse_EventScript_DeclineSailing
# 42 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	case MULTI_B_PRESSED, Route104_MrBrineysHouse_EventScript_DeclineSailing
# 43 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 44 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 45 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailBothDeliveries:: @ 8229DE1
# 46 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford, MSGBOX_YESNO
# 47 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	compare VAR_RESULT, NO
# 48 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 49 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 50 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 51 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 52 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailDeliverPackage:: @ 8229DFA
# 53 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford, MSGBOX_YESNO
# 54 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	compare VAR_RESULT, NO
# 55 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto_if_eq Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing
# 56 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	goto Route104_MrBrineysHouse_EventScript_SailToDewford
# 57 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 58 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 59 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_DeclineDeliverySailing:: @ 8229E13
# 60 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_DeclineDeliverySail, MSGBOX_DEFAULT
# 61 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 62 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 63 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 64 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_DeclineSailing:: @ 8229E1D
# 65 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail, MSGBOX_DEFAULT
# 66 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 67 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 68 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 69 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_SailToDewford:: @ 8229E27
# 70 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_SetSailForDewford, MSGBOX_DEFAULT
# 71 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 72 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 1
# 73 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY
# 74 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 75 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 76 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 77 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 78 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 79 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	setflag FLAG_HIDE_ROUTE_104_RIVAL
# 80 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	warp MAP_ROUTE104, 255, 13, 51
# 81 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitstate
# 82 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	releaseall
# 83 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 84 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 85 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_EventScript_Peeko:: @ 8229E5D
# 86 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 87 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 88 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitse
# 89 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 90 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_Text_Peeko, MSGBOX_DEFAULT
# 91 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	waitmoncry
# 92 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
# 93 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	end
# 94 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 95 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_WaitUpPeeko: @ 8229E70
# 96 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Hold on, lass!\n"
# 97 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Wait up, Peeko!$"
# 98 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 99 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_ItsYouLetsSailToDewford: @ 8229E9B
# 100 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Hm? You're {PLAYER}{KUN}!\n"
# 101 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You saved my darling Peeko!\l"
# 102 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "We owe so much to you!\p"
# 103 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "What's that?\n"
# 104 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You want to sail with me?\p"
# 105 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Hmhm…\p"
# 106 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You have a Letter bound for Dewford\n"
# 107 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "and a package for Slateport, then?\p"
# 108 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Quite the busy life you must lead!\p"
# 109 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "But, certainly, what you're asking is\n"
# 110 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "no problem at all.\p"
# 111 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You've come to the right man!\n"
# 112 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "We'll set sail for Dewford.$"
# 113 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 114 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_SetSailForDewford: @ 8229FE9
# 115 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Dewford it is, then!\p"
# 116 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Anchors aweigh!\n"
# 117 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Peeko, we're setting sail, my darling!$"
# 118 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 119 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_DeclineDeliverySail: @ 822A041
# 120 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Is that so?\n"
# 121 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Your deliveries can wait?\p"
# 122 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 123 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "you want to set sail!$"
# 124 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 125 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_NeedToMakeDeliveriesSailToDewford: @ 822A0AD
# 126 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
# 127 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "I know exactly what you want to say!\p"
# 128 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You're to deliver a Letter to Dewford\n"
# 129 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "and a package to Slateport.\p"
# 130 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "What you need me to do is no problem\n"
# 131 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "at all--I'm the man for the job!\p"
# 132 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "First, we'll set sail for Dewford.$"
# 133 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 134 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_NeedToDeliverPackageSailToDewford: @ 822A18F
# 135 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
# 136 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "I know exactly what you want to say!\p"
# 137 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You're to deliver a package to\n"
# 138 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Capt. Stern in Slateport.\p"
# 139 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "What you need me to do is no problem\n"
# 140 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "at all--I'm the man for the job!\p"
# 141 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "First, we'll set sail for Dewford.$"
# 142 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 143 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_WhereAreWeBound: @ 822A268
# 144 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
# 145 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 146 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 147 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 148 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_TellMeWheneverYouWantToSail: @ 822A2C3
# 149 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Is that so?\n"
# 150 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Well, Peeko owes her life to you.\p"
# 151 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 152 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "you want to set sail!$"
# 153 "data/maps/Route104_MrBrineysHouse/scripts.pory"

# 154 "data/maps/Route104_MrBrineysHouse/scripts.pory"
Route104_MrBrineysHouse_Text_Peeko: @ 822A337
# 155 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Peeko: Pii piihyoro!$"

Route104_MrBrineysHouse_EventScript_Briney::
# 159 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	lock
# 160 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	faceplayer
# 161 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	msgbox Route104_MrBrineysHouse_EventScript_Briney_Text_0
# 162 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	release
	end


Route104_MrBrineysHouse_EventScript_Briney_Text_0:
# 161 "data/maps/Route104_MrBrineysHouse/scripts.pory"
	.string "Mr. Briney: Hoh hoh hoh hoh! My pretty\n"
	.string "Peeko's as full of energy as usual!$"
