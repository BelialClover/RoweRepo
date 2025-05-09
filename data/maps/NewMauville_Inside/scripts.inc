# 1 "data/maps/NewMauville_Inside/scripts.pory"

# 2 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_MapScripts:: @ 82373D7
# 3 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NewMauville_Inside_OnResume
# 4 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMauville_Inside_OnTransition
# 5 "data/maps/NewMauville_Inside/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMauville_Inside_OnLoad
# 6 "data/maps/NewMauville_Inside/scripts.pory"
	.byte 0
# 7 "data/maps/NewMauville_Inside/scripts.pory"

# 8 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnResume: @ 82373E7
# 9 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_TEMP_1, 1
# 10 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_eq NewMauville_Inside_EventScript_SetBarrierStateBlueButton
# 11 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_TEMP_2, 1
# 12 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_eq NewMauville_Inside_EventScript_SetBarrierStateGreenButton
# 13 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, NewMauville_Inside_EventScript_TryRemoveVoltorb
# 14 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 15 "data/maps/NewMauville_Inside/scripts.pory"

# 16 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_TryRemoveVoltorb:: @ 8237407
# 17 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 18 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 19 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_ne Common_EventScript_NopReturn
# 20 "data/maps/NewMauville_Inside/scripts.pory"
	removeobject VAR_LAST_TALKED
# 21 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 22 "data/maps/NewMauville_Inside/scripts.pory"

# 23 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnTransition: @ 823741B
# 24 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 0
# 25 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 0
# 26 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_unset FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE, NewMauville_Inside_EventScript_ShowVoltorb1
# 27 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_unset FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE, NewMauville_Inside_EventScript_ShowVoltorb2
# 28 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_unset FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE, NewMauville_Inside_EventScript_ShowVoltorb3
# 29 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 30 "data/maps/NewMauville_Inside/scripts.pory"

# 31 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_ShowVoltorb1:: @ 8237441
# 32 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1
# 33 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 34 "data/maps/NewMauville_Inside/scripts.pory"

# 35 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_ShowVoltorb2:: @ 8237445
# 36 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2
# 37 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 38 "data/maps/NewMauville_Inside/scripts.pory"

# 39 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_ShowVoltorb3:: @ 8237449
# 40 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3
# 41 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 42 "data/maps/NewMauville_Inside/scripts.pory"

# 43 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_OnLoad: @ 823744D
# 44 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DISABLE_PORTALS
# 45 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_set   FLAG_SYS_GAME_CLEAR, NewMauville_Inside_EventScript_EnablePortal
# 46 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_set   FLAG_SYS_GAME_CLEAR, NewMauville_Inside_EventScript_SetBarrierStateBlueButton
# 47 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_set FLAG_NEW_MAUVILLE_TURNED_OFF_GENERATOR, NewMauville_Inside_EventScript_SetGeneratorOffMetatiles
# 48 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 49 "data/maps/NewMauville_Inside/scripts.pory"
	
# 50 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_EnablePortal::
# 51 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_DISABLE_PORTALS
# 52 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 53 "data/maps/NewMauville_Inside/scripts.pory"

# 54 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_BlueButton:: @ 8237459
# 55 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 56 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 1
# 57 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 0
# 58 "data/maps/NewMauville_Inside/scripts.pory"
	playse SE_PIN
# 59 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateBlueButton
# 60 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 61 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 62 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 63 "data/maps/NewMauville_Inside/scripts.pory"

# 64 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_GreenButton:: @ 8237471
# 65 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 66 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_1, 0
# 67 "data/maps/NewMauville_Inside/scripts.pory"
	setvar VAR_TEMP_2, 1
# 68 "data/maps/NewMauville_Inside/scripts.pory"
	playse SE_PIN
# 69 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetBarrierStateGreenButton
# 70 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 71 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 72 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 73 "data/maps/NewMauville_Inside/scripts.pory"

