# 1 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 2 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_MapScripts:: @ 821FC64
# 3 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.byte 0
# 4 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 5 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft:: @ 821FC65
# 6 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 7 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 8 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 10 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_08, LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft_2
# 11 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins
# 12 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 13 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 14 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 15 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	
# 16 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft_2::
# 17 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_ClerkLeft_2
# 18 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 19 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 20 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 21 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 22 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 23 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins: @ 821FC7C
# 24 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 25 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 26 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_POWER_BELT
# 27 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_POWER_LENS
# 28 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_POWER_BAND
# 29 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 30 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 31 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 32 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 33 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 34 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	
# 35 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.align 2
# 36 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_ClerkLeft_2::
# 37 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NORMAL_GEM
# 38 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CHOICE_BAND
# 39 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CHOICE_SCARF
# 40 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CHOICE_SPECS
# 41 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 42 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 43 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_TOXIC_ORB
# 44 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FLAME_ORB
# 45 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 46 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 47 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_POWER_HERB
# 48 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 49 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 50 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 51 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_HEAVY_DUTY_BOOTS
# 52 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 53 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 54 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_POWER_WEIGHT
# 55 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_POWER_BRACER
# 56 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_POWER_BELT
# 57 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_POWER_LENS
# 58 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_POWER_BAND
# 59 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_POWER_ANKLET
# 60 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 61 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_NONE
# 62 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 63 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 64 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 65 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight:: @ 821FC8C
# 66 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	lock
# 67 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	faceplayer
# 68 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	message gText_HowMayIServeYou
# 69 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	waitmessage
# 70 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_06, LilycoveCity_DepartmentStore_3F_EventScript_EvolutionClerk
# 71 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins
# 72 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 73 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 74 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 75 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	
# 76 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_EvolutionClerk::
# 77 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters
# 78 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 79 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	release
# 80 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 81 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 82 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM:: @ 821FCB6
# 83 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
# 84 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 85 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 86 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_PokefanM:: @ 821FCBF
# 87 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance, MSGBOX_NPC
# 88 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 89 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 90 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_EventScript_Woman:: @ 821FCC8
# 91 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon, MSGBOX_NPC
# 92 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	end
# 93 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 94 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon: @ 821FCD1
# 95 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "For quickly toughening up Pokémon,\n"
# 96 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "items are the best.\p"
# 97 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "Protein boosts Attack,\n"
# 98 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "and Calcium raises Sp. Atk.$"
# 99 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 100 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance: @ 821FD3B
# 101 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I want my Pokémon to have more\n"
# 102 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "endurance.\p"
# 103 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I'm trying to decide whether to raise\n"
# 104 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "Defense with Iron, or Sp. Def with Zinc.$"
# 105 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"

# 106 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon: @ 821FDB4
# 107 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "I gave a Carbos to my Pokémon,\n"
# 108 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.string "and its Speed went up.$"

	.align 2
# 111 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters:
# 112 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 113 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_WATER_STONE
# 114 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 115 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 116 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SUN_STONE
# 117 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MOON_STONE
# 118 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 119 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 120 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 121 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ICE_STONE
# 122 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_LINK_CABLE
# 123 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 124 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_TART_APPLE
# 125 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SYRUP_APPLE
# 126 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_RAINBOW_SWEET
# 127 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 128 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 129 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_METAL_COAT
# 130 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_UP_GRADE
# 131 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 132 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 133 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 134 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 135 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 136 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 137 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PROTECTOR
# 138 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 139 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 140 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 141 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 142 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_SACHET
# 143 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 144 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 145 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 146 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 147 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 148 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 151 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_METAL_ALLOY
# 152 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 153 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 154 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 155 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 156 "data/maps/LilycoveCity_DepartmentStore_3F/scripts.pory"
	.2byte ITEM_GALARICA_TWIG
	.2byte ITEM_NONE
