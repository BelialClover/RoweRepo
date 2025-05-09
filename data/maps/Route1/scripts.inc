# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
Route1_MapScripts:: @ 8167EFD
# 3 "data/maps/Route1/scripts.pory"
	.byte 0
# 4 "data/maps/Route1/scripts.pory"

# 5 "data/maps/Route1/scripts.pory"
Route1_EventScript_MartClerk:: @ 8167EFE
# 6 "data/maps/Route1/scripts.pory"
	lock
# 7 "data/maps/Route1/scripts.pory"
	faceplayer
# 8 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
# 9 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_WorkAtPokeMartTakeSample
# 10 "data/maps/Route1/scripts.pory"
	giveitem ITEM_POTION
# 11 "data/maps/Route1/scripts.pory"
	setflag FLAG_GOT_POTION_ON_ROUTE_1
# 12 "data/maps/Route1/scripts.pory"
	release
# 13 "data/maps/Route1/scripts.pory"
	end
# 14 "data/maps/Route1/scripts.pory"

# 15 "data/maps/Route1/scripts.pory"
Route1_EventScript_AlreadyGotPotion:: @ 8167F48
# 16 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
# 17 "data/maps/Route1/scripts.pory"
	release
# 18 "data/maps/Route1/scripts.pory"
	end
# 19 "data/maps/Route1/scripts.pory"

# 20 "data/maps/Route1/scripts.pory"
Route1_EventScript_Boy:: @ 8167F52
# 21 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
# 22 "data/maps/Route1/scripts.pory"
	end
# 23 "data/maps/Route1/scripts.pory"

# 24 "data/maps/Route1/scripts.pory"
Route1_EventScript_RouteSign:: @ 8167F5B
# 25 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
# 26 "data/maps/Route1/scripts.pory"
	end
# 27 "data/maps/Route1/scripts.pory"

# 28 "data/maps/Route1/scripts.pory"
Route1_Text_WorkAtPokeMartTakeSample:: @ 818329D
# 29 "data/maps/Route1/scripts.pory"
    .string "Hi!\n"
# 30 "data/maps/Route1/scripts.pory"
    .string "I work at a Pokémon Mart.\p"
# 31 "data/maps/Route1/scripts.pory"
    .string "It's part of a convenient chain\n"
# 32 "data/maps/Route1/scripts.pory"
    .string "selling all sorts of items.\p"
# 33 "data/maps/Route1/scripts.pory"
    .string "Please, visit us in Viridian City.\p"
# 34 "data/maps/Route1/scripts.pory"
    .string "I know, I'll give you a sample.\n"
# 35 "data/maps/Route1/scripts.pory"
    .string "Here you go!$"
# 36 "data/maps/Route1/scripts.pory"

# 37 "data/maps/Route1/scripts.pory"
Route1_Text_ComeSeeUsIfYouNeedPokeBalls:: @ 8183347
# 38 "data/maps/Route1/scripts.pory"
    .string "Please come see us if you need\n"
# 39 "data/maps/Route1/scripts.pory"
    .string "Poké Balls for catching Pokémon.$"
# 40 "data/maps/Route1/scripts.pory"

# 41 "data/maps/Route1/scripts.pory"
Route1_Text_CanJumpFromLedges:: @ 81833B9
# 42 "data/maps/Route1/scripts.pory"
    .string "See those ledges along the road?\p"
# 43 "data/maps/Route1/scripts.pory"
    .string "It's a bit scary, but you can jump\n"
# 44 "data/maps/Route1/scripts.pory"
    .string "from them.\p"
# 45 "data/maps/Route1/scripts.pory"
    .string "You can get back to Pallet Town\n"
# 46 "data/maps/Route1/scripts.pory"
    .string "quicker that way.$"
# 47 "data/maps/Route1/scripts.pory"

# 48 "data/maps/Route1/scripts.pory"
Route1_Text_RouteSign:: @ 818343A
# 49 "data/maps/Route1/scripts.pory"
    .string "Route 1\n"
# 50 "data/maps/Route1/scripts.pory"
    .string "Pallet Town - Viridian City$"
