# 1 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 2 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_MapScripts::
# 3 "data/maps/OneIsland_KindleRoad/scripts.pory"
	.byte 0
# 4 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 5 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_EventScript_RouteSign:: @ 8168759
# 6 "data/maps/OneIsland_KindleRoad/scripts.pory"
	msgbox OneIsland_KindleRoad_Text_RouteSign, MSGBOX_SIGN
# 7 "data/maps/OneIsland_KindleRoad/scripts.pory"
	end
# 8 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 9 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_EventScript_EmberSpaSign:: @ 8168762
# 10 "data/maps/OneIsland_KindleRoad/scripts.pory"
	msgbox OneIsland_KindleRoad_Text_EmberSpaSign, MSGBOX_SIGN
# 11 "data/maps/OneIsland_KindleRoad/scripts.pory"
	end
# 12 "data/maps/OneIsland_KindleRoad/scripts.pory"
	
# 13 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_EventScript_EmberSpaClosed:: @ 81ABBF1
# 14 "data/maps/OneIsland_KindleRoad/scripts.pory"
	lock
# 15 "data/maps/OneIsland_KindleRoad/scripts.pory"
	faceplayer
# 16 "data/maps/OneIsland_KindleRoad/scripts.pory"
	msgbox OneIsland_KindleRoad_Text_EmberSpaClosed, MSGBOX_NPC
# 17 "data/maps/OneIsland_KindleRoad/scripts.pory"
	release
# 18 "data/maps/OneIsland_KindleRoad/scripts.pory"
	end
# 19 "data/maps/OneIsland_KindleRoad/scripts.pory"
	
# 20 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_EventScript_Maria:: @ 81ABBF1
# 21 "data/maps/OneIsland_KindleRoad/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_MARIA, OneIsland_KindleRoad_Text_MariaIntro, OneIsland_KindleRoad_Text_MariaDefeat
# 22 "data/maps/OneIsland_KindleRoad/scripts.pory"
	msgbox OneIsland_KindleRoad_Text_MariaPostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/OneIsland_KindleRoad/scripts.pory"
	end
# 24 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 25 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_EventScript_Abigail:: @ 81ABC2F
# 26 "data/maps/OneIsland_KindleRoad/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_FEMALE_ABIGAIL, OneIsland_KindleRoad_Text_AbigailIntro, OneIsland_KindleRoad_Text_AbigailDefeat
# 27 "data/maps/OneIsland_KindleRoad/scripts.pory"
	msgbox OneIsland_KindleRoad_Text_AbigailPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/OneIsland_KindleRoad/scripts.pory"
	end
# 29 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 30 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_EventScript_Finn:: @ 81ABC6D
# 31 "data/maps/OneIsland_KindleRoad/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_FINN, OneIsland_KindleRoad_Text_FinnIntro, OneIsland_KindleRoad_Text_FinnDefeat
# 32 "data/maps/OneIsland_KindleRoad/scripts.pory"
	msgbox OneIsland_KindleRoad_Text_FinnPostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/OneIsland_KindleRoad/scripts.pory"
	end
# 34 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 35 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_EventScript_Garrett:: @ 81ABCAB
# 36 "data/maps/OneIsland_KindleRoad/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_GARRETT, OneIsland_KindleRoad_Text_GarrettIntro, OneIsland_KindleRoad_Text_GarrettDefeat
# 37 "data/maps/OneIsland_KindleRoad/scripts.pory"
	msgbox OneIsland_KindleRoad_Text_GarrettPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/OneIsland_KindleRoad/scripts.pory"
	end
# 39 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 40 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_EventScript_Tommy:: @ 81ABCE9
# 41 "data/maps/OneIsland_KindleRoad/scripts.pory"
	trainerbattle_single TRAINER_FISHERMAN_TOMMY, OneIsland_KindleRoad_Text_TommyIntro, OneIsland_KindleRoad_Text_TommyDefeat
# 42 "data/maps/OneIsland_KindleRoad/scripts.pory"
	msgbox OneIsland_KindleRoad_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/OneIsland_KindleRoad/scripts.pory"
	end
# 44 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 45 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_EventScript_Sharon:: @ 81ABD27
# 46 "data/maps/OneIsland_KindleRoad/scripts.pory"
	trainerbattle_single TRAINER_CRUSH_GIRL_SHARON, OneIsland_KindleRoad_Text_SharonIntro, OneIsland_KindleRoad_Text_SharonDefeat
# 47 "data/maps/OneIsland_KindleRoad/scripts.pory"
	msgbox OneIsland_KindleRoad_Text_SharonPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/OneIsland_KindleRoad/scripts.pory"
	end
# 49 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 50 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_EventScript_Tanya:: @ 81ABD65
# 51 "data/maps/OneIsland_KindleRoad/scripts.pory"
	trainerbattle_single TRAINER_CRUSH_GIRL_TANYA, OneIsland_KindleRoad_Text_TanyaIntro, OneIsland_KindleRoad_Text_TanyaDefeat
