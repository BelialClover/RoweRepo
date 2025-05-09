# 1 "data/maps/MossdeepCity_Gym/scripts.pory"

# 2 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_MapScripts:: @ 8220800
# 3 "data/maps/MossdeepCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_Gym_OnLoad
# 4 "data/maps/MossdeepCity_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/MossdeepCity_Gym/scripts.pory"

# 6 "data/maps/MossdeepCity_Gym/scripts.pory"
@ NOTE: Mossdeep Gym was redesigned between R/S and E. Leftover (and now functionally unused) scripts are commented below
# 7 "data/maps/MossdeepCity_Gym/scripts.pory"

# 8 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below checks are leftover from RS. FLAG_MOSSDEEP_GYM_SWITCH_X is never set
# 9 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_OnLoad: @ 8220806
# 10 "data/maps/MossdeepCity_Gym/scripts.pory"
    call_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_SetWarpMetatile
# 11 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 12 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 13 "data/maps/MossdeepCity_Gym/scripts.pory"

# 14 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch2:: @ 8220815
# 15 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_SetSwitch2Metatiles
# 16 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 17 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 18 "data/maps/MossdeepCity_Gym/scripts.pory"

# 19 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch3:: @ 8220824
# 20 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_SetSwitch3Metatiles
# 21 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 22 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 23 "data/maps/MossdeepCity_Gym/scripts.pory"

# 24 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_CheckSwitch4:: @ 8220833
# 25 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_SetSwitch4Metatiles
# 26 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 27 "data/maps/MossdeepCity_Gym/scripts.pory"

# 28 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetWarpMetatile:: @ 822083D
# 29 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 7, 30, METATILE_MossdeepGym_GymWarp, 0
# 30 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 31 "data/maps/MossdeepCity_Gym/scripts.pory"

# 32 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below set metatile scripts are leftover from RS and are functionally unused
# 33 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch1Metatiles:: @ 822083D
# 34 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RS_MossdeepGym_RedArrow_Right, 0
# 35 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RS_MossdeepGym_Switch_Down, 1
# 36 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch2
# 37 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 38 "data/maps/MossdeepCity_Gym/scripts.pory"

# 39 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch2Metatiles:: @ 8220855
# 40 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RS_MossdeepGym_RedArrow_Right, 0
# 41 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RS_MossdeepGym_Switch_Down, 1
# 42 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch3
# 43 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 44 "data/maps/MossdeepCity_Gym/scripts.pory"

# 45 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch3Metatiles:: @ 822086D
# 46 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RS_MossdeepGym_RedArrow_Left, 0
# 47 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RS_MossdeepGym_Switch_Down, 1
# 48 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_CheckSwitch4
# 49 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 50 "data/maps/MossdeepCity_Gym/scripts.pory"

# 51 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_SetSwitch4Metatiles:: @ 8220885
# 52 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RS_MossdeepGym_RedArrow_Up, 0
# 53 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RS_MossdeepGym_Switch_Down, 1
# 54 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 55 "data/maps/MossdeepCity_Gym/scripts.pory"

# 56 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza:: @ 8220898
# 57 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 58 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 59 "data/maps/MossdeepCity_Gym/scripts.pory"
	call_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_TateAndLiza_PostBattle
# 60 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaIntro, MossdeepCity_Gym_Text_TateAndLizaDefeat, MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons, MossdeepCity_Gym_EventScript_TateAndLizaDefeated, NO_MUSIC
# 61 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
# 62 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 63 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 64 "data/maps/MossdeepCity_Gym/scripts.pory"

# 65 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaDefeated:: @ 82208D1
# 66 "data/maps/MossdeepCity_Gym/scripts.pory"
	message MossdeepCity_Gym_Text_ReceivedMindBadge
# 67 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmessage
# 68 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 69 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis, MSGBOX_DEFAULT
# 70 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 71 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 72 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 73 "data/maps/MossdeepCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 74 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 75 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 76 "data/maps/MossdeepCity_Gym/scripts.pory"
	call MossdeepCity_Gym_EventScript_GiveCalmMind
# 77 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 78 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 79 "data/maps/MossdeepCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 80 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 81 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_TATE_AND_LIZA_REMATCH
# 82 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 83 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitfanfare
# 84 "data/maps/MossdeepCity_Gym/scripts.pory"
	closemessage
# 85 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay 30
# 86 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 87 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 88 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 89 "data/maps/MossdeepCity_Gym/scripts.pory"

# 90 "data/maps/MossdeepCity_Gym/scripts.pory"
//Rematch	
# 91 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLiza_PostBattle::
# 92 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_TATE_AND_LIZA_REMATCH, MossdeepCity_Gym_EventScript_TateAndLizaRematch
# 93 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_DEFAULT
# 94 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 95 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 96 "data/maps/MossdeepCity_Gym/scripts.pory"

