# 1 "data/maps/MossdeepCity_House1/scripts.pory"

# 2 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_MapScripts:: @ 8221FD5
# 3 "data/maps/MossdeepCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/MossdeepCity_House1/scripts.pory"

# 5 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_EventScript_BlackBelt:: @ 8221FD6
# 6 "data/maps/MossdeepCity_House1/scripts.pory"
	lock
# 7 "data/maps/MossdeepCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_House1/scripts.pory"
	bufferleadmonspeciesname 0
# 9 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_HmmYourPokemon, MSGBOX_DEFAULT
# 10 "data/maps/MossdeepCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetPokeblockNameByMonNature
# 11 "data/maps/MossdeepCity_House1/scripts.pory"
	compare VAR_RESULT, 0
# 12 "data/maps/MossdeepCity_House1/scripts.pory"
	goto_if_eq MossdeepCity_House1_EventScript_NeutralNature
# 13 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_ItLikesXPokeblocks, MSGBOX_DEFAULT
# 14 "data/maps/MossdeepCity_House1/scripts.pory"
	release
# 15 "data/maps/MossdeepCity_House1/scripts.pory"
	end
# 16 "data/maps/MossdeepCity_House1/scripts.pory"

# 17 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_EventScript_NeutralNature:: @ 8221FFC
# 18 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks, MSGBOX_DEFAULT
# 19 "data/maps/MossdeepCity_House1/scripts.pory"
	release
# 20 "data/maps/MossdeepCity_House1/scripts.pory"
	end
# 21 "data/maps/MossdeepCity_House1/scripts.pory"

# 22 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_EventScript_Woman:: @ 8222006
# 23 "data/maps/MossdeepCity_House1/scripts.pory"
	msgbox MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes, MSGBOX_NPC
# 24 "data/maps/MossdeepCity_House1/scripts.pory"
	end
# 25 "data/maps/MossdeepCity_House1/scripts.pory"

# 26 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_Text_HmmYourPokemon: @ 822200F
# 27 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Hmm!\n"
# 28 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 29 "data/maps/MossdeepCity_House1/scripts.pory"

# 30 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_Text_ItLikesXPokeblocks: @ 822201D
# 31 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "It likes {STR_VAR_1}s,\n"
# 32 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "doesn't it?\p"
# 33 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "No, I'm positive of it! It definitely\n"
# 34 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "likes {STR_VAR_1}s!$"
# 35 "data/maps/MossdeepCity_House1/scripts.pory"

# 36 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks: @ 8222068
# 37 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "It doesn't appear to like or dislike\n"
# 38 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "any {POKEBLOCK}s.$"
# 39 "data/maps/MossdeepCity_House1/scripts.pory"

# 40 "data/maps/MossdeepCity_House1/scripts.pory"
MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes: @ 8222099
# 41 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "My husband can tell what kind of\n"
# 42 "data/maps/MossdeepCity_House1/scripts.pory"
	.string "{POKEBLOCK}s a Pokémon likes at a glance.$"
