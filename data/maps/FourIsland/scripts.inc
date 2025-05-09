# 1 "data/maps/FourIsland/scripts.pory"

# 2 "data/maps/FourIsland/scripts.pory"
.equ LOCALID_DAYCARE_MAN, 1
# 3 "data/maps/FourIsland/scripts.pory"
.equ LOCALID_RIVAL, 11
# 4 "data/maps/FourIsland/scripts.pory"
.set LOCALID_SAILOR, 10
# 5 "data/maps/FourIsland/scripts.pory"

# 6 "data/maps/FourIsland/scripts.pory"
FourIsland_MapScripts:: @ 8167CAE
# 7 "data/maps/FourIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_OnTransition
# 8 "data/maps/FourIsland/scripts.pory"
	//map_script MAP_SCRIPT_ON_FRAME_TABLE, FourIsland_OnFrame
# 9 "data/maps/FourIsland/scripts.pory"
	.byte 0
# 10 "data/maps/FourIsland/scripts.pory"

# 11 "data/maps/FourIsland/scripts.pory"
FourIsland_OnTransition:: @ 8167CB9
# 12 "data/maps/FourIsland/scripts.pory"
	setflag FLAG_VISITED_FOUR_ISLAND
# 13 "data/maps/FourIsland/scripts.pory"
	end
# 14 "data/maps/FourIsland/scripts.pory"

# 15 "data/maps/FourIsland/scripts.pory"
FourIsland_EventScript_ShowRival:: @ 8167CCD
# 16 "data/maps/FourIsland/scripts.pory"
	//clearflag FLAG_HIDE_Four_Island_RIVAL
# 17 "data/maps/FourIsland/scripts.pory"
	return
# 18 "data/maps/FourIsland/scripts.pory"

# 19 "data/maps/FourIsland/scripts.pory"
FourIsland_EventScript_OldWoman:: @ 8167E2E
# 20 "data/maps/FourIsland/scripts.pory"
	lock
# 21 "data/maps/FourIsland/scripts.pory"
	faceplayer
# 22 "data/maps/FourIsland/scripts.pory"
	//goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, FourIsland_EventScript_OldWomanLoreleiLeft
# 23 "data/maps/FourIsland/scripts.pory"
    goto FourIsland_EventScript_OldWomanLoreleiLeft
# 24 "data/maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_LoreleiHasReturned
# 25 "data/maps/FourIsland/scripts.pory"
	release
# 26 "data/maps/FourIsland/scripts.pory"
	end
# 27 "data/maps/FourIsland/scripts.pory"

# 28 "data/maps/FourIsland/scripts.pory"
FourIsland_EventScript_OldWomanLoreleiLeft:: @ 8167E43
# 29 "data/maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_LoreleiMetLaprasAsChild
# 30 "data/maps/FourIsland/scripts.pory"
	release
# 31 "data/maps/FourIsland/scripts.pory"
	end
# 32 "data/maps/FourIsland/scripts.pory"

# 33 "data/maps/FourIsland/scripts.pory"
FourIsland_EventScript_LittleGirl:: @ 8167E5A
# 34 "data/maps/FourIsland/scripts.pory"
	lock
# 35 "data/maps/FourIsland/scripts.pory"
	faceplayer
# 36 "data/maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_LoreleiHasLotsOfStuffedDolls
# 37 "data/maps/FourIsland/scripts.pory"
	release
# 38 "data/maps/FourIsland/scripts.pory"
	end
# 39 "data/maps/FourIsland/scripts.pory"

# 40 "data/maps/FourIsland/scripts.pory"
FourIsland_EventScript_FatMan:: @ 8167E73
# 41 "data/maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_MadeSlushieUsingIcefallCaveIce, MSGBOX_NPC
# 42 "data/maps/FourIsland/scripts.pory"
	end
# 43 "data/maps/FourIsland/scripts.pory"

# 44 "data/maps/FourIsland/scripts.pory"
FourIsland_EventScript_IslandSign:: @ 8167E7C
# 45 "data/maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_IslandSign, MSGBOX_SIGN
# 46 "data/maps/FourIsland/scripts.pory"
	end
# 47 "data/maps/FourIsland/scripts.pory"

# 48 "data/maps/FourIsland/scripts.pory"
FourIsland_EventScript_LoreleisHouseSign:: @ 8167E85
# 49 "data/maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_LoreleisHouse, MSGBOX_SIGN
# 50 "data/maps/FourIsland/scripts.pory"
	end
# 51 "data/maps/FourIsland/scripts.pory"

# 52 "data/maps/FourIsland/scripts.pory"
FourIsland_Text_IslandSign:: @ 8182A03
# 53 "data/maps/FourIsland/scripts.pory"
    .string "Four Island\n"
# 54 "data/maps/FourIsland/scripts.pory"
    .string "The Warm, Blue, Floe Island$"
# 55 "data/maps/FourIsland/scripts.pory"

