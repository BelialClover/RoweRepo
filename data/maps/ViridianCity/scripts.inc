# 1 "data/maps/ViridianCity/scripts.pory"

# 2 "data/maps/ViridianCity/scripts.pory"
ViridianCity_MapScripts::
# 3 "data/maps/ViridianCity/scripts.pory"
	.byte 0
# 4 "data/maps/ViridianCity/scripts.pory"
	
# 5 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_Boy:: @ 81659C1
# 6 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CanCarryMonsAnywhere, MSGBOX_NPC
# 7 "data/maps/ViridianCity/scripts.pory"
	end
# 8 "data/maps/ViridianCity/scripts.pory"
	
# 9 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_Woman:: @ 8165AC4
# 10 "data/maps/ViridianCity/scripts.pory"
	lock
# 11 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 12 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GoShoppingInPewterOccasionally
# 13 "data/maps/ViridianCity/scripts.pory"
	release
# 14 "data/maps/ViridianCity/scripts.pory"
	end
# 15 "data/maps/ViridianCity/scripts.pory"
	
# 16 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TrainerTips1:: @ 816599D
# 17 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CatchMonsForEasierBattles, MSGBOX_SIGN
# 18 "data/maps/ViridianCity/scripts.pory"
	end
# 19 "data/maps/ViridianCity/scripts.pory"
	
# 20 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_OldManGymLeaderReturned:: @ 81659EC
# 21 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ViridiansGymLeaderReturned
# 22 "data/maps/ViridianCity/scripts.pory"
	release
# 23 "data/maps/ViridianCity/scripts.pory"
	end
# 24 "data/maps/ViridianCity/scripts.pory"
	
# 25 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_CitySign:: @ 8165994
# 26 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CitySign, MSGBOX_SIGN
# 27 "data/maps/ViridianCity/scripts.pory"
	end
# 28 "data/maps/ViridianCity/scripts.pory"
	
# 29 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TrainerTips2:: @ 81659A6
# 30 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_MovesLimitedByPP, MSGBOX_SIGN
# 31 "data/maps/ViridianCity/scripts.pory"
	end
# 32 "data/maps/ViridianCity/scripts.pory"
	
# 33 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_GymSign:: @ 81659AF
# 34 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymSign, MSGBOX_SIGN
# 35 "data/maps/ViridianCity/scripts.pory"
	end
# 36 "data/maps/ViridianCity/scripts.pory"

# 37 "data/maps/ViridianCity/scripts.pory"
	
# 38 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_Youngster:: @ 8165A8F
# 39 "data/maps/ViridianCity/scripts.pory"
	lock
# 40 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 41 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WantToKnowAboutCaterpillarMons, MSGBOX_YESNO
# 42 "data/maps/ViridianCity/scripts.pory"
	compare VAR_RESULT, YES
# 43 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq ViridianCity_EventScript_YoungsterExplainCaterpillars
# 44 "data/maps/ViridianCity/scripts.pory"
	compare VAR_RESULT, NO
# 45 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq ViridianCity_EventScript_YoungsterDeclineExplanation
# 46 "data/maps/ViridianCity/scripts.pory"
	end
# 47 "data/maps/ViridianCity/scripts.pory"
	
# 48 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_YoungsterExplainCaterpillars:: @ 8165AB0
# 49 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ExplainCaterpieWeedle
# 50 "data/maps/ViridianCity/scripts.pory"
	release
# 51 "data/maps/ViridianCity/scripts.pory"
	end
# 52 "data/maps/ViridianCity/scripts.pory"

# 53 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_YoungsterDeclineExplanation:: @ 8165ABA
# 54 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_OhOkayThen
# 55 "data/maps/ViridianCity/scripts.pory"
	release
# 56 "data/maps/ViridianCity/scripts.pory"
	end
# 57 "data/maps/ViridianCity/scripts.pory"
	
# 58 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_RoadBlocked:: @ 8165AF6
# 59 "data/maps/ViridianCity/scripts.pory"
	lockall
# 60 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty, MSGBOX_SIGN
# 61 "data/maps/ViridianCity/scripts.pory"
	releaseall
