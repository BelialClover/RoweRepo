# 1 "data/maps/FortreeCity_Gym/scripts.pory"

# 2 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_MapScripts:: @ 82165AB
# 3 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_Gym_OnTransition
# 4 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, FortreeCity_Gym_OnWarp
# 5 "data/maps/FortreeCity_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/FortreeCity_Gym/scripts.pory"

# 7 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnTransition: @ 82165B6
# 8 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species
# 9 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzle
# 10 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 11 "data/maps/FortreeCity_Gym/scripts.pory"

# 12 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_OnWarp: @ 82165BA
# 13 "data/maps/FortreeCity_Gym/scripts.pory"
	map_script_2 VAR_TEMP_0, VAR_TEMP_0, FortreeCity_Gym_EventScript_InitRotatingGates
# 14 "data/maps/FortreeCity_Gym/scripts.pory"
	.2byte 0
# 15 "data/maps/FortreeCity_Gym/scripts.pory"

# 16 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_InitRotatingGates:: @ 82165C4
# 17 "data/maps/FortreeCity_Gym/scripts.pory"
	special RotatingGate_InitPuzzleAndGraphics
# 18 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 19 "data/maps/FortreeCity_Gym/scripts.pory"

# 20 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona:: @ 82165C8
# 21 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 22 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 23 "data/maps/FortreeCity_Gym/scripts.pory"
	call_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Winona_PostBattle
# 24 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, FortreeCity_Gym_EventScript_WinonaDefeated, NO_MUSIC
# 25 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 26 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 27 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 28 "data/maps/FortreeCity_Gym/scripts.pory"

# 29 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaDefeated:: @ 82165FD
# 30 "data/maps/FortreeCity_Gym/scripts.pory"
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
# 31 "data/maps/FortreeCity_Gym/scripts.pory"
	waitmessage
# 32 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 33 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis, MSGBOX_DEFAULT
# 34 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 35 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 36 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_0x8008, 6
# 37 "data/maps/FortreeCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 38 "data/maps/FortreeCity_Gym/scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 39 "data/maps/FortreeCity_Gym/scripts.pory"
	call FortreeCity_Gym_EventScript_GiveAerialAce
# 40 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 41 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 42 "data/maps/FortreeCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 43 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 44 "data/maps/FortreeCity_Gym/scripts.pory"
	waitfanfare
# 45 "data/maps/FortreeCity_Gym/scripts.pory"
	closemessage
# 46 "data/maps/FortreeCity_Gym/scripts.pory"
	delay 30
# 47 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 48 "data/maps/FortreeCity_Gym/scripts.pory"
	setvar VAR_GYM_ATTENDANT_STEP_COUNTER, 0
# 49 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_GYM_ATTENDANT_CALL
# 50 "data/maps/FortreeCity_Gym/scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 51 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_WINONA_REMATCH
# 52 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 53 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 54 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 55 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Winona_PostBattle::
# 56 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_WINONA_REMATCH, FortreeCity_Gym_EventScript_WinonaRematch
# 57 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_DEFAULT
# 58 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 59 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 60 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 61 "data/maps/FortreeCity_Gym/scripts.pory"
//Rematch	
# 62 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematch:: @ 8204DB3
# 63 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPreRematch, MSGBOX_DEFAULT
# 64 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_Start_Rematch_1
# 65 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 66 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 67 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_WinonaRematchEnd::
# 68 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_AUTOCLOSE
# 69 "data/maps/FortreeCity_Gym/scripts.pory"
	call Gym_EventScript_Reset_Random_Rematch
# 70 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_WINONA_REMATCH
# 71 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 72 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 73 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Start_Rematch_1::
# 74 "data/maps/FortreeCity_Gym/scripts.pory"
	checkitem ITEM_TM40_AERIAL_ACE, 1
# 75 "data/maps/FortreeCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 76 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq FortreeCity_Gym_EventScript_Start_Rematch_2
# 77 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
# 78 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 79 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM40_AERIAL_ACE
# 80 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
# 81 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 82 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 83 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Start_Rematch_2::
# 84 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM08 FortreeCity_Gym_EventScript_Start_Rematch_Party_1
# 85 "data/maps/FortreeCity_Gym/scripts.pory"
	checkitem ITEM_TM58_ROOST, 1
