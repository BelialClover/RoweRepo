# 1 "data/maps/MauvilleCity_House1/scripts.pory"

# 2 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_MapScripts:: @ 820F975
# 3 "data/maps/MauvilleCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/MauvilleCity_House1/scripts.pory"

# 5 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_RockSmashDude:: @ 820F976
# 6 "data/maps/MauvilleCity_House1/scripts.pory"
	lock
# 7 "data/maps/MauvilleCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_ImRockSmashDudeTakeThis, MSGBOX_DEFAULT
# 9 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 10 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 11 "data/maps/MauvilleCity_House1/scripts.pory"

# 12 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_EventScript_ReceivedRockSmash:: @ 820F9A5
# 13 "data/maps/MauvilleCity_House1/scripts.pory"
	msgbox MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock, MSGBOX_DEFAULT
# 14 "data/maps/MauvilleCity_House1/scripts.pory"
	release
# 15 "data/maps/MauvilleCity_House1/scripts.pory"
	end
# 16 "data/maps/MauvilleCity_House1/scripts.pory"

# 17 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ImRockSmashDudeTakeThis: @ 820F9AF
# 18 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Did you know that there are holes\n"
# 19 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "hidden in the grass?$"
# 20 "data/maps/MauvilleCity_House1/scripts.pory"

# 21 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_ExplainRockSmash: @ 820FAA9
# 22 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "That item is the Eviolite.\p"
# 23 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "If you have an unevolved Pokémon\l"
# 24 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "it gets its Defenses boosted\p"
# 25 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "I used to give everyone some\n"
# 26 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Hidden Machines but with this\l"
# 27 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Pokeride thing this isnt necessary!\l"
# 28 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!$"
# 29 "data/maps/MauvilleCity_House1/scripts.pory"

# 30 "data/maps/MauvilleCity_House1/scripts.pory"
MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock: @ 820FB67
# 31 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Oh, yes, if you evolve your Pokémon\n"
# 32 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "this item will lose its effect.\p"
# 33 "data/maps/MauvilleCity_House1/scripts.pory"
	.string "Woohoo!$"
