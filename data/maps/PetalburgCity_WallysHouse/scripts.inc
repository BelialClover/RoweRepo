# 1 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 2 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
.set LOCALID_WALLYS_DAD, 1
# 3 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 4 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_MapScripts:: @ 8204229
# 5 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_WallysHouse_OnFrame
# 6 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_WallysHouse_OnWarp
# 7 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.byte 0
# 8 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 9 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnWarp: @ 8204234
# 10 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther
# 11 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 12 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 13 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayerWallysDadFaceEachOther:: @ 820423E
# 14 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 15 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	turnobject LOCALID_WALLYS_DAD, DIR_WEST
# 16 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 17 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 18 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_OnFrame: @ 8204247
# 19 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_WallysHouse_EventScript_GiveHM03Surf
# 20 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.2byte 0
# 21 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 22 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_GiveHM03Surf:: @ 8204251
# 23 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lockall
# 24 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_PleaseExcuseUs, MSGBOX_DEFAULT
# 25 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	releaseall
# 26 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 27 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 28 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysDad:: @ 8204278
# 29 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 30 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 31 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM03, PetalburgCity_WallysHouse_EventScript_GiveHM03Surf
# 32 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad
# 33 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_THANKED_FOR_PLAYING_WITH_WALLY, PetalburgCity_WallysHouse_EventScript_PlayedWithWally
# 34 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally, MSGBOX_DEFAULT
# 35 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	setflag FLAG_THANKED_FOR_PLAYING_WITH_WALLY
# 36 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 37 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 38 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 39 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceievedHM03Surf:: @ 82042A2
# 40 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon, MSGBOX_DEFAULT
# 41 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 42 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 43 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 44 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_DefeatedWallyInVictoryRoad:: @ 82042AC
# 45 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity, MSGBOX_DEFAULT
# 46 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 47 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 48 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 49 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_PlayedWithWally:: @ 82042B6
# 50 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing, MSGBOX_DEFAULT
# 51 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 52 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 53 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 54 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_WallysMom:: @ 82042C0
# 55 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	lock
# 56 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	faceplayer
# 57 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM03, PetalburgCity_WallysHouse_EventScript_ReceivedHM03Surf
# 58 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyWasReallyHappy, MSGBOX_DEFAULT
# 59 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 60 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 61 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 62 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_EventScript_ReceivedHM03Surf:: @ 82042D5
# 63 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	msgbox PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling, MSGBOX_DEFAULT
# 64 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	release
# 65 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	end
# 66 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 67 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_ThanksForPlayingWithWally: @ 82042DF
# 68 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "You're…\n"
# 69 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ah, you must be {PLAYER}{KUN}, right?\p"
# 70 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Thank you for playing with Wally a\n"
# 71 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "little while ago.\p"
# 72 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He's been frail and sickly ever\n"
# 73 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "since he was a baby.\p"
# 74 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "We've sent him to stay with my relatives\n"
# 75 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "in Verdanturf Town for a while.\p"
# 76 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "The air is a lot cleaner there\n"
# 77 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "than it is here.\p"
# 78 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "What's that? Where's Wally?\n"
# 79 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He's already left, our Wally.\p"
# 80 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I wonder where he could have\n"
# 81 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "gotten by now?$"
# 82 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 83 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WonderHowWallyIsDoing: @ 820444D
# 84 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I wonder how our Wally is doing?$"
# 85 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 86 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_PleaseExcuseUs: @ 820446E
# 87 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Our Wally's become very healthy\n"
# 88 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "since he went to Verdanturf Town.\p"
# 89 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "It seems like he went to a Place\n"
# 90 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "named Victory Road to Train, but\l"
# 91 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "i hope he can visit us soon$"
# 92 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 93 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_SurfGoAllSortsOfPlaces: @ 820461A
# 94 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "If you use this Lucky Egg you\n"
# 95 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "will get double the Exp from battles!$"
# 96 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 97 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyIsComingHomeSoon: @ 8204661
# 98 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Wally's coming home soon.\n"
# 99 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'm looking forward to that.$"
# 100 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 101 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_YouMetWallyInEverGrandeCity: @ 8204698
# 102 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh? You met Wally in\n"
# 103 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Ever Grande City?\p"
# 104 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Oh, {PLAYER}{KUN}, don't be silly.\p"
# 105 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "He may have gotten healthy, but he\n"
# 106 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "can't go somewhere far away like\l"
# 107 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "that all by himself.$"
# 108 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 109 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyWasReallyHappy: @ 8204732
# 110 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "Wally was really happy when he told\n"
# 111 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "us that he caught a Pokémon.\p"
# 112 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "It's been ages since I've seen him\n"
# 113 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "smile like that.$"
# 114 "data/maps/PetalburgCity_WallysHouse/scripts.pory"

# 115 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
PetalburgCity_WallysHouse_Text_WallyLeftWithoutTelling: @ 82047A7
# 116 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I want you to keep this a secret\n"
# 117 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "from my husband…\p"
# 118 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "But our Wally left Verdanturf Town\n"
# 119 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "without telling anyone.\p"
# 120 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "You know, Wally is frail, but\n"
# 121 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "he's surprisingly strong-willed.\p"
# 122 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "I'm sure that he'll come back safe\n"
# 123 "data/maps/PetalburgCity_WallysHouse/scripts.pory"
	.string "and sound one day!$"
