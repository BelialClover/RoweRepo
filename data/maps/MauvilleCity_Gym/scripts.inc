# 1 "data/maps/MauvilleCity_Gym/scripts.pory"

# 2 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_MapScripts:: @ 820DD6E
# 3 "data/maps/MauvilleCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MauvilleCity_Gym_OnLoad
# 4 "data/maps/MauvilleCity_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/MauvilleCity_Gym/scripts.pory"

# 6 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_OnLoad: @ 820DD74
# 7 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species
# 8 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_DeactivatePuzzle
# 9 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_MAUVILLE_GYM_STATE
# 10 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 0, MauvilleCity_Gym_EventScript_UpdateBarriers
# 11 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 1, MauvilleCity_Gym_EventScript_Switch1Pressed
# 12 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 2, MauvilleCity_Gym_EventScript_Switch2Pressed
# 13 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 3, MauvilleCity_Gym_EventScript_Switch3Pressed
# 14 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 4, MauvilleCity_Gym_EventScript_Switch4Pressed
# 15 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 16 "data/maps/MauvilleCity_Gym/scripts.pory"

# 17 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_UpdateBarriers:: @ 820DDBA
# 18 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetAltBarriers
# 19 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 20 "data/maps/MauvilleCity_Gym/scripts.pory"

# 21 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetAltBarriers:: @ 820DDC4
# 22 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, 1
# 23 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, 1
# 24 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, 1
# 25 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, 0
# 26 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, 0
# 27 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, 1
# 28 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, 1
# 29 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, 0
# 30 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, 0
# 31 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, 1
# 32 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, 1
# 33 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, 0
# 34 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, 0
# 35 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, 0
# 36 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, 0
# 37 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, 0
# 38 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, 0
# 39 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, 0
# 40 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, 0
# 41 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, 1
# 42 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, 0
# 43 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, 0
# 44 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, 0
# 45 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, 0
# 46 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, 0
# 47 "data/maps/MauvilleCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, 0
# 48 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 49 "data/maps/MauvilleCity_Gym/scripts.pory"

# 50 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1Pressed:: @ 820DEAF
# 51 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 52 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 53 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 54 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 55 "data/maps/MauvilleCity_Gym/scripts.pory"

# 56 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2Pressed:: @ 820DEBD
# 57 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 58 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 59 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 60 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 61 "data/maps/MauvilleCity_Gym/scripts.pory"

# 62 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3Pressed:: @ 820DECB
# 63 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 64 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 65 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 66 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 67 "data/maps/MauvilleCity_Gym/scripts.pory"

# 68 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4Pressed:: @ 820DED9
# 69 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 70 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 71 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_UpdateBarriers
# 72 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 73 "data/maps/MauvilleCity_Gym/scripts.pory"

# 74 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_DeactivatePuzzle:: @ 820DEE7
# 75 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 76 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 77 "data/maps/MauvilleCity_Gym/scripts.pory"

# 78 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson:: @ 820DEEB
# 79 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 80 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 81 "data/maps/MauvilleCity_Gym/scripts.pory"
	call_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_Wattson_PostBattle
# 82 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonIntro, MauvilleCity_Gym_Text_WattsonDefeat, MauvilleCity_Gym_EventScript_WattsonDefeated, NO_MUSIC
# 83 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 84 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 85 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 86 "data/maps/MauvilleCity_Gym/scripts.pory"

# 87 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonDefeated:: @ 820DF2B
# 88 "data/maps/MauvilleCity_Gym/scripts.pory"
	message MauvilleCity_Gym_Text_ReceivedDynamoBadge
# 89 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitmessage
# 90 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 91 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis, MSGBOX_DEFAULT
# 92 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 93 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 94 "data/maps/MauvilleCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 95 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
# 96 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 97 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 98 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymDeactivatePuzzle
# 99 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 100 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 101 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 102 "data/maps/MauvilleCity_Gym/scripts.pory"
	call MauvilleCity_Gym_EventScript_GiveShockWave
# 103 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 104 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 105 "data/maps/MauvilleCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 106 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 107 "data/maps/MauvilleCity_Gym/scripts.pory"
	waitfanfare
# 108 "data/maps/MauvilleCity_Gym/scripts.pory"
	closemessage
# 109 "data/maps/MauvilleCity_Gym/scripts.pory"
	delay 30
# 110 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 111 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 112 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_WATTSON_REMATCH
# 113 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 114 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 115 "data/maps/MauvilleCity_Gym/scripts.pory"
	