# 97 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematch::
# 98 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPreRematch, MSGBOX_DEFAULT
# 99 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_Start_Rematch_1
# 100 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 101 "data/maps/MossdeepCity_Gym/scripts.pory"
	
# 102 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd::
# 103 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_AUTOCLOSE
# 104 "data/maps/MossdeepCity_Gym/scripts.pory"
	call Gym_EventScript_Reset_Random_Rematch
# 105 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_TATE_AND_LIZA_REMATCH
# 106 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 107 "data/maps/MossdeepCity_Gym/scripts.pory"
	
# 108 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Start_Rematch_1::
# 109 "data/maps/MossdeepCity_Gym/scripts.pory"
	checkitem ITEM_TM04_CALM_MIND, 1
# 110 "data/maps/MossdeepCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 111 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq MossdeepCity_Gym_EventScript_Start_Rematch_2
# 112 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
# 113 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 114 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM04_CALM_MIND
# 115 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
# 116 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 117 "data/maps/MossdeepCity_Gym/scripts.pory"
	
# 118 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Start_Rematch_2::
# 119 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM08 MossdeepCity_Gym_EventScript_Start_Rematch_Party_1
# 120 "data/maps/MossdeepCity_Gym/scripts.pory"
	checkitem ITEM_TM85_DREAM_EATER, 1
# 121 "data/maps/MossdeepCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 122 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq MossdeepCity_Gym_EventScript_Start_Rematch_3
# 123 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
# 124 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 125 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM85_DREAM_EATER
# 126 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
# 127 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 128 "data/maps/MossdeepCity_Gym/scripts.pory"
	
# 129 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Start_Rematch_3::
# 130 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM42 MossdeepCity_Gym_EventScript_Start_Rematch_Party_2
# 131 "data/maps/MossdeepCity_Gym/scripts.pory"
	checkitem ITEM_TM92_TRICK_ROOM, 1
# 132 "data/maps/MossdeepCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 133 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq MossdeepCity_Gym_EventScript_Start_Rematch_4
# 134 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
# 135 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 136 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM92_TRICK_ROOM
# 137 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
# 138 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 139 "data/maps/MossdeepCity_Gym/scripts.pory"
	
# 140 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Start_Rematch_4::
# 141 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM40 MossdeepCity_Gym_EventScript_Start_Rematch_Party_3
# 142 "data/maps/MossdeepCity_Gym/scripts.pory"
	checkitem ITEM_TM105_PSYSHOCK, 1
# 143 "data/maps/MossdeepCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 144 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq MossdeepCity_Gym_EventScript_Start_Rematch_5
# 145 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
# 146 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 147 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM105_PSYSHOCK
# 148 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
# 149 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 150 "data/maps/MossdeepCity_Gym/scripts.pory"
	
# 151 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Start_Rematch_5::
# 152 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM03 MossdeepCity_Gym_EventScript_Start_Rematch_Party_4
# 153 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_GOT_GALLADE_MEGA_STONE MossdeepCity_Gym_EventScript_Start_Rematch_6
# 154 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
# 155 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GetMegaStone_2, MSGBOX_DEFAULT
# 156 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_GALLADITE
# 157 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_GOT_GALLADE_MEGA_STONE
# 158 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
# 159 "data/maps/MossdeepCity_Gym/scripts.pory"
	end	
# 160 "data/maps/MossdeepCity_Gym/scripts.pory"
	
# 161 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Start_Rematch_6::
# 162 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_GOT_GARDEVOIR_MEGA_STONE MossdeepCity_Gym_EventScript_Start_Rematch_Final
# 163 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_5, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
# 164 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GetMegaStone, MSGBOX_DEFAULT
# 165 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_GARDEVOIRITE
# 166 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_GOT_GARDEVOIR_MEGA_STONE
# 167 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
# 168 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 169 "data/maps/MossdeepCity_Gym/scripts.pory"
	
# 170 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Start_Rematch_Final::
# 171 "data/maps/MossdeepCity_Gym/scripts.pory"
	random 5
# 172 "data/maps/MossdeepCity_Gym/scripts.pory"
	switch VAR_RESULT
# 173 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 0, MossdeepCity_Gym_EventScript_Start_Rematch_Party_1
# 174 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 1, MossdeepCity_Gym_EventScript_Start_Rematch_Party_2
# 175 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 2, MossdeepCity_Gym_EventScript_Start_Rematch_Party_3
# 176 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 3, MossdeepCity_Gym_EventScript_Start_Rematch_Party_4
# 177 "data/maps/MossdeepCity_Gym/scripts.pory"
	case 4, MossdeepCity_Gym_EventScript_Start_Rematch_Party_5
# 178 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 179 "data/maps/MossdeepCity_Gym/scripts.pory"
	
# 180 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Start_Rematch_Party_1::
# 181 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
# 182 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
# 183 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 184 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_CALM_MINT, 3
# 185 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
# 186 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 187 "data/maps/MossdeepCity_Gym/scripts.pory"
	
