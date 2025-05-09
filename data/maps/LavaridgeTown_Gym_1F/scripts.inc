# 1 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 2 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_COLE, 2
# 3 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_GERALD, 3
# 4 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_AXLE, 4
# 5 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
.set LOCALID_DANIELLE, 5
# 6 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 7 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_MapScripts:: @ 81FE6F4
# 8 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
# 9 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.byte 0
# 10 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 11 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_OnTransition: @ 81FE6FA
# 12 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 13 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_CheckHideTrainers
# 14 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 15 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 16 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
@ Unclear where/if these temp vars are getting checked
# 17 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars:: @ 81FE705
# 18 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 0
# 19 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 0
# 20 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 0
# 21 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 0
# 22 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_F, 0
# 23 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar
# 24 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_B, 1
# 25 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar:: @ 81FE72C
# 26 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar
# 27 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_C, 1
# 28 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar:: @ 81FE73A
# 29 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar
# 30 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_D, 1
# 31 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar:: @ 81FE748
# 32 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars
# 33 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_TEMP_E, 1
# 34 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars:: @ 81FE756
# 35 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 36 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 37 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckHideTrainers:: @ 81FE757
# 38 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_CheckHideGerald
# 39 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_HIDDEN
# 40 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckHideGerald:: @ 81FE764
# 41 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_CheckHideAxle
# 42 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_HIDDEN
# 43 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckHideAxle:: @ 81FE771
# 44 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_CheckHideDanielle
# 45 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_HIDDEN
# 46 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_CheckHideDanielle:: @ 81FE77E
# 47 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndCheckHideTrainers
# 48 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_HIDDEN
# 49 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_EndCheckHideTrainers:: @ 81FE78B
# 50 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 51 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 52 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Flannery:: @ 81FE78C
# 53 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 54 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 55 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_EventScript_Flannery_PostBattle
# 56 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated, NO_MUSIC
# 57 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
# 58 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 59 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 60 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 61 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated:: @ 81FE7C1
# 62 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
# 63 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitmessage
# 64 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 65 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis, MSGBOX_DEFAULT
# 66 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
# 67 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 68 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_BADGE04_GET
# 69 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 4
# 70 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 71 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 72 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_GiveOverheat
# 73 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 74 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 75 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 76 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_RegisteredFlannery, MSGBOX_DEFAULT
# 77 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	waitfanfare
# 78 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	closemessage
# 79 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	delay 30
# 80 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
# 81 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 82 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_FLANNERY_REMATCH
# 83 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 84 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 85 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 86 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_EventScript_Flannery_PostBattle::
# 87 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_FLANNERY_REMATCH, LavaridgeTown_Gym_1F_EventScript_FlanneryRematch
# 88 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
# 89 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 90 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 91 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 92 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryRematch:: @ 81FC89C
# 93 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, MSGBOX_DEFAULT
# 94 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_Start_Rematch_1
# 95 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 96 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 97 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
//rematches
# 98 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd::
# 99 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
# 100 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call Gym_EventScript_Reset_Random_Rematch
# 101 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_FLANNERY_REMATCH
# 102 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 103 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 104 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_1::
# 105 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checkitem ITEM_TM61_WILL_O_WISP, 1
# 106 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 107 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Start_Rematch_2
# 108 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
# 109 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GetTM, MSGBOX_DEFAULT
# 110 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM61_WILL_O_WISP
# 111 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
# 112 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 113 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 114 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_2::
# 115 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM08 LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_1
# 116 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checkitem ITEM_TM120_MYSTICAL_FIRE, 1
# 117 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 118 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Start_Rematch_3
# 119 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
# 120 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GetTM, MSGBOX_DEFAULT
# 121 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM120_MYSTICAL_FIRE
# 122 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
# 123 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 124 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 125 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_3::
# 126 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM42 LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_2
# 127 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checkitem ITEM_TM111_HEAT_CRASH, 1
# 128 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 129 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Start_Rematch_4
# 130 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
# 131 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GetTM, MSGBOX_DEFAULT
# 132 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM111_HEAT_CRASH
# 133 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
# 134 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 135 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 136 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_4::
# 137 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM40 LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_3
# 138 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checkitem ITEM_TM117_BLAZE_KICK, 1
# 139 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 140 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Start_Rematch_5
# 141 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
# 142 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GetTM, MSGBOX_DEFAULT
# 143 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM117_BLAZE_KICK
# 144 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
# 145 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 146 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 147 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_5::
# 148 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04 LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_4
# 149 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_GOT_HOUNDOOM_MEGA_STONE LavaridgeTown_Gym_1F_EventScript_Start_Rematch_6
# 150 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
# 151 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GetMegaStone, MSGBOX_DEFAULT
# 152 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_HOUNDOOMINITE
# 153 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	setflag FLAG_GOT_HOUNDOOM_MEGA_STONE
# 154 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
# 155 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 156 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 157 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_6::
# 158 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM03 LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_4
# 159 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	checkitem ITEM_TM50_OVERHEAT, 1
# 160 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	compare VAR_RESULT, TRUE
# 161 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Final
# 162 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_5, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
# 163 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GetTM, MSGBOX_DEFAULT
# 164 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM50_OVERHEAT
# 165 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
# 166 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 167 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 168 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Final::
# 169 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	random 5
# 170 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	switch VAR_RESULT
# 171 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	case 0, LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_1
# 172 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	case 1, LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_2
# 173 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	case 2, LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_3
# 174 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	case 3, LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_4
# 175 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	case 4, LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_5
# 176 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 177 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 178 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_1::
# 179 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
# 180 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
# 181 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GetReward, MSGBOX_DEFAULT
# 182 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TIMID_MINT, 3
# 183 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
# 184 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 185 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 186 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_2::
# 187 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
# 188 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
# 189 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GetReward, MSGBOX_DEFAULT
# 190 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_MODEST_MINT, 3
# 191 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
# 192 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 193 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 194 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_3::
# 195 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
# 196 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
# 197 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GetReward, MSGBOX_DEFAULT
# 198 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_MILD_MINT, 3
# 199 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
# 200 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 201 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 202 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_4::
# 203 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
# 204 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
# 205 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GetReward, MSGBOX_DEFAULT
# 206 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_RASH_MINT, 3
# 207 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
# 208 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 209 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 210 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Start_Rematch_Party_5::
# 211 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_5, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
# 212 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
# 213 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GetReward, MSGBOX_DEFAULT
# 214 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_QUIET_MINT, 3
# 215 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_FlanneryRematchEnd
# 216 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 217 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 218 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GetTM:
# 219 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Flannery: Please take this\n"
# 220 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Technical Machine.$"
# 221 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 222 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GetMegaStone:
# 223 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Flannery: Please take this\n"
# 224 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Mega Stone, with you.\p"
# 225 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Make an Aggron hold it to\n"
# 226 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "unleash its Hidden Potential.$"
# 227 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	
# 228 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GetReward:
# 229 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Flannery: Please take this\n"
# 230 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Item as a Reward.$"
# 231 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 232 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
//rematches end
# 233 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 234 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat2:: @ 81FE81D
# 235 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM50
# 236 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 237 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 238 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 239 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 240 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 241 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 242 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GiveOverheat:: @ 81FE841
# 243 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox Gym_Text_Takethis2, MSGBOX_DEFAULT
# 244 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	giveitem ITEM_TM50
# 245 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
# 246 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	return
# 247 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 248 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Cole:: @ 81FE87F
# 249 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_COLE, LOCALID_COLE, LavaridgeTown_Gym_1F_Text_ColeIntro, LavaridgeTown_Gym_1F_Text_ColeDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 250 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle MSGBOX_AUTOCLOSE
# 251 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 252 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 253 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_EventScript_CheckTrainerScript:: @ 81FE89A
# 254 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
# 255 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 256 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	special ShouldTryGetTrainerScript
# 257 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	compare VAR_RESULT, 1
# 258 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_eq EventScript_GotoTrainerScript
# 259 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 260 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 261 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Axle:: @ 81FE8AF
# 262 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_AXLE, LOCALID_AXLE, LavaridgeTown_Gym_1F_Text_AxleIntro, LavaridgeTown_Gym_1F_Text_AxleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 263 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
# 264 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 265 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 266 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Keegan:: @ 81FE8CA
# 267 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_KEEGAN, LOCALID_KEEGAN, LavaridgeTown_Gym_B1F_Text_KeeganIntro, LavaridgeTown_Gym_B1F_Text_KeeganDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 268 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
# 269 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 270 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 271 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Danielle:: @ 81FE8E5
# 272 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_DANIELLE, LOCALID_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 273 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
# 274 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 275 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 276 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_Gerald:: @ 81FE900
# 277 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_GERALD, LOCALID_GERALD, LavaridgeTown_Gym_1F_Text_GeraldIntro, LavaridgeTown_Gym_1F_Text_GeraldDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 278 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
# 279 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 280 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 281 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jace:: @ 81FE91B
# 282 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_JACE, LOCALID_JACE, LavaridgeTown_Gym_B1F_Text_JaceIntro, LavaridgeTown_Gym_B1F_Text_JaceDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 283 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
# 284 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 285 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 286 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Jeff:: @ 81FE936
# 287 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_JEFF, LOCALID_JEFF, LavaridgeTown_Gym_B1F_Text_JeffIntro, LavaridgeTown_Gym_B1F_Text_JeffDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 288 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
# 289 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 290 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 291 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_EventScript_Eli:: @ 81FE951
# 292 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_ELI, LOCALID_ELI, LavaridgeTown_Gym_B1F_Text_EliIntro, LavaridgeTown_Gym_B1F_Text_EliDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
# 293 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
# 294 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 295 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 296 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuide:: @ 81FE96C
# 297 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lock
# 298 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	faceplayer
# 299 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
# 300 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 301 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 302 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 303 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 304 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory:: @ 81FE981
# 305 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 306 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	release
# 307 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 308 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 309 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_LeftGymStatue:: @ 81FE98B
# 310 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 311 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 312 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 313 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 314 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 315 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_RightGymStatue:: @ 81FE99B
# 316 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	lockall
# 317 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
# 318 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
# 319 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 320 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 321 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatueCertified:: @ 81FE9AB
# 322 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
# 323 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 324 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 325 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 326 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_EventScript_GymStatue:: @ 81FE9B5
# 327 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
# 328 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	releaseall
# 329 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	end
# 330 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 331 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuideAdvice: @ 81FE9BF
# 332 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hey, how's it going, Champion-\n"
# 333 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "bound {PLAYER}?\p"
# 334 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Lavaridge's Gym Leader Flannery\n"
# 335 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "uses Fire-type Pokémon.\p"
# 336 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Her passion for Pokémon burns stronger\n"
# 337 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "and hotter than a volcano.\p"
# 338 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't get too close to her--you'll burn!\n"
# 339 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hose her down with water and then\l"
# 340 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "go for it!$"
# 341 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 342 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymGuidePostVictory: @ 81FEAB8
# 343 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yow! That was a scorching-hot battle!$"
# 344 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 345 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeIntro: @ 81FEADE
# 346 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Owowowowow!\n"
# 347 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Yikes, it's hot!$"
# 348 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 349 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColeDefeat: @ 81FEAFB
# 350 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm blinded by sweat in my eyes…$"
# 351 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 352 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ColePostBattle: @ 81FEB1C
# 353 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Being buried in hot sand promotes\n"
# 354 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "circulation.\p"
# 355 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's effective for healing pain in\n"
# 356 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "your joints.$"
# 357 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 358 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleIntro: @ 81FEB7B
# 359 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm trying to relieve my stress.\n"
# 360 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't come along and stress me out!$"
# 361 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 362 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxleDefeat: @ 81FEBC0
# 363 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I hope Flannery flames you good!$"
# 364 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 365 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_AxlePostBattle: @ 81FEBE1
# 366 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Haaah… Whew…\p"
# 367 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you spend too much time buried in\n"
# 368 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "hot sand, it tuckers you out…$"
# 369 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 370 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganIntro: @ 81FEC31
# 371 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You must be getting tired by now.\n"
# 372 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "You'd like to rest in the hot sand,\l"
# 373 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "wouldn't you?\p"
# 374 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But you should know that maintaining\n"
# 375 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "your willpower is an important ability\l"
# 376 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "for all Trainers.$"
# 377 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 378 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganDefeat: @ 81FECE3
# 379 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Play with fire, and be burned…$"
# 380 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 381 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_KeeganPostBattle: @ 81FED02
# 382 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your skill is real…\n"
# 383 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But our Leader Flannery is strong.\p"
# 384 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "If you don't watch yourself, you'll be\n"
# 385 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "burned seriously.$"
# 386 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 387 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldIntro: @ 81FED72
# 388 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Can your Pokémon withstand\n"
# 389 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392-degree heat?$"
# 390 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 391 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldDefeat: @ 81FED9E
# 392 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It didn't burn hotly enough…$"
# 393 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 394 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GeraldPostBattle: @ 81FEDBB
# 395 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The temperature of magma is\n"
# 396 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "392 degrees.\p"
# 397 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your Pokémon beat me, so they should\n"
# 398 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "easily survive in magma.$"
# 399 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 400 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleIntro: @ 81FEE22
# 401 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Um…\n"
# 402 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Okay, I'll battle with you.$"
# 403 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 404 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DanielleDefeat: @ 81FEE42
# 405 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, but you're too strong.$"
# 406 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 407 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_DaniellePostBattle: @ 81FEE5D
# 408 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm going to be a pretty and strong\n"
# 409 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Trainer just like Flannery.$"
# 410 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 411 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceIntro: @ 81FEE9D
# 412 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Come on, get with it!\n"
# 413 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's go before my feelings cool!$"
# 414 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 415 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JaceDefeat: @ 81FEED5
# 416 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's so hot, and yet my heart is\n"
# 417 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "clutched by ice…$"
# 418 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 419 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JacePostBattle: @ 81FEF07
# 420 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "The way the battling spirit burns\n"
# 421 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "within you, you may stand a chance\l"
# 422 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "against our Leader.$"
# 423 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 424 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffIntro: @ 81FEF60
# 425 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "See how the flames blaze wildly?\n"
# 426 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "They flare in anticipation of my win!$"
# 427 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 428 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffDefeat: @ 81FEFA7
# 429 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Something didn't go right.$"
# 430 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 431 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_JeffPostBattle: @ 81FEFC2
# 432 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, so what? I say so what?\n"
# 433 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I can walk on hot coals barefoot!\p"
# 434 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "…Don't even think about trying it!$"
# 435 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 436 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliIntro: @ 81FF025
# 437 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "As much as I love mountains,\n"
# 438 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I especially love volcanoes.$"
# 439 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 440 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliDefeat: @ 81FF05F
# 441 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Well, it seems to me I lost without\n"
# 442 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "ever being in control.$"
# 443 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 444 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_B1F_Text_EliPostBattle: @ 81FF09A
# 445 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I stay here because I became a fan\n"
# 446 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "of Flannery's power.\p"
# 447 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Hehehehe.$"
# 448 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 449 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryIntro: @ 81FF0DC
# 450 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Welcome… No, wait.\p"
# 451 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Puny Trainer, how good to see you've\n"
# 452 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "made it here!\p"
# 453 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have been entrusted with the…\n"
# 454 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "No, wait.\p"
# 455 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I am Flannery, and I'm the Gym\n"
# 456 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Leader here!\p"
# 457 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Uh…\n"
# 458 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Dare not underestimate me, though\l"
# 459 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have been Leader only a short time!\p"
# 460 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "With skills inherited from my grand-\n"
# 461 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "father, I shall, uh…demonstrate the\l"
# 462 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "hot moves we have honed on this land!$"
# 463 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 464 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryDefeat: @ 81FF233
# 465 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh…\n"
# 466 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I guess I was trying too hard…\p"
# 467 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I… I've only recently become\n"
# 468 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "a Gym Leader.\p"
# 469 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I tried too hard to be someone\n"
# 470 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I'm not.\p"
# 471 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I have to do things my natural way. If\n"
# 472 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I don't, my Pokémon will be confused.\p"
# 473 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Thanks for teaching me that.\n"
# 474 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "For that, you deserve this.$"
# 475 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 476 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge: @ 81FF32F
# 477 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER} received the Heat Badge\n"
# 478 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "from Flannery.$"
# 479 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 480 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis: @ 81FF359
# 481 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "This is a token of my appreciation.\n"
# 482 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Don't be shy about taking it!$"
# 483 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 484 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_ExplainOverheat: @ 81FF45C
# 485 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That TM50 contains Overheat.\p"
# 486 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "That move inflicts serious damage on\n"
# 487 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "the opponent.\p"
# 488 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "But it also sharply cuts the Special. Attack\n"
# 489 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "of the Pokémon using it. It might not\l"
# 490 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "be suitable for longer battles.$"
# 491 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 492 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_RegisteredFlannery: @ 81FF517
# 493 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Registered Gym Leader Flannery\n"
# 494 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in the Pokénav.$"
# 495 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 496 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostBattle: @ 81FF546
# 497 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Your power reminds me of someone…\p"
# 498 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh! I know! You battle like Norman,\n"
# 499 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "the Gym Leader of Petalburg.$"
# 500 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 501 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatue: @ 81FF5A9
# 502 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Lavaridge Town Pokémon Gym$"
# 503 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 504 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_GymStatueCertified: @ 81FF5C4
# 505 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Lavaridge Town Pokémon Gym\p"
# 506 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Flannery'S Certified Trainers:\n"
# 507 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "{PLAYER}$"
# 508 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 509 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPreRematch: @ 81FF601
# 510 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Flannery: Losing a battle isn't going\n"
# 511 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 512 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love Pokémon.\n"
# 513 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 514 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this Gym!\p"
# 515 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 516 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!$"
# 517 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 518 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat: @ 81FF69F
# 519 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Whew!\n"
# 520 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "On the verge of eruption!$"
# 521 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 522 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryPostRematch: @ 81FF6BF
# 523 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Flannery: I lost the match,\n"
# 524 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "but I'm completely satisfied.\p"
# 525 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "It's not often I get to enjoy a battle\n"
# 526 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "this heated.\p"
# 527 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's have another one like this\n"
# 528 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "again sometime!$"
# 529 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"

# 530 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons: @ 81FF75E
# 531 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Flannery: Losing a battle isn't going\n"
# 532 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "to deflate me.\p"
# 533 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love Pokémon.\n"
# 534 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I love to battle.\l"
# 535 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "And… I love this Gym!\p"
# 536 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Let's exchange superhot moves\n"
# 537 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "in another battle!\p"
# 538 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "Oh, wait. Do you only have one Pokémon\n"
# 539 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "that can battle?\p"
# 540 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "I hate to say this, but when you come\n"
# 541 "data/maps/LavaridgeTown_Gym_1F/scripts.pory"
	.string "see me, bring at least two Pokémon.$"
