LilycoveCity_DepartmentStore_3F_MapScripts:: @ 821FC64
	.byte 0

LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft:: @ 821FC65
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_RECEIVED_BADGE_05, LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft_2
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	
LilycoveCity_DepartmentStore_3F_EventScript_ClerkLeft_2::
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_ClerkLeft_2
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins: @ 821FC7C
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_POWER_BRACER
	.2byte ITEM_POWER_BELT
	.2byte ITEM_POWER_LENS
	.2byte ITEM_POWER_BAND
	.2byte ITEM_POWER_ANKLET
	.2byte ITEM_MACHO_BRACE
	.2byte ITEM_NONE
	release
	end
	
	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_ClerkLeft_2::
	.2byte ITEM_NORMAL_GEM
	.2byte ITEM_CHOICE_BAND
	.2byte ITEM_CHOICE_SCARF
	.2byte ITEM_CHOICE_SPECS
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_LIFE_ORB
	.2byte ITEM_TOXIC_ORB
	.2byte ITEM_FLAME_ORB
	.2byte ITEM_FOCUS_SASH
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_POWER_HERB
	.2byte ITEM_BLACK_SLUDGE
	.2byte ITEM_ASSAULT_VEST
	.2byte ITEM_WEAKNESS_POLICY
	.2byte ITEM_HEAVY_DUTY_BOOTS
	.2byte ITEM_ROCKY_HELMET
	.2byte ITEM_FOCUS_BAND
	.2byte ITEM_POWER_WEIGHT
	.2byte ITEM_POWER_BRACER
	.2byte ITEM_POWER_BELT
	.2byte ITEM_POWER_LENS
	.2byte ITEM_POWER_BAND
	.2byte ITEM_POWER_ANKLET
	.2byte ITEM_MACHO_BRACE
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_3F_EventScript_ClerkRight:: @ 821FC8C
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_RECEIVED_BADGE_04, LilycoveCity_DepartmentStore_3F_EventScript_EvolutionClerk
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_Vitamins
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	
LilycoveCity_DepartmentStore_3F_EventScript_EvolutionClerk::
	pokemart LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_3F_Pokemart_StatBoosters: @ 821FCA4
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_THUNDER_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_SUN_STONE
	.2byte ITEM_MOON_STONE
	.2byte ITEM_DAWN_STONE
	.2byte ITEM_DUSK_STONE
	.2byte ITEM_SHINY_STONE
	.2byte ITEM_ICE_STONE
	.2byte ITEM_DRAGON_SCALE
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_METAL_COAT
	.2byte ITEM_UP_GRADE
	.2byte ITEM_DEEP_SEA_SCALE
	.2byte ITEM_DEEP_SEA_TOOTH
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_ELECTIRIZER
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_PROTECTOR
	.2byte ITEM_RAZOR_CLAW
	.2byte ITEM_RAZOR_FANG
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_PRISM_SCALE
	.2byte ITEM_SACHET
	.2byte ITEM_WHIPPED_DREAM
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_3F_EventScript_TriathleteM:: @ 821FCB6
	msgbox LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_EventScript_PokefanM:: @ 821FCBF
	msgbox LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_EventScript_Woman:: @ 821FCC8
	msgbox LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_3F_Text_ItemsBestForTougheningPokemon: @ 821FCD1
	.string "For quickly toughening up Pokémon,\n"
	.string "items are the best.\p"
	.string "Protein boosts Attack,\n"
	.string "and Calcium raises Sp. Atk.$"

LilycoveCity_DepartmentStore_3F_Text_WantMoreEndurance: @ 821FD3B
	.string "I want my Pokémon to have more\n"
	.string "endurance.\p"
	.string "I'm trying to decide whether to raise\n"
	.string "Defense with Iron, or Sp. Def with Zinc.$"

LilycoveCity_DepartmentStore_3F_Text_GaveCarbosToSpeedUpMon: @ 821FDB4
	.string "I gave a Carbos to my Pokémon,\n"
	.string "and its Speed went up.$"