# 188 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Start_Rematch_Party_2::
# 189 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
# 190 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
# 191 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 192 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_GENTLE_MINT, 3
# 193 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
# 194 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 195 "data/maps/MossdeepCity_Gym/scripts.pory"
	
# 196 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Start_Rematch_Party_3::
# 197 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
# 198 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
# 199 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 200 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_CAREFUL_MINT, 3
# 201 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
# 202 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 203 "data/maps/MossdeepCity_Gym/scripts.pory"
	
# 204 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Start_Rematch_Party_4::
# 205 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
# 206 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
# 207 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 208 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_SASSY_MINT, 3
# 209 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
# 210 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 211 "data/maps/MossdeepCity_Gym/scripts.pory"
	
# 212 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Start_Rematch_Party_5::
# 213 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_5, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
# 214 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
# 215 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 216 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_MODEST_MINT, 3
# 217 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_TateAndLizaRematchEnd
# 218 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 219 "data/maps/MossdeepCity_Gym/scripts.pory"
	
# 220 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GetTM:
# 221 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Please take this\n"
# 222 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Technical Machine.$"
# 223 "data/maps/MossdeepCity_Gym/scripts.pory"

# 224 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GetMegaStone:
# 225 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Please take this\n"
# 226 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Mega Stone, with you.\p"
# 227 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Make an Gardevoir hold it to\n"
# 228 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "unleash its Hidden Potential.$"
# 229 "data/maps/MossdeepCity_Gym/scripts.pory"
	
# 230 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GetMegaStone_2:
# 231 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Please take this\n"
# 232 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Mega Stone, with you.\p"
# 233 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Make an Gallade hold it to\n"
# 234 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "unleash its Hidden Potential.$"
# 235 "data/maps/MossdeepCity_Gym/scripts.pory"
	
# 236 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GetReward:
# 237 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Please take this\n"
# 238 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Item as a Reward.$"
# 239 "data/maps/MossdeepCity_Gym/scripts.pory"

# 240 "data/maps/MossdeepCity_Gym/scripts.pory"
//rematches end
# 241 "data/maps/MossdeepCity_Gym/scripts.pory"

# 242 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind2:: @ 8220937
# 243 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM04
# 244 "data/maps/MossdeepCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
# 245 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 246 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 247 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 248 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 249 "data/maps/MossdeepCity_Gym/scripts.pory"

# 250 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GiveCalmMind:: @ 822095B
# 251 "data/maps/MossdeepCity_Gym/scripts.pory"
	giveitem ITEM_TM04
# 252 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_ExplainCalmMind, MSGBOX_DEFAULT
# 253 "data/maps/MossdeepCity_Gym/scripts.pory"
	return
# 254 "data/maps/MossdeepCity_Gym/scripts.pory"

# 255 "data/maps/MossdeepCity_Gym/scripts.pory"
@ All the below switch scripts are leftover from RS and are functionally unused
# 256 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch1:: @ 8220999
# 257 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 258 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 259 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 260 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RS_MossdeepGym_RedArrow_Right, 0
# 261 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RS_MossdeepGym_Switch_Down, 1
# 262 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 263 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 264 "data/maps/MossdeepCity_Gym/scripts.pory"

# 265 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed:: @ 82209C8
# 266 "data/maps/MossdeepCity_Gym/scripts.pory"
	special DrawWholeMapView
# 267 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_CLICK
# 268 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 269 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 270 "data/maps/MossdeepCity_Gym/scripts.pory"

# 271 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch1:: @ 82209D0
# 272 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 273 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 274 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 5, METATILE_RS_MossdeepGym_RedArrow_Left, 0
# 275 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_RS_MossdeepGym_Switch_Up, 1
# 276 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 277 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 278 "data/maps/MossdeepCity_Gym/scripts.pory"

# 279 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch2:: @ 82209F5
# 280 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 281 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_2, MossdeepCity_Gym_EventScript_ClearSwitch2
# 282 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 283 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 284 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 285 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RS_MossdeepGym_RedArrow_Right, 0
# 286 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RS_MossdeepGym_Switch_Down, 1
# 287 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 288 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 289 "data/maps/MossdeepCity_Gym/scripts.pory"

# 290 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch2:: @ 8220A24
# 291 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 292 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 293 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 294 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 14, METATILE_RS_MossdeepGym_RedArrow_Down, 0
# 295 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 8, 10, METATILE_RS_MossdeepGym_Switch_Up, 1
# 296 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 297 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 298 "data/maps/MossdeepCity_Gym/scripts.pory"

# 299 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch3:: @ 8220A49
# 300 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 301 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_3, MossdeepCity_Gym_EventScript_ClearSwitch3
# 302 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 303 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 304 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 305 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RS_MossdeepGym_RedArrow_Left, 0
# 306 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RS_MossdeepGym_Switch_Down, 1
# 307 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 308 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 309 "data/maps/MossdeepCity_Gym/scripts.pory"

