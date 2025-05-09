# 1 "data/maps/SkyPillar_Top/scripts.pory"

# 2 "data/maps/SkyPillar_Top/scripts.pory"
.set LOCALID_RAYQUAZA_SLEEPING, 1
# 3 "data/maps/SkyPillar_Top/scripts.pory"
.set LOCALID_LATI, 2
# 4 "data/maps/SkyPillar_Top/scripts.pory"

# 5 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_MapScripts:: @ 82396B8
# 6 "data/maps/SkyPillar_Top/scripts.pory"
	.byte 0
# 7 "data/maps/SkyPillar_Top/scripts.pory"

# 8 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnResume: @ 82396C8
# 9 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SkyPillar_Top_EventScript_TryRemoveRayquaza
# 10 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 11 "data/maps/SkyPillar_Top/scripts.pory"

# 12 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryRemoveRayquaza:: @ 82396D2
# 13 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 14 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 15 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_ne Common_EventScript_NopReturn
# 16 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject VAR_LAST_TALKED
# 17 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 18 "data/maps/SkyPillar_Top/scripts.pory"

# 19 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnTransition: @ 82396E6
# 20 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
# 21 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_lt SkyPillar_Top_EventScript_SetCleanLayout
# 22 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SKY_PILLAR_STATE, 2
# 23 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_ge SkyPillar_Top_EventScript_TryShowRayquaza
# 24 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 25 "data/maps/SkyPillar_Top/scripts.pory"

# 26 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_SetCleanLayout:: @ 82396FD
# 27 "data/maps/SkyPillar_Top/scripts.pory"
	setmaplayoutindex LAYOUT_SKY_PILLAR_TOP_CLEAN
# 28 "data/maps/SkyPillar_Top/scripts.pory"
	setobjectmovementtype LOCALID_RAYQUAZA_SLEEPING, MOVEMENT_TYPE_FACE_DOWN
# 29 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 30 "data/maps/SkyPillar_Top/scripts.pory"

# 31 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_TryShowRayquaza:: @ 8239705
# 32 "data/maps/SkyPillar_Top/scripts.pory"
	call_if_unset FLAG_DEFEATED_RAYQUAZA, SkyPillar_Top_EventScript_ShowRayquaza
# 33 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 34 "data/maps/SkyPillar_Top/scripts.pory"

# 35 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_ShowRayquaza:: @ 823970F
# 36 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_RAYQUAZA_SKY_TOWER_SUMMIT
# 37 "data/maps/SkyPillar_Top/scripts.pory"
	return
# 38 "data/maps/SkyPillar_Top/scripts.pory"

# 39 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_OnWarp: @ 8239713
# 40 "data/maps/SkyPillar_Top/scripts.pory"
	map_script_2 VAR_SKY_PILLAR_STATE, 0, SkyPillar_Top_EventScript_RayquazaFaceDown
# 41 "data/maps/SkyPillar_Top/scripts.pory"
	.2byte 0
# 42 "data/maps/SkyPillar_Top/scripts.pory"

# 43 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RayquazaFaceDown:: @ 823971D
# 44 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject LOCALID_RAYQUAZA_SLEEPING, DIR_SOUTH
# 45 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 46 "data/maps/SkyPillar_Top/scripts.pory"

# 47 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_Rayquaza:: @ 8239722
# 48 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 49 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 50 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, 2
# 51 "data/maps/SkyPillar_Top/scripts.pory"
	delay 40
# 52 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 53 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 54 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_MEGA_EVOLVE_WILD_POKEMON
# 55 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 5
# 56 "data/maps/SkyPillar_Top/scripts.pory"
	setwildbattlewithcustommoves SPECIES_RAYQUAZA, 85, ITEM_WHITE_HERB, MOVE_DRAGON_ASCENT, MOVE_DRACO_METEOR, MOVE_V_CREATE, MOVE_EARTHQUAKE, 0, NATURE_JOLLY
# 57 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 58 "data/maps/SkyPillar_Top/scripts.pory"
	dowildbattle
# 59 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 60 "data/maps/SkyPillar_Top/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 61 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 62 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq SkyPillar_Top_EventScript_CaughtRayquaza
# 63 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq SkyPillar_Top_EventScript_DefeatedRayquaza
# 65 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 66 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq SkyPillar_Top_EventScript_RanFromRayquaza
# 67 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 68 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_eq SkyPillar_Top_EventScript_RanFromRayquaza
# 69 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 70 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_ENABLE_POST_RAYQUAZA_CONTENT
# 71 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_MEGA_EVOLVE_WILD_POKEMON
# 72 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 73 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 74 "data/maps/SkyPillar_Top/scripts.pory"

