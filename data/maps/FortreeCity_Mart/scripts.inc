# 1 "data/maps/FortreeCity_Mart/scripts.pory"

# 2 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_MapScripts:: @ 8217665
# 3 "data/maps/FortreeCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_Mart/scripts.pory"

# 5 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Clerk:: @ 8217666
# 6 "data/maps/FortreeCity_Mart/scripts.pory"
	lock
# 7 "data/maps/FortreeCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/FortreeCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/FortreeCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/FortreeCity_Mart/scripts.pory"
	pokemart 0
# 11 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/FortreeCity_Mart/scripts.pory"
	release
# 13 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 14 "data/maps/FortreeCity_Mart/scripts.pory"

# 15 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Woman:: @ 8217698
# 16 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_SuperRepelBetter, MSGBOX_NPC
# 17 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 18 "data/maps/FortreeCity_Mart/scripts.pory"

# 19 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Girl:: @ 82176A1
# 20 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_StockUpOnItems, MSGBOX_NPC
# 21 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 22 "data/maps/FortreeCity_Mart/scripts.pory"

# 23 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_EventScript_Boy:: @ 82176AA
# 24 "data/maps/FortreeCity_Mart/scripts.pory"
	msgbox FortreeCity_Mart_Text_RareCandyMakesMonGrow, MSGBOX_NPC
# 25 "data/maps/FortreeCity_Mart/scripts.pory"
	end
# 26 "data/maps/FortreeCity_Mart/scripts.pory"

# 27 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_SuperRepelBetter: @ 82176B3
# 28 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Super Repel lasts a long time,\n"
# 29 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "and it gets the job done.\p"
# 30 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "It's much better than an ordinary\n"
# 31 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Repel.$"
# 32 "data/maps/FortreeCity_Mart/scripts.pory"

# 33 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_StockUpOnItems: @ 8217715
# 34 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "I always stock up on more items than\n"
# 35 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "I'm sure I'll need.\p"
# 36 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "You never know what might happen.\n"
# 37 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "Better to be safe than sorry!$"
# 38 "data/maps/FortreeCity_Mart/scripts.pory"

# 39 "data/maps/FortreeCity_Mart/scripts.pory"
FortreeCity_Mart_Text_RareCandyMakesMonGrow: @ 821778E
# 40 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "A Rare Candy makes a Pokémon grow\n"
# 41 "data/maps/FortreeCity_Mart/scripts.pory"
	.string "immediately by one level.$"