# 74 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_SetBarrierStateBlueButton:: @ 8237489
# 75 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 34, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 76 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 35, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 77 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 36, METATILE_BikeShop_Floor_Shadow_Top, 0
# 78 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 37, METATILE_BikeShop_Wall_Edge_Top, 0
# 79 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 16, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 80 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 17, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 81 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 18, METATILE_BikeShop_Floor_Shadow_Top, 0
# 82 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 19, METATILE_BikeShop_Wall_Edge_Top, 0
# 83 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 0, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 84 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 1, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 85 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 2, METATILE_BikeShop_Floor_Shadow_Top, 0
# 86 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 3, METATILE_BikeShop_Wall_Edge_Top, 0
# 87 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 33, METATILE_BikeShop_Barrier_Green_Top, 1
# 88 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 34, METATILE_BikeShop_Barrier_Green_TopMid, 1
# 89 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 35, METATILE_BikeShop_Barrier_Green_BottomMid, 1
# 90 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 36, METATILE_BikeShop_Barrier_Green_Bottom, 1
# 91 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 22, METATILE_BikeShop_Barrier_Green_Top, 1
# 92 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 23, METATILE_BikeShop_Barrier_Green_TopMid, 1
# 93 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 24, METATILE_BikeShop_Barrier_Green_BottomMid, 1
# 94 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 25, METATILE_BikeShop_Barrier_Green_Bottom, 1
# 95 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 24, METATILE_BikeShop_Barrier_Green_Top, 1
# 96 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 25, METATILE_BikeShop_Barrier_Green_TopMid, 1
# 97 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 26, METATILE_BikeShop_Barrier_Green_BottomMid, 1
# 98 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 27, METATILE_BikeShop_Barrier_Green_Bottom, 1
# 99 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 2, METATILE_BikeShop_Barrier_Green_Top, 1
# 100 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 3, METATILE_BikeShop_Barrier_Green_TopMid, 1
# 101 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 4, METATILE_BikeShop_Barrier_Green_BottomMid, 1
# 102 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 5, METATILE_BikeShop_Barrier_Green_Bottom, 1
# 103 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 6, 11, METATILE_BikeShop_Button_Pressed, 0
# 104 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 13, 10, METATILE_BikeShop_Button_Pressed, 0
# 105 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 16, 22, METATILE_BikeShop_Button_Pressed, 0
# 106 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 4, 26, METATILE_BikeShop_Button_Pressed, 0
# 107 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 30, 38, METATILE_BikeShop_Button_Pressed, 0
# 108 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 2, 11, METATILE_BikeShop_Button_Green, 0
# 109 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 17, 10, METATILE_BikeShop_Button_Green, 0
# 110 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 25, 18, METATILE_BikeShop_Button_Green, 0
# 111 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 18, 36, METATILE_BikeShop_Button_Green, 0
# 112 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 34, 6, METATILE_BikeShop_Button_Green, 0
# 113 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 114 "data/maps/NewMauville_Inside/scripts.pory"