# 116 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematch:: @ 820DFDE
# 117 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPreRematch, MSGBOX_DEFAULT
# 118 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_Start_Rematch_1
# 119 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 120 "data/maps/MauvilleCity_Gym/scripts.pory"
	
# 121 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Wattson_PostBattle::
# 122 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_WATTSON_REMATCH, MauvilleCity_Gym_EventScript_WattsonRematch
# 123 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 124 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 125 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 126 "data/maps/MauvilleCity_Gym/scripts.pory"
	
# 127 "data/maps/MauvilleCity_Gym/scripts.pory"
//rematches
# 128 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_WattsonRematchEnd::
# 129 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_DEFAULT
# 130 "data/maps/MauvilleCity_Gym/scripts.pory"
	call Gym_EventScript_Reset_Random_Rematch
# 131 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_WATTSON_REMATCH
# 132 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 133 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 134 "data/maps/MauvilleCity_Gym/scripts.pory"
	
# 135 "data/maps/MauvilleCity_Gym/scripts.pory"
//rematches
# 136 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Start_Rematch_1::
# 137 "data/maps/MauvilleCity_Gym/scripts.pory"
	checkitem ITEM_TM73_THUNDER_WAVE, 1
# 138 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 139 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_Start_Rematch_2
# 140 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
# 141 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 142 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM73_THUNDER_WAVE
# 143 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
# 144 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 145 "data/maps/MauvilleCity_Gym/scripts.pory"
	
# 146 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Start_Rematch_2::
# 147 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM08 MauvilleCity_Gym_EventScript_Start_Rematch_Party_1
# 148 "data/maps/MauvilleCity_Gym/scripts.pory"
	checkitem ITEM_TM34_SHOCK_WAVE, 1
# 149 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 150 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_Start_Rematch_3
# 151 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonRematchDefeat
# 152 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 153 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM34_SHOCK_WAVE
# 154 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
# 155 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 156 "data/maps/MauvilleCity_Gym/scripts.pory"
	
# 157 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Start_Rematch_3::
# 158 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM42 MauvilleCity_Gym_EventScript_Start_Rematch_Party_2
# 159 "data/maps/MauvilleCity_Gym/scripts.pory"
	checkitem ITEM_TM57_CHARGE_BEAM, 1
# 160 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 161 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_Start_Rematch_4
# 162 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonRematchDefeat
# 163 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 164 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM57_CHARGE_BEAM
# 165 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
# 166 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 167 "data/maps/MauvilleCity_Gym/scripts.pory"
	
# 168 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Start_Rematch_4::
# 169 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM40 MauvilleCity_Gym_EventScript_Start_Rematch_Party_3
# 170 "data/maps/MauvilleCity_Gym/scripts.pory"
	checkitem ITEM_TM72_VOLT_SWITCH, 1
# 171 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 172 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_Start_Rematch_5
# 173 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonRematchDefeat
# 174 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 175 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM72_VOLT_SWITCH
# 176 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
# 177 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 178 "data/maps/MauvilleCity_Gym/scripts.pory"
	
# 179 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Start_Rematch_5::
# 180 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04 MauvilleCity_Gym_EventScript_Start_Rematch_Party_4
# 181 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_GOT_MANECTRIC_MEGA_STONE MauvilleCity_Gym_EventScript_Start_Rematch_6
# 182 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonRematchDefeat
# 183 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GetMegaStone, MSGBOX_DEFAULT
# 184 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_MANECTITE
# 185 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_GOT_MANECTRIC_MEGA_STONE
# 186 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
# 187 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 188 "data/maps/MauvilleCity_Gym/scripts.pory"
	
# 189 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Start_Rematch_6::
# 190 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM03 MauvilleCity_Gym_EventScript_Start_Rematch_Party_4
# 191 "data/maps/MauvilleCity_Gym/scripts.pory"
	checkitem ITEM_TM93_WILD_CHARGE, 1
# 192 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 193 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_Start_Rematch_Final
# 194 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_5, MauvilleCity_Gym_Text_WattsonRematchDefeat
# 195 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 196 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM93_WILD_CHARGE
# 197 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
# 198 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 199 "data/maps/MauvilleCity_Gym/scripts.pory"
	
# 200 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Start_Rematch_Final::
# 201 "data/maps/MauvilleCity_Gym/scripts.pory"
	random 5
# 202 "data/maps/MauvilleCity_Gym/scripts.pory"
	switch VAR_RESULT