# 86 "data/maps/FortreeCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 87 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq FortreeCity_Gym_EventScript_Start_Rematch_3
# 88 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaRematchDefeat
# 89 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 90 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM58_ROOST
# 91 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
# 92 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 93 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 94 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Start_Rematch_3::
# 95 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM42 FortreeCity_Gym_EventScript_Start_Rematch_Party_2
# 96 "data/maps/FortreeCity_Gym/scripts.pory"
	checkitem ITEM_TM62_ACROBATICS, 1
# 97 "data/maps/FortreeCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 98 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq FortreeCity_Gym_EventScript_Start_Rematch_4
# 99 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaRematchDefeat
# 100 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 101 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM62_ACROBATICS
# 102 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
# 103 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 104 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 105 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Start_Rematch_4::
# 106 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM40 FortreeCity_Gym_EventScript_Start_Rematch_Party_3
# 107 "data/maps/FortreeCity_Gym/scripts.pory"
	checkitem ITEM_TM76_FLY, 1
# 108 "data/maps/FortreeCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 109 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq FortreeCity_Gym_EventScript_Start_Rematch_5
# 110 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaRematchDefeat
# 111 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 112 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM76_FLY
# 113 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
# 114 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 115 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 116 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Start_Rematch_5::
# 117 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04 FortreeCity_Gym_EventScript_Start_Rematch_Party_4
# 118 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_GOT_ALTARIA_MEGA_STONE FortreeCity_Gym_EventScript_Start_Rematch_6
# 119 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaRematchDefeat
# 120 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GetMegaStone, MSGBOX_DEFAULT
# 121 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_ALTARIANITE
# 122 "data/maps/FortreeCity_Gym/scripts.pory"
	setflag FLAG_GOT_ALTARIA_MEGA_STONE
# 123 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
# 124 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 125 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 126 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Start_Rematch_6::
# 127 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM03 FortreeCity_Gym_EventScript_Start_Rematch_Party_4
# 128 "data/maps/FortreeCity_Gym/scripts.pory"
	checkitem ITEM_TM114_BRAVE_BIRD, 1
# 129 "data/maps/FortreeCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 130 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq FortreeCity_Gym_EventScript_Start_Rematch_Final
# 131 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_5, FortreeCity_Gym_Text_WinonaRematchDefeat
# 132 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 133 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM114_BRAVE_BIRD
# 134 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
# 135 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 136 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 137 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Start_Rematch_Final::
# 138 "data/maps/FortreeCity_Gym/scripts.pory"
	random 5
# 139 "data/maps/FortreeCity_Gym/scripts.pory"
	switch VAR_RESULT
# 140 "data/maps/FortreeCity_Gym/scripts.pory"
	case 0, FortreeCity_Gym_EventScript_Start_Rematch_Party_1
# 141 "data/maps/FortreeCity_Gym/scripts.pory"
	case 1, FortreeCity_Gym_EventScript_Start_Rematch_Party_2
# 142 "data/maps/FortreeCity_Gym/scripts.pory"
	case 2, FortreeCity_Gym_EventScript_Start_Rematch_Party_3
# 143 "data/maps/FortreeCity_Gym/scripts.pory"
	case 3, FortreeCity_Gym_EventScript_Start_Rematch_Party_4
# 144 "data/maps/FortreeCity_Gym/scripts.pory"
	case 4, FortreeCity_Gym_EventScript_Start_Rematch_Party_5
# 145 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 146 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 147 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Start_Rematch_Party_1::
# 148 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
# 149 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, FortreeCity_Gym_EventScript_WinonaRematchEnd
# 150 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 151 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TIMID_MINT, 3
# 152 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
# 153 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 154 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 155 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Start_Rematch_Party_2::
# 156 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaRematchDefeat
# 157 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, FortreeCity_Gym_EventScript_WinonaRematchEnd
# 158 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 159 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_HASTY_MINT, 3
# 160 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
# 161 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 162 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 163 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Start_Rematch_Party_3::
# 164 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaRematchDefeat
# 165 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, FortreeCity_Gym_EventScript_WinonaRematchEnd
# 166 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 167 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_JOLLY_MINT, 3
# 168 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
# 169 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 170 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 171 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Start_Rematch_Party_4::
# 172 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaRematchDefeat
# 173 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, FortreeCity_Gym_EventScript_WinonaRematchEnd
# 174 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 175 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_NAIVE_MINT, 3
# 176 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
# 177 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 178 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 179 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Start_Rematch_Party_5::
# 180 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_5, FortreeCity_Gym_Text_WinonaRematchDefeat
# 181 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, FortreeCity_Gym_EventScript_WinonaRematchEnd
# 182 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 183 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_MODEST_MINT, 3
# 184 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_WinonaRematchEnd
# 185 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 186 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 187 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GetTM:
# 188 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: Please take this\n"
# 189 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Technical Machine.$"
# 190 "data/maps/FortreeCity_Gym/scripts.pory"

