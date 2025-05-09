# 1 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_MapScripts:: @ 821FDEA
# 3 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Gentleman:: @ 821FDEB
# 6 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
# 7 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 8 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 9 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Woman:: @ 821FDF4
# 10 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
# 11 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 12 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 13 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Youngster:: @ 821FDFD
# 14 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
# 15 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 16 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 17 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft:: @ 821FE06
# 18 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	goto_if_unset FLAG_GOT_BADGE_11, LilycoveCity_DepartmentStore_4F_EventScript_Not_Enough_Badges_Attack
# 19 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 20 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 21 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message gText_HowMayIServeYou
# 22 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 23 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
# 24 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 25 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 26 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 27 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	
# 28 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Not_Enough_Badges_Attack::
# 29 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 30 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 31 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message gText_HowMayIServeYou
# 32 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 33 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs0
# 34 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 35 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 36 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 37 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	
# 38 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_Not_Enough_Badges_Defense::
# 39 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 40 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 41 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message gText_HowMayIServeYou
# 42 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 43 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs0
# 44 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 45 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 46 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 47 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	
# 48 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs0:
# 49 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM75  @ Swords Dane
# 50 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_NONE
# 51 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 52 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 53 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	
# 54 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs0:
# 55 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM90  @ Substitute
# 56 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_NONE
# 57 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 58 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 59 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 60 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.align 2
# 61 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs: @ 821FE20
# 62 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM14  @ Blizzard
# 63 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM15  @ Hyper Beam
# 64 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM25  @ Thunder
# 65 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM38  @ Fire Blast
# 66 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM59  @ Brutal Swing
# 67 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM66  @ Payback
# 68 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM75  @ Swords Dance
# 69 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM82  @ Dragon Tail
# 70 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM84  @ Poison Jab
# 71 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM97  @ Dark Pulse
# 72 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM109 @ Gunk Shot
# 73 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM115 @ Bug Buzz
# 74 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_NONE
# 75 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 76 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 77 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 78 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight:: @ 821FE2C
# 79 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	goto_if_unset FLAG_GOT_BADGE_06, LilycoveCity_DepartmentStore_4F_EventScript_Not_Enough_Badges_Defense
# 80 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	lock
# 81 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	faceplayer
# 82 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	message gText_HowMayIServeYou
# 83 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	waitmessage
# 84 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs
# 85 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 86 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 87 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 88 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 89 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.align 2
# 90 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs: @ 821FE44
# 91 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM16  @ Light Screen
# 92 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM17  @ Protect
# 93 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM20  @ Safeguard
# 94 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM33  @ Reflect
# 95 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM56  @ Fling
# 96 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM60  @ Quash
# 97 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM63  @ Embargo
# 98 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM67  @ Smart Strike
# 99 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM70  @ Aurora Veil
# 100 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM77  @ Psych Up
# 101 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM83  @ Infestation
# 102 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM89  @ U Turn
# 103 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM90  @ Substitute
# 104 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM92  @ Trick Room
# 105 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM95  @ Snarl
# 106 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_TM100 @ Confide
# 107 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.2byte ITEM_NONE
# 108 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	release
# 109 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	end
# 110 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 111 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM: @ 821FE50
# 112 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Hmm…\p"
# 113 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "An attacking move…\n"
# 114 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "Or a defensive move…\p"
# 115 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "It's no easy matter to decide which TM\n"
# 116 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "moves should be taught to Pokémon…$"
# 117 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 118 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs: @ 821FEC7
# 119 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "There are so many different kinds of\n"
# 120 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "TM moves.\p"
# 121 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "A catalog I read said there are fifty\n"
# 122 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "different kinds.$"
# 123 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"

# 124 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves: @ 821FF2D
# 125 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "I'd like to get all the different TMs,\n"
# 126 "data/maps/LilycoveCity_DepartmentStore_4F/scripts.pory"
	.string "but a Pokémon learns only four moves.$"
