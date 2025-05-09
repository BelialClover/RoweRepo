# 1 "data/maps/RustboroCity_Gym/scripts.pory"

# 2 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_MapScripts:: @ 8212F30
# 3 "data/maps/RustboroCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species
# 4 "data/maps/RustboroCity_Gym/scripts.pory"

# 5 "data/maps/RustboroCity_Gym/scripts.pory"
//First Team
# 6 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne:: @ 8212F31
# 7 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 8 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 9 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Roxanne_PostBattle
# 10 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 11 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 12 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 13 "data/maps/RustboroCity_Gym/scripts.pory"

# 14 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Roxanne_PostBattle::
# 15 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_RoxanneRematch
# 16 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_DEFAULT
# 17 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 18 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 19 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 20 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematch:: @ 8212FC8
# 21 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePreRematch, MSGBOX_DEFAULT
# 22 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_Start_Rematch_1
# 23 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 24 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 25 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneRematchEnd::
# 26 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 27 "data/maps/RustboroCity_Gym/scripts.pory"
	call Gym_EventScript_Reset_Random_Rematch
# 28 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ROXANNE_REMATCH
# 29 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 30 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 31 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Start_Rematch_1::
# 32 "data/maps/RustboroCity_Gym/scripts.pory"
	checkitem ITEM_TM39_ROCK_TOMB, 1
# 33 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 34 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq RustboroCity_Gym_EventScript_Start_Rematch_2
# 35 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
# 36 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 37 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM39_ROCK_TOMB
# 38 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
# 39 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 40 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 41 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Start_Rematch_2::
# 42 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM08 RustboroCity_Gym_EventScript_Start_Rematch_Party_1
# 43 "data/maps/RustboroCity_Gym/scripts.pory"
	checkitem ITEM_TM69_ROCK_POLISH, 1
# 44 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 45 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq RustboroCity_Gym_EventScript_Start_Rematch_3
# 46 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneRematchDefeat
# 47 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 48 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM69_ROCK_POLISH
# 49 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
# 50 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 51 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 52 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Start_Rematch_3::
# 53 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM42 RustboroCity_Gym_EventScript_Start_Rematch_Party_2
# 54 "data/maps/RustboroCity_Gym/scripts.pory"
	checkitem ITEM_TM110_STEALTH_ROCK, 1
# 55 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 56 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq RustboroCity_Gym_EventScript_Start_Rematch_4
# 57 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneRematchDefeat
# 58 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 59 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM110_STEALTH_ROCK
# 60 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
# 61 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 62 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 63 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Start_Rematch_4::
# 64 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM40 RustboroCity_Gym_EventScript_Start_Rematch_Party_3
# 65 "data/maps/RustboroCity_Gym/scripts.pory"
	checkitem ITEM_TM107_POWER_GEM, 1
# 66 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 67 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq RustboroCity_Gym_EventScript_Start_Rematch_5
# 68 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneRematchDefeat
# 69 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 70 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM107_POWER_GEM
# 71 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
# 72 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 73 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 74 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Start_Rematch_5::
# 75 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04 RustboroCity_Gym_EventScript_Start_Rematch_Party_4
# 76 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_GOT_AGGRON_MEGA_STONE RustboroCity_Gym_EventScript_Start_Rematch_6
# 77 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneRematchDefeat
# 78 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GetMegaStone, MSGBOX_DEFAULT
# 79 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_AGGRONITE
# 80 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_GOT_AGGRON_MEGA_STONE
# 81 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
# 82 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 83 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 84 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Start_Rematch_6::
# 85 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM03 RustboroCity_Gym_EventScript_Start_Rematch_Party_4
# 86 "data/maps/RustboroCity_Gym/scripts.pory"
	checkitem ITEM_TM71_STONE_EDGE, 1
# 87 "data/maps/RustboroCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
# 88 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_eq RustboroCity_Gym_EventScript_Start_Rematch_Final
# 89 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_5, RustboroCity_Gym_Text_RoxanneRematchDefeat
# 90 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GetTM, MSGBOX_DEFAULT
# 91 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM71_STONE_EDGE
# 92 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
# 93 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 94 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 95 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Start_Rematch_Final::
# 96 "data/maps/RustboroCity_Gym/scripts.pory"
	random 5