# 310 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch3:: @ 8220A78
# 311 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 312 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 313 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 314 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 15, 17, METATILE_RS_MossdeepGym_RedArrow_Right, 0
# 315 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_RS_MossdeepGym_Switch_Up, 1
# 316 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 317 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 318 "data/maps/MossdeepCity_Gym/scripts.pory"

# 319 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Switch4:: @ 8220A9D
# 320 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 321 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_MOSSDEEP_GYM_SWITCH_4, MossdeepCity_Gym_EventScript_ClearSwitch4
# 322 "data/maps/MossdeepCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 323 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 324 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 325 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RS_MossdeepGym_RedArrow_Up, 0
# 326 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RS_MossdeepGym_Switch_Down, 1
# 327 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 328 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 329 "data/maps/MossdeepCity_Gym/scripts.pory"

# 330 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_ClearSwitch4:: @ 8220ACC
# 331 "data/maps/MossdeepCity_Gym/scripts.pory"
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
# 332 "data/maps/MossdeepCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Gym_Movement_WaitAfterSwitchUse
# 333 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 334 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 1, 23, METATILE_RS_MossdeepGym_RedArrow_Right, 0
# 335 "data/maps/MossdeepCity_Gym/scripts.pory"
	setmetatile 5, 24, METATILE_RS_MossdeepGym_Switch_Up, 1
# 336 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_DrawMapAfterSwitchUsed
# 337 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 338 "data/maps/MossdeepCity_Gym/scripts.pory"

# 339 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToEntrance:: @ 8220AF1
# 340 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 341 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 255, 11, 32
# 342 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 343 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 344 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 345 "data/maps/MossdeepCity_Gym/scripts.pory"
	
# 346 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_WarpToLeaders:: @ 8220AF1
# 347 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_WarpToEntrance
# 348 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 349 "data/maps/MossdeepCity_Gym/scripts.pory"
	warpmossdeepgym MAP_MOSSDEEP_CITY_GYM, 255, 12, 13
# 350 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitstate
# 351 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 352 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 353 "data/maps/MossdeepCity_Gym/scripts.pory"

# 354 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Preston:: @ 8220AFD
# 355 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESTON, MossdeepCity_Gym_Text_PrestonIntro, MossdeepCity_Gym_Text_PrestonDefeat
# 356 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 357 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 358 "data/maps/MossdeepCity_Gym/scripts.pory"

# 359 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Virgil:: @ 8220B14
# 360 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_VIRGIL, MossdeepCity_Gym_Text_VirgilIntro, MossdeepCity_Gym_Text_VirgilDefeat
# 361 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_VirgilPostBattle, MSGBOX_AUTOCLOSE
# 362 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 363 "data/maps/MossdeepCity_Gym/scripts.pory"

# 364 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Blake:: @ 8220B2B
# 365 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLAKE, MossdeepCity_Gym_Text_BlakeIntro, MossdeepCity_Gym_Text_BlakeDefeat
# 366 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_BlakePostBattle, MSGBOX_AUTOCLOSE
# 367 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 368 "data/maps/MossdeepCity_Gym/scripts.pory"

# 369 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Hannah:: @ 8220B42
# 370 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HANNAH, MossdeepCity_Gym_Text_HannahIntro, MossdeepCity_Gym_Text_HannahDefeat
# 371 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 372 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 373 "data/maps/MossdeepCity_Gym/scripts.pory"

# 374 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Samantha:: @ 8220B59
# 375 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAMANTHA, MossdeepCity_Gym_Text_SamanthaIntro, MossdeepCity_Gym_Text_SamanthaDefeat
# 376 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SamanthaPostBattle, MSGBOX_AUTOCLOSE
# 377 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 378 "data/maps/MossdeepCity_Gym/scripts.pory"

# 379 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Maura:: @ 8220B70
# 380 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MAURA, MossdeepCity_Gym_Text_MauraIntro, MossdeepCity_Gym_Text_MauraDefeat
# 381 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MauraPostBattle, MSGBOX_AUTOCLOSE
# 382 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 383 "data/maps/MossdeepCity_Gym/scripts.pory"

# 384 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Sylvia:: @ 8220B87
# 385 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SYLVIA, MossdeepCity_Gym_Text_SylviaIntro, MossdeepCity_Gym_Text_SylviaDefeat
# 386 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_SylviaPostBattle, MSGBOX_AUTOCLOSE
# 387 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 388 "data/maps/MossdeepCity_Gym/scripts.pory"

# 389 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nate:: @ 8220B9E
# 390 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NATE, MossdeepCity_Gym_Text_NateIntro, MossdeepCity_Gym_Text_NateDefeat
# 391 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 392 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 393 "data/maps/MossdeepCity_Gym/scripts.pory"

# 394 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Macey:: @ 8220BB5
# 395 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MACEY, MossdeepCity_Gym_Text_MaceyIntro, MossdeepCity_Gym_Text_MaceyDefeat
# 396 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_MaceyPostBattle, MSGBOX_AUTOCLOSE
# 397 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 398 "data/maps/MossdeepCity_Gym/scripts.pory"