# 56 "data/maps/FourIsland/scripts.pory"
FourIsland_Text_LoreleiHasReturned:: @ 8182A2B
# 57 "data/maps/FourIsland/scripts.pory"
    .string "Loreli has returned.\p"
# 58 "data/maps/FourIsland/scripts.pory"
    .string "Did she find the city life too\n"
# 59 "data/maps/FourIsland/scripts.pory"
    .string "stressful, I wonder?$"
# 60 "data/maps/FourIsland/scripts.pory"

# 61 "data/maps/FourIsland/scripts.pory"
FourIsland_Text_LoreleiMetLaprasAsChild:: @ 8182A75
# 62 "data/maps/FourIsland/scripts.pory"
    .string "Loreli has gone back to Kanto.\p"
# 63 "data/maps/FourIsland/scripts.pory"
    .string "The Lapras she has, I imagine it\n"
# 64 "data/maps/FourIsland/scripts.pory"
    .string "to be the one she met as a child.\p"
# 65 "data/maps/FourIsland/scripts.pory"
    .string "I believe it was in Icefall Cave\n"
# 66 "data/maps/FourIsland/scripts.pory"
    .string "that she caught it.\p"
# 67 "data/maps/FourIsland/scripts.pory"
    .string "Perhaps that Pokémon has been with\n"
# 68 "data/maps/FourIsland/scripts.pory"
    .string "her ever since.$"
# 69 "data/maps/FourIsland/scripts.pory"

# 70 "data/maps/FourIsland/scripts.pory"
FourIsland_Text_RivalAlreadyGotEggBeSmellingYa:: @ 8182B37
# 71 "data/maps/FourIsland/scripts.pory"
    .string "{RIVAL}: Hey!\n"
# 72 "data/maps/FourIsland/scripts.pory"
    .string "{PLAYER}!\p"
# 73 "data/maps/FourIsland/scripts.pory"
    .string "What are you doing here in the\n"
# 74 "data/maps/FourIsland/scripts.pory"
    .string "Sevii IslandS?\p"
# 75 "data/maps/FourIsland/scripts.pory"
    .string "You should quit copying me,\n"
# 76 "data/maps/FourIsland/scripts.pory"
    .string "you know?\p"
# 77 "data/maps/FourIsland/scripts.pory"
    .string "Anyways, I already got my Pokémon\n"
# 78 "data/maps/FourIsland/scripts.pory"
    .string "Egg, so I'm done with this island.\p"
# 79 "data/maps/FourIsland/scripts.pory"
    .string "Heh, I bet you don't even know\n"
# 80 "data/maps/FourIsland/scripts.pory"
    .string "about Pokémon Pokémon.\p"
# 81 "data/maps/FourIsland/scripts.pory"
    .string "You'll never fill your National\n"
# 82 "data/maps/FourIsland/scripts.pory"
    .string "Pokédex that way.\p"
# 83 "data/maps/FourIsland/scripts.pory"
    .string "By the way, I saw someone we both\n"
# 84 "data/maps/FourIsland/scripts.pory"
    .string "know on this island.\p"
# 85 "data/maps/FourIsland/scripts.pory"
    .string "Why don't you go look around if\n"
# 86 "data/maps/FourIsland/scripts.pory"
    .string "it makes you curious?\p"
# 87 "data/maps/FourIsland/scripts.pory"
    .string "Me, I don't have the time to\n"
# 88 "data/maps/FourIsland/scripts.pory"
    .string "waste.\p"
# 89 "data/maps/FourIsland/scripts.pory"
    .string "Be smelling ya!$"
# 90 "data/maps/FourIsland/scripts.pory"

# 91 "data/maps/FourIsland/scripts.pory"
FourIsland_Text_LoreleiHasLotsOfStuffedDolls:: @ 8182CE3
# 92 "data/maps/FourIsland/scripts.pory"
    .string "Oh, you found me!\n"
# 93 "data/maps/FourIsland/scripts.pory"
    .string "Please don't tell Loreli.\p"
# 94 "data/maps/FourIsland/scripts.pory"
    .string "Did you know that Loreli has lots\n"
# 95 "data/maps/FourIsland/scripts.pory"
    .string "and lots of stuffed dolls?\p"
# 96 "data/maps/FourIsland/scripts.pory"
    .string "Every time she comes back to\n"
# 97 "data/maps/FourIsland/scripts.pory"
    .string "Four Island, her collection grows!$"
# 98 "data/maps/FourIsland/scripts.pory"

# 99 "data/maps/FourIsland/scripts.pory"
FourIsland_Text_MadeSlushieUsingIcefallCaveIce:: @ 8182D8E
# 100 "data/maps/FourIsland/scripts.pory"
    .string "Ooh, chilly!\p"
# 101 "data/maps/FourIsland/scripts.pory"
    .string "I made a slushie using ice I\n"
# 102 "data/maps/FourIsland/scripts.pory"
    .string "shaved inside Icefall Cave.\p"
# 103 "data/maps/FourIsland/scripts.pory"
    .string "It's chilly and tasty!$"
