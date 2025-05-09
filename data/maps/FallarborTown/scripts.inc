# 1 "data/maps/FallarborTown/scripts.pory"

# 2 "data/maps/FallarborTown/scripts.pory"
FallarborTown_MapScripts:: @ 81EB1FA
# 3 "data/maps/FallarborTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
# 4 "data/maps/FallarborTown/scripts.pory"
	.byte 0
# 5 "data/maps/FallarborTown/scripts.pory"

# 6 "data/maps/FallarborTown/scripts.pory"
FallarborTown_OnTransition: @ 81EB200
# 7 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 8 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_VISITED_ROUTE111
# 9 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_VISITED_ROUTE113
# 10 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 11 "data/maps/FallarborTown/scripts.pory"
	clearflag FLAG_CONTEST_SKETCH_CREATED
# 12 "data/maps/FallarborTown/scripts.pory"
	end
# 13 "data/maps/FallarborTown/scripts.pory"

# 14 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertM:: @ 81EB20C
# 15 "data/maps/FallarborTown/scripts.pory"
	lock
# 16 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 17 "data/maps/FallarborTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
# 18 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
# 19 "data/maps/FallarborTown/scripts.pory"
	release
# 20 "data/maps/FallarborTown/scripts.pory"
	end
# 21 "data/maps/FallarborTown/scripts.pory"

# 22 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertMNormal:: @ 81EB221
# 23 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
# 24 "data/maps/FallarborTown/scripts.pory"
	release
# 25 "data/maps/FallarborTown/scripts.pory"
	end
# 26 "data/maps/FallarborTown/scripts.pory"

# 27 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Girl:: @ 81EB22B
# 28 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
# 29 "data/maps/FallarborTown/scripts.pory"
	end
# 30 "data/maps/FallarborTown/scripts.pory"

# 31 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Gentleman:: @ 81EB234
# 32 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
# 33 "data/maps/FallarborTown/scripts.pory"
	end
# 34 "data/maps/FallarborTown/scripts.pory"

# 35 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Azurill:: @ 81EB23D
# 36 "data/maps/FallarborTown/scripts.pory"
	lock
# 37 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 38 "data/maps/FallarborTown/scripts.pory"
	waitse
# 39 "data/maps/FallarborTown/scripts.pory"
	playmoncry SPECIES_AZUMARILL, 0
# 40 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
# 41 "data/maps/FallarborTown/scripts.pory"
	waitmoncry
# 42 "data/maps/FallarborTown/scripts.pory"
	release
# 43 "data/maps/FallarborTown/scripts.pory"
	end
# 44 "data/maps/FallarborTown/scripts.pory"

# 45 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_BattleTentSign:: @ 81EB250
# 46 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
# 47 "data/maps/FallarborTown/scripts.pory"
	end
# 48 "data/maps/FallarborTown/scripts.pory"

# 49 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_TownSign:: @ 81EB259
# 50 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
# 51 "data/maps/FallarborTown/scripts.pory"
	end
# 52 "data/maps/FallarborTown/scripts.pory"

# 53 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_MoveTutorSign:: @ 81EB262
# 54 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
# 55 "data/maps/FallarborTown/scripts.pory"
	end
# 56 "data/maps/FallarborTown/scripts.pory"

# 57 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_ShadyCharactersCozmosHome: @ 81EB26B
# 58 "data/maps/FallarborTown/scripts.pory"
	.string "Something's happening,\n"
# 59 "data/maps/FallarborTown/scripts.pory"
	.string "and I don't like it!\p"
# 60 "data/maps/FallarborTown/scripts.pory"
	.string "I've seen shady characters wandering\n"
# 61 "data/maps/FallarborTown/scripts.pory"
	.string "in and out of Prof. Cozmo's home…$"
# 62 "data/maps/FallarborTown/scripts.pory"

# 63 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_RegionKnownForMeteors: @ 81EB2DE
# 64 "data/maps/FallarborTown/scripts.pory"
	.string "This region's been known for meteors\n"
# 65 "data/maps/FallarborTown/scripts.pory"
	.string "since the olden days.\p"
# 66 "data/maps/FallarborTown/scripts.pory"
	.string "They say Meteor Falls was gouged out\n"
# 67 "data/maps/FallarborTown/scripts.pory"
	.string "by a falling meteorite long ago.$"
# 68 "data/maps/FallarborTown/scripts.pory"

# 69 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MyPreciousAzurill: @ 81EB35F
# 70 "data/maps/FallarborTown/scripts.pory"
	.string "See! Take a look!\n"
# 71 "data/maps/FallarborTown/scripts.pory"
	.string "This is my precious Azumarill!\p"
# 72 "data/maps/FallarborTown/scripts.pory"
	.string "It's slick and smooth and plushy, too!$"
# 73 "data/maps/FallarborTown/scripts.pory"

# 74 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_Azurill: @ 81EB3B5
# 75 "data/maps/FallarborTown/scripts.pory"
	.string "Azumarill: Rooreelooo.$"
# 76 "data/maps/FallarborTown/scripts.pory"

# 77 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_HaveYouChallengedFlannery: @ 81EB3CA
# 78 "data/maps/FallarborTown/scripts.pory"
	.string "Have you already challenged Flannery,\n"
# 79 "data/maps/FallarborTown/scripts.pory"
	.string "the Leader of Lavaridge Gym?\p"
# 80 "data/maps/FallarborTown/scripts.pory"
	.string "The girl's grandfather was famous.\n"
# 81 "data/maps/FallarborTown/scripts.pory"
	.string "He was one of the Elite Four in the\l"
# 82 "data/maps/FallarborTown/scripts.pory"
	.string "Pokémon League at one point.\p"
# 83 "data/maps/FallarborTown/scripts.pory"
	.string "It wouldn't surprise me to see Flannery\n"
# 84 "data/maps/FallarborTown/scripts.pory"
	.string "become a great Trainer in her own\l"
# 85 "data/maps/FallarborTown/scripts.pory"
	.string "right.$"
# 86 "data/maps/FallarborTown/scripts.pory"

# 87 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_BattleTentSign: @ 81EB4C2
# 88 "data/maps/FallarborTown/scripts.pory"
	.string "Battle Tent Fallarbor Site\n"
# 89 "data/maps/FallarborTown/scripts.pory"
	.string "“May the Greatest Teams Gather!”$"
# 90 "data/maps/FallarborTown/scripts.pory"

# 91 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_TownSign: @ 81EB4FE
# 92 "data/maps/FallarborTown/scripts.pory"
	.string "Fallarbor Town\n"
# 93 "data/maps/FallarborTown/scripts.pory"
	.string "“A farm community with small gardens.”$"
# 94 "data/maps/FallarborTown/scripts.pory"

# 95 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MoveTutorSign: @ 81EB534
# 96 "data/maps/FallarborTown/scripts.pory"
	.string "Move Tutor's House\n"
# 97 "data/maps/FallarborTown/scripts.pory"
	.string "“New moves taught to Pokémon.”$"
