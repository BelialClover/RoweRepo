# 1 "data/maps/PacifidlogTown_House5/scripts.pory"

# 2 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_MapScripts:: @ 8204110
# 3 "data/maps/PacifidlogTown_House5/scripts.pory"
	.byte 0
# 4 "data/maps/PacifidlogTown_House5/scripts.pory"

# 5 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_EventScript_MirageIslandWatcher:: @ 8204111
# 6 "data/maps/PacifidlogTown_House5/scripts.pory"
	lock
# 7 "data/maps/PacifidlogTown_House5/scripts.pory"
	faceplayer
# 8 "data/maps/PacifidlogTown_House5/scripts.pory"
	specialvar VAR_RESULT, IsMirageIslandPresent
# 9 "data/maps/PacifidlogTown_House5/scripts.pory"
	compare VAR_RESULT, TRUE
# 10 "data/maps/PacifidlogTown_House5/scripts.pory"
	goto_if_eq PacifidlogTown_House5_EventScript_EonFlute
# 11 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_Text_CantSeeMirageIslandToday, MSGBOX_DEFAULT
# 12 "data/maps/PacifidlogTown_House5/scripts.pory"
	release
# 13 "data/maps/PacifidlogTown_House5/scripts.pory"
	end
# 14 "data/maps/PacifidlogTown_House5/scripts.pory"

# 15 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_EventScript_EonFlute::	
# 16 "data/maps/PacifidlogTown_House5/scripts.pory"
	goto_if_unset FLAG_DEFEATED_LATIOS, PacifidlogTown_House5_EventScript_MirageIslandPresent
# 17 "data/maps/PacifidlogTown_House5/scripts.pory"
	goto_if_unset FLAG_DEFEATED_LATIAS, PacifidlogTown_House5_EventScript_MirageIslandPresent
# 18 "data/maps/PacifidlogTown_House5/scripts.pory"
	goto_if_set FLAG_GOT_EON_FLUTE, PacifidlogTown_House5_EventScript_MirageIslandPresent
# 19 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_Text_Eon_Flute, MSGBOX_DEFAULT
# 20 "data/maps/PacifidlogTown_House5/scripts.pory"
	giveitem ITEM_EON_FLUTE
# 21 "data/maps/PacifidlogTown_House5/scripts.pory"
	setflag FLAG_GOT_EON_FLUTE
# 22 "data/maps/PacifidlogTown_House5/scripts.pory"
	release
# 23 "data/maps/PacifidlogTown_House5/scripts.pory"
	end
# 24 "data/maps/PacifidlogTown_House5/scripts.pory"

# 25 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_EventScript_MirageIslandPresent:: @ 820412D
# 26 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_Text_CanSeeMirageIslandToday, MSGBOX_DEFAULT
# 27 "data/maps/PacifidlogTown_House5/scripts.pory"
	release
# 28 "data/maps/PacifidlogTown_House5/scripts.pory"
	end
# 29 "data/maps/PacifidlogTown_House5/scripts.pory"

# 30 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_EventScript_Gentleman:: @ 8204137
# 31 "data/maps/PacifidlogTown_House5/scripts.pory"
	msgbox PacifidlogTown_House5_Text_MirageIslandAppearDependingOnWeather, MSGBOX_NPC
# 32 "data/maps/PacifidlogTown_House5/scripts.pory"
	end
# 33 "data/maps/PacifidlogTown_House5/scripts.pory"

# 34 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_Text_CantSeeMirageIslandToday: @ 8204140
# 35 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "I can't see Mirage Island today…$"
# 36 "data/maps/PacifidlogTown_House5/scripts.pory"

# 37 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_Text_CanSeeMirageIslandToday: @ 8204161
# 38 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Oh! Oh my!\n"
# 39 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "I can see Mirage Island today!$"
# 40 "data/maps/PacifidlogTown_House5/scripts.pory"
	
# 41 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_Text_Eon_Flute: @ 8204161
# 42 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "After all this time, I was able to see\n"
# 43 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "the Mirage Island! Please, take this item!$"
# 44 "data/maps/PacifidlogTown_House5/scripts.pory"

# 45 "data/maps/PacifidlogTown_House5/scripts.pory"
PacifidlogTown_House5_Text_MirageIslandAppearDependingOnWeather: @ 820418B
# 46 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Mirage Island…\p"
# 47 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "It is said that a certain species of\n"
# 48 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Pokémon are native to the island and\l"
# 49 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "can make it appear and disappear.\p"
# 50 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "I would love to visit it one day...\p"
# 51 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Why you say?\p"
# 52 "data/maps/PacifidlogTown_House5/scripts.pory"
	.string "Why not?$"
