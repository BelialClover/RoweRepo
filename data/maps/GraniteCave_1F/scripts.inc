# 1 "data/maps/GraniteCave_1F/scripts.pory"

# 2 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_MapScripts:: @ 822DA5D
# 3 "data/maps/GraniteCave_1F/scripts.pory"
	.byte 0
# 4 "data/maps/GraniteCave_1F/scripts.pory"

# 5 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_Hiker:: @ 822DA5E
# 6 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 7 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 8 "data/maps/GraniteCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM05, GraniteCave_1F_EventScript_ReceivedFlash
# 9 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
# 10 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_TM47
# 11 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_RECEIVED_HM05
# 12 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 13 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 14 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 15 "data/maps/GraniteCave_1F/scripts.pory"

# 16 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_ReceivedFlash:: @ 822DA8A
# 17 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 18 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 19 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 20 "data/maps/GraniteCave_1F/scripts.pory"

# 21 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_GetsDarkAheadHereYouGo: @ 822DA94
# 22 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Hey, you.\n"
# 23 "data/maps/GraniteCave_1F/scripts.pory"
	.string "There are a lot of Powerful.\l"
# 24 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Rock Pokémon hidden in this cave.\p"
# 25 "data/maps/GraniteCave_1F/scripts.pory"
	.string "That guy who came by earlier…\n"
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Steven, I think it was.\p"
# 27 "data/maps/GraniteCave_1F/scripts.pory"
	.string "He knew how to use Steel moves, so\n"
# 28 "data/maps/GraniteCave_1F/scripts.pory"
	.string "he is going to be be all right.\p"
# 29 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Well, for us Hikers, helping out those\n"
# 30 "data/maps/GraniteCave_1F/scripts.pory"
	.string "that we meet is our motto.\p"
# 31 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Here you go, I'll pass this on to you.$"
# 32 "data/maps/GraniteCave_1F/scripts.pory"

# 33 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_ExplainFlash: @ 822DBB7
# 34 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Teach that techical machine\n"
# 35 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Steel Wing to a Pokémon and .\p"
# 36 "data/maps/GraniteCave_1F/scripts.pory"
	.string "use it against those Rock-type\n"
# 37 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Pokémon of this cave.$"