# 97 "data/maps/RustboroCity_Gym/scripts.pory"
	switch VAR_RESULT
# 98 "data/maps/RustboroCity_Gym/scripts.pory"
	case 0, RustboroCity_Gym_EventScript_Start_Rematch_Party_1
# 99 "data/maps/RustboroCity_Gym/scripts.pory"
	case 1, RustboroCity_Gym_EventScript_Start_Rematch_Party_2
# 100 "data/maps/RustboroCity_Gym/scripts.pory"
	case 2, RustboroCity_Gym_EventScript_Start_Rematch_Party_3
# 101 "data/maps/RustboroCity_Gym/scripts.pory"
	case 3, RustboroCity_Gym_EventScript_Start_Rematch_Party_4
# 102 "data/maps/RustboroCity_Gym/scripts.pory"
	case 4, RustboroCity_Gym_EventScript_Start_Rematch_Party_5
# 103 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 104 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 105 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Start_Rematch_Party_1::
# 106 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
# 107 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, RustboroCity_Gym_EventScript_RoxanneRematchEnd
# 108 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 109 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_BOLD_MINT, 3
# 110 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
# 111 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 112 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 113 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Start_Rematch_Party_2::
# 114 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneRematchDefeat
# 115 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, RustboroCity_Gym_EventScript_RoxanneRematchEnd
# 116 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 117 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_IMPISH_MINT, 3
# 118 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
# 119 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 120 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 121 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Start_Rematch_Party_3::
# 122 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneRematchDefeat
# 123 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, RustboroCity_Gym_EventScript_RoxanneRematchEnd
# 124 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 125 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_LAX_MINT, 3
# 126 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
# 127 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 128 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 129 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Start_Rematch_Party_4::
# 130 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneRematchDefeat
# 131 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, RustboroCity_Gym_EventScript_RoxanneRematchEnd
# 132 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 133 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_RELAXED_MINT, 3
# 134 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
# 135 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 136 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 137 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Start_Rematch_Party_5::
# 138 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_5, RustboroCity_Gym_Text_RoxanneRematchDefeat
# 139 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM04, RustboroCity_Gym_EventScript_RoxanneRematchEnd
# 140 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GetReward, MSGBOX_DEFAULT
# 141 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_ADAMANT_MINT, 3
# 142 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_RoxanneRematchEnd
# 143 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 144 "data/maps/RustboroCity_Gym/scripts.pory"

# 145 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RoxanneDefeated:: @ 8212F66
# 146 "data/maps/RustboroCity_Gym/scripts.pory"
	message RustboroCity_Gym_Text_ReceivedStoneBadge
# 147 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 148 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 149 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 150 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 151 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 152 "data/maps/RustboroCity_Gym/scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 153 "data/maps/RustboroCity_Gym/scripts.pory"
	call RustboroCity_Gym_EventScript_GiveRockTomb
# 154 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 155 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 156 "data/maps/RustboroCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 157 "data/maps/RustboroCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 158 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 159 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 160 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 161 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 162 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 163 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 164 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 165 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 166 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 167 "data/maps/RustboroCity_Gym/scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 168 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ROXANNE_REMATCH
# 169 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 170 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 171 "data/maps/RustboroCity_Gym/scripts.pory"

# 172 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GiveRockTomb:: @ 8212FA4
# 173 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox Gym_Text_Takethis2, MSGBOX_DEFAULT
# 174 "data/maps/RustboroCity_Gym/scripts.pory"
	giveitem ITEM_TM39
# 175 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 176 "data/maps/RustboroCity_Gym/scripts.pory"
	return
# 177 "data/maps/RustboroCity_Gym/scripts.pory"

# 178 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Josh:: @ 8212FE3
# 179 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
# 180 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 181 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 182 "data/maps/RustboroCity_Gym/scripts.pory"

# 183 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Tommy:: @ 8212FFA
# 184 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
# 185 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 186 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 187 "data/maps/RustboroCity_Gym/scripts.pory"

