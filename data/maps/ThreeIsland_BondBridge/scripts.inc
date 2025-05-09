# 1 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 2 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_MapScripts:: @ 8168776
# 3 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	.byte 0
# 4 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 5 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_EventScript_BerryForestSign:: @ 8168777
# 6 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	msgbox ThreeIsland_BondBridge_Text_BerryForestAhead, MSGBOX_SIGN
# 7 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	end
# 8 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 9 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_EventScript_BondBridgeSign:: @ 8168780
# 10 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	msgbox ThreeIsland_BondBridge_Text_BondBridgeSign, MSGBOX_SIGN
# 11 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	end
# 12 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	
# 13 "data/maps/ThreeIsland_BondBridge/scripts.pory"
//Trainers
# 14 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_EventScript_Violet:: @ 81ABFA3
# 15 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	trainerbattle_single TRAINER_AROMA_LADY_VIOLET, ThreeIsland_BondBridge_Text_VioletIntro, ThreeIsland_BondBridge_Text_VioletDefeat
# 16 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	msgbox ThreeIsland_BondBridge_Text_VioletPostBattle, MSGBOX_AUTOCLOSE
# 17 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	end
# 18 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	
# 19 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_EventScript_Nikki:: @ 81ABF65
# 20 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	trainerbattle_single TRAINER_AROMA_LADY_NIKKI, ThreeIsland_BondBridge_Text_NikkiIntro, ThreeIsland_BondBridge_Text_NikkiDefeat
# 21 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	msgbox ThreeIsland_BondBridge_Text_NikkiPostBattle, MSGBOX_AUTOCLOSE
# 22 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	end
# 23 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 24 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_EventScript_Amira::
# 25 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	trainerbattle_single TRAINER_TUBER_AMIRA, ThreeIsland_BondBridge_Text_AmiraIntro, ThreeIsland_BondBridge_Text_AmiraDefeat
# 26 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	msgbox ThreeIsland_BondBridge_Text_AmiraPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	end
# 28 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 29 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_EventScript_Alexis:: @ 81AC01F
# 30 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	trainerbattle_single TRAINER_TUBER_ALEXIS, ThreeIsland_BondBridge_Text_AlexisIntro, ThreeIsland_BondBridge_Text_AlexisDefeat
# 31 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	msgbox ThreeIsland_BondBridge_Text_AlexisPostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	end
# 33 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 34 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_EventScript_Tisha:: @ 81AC05D
# 35 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_TISHA, ThreeIsland_BondBridge_Text_TishaIntro, ThreeIsland_BondBridge_Text_TishaDefeat
# 36 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	msgbox ThreeIsland_BondBridge_Text_TishaPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	end
# 38 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 39 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_EventScript_Joy:: @ 81AC09B
# 40 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	trainerbattle_double TRAINER_TWINS_JOY_MEG, ThreeIsland_BondBridge_Text_JoyIntro, ThreeIsland_BondBridge_Text_JoyDefeat, ThreeIsland_BondBridge_Text_JoyNotEnoughMons
# 41 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	msgbox ThreeIsland_BondBridge_Text_JoyPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	end
# 43 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 44 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_EventScript_Meg:: @ 81AC0E1
# 45 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	//trainerbattle_double TRAINER_TWINS_JOY_MEG, ThreeIsland_BondBridge_Text_MegIntro, ThreeIsland_BondBridge_Text_MegDefeat, ThreeIsland_BondBridge_Text_MegNotEnoughMons
# 46 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_MARIA, OneIsland_KindleRoad_Text_MariaIntro, OneIsland_KindleRoad_Text_MariaDefeat
# 47 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	msgbox ThreeIsland_BondBridge_Text_MegPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/ThreeIsland_BondBridge/scripts.pory"
	end
