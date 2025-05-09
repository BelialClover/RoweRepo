# 1 "data/maps/RustboroCity_Mart/scripts.pory"

# 2 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_MapScripts:: @ 8214F05
# 3 "data/maps/RustboroCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Mart/scripts.pory"

# 5 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Clerk:: @ 8214F06
# 6 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart 0
# 11 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 13 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 14 "data/maps/RustboroCity_Mart/scripts.pory"

# 15 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Clerk2:: @ 8214F06
# 16 "data/maps/RustboroCity_Mart/scripts.pory"
	lock
# 17 "data/maps/RustboroCity_Mart/scripts.pory"
	faceplayer
# 18 "data/maps/RustboroCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 19 "data/maps/RustboroCity_Mart/scripts.pory"
	waitmessage
# 20 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart RustboroCity_Mart_Pokemart_Basic
# 21 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 22 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 23 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 24 "data/maps/RustboroCity_Mart/scripts.pory"

# 25 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Basic: @ 8214F30
# 26 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 27 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 28 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 29 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ORANGE_MAIL
# 30 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 31 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 32 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 33 "data/maps/RustboroCity_Mart/scripts.pory"

# 34 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokemartExpanded:: @ 8214F48
# 35 "data/maps/RustboroCity_Mart/scripts.pory"
	pokemart 0
# 36 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 37 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 38 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 39 "data/maps/RustboroCity_Mart/scripts.pory"

# 40 "data/maps/RustboroCity_Mart/scripts.pory"
	.align 2
# 41 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Pokemart_Expanded: @ 8214F58
# 42 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 43 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 44 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 45 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 46 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 47 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 48 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 49 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 50 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 51 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_SPEED
# 52 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 53 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 54 "data/maps/RustboroCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 55 "data/maps/RustboroCity_Mart/scripts.pory"
	release
# 56 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 57 "data/maps/RustboroCity_Mart/scripts.pory"

# 58 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_PokefanF:: @ 8214F74
# 59 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish, MSGBOX_NPC
# 60 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 61 "data/maps/RustboroCity_Mart/scripts.pory"

# 62 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_Boy:: @ 8214F7D
# 63 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead, MSGBOX_NPC
# 64 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 65 "data/maps/RustboroCity_Mart/scripts.pory"

# 66 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_EventScript_BugCatcher:: @ 8214F86
# 67 "data/maps/RustboroCity_Mart/scripts.pory"
	msgbox RustboroCity_Mart_Text_GettingEscapeRopeJustInCase, MSGBOX_NPC
# 68 "data/maps/RustboroCity_Mart/scripts.pory"
	end
# 69 "data/maps/RustboroCity_Mart/scripts.pory"

# 70 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish: @ 8214F8F
# 71 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm buying some Parlyz Heals and\n"
# 72 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Antidotes.\p"
# 73 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "Just in case I run into Shroomish\n"
# 74 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "in Petalburg Woods.$"
# 75 "data/maps/RustboroCity_Mart/scripts.pory"

# 76 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead: @ 8214FF1
# 77 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "My Pokémon evolved.\n"
# 78 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "It has a lot of HP now.\p"
# 79 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I should buy Super Potions for it\n"
# 80 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "instead of ordinary Potions.$"
# 81 "data/maps/RustboroCity_Mart/scripts.pory"

# 82 "data/maps/RustboroCity_Mart/scripts.pory"
RustboroCity_Mart_Text_GettingEscapeRopeJustInCase: @ 821505C
# 83 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I'm getting an Escape Rope just in\n"
# 84 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "case I get lost in a cave.\p"
# 85 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "I just need to use it to get back to\n"
# 86 "data/maps/RustboroCity_Mart/scripts.pory"
	.string "the entrance.$"
