# 1 "data/maps/OldaleTown_Mart/scripts.pory"

# 2 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_MapScripts:: @ 81FC23F
# 3 "data/maps/OldaleTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_Mart/scripts.pory"

# 5 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Clerk:: @ 81FC240
# 6 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 7 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/OldaleTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/OldaleTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_ExpandedItems
# 11 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart OldaleTown_Mart_Pokemart_Basic
# 12 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 14 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 15 "data/maps/OldaleTown_Mart/scripts.pory"

# 16 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Basic: @ 81FC260
# 17 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 18 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 19 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 20 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 21 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 22 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 23 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 24 "data/maps/OldaleTown_Mart/scripts.pory"

# 25 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_ExpandedItems:: @ 81FC26C
# 26 "data/maps/OldaleTown_Mart/scripts.pory"
	pokemart 0
# 27 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 28 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 29 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 30 "data/maps/OldaleTown_Mart/scripts.pory"

# 31 "data/maps/OldaleTown_Mart/scripts.pory"
	.align 2
# 32 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Pokemart_Expanded: @ 81FC27C
# 33 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 34 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 35 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 36 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 37 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 38 "data/maps/OldaleTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 39 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 40 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 41 "data/maps/OldaleTown_Mart/scripts.pory"

# 42 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Woman:: @ 81FC28A
# 43 "data/maps/OldaleTown_Mart/scripts.pory"
	lock
# 44 "data/maps/OldaleTown_Mart/scripts.pory"
	faceplayer
# 45 "data/maps/OldaleTown_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_Mart_EventScript_PokeBallsInStock
# 46 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoldOut, MSGBOX_DEFAULT
# 47 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 48 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 49 "data/maps/OldaleTown_Mart/scripts.pory"

# 50 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_PokeBallsInStock:: @ 81FC29F
# 51 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_ImGoingToBuyPokeBalls, MSGBOX_DEFAULT
# 52 "data/maps/OldaleTown_Mart/scripts.pory"
	release
# 53 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 54 "data/maps/OldaleTown_Mart/scripts.pory"

# 55 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_EventScript_Boy:: @ 81FC2A9
# 56 "data/maps/OldaleTown_Mart/scripts.pory"
	msgbox OldaleTown_Mart_Text_RestoreHPWithPotion, MSGBOX_NPC
# 57 "data/maps/OldaleTown_Mart/scripts.pory"
	end
# 58 "data/maps/OldaleTown_Mart/scripts.pory"

# 59 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_PokeBallsAreSoldOut: @ 81FC2B2
# 60 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "The clerk says they're all sold out.\n"
# 61 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I can't buy any Poké Balls.$"
# 62 "data/maps/OldaleTown_Mart/scripts.pory"

# 63 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_ImGoingToBuyPokeBalls: @ 81FC2F3
# 64 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "I'm going to buy a bunch of Poké Balls\n"
# 65 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and catch a bunch of Pokémon!$"
# 66 "data/maps/OldaleTown_Mart/scripts.pory"

# 67 "data/maps/OldaleTown_Mart/scripts.pory"
OldaleTown_Mart_Text_RestoreHPWithPotion: @ 81FC338
# 68 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "If a Pokémon gets hurt and loses its HP\n"
# 69 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "and faints, it won't be able to battle.\p"
# 70 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "To prevent your Pokémon from fainting,\n"
# 71 "data/maps/OldaleTown_Mart/scripts.pory"
	.string "restore its HP with a Potion.$"