# 399 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Clifford:: @ 8220BCC
# 400 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, MossdeepCity_Gym_Text_CliffordIntro, MossdeepCity_Gym_Text_CliffordDefeat
# 401 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_CliffordPostBattle, MSGBOX_AUTOCLOSE
# 402 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 403 "data/maps/MossdeepCity_Gym/scripts.pory"

# 404 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Nicholas:: @ 8220BE3
# 405 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NICHOLAS, MossdeepCity_Gym_Text_NicholasIntro, MossdeepCity_Gym_Text_NicholasDefeat
# 406 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_NicholasPostBattle, MSGBOX_AUTOCLOSE
# 407 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 408 "data/maps/MossdeepCity_Gym/scripts.pory"

# 409 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_Kathleen:: @ 8220BFA
# 410 "data/maps/MossdeepCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATHLEEN, MossdeepCity_Gym_Text_KathleenIntro, MossdeepCity_Gym_Text_KathleenDefeat
# 411 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_KathleenPostBattle, MSGBOX_AUTOCLOSE
# 412 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 413 "data/maps/MossdeepCity_Gym/scripts.pory"

# 414 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuide:: @ 8220C11
# 415 "data/maps/MossdeepCity_Gym/scripts.pory"
	lock
# 416 "data/maps/MossdeepCity_Gym/scripts.pory"
	faceplayer
# 417 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuidePostVictory
# 418 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 419 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 420 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 421 "data/maps/MossdeepCity_Gym/scripts.pory"

# 422 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymGuidePostVictory:: @ 8220C26
# 423 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 424 "data/maps/MossdeepCity_Gym/scripts.pory"
	release
# 425 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 426 "data/maps/MossdeepCity_Gym/scripts.pory"

# 427 "data/maps/MossdeepCity_Gym/scripts.pory"
@ Leftover from RS, functionally unused
# 428 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Movement_WaitAfterSwitchUse: @ 8220C30
# 429 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 430 "data/maps/MossdeepCity_Gym/scripts.pory"
	delay_16
# 431 "data/maps/MossdeepCity_Gym/scripts.pory"
	step_end
# 432 "data/maps/MossdeepCity_Gym/scripts.pory"

# 433 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_LeftGymStatue:: @ 8220C33
# 434 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 435 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 436 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 437 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 438 "data/maps/MossdeepCity_Gym/scripts.pory"

# 439 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RightGymStatue:: @ 8220C43
# 440 "data/maps/MossdeepCity_Gym/scripts.pory"
	lockall
# 441 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_GymStatueCertified
# 442 "data/maps/MossdeepCity_Gym/scripts.pory"
	goto MossdeepCity_Gym_EventScript_GymStatue
# 443 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 444 "data/maps/MossdeepCity_Gym/scripts.pory"

# 445 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatueCertified:: @ 8220C53
# 446 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 447 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 448 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 449 "data/maps/MossdeepCity_Gym/scripts.pory"

# 450 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GymStatue:: @ 8220C5D
# 451 "data/maps/MossdeepCity_Gym/scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 452 "data/maps/MossdeepCity_Gym/scripts.pory"
	releaseall
# 453 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 454 "data/maps/MossdeepCity_Gym/scripts.pory"

# 455 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_YellowFloorSwitch:: @ 8220C67
# 456 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 457 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 458 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 459 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 460 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 0
# 461 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 462 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 463 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 464 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 465 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 466 "data/maps/MossdeepCity_Gym/scripts.pory"

# 467 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_BlueFloorSwitch:: @ 8220C7D
# 468 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 469 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 470 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 471 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 472 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 1
# 473 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 474 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 475 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 476 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 477 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 478 "data/maps/MossdeepCity_Gym/scripts.pory"

# 479 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_GreenFloorSwitch:: @ 8220C93
# 480 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 481 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 482 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 483 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 484 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 2
# 485 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 486 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 487 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 488 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 489 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 490 "data/maps/MossdeepCity_Gym/scripts.pory"

# 491 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_PurpleFloorSwitch:: @ 8220CA9
# 492 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 493 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 494 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 495 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 496 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 3
# 497 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 498 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 499 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 500 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 501 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 502 "data/maps/MossdeepCity_Gym/scripts.pory"

# 503 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_EventScript_RedFloorSwitch:: @ 8220CBF
# 504 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_SWITCH
# 505 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitse
# 506 "data/maps/MossdeepCity_Gym/scripts.pory"
	playse SE_REPEL
# 507 "data/maps/MossdeepCity_Gym/scripts.pory"
	initrotatingtilepuzzle FALSE
# 508 "data/maps/MossdeepCity_Gym/scripts.pory"
	moverotatingtileobjects 4
# 509 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 510 "data/maps/MossdeepCity_Gym/scripts.pory"
	turnrotatingtileobjects
