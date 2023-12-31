ThreeIsland_PokemonCenter_1F_MapScripts::
	.byte 0

ThreeIsland_PokemonCenter_1F_EventScript_Sailor:: @ 817184A
	msgbox ThreeIsland_PokemonCenter_1F_Text_ImpossibleToSurfBetweenIslands, MSGBOX_NPC
	end

ThreeIsland_PokemonCenter_1F_EventScript_Lass:: @ 8171853
	msgbox ThreeIsland_PokemonCenter_1F_Text_AlwaysBerriesInBerryForest, MSGBOX_NPC
	end

ThreeIsland_PokemonCenter_1F_EventScript_Rocker:: @ 817185C
	msgbox ThreeIsland_PokemonCenter_1F_Text_PCNetworkCanLinkWithKanto, MSGBOX_NPC
	end
	
ThreeIsland_PokemonCenter_1F_EventScript_Sorry:: @ 817185C
	msgbox ThreeIsland_PokemonCenter_1F_Text_Sorry, MSGBOX_NPC
	end

ThreeIsland_PokemonCenter_1F_Text_PCNetworkCanLinkWithKanto:: @ 81A2FB5
    .string "Hey, did you hear the news?\p"
    .string "The PC network here can now link\n"
    .string "with PCs in Kanto.\p"
    .string "I don't know how that came about,\n"
    .string "but it's fantastic!$"

ThreeIsland_PokemonCenter_1F_Text_ImpossibleToSurfBetweenIslands:: @ 81A303B
    .string "It's impossible to Surf between the\n"
    .string "islands around these parts.\p"
    .string "The tides are too fast and\n"
    .string "treacherous.$"

ThreeIsland_PokemonCenter_1F_Text_AlwaysBerriesInBerryForest:: @ 81A30A3
    .string "Let's crush Berries!\n"
    .string "…That'd be wasting Berries?\p"
    .string "You can always find some Berries\n"
    .string "on the ground in Berry Forest.$"

ThreeIsland_PokemonCenter_1F_Text_Sorry:: @ 81A30A3
    .string "Sorry, but this area is currently\n"
    .string "on maintenance.$"