# 49 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 50 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_NikkiIntro:: @ 8189E42
# 51 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "The salty tang of the sea…\n"
# 52 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "It tickles my heart.$"
# 53 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 54 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_NikkiDefeat:: @ 8189E72
# 55 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "…Sniff, sniff…\n"
# 56 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Something smells unpleasant…$"
# 57 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 58 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_NikkiPostBattle:: @ 8189E9E
# 59 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Perhaps that reek is your sweaty\n"
# 60 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Pokémon's body odor…$"
# 61 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 62 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_VioletIntro:: @ 8189ED4
# 63 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Where are you off to in such\n"
# 64 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "a hurry?$"
# 65 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 66 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_VioletDefeat:: @ 8189EFA
# 67 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "You're raising some wonderful\n"
# 68 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Pokémon.$"
# 69 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 70 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_VioletPostBattle:: @ 8189F21
# 71 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "If you keep going this way, you'll\n"
# 72 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "eventually reach Berry Forest.$"
# 73 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 74 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_AmiraIntro:: @ 8189F63
# 75 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "My mommy said that I can't swim\n"
# 76 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "without my float ring.$"
# 77 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 78 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_AmiraDefeat:: @ 8189F9A
# 79 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Waaah!\n"
# 80 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Waaah!$"
# 81 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 82 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_AmiraPostBattle:: @ 8189FA8
# 83 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "This year, I'm going to finally\n"
# 84 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "learn how to swim!$"
# 85 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 86 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_AlexisIntro:: @ 8189FDB
# 87 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Yay, yay!\n"
# 88 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Pokémon!$"
# 89 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 90 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_AlexisDefeat:: @ 8189FEE
# 91 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "What happens now?$"
# 92 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 93 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_AlexisPostBattle:: @ 818A000
# 94 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Did I just win?\n"
# 95 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Or did I lose?$"
# 96 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 97 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_TishaIntro:: @ 818A01F
# 98 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Oh, no, don't come here!\n"
# 99 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Please, stay away from me!$"
# 100 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 101 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_TishaDefeat:: @ 818A053
# 102 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Okay, you've won!\n"
# 103 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Now will you please go away?$"
# 104 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 105 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_TishaPostBattle:: @ 818A082
# 106 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "A Pokémon bit through my \n"
# 107 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "swimsuit.\p"
# 108 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "I can't get out of the water!$"
# 109 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 110 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_JoyIntro:: @ 818A0C4
# 111 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Joy: We'll teach you what our\n"
# 112 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "favorite Pokémon is!$"
# 113 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 114 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_JoyDefeat:: @ 818A0F7
# 115 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Joy: Ohh…\n"
# 116 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Meg!$"
# 117 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 118 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_JoyPostBattle:: @ 818A106
# 119 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Joy: Wasn't that fun?\n"
# 120 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "I hope we can battle again!$"
# 121 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 122 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_JoyNotEnoughMons:: @ 818A138
# 123 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Joy: I really want to battle with\n"
# 124 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Meg.\p"
# 125 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "One Pokémon isn't enough.$"
# 126 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 127 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_MegIntro:: @ 818A179
# 128 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Meg: We'll show you our favorite\n"
# 129 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Pokémon.$"
# 130 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 131 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_MegDefeat:: @ 818A1A3
# 132 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Meg: Ohh…\n"
# 133 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Joy!$"
# 134 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 135 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_MegPostBattle:: @ 818A1B2
# 136 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Meg: Joy, wasn't that fun?$"
# 137 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 138 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_MegNotEnoughMons:: @ 818A1CD
# 139 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Meg: I want to battle together\n"
# 140 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "with Joy.\p"
# 141 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "One Pokémon isn't enough.$"
# 142 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 143 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_BerryForestAhead:: @ 818A210
# 144 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Berry Forest Ahead$"
# 145 "data/maps/ThreeIsland_BondBridge/scripts.pory"

# 146 "data/maps/ThreeIsland_BondBridge/scripts.pory"
ThreeIsland_BondBridge_Text_BondBridgeSign:: @ 818A223
# 147 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Bond Bridge\n"
# 148 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Please be quiet when crossing.\p"
# 149 "data/maps/ThreeIsland_BondBridge/scripts.pory"
    .string "Berry Forest Ahead$"