# 203 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 0, MauvilleCity_Gym_EventScript_Start_Rematch_Party_1
# 204 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 1, MauvilleCity_Gym_EventScript_Start_Rematch_Party_2
# 205 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 2, MauvilleCity_Gym_EventScript_Start_Rematch_Party_3
# 206 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 3, MauvilleCity_Gym_EventScript_Start_Rematch_Party_4
# 207 "data/maps/MauvilleCity_Gym/scripts.pory"
	case 4, MauvilleCity_Gym_EventScript_Start_Rematch_Party_5
# 208 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 209 "data/maps/MauvilleCity_Gym/scripts.pory"
	
# 210 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Start_Rematch_Party_1::
# 211 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
# 212 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, MauvilleCity_Gym_EventScript_WattsonRematchEnd
# 213 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 214 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TIMID_MINT, 3
# 215 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
# 216 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 217 "data/maps/MauvilleCity_Gym/scripts.pory"
	
# 218 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Start_Rematch_Party_2::
# 219 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonRematchDefeat
# 220 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, MauvilleCity_Gym_EventScript_WattsonRematchEnd
# 221 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 222 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_HASTY_MINT, 3
# 223 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
# 224 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 225 "data/maps/MauvilleCity_Gym/scripts.pory"
	
# 226 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Start_Rematch_Party_3::
# 227 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonRematchDefeat
# 228 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, MauvilleCity_Gym_EventScript_WattsonRematchEnd
# 229 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 230 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_JOLLY_MINT, 3
# 231 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
# 232 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 233 "data/maps/MauvilleCity_Gym/scripts.pory"
	
# 234 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Start_Rematch_Party_4::
# 235 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonRematchDefeat
# 236 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, MauvilleCity_Gym_EventScript_WattsonRematchEnd
# 237 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 238 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_NAIVE_MINT, 3
# 239 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
# 240 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 241 "data/maps/MauvilleCity_Gym/scripts.pory"
	
# 242 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Start_Rematch_Party_5::
# 243 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_5, MauvilleCity_Gym_Text_WattsonRematchDefeat
# 244 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, MauvilleCity_Gym_EventScript_WattsonRematchEnd
# 245 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 246 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_MODEST_MINT, 3
# 247 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_WattsonRematchEnd
# 248 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 249 "data/maps/MauvilleCity_Gym/scripts.pory"
	
# 250 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GetTM:
# 251 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson: Please take this\n"
# 252 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Technical Machine.$"
# 253 "data/maps/MauvilleCity_Gym/scripts.pory"

# 254 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GetMegaStone:
# 255 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson: Please take this\n"
# 256 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Mega Stone, with you.\p"
# 257 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Make an Aggron hold it to\n"
# 258 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "unleash its Hidden Potential.$"
# 259 "data/maps/MauvilleCity_Gym/scripts.pory"
	
# 260 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GetReward:
# 261 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson: Please take this\n"
# 262 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Item as a Reward.$"
# 263 "data/maps/MauvilleCity_Gym/scripts.pory"

# 264 "data/maps/MauvilleCity_Gym/scripts.pory"
//rematches end
# 265 "data/maps/MauvilleCity_Gym/scripts.pory"

# 266 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GiveShockWave:: @ 820DFB1
# 267 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox Gym_Text_Takethis2, MSGBOX_DEFAULT
# 268 "data/maps/MauvilleCity_Gym/scripts.pory"
	giveitem ITEM_TM34
# 269 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ExplainShockWave, MSGBOX_DEFAULT
# 270 "data/maps/MauvilleCity_Gym/scripts.pory"
	return
# 271 "data/maps/MauvilleCity_Gym/scripts.pory"

# 272 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_CompletedNewMauville:: @ 820DFD4
# 273 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor, MSGBOX_DEFAULT
# 274 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 275 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 276 "data/maps/MauvilleCity_Gym/scripts.pory"

# 277 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch1:: @ 820DFF9
# 278 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 279 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 280 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_MAUVILLE_GYM_STATE, 1
# 281 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_SwitchDoNothing
# 282 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 1
# 283 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 0
# 284 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 285 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 286 "data/maps/MauvilleCity_Gym/scripts.pory"

# 287 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch2:: @ 820E01E
# 288 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 289 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 290 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_MAUVILLE_GYM_STATE, 2
# 291 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_SwitchDoNothing
# 292 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 2
# 293 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 294 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 295 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 296 "data/maps/MauvilleCity_Gym/scripts.pory"