# 188 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_Marc:: @ 8213011
# 189 "data/maps/RustboroCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
# 190 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
# 191 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 192 "data/maps/RustboroCity_Gym/scripts.pory"

# 193 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuide:: @ 8213028
# 194 "data/maps/RustboroCity_Gym/scripts.pory"
	lock
# 195 "data/maps/RustboroCity_Gym/scripts.pory"
	faceplayer
# 196 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
# 197 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 198 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 199 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 200 "data/maps/RustboroCity_Gym/scripts.pory"

# 201 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymGuidePostVictory:: @ 821303D
# 202 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 203 "data/maps/RustboroCity_Gym/scripts.pory"
	release
# 204 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 205 "data/maps/RustboroCity_Gym/scripts.pory"

# 206 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_LeftGymStatue:: @ 8213047
# 207 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 208 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 209 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 210 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 211 "data/maps/RustboroCity_Gym/scripts.pory"

# 212 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RightGymStatue:: @ 8213057
# 213 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 214 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
# 215 "data/maps/RustboroCity_Gym/scripts.pory"
	goto RustboroCity_Gym_EventScript_GymStatue
# 216 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 217 "data/maps/RustboroCity_Gym/scripts.pory"

# 218 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatueCertified:: @ 8213067
# 219 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 220 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 221 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 222 "data/maps/RustboroCity_Gym/scripts.pory"

# 223 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_GymStatue:: @ 8213071
# 224 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 225 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 226 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 227 "data/maps/RustboroCity_Gym/scripts.pory"

# 228 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_EventScript_RegisterRoxanne:: @ 821307B
# 229 "data/maps/RustboroCity_Gym/scripts.pory"
	lockall
# 230 "data/maps/RustboroCity_Gym/scripts.pory"
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
# 231 "data/maps/RustboroCity_Gym/scripts.pory"
	waitmessage
# 232 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 233 "data/maps/RustboroCity_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 234 "data/maps/RustboroCity_Gym/scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 235 "data/maps/RustboroCity_Gym/scripts.pory"
	waitfanfare
# 236 "data/maps/RustboroCity_Gym/scripts.pory"
	closemessage
# 237 "data/maps/RustboroCity_Gym/scripts.pory"
	delay 30
# 238 "data/maps/RustboroCity_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 239 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 240 "data/maps/RustboroCity_Gym/scripts.pory"
	releaseall
# 241 "data/maps/RustboroCity_Gym/scripts.pory"
	end
# 242 "data/maps/RustboroCity_Gym/scripts.pory"

# 243 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuideAdvice: @ 821309D
# 244 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Yo, how's it going?\p"
# 245 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Listen, my friend!\n"
# 246 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you like to become the Champion?\p"
# 247 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm no Trainer, not me, but I can\n"
# 248 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "sure give you winning advice.\p"
# 249 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's settled, then! We'll aim for the\n"
# 250 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon Championship together!\p"
# 251 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It's your job as a Trainer to collect\n"
# 252 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Gym Badges, am I right?\p"
# 253 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "But Gym Leaders aren't pushovers!\p"
# 254 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "And that's where I come in!\n"
# 255 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm here to provide expert advice!\p"
# 256 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne, the Gym Leader, is a user\n"
# 257 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "of Rock-type Pokémon.\p"
# 258 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Rock type is very durable, but\n"
# 259 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it can't stand Water-type and\l"
# 260 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grass-type moves.\p"
# 261 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Come see me afterwards, if you beat\n"
# 262 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the Gym Leader.\p"
# 263 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, go for it!$"
# 264 "data/maps/RustboroCity_Gym/scripts.pory"

# 265 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymGuidePostVictory: @ 82132E2
# 266 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
# 267 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My cheering must've worked!\p"
# 268 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Great!\n"
# 269 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Check your Trainer card.\p"
# 270 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Stone Badge you got should be\n"
# 271 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "properly recorded on it.\p"
# 272 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "In other words…\p"
# 273 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You've climbed the first step on\n"
# 274 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the stairs to the Championship!\p"
# 275 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That's got to feel awesome!$"
# 276 "data/maps/RustboroCity_Gym/scripts.pory"

