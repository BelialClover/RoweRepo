# 1 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 2 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_MapScripts:: @ 822C4DD
# 3 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.byte 0
# 4 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 5 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_Nicolas:: @ 822C4DE
# 6 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_single TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasIntro, MeteorFalls_1F_2R_Text_NicolasDefeat, MeteorFalls_1F_2R_EventScript_RegisterNicolas
# 7 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	compare VAR_RESULT, TRUE
# 9 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto_if_eq MeteorFalls_1F_2R_EventScript_RematchNicolas
# 10 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasPostBattle, MSGBOX_DEFAULT
# 11 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 12 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 13 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 14 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterNicolas:: @ 822C50A
# 15 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 16 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	waitmovement 0
# 17 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasRegister, MSGBOX_DEFAULT
# 18 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_NICOLAS_1
# 19 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 20 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 21 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 22 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchNicolas:: @ 822C529
# 23 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch TRAINER_NICOLAS_1, MeteorFalls_1F_2R_Text_NicolasRematchIntro, MeteorFalls_1F_2R_Text_NicolasRematchDefeat
# 24 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_NicolasPostRematch, MSGBOX_AUTOCLOSE
# 25 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 26 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 27 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_John:: @ 822C540
# 28 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnIntro, MeteorFalls_1F_2R_Text_JohnDefeat, MeteorFalls_1F_2R_Text_JohnNotEnoughMons, MeteorFalls_1F_2R_EventScript_RegisterJohn
# 29 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 30 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	compare VAR_RESULT, TRUE
# 31 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto_if_eq MeteorFalls_1F_2R_EventScript_RematchJohn
# 32 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnPostBattle, MSGBOX_DEFAULT
# 33 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 34 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 35 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 36 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterJohn:: @ 822C570
# 37 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT
# 38 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_JOHN_AND_JAY_1
# 39 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 40 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 41 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 42 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchJohn:: @ 822C589
# 43 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JohnRematchIntro, MeteorFalls_1F_2R_Text_JohnRematchDefeat, MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons
# 44 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnPostRematch, MSGBOX_AUTOCLOSE
# 45 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 46 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 47 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_Jay:: @ 822C5A4
# 48 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayIntro, MeteorFalls_1F_2R_Text_JayDefeat, MeteorFalls_1F_2R_Text_JayNotEnoughMons, MeteorFalls_1F_2R_EventScript_RegisterJay
# 49 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 50 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	compare VAR_RESULT, TRUE
# 51 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	goto_if_eq MeteorFalls_1F_2R_EventScript_RematchJay
# 52 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JayPostBattle, MSGBOX_DEFAULT
# 53 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 54 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 55 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 56 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RegisterJay:: @ 822C5D4
# 57 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JohnRegister, MSGBOX_DEFAULT  @ John speaks for both during register
# 58 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	register_matchcall TRAINER_JOHN_AND_JAY_1
# 59 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	release
# 60 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 61 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 62 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_EventScript_RematchJay:: @ 822C5ED
# 63 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	trainerbattle_rematch_double TRAINER_JOHN_AND_JAY_1, MeteorFalls_1F_2R_Text_JayRematchIntro, MeteorFalls_1F_2R_Text_JayRematchDefeat, MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons
# 64 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	msgbox MeteorFalls_1F_2R_Text_JayPostRematch, MSGBOX_AUTOCLOSE
# 65 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	end
# 66 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 67 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasIntro: @ 822C608
# 68 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "This is where we Dragon users do our\n"
# 69 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "training.\p"
# 70 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "The Champion even visits.\n"
# 71 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Now do you see how special it is here?$"
# 72 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 73 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasDefeat: @ 822C678
# 74 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Urgh!\n"
# 75 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "I didn't expect you to be so strong!$"
# 76 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 77 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasPostBattle: @ 822C6A3
# 78 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "The road ahead remains long and harsh.\p"
# 79 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "When will my Pokémon and I become\n"
# 80 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "the best?$"
# 81 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 82 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRegister: @ 822C6F6
# 83 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "I want to know more about your power.\n"
# 84 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Let me register you in my Pokénav.$"
# 85 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 86 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRematchIntro: @ 822C73F
# 87 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Since we met, we have trained hard\n"
# 88 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "with our sights on number one.\p"
# 89 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Help us see how much stronger we've\n"
# 90 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "become!$"
# 91 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 92 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasRematchDefeat: @ 822C7AD
# 93 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Urgh!\n"
# 94 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "I didn't expect you to be so strong!$"
# 95 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 96 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_NicolasPostRematch: @ 822C7D8
# 97 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "You've obviously kept up your\n"
# 98 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Pokémon training.\p"
# 99 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "So long as you remain strong, I, too,\n"
# 100 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "can become stronger!$"
# 101 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 102 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnIntro: @ 822C843
# 103 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "John: We've always battled Pokémon\n"
# 104 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "together as a twosome.\l"
# 105 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've confidence in ourselves.$"
# 106 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 107 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnDefeat: @ 822C89C
# 108 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "John: Oh, my.\n"
# 109 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've lost, dear wife.$"
# 110 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 111 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnPostBattle: @ 822C8C1
# 112 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "John: We've been married for\n"
# 113 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "fifty years.\p"
# 114 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Come to think of it, I've yet to beat\n"
# 115 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "my dear wife in a battle.$"
# 116 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 117 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnNotEnoughMons: @ 822C92B
# 118 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "John: Well, well, what a young Trainer!\p"
# 119 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Will you battle with us? If so, you'll\n"
# 120 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "have to return with more Pokémon.$"
# 121 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 122 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRegister: @ 822C99C
# 123 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "John: Young Trainer, if the chance\n"
# 124 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "arises, will you battle with us again?$"
# 125 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 126 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayIntro: @ 822C9E6
# 127 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Jay: We've been married for\n"
# 128 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "fifty years.\p"
# 129 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "The bond we share as a couple could\n"
# 130 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "never be broken.$"
# 131 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 132 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayDefeat: @ 822CA44
# 133 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Jay: Oh, dear.\n"
# 134 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've lost, my dear husband.$"
# 135 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 136 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayPostBattle: @ 822CA70
# 137 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Jay: Fifty years of marriage…\p"
# 138 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "If we ever argued, we always settled\n"
# 139 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "it with a Pokémon battle…$"
# 140 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 141 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayNotEnoughMons: @ 822CACD
# 142 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Jay: Well, well, aren't you a young\n"
# 143 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Trainer?\p"
# 144 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "If you'd care to battle with us, you'll\n"
# 145 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "have to come back with more Pokémon.$"
# 146 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 147 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchIntro: @ 822CB47
# 148 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "John: We've always battled Pokémon\n"
# 149 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "together as a twosome.\l"
# 150 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've confidence in ourselves.$"
# 151 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 152 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchDefeat: @ 822CBA0
# 153 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "John: Oh, my.\n"
# 154 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've lost, dear wife.$"
# 155 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 156 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnPostRematch: @ 822CBC5
# 157 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "John: Married for fifty years…\p"
# 158 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "On reflection, the dear wife and I,\n"
# 159 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "we battled day in and day out…$"
# 160 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 161 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JohnRematchNotEnoughMons: @ 822CC27
# 162 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "John: Well, well, what a young Trainer!\p"
# 163 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Will you battle with us? If so, you'll\n"
# 164 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "have to return with more Pokémon.$"
# 165 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 166 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchIntro: @ 822CC98
# 167 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Jay: We've been married for\n"
# 168 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "fifty years.\p"
# 169 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've supported each other all that\n"
# 170 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "time. We've made ourselves strong.$"
# 171 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 172 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchDefeat: @ 822CD08
# 173 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Jay: Oh, dear.\n"
# 174 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "We've lost, my dear husband.$"
# 175 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 176 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayPostRematch: @ 822CD34
# 177 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Jay: Fifty years of marriage…\n"
# 178 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Many things have happened.\p"
# 179 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "I hope that we will continue to make\n"
# 180 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "happy memories together.$"
# 181 "data/maps/MeteorFalls_1F_2R/scripts.pory"

# 182 "data/maps/MeteorFalls_1F_2R/scripts.pory"
MeteorFalls_1F_2R_Text_JayRematchNotEnoughMons: @ 822CDAB
# 183 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Jay: Well, well, aren't you a young\n"
# 184 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "Trainer?\p"
# 185 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "If you'd care to battle with us, you'll\n"
# 186 "data/maps/MeteorFalls_1F_2R/scripts.pory"
	.string "have to come back with more Pokémon.$"
