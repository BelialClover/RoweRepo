# 1 "data/maps/SlateportCity_Mart/scripts.pory"

# 2 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_MapScripts:: @ 820DC48
# 3 "data/maps/SlateportCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/SlateportCity_Mart/scripts.pory"

# 5 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Clerk:: @ 820DC49
# 6 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 7 "data/maps/SlateportCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/SlateportCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart 0
# 11 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/SlateportCity_Mart/scripts.pory"
	release
# 13 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 14 "data/maps/SlateportCity_Mart/scripts.pory"

# 15 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Clerk2::
# 16 "data/maps/SlateportCity_Mart/scripts.pory"
	lock
# 17 "data/maps/SlateportCity_Mart/scripts.pory"
	faceplayer
# 18 "data/maps/SlateportCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 19 "data/maps/SlateportCity_Mart/scripts.pory"
	waitmessage
# 20 "data/maps/SlateportCity_Mart/scripts.pory"
	pokemart SlateportCity_Mart_Pokemart
# 21 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 22 "data/maps/SlateportCity_Mart/scripts.pory"
	release
# 23 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 24 "data/maps/SlateportCity_Mart/scripts.pory"

# 25 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Pokemart: @ 820DC60
# 26 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 27 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 28 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 29 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 30 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 31 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 32 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 33 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_X_SP_DEF
# 34 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_HARBOR_MAIL
# 35 "data/maps/SlateportCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 36 "data/maps/SlateportCity_Mart/scripts.pory"
	release
# 37 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 38 "data/maps/SlateportCity_Mart/scripts.pory"

# 39 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_BlackBelt:: @ 820DC76
# 40 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
# 41 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 42 "data/maps/SlateportCity_Mart/scripts.pory"

# 43 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_EventScript_Man:: @ 820DC7F
# 44 "data/maps/SlateportCity_Mart/scripts.pory"
	msgbox SlateportCity_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
# 45 "data/maps/SlateportCity_Mart/scripts.pory"
	end
# 46 "data/maps/SlateportCity_Mart/scripts.pory"

# 47 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_SomeItemsOnlyAtMart: @ 820DC88
# 48 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "The Market does have some interesting\n"
# 49 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "merchandise.\p"
# 50 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "But there are some items you can only\n"
# 51 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "get at a Pokémon Mart.$"
# 52 "data/maps/SlateportCity_Mart/scripts.pory"

# 53 "data/maps/SlateportCity_Mart/scripts.pory"
SlateportCity_Mart_Text_GreatBallIsBetter: @ 820DCF8
# 54 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "A Great Ball is better than a Poké Ball\n"
# 55 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "at catching Pokémon.\p"
# 56 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "With this, I should be able to get that\n"
# 57 "data/maps/SlateportCity_Mart/scripts.pory"
	.string "elusive Pokémon…$"
