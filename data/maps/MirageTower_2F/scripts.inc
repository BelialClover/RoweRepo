# 1 "data/maps/MirageTower_2F/scripts.pory"

# 2 "data/maps/MirageTower_2F/scripts.pory"
MirageTower_2F_MapScripts:: @ 823AD11
# 3 "data/maps/MirageTower_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 4 "data/maps/MirageTower_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 5 "data/maps/MirageTower_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MirageTower_2F_SetHoleWarp
# 6 "data/maps/MirageTower_2F/scripts.pory"
	.byte 0
# 7 "data/maps/MirageTower_2F/scripts.pory"

# 8 "data/maps/MirageTower_2F/scripts.pory"
MirageTower_2F_SetHoleWarp: @ 823AD21
# 9 "data/maps/MirageTower_2F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 10 "data/maps/MirageTower_2F/scripts.pory"
	setholewarp MAP_MIRAGE_TOWER_1F, 255, 0, 0
# 11 "data/maps/MirageTower_2F/scripts.pory"
	end
