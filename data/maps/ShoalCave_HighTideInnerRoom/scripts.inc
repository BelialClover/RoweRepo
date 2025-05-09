# 1 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"

# 2 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
ShoalCave_HighTideInnerRoom_MapScripts:: @ 82372AC
# 3 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	.byte 0
# 4 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	
# 5 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	
# 6 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
ShoalCave_HighTideInnerRoom_EventScript_Red::	
# 7 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	lock
# 8 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	faceplayer
# 9 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_RED, ShoalCave_HighTideInnerRoom_EventScript_Defeated
# 10 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	playse SE_PIN
# 11 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	msgbox ShoalCave_HighTideInnerRoom_Text_Red, MSGBOX_DEFAULT
# 12 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_RED, ShoalCave_HighTideInnerRoom_Text_Red_Defeat
# 13 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	msgbox ShoalCave_HighTideInnerRoom_Text_Red_Defeat, MSGBOX_DEFAULT
# 14 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	setflag FLAG_DEFEATED_RED
# 15 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	setflag FLAG_ENABLE_RED_FIGHT
# 16 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	clearflag FLAG_DEFEATED_METEOR_FALLS_STEVEN
# 17 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	release
# 18 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	end
# 19 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"

# 20 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
ShoalCave_HighTideInnerRoom_EventScript_Defeated:: @ 823B1CD
# 21 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	msgbox ShoalCave_HighTideInnerRoom_Text_Red_Defeat, MSGBOX_DEFAULT
# 22 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 192, 192, 192
# 23 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	release
# 24 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	end
# 25 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	
# 26 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
ShoalCave_HighTideInnerRoom_Text_Red: @ 823A353
# 27 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	.string "...$"
# 28 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	
# 29 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
ShoalCave_HighTideInnerRoom_Text_Red_Defeat: @ 823A353
# 30 "data/maps/ShoalCave_HighTideInnerRoom/scripts.pory"
	.string "...!$"
