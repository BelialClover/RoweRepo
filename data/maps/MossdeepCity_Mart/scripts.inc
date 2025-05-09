# 1 "data/maps/MossdeepCity_Mart/scripts.pory"

# 2 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_MapScripts:: @ 82223C7
# 3 "data/maps/MossdeepCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_Mart/scripts.pory"

# 5 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Clerk:: @ 82223C8
# 6 "data/maps/MossdeepCity_Mart/scripts.pory"
	lock
# 7 "data/maps/MossdeepCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/MossdeepCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemart 0
# 11 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/MossdeepCity_Mart/scripts.pory"
	release
# 13 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 14 "data/maps/MossdeepCity_Mart/scripts.pory"

# 15 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Woman:: @ 82223F6
# 16 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_ReviveIsFantastic, MSGBOX_NPC
# 17 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 18 "data/maps/MossdeepCity_Mart/scripts.pory"

# 19 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Boy:: @ 82223FF
# 20 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_MaxRepelLastsLongest, MSGBOX_NPC
# 21 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 22 "data/maps/MossdeepCity_Mart/scripts.pory"

# 23 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_EventScript_Sailor:: @ 8222408
# 24 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_Text_NetAndDiveBallsRare, MSGBOX_NPC
# 25 "data/maps/MossdeepCity_Mart/scripts.pory"
	end
# 26 "data/maps/MossdeepCity_Mart/scripts.pory"

# 27 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_ReviveIsFantastic: @ 8222411
# 28 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Revive is fantastic!\p"
# 29 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Give it to a fainted Pokémon,\n"
# 30 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "and the Pokémon will arise.\p"
# 31 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "But be careful, Revive doesn't restore\n"
# 32 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "the used-up PP of moves.$"
# 33 "data/maps/MossdeepCity_Mart/scripts.pory"

# 34 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_MaxRepelLastsLongest: @ 82224A0
# 35 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Max Repel keeps all weak Pokémon away.\p"
# 36 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Out of all the Repel sprays, it lasts\n"
# 37 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "the longest.$"
# 38 "data/maps/MossdeepCity_Mart/scripts.pory"

# 39 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCity_Mart_Text_NetAndDiveBallsRare: @ 82224FA
# 40 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "The Net and Dive Balls are rare Poké\n"
# 41 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Balls that are only made in Mossdeep.\p"
# 42 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "A Net Ball is effective against\n"
# 43 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Bug-type and Water-type Pokémon.\p"
# 44 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "A Dive Ball works best on Pokémon\n"
# 45 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "at the bottom of the sea.$"
