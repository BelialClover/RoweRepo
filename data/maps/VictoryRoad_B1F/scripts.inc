# 1 "data/maps/VictoryRoad_B1F/scripts.pory"

# 2 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_MapScripts:: @ 82364E4
# 3 "data/maps/VictoryRoad_B1F/scripts.pory"
	.byte 0
# 4 "data/maps/VictoryRoad_B1F/scripts.pory"

# 5 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Samuel:: @ 82364E5
# 6 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_SAMUEL, VictoryRoad_B1F_Text_SamuelIntro, VictoryRoad_B1F_Text_SamuelDefeat
# 7 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 9 "data/maps/VictoryRoad_B1F/scripts.pory"

# 10 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Shannon:: @ 82364FC
# 11 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_SHANNON, VictoryRoad_B1F_Text_ShannonIntro, VictoryRoad_B1F_Text_ShannonDefeat
# 12 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_ShannonPostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 14 "data/maps/VictoryRoad_B1F/scripts.pory"

# 15 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Michelle:: @ 8236513
# 16 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_MICHELLE, VictoryRoad_B1F_Text_MichelleIntro, VictoryRoad_B1F_Text_MichelleDefeat
# 17 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_MichellePostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 19 "data/maps/VictoryRoad_B1F/scripts.pory"

# 20 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Mitchell:: @ 823652A
# 21 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_MITCHELL, VictoryRoad_B1F_Text_MitchellIntro, VictoryRoad_B1F_Text_MitchellDefeat
# 22 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_MitchellPostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 24 "data/maps/VictoryRoad_B1F/scripts.pory"

# 25 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_EventScript_Halle:: @ 8236541
# 26 "data/maps/VictoryRoad_B1F/scripts.pory"
	trainerbattle_single TRAINER_HALLE, VictoryRoad_B1F_Text_HalleIntro, VictoryRoad_B1F_Text_HalleDefeat
# 27 "data/maps/VictoryRoad_B1F/scripts.pory"
	msgbox VictoryRoad_B1F_Text_HallePostBattle, MSGBOX_AUTOCLOSE
# 28 "data/maps/VictoryRoad_B1F/scripts.pory"
	end
# 29 "data/maps/VictoryRoad_B1F/scripts.pory"

# 30 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_SamuelIntro: @ 8236558
# 31 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "The thought that I'm getting closer to\n"
# 32 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "the Pokémon League…\p"
# 33 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "I'm getting stage fright…$"
# 34 "data/maps/VictoryRoad_B1F/scripts.pory"

# 35 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_SamuelDefeat: @ 82365AD
# 36 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "I couldn't do a thing…$"
# 37 "data/maps/VictoryRoad_B1F/scripts.pory"

# 38 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_SamuelPostBattle: @ 82365C4
# 39 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "The Pokémon League became distant\n"
# 40 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "again… What a letdown…$"
# 41 "data/maps/VictoryRoad_B1F/scripts.pory"

# 42 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_ShannonIntro: @ 82365FD
# 43 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "To win your way through the Pokémon\n"
# 44 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "League, you need the trust of your\l"
# 45 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Pokémon.$"
# 46 "data/maps/VictoryRoad_B1F/scripts.pory"

# 47 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_ShannonDefeat: @ 823664D
# 48 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Your relationship is based on\n"
# 49 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "solid trust.$"
# 50 "data/maps/VictoryRoad_B1F/scripts.pory"

# 51 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_ShannonPostBattle: @ 8236678
# 52 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "By being together all the time, trust\n"
# 53 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "grows between Pokémon and Trainers.$"
# 54 "data/maps/VictoryRoad_B1F/scripts.pory"

# 55 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MichelleIntro: @ 82366C2
# 56 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "This isn't the goal. It's only a place\n"
# 57 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "on the way to the Pokémon League.$"
# 58 "data/maps/VictoryRoad_B1F/scripts.pory"

# 59 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MichelleDefeat: @ 823670B
# 60 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "That's the way!$"
# 61 "data/maps/VictoryRoad_B1F/scripts.pory"

# 62 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MichellePostBattle: @ 823671B
# 63 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "You'll do fine, for sure!\n"
# 64 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Your Pokémon are all eager to go!$"
# 65 "data/maps/VictoryRoad_B1F/scripts.pory"

# 66 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MitchellIntro: @ 8236757
# 67 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "My Pokémon are cosmically\n"
# 68 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "awe inspiring!$"
# 69 "data/maps/VictoryRoad_B1F/scripts.pory"

# 70 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MitchellDefeat: @ 8236780
# 71 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "I've never met anyone like you before.$"
# 72 "data/maps/VictoryRoad_B1F/scripts.pory"

# 73 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_MitchellPostBattle: @ 82367A7
# 74 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Even outside of battle, I sense\n"
# 75 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "incredible power emanating from you\l"
# 76 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "and your Pokémon.$"
# 77 "data/maps/VictoryRoad_B1F/scripts.pory"

# 78 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_HalleIntro: @ 82367FD
# 79 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Okay, no need to get your back up!\n"
# 80 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Relax, let's take it easy!$"
# 81 "data/maps/VictoryRoad_B1F/scripts.pory"

# 82 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_HalleDefeat: @ 823683B
# 83 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Whoa!\n"
# 84 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Wonderful!$"
# 85 "data/maps/VictoryRoad_B1F/scripts.pory"

# 86 "data/maps/VictoryRoad_B1F/scripts.pory"
VictoryRoad_B1F_Text_HallePostBattle: @ 823684C
# 87 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Sure, this is Victory Road.\p"
# 88 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "But it's not all that different from\n"
# 89 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "the path you've taken so far.\p"
# 90 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "Try to enjoy things the rest of\n"
# 91 "data/maps/VictoryRoad_B1F/scripts.pory"
	.string "the way!$"
