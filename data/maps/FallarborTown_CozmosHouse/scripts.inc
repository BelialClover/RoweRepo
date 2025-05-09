# 1 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 2 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_MapScripts:: @ 8200F12
# 3 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 5 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_ProfCozmo:: @ 8200F13
# 6 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 7 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 8 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM27, FallarborTown_CozmosHouse_EventScript_GaveMeteorite
# 9 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	checkitem ITEM_METEORITE, 1
# 10 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, TRUE
# 11 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite
# 12 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
# 13 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 14 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 15 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 16 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite:: @ 8200F38
# 17 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call_if_unset FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_NoticeMeteorite
# 18 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call_if_set FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_AskForMeteorite
# 19 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, NO
# 20 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite
# 21 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_PleaseUseThisTM, MSGBOX_DEFAULT
# 22 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	giveitem ITEM_EVIOLITE
# 23 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 24 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 25 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setvar VAR_0x8004, ITEM_METEORITE
# 26 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 27 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_RECEIVED_TM27
# 28 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
# 29 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 30 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 31 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 32 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_NoticeMeteorite:: @ 8200F8B
# 33 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
# 34 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt, MSGBOX_YESNO
# 35 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	return
# 36 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 37 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_AskForMeteorite:: @ 8200F9C
# 38 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_MayIHaveMeteorite, MSGBOX_YESNO
# 39 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	return
# 40 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 41 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite:: @ 8200FA5
# 42 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	setflag FLAG_TEMP_2
# 43 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CrushedWithDisappointment, MSGBOX_DEFAULT
# 44 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 45 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 46 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 47 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_GaveMeteorite:: @ 8200FB2
# 48 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
# 49 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 50 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 51 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 52 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmosWife:: @ 8200FBC
# 53 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	lock
# 54 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	faceplayer
# 55 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM27, FallarborTown_CozmosHouse_EventScript_CozmoIsHappy
# 56 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
# 57 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls, MSGBOX_DEFAULT
# 58 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 59 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 60 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 61 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsSad:: @ 8200FDA
# 62 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
# 63 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 64 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 65 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 66 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_EventScript_CozmoIsHappy:: @ 8200FE4
# 67 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
# 68 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	release
# 69 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	end
# 70 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 71 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow: @ 8200FEE
# 72 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Prof. Cozmo: Oh…\n"
# 73 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I never should have let myself be\l"
# 74 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "conned into telling Team Magma where\l"
# 75 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "you can find Meteorites…\p"
# 76 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "That Meteorite from Meteor Falls…\n"
# 77 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "It's never going to be mine now…$"
# 78 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 79 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt: @ 82010A2
# 80 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Oh!\n"
# 81 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Hah?\p"
# 82 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "That item…\p"
# 83 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Could it be?\p"
# 84 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Is it the Meteorite that Team Magma\n"
# 85 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "took from Meteor Falls?\p"
# 86 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Please, may I have it?\p"
# 87 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I'm not asking for it for free.\n"
# 88 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "How about in exchange for this item?$"
# 89 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 90 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_PleaseUseThisTM: @ 8201159
# 91 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Prof. Cozmo: This item, it represents\n"
# 92 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "my feeling of gratitude.\l"
# 93 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Please use it!$"
# 94 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 95 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch: @ 82011A5
# 96 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Prof. Cozmo: Oh, I can't believe it.\n"
# 97 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "This is really, really great!\p"
# 98 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "This is really going to help my research!$"
# 99 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 100 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CrushedWithDisappointment: @ 8201212
# 101 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Prof. Cozmo: Oh, but…\n"
# 102 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I'm crushed with disappointment…$"
# 103 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 104 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_MayIHaveMeteorite: @ 8201249
# 105 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Prof. Cozmo: Please, may I have that\n"
# 106 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Meteorite?\p"
# 107 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "I'm not asking for it for free.\n"
# 108 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "How about in exchange for this TM?$"
# 109 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 110 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls: @ 82012BC
# 111 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Prof. Cozmo went off to Meteor Falls\n"
# 112 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "on Route 114 with some people from\l"
# 113 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Team Magma.$"
# 114 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 115 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_FeelSorryForCozmo: @ 8201310
# 116 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Poor Prof. Cozmo…\n"
# 117 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "He's so depressed… I feel sorry for him.$"
# 118 "data/maps/FallarborTown_CozmosHouse/scripts.pory"

# 119 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
FallarborTown_CozmosHouse_Text_CozmoIsSoHappy: @ 820134B
# 120 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "Look at Prof. Cozmo…\n"
# 121 "data/maps/FallarborTown_CozmosHouse/scripts.pory"
	.string "He's so happy! I think it's cute.$"
