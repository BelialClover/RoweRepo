# 1 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 2 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_MapScripts:: @ 8215BD3
# 3 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 5 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Cutter:: @ 8215BD4
# 6 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	lock
# 7 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	faceplayer
# 8 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 9 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 10 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 11 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 12 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_ExplainCut:: @ 8215C00
# 13 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_ExplainCut, MSGBOX_DEFAULT
# 14 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	release
# 15 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 16 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 17 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_EventScript_Lass:: @ 8215C0A
# 18 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	msgbox RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees, MSGBOX_NPC
# 19 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	end
# 20 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 21 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse: @ 8215C13
# 22 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "That determined expression…\n"
# 23 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "That limber way you move…\l"
# 24 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "And your well-trained Pokémon…\p"
# 25 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "You're obviously a skilled Trainer!\p"
# 26 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "No, wait, don't say a word.\n"
# 27 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "I can tell just by looking at you.\p"
# 28 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "I'm sure that you can put this\n"
# 29 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "item to a good use.\p"
# 30 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "No need to be modest or shy.\n"
# 31 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Go on, take it!$"
# 32 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 33 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_ExplainCut: @ 8215D33
# 34 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Did you know that Pokémon with\n"
# 35 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Harvest can get Berries after battle?$"
# 36 "data/maps/RustboroCity_CuttersHouse/scripts.pory"

# 37 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees: @ 8215E39
# 38 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "When they were expanding the city of\n"
# 39 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "Rustboro, my dad helped out.\p"
# 40 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "He made his Pokémon use Cut to clear\n"
# 41 "data/maps/RustboroCity_CuttersHouse/scripts.pory"
	.string "the land of trees.$"