# 277 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshIntro: @ 82133E9
# 278 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Don't take us Gym Trainers lightly!\n"
# 279 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'll show you why we're better!$"
# 280 "data/maps/RustboroCity_Gym/scripts.pory"

# 281 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshDefeat: @ 821342D
# 282 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You were too good for me…$"
# 283 "data/maps/RustboroCity_Gym/scripts.pory"

# 284 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_JoshPostBattle: @ 8213447
# 285 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You haven't seen anything of the Rock\n"
# 286 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "type's terrifying power!$"
# 287 "data/maps/RustboroCity_Gym/scripts.pory"

# 288 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyIntro: @ 8213486
# 289 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
# 290 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "a chance against Roxanne!$"
# 291 "data/maps/RustboroCity_Gym/scripts.pory"

# 292 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyDefeat: @ 82134C6
# 293 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"
# 294 "data/maps/RustboroCity_Gym/scripts.pory"

# 295 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_TommyPostBattle: @ 82134E6
# 296 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne is stronger than me by\n"
# 297 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "several times.\p"
# 298 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You'd better be on your guard!$"
# 299 "data/maps/RustboroCity_Gym/scripts.pory"

# 300 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcIntro: @ 8213533
# 301 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
# 302 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "but so what?\p"
# 303 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "My Rock Pokémon need room to\n"
# 304 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rampage!$"
# 305 "data/maps/RustboroCity_Gym/scripts.pory"

# 306 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcDefeat: @ 8213589
# 307 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
# 308 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Our challenger is one feisty customer!$"
# 309 "data/maps/RustboroCity_Gym/scripts.pory"

# 310 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_MarcPostBattle: @ 82135C0
# 311 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I have to hand it to our Leader.\p"
# 312 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It took smarts and sense for her to\n"
# 313 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "pick the Rock type at her young age.$"
# 314 "data/maps/RustboroCity_Gym/scripts.pory"

# 315 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneIntro: @ 821362A
# 316 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Hello, I am Roxanne, the Rustboro\n"
# 317 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon Gym Leader.\p"
# 318 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I became a Gym Leader so that I might\n"
# 319 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "apply what I learned at the Pokémon\l"
# 320 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Trainer's School in battle.\p"
# 321 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Would you kindly demonstrate how you\n"
# 322 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battle, and with which Pokémon?$"
# 323 "data/maps/RustboroCity_Gym/scripts.pory"

# 324 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneDefeat: @ 821370B
# 325 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "So…\n"
# 326 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I lost…\p"
# 327 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It seems that I still have much more\n"
# 328 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "to learn…\p"
# 329 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I understand.\p"
# 330 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "The Pokémon League's rules state\n"
# 331 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that Trainers are to be given this\l"
# 332 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "if they defeat a Gym Leader.\p"
# 333 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please accept the official Pokémon\n"
# 334 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "League Stone Badge.$"
# 335 "data/maps/RustboroCity_Gym/scripts.pory"

# 336 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ReceivedStoneBadge: @ 82137EC
# 337 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER} received the Stone Badge\n"
# 338 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "from Roxanne.$"
# 339 "data/maps/RustboroCity_Gym/scripts.pory"

# 340 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_StoneBadgeInfoTakeThis: @ 8213816
# 341 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please take this with you, too.$"
# 342 "data/maps/RustboroCity_Gym/scripts.pory"

# 343 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_ExplainRockTomb: @ 82138B1
# 344 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That Technical Machina, TM39,\n"
# 345 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "contains Rock Tomb.\p"
# 346 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "It not only inflicts damage by dropping\n"
# 347 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "rocks, it also lowers Speed.\p"
# 348 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 349 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "the move to a Pokémon.\p"
# 350 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "A TM can be used indefinitely, so use\n"
# 351 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "it without thinking it twice.$"
# 352 "data/maps/RustboroCity_Gym/scripts.pory"

