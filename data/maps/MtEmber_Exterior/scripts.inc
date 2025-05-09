# 1 "data/maps/MtEmber_Exterior/scripts.pory"

# 2 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_MapScripts::
# 3 "data/maps/MtEmber_Exterior/scripts.pory"
	.byte 0
# 4 "data/maps/MtEmber_Exterior/scripts.pory"
	
# 5 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_Grunt1:: @ 816397F
# 6 "data/maps/MtEmber_Exterior/scripts.pory"
	lock
# 7 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_WellTryDiggingHere
# 8 "data/maps/MtEmber_Exterior/scripts.pory"
	release
# 9 "data/maps/MtEmber_Exterior/scripts.pory"
	end
# 10 "data/maps/MtEmber_Exterior/scripts.pory"
	
# 11 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_ExplosionTutor:: @ 8163AB4
# 12 "data/maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_LOGAN, MtEmber_Exterior_Text_LoganIntro, MtEmber_Exterior_Text_LoganDefeat
# 13 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_LoganPostBattle, MSGBOX_AUTOCLOSE
# 14 "data/maps/MtEmber_Exterior/scripts.pory"
	end
# 15 "data/maps/MtEmber_Exterior/scripts.pory"
	
# 16 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_Logan:: @ 8163AB4
# 17 "data/maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_LOGAN, MtEmber_Exterior_Text_LoganIntro, MtEmber_Exterior_Text_LoganDefeat
# 18 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_LoganPostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/MtEmber_Exterior/scripts.pory"
	end
# 20 "data/maps/MtEmber_Exterior/scripts.pory"

# 21 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_Beth:: @ 8163ACB
# 22 "data/maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_BETH, MtEmber_Exterior_Text_BethIntro, MtEmber_Exterior_Text_BethDefeat
# 23 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_BethPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/MtEmber_Exterior/scripts.pory"
	end
# 25 "data/maps/MtEmber_Exterior/scripts.pory"

# 26 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_EventScript_Jocelyn:: @ 8163AE2
# 27 "data/maps/MtEmber_Exterior/scripts.pory"
	trainerbattle_single TRAINER_CRUSH_GIRL_JOCELYN, MtEmber_Exterior_Text_JocelynIntro, MtEmber_Exterior_Text_JocelynDefeat
# 28 "data/maps/MtEmber_Exterior/scripts.pory"
	msgbox MtEmber_Exterior_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 29 "data/maps/MtEmber_Exterior/scripts.pory"
	end
# 30 "data/maps/MtEmber_Exterior/scripts.pory"
	
# 31 "data/maps/MtEmber_Exterior/scripts.pory"
Text_ExplosionTeach:: @ 817A642
# 32 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Can you imagine?\n"
# 33 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "If this volcano were to erupt?\p"
# 34 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "The explosion would be the end of\n"
# 35 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "us. How terrifying is that?\p"
# 36 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "While we're terrified, would you\n"
# 37 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "like me to teach Explosion?$"
# 38 "data/maps/MtEmber_Exterior/scripts.pory"

# 39 "data/maps/MtEmber_Exterior/scripts.pory"
Text_ExplosionDeclined:: @ 817A6ED
# 40 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Yeah, you're right.\n"
# 41 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "It is too terrifying.$"
# 42 "data/maps/MtEmber_Exterior/scripts.pory"

# 43 "data/maps/MtEmber_Exterior/scripts.pory"
Text_ExplosionWhichMon:: @ 817A717
# 44 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "You're terribly brave!\p"
# 45 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Which Pokémon should I teach\n"
# 46 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Explosion?$"
# 47 "data/maps/MtEmber_Exterior/scripts.pory"

# 48 "data/maps/MtEmber_Exterior/scripts.pory"
Text_ExplosionTaught:: @ 817A756
# 49 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Using Explosion while on this\n"
# 50 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "volcano…\p"
# 51 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "What a terrifying thrill!$"
# 52 "data/maps/MtEmber_Exterior/scripts.pory"

# 53 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_WellTryDiggingHere:: @ 817A82A
# 54 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Over here.\n"
# 55 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "We'll try digging here.\p"
# 56 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "That treasure the ADMINS've been\n"
# 57 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "talking about should be here.$"
# 58 "data/maps/MtEmber_Exterior/scripts.pory"

# 59 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_YoureInTheWayGetLost:: @ 817A88C
# 60 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "What the…?\n"
# 61 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "You're in the way. Get lost.$"
# 62 "data/maps/MtEmber_Exterior/scripts.pory"

# 63 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_PunchedThroughAtLast:: @ 817A8B4
# 64 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Whew, punched through at last.\n"
# 65 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Let's go treasure hunting!$"
# 66 "data/maps/MtEmber_Exterior/scripts.pory"

