TwoIsland_PokemonCenter_1F_MapScripts:: @ 81717B4
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

TwoIsland_PokemonCenter_1F_OnTransition:: @ 81717BF
	//setrespawn SPAWN_TWO_ISLAND
	end

TwoIsland_PokemonCenter_1F_EventScript_GBAKid:: @ 81717CC
	msgbox TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner, MSGBOX_NPC
	end

TwoIsland_PokemonCenter_1F_EventScript_BugCatcher:: @ 81717D5
	msgbox TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape, MSGBOX_NPC
	end

TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner:: @ 81A2E59
    .string "Have you visited the Game Corner\n"
    .string "already?\p"
    .string "It's no good to go alone.\n"
    .string "You have to take a friend along.$"

TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape:: @ 81A2EBE
    .string "Not many people live on\n"
    .string "Two Island.\p"
    .string "There is this old lady who lives\n"
    .string "out on the cape.\p"
    .string "She's been there since I don't know\n"
    .string "when.$"