# 62 "data/maps/ViridianCity/scripts.pory"
	end
# 63 "data/maps/ViridianCity/scripts.pory"
	
# 64 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_OldMan:: @ 81659CA
# 65 "data/maps/ViridianCity/scripts.pory"
	lock
# 66 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 67 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymClosedWonderWhoLeaderIs
# 68 "data/maps/ViridianCity/scripts.pory"
	release
# 69 "data/maps/ViridianCity/scripts.pory"
	end
# 70 "data/maps/ViridianCity/scripts.pory"
	
# 71 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_CanCarryMonsAnywhere:: @ 817DABB
# 72 "data/maps/ViridianCity/scripts.pory"
    .string "Those Poké Balls at your waist!\n"
# 73 "data/maps/ViridianCity/scripts.pory"
    .string "You have Pokémon, don't you?\p"
# 74 "data/maps/ViridianCity/scripts.pory"
    .string "It's great that you can carry and\n"
# 75 "data/maps/ViridianCity/scripts.pory"
    .string "use Pokémon anytime, anywhere.$"
# 76 "data/maps/ViridianCity/scripts.pory"

# 77 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_GymClosedWonderWhoLeaderIs:: @ 817DB39
# 78 "data/maps/ViridianCity/scripts.pory"
    .string "This Pokémon Gym is always closed.\p"
# 79 "data/maps/ViridianCity/scripts.pory"
    .string "I wonder who the Leader is?$"
# 80 "data/maps/ViridianCity/scripts.pory"

# 81 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_ViridiansGymLeaderReturned:: @ 817DB78
# 82 "data/maps/ViridianCity/scripts.pory"
    .string "Viridian Gym's Leader returned!$"
# 83 "data/maps/ViridianCity/scripts.pory"

# 84 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_WantToKnowAboutCaterpillarMons:: @ 817DB98
# 85 "data/maps/ViridianCity/scripts.pory"
    .string "You want to know about the two\n"
# 86 "data/maps/ViridianCity/scripts.pory"
    .string "kinds of caterpillar Pokémon?$"
# 87 "data/maps/ViridianCity/scripts.pory"

# 88 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_OhOkayThen:: @ 817DBD5
# 89 "data/maps/ViridianCity/scripts.pory"
    .string "Oh, okay then!$"
# 90 "data/maps/ViridianCity/scripts.pory"

# 91 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_ExplainCaterpieWeedle:: @ 817DBE4
# 92 "data/maps/ViridianCity/scripts.pory"
    .string "Caterpie has no Poison,\n"
# 93 "data/maps/ViridianCity/scripts.pory"
    .string "but Weedle does.\p"
# 94 "data/maps/ViridianCity/scripts.pory"
    .string "Watch that your Pokémon aren't\n"
# 95 "data/maps/ViridianCity/scripts.pory"
    .string "stabbed by Weedle's Poison Sting.$"
# 96 "data/maps/ViridianCity/scripts.pory"

# 97 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_GrandpaHasntHadCoffeeYet:: @ 817DC4E
# 98 "data/maps/ViridianCity/scripts.pory"
    .string "Oh, Grandpa!\n"
# 99 "data/maps/ViridianCity/scripts.pory"
    .string "Don't be so mean!\p"
# 100 "data/maps/ViridianCity/scripts.pory"
    .string "I'm so sorry.\n"
# 101 "data/maps/ViridianCity/scripts.pory"
    .string "He hasn't had his coffee yet.$"
# 102 "data/maps/ViridianCity/scripts.pory"

# 103 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_GoShoppingInPewterOccasionally:: @ 817DC99
# 104 "data/maps/ViridianCity/scripts.pory"
    .string "I go shopping in Pewter City\n"
# 105 "data/maps/ViridianCity/scripts.pory"
    .string "occasionally.\p"
# 106 "data/maps/ViridianCity/scripts.pory"
    .string "I have to take the winding trail in\n"
# 107 "data/maps/ViridianCity/scripts.pory"
    .string "Viridian Forest when I go.$"