# 353 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostBattle: @ 82139A7
# 354 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 355 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "challenge other Gym Leaders.\p"
# 356 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "By battling many Trainers, you should\n"
# 357 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "learn many things.$"
# 358 "data/maps/RustboroCity_Gym/scripts.pory"

# 359 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatue: @ 8213A21
# 360 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym$"
# 361 "data/maps/RustboroCity_Gym/scripts.pory"

# 362 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GymStatueCertified: @ 8213A3B
# 363 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Rustboro City Pokémon Gym\p"
# 364 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne's Certified TrainerS:\n"
# 365 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 366 "data/maps/RustboroCity_Gym/scripts.pory"

# 367 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRegisterCall: @ 8213A76
# 368 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 369 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 370 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: Oh, hello, {PLAYER}?\n"
# 371 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "This is Roxanne of Rustboro City.\p"
# 372 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I heard from Brawly that you're\n"
# 373 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 374 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "TrainerS at an incredible clip.\p"
# 375 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 376 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 377 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I promise, I will shape up my Gym\n"
# 378 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 379 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 380 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 381 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … …\n"
# 382 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 383 "data/maps/RustboroCity_Gym/scripts.pory"

# 384 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RegisteredRoxanne: @ 8213C01
# 385 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Registered Gym Leader Roxanne\n"
# 386 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "in the Pokénav.$"
# 387 "data/maps/RustboroCity_Gym/scripts.pory"

# 388 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePreRematch: @ 8213C2F
# 389 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I'm so glad to see you again.\n"
# 390 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm Roxanne, the Gym Leader here.\p"
# 391 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 392 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 393 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 394 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 395 "data/maps/RustboroCity_Gym/scripts.pory"

# 396 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchDefeat: @ 8213CF9
# 397 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Grr…\n"
# 398 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 399 "data/maps/RustboroCity_Gym/scripts.pory"

# 400 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxannePostRematch: @ 8213D12
# 401 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I still have much to learn\n"
# 402 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "when it comes to battling Pokémon.\p"
# 403 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 404 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "all that much more!$"
# 405 "data/maps/RustboroCity_Gym/scripts.pory"

# 406 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons: @ 8213D93
# 407 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: I'm so glad to see you again.\n"
# 408 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm Roxanne, the Gym Leader here.\p"
# 409 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 410 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 411 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 412 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "we've become…\p"
# 413 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Oh, no…\n"
# 414 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "You only have one Pokémon with you?\p"
# 415 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 416 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Pokémon.$"
# 417 "data/maps/RustboroCity_Gym/scripts.pory"

# 418 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GetTM:
# 419 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: Please take this\n"
# 420 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Technical Machine.$"
# 421 "data/maps/RustboroCity_Gym/scripts.pory"

# 422 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GetMegaStone:
# 423 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: Please take this\n"
# 424 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Mega Stone, with you.\p"
# 425 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Make an Aggron hold it to\n"
# 426 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "unleash its Hidden Potential.$"
# 427 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 428 "data/maps/RustboroCity_Gym/scripts.pory"
RustboroCity_Gym_Text_GetReward:
# 429 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Roxanne: Please take this\n"
# 430 "data/maps/RustboroCity_Gym/scripts.pory"
	.string "Item as a Reward.$"
# 431 "data/maps/RustboroCity_Gym/scripts.pory"

# 432 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 433 "data/maps/RustboroCity_Gym/scripts.pory"
Gym_EventScript_Reset_Random_Rematch::
# 434 "data/maps/RustboroCity_Gym/scripts.pory"
	random 9
# 435 "data/maps/RustboroCity_Gym/scripts.pory"
	switch VAR_RESULT
# 436 "data/maps/RustboroCity_Gym/scripts.pory"
	case 0, Gym_EventScript_Reset_Roxanne_Rematch
# 437 "data/maps/RustboroCity_Gym/scripts.pory"
	case 1, Gym_EventScript_Reset_Brawly_Rematch
# 438 "data/maps/RustboroCity_Gym/scripts.pory"
	case 2, Gym_EventScript_Reset_Wattson_Rematch
# 439 "data/maps/RustboroCity_Gym/scripts.pory"
	case 3, Gym_EventScript_Reset_Flannery_Rematch