# 511 "data/maps/MossdeepCity_Gym/scripts.pory"
	waitmovement 0
# 512 "data/maps/MossdeepCity_Gym/scripts.pory"
	freerotatingtilepuzzle
# 513 "data/maps/MossdeepCity_Gym/scripts.pory"
	end
# 514 "data/maps/MossdeepCity_Gym/scripts.pory"

# 515 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuideAdvice: @ 8220CD5
# 516 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Yo, how's it going, Champion-bound\n"
# 517 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}?\p"
# 518 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The Gym Leaders here use\n"
# 519 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Psychic-type Pokémon.\p"
# 520 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you go up against them with\n"
# 521 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fighting- or Poison-type Pokémon,\l"
# 522 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "they'll inflict horrible damage!\p"
# 523 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Plus, they'll come at you with\n"
# 524 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "outstanding combination attacks.\p"
# 525 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you want to win, you'll need to show\n"
# 526 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "them how tight you are with your\l"
# 527 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon. Go for it!$"
# 528 "data/maps/MossdeepCity_Gym/scripts.pory"

# 529 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymGuidePostVictory: @ 8220E2A
# 530 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wow, you're astounding!\n"
# 531 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're one great Trainer!$"
# 532 "data/maps/MossdeepCity_Gym/scripts.pory"

# 533 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonIntro: @ 8220E5C
# 534 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Battles hinge on the strength of your\n"
# 535 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "spirit! The weak-spirited will never win!$"
# 536 "data/maps/MossdeepCity_Gym/scripts.pory"

# 537 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonDefeat: @ 8220EAC
# 538 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I lost!\n"
# 539 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I must temper my spirit again!$"
# 540 "data/maps/MossdeepCity_Gym/scripts.pory"

# 541 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_PrestonPostBattle: @ 8220ED3
# 542 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The indecisive lose.\n"
# 543 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "That's my warning to you.$"
# 544 "data/maps/MossdeepCity_Gym/scripts.pory"

# 545 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilIntro: @ 8220F02
# 546 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me see your talent!$"
# 547 "data/maps/MossdeepCity_Gym/scripts.pory"

# 548 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilDefeat: @ 8220F1A
# 549 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You possess spectacular talent!$"
# 550 "data/maps/MossdeepCity_Gym/scripts.pory"

# 551 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_VirgilPostBattle: @ 8220F3A
# 552 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If there are prodigies in the world,\n"
# 553 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "then our Gym Leaders are them!\p"
# 554 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "However, you may be even more talented\n"
# 555 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "than them…$"
# 556 "data/maps/MossdeepCity_Gym/scripts.pory"

# 557 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeIntro: @ 8220FB0
# 558 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Fufufufu… Watch me levitate a Poké\n"
# 559 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ball telekinetically!\p"
# 560 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wrooooooooaaaar!\n"
# 561 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … … …\p"
# 562 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Sometimes, I'm out of sync…$"
# 563 "data/maps/MossdeepCity_Gym/scripts.pory"

# 564 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakeDefeat: @ 8221024
# 565 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "My Pokémon battling skills are out\n"
# 566 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of sync, too!$"
# 567 "data/maps/MossdeepCity_Gym/scripts.pory"

# 568 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_BlakePostBattle: @ 8221055
# 569 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A Poké Ball was too heavy to lift\n"
# 570 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "psychically. But this dust bunny…\p"
# 571 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Whoooooooooooooooh!\n"
# 572 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …\p"
# 573 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "No, I'm not cheating!\n"
# 574 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I didn't blow on it! Honestly!$"
# 575 "data/maps/MossdeepCity_Gym/scripts.pory"

# 576 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahIntro: @ 82210EE
# 577 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "When you lose to me, don't be too hard\n"
# 578 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "on yourself.\p"
# 579 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It's not that you're weak--I'm just\n"
# 580 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "too strong!$"
# 581 "data/maps/MossdeepCity_Gym/scripts.pory"

# 582 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahDefeat: @ 8221152
# 583 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're just too strong!$"
# 584 "data/maps/MossdeepCity_Gym/scripts.pory"

# 585 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_HannahPostBattle: @ 822116A
# 586 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I'm not going to get down on myself for\n"
# 587 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "losing. I just need to train harder.\p"
# 588 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Positive thinking--that's my strong\n"
# 589 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "point!$"
# 590 "data/maps/MossdeepCity_Gym/scripts.pory"

# 591 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaIntro: @ 82211E2
# 592 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see it…\n"
# 593 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I see your future…\p"
# 594 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "If you can beat me, I will tell you\n"
# 595 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your future!$"
# 596 "data/maps/MossdeepCity_Gym/scripts.pory"

# 597 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaDefeat: @ 8221230
# 598 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I surrender!$"
# 599 "data/maps/MossdeepCity_Gym/scripts.pory"

# 600 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SamanthaPostBattle: @ 822123D
# 601 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You will wage a terrifically intense\n"
# 602 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "battle with our Gym Leaders…\p"
# 603 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The result…\n"
# 604 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You won't hear it from me!$"
# 605 "data/maps/MossdeepCity_Gym/scripts.pory"