# 104 "data/maps/FourIsland/scripts.pory"

# 105 "data/maps/FourIsland/scripts.pory"
FourIsland_Text_LoreleisHouse:: @ 8182DEB
# 106 "data/maps/FourIsland/scripts.pory"
    .string "Loreli's House$"
# 107 "data/maps/FourIsland/scripts.pory"

# 108 "data/maps/FourIsland/scripts.pory"
// Sailor -------------------------------------------------------------------------------------------
# 109 "data/maps/FourIsland/scripts.pory"
FourIsland_EventScript_Sailor:: @ 8267CA2
# 110 "data/maps/FourIsland/scripts.pory"
	lock
# 111 "data/maps/FourIsland/scripts.pory"
	faceplayer
# 112 "data/maps/FourIsland/scripts.pory"
	goto_if_set FLAG_SAILED_FROM_SLATEPORT, FourIsland_EventScript_Sailor_Slateport
# 113 "data/maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_Text_SailorReturn_Lilycove, MSGBOX_YESNO
# 114 "data/maps/FourIsland/scripts.pory"
	compare VAR_RESULT, NO
# 115 "data/maps/FourIsland/scripts.pory"
	goto_if_eq FourIsland_EventScript_AsYouLike
# 116 "data/maps/FourIsland/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 117 "data/maps/FourIsland/scripts.pory"
	closemessage
# 118 "data/maps/FourIsland/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestDown
# 119 "data/maps/FourIsland/scripts.pory"
	waitmovement 0
# 120 "data/maps/FourIsland/scripts.pory"
	delay 30
# 121 "data/maps/FourIsland/scripts.pory"
	hideobjectat LOCALID_SAILOR, MAP_FOUR_ISLAND
# 122 "data/maps/FourIsland/scripts.pory"
	special HideFollower
# 123 "data/maps/FourIsland/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 124 "data/maps/FourIsland/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 125 "data/maps/FourIsland/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 255, 8, 11
# 126 "data/maps/FourIsland/scripts.pory"
	waitstate
# 127 "data/maps/FourIsland/scripts.pory"
	release
# 128 "data/maps/FourIsland/scripts.pory"
	end
# 129 "data/maps/FourIsland/scripts.pory"
	
# 130 "data/maps/FourIsland/scripts.pory"
FourIsland_EventScript_Sailor_Slateport:
# 131 "data/maps/FourIsland/scripts.pory"
	msgbox FourIsland_Text_Text_SailorReturn_Slateport, MSGBOX_YESNO
# 132 "data/maps/FourIsland/scripts.pory"
	compare VAR_RESULT, NO
# 133 "data/maps/FourIsland/scripts.pory"
	goto_if_eq FourIsland_EventScript_AsYouLike
# 134 "data/maps/FourIsland/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 135 "data/maps/FourIsland/scripts.pory"
	closemessage
# 136 "data/maps/FourIsland/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestDown
# 137 "data/maps/FourIsland/scripts.pory"
	waitmovement 0
# 138 "data/maps/FourIsland/scripts.pory"
	delay 30
# 139 "data/maps/FourIsland/scripts.pory"
	hideobjectat LOCALID_SAILOR, MAP_FOUR_ISLAND
# 140 "data/maps/FourIsland/scripts.pory"
	special HideFollower
# 141 "data/maps/FourIsland/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 142 "data/maps/FourIsland/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 143 "data/maps/FourIsland/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 255, 8, 11
# 144 "data/maps/FourIsland/scripts.pory"
	waitstate
# 145 "data/maps/FourIsland/scripts.pory"
	release
# 146 "data/maps/FourIsland/scripts.pory"
	end
# 147 "data/maps/FourIsland/scripts.pory"

# 148 "data/maps/FourIsland/scripts.pory"
FourIsland_EventScript_AsYouLike:: @ 8267CE7
# 149 "data/maps/FourIsland/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 150 "data/maps/FourIsland/scripts.pory"
	release
# 151 "data/maps/FourIsland/scripts.pory"
	end
# 152 "data/maps/FourIsland/scripts.pory"
	
# 153 "data/maps/FourIsland/scripts.pory"
FourIsland_Text_Text_SailorReturn_Lilycove: @ 82C6B90
# 154 "data/maps/FourIsland/scripts.pory"
    .string "That cave its really chilly!\n"
# 155 "data/maps/FourIsland/scripts.pory"
	.string "Do you want to return to Lilycove?$"
# 156 "data/maps/FourIsland/scripts.pory"
	
# 157 "data/maps/FourIsland/scripts.pory"
FourIsland_Text_Text_SailorReturn_Slateport: @ 82C6B90
# 158 "data/maps/FourIsland/scripts.pory"
    .string "That cave its really chilly!\n"
# 159 "data/maps/FourIsland/scripts.pory"
	.string "Do you want to return to Slateport?$"
# 160 "data/maps/FourIsland/scripts.pory"
	
# 161 "data/maps/FourIsland/scripts.pory"
// -------------------------------------------------------------------------------------------