# 191 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GetMegaStone:
# 192 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: Please take this\n"
# 193 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Mega Stone, with you.\p"
# 194 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Make an Aggron hold it to\n"
# 195 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "unleash its Hidden Potential.$"
# 196 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 197 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GetReward:
# 198 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: Please take this\n"
# 199 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Item as a Reward.$"
# 200 "data/maps/FortreeCity_Gym/scripts.pory"

# 201 "data/maps/FortreeCity_Gym/scripts.pory"
//rematches end
# 202 "data/maps/FortreeCity_Gym/scripts.pory"
	
# 203 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce2:: @ 8216646
# 204 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM40
# 205 "data/maps/FortreeCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
# 206 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 207 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 208 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 209 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 210 "data/maps/FortreeCity_Gym/scripts.pory"

# 211 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GiveAerialAce:: @ 821666A
# 212 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox Gym_Text_Takethis2, MSGBOX_DEFAULT
# 213 "data/maps/FortreeCity_Gym/scripts.pory"
	giveitem ITEM_TM40
# 214 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_ExplainAerialAce, MSGBOX_DEFAULT
# 215 "data/maps/FortreeCity_Gym/scripts.pory"
	return
# 216 "data/maps/FortreeCity_Gym/scripts.pory"

# 217 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Jared:: @ 82166A8
# 218 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JARED, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
# 219 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_JaredPostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 221 "data/maps/FortreeCity_Gym/scripts.pory"

# 222 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Edwardo:: @ 82166BF
# 223 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_EDWARDO, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
# 224 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_EdwardoPostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 226 "data/maps/FortreeCity_Gym/scripts.pory"

# 227 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Flint:: @ 82166D6
# 228 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FLINT, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
# 229 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_FlintPostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 231 "data/maps/FortreeCity_Gym/scripts.pory"

# 232 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Ashley:: @ 82166ED
# 233 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ASHLEY, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
# 234 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_AshleyPostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 236 "data/maps/FortreeCity_Gym/scripts.pory"

# 237 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Humberto:: @ 8216704
# 238 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HUMBERTO, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
# 239 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_HumbertoPostBattle, MSGBOX_AUTOCLOSE
# 240 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 241 "data/maps/FortreeCity_Gym/scripts.pory"

# 242 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_Darius:: @ 821671B
# 243 "data/maps/FortreeCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DARIUS, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
# 244 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_DariusPostBattle, MSGBOX_AUTOCLOSE
# 245 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 246 "data/maps/FortreeCity_Gym/scripts.pory"

# 247 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuide:: @ 8216732
# 248 "data/maps/FortreeCity_Gym/scripts.pory"
	lock
# 249 "data/maps/FortreeCity_Gym/scripts.pory"
	faceplayer
# 250 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuidePostVictory
# 251 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 252 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 253 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 254 "data/maps/FortreeCity_Gym/scripts.pory"

# 255 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymGuidePostVictory:: @ 8216747
# 256 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 257 "data/maps/FortreeCity_Gym/scripts.pory"
	release
# 258 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 259 "data/maps/FortreeCity_Gym/scripts.pory"

# 260 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_LeftGymStatue:: @ 8216751
# 261 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 262 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 263 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 264 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 265 "data/maps/FortreeCity_Gym/scripts.pory"

# 266 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_RightGymStatue:: @ 8216761
# 267 "data/maps/FortreeCity_Gym/scripts.pory"
	lockall
# 268 "data/maps/FortreeCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_GymStatueCertified
# 269 "data/maps/FortreeCity_Gym/scripts.pory"
	goto FortreeCity_Gym_EventScript_GymStatue
# 270 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 271 "data/maps/FortreeCity_Gym/scripts.pory"

# 272 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatueCertified:: @ 8216771
# 273 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 274 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 275 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 276 "data/maps/FortreeCity_Gym/scripts.pory"

# 277 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_EventScript_GymStatue:: @ 821677B
# 278 "data/maps/FortreeCity_Gym/scripts.pory"
	msgbox FortreeCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 279 "data/maps/FortreeCity_Gym/scripts.pory"
	releaseall
# 280 "data/maps/FortreeCity_Gym/scripts.pory"
	end
# 281 "data/maps/FortreeCity_Gym/scripts.pory"