# 115 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_SetBarrierStateGreenButton:: @ 82375D7
# 116 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 34, METATILE_BikeShop_Barrier_Blue_Top, 1
# 117 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 35, METATILE_BikeShop_Barrier_Blue_TopMid, 1
# 118 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 36, METATILE_BikeShop_Barrier_Blue_BottomMid, 1
# 119 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 23, 37, METATILE_BikeShop_Barrier_Blue_Bottom, 1
# 120 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 16, METATILE_BikeShop_Barrier_Blue_Top, 1
# 121 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 17, METATILE_BikeShop_Barrier_Blue_TopMid, 1
# 122 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 18, METATILE_BikeShop_Barrier_Blue_BottomMid, 1
# 123 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 19, METATILE_BikeShop_Barrier_Blue_Bottom, 1
# 124 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 0, METATILE_BikeShop_Barrier_Blue_Top, 1
# 125 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 1, METATILE_BikeShop_Barrier_Blue_TopMid, 1
# 126 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 2, METATILE_BikeShop_Barrier_Blue_BottomMid, 1
# 127 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 3, METATILE_BikeShop_Barrier_Blue_Bottom, 1
# 128 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 33, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 129 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 34, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 130 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 35, METATILE_BikeShop_Floor_Shadow_Top, 0
# 131 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 37, 36, METATILE_BikeShop_Wall_Edge_Top, 0
# 132 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 22, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 133 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 23, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 134 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 24, METATILE_BikeShop_Floor_Shadow_Top, 0
# 135 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 28, 25, METATILE_BikeShop_Wall_Edge_Top, 0
# 136 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 24, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 137 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 25, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 138 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 26, METATILE_BikeShop_Floor_Shadow_Top, 0
# 139 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 10, 27, METATILE_BikeShop_Wall_Edge_Top, 0
# 140 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 2, METATILE_BikeShop_Barrier_Hidden_Top, 1
# 141 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 3, METATILE_BikeShop_Barrier_Hidden_Bottom, 1
# 142 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 4, METATILE_BikeShop_Floor_Shadow_Top, 0
# 143 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 21, 5, METATILE_BikeShop_Wall_Edge_Top, 0
# 144 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 2, 11, METATILE_BikeShop_Button_Pressed, 0
# 145 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 17, 10, METATILE_BikeShop_Button_Pressed, 0
# 146 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 25, 18, METATILE_BikeShop_Button_Pressed, 0
# 147 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 18, 36, METATILE_BikeShop_Button_Pressed, 0
# 148 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 6, 11, METATILE_BikeShop_Button_Blue, 0
# 149 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 13, 10, METATILE_BikeShop_Button_Blue, 0
# 150 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 16, 22, METATILE_BikeShop_Button_Blue, 0
# 151 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 4, 26, METATILE_BikeShop_Button_Blue, 0
# 152 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 30, 38, METATILE_BikeShop_Button_Blue, 0
# 153 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 34, 6, METATILE_BikeShop_Button_Pressed, 0
# 154 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 155 "data/maps/NewMauville_Inside/scripts.pory"

# 156 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_RedButton:: @ 8237725
# 157 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_unset FLAG_NEW_MAUVILLE_TURNED_OFF_GENERATOR, NewMauville_Inside_EventScript_RedButton_Unpressed
# 158 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 159 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 160 "data/maps/NewMauville_Inside/scripts.pory"
	
# 161 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_RedButton_Unpressed:
# 162 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 163 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_SteppedOnSwitchGeneratorStopped, MSGBOX_DEFAULT
# 164 "data/maps/NewMauville_Inside/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 165 "data/maps/NewMauville_Inside/scripts.pory"
	waitmovement 0
# 166 "data/maps/NewMauville_Inside/scripts.pory"
	playse SE_PIN
# 167 "data/maps/NewMauville_Inside/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 168 "data/maps/NewMauville_Inside/scripts.pory"
	waitmovement 0
# 169 "data/maps/NewMauville_Inside/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_Delay48
# 170 "data/maps/NewMauville_Inside/scripts.pory"
	waitmovement 0
# 171 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_DoRotomBattle
# 172 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 173 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 174 "data/maps/NewMauville_Inside/scripts.pory"
	
# 175 "data/maps/NewMauville_Inside/scripts.pory"
	
# 176 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_DoRotomBattle:
# 177 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_SteppedOnSwitchRotomBattle, MSGBOX_DEFAULT
# 178 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_ROTOM, 1, ITEM_NONE
# 179 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_ROTOM, 2
# 180 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 181 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 182 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 183 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 184 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 185 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 186 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_DefeatedRotom
# 187 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 188 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_DefeatedRotom
# 189 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 190 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_DefeatedRotom
# 191 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 192 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_DefeatedRotom
# 193 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_NEW_MAUVILLE_TURNED_OFF_GENERATOR
# 194 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_GeneratorOff
# 195 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 196 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 197 "data/maps/NewMauville_Inside/scripts.pory"
	
# 198 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_DefeatedRotom:
# 199 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_NEW_MAUVILLE_TURNED_OFF_GENERATOR
# 200 "data/maps/NewMauville_Inside/scripts.pory"
	call NewMauville_Inside_EventScript_SetGeneratorOffMetatiles
