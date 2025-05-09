# 1 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 2 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_MapScripts:: @ 823A3D4
# 3 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MagmaHideout_3F_2R_OnLoad
# 4 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.byte 0
# 5 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	
# 6 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_OnLoad::
# 7 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	call_if_unset FLAG_ENABLE_POST_RAYQUAZA_CONTENT, MagmaHideout_3F_2R_EventScript_OpenMoltresCave
# 8 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	end
# 9 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	
# 10 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_EventScript_OpenMoltresCave:: @ 81EC3AE
# 11 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	setmetatile 13, 1, METATILE_Lavaridge_RockWall, 1
# 12 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	setmetatile 13, 0, METATILE_Lavaridge_RockWall, 1
# 13 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	return
# 14 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 15 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_EventScript_Grunt10:: @ 823A3D5
# 16 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_10, MagmaHideout_3F_2R_Text_Grunt10Intro, MagmaHideout_3F_2R_Text_Grunt10Defeat
# 17 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	msgbox MagmaHideout_3F_2R_Text_Grunt10PostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	end
# 19 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 20 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10Intro: @ 823A3EC
# 21 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "I understand everything our leader\n"
# 22 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "says. But you know what?\p"
# 23 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Doing stuff like digging up a super-\n"
# 24 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "ancient Pokémon and ripping off\l"
# 25 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "someone's Meteorite…\p"
# 26 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "I think we're going a little too far.\n"
# 27 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "What do you think?$"
# 28 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 29 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10Defeat: @ 823A4BB
# 30 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "Yeah, I think we are doing something\n"
# 31 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "wrong somehow.$"
# 32 "data/maps/MagmaHideout_3F_2R/scripts.pory"

# 33 "data/maps/MagmaHideout_3F_2R/scripts.pory"
MagmaHideout_3F_2R_Text_Grunt10PostBattle: @ 823A4EF
# 34 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "You know, losing to you cleared my mind.\p"
# 35 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "The next time I see our leader,\n"
# 36 "data/maps/MagmaHideout_3F_2R/scripts.pory"
	.string "I'm going to ask him about what we do.$"