# 282 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuideAdvice: @ 8216785
# 283 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Yo, how's it going, Champion-\n"
# 284 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 285 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Fortree Gym Leader Winona is\n"
# 286 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "a master of Flying-type Pokémon.\p"
# 287 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting at the back of this Gym,\n"
# 288 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "behind the rotating doors.\p"
# 289 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's waiting for new challengers\n"
# 290 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "who are trying to take wing!\p"
# 291 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Okay, go for it!$"
# 292 "data/maps/FortreeCity_Gym/scripts.pory"

# 293 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymGuidePostVictory: @ 821687D
# 294 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You did it!\n"
# 295 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You've achieved liftoff!$"
# 296 "data/maps/FortreeCity_Gym/scripts.pory"

# 297 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredIntro: @ 82168A2
# 298 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Behold the elegant battle style of\n"
# 299 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Bird Pokémon!$"
# 300 "data/maps/FortreeCity_Gym/scripts.pory"

# 301 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredDefeat: @ 82168D3
# 302 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You…\n"
# 303 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You're strong…$"
# 304 "data/maps/FortreeCity_Gym/scripts.pory"

# 305 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_JaredPostBattle: @ 82168E7
# 306 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "A Trainer has to be smart to keep\n"
# 307 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "up with unexpected turns of events.\p"
# 308 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Do you have the smarts to get to\n"
# 309 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "our Leader?$"
# 310 "data/maps/FortreeCity_Gym/scripts.pory"

# 311 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoIntro: @ 821695A
# 312 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The lovers of Bird Pokémon aspire\n"
# 313 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to join this Gym.\p"
# 314 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "As a member of the Fortree Gym,\n"
# 315 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not allowed to lose!$"
# 316 "data/maps/FortreeCity_Gym/scripts.pory"

# 317 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoDefeat: @ 82169C7
# 318 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "It was too much of a load for me\n"
# 319 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "to bear…$"
# 320 "data/maps/FortreeCity_Gym/scripts.pory"

# 321 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_EdwardoPostBattle: @ 82169F1
# 322 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "The world is huge, and there are\n"
# 323 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "countless tough Trainers.\p"
# 324 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm going to keep training and make\n"
# 325 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "myself even stronger.$"
# 326 "data/maps/FortreeCity_Gym/scripts.pory"

# 327 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintIntro: @ 8216A66
# 328 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "There's no need for Winona, our Gym\n"
# 329 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Leader, to deal with you!\p"
# 330 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm plenty good enough for you!$"
# 331 "data/maps/FortreeCity_Gym/scripts.pory"

# 332 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintDefeat: @ 8216AC4
# 333 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona, I…\n"
# 334 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I lost!$"
# 335 "data/maps/FortreeCity_Gym/scripts.pory"

# 336 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_FlintPostBattle: @ 8216AD7
# 337 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona is cute and she's strong.\n"
# 338 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "She's the ultimate Leader!\p"
# 339 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Blush…$"
# 340 "data/maps/FortreeCity_Gym/scripts.pory"

# 341 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyIntro: @ 8216B1A
# 342 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona taught me personally!\n"
# 343 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You can't beat me easily!$"
# 344 "data/maps/FortreeCity_Gym/scripts.pory"

# 345 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyDefeat: @ 8216B51
# 346 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I was beaten…$"
# 347 "data/maps/FortreeCity_Gym/scripts.pory"

# 348 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_AshleyPostBattle: @ 8216B5F
# 349 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Thanks to Winona, the people of\n"
# 350 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Fortree can live without fear.$"
# 351 "data/maps/FortreeCity_Gym/scripts.pory"

# 352 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoIntro: @ 8216B9E
# 353 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "When Winona takes to battle, her face\n"
# 354 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "shines with beautiful determination…\p"
# 355 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I'm not letting you witness that\n"
# 356 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "lovely sight!$"
# 357 "data/maps/FortreeCity_Gym/scripts.pory"

# 358 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoDefeat: @ 8216C18
# 359 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Urk!\n"
# 360 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I couldn't stop you.$"
# 361 "data/maps/FortreeCity_Gym/scripts.pory"

# 362 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_HumbertoPostBattle: @ 8216C32
# 363 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better watch it!\n"
# 364 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Don't get distracted staring at Winona\l"
# 365 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "or you'll go crashing down in a heap!$"
# 366 "data/maps/FortreeCity_Gym/scripts.pory"

# 367 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusIntro: @ 8216C96
# 368 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You'd better know that there are all\n"
# 369 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "sorts of Flying-type Pokémon.\p"
# 370 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You do know that, right?$"
# 371 "data/maps/FortreeCity_Gym/scripts.pory"

