# 1 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
TwoIsland_PokemonCenter_1F_MapScripts:: @ 81717B4
# 3 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_PokemonCenter_1F_OnTransition
# 4 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
TwoIsland_PokemonCenter_1F_OnTransition:: @ 81717BF
# 8 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	//setrespawn SPAWN_TWO_ISLAND
# 9 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
TwoIsland_PokemonCenter_1F_EventScript_GBAKid:: @ 81717CC
# 12 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	msgbox TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner, MSGBOX_NPC
# 13 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	end
# 14 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"

# 15 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
TwoIsland_PokemonCenter_1F_EventScript_BugCatcher:: @ 81717D5
# 16 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	msgbox TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape, MSGBOX_NPC
# 17 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner:: @ 81A2E59
# 20 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
    .string "Have you visited the Game Corner\n"
# 21 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
    .string "already?\p"
# 22 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
    .string "It's no good to go alone.\n"
# 23 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
    .string "You have to take a friend along.$"
# 24 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape:: @ 81A2EBE
# 26 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
    .string "Not many people live on\n"
# 27 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
    .string "Two Island.\p"
# 28 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
    .string "There is this old lady who lives\n"
# 29 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
    .string "out on the cape.\p"
# 30 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
    .string "She's been there since I don't know\n"
# 31 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
    .string "when.$"