# 606 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraIntro: @ 82212A6
# 607 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The roads you have traveled…\n"
# 608 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you have experienced…\p"
# 609 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Come at me with everything you've\n"
# 610 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "learned!$"
# 611 "data/maps/MossdeepCity_Gym/scripts.pory"

# 612 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraDefeat: @ 8221309
# 613 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You've traveled a path of greatness!$"
# 614 "data/maps/MossdeepCity_Gym/scripts.pory"

# 615 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MauraPostBattle: @ 822132E
# 616 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "A bright future awaits those who have\n"
# 617 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "worked diligently.\p"
# 618 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "For those who lazed idly, there is\n"
# 619 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "only despair at the end.\p"
# 620 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What goes around comes around…$"
# 621 "data/maps/MossdeepCity_Gym/scripts.pory"

# 622 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaIntro: @ 82213C2
# 623 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Even at the risk of life, I will win\n"
# 624 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "this battle!$"
# 625 "data/maps/MossdeepCity_Gym/scripts.pory"

# 626 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaDefeat: @ 82213F4
# 627 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "What you do…\n"
# 628 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It horrifies me…$"
# 629 "data/maps/MossdeepCity_Gym/scripts.pory"

# 630 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_SylviaPostBattle: @ 8221412
# 631 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How dare you beat me…\p"
# 632 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It won't be my fault if something\n"
# 633 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrible befalls you…$"
# 634 "data/maps/MossdeepCity_Gym/scripts.pory"

# 635 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateIntro: @ 8221460
# 636 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Hohoho.\p"
# 637 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You need me to show you how tenacious\n"
# 638 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the Psychic type can be.$"
# 639 "data/maps/MossdeepCity_Gym/scripts.pory"

# 640 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NateDefeat: @ 82214A7
# 641 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh! My, my!\n"
# 642 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your battle style is fantastic!$"
# 643 "data/maps/MossdeepCity_Gym/scripts.pory"

# 644 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NatePostBattle: @ 82214D3
# 645 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I… I don't let defeat rattle m-me,\n"
# 646 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "however b-badly.$"
# 647 "data/maps/MossdeepCity_Gym/scripts.pory"

# 648 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenIntro: @ 8221507
# 649 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Let me show you a perfectly awful,\n"
# 650 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "horrifying time!$"
# 651 "data/maps/MossdeepCity_Gym/scripts.pory"

# 652 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenDefeat: @ 822153B
# 653 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "N-nooooo!$"
# 654 "data/maps/MossdeepCity_Gym/scripts.pory"

# 655 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_KathleenPostBattle: @ 8221545
# 656 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Your vitality is contagious!\n"
# 657 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Get away from me quickly!$"
# 658 "data/maps/MossdeepCity_Gym/scripts.pory"

# 659 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordIntro: @ 822157C
# 660 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "I may be past my prime, but I suggest\n"
# 661 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "you not patronize me.$"
# 662 "data/maps/MossdeepCity_Gym/scripts.pory"

# 663 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordDefeat: @ 82215B8
# 664 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Ah, you overflow with the power\n"
# 665 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "of youth!$"
# 666 "data/maps/MossdeepCity_Gym/scripts.pory"

# 667 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_CliffordPostBattle: @ 82215E2
# 668 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "It seems that I could not overcome\n"
# 669 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "your youthful energy.$"
# 670 "data/maps/MossdeepCity_Gym/scripts.pory"

# 671 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyIntro: @ 822161B
# 672 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "You're not getting through to the end!\n"
# 673 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Not if I can help it!$"
# 674 "data/maps/MossdeepCity_Gym/scripts.pory"

# 675 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyDefeat: @ 8221658
# 676 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "How could you be so ludicrously\n"
# 677 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "strong?$"
# 678 "data/maps/MossdeepCity_Gym/scripts.pory"

# 679 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_MaceyPostBattle: @ 8221680
# 680 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Humph! You may be strong, but you're\n"
# 681 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "not suitable for the Psychic type!\p"
# 682 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "The way you battle is somehow brutal!$"
# 683 "data/maps/MossdeepCity_Gym/scripts.pory"

# 684 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasIntro: @ 82216EE
# 685 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Wroooar! Have a taste of my super\n"
# 686 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Pokémon hard-battling power!$"
# 687 "data/maps/MossdeepCity_Gym/scripts.pory"

# 688 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasDefeat: @ 822172D
# 689 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Oh!\n"
# 690 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Done in!$"
# 691 "data/maps/MossdeepCity_Gym/scripts.pory"

# 692 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_NicholasPostBattle: @ 822173A
# 693 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "All right! I think I'll develop a special\n"
# 694 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "invincible Pokémon power next.$"
# 695 "data/maps/MossdeepCity_Gym/scripts.pory"