# 297 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch3:: @ 820E043
# 298 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 299 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 300 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_MAUVILLE_GYM_STATE, 3
# 301 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_SwitchDoNothing
# 302 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 3
# 303 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 304 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 305 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 306 "data/maps/MauvilleCity_Gym/scripts.pory"

# 307 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Switch4:: @ 820E068
# 308 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 309 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_SwitchDoNothing
# 310 "data/maps/MauvilleCity_Gym/scripts.pory"
	compare VAR_MAUVILLE_GYM_STATE, 4
# 311 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_eq MauvilleCity_Gym_EventScript_SwitchDoNothing
# 312 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_MAUVILLE_GYM_STATE, 4
# 313 "data/maps/MauvilleCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 314 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_PressFloorSwitch
# 315 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 316 "data/maps/MauvilleCity_Gym/scripts.pory"

# 317 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_PressFloorSwitch:: @ 820E08D
# 318 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymSetDefaultBarriers
# 319 "data/maps/MauvilleCity_Gym/scripts.pory"
	special MauvilleGymPressSwitch
# 320 "data/maps/MauvilleCity_Gym/scripts.pory"
	special DrawWholeMapView
# 321 "data/maps/MauvilleCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 322 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_ClearBarriersAltState
# 323 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, MauvilleCity_Gym_EventScript_SetBarriersAltState
# 324 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 325 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 326 "data/maps/MauvilleCity_Gym/scripts.pory"

# 327 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SwitchDoNothing:: @ 820E0AD
# 328 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 329 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 330 "data/maps/MauvilleCity_Gym/scripts.pory"

# 331 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_SetBarriersAltState:: @ 820E0AF
# 332 "data/maps/MauvilleCity_Gym/scripts.pory"
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 333 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 334 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 335 "data/maps/MauvilleCity_Gym/scripts.pory"

# 336 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_ClearBarriersAltState:: @ 820E0B4
# 337 "data/maps/MauvilleCity_Gym/scripts.pory"
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
# 338 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 339 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 340 "data/maps/MauvilleCity_Gym/scripts.pory"

# 341 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Kirk:: @ 820E0B9
# 342 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KIRK, MauvilleCity_Gym_Text_KirkIntro, MauvilleCity_Gym_Text_KirkDefeat
# 343 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 344 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 345 "data/maps/MauvilleCity_Gym/scripts.pory"

# 346 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Shawn:: @ 820E0D0
# 347 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SHAWN, MauvilleCity_Gym_Text_ShawnIntro, MauvilleCity_Gym_Text_ShawnDefeat
# 348 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 349 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 350 "data/maps/MauvilleCity_Gym/scripts.pory"

# 351 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Ben:: @ 820E0E7
# 352 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, MauvilleCity_Gym_Text_BenIntro, MauvilleCity_Gym_Text_BenDefeat
# 353 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 354 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 355 "data/maps/MauvilleCity_Gym/scripts.pory"

# 356 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Vivian:: @ 820E0FE
# 357 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIVIAN, MauvilleCity_Gym_Text_VivianIntro, MauvilleCity_Gym_Text_VivianDefeat
# 358 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_VivianPostBattle, MSGBOX_AUTOCLOSE
# 359 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 360 "data/maps/MauvilleCity_Gym/scripts.pory"

# 361 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_Angelo:: @ 820E115
# 362 "data/maps/MauvilleCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ANGELO, MauvilleCity_Gym_Text_AngeloIntro, MauvilleCity_Gym_Text_AngeloDefeat
# 363 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_AngeloPostBattle, MSGBOX_AUTOCLOSE
# 364 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 365 "data/maps/MauvilleCity_Gym/scripts.pory"

# 366 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuide:: @ 820E12C
# 367 "data/maps/MauvilleCity_Gym/scripts.pory"
	lock
# 368 "data/maps/MauvilleCity_Gym/scripts.pory"
	faceplayer
# 369 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuidePostVictory
# 370 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 371 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 372 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 373 "data/maps/MauvilleCity_Gym/scripts.pory"

# 374 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymGuidePostVictory:: @ 820E141
# 375 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 376 "data/maps/MauvilleCity_Gym/scripts.pory"
	release
# 377 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 378 "data/maps/MauvilleCity_Gym/scripts.pory"

# 379 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_LeftGymStatue:: @ 820E14B
# 380 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 381 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 382 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 383 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 384 "data/maps/MauvilleCity_Gym/scripts.pory"