# 75 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_CaughtRayquaza::
# 76 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_MEGA_EVOLVE_WILD_POKEMON
# 77 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 78 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_ENABLE_POST_RAYQUAZA_CONTENT
# 79 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 80 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 81 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 82 "data/maps/SkyPillar_Top/scripts.pory"
	release
# 83 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 84 "data/maps/SkyPillar_Top/scripts.pory"

# 85 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_DefeatedRayquaza:: @ 8239768
# 86 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_DEFEATED_RAYQUAZA
# 87 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_ENABLE_POST_RAYQUAZA_CONTENT
# 88 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 89 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 90 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 91 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 92 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 93 "data/maps/SkyPillar_Top/scripts.pory"

# 94 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_RanFromRayquaza:: @ 8239771
# 95 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 96 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 97 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 98 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 99 "data/maps/SkyPillar_Top/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 100 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 101 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 102 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 103 "data/maps/SkyPillar_Top/scripts.pory"

# 104 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_EventScript_AwakenRayquaza:: @ 823979A
# 105 "data/maps/SkyPillar_Top/scripts.pory"
	lockall
# 106 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 1
# 107 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 108 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 110 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanUp
# 111 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 113 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaStir
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 115 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 116 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, 2
# 117 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 119 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 120 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 3  @ shake delay
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 122 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, 2
# 125 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 126 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8005, 2  @ horizontal pan
# 127 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 128 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 129 "data/maps/SkyPillar_Top/scripts.pory"
	special ShakeCamera
# 130 "data/maps/SkyPillar_Top/scripts.pory"
	waitstate
# 131 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 132 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement LOCALID_RAYQUAZA_SLEEPING, SkyPillar_Top_Movement_RayquazaFlyOff
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 134 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject LOCALID_RAYQUAZA_SLEEPING
# 135 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox SkyPillar_Top_Text_RayquazaFlewOff, MSGBOX_DEFAULT
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 137 "data/maps/SkyPillar_Top/scripts.pory"
	delay 20
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 1
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	special SpawnCameraObject
# 140 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SkyPillar_Top_Movement_CameraPanDown
# 141 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	special RemoveCameraObject
# 143 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SOOTOPOLIS_CITY_STATE, 5
# 144 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_STATE, 1
# 145 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SKY_PILLAR_RAQUAZA_CRY_DONE, 1
# 146 "data/maps/SkyPillar_Top/scripts.pory"
	releaseall
# 147 "data/maps/SkyPillar_Top/scripts.pory"
	end
# 148 "data/maps/SkyPillar_Top/scripts.pory"

# 149 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaStir: @ 823983A
# 150 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 151 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_fast_left
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 153 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 154 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 155 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 156 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_left
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 159 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right
# 160 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 161 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 165 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 166 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 167 "data/maps/SkyPillar_Top/scripts.pory"

# 168 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_RayquazaFlyOff: @ 823984B
# 169 "data/maps/SkyPillar_Top/scripts.pory"
	delay_16
# 170 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_down
# 171 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 172 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_right
# 173 "data/maps/SkyPillar_Top/scripts.pory"
	delay_8
# 174 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fastest_up
# 175 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 176 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 177 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 178 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 179 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 180 "data/maps/SkyPillar_Top/scripts.pory"
	slide_up
# 181 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 182 "data/maps/SkyPillar_Top/scripts.pory"

# 183 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanUp: @ 8239858
# 184 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 185 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 186 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_up
# 187 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 188 "data/maps/SkyPillar_Top/scripts.pory"

# 189 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Movement_CameraPanDown: @ 823985C
# 190 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 191 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 192 "data/maps/SkyPillar_Top/scripts.pory"
	walk_slow_down
# 193 "data/maps/SkyPillar_Top/scripts.pory"
	step_end
# 194 "data/maps/SkyPillar_Top/scripts.pory"

# 195 "data/maps/SkyPillar_Top/scripts.pory"
SkyPillar_Top_Text_RayquazaFlewOff: @ 8239860
# 196 "data/maps/SkyPillar_Top/scripts.pory"
	.string "The awakened Rayquaza flew off…$"