# 696 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaIntro: @ 8221783
# 697 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Hehehe… Were you surprised?\p"
# 698 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Fufufu… Were you surprised?\p"
# 699 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: That there are two Gym Leaders?\n"
# 700 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: That there are two Gym Leaders?\p"
# 701 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: We're twins!\n"
# 702 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: We're twins!\p"
# 703 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: We don't need to talk because…\n"
# 704 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: We can each determine what…\p"
# 705 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: The other is thinking…\n"
# 706 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: All in our minds!\p"
# 707 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: This combination of ours…\n"
# 708 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Can you beat it?$"
# 709 "data/maps/MossdeepCity_Gym/scripts.pory"

# 710 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaDefeat: @ 82218EC
# 711 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: What?! Our combination…\n"
# 712 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Was shattered!\p"
# 713 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: It can't be helped. You've won…\n"
# 714 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: So, in recognition, take this.$"
# 715 "data/maps/MossdeepCity_Gym/scripts.pory"

# 716 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ReceivedMindBadge: @ 822196A
# 717 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER} received the Mind Badge\n"
# 718 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "from Tate and Liza.$"
# 719 "data/maps/MossdeepCity_Gym/scripts.pory"

# 720 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis: @ 8221999
# 721 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You should take this.$"
# 722 "data/maps/MossdeepCity_Gym/scripts.pory"

# 723 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_ExplainCalmMind: @ 8221A40
# 724 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: That TM04 contains…\n"
# 725 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Calm Mind!\p"
# 726 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: It raises Special Attack and…\n"
# 727 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: It raises Special Defense!\p"
# 728 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: It's a move that's perfect…\n"
# 729 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: For Psychic Pokémon!\p"
# 730 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 731 "data/maps/MossdeepCity_Gym/scripts.pory"

# 732 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_RegisteredTateAndLiza: @ 8221AEA
# 733 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Registered Gym Leaders Tate & Liza\n"
# 734 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "in the Pokénav.$"
# 735 "data/maps/MossdeepCity_Gym/scripts.pory"

# 736 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostBattle: @ 8221B1D
# 737 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Looks like the bond between you\n"
# 738 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "and your Pokémon is far stronger than\l"
# 739 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "the bond that we share as twins.\p"
# 740 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: You will become even stronger!\n"
# 741 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "We've battled you, so we know.$"
# 742 "data/maps/MossdeepCity_Gym/scripts.pory"

# 743 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons: @ 8221BCE
# 744 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Hehehe… Were you surprised?\p"
# 745 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: That there are two Gym Leaders?\p"
# 746 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Oops, you have only one…\n"
# 747 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Pokémon that can battle.\p"
# 748 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: We can't battle that way!\p"
# 749 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: If you want to challenge us,\n"
# 750 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "bring some more Pokémon.$"
# 751 "data/maps/MossdeepCity_Gym/scripts.pory"

# 752 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatue: @ 8221CB0
# 753 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Mossdeep City Pokémon Gym$"
# 754 "data/maps/MossdeepCity_Gym/scripts.pory"

# 755 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_GymStatueCertified: @ 8221CCA
# 756 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Mossdeep City Pokémon Gym\p"
# 757 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza AND Tate'S Certified Trainers:\n"
# 758 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 759 "data/maps/MossdeepCity_Gym/scripts.pory"

# 760 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPreRematch: @ 8221D0B
# 761 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Pokémon…\n"
# 762 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Pokémon…\p"
# 763 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: By changing the party's mix…\n"
# 764 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: The battle style changes.\p"
# 765 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: But me…\n"
# 766 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: But me…\p"
# 767 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: I'll always be with Liza!\n"
# 768 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: I'll always be with Tate!\p"
# 769 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: Our combination…\n"
# 770 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: We'll show you again and again!$"
# 771 "data/maps/MossdeepCity_Gym/scripts.pory"

# 772 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat: @ 8221E05
# 773 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You and your Pokémon…\n"
# 774 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: It's as if you were siblings!$"
# 775 "data/maps/MossdeepCity_Gym/scripts.pory"

# 776 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaPostRematch: @ 8221E45
# 777 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You can knock us down,\n"
# 778 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "but we'll never stay down!\p"
# 779 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Because the two of us,\n"
# 780 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "we always support each other!$"
# 781 "data/maps/MossdeepCity_Gym/scripts.pory"

# 782 "data/maps/MossdeepCity_Gym/scripts.pory"
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons: @ 8221EB8
# 783 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You're back again…\n"
# 784 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: You're back again…\p"
# 785 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: To give us a rematch.\n"
# 786 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: To give us a rematch.\p"
# 787 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: But…\n"
# 788 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: For our match…\p"
# 789 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: You brought just one Pokémon!\n"
# 790 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: You brought just one Pokémon!\p"
# 791 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Tate: We need you to bring at least…\n"
# 792 "data/maps/MossdeepCity_Gym/scripts.pory"
	.string "Liza: Two Pokémon when you come back.$"
