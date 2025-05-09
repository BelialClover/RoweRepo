# 1 "data/maps/VictoryRoad_B2F/scripts.pory"

# 2 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_MapScripts:: @ 82368D4
# 3 "data/maps/VictoryRoad_B2F/scripts.pory"
	.byte 0
# 4 "data/maps/VictoryRoad_B2F/scripts.pory"

# 5 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Vito:: @ 82368D5
# 6 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_VITO, VictoryRoad_B2F_Text_VitoIntro, VictoryRoad_B2F_Text_VitoDefeat
# 7 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_VitoPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 9 "data/maps/VictoryRoad_B2F/scripts.pory"

# 10 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Owen:: @ 82368EC
# 11 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_OWEN, VictoryRoad_B2F_Text_OwenIntro, VictoryRoad_B2F_Text_OwenDefeat
# 12 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_OwenPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 14 "data/maps/VictoryRoad_B2F/scripts.pory"

# 15 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Caroline:: @ 8236903
# 16 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_CAROLINE, VictoryRoad_B2F_Text_CarolineIntro, VictoryRoad_B2F_Text_CarolineDefeat
# 17 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 19 "data/maps/VictoryRoad_B2F/scripts.pory"

# 20 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Julie:: @ 823691A
# 21 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_JULIE, VictoryRoad_B2F_Text_JulieIntro, VictoryRoad_B2F_Text_JulieDefeat
# 22 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_JuliePostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 24 "data/maps/VictoryRoad_B2F/scripts.pory"

# 25 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Felix:: @ 8236931
# 26 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_FELIX, VictoryRoad_B2F_Text_FelixIntro, VictoryRoad_B2F_Text_FelixDefeat
# 27 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_FelixPostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 29 "data/maps/VictoryRoad_B2F/scripts.pory"

# 30 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_EventScript_Dianne:: @ 8236948
# 31 "data/maps/VictoryRoad_B2F/scripts.pory"
	trainerbattle_single TRAINER_DIANNE, VictoryRoad_B2F_Text_DianneIntro, VictoryRoad_B2F_Text_DianneDefeat
# 32 "data/maps/VictoryRoad_B2F/scripts.pory"
	msgbox VictoryRoad_B2F_Text_DiannePostBattle, MSGBOX_AUTOCLOSE
# 33 "data/maps/VictoryRoad_B2F/scripts.pory"
	end
# 34 "data/maps/VictoryRoad_B2F/scripts.pory"

# 35 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_VitoIntro: @ 823695F
# 36 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I trained together with my whole family,\n"
# 37 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "every one of us!\l"
# 38 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I'm not losing to anyone!$"
# 39 "data/maps/VictoryRoad_B2F/scripts.pory"

# 40 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_VitoDefeat: @ 82369B3
# 41 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Better than my family?!\n"
# 42 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Is that possible?!$"
# 43 "data/maps/VictoryRoad_B2F/scripts.pory"

# 44 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_VitoPostBattle: @ 82369DE
# 45 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I was better than everyone in my\n"
# 46 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "family. I've never lost before…\p"
# 47 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I've lost my confidence…\n"
# 48 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Maybe I'll go home…$"
# 49 "data/maps/VictoryRoad_B2F/scripts.pory"

# 50 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_OwenIntro: @ 8236A4C
# 51 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I'd heard that there was a tough\n"
# 52 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "little kid around. Do they mean you?$"
# 53 "data/maps/VictoryRoad_B2F/scripts.pory"

# 54 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_OwenDefeat: @ 8236A92
# 55 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "The little shrimp is tough!$"
# 56 "data/maps/VictoryRoad_B2F/scripts.pory"

# 57 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_OwenPostBattle: @ 8236AAE
# 58 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "The rumors I heard, that tough little\n"
# 59 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "kid is from Petalburg City.$"
# 60 "data/maps/VictoryRoad_B2F/scripts.pory"

# 61 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_CarolineIntro: @ 8236AF0
# 62 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "You must be getting a little tired.$"
# 63 "data/maps/VictoryRoad_B2F/scripts.pory"

# 64 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_CarolineDefeat: @ 8236B14
# 65 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "No signs of tiring at all!$"
# 66 "data/maps/VictoryRoad_B2F/scripts.pory"

# 67 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_CarolinePostBattle: @ 8236B2F
# 68 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Victory Road and the Pokémon League\n"
# 69 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "are long and grueling challenges.\l"
# 70 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Beware of fatigue!$"
# 71 "data/maps/VictoryRoad_B2F/scripts.pory"

# 72 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_JulieIntro: @ 8236B88
# 73 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "You shouldn't get complacent just\n"
# 74 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "because you have a lot of Gym Badges.\p"
# 75 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "There's always going to be someone\n"
# 76 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "who's better than you!$"
# 77 "data/maps/VictoryRoad_B2F/scripts.pory"

# 78 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_JulieDefeat: @ 8236C0A
# 79 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "You're better than me!$"
# 80 "data/maps/VictoryRoad_B2F/scripts.pory"

# 81 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_JuliePostBattle: @ 8236C21
# 82 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Gaze on your collected Badges and\n"
# 83 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "remember the Trainers you've faced.$"
# 84 "data/maps/VictoryRoad_B2F/scripts.pory"

# 85 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_FelixIntro: @ 8236C67
# 86 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I've come this far, but the tension's\n"
# 87 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "giving me awful stomach pain…$"
# 88 "data/maps/VictoryRoad_B2F/scripts.pory"

# 89 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_FelixDefeat: @ 8236CAB
# 90 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Ooh…\n"
# 91 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "It hurts…$"
# 92 "data/maps/VictoryRoad_B2F/scripts.pory"

# 93 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_FelixPostBattle: @ 8236CBA
# 94 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "I can't help getting all tense knowing\n"
# 95 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "that I'm nearing the Pokémon League.\p"
# 96 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "It's all I can do to feign calm.$"
# 97 "data/maps/VictoryRoad_B2F/scripts.pory"

# 98 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_DianneIntro: @ 8236D27
# 99 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "The elite among the elite gather in\n"
# 100 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "this cave.\p"
# 101 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "How are you finding it?$"
# 102 "data/maps/VictoryRoad_B2F/scripts.pory"

# 103 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_DianneDefeat: @ 8236D6E
# 104 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Not rattled in the least bit!$"
# 105 "data/maps/VictoryRoad_B2F/scripts.pory"

# 106 "data/maps/VictoryRoad_B2F/scripts.pory"
VictoryRoad_B2F_Text_DiannePostBattle: @ 8236D8C
# 107 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "You do have guts! I like that!\n"
# 108 "data/maps/VictoryRoad_B2F/scripts.pory"
	.string "Keep it going!$"