# 201 "data/maps/NewMauville_Inside/scripts.pory"
	goto NewMauville_Inside_EventScript_GeneratorOff
# 202 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 203 "data/maps/NewMauville_Inside/scripts.pory"

# 204 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_SetGeneratorOffMetatiles:: @ 823773A
# 205 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 6, METATILE_BikeShop_Button_Pressed, 0
# 206 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 32, 2, METATILE_BikeShop_Generator_Off_Tile0, 1
# 207 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 2, METATILE_BikeShop_Generator_Off_Tile1, 1
# 208 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 34, 2, METATILE_BikeShop_Generator_Off_Tile2, 1
# 209 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 35, 2, METATILE_BikeShop_Generator_Off_Tile3, 1
# 210 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 32, 3, METATILE_BikeShop_Generator_Off_Tile4, 1
# 211 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 33, 3, METATILE_BikeShop_Generator_Off_Tile5, 1
# 212 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 34, 3, METATILE_BikeShop_Generator_Off_Tile6, 1
# 213 "data/maps/NewMauville_Inside/scripts.pory"
	setmetatile 35, 3, METATILE_BikeShop_Generator_Off_Tile7, 1
# 214 "data/maps/NewMauville_Inside/scripts.pory"
	special DrawWholeMapView
# 215 "data/maps/NewMauville_Inside/scripts.pory"
	return
# 216 "data/maps/NewMauville_Inside/scripts.pory"

# 217 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Generator:: @ 823778F
# 218 "data/maps/NewMauville_Inside/scripts.pory"
	lockall
# 219 "data/maps/NewMauville_Inside/scripts.pory"
	call_if_set FLAG_NEW_MAUVILLE_TURNED_OFF_GENERATOR, NewMauville_Inside_EventScript_GeneratorOff
# 220 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_GeneratorRadiatingHeat, MSGBOX_DEFAULT
# 221 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 222 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 223 "data/maps/NewMauville_Inside/scripts.pory"

# 224 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_GeneratorOff:: @ 82377A5
# 225 "data/maps/NewMauville_Inside/scripts.pory"
	msgbox NewMauville_Inside_Text_GeneratorQuietedDown, MSGBOX_DEFAULT
# 226 "data/maps/NewMauville_Inside/scripts.pory"
	releaseall
# 227 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 228 "data/maps/NewMauville_Inside/scripts.pory"

# 229 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb1:: @ 82377AF
# 230 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 231 "data/maps/NewMauville_Inside/scripts.pory"
	faceplayer
# 232 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_VOLTORB, 1, ITEM_NONE
# 233 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 234 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_VOLTORB, 2
# 235 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 236 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 237 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 238 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 239 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 240 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 241 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 242 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_DefeatedVoltorb1
# 243 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 244 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_DefeatedVoltorb1
# 245 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 246 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_DefeatedVoltorb1
# 247 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
# 248 "data/maps/NewMauville_Inside/scripts.pory"
	release
# 249 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 250 "data/maps/NewMauville_Inside/scripts.pory"

# 251 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_DefeatedVoltorb1:: @ 82377F3
# 252 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE
# 253 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 254 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 255 "data/maps/NewMauville_Inside/scripts.pory"

# 256 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb2:: @ 82377FC
# 257 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 258 "data/maps/NewMauville_Inside/scripts.pory"
	faceplayer
# 259 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_VOLTORB, 1, ITEM_NONE
# 260 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 261 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_VOLTORB, 2
# 262 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 263 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 264 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 265 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 266 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 267 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 268 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 269 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_DefeatedVoltorb2
# 270 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 271 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_DefeatedVoltorb2
# 272 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 273 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_DefeatedVoltorb2
# 274 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
# 275 "data/maps/NewMauville_Inside/scripts.pory"
	release
# 276 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 277 "data/maps/NewMauville_Inside/scripts.pory"

# 278 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_DefeatedVoltorb2:: @ 8237840
# 279 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE
# 280 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 281 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 282 "data/maps/NewMauville_Inside/scripts.pory"