# 372 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusDefeat: @ 8216CF2
# 373 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You seem to know your stuff!$"
# 374 "data/maps/FortreeCity_Gym/scripts.pory"

# 375 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_DariusPostBattle: @ 8216D0F
# 376 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Sure, you beat me all right.\n"
# 377 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But you'd better watch it! Our Leader\l"
# 378 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona's Pokémon are all business.$"
# 379 "data/maps/FortreeCity_Gym/scripts.pory"

# 380 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaIntro: @ 8216D75
# 381 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am Winona. I am the Leader of\n"
# 382 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the Fortree Pokémon Gym.\p"
# 383 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I have become one with Bird Pokémon\n"
# 384 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "and have soared the skies…\p"
# 385 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "However grueling the battle, we have\n"
# 386 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "triumphed with grace…\p"
# 387 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Witness the elegant choreography\n"
# 388 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "of Bird Pokémon and I!$"
# 389 "data/maps/FortreeCity_Gym/scripts.pory"

# 390 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaDefeat: @ 8216E60
# 391 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Never before have I seen a Trainer\n"
# 392 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "command Pokémon with more grace\l"
# 393 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "than I…\p"
# 394 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "In recognition of your prowess,\n"
# 395 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I present to you this Gym Badge.$"
# 396 "data/maps/FortreeCity_Gym/scripts.pory"

# 397 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ReceivedFeatherBadge: @ 8216EEC
# 398 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER} received the Feather Badge\n"
# 399 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "from Winona.$"
# 400 "data/maps/FortreeCity_Gym/scripts.pory"

# 401 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis: @ 8216F17
# 402 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "This…\n"
# 403 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "This is a gift from me.$"
# 404 "data/maps/FortreeCity_Gym/scripts.pory"

# 405 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_ExplainAerialAce: @ 8216FEC
# 406 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "TM40 contains Aerial Ace.\p"
# 407 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Its speed…\n"
# 408 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "No Pokémon should be able to avoid it.\p"
# 409 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "… … … … … …$"
# 410 "data/maps/FortreeCity_Gym/scripts.pory"

# 411 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_RegisteredWinona: @ 8217044
# 412 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Registered Gym Leader Winona\n"
# 413 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "in the Pokénav.$"
# 414 "data/maps/FortreeCity_Gym/scripts.pory"

# 415 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostBattle: @ 8217071
# 416 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Though I fell to you, I will remain\n"
# 417 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "devoted to Bird Pokémon.$"
# 418 "data/maps/FortreeCity_Gym/scripts.pory"

# 419 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatue: @ 82170AE
# 420 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Fortree City Pokémon Gym$"
# 421 "data/maps/FortreeCity_Gym/scripts.pory"

# 422 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_GymStatueCertified: @ 82170C7
# 423 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Fortree City Pokémon Gym\p"
# 424 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona'S Certified Trainers:\n"
# 425 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 426 "data/maps/FortreeCity_Gym/scripts.pory"

# 427 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPreRematch: @ 8217100
# 428 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: We humans can never escape\n"
# 429 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 430 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 431 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 432 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 433 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!$"
# 434 "data/maps/FortreeCity_Gym/scripts.pory"

# 435 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchDefeat: @ 82171E6
# 436 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I failed to reach your height again…$"
# 437 "data/maps/FortreeCity_Gym/scripts.pory"

# 438 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaPostRematch: @ 821720B
# 439 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: Even though I have lost,\n"
# 440 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the wings of my heart remain unbroken.\p"
# 441 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I can rise and soar again and\n"
# 442 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "yet again.\p"
# 443 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "I am convinced of it!$"
# 444 "data/maps/FortreeCity_Gym/scripts.pory"

# 445 "data/maps/FortreeCity_Gym/scripts.pory"
FortreeCity_Gym_Text_WinonaRematchNeedTwoMons: @ 8217292
# 446 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Winona: We humans can never escape\n"
# 447 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "gravity's pull on the ground.\p"
# 448 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "But by striving for excellence,\n"
# 449 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "we have the power to soar!\p"
# 450 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "You have scaled the pinnacle as\n"
# 451 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "the reigning Champion.\p"
# 452 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please, allow me to see your power\n"
# 453 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at full flight!\p"
# 454 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Oh, no… Do you have but one\n"
# 455 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Pokémon with you?\p"
# 456 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "Please return with two Pokémon\n"
# 457 "data/maps/FortreeCity_Gym/scripts.pory"
	.string "at the very least.$"
