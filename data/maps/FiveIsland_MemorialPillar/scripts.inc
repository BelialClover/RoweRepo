# 1 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 2 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
.set LOCALID_MEMORIAL_MAN, 1
# 3 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 4 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_MapScripts:: @ 81689D2
# 5 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.byte 0
# 6 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 7 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialMan:: @ 81689D3
# 8 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lock
# 9 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42
# 10 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_ReturnedForTM42
# 11 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrub
# 12 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	closemessage
# 13 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_FacePlayer
# 14 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 15 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay 45
# 16 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_YourMonsLookHealthy
# 17 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFastestUp
# 18 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 19 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix
# 20 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 21 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 22 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 23 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42:: @ 8168A18
# 24 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrubTectonix
# 25 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 26 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 27 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 28 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReturnedForTM42:: @ 8168A22
# 29 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks
# 30 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	giveitem ITEM_TM108
# 31 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	compare VAR_RESULT, FALSE
# 32 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 33 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 34 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 35 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 36 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 37 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Memorial:: @ 8168A48
# 38 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lockall
# 39 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 40 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 41 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering
# 42 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	checkitem ITEM_LEMONADE, 1
# 43 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	compare VAR_RESULT, TRUE
# 44 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade
# 45 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 46 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 47 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 48 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade:: @ 8168A86
# 49 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering, MSGBOX_YESNO
# 50 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	compare VAR_RESULT, YES
# 51 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_PlaceLemonade
# 52 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 53 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 54 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 55 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PlaceLemonade:: @ 8168A9B
# 56 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	removeitem ITEM_LEMONADE, 1
# 57 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade
# 58 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	closemessage
# 59 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFastestRight
# 60 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 61 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay 45
# 62 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 63 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 64 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	textcolor 0
# 65 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis
# 66 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	giveitem ITEM_TM108
# 67 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	compare VAR_RESULT, FALSE
# 68 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 69 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 70 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 71 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 72 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 73 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReceivedTM42:: @ 8168AE8
# 74 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo
# 75 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFastestUp
# 76 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 77 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_GOT_TM42_AT_MEMORIAL_PILLAR
# 78 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	return
# 79 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 80 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_NoRoomForTM42:: @ 8168AFE
# 81 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR
# 82 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_DontHaveRoomForIt
# 83 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 84 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 85 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 86 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced:: @ 8168B0B
# 87 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonix
# 88 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 89 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 90 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 91 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_MiloIntro:: @ 818AE50
# 92 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "I'm the eldest of the Bird\n"
# 93 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Brothers.\p"
# 94 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "The best thing about birds…\n"
# 95 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "It has to be the beak.$"
# 96 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 97 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_MiloDefeat:: @ 818AEA8
# 98 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Oh, so sharp!$"
# 99 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 100 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_MiloPostBattle:: @ 818AEB6
# 101 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "You can fly to Four Island from\n"
# 102 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "here.$"
# 103 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 104 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_ChazIntro:: @ 818AEDC
# 105 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "I'm the middle kid of the Bird\n"
# 106 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Brothers.\p"
# 107 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "The best thing about birds…\n"
# 108 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "It has to be the wings.$"
# 109 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 110 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_ChazDefeat:: @ 818AF39
# 111 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Flap, flap!$"
# 112 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 113 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_ChazPostBattle:: @ 818AF45
# 114 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "There was a really somber guy\n"
# 115 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "over that way.$"
# 116 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 117 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_HaroldIntro:: @ 818AF72
# 118 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "I'm the youngest of the Bird\n"
# 119 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Brothers.\p"
# 120 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "The best thing about birds…\n"
# 121 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "It has to be the down.$"
# 122 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 123 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_HaroldDefeat:: @ 818AFCC
# 124 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Down is so comfy…\n"
# 125 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "It makes me drowsy…$"
# 126 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 127 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_HaroldPostBattle:: @ 818AFF2
# 128 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "It fills me with happiness when\n"
# 129 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "bird Pokémon beg playfully…$"
# 130 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 131 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_ScrubScrub:: @ 818B02E
# 132 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Scrub, scrub…$"
# 133 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 134 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_YourMonsLookHealthy:: @ 818B03C
# 135 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Hello…\n"
# 136 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Your Pokémon look healthy…$"
# 137 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 138 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix:: @ 818B05E
# 139 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "This is where I buried my Onix…\n"
# 140 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "It was named Tectonix…$"
# 141 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 142 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering:: @ 818B095
# 143 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "“Here lies Tectonix is engraved\n"
# 144 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "on a boulder.\p"
# 145 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "There is a Lemonade placed as an\n"
# 146 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "offering in front of the grave.$"
# 147 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 148 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering:: @ 818B105
# 149 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Would you like to leave another\n"
# 150 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Lemonade as an offering?$"
# 151 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 152 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade:: @ 818B13E
# 153 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "{PLAYER} placed a can of Lemonade\n"
# 154 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "in front of the grave.$"
# 155 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 156 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis:: @ 818B171
# 157 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Th-thank you…\p"
# 158 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "That was my Tectonix's favorite\n"
# 159 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "drink…\p"
# 160 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "I don't even know you, but your\n"
# 161 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "act of kindness…\p"
# 162 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "It's uplifted me a little.\p"
# 163 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Can you please take this as my\n"
# 164 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "thanks?$"
# 165 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 166 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo:: @ 818B219
# 167 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Please be good to your Pokémon,\n"
# 168 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "too.$"
# 169 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 170 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_DontHaveRoomForIt:: @ 818B23E
# 171 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "If you don't have room for it,\n"
# 172 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "I'll hold it for you till next time.$"
# 173 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 174 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks:: @ 818B282
# 175 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Oh, it's you from that time…\p"
# 176 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "I still have that thing I wanted\n"
# 177 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "you to have as my thanks.$"
# 178 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 179 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_ScrubScrubTectonix:: @ 818B2DA
# 180 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Scrub, scrub…\p"
# 181 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "… … …\n"
# 182 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Tectonix…$"
# 183 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 184 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_HereLiesTectonix:: @ 818B2F8
# 185 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Boulders and rocks are neatly piled\n"
# 186 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "up as a cairn.\p"
# 187 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "“Here lies Tectonix is engraved\n"
# 188 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "on a boulder.$"