# 283 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_Voltorb3:: @ 8237849
# 284 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 285 "data/maps/NewMauville_Inside/scripts.pory"
	faceplayer
# 286 "data/maps/NewMauville_Inside/scripts.pory"
	setwildbattle SPECIES_VOLTORB, 1, ITEM_NONE
# 287 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 288 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_VOLTORB, 2
# 289 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 290 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 291 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 292 "data/maps/NewMauville_Inside/scripts.pory"
	dowildbattle
# 293 "data/maps/NewMauville_Inside/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 294 "data/maps/NewMauville_Inside/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 295 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 296 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_DefeatedVoltorb3
# 297 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 298 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_DefeatedVoltorb3
# 299 "data/maps/NewMauville_Inside/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 300 "data/maps/NewMauville_Inside/scripts.pory"
	goto_if_eq NewMauville_Inside_EventScript_DefeatedVoltorb3
# 301 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
# 302 "data/maps/NewMauville_Inside/scripts.pory"
	release
# 303 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 304 "data/maps/NewMauville_Inside/scripts.pory"

# 305 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_EventScript_DefeatedVoltorb3:: @ 823788D
# 306 "data/maps/NewMauville_Inside/scripts.pory"
	setflag FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE
# 307 "data/maps/NewMauville_Inside/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 308 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 309 "data/maps/NewMauville_Inside/scripts.pory"

# 310 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_EventScript_WarptoPowerPlant::
# 311 "data/maps/NewMauville_Inside/scripts.pory"
	lock
# 312 "data/maps/NewMauville_Inside/scripts.pory"
	waitse
# 313 "data/maps/NewMauville_Inside/scripts.pory"
	playmoncry SPECIES_HOOPA, 2
# 314 "data/maps/NewMauville_Inside/scripts.pory"
	delay 40
# 315 "data/maps/NewMauville_Inside/scripts.pory"
	waitmoncry
# 316 "data/maps/NewMauville_Inside/scripts.pory"
	warp MAP_POWER_PLANT, 6, 5, 37 //Z , X , Y
# 317 "data/maps/NewMauville_Inside/scripts.pory"
	release
# 318 "data/maps/NewMauville_Inside/scripts.pory"
	end
# 319 "data/maps/NewMauville_Inside/scripts.pory"

# 320 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_GeneratorRadiatingHeat: @ 8237896
# 321 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator is radiating heat that\n"
# 322 "data/maps/NewMauville_Inside/scripts.pory"
	.string "can be felt even at a distance.\p"
# 323 "data/maps/NewMauville_Inside/scripts.pory"
	.string "It looks like it should be turned off\n"
# 324 "data/maps/NewMauville_Inside/scripts.pory"
	.string "as soon as possible.$"
# 325 "data/maps/NewMauville_Inside/scripts.pory"

# 326 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_GeneratorQuietedDown: @ 8237916
# 327 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The generator quieted down.$"
# 328 "data/maps/NewMauville_Inside/scripts.pory"

# 329 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_SteppedOnSwitchGeneratorStopped: @ 8237932
# 330 "data/maps/NewMauville_Inside/scripts.pory"
	.string "{PLAYER} stepped on the switch.\p"
# 331 "data/maps/NewMauville_Inside/scripts.pory"
	.string "Click…\p"
# 332 "data/maps/NewMauville_Inside/scripts.pory"
	.string "… … … … … … … …\n"
# 333 "data/maps/NewMauville_Inside/scripts.pory"
	.string "… … … … … … … ….$"
# 334 "data/maps/NewMauville_Inside/scripts.pory"
	
# 335 "data/maps/NewMauville_Inside/scripts.pory"
NewMauville_Inside_Text_SteppedOnSwitchRotomBattle: @ 8237896
# 336 "data/maps/NewMauville_Inside/scripts.pory"
	.string "A Pokémon came out of the generator!.\p"
# 337 "data/maps/NewMauville_Inside/scripts.pory"
	.string "The wild pokemon Attacked!.$"
