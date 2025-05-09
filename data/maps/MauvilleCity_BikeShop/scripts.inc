# 1 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 2 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_MapScripts:: @ 820EBBB
# 3 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 5 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Rydel:: @ 820EBBC
# 6 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_OhYourBikeIsInPC, MSGBOX_NPC
# 7 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 8 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 9 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SkipGreeting:: @ 820EBF7
# 10 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_DidYouComeFromFarAway, MSGBOX_YESNO
# 11 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, YES
# 12 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq MauvilleCity_BikeShop_EventScript_YesFar
# 13 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, NO
# 14 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq MauvilleCity_BikeShop_EventScript_NotFar
# 15 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 16 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 17 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseBike:: @ 820EC16
# 18 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne
# 19 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 20 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 21, 8, MULTI_BIKE, 1
# 21 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 22 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_GetMachBike
# 23 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_GetAcroBike
# 24 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 25 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 26 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_NotFar:: @ 820EC3D
# 27 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_DECLINED_BIKE
# 28 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_GuessYouDontNeedBike, MSGBOX_DEFAULT
# 29 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 30 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 31 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 32 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_YesFar:: @ 820EC4A
# 33 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	setflag FLAG_RECEIVED_BIKE
# 34 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseBike
# 35 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 36 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 37 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetMachBike:: @ 820EC53
# 38 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseMachBike, MSGBOX_DEFAULT
# 39 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 40 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 41 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 42 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 43 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_GetAcroBike:: @ 820EC6D
# 44 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ChoseAcroBike, MSGBOX_DEFAULT
# 45 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 46 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 47 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 48 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 49 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes:: @ 820EC87
# 50 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes, MSGBOX_DEFAULT
# 51 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	special SwapRegisteredBike
# 52 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 53 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 54 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 55 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AskSwitchBikes:: @ 820EC94
# 56 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_WantToSwitchBikes, MSGBOX_YESNO
# 57 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, YES
# 58 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq MauvilleCity_BikeShop_EventScript_SwitchBikes
# 59 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, NO
# 60 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq MauvilleCity_BikeShop_EventScript_KeepBike
# 61 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 62 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 63 "data/maps/MauvilleCity_BikeShop/scripts.pory"
@ If the player does not have a bike on them Rydel assumes its stored in the PC
# 64 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchBikes:: @ 820ECB3
# 65 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_IllSwitchBikes, MSGBOX_DEFAULT
# 66 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_ACRO_BIKE, 1
# 67 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, TRUE
# 68 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq MauvilleCity_BikeShop_EventScript_SwitchAcroForMach
# 69 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	checkitem ITEM_MACH_BIKE, 1
# 70 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	compare VAR_RESULT, TRUE
# 71 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto_if_eq MauvilleCity_BikeShop_EventScript_SwitchMachForAcro
# 72 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_OhYourBikeIsInPC, MSGBOX_DEFAULT
# 73 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 74 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 75 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 76 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_KeepBike:: @ 820ECE5
# 77 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HappyYouLikeIt, MSGBOX_DEFAULT
# 78 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 79 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 80 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 81 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchAcroForMach:: @ 820ECEF
# 82 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 83 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedAcroForMach, MSGBOX_DEFAULT
# 84 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_ACRO_BIKE
# 85 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_MACH_BIKE
# 86 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 87 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 88 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 89 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SwitchMachForAcro:: @ 820ED10
# 90 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	incrementgamestat GAME_STAT_TRADED_BIKES
# 91 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_ExchangedMachForAcro, MSGBOX_DEFAULT
# 92 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	removeitem ITEM_MACH_BIKE
# 93 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	giveitem ITEM_ACRO_BIKE
# 94 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ComeBackToSwitchBikes
# 95 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 96 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 97 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Assistant:: @ 820ED31
# 98 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	msgbox MauvilleCity_BikeShop_Text_HandbooksAreInBack, MSGBOX_NPC
# 99 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 100 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 101 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_MachBikeHandbook:: @ 820ED3A
# 102 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_MachHandbookWhichPage
# 103 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 104 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 105 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 106 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 107 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage:: @ 820ED46
# 108 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_MACH_BIKE_INFO, 0
# 109 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 110 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_HowToRide
# 111 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_HowToTurn
# 112 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_SandySlopes
# 113 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 114 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitMachHandbook
# 115 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 116 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 117 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToRide:: @ 820ED88
# 118 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToRideMachBike
# 119 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 120 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 121 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 122 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 123 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_HowToTurn:: @ 820ED94
# 124 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_HowToTurnMachBike
# 125 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 126 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 127 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 128 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 129 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_SandySlopes:: @ 820EDA0
# 130 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_SandySlopes
# 131 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 132 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseMachHandbookPage
# 133 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 134 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 135 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitMachHandbook:: @ 820EDAC
# 136 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 137 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 138 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 139 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_AcroBikeHandbook:: @ 820EDAE
# 140 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_AcroHandbookWhichPage
# 141 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 142 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 143 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 144 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 145 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage:: @ 820EDBA
# 146 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	multichoice 0, 0, MULTI_ACRO_BIKE_INFO, 0
# 147 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	switch VAR_RESULT
# 148 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 0, MauvilleCity_BikeShop_EventScript_Wheelies
# 149 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 1, MauvilleCity_BikeShop_EventScript_BunnyHops
# 150 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 2, MauvilleCity_BikeShop_EventScript_Jumps
# 151 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case 3, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 152 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	case MULTI_B_PRESSED, MauvilleCity_BikeShop_EventScript_ExitAcroHandbook
# 153 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 154 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 155 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Wheelies:: @ 820EDFC
# 156 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Wheelies
# 157 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 158 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 159 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 160 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 161 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_BunnyHops:: @ 820EE08
# 162 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_BunnyHops
# 163 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 164 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 165 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 166 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 167 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_Jumps:: @ 820EE14
# 168 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	message MauvilleCity_BikeShop_Text_Jumps
# 169 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	waitmessage
# 170 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	goto MauvilleCity_BikeShop_EventScript_ChooseAcroHandbookPage
# 171 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 172 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 173 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_EventScript_ExitAcroHandbook:: @ 820EE20
# 174 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	release
# 175 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	end
# 176 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 177 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_RydelGreeting: @ 820EE22
# 178 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Well, well, what have we here?\n"
# 179 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A most energetic customer!\p"
# 180 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Me? You may call me Rydel.\n"
# 181 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm the owner of this cycle shop.$"
# 182 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 183 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_DidYouComeFromFarAway: @ 820EE99
# 184 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Rydel: Your Running Shoes…\n"
# 185 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "They're awfully filthy.\p"
# 186 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Did you come from far away?$"
# 187 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 188 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_GuessYouDontNeedBike: @ 820EEE8
# 189 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Rydel: Is that right?\p"
# 190 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Then, I guess you have no need for\n"
# 191 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "any of my Bikes.$"
# 192 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 193 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExplainBikesChooseWhichOne: @ 820EF32
# 194 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Rydel: Hm, hm… … … … …\p"
# 195 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You're saying that you came all this\n"
# 196 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "way from Littleroot?\p"
# 197 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "My goodness!\n"
# 198 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "That's ridiculously far!\p"
# 199 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you had one of my Bikes, you could\n"
# 200 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "go anywhere easily while feeling the\l"
# 201 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "gentle caress of the wind!\p"
# 202 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll tell you what!\n"
# 203 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll give you a Bike!\p"
# 204 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Oh, wait a second!\p"
# 205 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I forgot to tell you that there are\n"
# 206 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "two kinds of Bikes!\p"
# 207 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "They are the Mach Bike and\n"
# 208 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the Acro Bike!\p"
# 209 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The Mach Bike is for cyclists who want\n"
# 210 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to feel the wind with their bodies!\p"
# 211 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "And an Acro Bike is for those who\n"
# 212 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "prefer technical rides!\p"
# 213 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm a real sweetheart, so you can\n"
# 214 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "have whichever one you like!\p"
# 215 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which one will you choose?$"
# 216 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 217 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseMachBike: @ 820F18D
# 218 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the Mach Bike.$"
# 219 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 220 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ChoseAcroBike: @ 820F1A5
# 221 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} chose the Acro Bike.$"
# 222 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 223 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ComeBackToSwitchBikes: @ 820F1BD
# 224 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Rydel: If you get the urge to switch\n"
# 225 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Bikes, just come see me!$"
# 226 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 227 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_WantToSwitchBikes: @ 820F1FB
# 228 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Rydel: Oh? Were you thinking about\n"
# 229 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "switching Bikes?$"
# 230 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 231 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_IllSwitchBikes: @ 820F22F
# 232 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Rydel: Okay, no problem!\n"
# 233 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'll switch Bikes for you!$"
# 234 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 235 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedMachForAcro: @ 820F263
# 236 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the Mach Bike exchanged\n"
# 237 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for an Acro Bike.$"
# 238 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 239 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_ExchangedAcroForMach: @ 820F294
# 240 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "{PLAYER} got the Acro Bike exchanged\n"
# 241 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "for a Mach Bike.$"
# 242 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 243 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HappyYouLikeIt: @ 820F2C4
# 244 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Rydel: Good, good!\n"
# 245 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm happy that you like it!$"
# 246 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	
# 247 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_OhYourBikeIsInPC: @ 820F2F3
# 248 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Rydel: I'm happy that bikes\n"
# 249 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "are more widespread now!\p"
# 250 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Back in the day i used to give\n"
# 251 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "trainers some of my bikes\p"
# 252 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "but now the Gym Leaders have enough\n"
# 253 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "money to be kind enough to give\p"
# 254 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "trainers that beat them bikes and\n"
# 255 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "other useful items, isn't that great?!$"
# 256 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 257 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HandbooksAreInBack: @ 820F3C3
# 258 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I'm learning about Bikes while\n"
# 259 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "I work here.\p"
# 260 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "If you need advice on how to ride your\n"
# 261 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Bike, there're a couple handbooks in\l"
# 262 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the back.$"
# 263 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 264 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_MachHandbookWhichPage: @ 820F445
# 265 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the Mach Bike.\p"
# 266 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 267 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 268 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToRideMachBike: @ 820F487
# 269 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A Bike moves in the direction that\n"
# 270 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "the + Control Pad is pressed.\p"
# 271 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It will speed up once it gets rolling.\p"
# 272 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "To stop, release the + Control Pad.\n"
# 273 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The Bike will slow to a stop.\p"
# 274 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 275 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 276 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_HowToTurnMachBike: @ 820F550
# 277 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "A Mach Bike is speedy, but it can't\n"
# 278 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "stop very quickly.\p"
# 279 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It gets a little tricky to get around\n"
# 280 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "a corner.\p"
# 281 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Release the + Control Pad a little\n"
# 282 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "before the corner and slow down.\p"
# 283 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 284 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 285 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_SandySlopes: @ 820F61A
# 286 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "There are small sandy slopes\n"
# 287 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "throughout the Hoenn region.\p"
# 288 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "The loose, crumbly sand makes it\n"
# 289 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "impossible to climb normally.\p"
# 290 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "But if you have a Mach Bike, you can\n"
# 291 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "zip up a sandy slope.\p"
# 292 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 293 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 294 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_AcroHandbookWhichPage: @ 820F6ED
# 295 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "It's a handbook on the Acro Bike.\p"
# 296 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Which page do you want to read?$"
# 297 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 298 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Wheelies: @ 820F72F
# 299 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button while riding,\n"
# 300 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "and the front wheel lifts up.\p"
# 301 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can zip around with the front\n"
# 302 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "wheel up using the + Control Pad.\p"
# 303 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a wheelie.\p"
# 304 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 305 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 306 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_BunnyHops: @ 820F7F5
# 307 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Keeping the B Button pressed,\n"
# 308 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "your Bike can hop on the spot.\p"
# 309 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "This technique is called a bunny hop.\p"
# 310 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "You can ride while hopping, too.\p"
# 311 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
# 312 "data/maps/MauvilleCity_BikeShop/scripts.pory"

# 313 "data/maps/MauvilleCity_BikeShop/scripts.pory"
MauvilleCity_BikeShop_Text_Jumps: @ 820F898
# 314 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the B Button and the + Control\n"
# 315 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Pad at the same time to jump.\p"
# 316 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press the + Control Pad to the side\n"
# 317 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "to jump sideways.\p"
# 318 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Press it backwards to make the Bike\n"
# 319 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "change directions while jumping.\p"
# 320 "data/maps/MauvilleCity_BikeShop/scripts.pory"
	.string "Want to read a different page?$"