# 108 "data/maps/ViridianCity/scripts.pory"

# 109 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_ThisIsPrivateProperty:: @ 817DD03
# 110 "data/maps/ViridianCity/scripts.pory"
    .string "I absolutely forbid you from\n"
# 111 "data/maps/ViridianCity/scripts.pory"
    .string "going through here!\p"
# 112 "data/maps/ViridianCity/scripts.pory"
    .string "This is private property!$"
# 113 "data/maps/ViridianCity/scripts.pory"

# 114 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_ShowYouHowToCatchMons:: @ 817DD4E
# 115 "data/maps/ViridianCity/scripts.pory"
    .string "Well, now, I've had my coffee, and\n"
# 116 "data/maps/ViridianCity/scripts.pory"
    .string "that's what I need to get going!\p"
# 117 "data/maps/ViridianCity/scripts.pory"
    .string "Hm?\n"
# 118 "data/maps/ViridianCity/scripts.pory"
    .string "What is that red box you have?\p"
# 119 "data/maps/ViridianCity/scripts.pory"
    .string "Ah, so you're working on your\n"
# 120 "data/maps/ViridianCity/scripts.pory"
    .string "Pokédex.\p"
# 121 "data/maps/ViridianCity/scripts.pory"
    .string "Then let me give you a word of\n"
# 122 "data/maps/ViridianCity/scripts.pory"
    .string "advice.\p"
# 123 "data/maps/ViridianCity/scripts.pory"
    .string "Whenever you catch a Pokémon,\n"
# 124 "data/maps/ViridianCity/scripts.pory"
    .string "the Pokédex automatically updates\l"
# 125 "data/maps/ViridianCity/scripts.pory"
    .string "its data.\p"
# 126 "data/maps/ViridianCity/scripts.pory"
    .string "…You don't know how to catch\n"
# 127 "data/maps/ViridianCity/scripts.pory"
    .string "a Pokémon?\p"
# 128 "data/maps/ViridianCity/scripts.pory"
    .string "I suppose I had better show you\n"
# 129 "data/maps/ViridianCity/scripts.pory"
    .string "then!$"
# 130 "data/maps/ViridianCity/scripts.pory"

# 131 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_ThatWasEducationalTakeThis:: @ 817DE9B
# 132 "data/maps/ViridianCity/scripts.pory"
    .string "There! Now tell me, that was\n"
# 133 "data/maps/ViridianCity/scripts.pory"
    .string "educational, was it not?\p"
# 134 "data/maps/ViridianCity/scripts.pory"
    .string "And here, take this, too.$"
# 135 "data/maps/ViridianCity/scripts.pory"

# 136 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_WatchThatToLearnBasics:: @ 817DEEB
# 137 "data/maps/ViridianCity/scripts.pory"
    .string "If there's something you don't\n"
# 138 "data/maps/ViridianCity/scripts.pory"
    .string "understand, watch that.\p"
# 139 "data/maps/ViridianCity/scripts.pory"
    .string "It will teach you about the basics\n"
# 140 "data/maps/ViridianCity/scripts.pory"
    .string "of being a Pokémon Trainer.$"
# 141 "data/maps/ViridianCity/scripts.pory"

# 142 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_WeakenMonsFirstToCatch:: @ 817DF61
# 143 "data/maps/ViridianCity/scripts.pory"
    .string "Well, now, I've had my coffee, and\n"
# 144 "data/maps/ViridianCity/scripts.pory"
    .string "that's what I need to get going!\p"
# 145 "data/maps/ViridianCity/scripts.pory"
    .string "But I made it too strong.\n"
# 146 "data/maps/ViridianCity/scripts.pory"
    .string "It gave me a headache…\p"
# 147 "data/maps/ViridianCity/scripts.pory"
    .string "Incidentally, are you filling your\n"
# 148 "data/maps/ViridianCity/scripts.pory"
    .string "Pokédex?\p"
# 149 "data/maps/ViridianCity/scripts.pory"
    .string "At first, focus on weakening the\n"
# 150 "data/maps/ViridianCity/scripts.pory"
    .string "Pokémon before trying to catch it.$"
