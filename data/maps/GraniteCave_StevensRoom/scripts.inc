# 1 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 2 "data/maps/GraniteCave_StevensRoom/scripts.pory"
.set LOCALID_STEVEN, 1
# 3 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 4 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_MapScripts:: @ 822DC7A
# 5 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.byte 0
# 6 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 7 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven:: @ 822DC7B
# 8 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock
# 9 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	faceplayer
# 10 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
# 11 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, ITEM_LETTER
# 12 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 14 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_TM47
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq GraniteCave_StevensRoom_EventScript_BagFull
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_RegisteredSteven, MSGBOX_DEFAULT
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitfanfare
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay 30
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_REGISTERED_STEVEN_POKENAV
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_IveGotToHurryAlong, MSGBOX_DEFAULT
# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq GraniteCave_StevensRoom_EventScript_StevenExitNorth
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq GraniteCave_StevensRoom_EventScript_StevenExitSouth
# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 37 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject LOCALID_STEVEN
# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitNorth:: @ 822DD0D
# 43 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 44 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 47 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitWestEast:: @ 822DD18
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 50 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitSouth:: @ 822DD2A
# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 55 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
# 56 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 57 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BagFull:: @ 822DD3C
# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
# 61 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 62 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 63 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit: @ 822DD45
# 64 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 66 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 67 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 68 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 69 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 70 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 71 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 72 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit: @ 822DD4C
# 73 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 74 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 75 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 76 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_fastest_up
# 77 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 78 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExitSouth: @ 822DD51
# 80 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 81 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 82 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 84 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 85 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 88 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 89 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ImStevenLetterForMe: @ 822DD5A
# 91 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "My name is Steven.\p"
# 92 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I'm interested in rare stones,\n"
# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "so I travel here and there.\p"
# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh?\n"
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "A Letter for me?$"
# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ThankYouTakeThis: @ 822DDBD
# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Steven: Okay, thank you.\p"
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "You went through all this trouble to\n"
# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "deliver that. I need to thank you.\p"
# 101 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Let me see…\n"
# 102 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I'll give you this TM.\p"
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "It contains my favorite move,\n"
# 104 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Steel Wing.$"
# 105 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister: @ 822DE6B
# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Steven: Your Pokémon appear quite\n"
# 108 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "capable.\p"
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "If you keep training, you could even\n"
# 110 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "become the Champion of the Pokémon\l"
# 111 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "League one day. That's what I think.\p"
# 112 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I know, since we've gotten to know each\n"
# 113 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "other, let's register one another in\l"
# 114 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "our Pokénavs.\p"
# 115 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "… … … … … …$"
# 116 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 117 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_RegisteredSteven: @ 822DF6A
# 118 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Registered Steven\n"
# 119 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "in the Pokénav.$"
# 120 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 121 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_IveGotToHurryAlong: @ 822DF8C
# 122 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Now, I've got to hurry along.$"
# 123 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 124 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_OhBagIsFull: @ 822DFAA
# 125 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh, your Bag is full…\n"
# 126 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "That's too bad, then.$"