# 440 "data/maps/RustboroCity_Gym/scripts.pory"
	case 4, Gym_EventScript_Reset_Norman_Rematch
# 441 "data/maps/RustboroCity_Gym/scripts.pory"
	case 5, Gym_EventScript_Reset_Winona_Rematch
# 442 "data/maps/RustboroCity_Gym/scripts.pory"
	case 6, Gym_EventScript_Reset_Tate_Liza_Rematch
# 443 "data/maps/RustboroCity_Gym/scripts.pory"
	case 7, Gym_EventScript_Reset_Juan_Rematch
# 444 "data/maps/RustboroCity_Gym/scripts.pory"
	case 8, Gym_EventScript_Reset_Ability_Capsule
# 445 "data/maps/RustboroCity_Gym/scripts.pory"
	return
# 446 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 447 "data/maps/RustboroCity_Gym/scripts.pory"
Gym_EventScript_Reset_Roxanne_Rematch::
# 448 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Gym_EventScript_Reset_Random_Rematch
# 449 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_ROXANNE_REMATCH
# 450 "data/maps/RustboroCity_Gym/scripts.pory"
	return
# 451 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 452 "data/maps/RustboroCity_Gym/scripts.pory"
Gym_EventScript_Reset_Brawly_Rematch::
# 453 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Gym_EventScript_Reset_Random_Rematch
# 454 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_BRAWLY_REMATCH
# 455 "data/maps/RustboroCity_Gym/scripts.pory"
	return
# 456 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 457 "data/maps/RustboroCity_Gym/scripts.pory"
Gym_EventScript_Reset_Wattson_Rematch::
# 458 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Gym_EventScript_Reset_Random_Rematch
# 459 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_WATTSON_REMATCH
# 460 "data/maps/RustboroCity_Gym/scripts.pory"
	return
# 461 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 462 "data/maps/RustboroCity_Gym/scripts.pory"
Gym_EventScript_Reset_Flannery_Rematch::
# 463 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, Gym_EventScript_Reset_Random_Rematch
# 464 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_FLANNERY_REMATCH
# 465 "data/maps/RustboroCity_Gym/scripts.pory"
	return
# 466 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 467 "data/maps/RustboroCity_Gym/scripts.pory"
Gym_EventScript_Reset_Norman_Rematch::
# 468 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, Gym_EventScript_Reset_Random_Rematch
# 469 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_NORMAN_REMATCH
# 470 "data/maps/RustboroCity_Gym/scripts.pory"
	return
# 471 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 472 "data/maps/RustboroCity_Gym/scripts.pory"
Gym_EventScript_Reset_Winona_Rematch::
# 473 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, Gym_EventScript_Reset_Random_Rematch
# 474 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_WINONA_REMATCH
# 475 "data/maps/RustboroCity_Gym/scripts.pory"
	return
# 476 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 477 "data/maps/RustboroCity_Gym/scripts.pory"
Gym_EventScript_Reset_Tate_Liza_Rematch::
# 478 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, Gym_EventScript_Reset_Random_Rematch
# 479 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_TATE_AND_LIZA_REMATCH
# 480 "data/maps/RustboroCity_Gym/scripts.pory"
	return
# 481 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 482 "data/maps/RustboroCity_Gym/scripts.pory"
Gym_EventScript_Reset_Juan_Rematch::
# 483 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, Gym_EventScript_Reset_Random_Rematch
# 484 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_JUAN_REMATCH
# 485 "data/maps/RustboroCity_Gym/scripts.pory"
	return
# 486 "data/maps/RustboroCity_Gym/scripts.pory"
	
# 487 "data/maps/RustboroCity_Gym/scripts.pory"
Gym_EventScript_Reset_Ability_Capsule::
# 488 "data/maps/RustboroCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, Gym_EventScript_Reset_Random_Rematch
# 489 "data/maps/RustboroCity_Gym/scripts.pory"
	clearflag FLAG_DAILY_ABILITY_PATCH
# 490 "data/maps/RustboroCity_Gym/scripts.pory"
	return