# 151 "data/maps/ViridianCity/scripts.pory"

# 152 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_HowsTeachyTVHelping:: @ 817E046
# 153 "data/maps/ViridianCity/scripts.pory"
    .string "Well, now, I've had my coffee, and\n"
# 154 "data/maps/ViridianCity/scripts.pory"
    .string "that's what I need to get going!\p"
# 155 "data/maps/ViridianCity/scripts.pory"
    .string "But I made it too strong.\n"
# 156 "data/maps/ViridianCity/scripts.pory"
    .string "It gave me a headache…\p"
# 157 "data/maps/ViridianCity/scripts.pory"
    .string "Incidentally, is my old Teachy TV\n"
# 158 "data/maps/ViridianCity/scripts.pory"
    .string "helping you?$"
# 159 "data/maps/ViridianCity/scripts.pory"

# 160 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_MyGrandsonOnTheShow:: @ 817E0EA
# 161 "data/maps/ViridianCity/scripts.pory"
    .string "Wahaha!\n"
# 162 "data/maps/ViridianCity/scripts.pory"
    .string "It's my grandson on the show!\p"
# 163 "data/maps/ViridianCity/scripts.pory"
    .string "Since he's the one doing the\n"
# 164 "data/maps/ViridianCity/scripts.pory"
    .string "teaching, you're bound to learn.$"
# 165 "data/maps/ViridianCity/scripts.pory"

# 166 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_TooBusyForTeachyTV:: @ 817E14E
# 167 "data/maps/ViridianCity/scripts.pory"
    .string "Hm… You're too busy to not even\n"
# 168 "data/maps/ViridianCity/scripts.pory"
    .string "have the time for Teachy TV…\p"
# 169 "data/maps/ViridianCity/scripts.pory"
    .string "Time is money, and neither should\n"
# 170 "data/maps/ViridianCity/scripts.pory"
    .string "be ill spent…$"
# 171 "data/maps/ViridianCity/scripts.pory"

# 172 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_CitySign:: @ 817E1BB
# 173 "data/maps/ViridianCity/scripts.pory"
    .string "Viridian City \n"
# 174 "data/maps/ViridianCity/scripts.pory"
    .string "The Eternally Green Paradise$"
# 175 "data/maps/ViridianCity/scripts.pory"

# 176 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_CatchMonsForEasierBattles:: @ 817E1E7
# 177 "data/maps/ViridianCity/scripts.pory"
    .string "Trainer Tips\p"
# 178 "data/maps/ViridianCity/scripts.pory"
    .string "Catch Pokémon and expand your\n"
# 179 "data/maps/ViridianCity/scripts.pory"
    .string "collection.\p"
# 180 "data/maps/ViridianCity/scripts.pory"
    .string "The more you have, the easier it\n"
# 181 "data/maps/ViridianCity/scripts.pory"
    .string "is to battle.$"
# 182 "data/maps/ViridianCity/scripts.pory"

# 183 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_MovesLimitedByPP:: @ 817E24D
# 184 "data/maps/ViridianCity/scripts.pory"
    .string "Trainer Tips\p"
# 185 "data/maps/ViridianCity/scripts.pory"
    .string "The battle moves of Pokémon are\n"
# 186 "data/maps/ViridianCity/scripts.pory"
    .string "limited by their Power Points, PP.\p"
# 187 "data/maps/ViridianCity/scripts.pory"
    .string "To replenish PP, rest your tired\n"
# 188 "data/maps/ViridianCity/scripts.pory"
    .string "Pokémon at a Pokémon Center.$"
# 189 "data/maps/ViridianCity/scripts.pory"

# 190 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_GymSign:: @ 817E2DB
# 191 "data/maps/ViridianCity/scripts.pory"
    .string "Viridian City Pokémon Gym$"
# 192 "data/maps/ViridianCity/scripts.pory"

# 193 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Text_GymDoorsAreLocked:: @ 817E2F5
# 194 "data/maps/ViridianCity/scripts.pory"
    .string "Viridian Gym's doors are locked…$"
