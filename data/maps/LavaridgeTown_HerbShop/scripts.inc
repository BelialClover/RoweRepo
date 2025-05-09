# 1 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 2 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_MapScripts:: @ 81FE4D6
# 3 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.byte 0
# 4 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 5 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_Clerk:: @ 81FE4D7
# 6 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 7 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 8 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
# 9 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	waitmessage
# 10 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	pokemart LavaridgeTown_HerbShop_Pokemart
# 11 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 13 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 14 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 15 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.align 2
# 16 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Pokemart: @ 81FE4F0
# 17 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 18 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 19 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 20 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 21 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 22 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 23 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 24 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 25 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 26 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 27 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 28 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 29 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 30 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 31 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 32 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 33 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 34 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 35 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 36 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 37 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 38 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 39 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 40 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 41 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 42 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 43 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 44 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 45 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 46 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 47 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 48 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 49 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 50 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 51 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 52 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 53 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 54 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 55 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 56 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 57 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 58 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 59 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.2byte ITEM_NONE
# 60 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 61 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 62 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 63 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExpertM:: @ 81FE4FC
# 64 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
# 65 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 66 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 67 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_OldMan:: @ 81FE505
# 68 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	lock
# 69 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	faceplayer
# 70 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHARCOAL, LavaridgeTown_HerbShop_EventScript_ExplainCharcoal
# 71 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
# 72 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	giveitem ITEM_CHARCOAL
# 73 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	compare VAR_RESULT, FALSE
# 74 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 75 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	setflag FLAG_RECEIVED_CHARCOAL
# 76 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 77 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 78 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 79 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_EventScript_ExplainCharcoal:: @ 81FE534
# 80 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
# 81 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	release
# 82 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	end
# 83 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 84 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_WelcomeToHerbShop: @ 81FE53E
# 85 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Welcome to the Herb Shop, home of\n"
# 86 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "effective and inexpensive medicine!$"
# 87 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 88 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine: @ 81FE584
# 89 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "You've come to look at herbal medicine\n"
# 90 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "in Lavaridge?\p"
# 91 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That's rather commendable.\p"
# 92 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "I like you! Take this!$"
# 93 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 94 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_ExplainCharcoal: @ 81FE5EB
# 95 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "That Charcoal I gave you, it's used\n"
# 96 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "for making herbal medicine.\p"
# 97 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It also does wonders when held by\n"
# 98 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "a Pokémon.\p"
# 99 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It intensifies the power of Fire-type\n"
# 100 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "moves.$"
# 101 "data/maps/LavaridgeTown_HerbShop/scripts.pory"

# 102 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike: @ 81FE685
# 103 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "Herbal medicine works impressively well.\n"
# 104 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "But your Pokémon will dislike you for it.\l"
# 105 "data/maps/LavaridgeTown_HerbShop/scripts.pory"
	.string "It must be horribly bitter!$"