# 385 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_RightGymStatue:: @ 820E15B
# 386 "data/maps/MauvilleCity_Gym/scripts.pory"
	lockall
# 387 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_GymStatueCertified
# 388 "data/maps/MauvilleCity_Gym/scripts.pory"
	goto MauvilleCity_Gym_EventScript_GymStatue
# 389 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 390 "data/maps/MauvilleCity_Gym/scripts.pory"

# 391 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatueCertified:: @ 820E16B
# 392 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 393 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 394 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 395 "data/maps/MauvilleCity_Gym/scripts.pory"

# 396 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_EventScript_GymStatue:: @ 820E175
# 397 "data/maps/MauvilleCity_Gym/scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 398 "data/maps/MauvilleCity_Gym/scripts.pory"
	releaseall
# 399 "data/maps/MauvilleCity_Gym/scripts.pory"
	end
# 400 "data/maps/MauvilleCity_Gym/scripts.pory"

# 401 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuideAdvice: @ 820E17F
# 402 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, how's it going, Champion-\n"
# 403 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 404 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson, the Leader of Mauville\n"
# 405 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Gym, uses Electric-type Pokémon.\p"
# 406 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "If you challenge him with Water-type\n"
# 407 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pokémon, he'll zap them! Bzzt!\p"
# 408 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "And, he's put in switch-controlled\n"
# 409 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "doors all over his Gym! Eccentric!\p"
# 410 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hey, go for it!$"
# 411 "data/maps/MauvilleCity_Gym/scripts.pory"

# 412 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymGuidePostVictory: @ 820E283
# 413 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Whoa, you're electrifying!\n"
# 414 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've powered the door open!$"
# 415 "data/maps/MauvilleCity_Gym/scripts.pory"

# 416 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkIntro: @ 820E2BC
# 417 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My electric soul, it'll shatter your\n"
# 418 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "dreams whole, whoa-yeahah!$"
# 419 "data/maps/MauvilleCity_Gym/scripts.pory"

# 420 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkDefeat: @ 820E2FC
# 421 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That was plugged in, amped up,\n"
# 422 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "over-driven electric, man!$"
# 423 "data/maps/MauvilleCity_Gym/scripts.pory"

# 424 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_KirkPostBattle: @ 820E336
# 425 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pokémon and rock, it's all about heart,\n"
# 426 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "whoa-yeah!$"
# 427 "data/maps/MauvilleCity_Gym/scripts.pory"

# 428 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnIntro: @ 820E369
# 429 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I trained under Wattson!\n"
# 430 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "There ain't no way I'll lose easily!$"
# 431 "data/maps/MauvilleCity_Gym/scripts.pory"

# 432 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnDefeat: @ 820E3A7
# 433 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Unplugged and turned off…$"
# 434 "data/maps/MauvilleCity_Gym/scripts.pory"

# 435 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ShawnPostBattle: @ 820E3C1
# 436 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson, our Gym Leader, has been\n"
# 437 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "around for a long, long time.\p"
# 438 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was battling even before your\n"
# 439 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "daddy was born, that tough coot.$"
# 440 "data/maps/MauvilleCity_Gym/scripts.pory"

# 441 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenIntro: @ 820E443
# 442 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "This Gym's got puzzles!\n"
# 443 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Isn't it fun?$"
# 444 "data/maps/MauvilleCity_Gym/scripts.pory"

# 445 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenDefeat: @ 820E469
# 446 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's no fun to lose…$"
# 447 "data/maps/MauvilleCity_Gym/scripts.pory"

# 448 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_BenPostBattle: @ 820E47E
# 449 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson says he likes setting up\n"
# 450 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "little traps with switches.$"
# 451 "data/maps/MauvilleCity_Gym/scripts.pory"

# 452 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianIntro: @ 820E4BB
# 453 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "With my charm and my Pokémon's moves,\n"
# 454 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you'll be shocked!$"
# 455 "data/maps/MauvilleCity_Gym/scripts.pory"

# 456 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianDefeat: @ 820E4F4
# 457 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'm shocked by your power!$"
# 458 "data/maps/MauvilleCity_Gym/scripts.pory"

# 459 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_VivianPostBattle: @ 820E50F
# 460 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I've heard that Mauville was founded\n"
# 461 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "by Wattson.\p"
# 462 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He was a Trainer long before we\n"
# 463 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "became Trainers.\l"
# 464 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "He must know all sorts of things!$"
# 465 "data/maps/MauvilleCity_Gym/scripts.pory"

