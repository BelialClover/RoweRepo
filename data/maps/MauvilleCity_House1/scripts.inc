MauvilleCity_House1_MapScripts:: @ 820F975
	.byte 0

MauvilleCity_House1_EventScript_RockSmashDude:: @ 820F976
	lock
	faceplayer
	msgbox MauvilleCity_House1_Text_ImRockSmashDudeTakeThis, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House1_EventScript_ReceivedRockSmash:: @ 820F9A5
	msgbox MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House1_Text_ImRockSmashDudeTakeThis: @ 820F9AF
	.string "Did you know that there are holes\n"
	.string "hidden in the grass?$"

MauvilleCity_House1_Text_ExplainRockSmash: @ 820FAA9
	.string "That item is the Eviolite.\p"
	.string "If you have an unevolved Pokémon\l"
	.string "it gets its Defenses boosted\p"
	.string "I used to give everyone some\n"
	.string "Hidden Machines but with this\l"
	.string "Pokeride thing this isnt necessary!\l"
	.string "Woohoo!$"

MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock: @ 820FB67
	.string "Oh, yes, if you evolve your Pokémon\n"
	.string "this item will lose its effect.\p"
	.string "Woohoo!$"
