# 1 "data/maps/Route114_LanettesHouse/scripts.pory"

# 2 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_MapScripts:: @ 822B2C8
# 3 "data/maps/Route114_LanettesHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route114_LanettesHouse_OnTransition
# 4 "data/maps/Route114_LanettesHouse/scripts.pory"
	.byte 0
# 5 "data/maps/Route114_LanettesHouse/scripts.pory"

# 6 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_OnTransition: @ 822B2CE
# 7 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_LANDMARK_LANETTES_HOUSE
# 8 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 9 "data/maps/Route114_LanettesHouse/scripts.pory"

# 10 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Lanette:: @ 822B2D2
# 11 "data/maps/Route114_LanettesHouse/scripts.pory"
	lock
# 12 "data/maps/Route114_LanettesHouse/scripts.pory"
	faceplayer
# 13 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_DOLL_LANETTE, Route114_LanettesHouse_EventScript_OfferAdvice
# 14 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 15 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_EverythingClutteredKeepThis, MSGBOX_DEFAULT
# 16 "data/maps/Route114_LanettesHouse/scripts.pory"
	givedecoration DECOR_LOTAD_DOLL
# 17 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, FALSE
# 18 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_eq Common_EventScript_ShowNoRoomForDecor
# 19 "data/maps/Route114_LanettesHouse/scripts.pory"
	setflag FLAG_RECEIVED_DOLL_LANETTE
# 20 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
# 21 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 22 "data/maps/Route114_LanettesHouse/scripts.pory"

# 23 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_OfferAdvice:: @ 822B2FF
# 24 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_OrganizeYourBoxes, MSGBOX_DEFAULT
# 25 "data/maps/Route114_LanettesHouse/scripts.pory"
	release
# 26 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 27 "data/maps/Route114_LanettesHouse/scripts.pory"

# 28 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_Notebook:: @ 822B309
# 29 "data/maps/Route114_LanettesHouse/scripts.pory"
	lockall
# 30 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage1, MSGBOX_YESNO
# 31 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, YES
# 32 "data/maps/Route114_LanettesHouse/scripts.pory"
	goto_if_eq Route114_LanettesHouse_EventScript_NotebookPage2
# 33 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ClosedTheNotebook, MSGBOX_DEFAULT
# 34 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
# 35 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 36 "data/maps/Route114_LanettesHouse/scripts.pory"

# 37 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage2:: @ 822B327
# 38 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage2, MSGBOX_YESNO
# 39 "data/maps/Route114_LanettesHouse/scripts.pory"
	compare VAR_RESULT, YES
# 40 "data/maps/Route114_LanettesHouse/scripts.pory"
	call_if_eq Route114_LanettesHouse_EventScript_NotebookPage3
# 41 "data/maps/Route114_LanettesHouse/scripts.pory"
	releaseall
# 42 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 43 "data/maps/Route114_LanettesHouse/scripts.pory"

# 44 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_NotebookPage3:: @ 822B33C
# 45 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_ResearchNotesPage3, MSGBOX_DEFAULT
# 46 "data/maps/Route114_LanettesHouse/scripts.pory"
	return
# 47 "data/maps/Route114_LanettesHouse/scripts.pory"

# 48 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_EventScript_PC:: @ 822B345
# 49 "data/maps/Route114_LanettesHouse/scripts.pory"
	msgbox Route114_LanettesHouse_Text_EmailFromBill, MSGBOX_SIGN
# 50 "data/maps/Route114_LanettesHouse/scripts.pory"
	end
# 51 "data/maps/Route114_LanettesHouse/scripts.pory"

# 52 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_EverythingClutteredKeepThis: @ 822B34E
# 53 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Lanette: Oh! {PLAYER}{KUN}!\p"
# 54 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "I'm sorry everything is so cluttered…\n"
# 55 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "When I get engrossed in research,\l"
# 56 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "things end up this way…\p"
# 57 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "This is embarrassing… Please keep\n"
# 58 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "this a secret in exchange for this.$"
# 59 "data/maps/Route114_LanettesHouse/scripts.pory"

# 60 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_OrganizeYourBoxes: @ 822B407
# 61 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "May I offer advice about my Pokémon\n"
# 62 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Storage System?\p"
# 63 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "You should organize your Boxes so you\n"
# 64 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "can tell which Pokémon are in them.$"
# 65 "data/maps/Route114_LanettesHouse/scripts.pory"

# 66 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage1: @ 822B485
# 67 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "It's Lanette's research notes.\n"
# 68 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "There's information about Boxes.\p"
# 69 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Design Boxes to hold 30 Pokémon each.\p"
# 70 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Each Trainer should be able to store\n"
# 71 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "420 Pokémon on the PC system.\p"
# 72 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Keep reading?$"
# 73 "data/maps/Route114_LanettesHouse/scripts.pory"

# 74 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage2: @ 822B53C
# 75 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "A marking system should be added to\n"
# 76 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "make Pokémon easier to organize.\p"
# 77 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "The name and wallpaper design of each\n"
# 78 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Box will be made changeable to please\l"
# 79 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "the stored Pokémon.\p"
# 80 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Keep reading?$"
# 81 "data/maps/Route114_LanettesHouse/scripts.pory"

# 82 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ResearchNotesPage3: @ 822B5EF
# 83 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "When storing a Pokémon, it should be\n"
# 84 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "sent to the Box inspected last.\p"
# 85 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "If that Box is full, the received\n"
# 86 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "Pokémon is stored in the next Box.\p"
# 87 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "In other words, when a Box is examined,\n"
# 88 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "it is automatically selected as the Box\l"
# 89 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "to which Pokémon are sent.$"
# 90 "data/maps/Route114_LanettesHouse/scripts.pory"

# 91 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_ClosedTheNotebook: @ 822B6E4
# 92 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "{PLAYER} closed the notebook.$"
# 93 "data/maps/Route114_LanettesHouse/scripts.pory"

# 94 "data/maps/Route114_LanettesHouse/scripts.pory"
Route114_LanettesHouse_Text_EmailFromBill: @ 822B6FC
# 95 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "There's an e-mail from someone on\n"
# 96 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "the PC.\p"
# 97 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“… … … … … … …\p"
# 98 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“Your Storage System offers more\n"
# 99 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "convenience than mine.\p"
# 100 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“It has a lot of user-friendly features\n"
# 101 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "that make it fun and useful, too.\p"
# 102 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“It makes me proud that I played\n"
# 103 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "a part in its development.\p"
# 104 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“Here's hoping that you'll continue\n"
# 105 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "research in Storage Systems.\p"
# 106 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "“From Bill\n"
# 107 "data/maps/Route114_LanettesHouse/scripts.pory"
	.string "… … … … … … … …”$"