# 466 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloIntro: @ 820E593
# 467 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I love shiny things!$"
# 468 "data/maps/MauvilleCity_Gym/scripts.pory"

# 469 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloDefeat: @ 820E5A8
# 470 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oh…\n"
# 471 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "My eyes are frazzled…$"
# 472 "data/maps/MauvilleCity_Gym/scripts.pory"

# 473 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_AngeloPostBattle: @ 820E5C2
# 474 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Mauville Gym's Wattson has a shiny\n"
# 475 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "forehead. It makes me happy!$"
# 476 "data/maps/MauvilleCity_Gym/scripts.pory"

# 477 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonDefeat: @ 820E734
# 478 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 479 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Fine, I lost!\p"
# 480 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You ended up giving me a thrill!\n"
# 481 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this Badge!$"
# 482 "data/maps/MauvilleCity_Gym/scripts.pory"

# 483 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedDynamoBadge: @ 820E77F
# 484 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER} received the Dynamo Badge\n"
# 485 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "from Wattson.$"
# 486 "data/maps/MauvilleCity_Gym/scripts.pory"

# 487 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainDynamoBadgeTakeThis: @ 820E7AA
# 488 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Hmm…\n"
# 489 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You should take this, too!$"
# 490 "data/maps/MauvilleCity_Gym/scripts.pory"

# 491 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ExplainShockWave: @ 820E844
# 492 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "That TM34 there contains Shock Wave.\p"
# 493 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "It's a trustworthy move that never\n"
# 494 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "misses! You can count on it!\p"
# 495 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 496 "data/maps/MauvilleCity_Gym/scripts.pory"

# 497 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_RegisteredWattson: @ 820E8B5
# 498 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Registered Gym Leader Wattson\n"
# 499 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "in the Pokénav.$"
# 500 "data/maps/MauvilleCity_Gym/scripts.pory"

# 501 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostBattle: @ 820E8E3
# 502 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I swell with optimism, seeing a promising\n"
# 503 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "young Trainer like you!$"
# 504 "data/maps/MauvilleCity_Gym/scripts.pory"

# 505 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonGoForthAndEndeavor: @ 820E925
# 506 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahah!\n"
# 507 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Go forth and endeavor, youngster!$"
# 508 "data/maps/MauvilleCity_Gym/scripts.pory"

# 509 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatue: @ 820E952
# 510 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Mauville City Pokémon Gym$"
# 511 "data/maps/MauvilleCity_Gym/scripts.pory"

# 512 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_GymStatueCertified: @ 820E96C
# 513 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Mauville City Pokémon Gym\p"
# 514 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson'S Certified Trainers:\n"
# 515 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 516 "data/maps/MauvilleCity_Gym/scripts.pory"

# 517 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPreRematch: @ 820E9A7
# 518 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson: Ah-ha! Here at last!\n"
# 519 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 520 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my Pokémon!\p"
# 521 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 522 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I'll make sparks fly from you!\n"
# 523 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Don't say I didn't warn you!$"
# 524 "data/maps/MauvilleCity_Gym/scripts.pory"

# 525 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchDefeat: @ 820EA42
# 526 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oof…\n"
# 527 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Our batteries ran dry…$"
# 528 "data/maps/MauvilleCity_Gym/scripts.pory"

# 529 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonPostRematch: @ 820EA5E
# 530 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson: We'll have to recharge our\n"
# 531 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "batteries again.\p"
# 532 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "When we're fully charged up, we'll\n"
# 533 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "gladly accept your challenge.\p"
# 534 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "So, come back again sometime,\n"
# 535 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "won't you?$"
# 536 "data/maps/MauvilleCity_Gym/scripts.pory"

# 537 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_WattsonRematchNeedTwoMons: @ 820EAFD
# 538 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wattson: Ah-ha! Here at last!\n"
# 539 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "I know what you want.\l"
# 540 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You want to battle my Pokémon!\p"
# 541 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Wahahahaha!\p"
# 542 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Oops! Wait!\n"
# 543 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "You've only one Pokémon with you!\p"
# 544 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Come see me with two or more\n"
# 545 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Pokémon, all right?$"
# 546 "data/maps/MauvilleCity_Gym/scripts.pory"

# 547 "data/maps/MauvilleCity_Gym/scripts.pory"
MauvilleCity_Gym_Text_ReceivedMegaStone:
# 548 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "Take this Mega Stone with\n"
# 549 "data/maps/MauvilleCity_Gym/scripts.pory"
	.string "you.$"
