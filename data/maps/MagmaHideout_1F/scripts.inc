# 1 "data/maps/MagmaHideout_1F/scripts.pory"

# 2 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_MapScripts:: @ 8239880
# 3 "data/maps/MagmaHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MagmaHideout_1F_OnTransition
# 4 "data/maps/MagmaHideout_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MagmaHideout_1F_OnLoad
# 5 "data/maps/MagmaHideout_1F/scripts.pory"
	.byte 0
# 6 "data/maps/MagmaHideout_1F/scripts.pory"
	
# 7 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_OnLoad::
# 8 "data/maps/MagmaHideout_1F/scripts.pory"
	call_if_unset FLAG_ENABLE_POST_RAYQUAZA_CONTENT, MagmaHideout_1F_EventScript_OpenEnteiCave
# 9 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 10 "data/maps/MagmaHideout_1F/scripts.pory"
	
# 11 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_OpenEnteiCave:: @ 81EC3AE
# 12 "data/maps/MagmaHideout_1F/scripts.pory"
	setmetatile 20, 22, METATILE_Lavaridge_RockWall, 1
# 13 "data/maps/MagmaHideout_1F/scripts.pory"
	setmetatile 20, 21, METATILE_Lavaridge_RockWall, 1
# 14 "data/maps/MagmaHideout_1F/scripts.pory"
	return
# 15 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_OnTransition: @ 8239886
# 16 "data/maps/MagmaHideout_1F/scripts.pory"
	setvar VAR_JAGGED_PASS_ASH_WEATHER, 0
# 17 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 18 "data/maps/MagmaHideout_1F/scripts.pory"

# 19 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt1:: @ 823988C
# 20 "data/maps/MagmaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_1, MagmaHideout_1F_Text_Grunt1Intro, MagmaHideout_1F_Text_Grunt1Defeat
# 21 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 22 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 23 "data/maps/MagmaHideout_1F/scripts.pory"

# 24 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_EventScript_Grunt2:: @ 82398A3
# 25 "data/maps/MagmaHideout_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_2, MagmaHideout_1F_Text_Grunt2Intro, MagmaHideout_1F_Text_Grunt2Defeat
# 26 "data/maps/MagmaHideout_1F/scripts.pory"
	msgbox MagmaHideout_1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/MagmaHideout_1F/scripts.pory"
	end
# 28 "data/maps/MagmaHideout_1F/scripts.pory"

# 29 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Intro: @ 82398BA
# 30 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "When Team Magma has roll call, we get\n"
# 31 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "important guarding assignments in\l"
# 32 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "the order that we line up.\p"
# 33 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "That's why I'm stuck off in this corner.\n"
# 34 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'm always late to roll call!$"
# 35 "data/maps/MagmaHideout_1F/scripts.pory"

# 36 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1Defeat: @ 8239964
# 37 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'm always late for training sessions,\n"
# 38 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "too!\p"
# 39 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I hate to say it, but I'm wimpy…$"
# 40 "data/maps/MagmaHideout_1F/scripts.pory"

# 41 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt1PostBattle: @ 82399B1
# 42 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Okay, I'll try to put a little more\n"
# 43 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "effort into things from now on…$"
# 44 "data/maps/MagmaHideout_1F/scripts.pory"

# 45 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Intro: @ 82399F5
# 46 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Our leader told us to dig into\n"
# 47 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Mt. Chimney, so we dug and dug.\p"
# 48 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "And in the course of digging, we came\n"
# 49 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "across something that blew our minds!\p"
# 50 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "What did we find?\p"
# 51 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Fuhahaha!\n"
# 52 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I'll tell you if you beat me!$"
# 53 "data/maps/MagmaHideout_1F/scripts.pory"

# 54 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2Defeat: @ 8239ABA
# 55 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Arrgh!\n"
# 56 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "Taken down!$"
# 57 "data/maps/MagmaHideout_1F/scripts.pory"

# 58 "data/maps/MagmaHideout_1F/scripts.pory"
MagmaHideout_1F_Text_Grunt2PostBattle: @ 8239ACD
# 59 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "I won't tell you after all.\n"
# 60 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "You'll find out when you get there!\p"
# 61 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "It'd be better if you saved surprises\n"
# 62 "data/maps/MagmaHideout_1F/scripts.pory"
	.string "to the end, don't you think?$"
