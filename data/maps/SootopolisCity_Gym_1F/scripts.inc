# 1 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 2 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_MapScripts:: @ 8224E4C
# 3 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SootopolisCity_Gym_1F_OnFrame
# 4 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SootopolisCity_Gym_1F_OnResume
# 5 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SootopolisCity_Gym_1F_OnLoad
# 6 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SootopolisCity_Gym_1F_OnTransition
# 7 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.byte 0
# 8 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 9 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnTransition: @ 8224E61
# 10 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species
# 11 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_ICE_STEP_COUNT, 1
# 12 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 13 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 14 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnResume: @ 8224E67
# 15 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
# 16 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 17 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 18 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnLoad: @ 8224E6A
# 19 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 20 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special SetSootopolisGymCrackedIceMetatiles
# 21 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 22 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 23 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles:: @ 8224E73
# 24 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_ICE_STEP_COUNT, 8
# 25 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt SootopolisCity_Gym_1F_EventScript_StopCheckingStairs  @ All stairs ice
# 26 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_ICE_STEP_COUNT, 28
# 27 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt SootopolisCity_Gym_1F_EventScript_OpenFirstStairs
# 28 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_ICE_STEP_COUNT, 67
# 29 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_lt SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs
# 30 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, 0
# 31 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, 0
# 32 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstAndSecondStairs:: @ 8224EA6
# 33 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, 0
# 34 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, 0
# 35 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_OpenFirstStairs:: @ 8224EB8
# 36 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, 0
# 37 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, 0
# 38 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_StopCheckingStairs:: @ 8224ECA
# 39 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 40 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 41 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_OnFrame: @ 8224ECB
# 42 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 8, SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs
# 43 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 28, SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs
# 44 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 67, SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs
# 45 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	map_script_2 VAR_ICE_STEP_COUNT, 0, SootopolisCity_Gym_1F_EventScript_FallThroughIce
# 46 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.2byte 0
# 47 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 48 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockFirstStairs:: @ 8224EED
# 49 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 50 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 51 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 52 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 53 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 54 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 55 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 56 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockSecondStairs:: @ 8224F01
# 57 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 58 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 59 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 60 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 61 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 62 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 63 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 64 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_UnlockThirdStairs:: @ 8224F15
# 65 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	addvar VAR_ICE_STEP_COUNT, 1
# 66 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 40
# 67 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_ICE_STAIRS
# 68 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_CheckSetStairMetatiles
# 69 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 70 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 71 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 72 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_FallThroughIce:: @ 8224F29
# 73 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 74 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 20
# 75 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SootopolisCity_Gym_1F_Movement_FallThroughIce
# 76 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmovement 0
# 77 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playse SE_FALL
# 78 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 60
# 79 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	warphole MAP_SOOTOPOLIS_CITY_GYM_B1F
# 80 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitstate
# 81 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 82 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 83 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Movement_FallThroughIce: @ 8224F42
# 84 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	set_invisible
# 85 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	step_end
# 86 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 87 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Juan:: @ 8224F44
# 88 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lock
# 89 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	faceplayer
# 90 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_JuanRematch
# 91 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanIntro, SootopolisCity_Gym_1F_Text_JuanDefeat, SootopolisCity_Gym_1F_EventScript_JuanDefeated, NO_MUSIC
# 92 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 93 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 94 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 95 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanDefeated:: @ 8224F82
# 96 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
# 97 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitmessage
# 98 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 99 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis, MSGBOX_DEFAULT
# 100 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 101 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_BADGE08_GET
# 102 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 8
# 103 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 104 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 105 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_GiveWaterPulse
# 106 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 107 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 108 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 109 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_RegisteredJuan, MSGBOX_DEFAULT
# 110 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	waitfanfare
# 111 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	closemessage
# 112 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	delay 30
# 113 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
# 114 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 115 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_JUAN_REMATCH
# 116 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 117 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 118 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 119 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 120 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Juan_PostBattle::
# 121 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_DEFAULT
# 122 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 123 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 124 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	
# 125 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
//Rematch	
# 126 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanRematch:: @ 8204DB3
# 127 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Juan_PostBattle
# 128 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPreRematch, MSGBOX_DEFAULT
# 129 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_Start_Rematch_1
# 130 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 131 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	
# 132 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_JuanRematchEnd::
# 133 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_AUTOCLOSE
# 134 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	call Gym_EventScript_Reset_Random_Rematch
# 135 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_JUAN_REMATCH
# 136 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 137 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	
# 138 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Start_Rematch_1::
# 139 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	checkitem ITEM_TM03_WATER_PULSE, 1
# 140 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 141 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Start_Rematch_2
# 142 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
# 143 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 144 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM03_WATER_PULSE
# 145 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
# 146 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 147 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	
# 148 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Start_Rematch_2::
# 149 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM08 SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_1
# 150 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	checkitem ITEM_TM55_SCALD, 1
# 151 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 152 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Start_Rematch_3
# 153 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
# 154 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 155 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM55_SCALD
# 156 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
# 157 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 158 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	
# 159 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Start_Rematch_3::
# 160 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM42 SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_2
# 161 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	checkitem ITEM_TM94_SURF, 1
# 162 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 163 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Start_Rematch_4
# 164 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
# 165 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 166 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM94_SURF
# 167 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
# 168 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 169 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	
# 170 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Start_Rematch_4::
# 171 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM40 SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_3
# 172 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	checkitem ITEM_TM98_WATERFALL, 1
# 173 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 174 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Start_Rematch_5
# 175 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
# 176 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 177 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM98_WATERFALL
# 178 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
# 179 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 180 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	
# 181 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Start_Rematch_5::
# 182 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04 SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_4
# 183 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_GOT_GYARADOS_MEGA_STONE SootopolisCity_Gym_1F_EventScript_Start_Rematch_6
# 184 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
# 185 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_Text_GetMegaStone, MSGBOX_DEFAULT
# 186 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_GYARADOSITE
# 187 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	setflag FLAG_GOT_GYARADOS_MEGA_STONE
# 188 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
# 189 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 190 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	
# 191 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Start_Rematch_6::
# 192 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM03 SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_4
# 193 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	checkitem ITEM_TM102_LIQUIDATION, 1
# 194 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 195 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Start_Rematch_Final
# 196 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_5, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
# 197 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 198 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM102_LIQUIDATION
# 199 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
# 200 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 201 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	
# 202 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Start_Rematch_Final::
# 203 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	random 5
# 204 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	switch VAR_RESULT
# 205 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	case 0, SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_1
# 206 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	case 1, SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_2
# 207 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	case 2, SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_3
# 208 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	case 3, SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_4
# 209 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	case 4, SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_5
# 210 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 211 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	
# 212 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_1::
# 213 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
# 214 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
# 215 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 216 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_MODEST_MINT, 3
# 217 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
# 218 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 219 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	
# 220 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_2::
# 221 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
# 222 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
# 223 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 224 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_MILD_MINT, 3
# 225 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
# 226 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 227 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	
# 228 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_3::
# 229 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
# 230 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
# 231 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 232 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_RASH_MINT, 3
# 233 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
# 234 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 235 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	
# 236 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_4::
# 237 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
# 238 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
# 239 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 240 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_QUIET_MINT, 3
# 241 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
# 242 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 243 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	
# 244 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_Start_Rematch_Party_5::
# 245 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_5, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
# 246 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
# 247 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 248 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TIMID_MINT, 3
# 249 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_JuanRematchEnd
# 250 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 251 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	
# 252 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_Text_GetTM:
# 253 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Juan: Please take this\n"
# 254 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Technical Machine.$"
# 255 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 256 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_Text_GetMegaStone:
# 257 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Juan: Please take this\n"
# 258 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Mega Stone, with you.\p"
# 259 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Make an Gyarados hold it to\n"
# 260 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "unleash its Hidden Potential.$"
# 261 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	
# 262 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_Text_GetReward:
# 263 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Juan: Please take this\n"
# 264 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Item as a Reward.$"
# 265 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 266 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
//rematches end
# 267 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 268 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse:: @ 8224FD4
# 269 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM03
# 270 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 271 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq Common_EventScript_BagIsFull
# 272 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 273 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	return
# 274 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 275 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GiveWaterPulse2:: @ 8224FF7
# 276 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	giveitem ITEM_TM03
# 277 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 278 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 279 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_ExplainWaterPulse, MSGBOX_DEFAULT
# 280 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 281 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 282 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 283 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GoGetFortreeBadge:: @ 822501B
# 284 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GoGetFortreeBadge, MSGBOX_DEFAULT
# 285 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 286 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 287 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 288 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuide:: @ 8225040
# 289 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lock
# 290 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	faceplayer
# 291 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory
# 292 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 293 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 294 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 295 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 296 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymGuidePostVictory:: @ 8225055
# 297 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 298 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	release
# 299 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 300 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 301 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_LeftGymStatue:: @ 822505F
# 302 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 303 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 304 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 305 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 306 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 307 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_RightGymStatue:: @ 822506F
# 308 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	lockall
# 309 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_GymStatueCertified
# 310 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	goto SootopolisCity_Gym_1F_EventScript_GymStatue
# 311 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 312 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 313 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatueCertified:: @ 822507F
# 314 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 315 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 316 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 317 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 318 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_EventScript_GymStatue:: @ 8225089
# 319 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 320 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	releaseall
# 321 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	end
# 322 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 323 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuideAdvice: @ 8225093
# 324 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yo! How's it going, Champion-\n"
# 325 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "bound {PLAYER}?\p"
# 326 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Sootopolis's Gym Jaun is\n"
# 327 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "a master of Water-type Pokémon.\p"
# 328 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "And, to get to Juan, an icy floor\n"
# 329 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "will hamper your progress…\p"
# 330 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Listen, I'm sorry, but that's all the\n"
# 331 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "advice that I have for you.\p"
# 332 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The rest of the way, you have to\n"
# 333 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "go for it yourself!$"
# 334 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 335 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymGuidePostVictory: @ 82251AF
# 336 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Yow! You've beaten even Juan, who\n"
# 337 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "was supposedly the best in all Hoenn!$"
# 338 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 339 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanIntro: @ 8225268
# 340 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Welcome Challenger my name is Juan,\n"
# 341 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The Gym leader of Sootopolis.\p"
# 342 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Once, I had given up my position as\n"
# 343 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "the Gym Leader to my apprentice,\l"
# 344 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "However, a compelling reason arose\l"
# 345 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "for me to make a comeback.\p"
# 346 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ah, but enough chatter. Let us,\n"
# 347 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "begin our match, shall we?\p"
# 348 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Please, you shall bear witness to our\n"
# 349 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "artistry.\l"
# 350 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "A grand illusion of water sculpted\l"
# 351 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "by Pokémon and myself!$"
# 352 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 353 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ NOTE: This defeat text actually causes a buffer overflow. It's about 50 bytes too long for
# 354 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ the gDisplayedStringBattle buffer that it's put into, and it stomps all over the gBattleTextBuffs
# 355 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ after, as well as the otherwise unused array after that. One wonders if that's the reason for
# 356 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
@ the existence of that unused array of ints.
# 357 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanDefeat: @ 8225432
# 358 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I see! Your elegance radiates\n"
# 359 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "glitz and glamor.\p"
# 360 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "It's only natural that you won.\n"
# 361 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I shall reward you with this,\n"
# 362 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "the Rain Badge, Please accept it!$"
# 363 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 364 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ReceivedRainBadge: @ 8225598
# 365 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER} received the Rain Badge\n"
# 366 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "from Juan.$"
# 367 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 368 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainRainBadgeTakeThis: @ 82255BE
# 369 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "And, so that you never forget the\n"
# 370 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "battle we shared, take this…$"
# 371 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 372 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_ExplainWaterPulse: @ 82256C1
# 373 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The Technical Machine I handed you\n"
# 374 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "contains Rain Dance.\p"
# 375 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "When used, it will summon a heavy\n"
# 376 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "rain that last 5 turns.\p"
# 377 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "… … … … … …$"
# 378 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 379 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_RegisteredJuan: @ 822574D
# 380 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Registered Gym Leader Juan\n"
# 381 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "in the Pokenav.$"
# 382 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 383 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostBattle: @ 8225778
# 384 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The Trainers who have gathered all\n"
# 385 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "the Gym Badges of Hoenn should make\l"
# 386 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "way to the ultimate destination.\p"
# 387 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "The Pokémon League.\p"
# 388 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Travel to the easternmost reaches\n"
# 389 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of Hoenn, to the island EVER GRANDE.\p"
# 390 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "There, you shall find the Pokémon\n"
# 391 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "League.$"
# 392 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 393 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GoGetFortreeBadge: @ 8225865
# 394 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "There remains but one Badge to\n"
# 395 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "obtain in Hoenn.\p"
# 396 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "If you wish to challenge the Pokémon\n"
# 397 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "League, you must obtain the last\l"
# 398 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Badge from the Gym in Fortree.$"
# 399 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 400 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatue: @ 82258FA
# 401 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Sootopolis City Pokémon Gym$"
# 402 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 403 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_GymStatueCertified: @ 8225916
# 404 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Sootopolis City Pokémon Gym\p"
# 405 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Juan'S Certified Trainers:\n"
# 406 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 407 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 408 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPreRematch: @ 8225950
# 409 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Juan: Ah, this Gym had returned to its\n"
# 410 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "usual state of serenity…\p"
# 411 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But our young typhoon has returned\n"
# 412 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to put us to the test again!\p"
# 413 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Well, my friend, most certainly!\p"
# 414 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I shall be delighted to dance with you\n"
# 415 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "as often as you wish!$"
# 416 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 417 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchDefeat: @ 8225A2E
# 418 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ahahaha, you are the winner!\n"
# 419 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You have defeated me again!$"
# 420 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 421 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanPostRematch: @ 8225A67
# 422 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Juan: If I told you to become my\n"
# 423 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "apprentice, you will refuse, I am sure.\p"
# 424 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I would like to make a gift of my coat\n"
# 425 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to you.\p"
# 426 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But again, you will refuse.\n"
# 427 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I imagine that to be so.\p"
# 428 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "And that, my friend, is a certain sign\n"
# 429 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "of nobility!$"
# 430 "data/maps/SootopolisCity_Gym_1F/scripts.pory"

# 431 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
SootopolisCity_Gym_1F_Text_JuanRematchNeedTwoMons: @ 8225B48
# 432 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Juan: Ah, this Gym had returned to its\n"
# 433 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "usual state of serenity…\p"
# 434 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "But our young typhoon has returned\n"
# 435 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "to put us to the test again!\p"
# 436 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Well, my friend, most certainly!\n"
# 437 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I shall be delighted to dance with you…\p"
# 438 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "Ah, no, no, no.\n"
# 439 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "You have with you but one Pokémon.\p"
# 440 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "I wish that you would return with\n"
# 441 "data/maps/SootopolisCity_Gym_1F/scripts.pory"
	.string "two, perhaps more, Pokémon, please.$"