# 52 "data/maps/OneIsland_KindleRoad/scripts.pory"
	msgbox OneIsland_KindleRoad_Text_TanyaPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/OneIsland_KindleRoad/scripts.pory"
	end
# 54 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 55 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_EventScript_Shea:: @ 81ABDA3
# 56 "data/maps/OneIsland_KindleRoad/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_SHEA, OneIsland_KindleRoad_Text_SheaIntro, OneIsland_KindleRoad_Text_SheaDefeat
# 57 "data/maps/OneIsland_KindleRoad/scripts.pory"
	msgbox OneIsland_KindleRoad_Text_SheaPostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/OneIsland_KindleRoad/scripts.pory"
	end
# 59 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 60 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_EventScript_Hugh:: @ 81ABDE1
# 61 "data/maps/OneIsland_KindleRoad/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_HUGH, OneIsland_KindleRoad_Text_HughIntro, OneIsland_KindleRoad_Text_HughDefeat
# 62 "data/maps/OneIsland_KindleRoad/scripts.pory"
	msgbox OneIsland_KindleRoad_Text_HughPostBattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/OneIsland_KindleRoad/scripts.pory"
	end
# 64 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 65 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_EventScript_Bryce:: @ 81ABE1F
# 66 "data/maps/OneIsland_KindleRoad/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_BRYCE, OneIsland_KindleRoad_Text_BryceIntro, OneIsland_KindleRoad_Text_BryceDefeat
# 67 "data/maps/OneIsland_KindleRoad/scripts.pory"
	msgbox OneIsland_KindleRoad_Text_BrycePostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/OneIsland_KindleRoad/scripts.pory"
	end
# 69 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 70 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_EventScript_Claire:: @ 81ABE5D
# 71 "data/maps/OneIsland_KindleRoad/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_CLAIRE, OneIsland_KindleRoad_Text_ClaireIntro, OneIsland_KindleRoad_Text_ClaireDefeat
# 72 "data/maps/OneIsland_KindleRoad/scripts.pory"
	msgbox OneIsland_KindleRoad_Text_ClairePostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/OneIsland_KindleRoad/scripts.pory"
	end
# 74 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 75 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_EventScript_Kia:: @ 81ABE9B
# 76 "data/maps/OneIsland_KindleRoad/scripts.pory"
	trainerbattle_double TRAINER_CRUSH_KIN_MIK_KIA, OneIsland_KindleRoad_Text_KiaIntro, OneIsland_KindleRoad_Text_KiaDefeat, OneIsland_KindleRoad_Text_KiaNotEnoughMons
# 77 "data/maps/OneIsland_KindleRoad/scripts.pory"
	msgbox OneIsland_KindleRoad_Text_KiaPostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/OneIsland_KindleRoad/scripts.pory"
	end
# 79 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 80 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_EventScript_Mik:: @ 81ABEE1
# 81 "data/maps/OneIsland_KindleRoad/scripts.pory"
	trainerbattle_double TRAINER_CRUSH_KIN_MIK_KIA, OneIsland_KindleRoad_Text_MikIntro, OneIsland_KindleRoad_Text_MikDefeat, OneIsland_KindleRoad_Text_MikNotEnoughMons
# 82 "data/maps/OneIsland_KindleRoad/scripts.pory"
	msgbox OneIsland_KindleRoad_Text_MikPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/OneIsland_KindleRoad/scripts.pory"
	end
