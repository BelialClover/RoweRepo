# 1 "data/maps/FallarborTown_Mart/scripts.pory"

# 2 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_MapScripts:: @ 81FFCBE
# 3 "data/maps/FallarborTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/FallarborTown_Mart/scripts.pory"

# 5 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Clerk:: @ 81FFCBF
# 6 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 7 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/FallarborTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart 0
# 11 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 13 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 14 "data/maps/FallarborTown_Mart/scripts.pory"

# 15 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Clerk2::
# 16 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 17 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 18 "data/maps/FallarborTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 19 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmessage
# 20 "data/maps/FallarborTown_Mart/scripts.pory"
	pokemart FallarborTown_Mart_Pokemart
# 21 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 22 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 23 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 24 "data/maps/FallarborTown_Mart/scripts.pory"

# 25 "data/maps/FallarborTown_Mart/scripts.pory"
	.align 2
# 26 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Pokemart: @ 81FFCD8
# 27 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 28 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 29 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 30 "data/maps/FallarborTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 31 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 32 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 33 "data/maps/FallarborTown_Mart/scripts.pory"

# 34 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Woman:: @ 81FFCF4
# 35 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_DecidingSkittyEvolve, MSGBOX_NPC
# 36 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 37 "data/maps/FallarborTown_Mart/scripts.pory"

# 38 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_PokefanM:: @ 81FFCFD
# 39 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_SellNuggetIFound, MSGBOX_NPC
# 40 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 41 "data/maps/FallarborTown_Mart/scripts.pory"

# 42 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_EventScript_Skitty:: @ 81FFD06
# 43 "data/maps/FallarborTown_Mart/scripts.pory"
	lock
# 44 "data/maps/FallarborTown_Mart/scripts.pory"
	faceplayer
# 45 "data/maps/FallarborTown_Mart/scripts.pory"
	waitse
# 46 "data/maps/FallarborTown_Mart/scripts.pory"
	playmoncry SPECIES_DELCATTY, 0
# 47 "data/maps/FallarborTown_Mart/scripts.pory"
	msgbox FallarborTown_Mart_Text_Skitty, MSGBOX_DEFAULT
# 48 "data/maps/FallarborTown_Mart/scripts.pory"
	waitmoncry
# 49 "data/maps/FallarborTown_Mart/scripts.pory"
	release
# 50 "data/maps/FallarborTown_Mart/scripts.pory"
	end
# 51 "data/maps/FallarborTown_Mart/scripts.pory"

# 52 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_DecidingSkittyEvolve: @ 81FFD19
# 53 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I recently evolved my Skitty into\n"
# 54 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "a Delcatty with a Moon Stone.$"
# 55 "data/maps/FallarborTown_Mart/scripts.pory"

# 56 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_Skitty: @ 81FFDFA
# 57 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "Delcatty: Miyao?$"
# 58 "data/maps/FallarborTown_Mart/scripts.pory"

# 59 "data/maps/FallarborTown_Mart/scripts.pory"
FallarborTown_Mart_Text_SellNuggetIFound: @ 81FFE09
# 60 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "This Nugget I found here…\n"
# 61 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "I suppose I'll have to sell it, seeing\l"
# 62 "data/maps/FallarborTown_Mart/scripts.pory"
	.string "as how it has no other use.$"