# 67 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_WhatsPasswordAgain:: @ 817A8EE
# 68 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Any treasure we find, we haul back\n"
# 69 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "to the Warehouse, understood?\p"
# 70 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "…Oh, and what're the passwords?\n"
# 71 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "At the Rocket Warehouse, I mean.$"
# 72 "data/maps/MtEmber_Exterior/scripts.pory"

# 73 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_FirstPasswordGoldeen:: @ 817A970
# 74 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "What, you forgot the password?\n"
# 75 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "There're actually two.\p"
# 76 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "The first one's “Goldeen need\n"
# 77 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "log.”\p"
# 78 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "And the second one is…$"
# 79 "data/maps/MtEmber_Exterior/scripts.pory"

# 80 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_SnoopsBeenListeningIn:: @ 817A9E1
# 81 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Hey!\n"
# 82 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "This snoop's been listening in!$"
# 83 "data/maps/MtEmber_Exterior/scripts.pory"

# 84 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_Grunt1Intro:: @ 817AA06
# 85 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "You've been eavesdropping on us,\n"
# 86 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "haven't you?$"
# 87 "data/maps/MtEmber_Exterior/scripts.pory"

# 88 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_Grunt1Defeat:: @ 817AA34
# 89 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Huh, what?$"
# 90 "data/maps/MtEmber_Exterior/scripts.pory"

# 91 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_Grunt1PostBattle:: @ 817AA3F
# 92 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Why'd you have to win?$"
# 93 "data/maps/MtEmber_Exterior/scripts.pory"

# 94 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_Grunt2Intro:: @ 817AA56
# 95 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Trying to horn in on our treasure?\n"
# 96 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Don't bet on it!$"
# 97 "data/maps/MtEmber_Exterior/scripts.pory"

# 98 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_Grunt2Defeat:: @ 817AA8A
# 99 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Wait!\n"
# 100 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "But how?$"
# 101 "data/maps/MtEmber_Exterior/scripts.pory"

# 102 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_Grunt2PostBattle:: @ 817AA99
# 103 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Develop amnesia conveniently and\n"
# 104 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "forget everything you heard!$"
# 105 "data/maps/MtEmber_Exterior/scripts.pory"

# 106 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_WellRegroupDontStepInsideThere:: @ 817AAD7
# 107 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "What a setback…\n"
# 108 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "We'll have to regroup.\p"
# 109 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "You! Don't even think about taking\n"
# 110 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "a step inside here!\p"
# 111 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "If you know what's good for you,\n"
# 112 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "don't even think about this!$"
# 113 "data/maps/MtEmber_Exterior/scripts.pory"

# 114 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_LoganIntro:: @ 817AB73
# 115 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "An active volcano is one that's\n"
# 116 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "erupting, or about to.$"
# 117 "data/maps/MtEmber_Exterior/scripts.pory"

# 118 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_LoganDefeat:: @ 817ABAA
# 119 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Whew… That was hot!\n"
# 120 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Sweat's erupting from me!$"
# 121 "data/maps/MtEmber_Exterior/scripts.pory"

# 122 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_LoganPostBattle:: @ 817ABD8
# 123 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "They say there're over 1,500\n"
# 124 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "active volcanoes in the world.\p"
# 125 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Just thinking about them makes me\n"
# 126 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "feel all hot and gooey inside!$"
# 127 "data/maps/MtEmber_Exterior/scripts.pory"

# 128 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_BethIntro:: @ 817AC55
# 129 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Do you know how caves form inside\n"
# 130 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "volcanoes?$"
# 131 "data/maps/MtEmber_Exterior/scripts.pory"

# 132 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_BethDefeat:: @ 817AC82
# 133 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "Atchah!\n"
# 134 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "You're shockingly good!$"
# 135 "data/maps/MtEmber_Exterior/scripts.pory"

# 136 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_BethPostBattle:: @ 817ACA2
# 137 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "When lava at the surface of magma\n"
# 138 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "hardens, and the magma inside flows\l"
# 139 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "out, caverns are left behind.$"
# 140 "data/maps/MtEmber_Exterior/scripts.pory"

# 141 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_JocelynIntro:: @ 817AD06
# 142 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "I've been in training so I can mend\n"
# 143 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "my broken heart…\p"
# 144 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "It toughened me up physically at\n"
# 145 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "least! Hi-yah!$"
# 146 "data/maps/MtEmber_Exterior/scripts.pory"

# 147 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_JocelynDefeat:: @ 817AD6B
# 148 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "I think I tried to overdo it…$"
# 149 "data/maps/MtEmber_Exterior/scripts.pory"

# 150 "data/maps/MtEmber_Exterior/scripts.pory"
MtEmber_Exterior_Text_JocelynPostBattle:: @ 817AD89
# 151 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "The way you battle, it reminds me\n"
# 152 "data/maps/MtEmber_Exterior/scripts.pory"
    .string "of the guy who dumped me…$"