# 84 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 85 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_MariaIntro:: @ 818961F
# 86 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "The weather's gorgeous!\n"
# 87 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Perfect for a battle!$"
# 88 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 89 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_MariaDefeat:: @ 818964D
# 90 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Aiyeeeeh!$"
# 91 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 92 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_MariaPostBattle:: @ 8189657
# 93 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Please don't splash my face!\n"
# 94 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "You'll ruin the makeup.$"
# 95 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 96 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_AbigailIntro:: @ 818968C
# 97 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "I'm beginning to get a sunburn…$"
# 98 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 99 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_AbigailDefeat:: @ 81896AC
# 100 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Oh, you're so awful.$"
# 101 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 102 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_AbigailPostBattle:: @ 81896C1
# 103 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "I like that cap you have.\n"
# 104 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Maybe I should wear one, too…$"
# 105 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 106 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_FinnIntro:: @ 81896F9
# 107 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Seen from here, Mt. Ember towers\n"
# 108 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "into the sky.$"
# 109 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 110 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_FinnDefeat:: @ 8189728
# 111 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Well, aren't you tough?$"
# 112 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 113 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_FinnPostBattle:: @ 8189740
# 114 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "The sky is immense around these\n"
# 115 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "parts.$"
# 116 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 117 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_GarrettIntro:: @ 8189767
# 118 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "I took a break from swimming,\n"
# 119 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "only to have you challenge me?$"
# 120 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 121 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_GarrettDefeat:: @ 81897A4
# 122 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Hey, what the…\n"
# 123 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "You're good, you!$"
# 124 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 125 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_GarrettPostBattle:: @ 81897C5
# 126 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Instead of using Surf all the time,\n"
# 127 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "you should swim some.$"
# 128 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 129 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_TommyIntro:: @ 81897FF
# 130 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Wait! Wait a second!\n"
# 131 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "I think I've hooked a big one!$"
# 132 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 133 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_TommyDefeat:: @ 8189833
# 134 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "I've lost it all again…$"
# 135 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 136 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_TommyPostBattle:: @ 818984B
# 137 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Not only did I lose, the big one\n"
# 138 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "got away from me, too!$"
# 139 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 140 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_SharonIntro:: @ 8189883
# 141 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Could you help me out with my\n"
# 142 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "training?$"
# 143 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 144 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_SharonDefeat:: @ 81898AB
# 145 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "You were a cut above me.$"
# 146 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 147 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_SharonPostBattle:: @ 81898C4
# 148 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "It's clear that you're skilled.\n"
# 149 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "I like you!$"
# 150 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 151 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_TanyaIntro:: @ 81898F0
# 152 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "There isn't a day in which we don't\n"
# 153 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "train!$"
# 154 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 155 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_TanyaDefeat:: @ 818991B
# 156 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "I'm such a fool!$"
# 157 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 158 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_TanyaPostBattle:: @ 818992C
# 159 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "I'll train even harder from now on!$"
# 160 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 161 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_SheaIntro:: @ 8189950
# 162 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Every morning, before breakfast,\n"
# 163 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "I swim around this island.$"
# 164 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 165 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_SheaDefeat:: @ 818998C
# 166 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Gasp…\n"
# 167 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Gasp…$"
# 168 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 169 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_SheaPostBattle:: @ 8189998
# 170 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "I lost because I'm pooped from all\n"
# 171 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "the running I did…$"
# 172 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 173 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_HughIntro:: @ 81899CE
# 174 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Dress appropriately for battle!\n"
# 175 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Lose that frivolous outfit!$"
# 176 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 177 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_HughDefeat:: @ 8189A0A
# 178 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Why me?!$"
# 179 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 180 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_HughPostBattle:: @ 8189A13
# 181 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Even martial artists are becoming\n"
# 182 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "fashion conscious these days…$"
# 183 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 184 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_BryceIntro:: @ 8189A53
# 185 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "You know, everything tastes great\n"
# 186 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "when you're out in the wild.$"
# 187 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 188 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_BryceDefeat:: @ 8189A92
# 189 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Awww, blown!$"
# 190 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 191 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_BrycePostBattle:: @ 8189A9F
# 192 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "The water in volcanic regions is\n"
# 193 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "delicious.$"
# 194 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 195 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_ClaireIntro:: @ 8189ACB
# 196 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "My lunch filled us up, so will you\n"
# 197 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "battle us for some exercise?$"
# 198 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 199 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_ClaireDefeat:: @ 8189B0B
# 200 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "That made me all sweaty.$"
# 201 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 202 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_ClairePostBattle:: @ 8189B24
# 203 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "What should I do?\n"
# 204 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "I feel famished again.$"
# 205 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 206 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_KiaIntro:: @ 8189B4D
# 207 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Kia: My big brother and I make\n"
# 208 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "an awesome combination!$"
# 209 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 210 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_KiaDefeat:: @ 8189B84
# 211 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Kia: Huh?!\n"
# 212 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "I can't believe it!$"
# 213 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 214 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_KiaPostBattle:: @ 8189BA3
# 215 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Kia: How could there be anyone\n"
# 216 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "better than my big brother?$"
# 217 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 218 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_KiaNotEnoughMons:: @ 8189BDE
# 219 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Kia: If you want to battle with\n"
# 220 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "us, you have to bring at least two\l"
# 221 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Pokémon with you.$"
# 222 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 223 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_MikIntro:: @ 8189C33
# 224 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "MIK: Together with KIA, I'm afraid\n"
# 225 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "of nothing!$"
# 226 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 227 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_MikDefeat:: @ 8189C62
# 228 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Mik: Whoa!\n"
# 229 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "That's too much!$"
# 230 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 231 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_MikPostBattle:: @ 8189C7E
# 232 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Mik: How could my combination\n"
# 233 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "with Kia fail?$"
# 234 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 235 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_MikNotEnoughMons:: @ 8189CAB
# 236 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Mik: Hey, do you want to battle\n"
# 237 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "with us two?\p"
# 238 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Bring two or more Pokémon with\n"
# 239 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "you, then.$"
# 240 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 241 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_RouteSign:: @ 8189D02
# 242 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "This is Kindle Road.\p"
# 243 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Go straight for Mt. Ember.$"
# 244 "data/maps/OneIsland_KindleRoad/scripts.pory"

# 245 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_EmberSpaSign:: @ 8189D32
# 246 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Light the Fire in Your Heart!\n"
# 247 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "Ember Spa$"
# 248 "data/maps/OneIsland_KindleRoad/scripts.pory"
	
# 249 "data/maps/OneIsland_KindleRoad/scripts.pory"
OneIsland_KindleRoad_Text_EmberSpaClosed:: @ 8189D32
# 250 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "I'm sorry, but the Ember Spa\n"
# 251 "data/maps/OneIsland_KindleRoad/scripts.pory"
    .string "is currently closed.$"
