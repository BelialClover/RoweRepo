# 1 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 2 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_MapScripts:: @ 823A1B2
# 3 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MagmaHideout_3F_1R_OnLoad
# 4 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.byte 0
# 5 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	
# 6 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_OnLoad::
# 7 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, MagmaHideout_3F_1R_EventScript_OpenGroudonCave
# 8 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	end
# 9 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	
# 10 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_OpenGroudonCave:: @ 81EC3AE
# 11 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	setmetatile 13, 13, METATILE_Lavaridge_CaveEntrance_Top, 1
# 12 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	setmetatile 13, 14, METATILE_Lavaridge_CaveEntrance_Bottom, 0
# 13 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	return
# 14 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 15 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_Grunt9:: @ 823A1B3
# 16 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_Text_Grunt9Intro, MSGBOX_DEFAULT
# 17 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	end
# 18 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 19 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_EventScript_Grunt16:: @ 823A1CA
# 20 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_16, MagmaHideout_3F_1R_Text_Grunt16Intro, MagmaHideout_3F_1R_Text_Grunt16Defeat
# 21 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	msgbox MagmaHideout_3F_1R_Text_Grunt16PostBattle, MSGBOX_AUTOCLOSE
# 22 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	end
# 23 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 24 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt9Intro: @ 823A1E1
# 25 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "What did I do to deserve this guard\n"
# 26 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "posting?\p"
# 27 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "My left ear is burning up!$"
# 28 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 29 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt9Defeat: @ 823A229
# 30 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "I'm getting heat exhaustion…$"
# 31 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 32 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt9PostBattle: @ 823A246
# 33 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Do you think it's odd that we're wearing\n"
# 34 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "hoods in this magma-filled volcano?$"
# 35 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 36 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt16Intro: @ 823A293
# 37 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "We joined so we can help our leader\n"
# 38 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "achieve his fantastic vision.\p"
# 39 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "I don't care if you're with Team Aqua\n"
# 40 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "or if you're just some kid passing by.\p"
# 41 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "No one interferes with us and gets\n"
# 42 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "away with it!$"
# 43 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 44 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt16Defeat: @ 823A353
# 45 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Oh, no!\n"
# 46 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "You're not to be trusted at all!$"
# 47 "data/maps/MagmaHideout_3F_1R/scripts.pory"

# 48 "data/maps/MagmaHideout_3F_1R/scripts.pory"
MagmaHideout_3F_1R_Text_Grunt16PostBattle: @ 823A37C
# 49 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Listen to me.\n"
# 50 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Team Magma is right!\p"
# 51 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Don't listen to Team Aqua.\n"
# 52 "data/maps/MagmaHideout_3F_1R/scripts.pory"
	.string "Don't believe their lies!$"
