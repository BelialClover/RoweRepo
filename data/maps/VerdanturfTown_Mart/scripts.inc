# 1 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 2 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_MapScripts:: @ 8202586
# 3 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 5 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Clerk:: @ 8202587
# 6 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock
# 7 "data/maps/VerdanturfTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart 0
# 11 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
# 13 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 14 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 15 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Clerk2::
# 16 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lock
# 17 "data/maps/VerdanturfTown_Mart/scripts.pory"
	faceplayer
# 18 "data/maps/VerdanturfTown_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 19 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 20 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTown_Mart_Pokemart
# 21 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 22 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
# 23 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 24 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 25 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.align 2
# 26 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Pokemart: @ 82025A0
# 27 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 28 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 29 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 30 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 31 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_NONE
# 32 "data/maps/VerdanturfTown_Mart/scripts.pory"
	release
# 33 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 34 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 35 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Boy:: @ 82025BA
# 36 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_XSpecialIsCrucial, MSGBOX_NPC
# 37 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 38 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 39 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_ExpertF:: @ 82025C3
# 40 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent, MSGBOX_NPC
# 41 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 42 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 43 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_EventScript_Lass:: @ 82025CC
# 44 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon, MSGBOX_NPC
# 45 "data/maps/VerdanturfTown_Mart/scripts.pory"
	end
# 46 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 47 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_XSpecialIsCrucial: @ 82025D5
# 48 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "For any Pokémon match, X Special\n"
# 49 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "is crucial.\p"
# 50 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "It jacks up the power of some moves\n"
# 51 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "even though it's only for one battle.$"
# 52 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 53 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_NoStrategyGuidesForBattleTent: @ 820264C
# 54 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "They don't seem to sell any winning\n"
# 55 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "strategy guides for the Battle Tent…\p"
# 56 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "It seems one must rely on one's\n"
# 57 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "own wits after all…$"
# 58 "data/maps/VerdanturfTown_Mart/scripts.pory"

# 59 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTown_Mart_Text_NestBallOnWeakenedPokemon: @ 82026C9
# 60 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "The Nest Ball works better on\n"
# 61 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "weakened Pokémon.\p"
# 62 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Verdanturf is the only place you can\n"
# 63 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "buy it.$"
