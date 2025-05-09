# 1 "data/maps/InsideOfTruck/scripts.pory"

# 2 "data/maps/InsideOfTruck/scripts.pory"
InsideOfTruck_MapScripts:: @ 823BEDA
# 3 "data/maps/InsideOfTruck/scripts.pory"
	.byte 0
# 4 "data/maps/InsideOfTruck/scripts.pory"
	
# 5 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Starter_No_Exploit::
# 6 "data/maps/InsideOfTruck/scripts.pory"
	release
# 7 "data/maps/InsideOfTruck/scripts.pory"
	end
# 8 "data/maps/InsideOfTruck/scripts.pory"
	
# 9 "data/maps/InsideOfTruck/scripts.pory"
	
# 10 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Introduction:
# 11 "data/maps/InsideOfTruck/scripts.pory"
	.string "Welcome to Pokémon R.O.W.E.\n"
# 12 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you have any questions?$"
# 13 "data/maps/InsideOfTruck/scripts.pory"
	
# 14 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Level::
# 15 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 16 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Difficulty, MSGBOX_DEFAULT
# 17 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 18 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_LEVEL, 0
# 19 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 20 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Level_Easy
# 21 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Level_Normal
# 22 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Level_Hard
# 23 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Level
# 24 "data/maps/InsideOfTruck/scripts.pory"
	end
# 25 "data/maps/InsideOfTruck/scripts.pory"
	
# 26 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Difficulty:
# 27 "data/maps/InsideOfTruck/scripts.pory"
	.string "Please select the difficulty level you\n"
# 28 "data/maps/InsideOfTruck/scripts.pory"
	.string "want to play on.$"
# 29 "data/maps/InsideOfTruck/scripts.pory"
	
# 30 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Level_Easy::
# 31 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 32 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Difficulty_Easy, MSGBOX_YESNO
# 33 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
# 34 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq Start_EventScript_Game_Level
# 35 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DIFFICULTY_SET
# 36 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_DIFFICULTY, DIFFICULTY_EASY
# 37 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LEVEL_CAP_LEVEL, 2
# 38 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Difficulty_Save
# 39 "data/maps/InsideOfTruck/scripts.pory"
	end
# 40 "data/maps/InsideOfTruck/scripts.pory"
	
# 41 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Difficulty_Easy:
# 42 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to play on {COLOR GREEN}Easy mode{COLOR DARK_GREY}?\n"
# 43 "data/maps/InsideOfTruck/scripts.pory"
	.string "This can't be changed later!$"
# 44 "data/maps/InsideOfTruck/scripts.pory"
	
# 45 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Level_Normal::
# 46 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 47 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Difficulty_Normal, MSGBOX_YESNO
# 48 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
# 49 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq Start_EventScript_Game_Level
# 50 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DIFFICULTY_SET
# 51 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_DIFFICULTY, DIFFICULTY_NORMAL
# 52 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LEVEL_CAP_LEVEL, 1
# 53 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Difficulty_Save
# 54 "data/maps/InsideOfTruck/scripts.pory"
	end
# 55 "data/maps/InsideOfTruck/scripts.pory"
	
# 56 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Difficulty_Normal:
# 57 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to play on {COLOR BLUE}Normal mode{COLOR DARK_GREY}?\n"
# 58 "data/maps/InsideOfTruck/scripts.pory"
	.string "This can be changed later!$"
# 59 "data/maps/InsideOfTruck/scripts.pory"
	
# 60 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Level_Hard::
# 61 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 62 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Difficulty_Hard, MSGBOX_YESNO
# 63 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
# 64 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq Start_EventScript_Game_Level
# 65 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DIFFICULTY_SET
# 66 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_DIFFICULTY, DIFFICULTY_HARD
# 67 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LEVEL_CAP_LEVEL, 0
# 68 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Difficulty_Save
# 69 "data/maps/InsideOfTruck/scripts.pory"
	end
# 70 "data/maps/InsideOfTruck/scripts.pory"
	
# 71 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Difficulty_Hard:
# 72 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to play on {COLOR RED}Hard mode{COLOR DARK_GREY}?\n"
# 73 "data/maps/InsideOfTruck/scripts.pory"
	.string "This can be changed later!$"
# 74 "data/maps/InsideOfTruck/scripts.pory"

# 75 "data/maps/InsideOfTruck/scripts.pory"
//No Evs Mode Start	
# 76 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evs::
# 77 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 78 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NO_EVS_MODE, Start_EventScript_Game_Mode_No_Evs_Disable
# 79 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evs, MSGBOX_DEFAULT
# 80 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 81 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 82 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 83 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_No_Evs_Enable_Function
# 84 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_No_Evs_Info
# 85 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 86 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 87 "data/maps/InsideOfTruck/scripts.pory"
	end
# 88 "data/maps/InsideOfTruck/scripts.pory"
	
# 89 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evs:
# 90 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 91 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}No EVs mode{COLOR DARK_GREY}?$"
# 92 "data/maps/InsideOfTruck/scripts.pory"
	
# 93 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evs_Disable::
# 94 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 95 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evs_Disable, MSGBOX_DEFAULT
# 96 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 97 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 98 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 99 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_No_Evs_Disable_Function
# 100 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_No_Evs_Info
# 101 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 102 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 103 "data/maps/InsideOfTruck/scripts.pory"
	end
# 104 "data/maps/InsideOfTruck/scripts.pory"
	
# 105 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evs_Disable:
# 106 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 107 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}No EVs mode{COLOR DARK_GREY}?$"
# 108 "data/maps/InsideOfTruck/scripts.pory"
	
# 109 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evs_Disable_Function::
# 110 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 111 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evs_was_Disabled, MSGBOX_DEFAULT
# 112 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_NO_EVS_MODE
# 113 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 114 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Evs
# 115 "data/maps/InsideOfTruck/scripts.pory"
	end
# 116 "data/maps/InsideOfTruck/scripts.pory"
	
# 117 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evs_Enable_Function::
# 118 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 119 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evs_was_Enabled, MSGBOX_DEFAULT
# 120 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 121 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_NO_EVS_MODE
# 122 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Evs_Disable
# 123 "data/maps/InsideOfTruck/scripts.pory"
	end
# 124 "data/maps/InsideOfTruck/scripts.pory"
	
# 125 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evs_Info::
# 126 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 127 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evs_Info, MSGBOX_DEFAULT
# 128 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NO_EVS_MODE, Start_EventScript_Game_Mode_No_Evs_Disable
# 129 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Evs
# 130 "data/maps/InsideOfTruck/scripts.pory"
	end
# 131 "data/maps/InsideOfTruck/scripts.pory"
	
# 132 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evs_Info:
# 133 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will disable EV gain for both the\n"
# 134 "data/maps/InsideOfTruck/scripts.pory"
	.string "player and enemy trainers.$"
# 135 "data/maps/InsideOfTruck/scripts.pory"
	
# 136 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evs_was_Enabled:
# 137 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}No EVs mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 138 "data/maps/InsideOfTruck/scripts.pory"
	
# 139 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evs_was_Disabled:
# 140 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}No EVs mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 141 "data/maps/InsideOfTruck/scripts.pory"
//
# 142 "data/maps/InsideOfTruck/scripts.pory"

# 143 "data/maps/InsideOfTruck/scripts.pory"
//Gym Shuffle Mode Start ----------------------------------------------------------------------------------------------------
# 144 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Gym_Shuffle::
# 145 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 146 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_GYM_SHUFFLE_MODE, Start_EventScript_Game_Mode_Gym_Shuffle_Disable
# 147 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Gym_Shuffle, MSGBOX_DEFAULT
# 148 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 149 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 150 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 151 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Gym_Shuffle_Enable_Function
# 152 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Gym_Shuffle_Info
# 153 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 154 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 155 "data/maps/InsideOfTruck/scripts.pory"
	end
# 156 "data/maps/InsideOfTruck/scripts.pory"
	
# 157 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Gym_Shuffle:
# 158 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 159 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Gym Shuffle mode{COLOR DARK_GREY}?$"
# 160 "data/maps/InsideOfTruck/scripts.pory"
	
# 161 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Gym_Shuffle_Disable::
# 162 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 163 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Gym_Shuffle_Disable, MSGBOX_DEFAULT
# 164 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 165 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 166 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 167 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Gym_Shuffle_Disable_Function
# 168 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Gym_Shuffle_Info
# 169 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 170 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 171 "data/maps/InsideOfTruck/scripts.pory"
	end
# 172 "data/maps/InsideOfTruck/scripts.pory"
	
# 173 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Gym_Shuffle_Disable:
# 174 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 175 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Gym Shuffle mode{COLOR DARK_GREY}?$"
# 176 "data/maps/InsideOfTruck/scripts.pory"
	
# 177 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Gym_Shuffle_Disable_Function::
# 178 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 179 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Gym_Shuffle_was_Disabled, MSGBOX_DEFAULT
# 180 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_GYM_SHUFFLE_MODE
# 181 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 182 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Gym_Shuffle
# 183 "data/maps/InsideOfTruck/scripts.pory"
	end
# 184 "data/maps/InsideOfTruck/scripts.pory"
	
# 185 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Gym_Shuffle_Enable_Function::
# 186 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 187 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Gym_Shuffle_was_Enabled, MSGBOX_DEFAULT
# 188 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 189 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_GYM_SHUFFLE_MODE
# 190 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Gym_Shuffle_Disable
# 191 "data/maps/InsideOfTruck/scripts.pory"
	end
# 192 "data/maps/InsideOfTruck/scripts.pory"
	
# 193 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Gym_Shuffle_Info::
# 194 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 195 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Gym_Shuffle_Info, MSGBOX_DEFAULT
# 196 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_GYM_SHUFFLE_MODE, Start_EventScript_Game_Mode_Gym_Shuffle_Disable
# 197 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Gym_Shuffle
# 198 "data/maps/InsideOfTruck/scripts.pory"
	end
# 199 "data/maps/InsideOfTruck/scripts.pory"
	
# 200 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Gym_Shuffle_Info:
# 201 "data/maps/InsideOfTruck/scripts.pory"
	.string "This shuffles around the locations of\n"
# 202 "data/maps/InsideOfTruck/scripts.pory"
	.string "Gyms for a different experience.$"
# 203 "data/maps/InsideOfTruck/scripts.pory"
	
# 204 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Gym_Shuffle_was_Enabled:
# 205 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Gym Shuffle mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 206 "data/maps/InsideOfTruck/scripts.pory"
	
# 207 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Gym_Shuffle_was_Disabled:
# 208 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Gym Shuffle mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 209 "data/maps/InsideOfTruck/scripts.pory"
//
# 210 "data/maps/InsideOfTruck/scripts.pory"

# 211 "data/maps/InsideOfTruck/scripts.pory"
//Double Battle Mode Start ----------------------------------------------------------------------------------------------------
# 212 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Double_Battle::
# 213 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 214 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_DOUBLE_BATTLE_MODE, Start_EventScript_Game_Mode_Double_Battle_Disable
# 215 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Double_Battle, MSGBOX_DEFAULT
# 216 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 217 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 218 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 219 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Double_Battle_Enable_Function
# 220 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Double_Battle_Info
# 221 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 222 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 223 "data/maps/InsideOfTruck/scripts.pory"
	end
# 224 "data/maps/InsideOfTruck/scripts.pory"
	
# 225 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Double_Battle:
# 226 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 227 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Double Battle mode{COLOR DARK_GREY}?$"
# 228 "data/maps/InsideOfTruck/scripts.pory"
	
# 229 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Double_Battle_Disable::
# 230 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 231 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Double_Battle_Disable, MSGBOX_DEFAULT
# 232 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 233 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 234 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 235 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Double_Battle_Disable_Function
# 236 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Double_Battle_Info
# 237 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 238 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 239 "data/maps/InsideOfTruck/scripts.pory"
	end
# 240 "data/maps/InsideOfTruck/scripts.pory"
	
# 241 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Double_Battle_Disable:
# 242 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 243 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Double Battle mode{COLOR DARK_GREY}?$"
# 244 "data/maps/InsideOfTruck/scripts.pory"
	
# 245 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Double_Battle_Disable_Function::
# 246 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 247 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Double_Battle_was_Disabled, MSGBOX_DEFAULT
# 248 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_DOUBLE_BATTLE_MODE
# 249 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 250 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Double_Battle
# 251 "data/maps/InsideOfTruck/scripts.pory"
	end
# 252 "data/maps/InsideOfTruck/scripts.pory"
	
# 253 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Double_Battle_Enable_Function::
# 254 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 255 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Double_Battle_was_Enabled, MSGBOX_DEFAULT
# 256 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 257 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DOUBLE_BATTLE_MODE
# 258 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Double_Battle_Disable
# 259 "data/maps/InsideOfTruck/scripts.pory"
	end
# 260 "data/maps/InsideOfTruck/scripts.pory"
	
# 261 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Double_Battle_Info::
# 262 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 263 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Double_Battle_Info, MSGBOX_DEFAULT
# 264 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_DOUBLE_BATTLE_MODE, Start_EventScript_Game_Mode_Double_Battle_Disable
# 265 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Double_Battle
# 266 "data/maps/InsideOfTruck/scripts.pory"
	end
# 267 "data/maps/InsideOfTruck/scripts.pory"
	
# 268 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Double_Battle_Info:
# 269 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will make every battle a\n"
# 270 "data/maps/InsideOfTruck/scripts.pory"
	.string "Double Battle as long as you have\l"
# 271 "data/maps/InsideOfTruck/scripts.pory"
	.string "2 Pokémon that can battle.\p" 
# 272 "data/maps/InsideOfTruck/scripts.pory"
	.string "This mode {COLOR GREEN}can{COLOR DARK_GREY} be enabled\n"
# 273 "data/maps/InsideOfTruck/scripts.pory"
	.string "or disabled later in Slateport City.$"
# 274 "data/maps/InsideOfTruck/scripts.pory"
	
# 275 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Double_Battle_was_Enabled:
# 276 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Double Battle mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 277 "data/maps/InsideOfTruck/scripts.pory"
	
# 278 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Double_Battle_was_Disabled:
# 279 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Double Battle mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 280 "data/maps/InsideOfTruck/scripts.pory"
//
# 281 "data/maps/InsideOfTruck/scripts.pory"

# 282 "data/maps/InsideOfTruck/scripts.pory"
//Inverse Mode Start	
# 283 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Inverse::
# 284 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 285 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_INVERSE_MODE, Start_EventScript_Game_Mode_Inverse_Disable
# 286 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Inverse, MSGBOX_DEFAULT
# 287 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 288 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 289 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 290 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Inverse_Enable_Function
# 291 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Inverse_Info
# 292 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 293 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 294 "data/maps/InsideOfTruck/scripts.pory"
	end
# 295 "data/maps/InsideOfTruck/scripts.pory"
	
# 296 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Inverse:
# 297 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 298 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Inverse mode{COLOR DARK_GREY}?$"
# 299 "data/maps/InsideOfTruck/scripts.pory"
	
# 300 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Inverse_Disable::
# 301 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 302 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Inverse_Disable, MSGBOX_DEFAULT
# 303 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 304 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 305 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 306 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Inverse_Disable_Function
# 307 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Inverse_Info
# 308 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 309 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 310 "data/maps/InsideOfTruck/scripts.pory"
	end
# 311 "data/maps/InsideOfTruck/scripts.pory"
	
# 312 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Inverse_Disable:
# 313 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 314 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Inverse mode{COLOR DARK_GREY}?$"
# 315 "data/maps/InsideOfTruck/scripts.pory"
	
# 316 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Inverse_Disable_Function::
# 317 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 318 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Inverse_was_Disabled, MSGBOX_DEFAULT
# 319 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_INVERSE_MODE
# 320 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 321 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Inverse
# 322 "data/maps/InsideOfTruck/scripts.pory"
	end
# 323 "data/maps/InsideOfTruck/scripts.pory"
	
# 324 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Inverse_Enable_Function::
# 325 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 326 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Inverse_was_Enabled, MSGBOX_DEFAULT
# 327 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 328 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_INVERSE_MODE
# 329 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Inverse_Disable
# 330 "data/maps/InsideOfTruck/scripts.pory"
	end
# 331 "data/maps/InsideOfTruck/scripts.pory"
	
# 332 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Inverse_Info::
# 333 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 334 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Inverse_Info, MSGBOX_DEFAULT
# 335 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_INVERSE_MODE, Start_EventScript_Game_Mode_Inverse_Disable
# 336 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Inverse
# 337 "data/maps/InsideOfTruck/scripts.pory"
	end
# 338 "data/maps/InsideOfTruck/scripts.pory"
	
# 339 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Inverse_Info:
# 340 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will invert the type chart in battle.\n"
# 341 "data/maps/InsideOfTruck/scripts.pory"
	.string "Example: Water attacks will be super\l"
# 342 "data/maps/InsideOfTruck/scripts.pory"
	.string "effective against a Grass-type Pokémon.$"
# 343 "data/maps/InsideOfTruck/scripts.pory"
	
# 344 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Inverse_was_Enabled:
# 345 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Inverse mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 346 "data/maps/InsideOfTruck/scripts.pory"
	
# 347 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Inverse_was_Disabled:
# 348 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Inverse mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 349 "data/maps/InsideOfTruck/scripts.pory"
//
# 350 "data/maps/InsideOfTruck/scripts.pory"

# 351 "data/maps/InsideOfTruck/scripts.pory"
//Randomized Mode Start	
# 352 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized::
# 353 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 354 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_RANDOMIZED_MODE, Start_EventScript_Game_Mode_Randomized_Disable
# 355 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized, MSGBOX_DEFAULT
# 356 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 357 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 358 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 359 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Randomized_Enable_Function
# 360 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Randomized_Info
# 361 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 362 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 363 "data/maps/InsideOfTruck/scripts.pory"
	end
# 364 "data/maps/InsideOfTruck/scripts.pory"
	
# 365 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized:
# 366 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 367 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Randomized mode{COLOR DARK_GREY}?$"
# 368 "data/maps/InsideOfTruck/scripts.pory"
	
# 369 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Disable::
# 370 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 371 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_Disable, MSGBOX_DEFAULT
# 372 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 373 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 374 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 375 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Randomized_Disable_Function
# 376 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Randomized_Info
# 377 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 378 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 379 "data/maps/InsideOfTruck/scripts.pory"
	end
# 380 "data/maps/InsideOfTruck/scripts.pory"
	
# 381 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_Disable:
# 382 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 383 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Randomized mode{COLOR DARK_GREY}?$"
# 384 "data/maps/InsideOfTruck/scripts.pory"
	
# 385 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Disable_Function::
# 386 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 387 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_was_Disabled, MSGBOX_DEFAULT
# 388 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZED_MODE
# 389 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 390 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Randomized
# 391 "data/maps/InsideOfTruck/scripts.pory"
	end
# 392 "data/maps/InsideOfTruck/scripts.pory"
	
# 393 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Enable_Function::
# 394 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 395 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_was_Enabled, MSGBOX_DEFAULT
# 396 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 397 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RANDOMIZED_MODE
# 398 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Randomized_Disable
# 399 "data/maps/InsideOfTruck/scripts.pory"
	end
# 400 "data/maps/InsideOfTruck/scripts.pory"
	
# 401 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Info::
# 402 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 403 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_Info, MSGBOX_DEFAULT
# 404 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_RANDOMIZED_MODE, Start_EventScript_Game_Mode_Randomized_Disable
# 405 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Randomized
# 406 "data/maps/InsideOfTruck/scripts.pory"
	end
# 407 "data/maps/InsideOfTruck/scripts.pory"
	
# 408 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_Info:
# 409 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will change every trainer and wild\n"
# 410 "data/maps/InsideOfTruck/scripts.pory"
	.string "Pokémon into another random species.\l"
# 411 "data/maps/InsideOfTruck/scripts.pory"
	.string "The changes varies between each save.$"
# 412 "data/maps/InsideOfTruck/scripts.pory"
	
# 413 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_was_Enabled:
# 414 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Randomized mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 415 "data/maps/InsideOfTruck/scripts.pory"
	
# 416 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_was_Disabled:
# 417 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Randomized mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 418 "data/maps/InsideOfTruck/scripts.pory"
	
# 419 "data/maps/InsideOfTruck/scripts.pory"
//Randomized Party Mode
# 420 "data/maps/InsideOfTruck/scripts.pory"

# 421 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Party::
# 422 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 423 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NEW_GAME_PLUS, Start_EventScript_Game_Mode_NewGamePlus_Check
# 424 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_PARTY_RANDOMIZED_MODE, Start_EventScript_Game_Mode_Randomized_Party_Disable
# 425 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_Party, MSGBOX_DEFAULT
# 426 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 427 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 428 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 429 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Randomized_Party_Enable_Function
# 430 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Randomized_Party_Info
# 431 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 432 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 433 "data/maps/InsideOfTruck/scripts.pory"
	end
# 434 "data/maps/InsideOfTruck/scripts.pory"
	
# 435 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_Party:
# 436 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 437 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Randomized Party mode{COLOR DARK_GREY}?$"
# 438 "data/maps/InsideOfTruck/scripts.pory"
	
# 439 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Party_Disable::
# 440 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 441 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_Party_Disable, MSGBOX_DEFAULT
# 442 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 443 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 444 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 445 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Randomized_Party_Disable_Function
# 446 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Randomized_Party_Info
# 447 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 448 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 449 "data/maps/InsideOfTruck/scripts.pory"
	end
# 450 "data/maps/InsideOfTruck/scripts.pory"
	
# 451 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_Party_Disable:
# 452 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 453 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Randomized Party mode{COLOR DARK_GREY}?$"
# 454 "data/maps/InsideOfTruck/scripts.pory"
	
# 455 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Party_Disable_Function::
# 456 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 457 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_Party_was_Disabled, MSGBOX_DEFAULT
# 458 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_PARTY_RANDOMIZED_MODE
# 459 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 460 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Randomized_Party
# 461 "data/maps/InsideOfTruck/scripts.pory"
	end
# 462 "data/maps/InsideOfTruck/scripts.pory"
	
# 463 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Party_Enable_Function::
# 464 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 465 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_Party_was_Enabled, MSGBOX_DEFAULT
# 466 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 467 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_PARTY_RANDOMIZED_MODE
# 468 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Randomized_Party_Disable
# 469 "data/maps/InsideOfTruck/scripts.pory"
	end
# 470 "data/maps/InsideOfTruck/scripts.pory"
	
# 471 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Randomized_Party_Info::
# 472 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 473 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Randomized_Party_Info, MSGBOX_DEFAULT
# 474 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_PARTY_RANDOMIZED_MODE, Start_EventScript_Game_Mode_Randomized_Party_Disable
# 475 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Randomized_Party
# 476 "data/maps/InsideOfTruck/scripts.pory"
	end
# 477 "data/maps/InsideOfTruck/scripts.pory"
	
# 478 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_Party_Info:
# 479 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will change every trainer and wild\n"
# 480 "data/maps/InsideOfTruck/scripts.pory"
	.string "Pokémon for another random species plus\l"
# 481 "data/maps/InsideOfTruck/scripts.pory"
	.string "changing your party before each battle.\p"
# 482 "data/maps/InsideOfTruck/scripts.pory"
	.string "This {COLOR RED}may cause higher load times before\n"
# 483 "data/maps/InsideOfTruck/scripts.pory"
	.string "each battle{COLOR DARK_GREY}.$"
# 484 "data/maps/InsideOfTruck/scripts.pory"
	
# 485 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_Party_was_Enabled:
# 486 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Randomized Party mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 487 "data/maps/InsideOfTruck/scripts.pory"
	
# 488 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Randomized_Party_was_Disabled:
# 489 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Randomized Party mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 490 "data/maps/InsideOfTruck/scripts.pory"
	
# 491 "data/maps/InsideOfTruck/scripts.pory"
//
# 492 "data/maps/InsideOfTruck/scripts.pory"

# 493 "data/maps/InsideOfTruck/scripts.pory"
//Little Cup Mode Start	
# 494 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evolution::
# 495 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 496 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NEW_GAME_PLUS, Start_EventScript_Game_Mode_NewGamePlus_Check
# 497 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NO_EVOLUTION_MODE, Start_EventScript_Game_Mode_No_Evolution_Disable
# 498 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evolution, MSGBOX_DEFAULT
# 499 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 500 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 501 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 502 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_No_Evolution_Enable_Function
# 503 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_No_Evolution_Info
# 504 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 505 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 506 "data/maps/InsideOfTruck/scripts.pory"
	end
# 507 "data/maps/InsideOfTruck/scripts.pory"
	
# 508 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evolution:
# 509 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 510 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}No Evolution mode{COLOR DARK_GREY}?$"
# 511 "data/maps/InsideOfTruck/scripts.pory"
	
# 512 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evolution_Disable::
# 513 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 514 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evolution_Disable, MSGBOX_DEFAULT
# 515 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 516 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 517 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 518 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_No_Evolution_Disable_Function
# 519 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_No_Evolution_Info
# 520 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 521 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 522 "data/maps/InsideOfTruck/scripts.pory"
	end
# 523 "data/maps/InsideOfTruck/scripts.pory"
	
# 524 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evolution_Disable:
# 525 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 526 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}No Evolution mode{COLOR DARK_GREY}?$"
# 527 "data/maps/InsideOfTruck/scripts.pory"
	
# 528 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evolution_Disable_Function::
# 529 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 530 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evolution_was_Disabled, MSGBOX_DEFAULT
# 531 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_NO_EVOLUTION_MODE
# 532 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 533 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Evolution
# 534 "data/maps/InsideOfTruck/scripts.pory"
	end
# 535 "data/maps/InsideOfTruck/scripts.pory"
	
# 536 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evolution_Enable_Function::
# 537 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 538 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evolution_was_Enabled, MSGBOX_DEFAULT
# 539 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 540 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_NO_EVOLUTION_MODE
# 541 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Evolution_Disable
# 542 "data/maps/InsideOfTruck/scripts.pory"
	end
# 543 "data/maps/InsideOfTruck/scripts.pory"
	
# 544 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Evolution_Info::
# 545 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 546 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Evolution_Info, MSGBOX_DEFAULT
# 547 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NO_EVOLUTION_MODE, Start_EventScript_Game_Mode_No_Evolution_Disable
# 548 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Evolution
# 549 "data/maps/InsideOfTruck/scripts.pory"
	end
# 550 "data/maps/InsideOfTruck/scripts.pory"
	
# 551 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evolution_Info:
# 552 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will disable the evolutions for\n"
# 553 "data/maps/InsideOfTruck/scripts.pory"
	.string "both the player and trainers' Pokémon.$"
# 554 "data/maps/InsideOfTruck/scripts.pory"
	
# 555 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evolution_was_Enabled:
# 556 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}The No Evolution mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 557 "data/maps/InsideOfTruck/scripts.pory"
	
# 558 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Evolution_was_Disabled:
# 559 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}The No Evolution mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 560 "data/maps/InsideOfTruck/scripts.pory"
//
# 561 "data/maps/InsideOfTruck/scripts.pory"

# 562 "data/maps/InsideOfTruck/scripts.pory"
//No Split Mode	
# 563 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Split::
# 564 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 565 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NO_SPLIT_MODE, Start_EventScript_Game_Mode_No_Split_Disable
# 566 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Split MSGBOX_DEFAULT
# 567 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 568 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 569 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 570 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_No_Split_Enable_Function
# 571 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_No_Split_Info
# 572 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 573 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 574 "data/maps/InsideOfTruck/scripts.pory"
	end
# 575 "data/maps/InsideOfTruck/scripts.pory"
	
# 576 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Split:
# 577 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 578 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}No Split mode{COLOR DARK_GREY}?$"
# 579 "data/maps/InsideOfTruck/scripts.pory"
	
# 580 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Split_Disable::
# 581 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 582 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Split_Disable, MSGBOX_DEFAULT
# 583 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 584 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 585 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 586 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_No_Split_Disable_Function
# 587 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_No_Split_Info
# 588 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 589 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 590 "data/maps/InsideOfTruck/scripts.pory"
	end
# 591 "data/maps/InsideOfTruck/scripts.pory"
	
# 592 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Split_Disable:
# 593 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 594 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}No Split mode{COLOR DARK_GREY}?$"
# 595 "data/maps/InsideOfTruck/scripts.pory"
	
# 596 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Split_Disable_Function::
# 597 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 598 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Split_was_Disabled, MSGBOX_DEFAULT
# 599 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_NO_SPLIT_MODE
# 600 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 601 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Split
# 602 "data/maps/InsideOfTruck/scripts.pory"
	end
# 603 "data/maps/InsideOfTruck/scripts.pory"
	
# 604 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Split_Enable_Function::
# 605 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 606 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Split_was_Enabled, MSGBOX_DEFAULT
# 607 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 608 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_NO_SPLIT_MODE
# 609 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Split_Disable
# 610 "data/maps/InsideOfTruck/scripts.pory"
	end
# 611 "data/maps/InsideOfTruck/scripts.pory"
	
# 612 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_No_Split_Info::
# 613 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 614 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_No_Split_Info, MSGBOX_DEFAULT
# 615 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NO_SPLIT_MODE, Start_EventScript_Game_Mode_No_Split_Disable
# 616 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Split
# 617 "data/maps/InsideOfTruck/scripts.pory"
	end
# 618 "data/maps/InsideOfTruck/scripts.pory"
	
# 619 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Split_Info:
# 620 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will disable the Physical and\n"
# 621 "data/maps/InsideOfTruck/scripts.pory"
	.string "Special Split added in Gen 4.$"
# 622 "data/maps/InsideOfTruck/scripts.pory"
	
# 623 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Split_was_Enabled:
# 624 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}The No Split mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 625 "data/maps/InsideOfTruck/scripts.pory"
	
# 626 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_No_Split_was_Disabled:
# 627 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}The No Split mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 628 "data/maps/InsideOfTruck/scripts.pory"
//
# 629 "data/maps/InsideOfTruck/scripts.pory"

# 630 "data/maps/InsideOfTruck/scripts.pory"
//
# 631 "data/maps/InsideOfTruck/scripts.pory"

# 632 "data/maps/InsideOfTruck/scripts.pory"
//Vanilla Mode	
# 633 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Vanilla::
# 634 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 635 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_VANILLA_MODE, Start_EventScript_Game_Mode_Vanilla_Disable
# 636 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Vanilla MSGBOX_DEFAULT
# 637 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 638 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
# 639 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 640 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Vanilla_Enable_Function
# 641 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Vanilla_Info
# 642 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 643 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 644 "data/maps/InsideOfTruck/scripts.pory"
	end
# 645 "data/maps/InsideOfTruck/scripts.pory"
	
# 646 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Vanilla:
# 647 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the\n"
# 648 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Vanilla mode{COLOR DARK_GREY}?$"
# 649 "data/maps/InsideOfTruck/scripts.pory"
	
# 650 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Vanilla_Disable::
# 651 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 652 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Vanilla_Disable, MSGBOX_DEFAULT
# 653 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 654 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
# 655 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 656 "data/maps/InsideOfTruck/scripts.pory"
    case 0, Start_EventScript_Game_Mode_Vanilla_Disable_Function
# 657 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Vanilla_Info
# 658 "data/maps/InsideOfTruck/scripts.pory"
    case 2, Start_EventScript_Game_Modes
# 659 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes
# 660 "data/maps/InsideOfTruck/scripts.pory"
	end
# 661 "data/maps/InsideOfTruck/scripts.pory"
	
# 662 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Vanilla_Disable:
# 663 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the\n"
# 664 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}Vanilla mode{COLOR DARK_GREY}?$"
# 665 "data/maps/InsideOfTruck/scripts.pory"
	
# 666 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Vanilla_Disable_Function::
# 667 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 668 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Vanilla_was_Disabled, MSGBOX_DEFAULT
# 669 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_VANILLA_MODE
# 670 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 671 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Vanilla
# 672 "data/maps/InsideOfTruck/scripts.pory"
	end
# 673 "data/maps/InsideOfTruck/scripts.pory"
	
# 674 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Vanilla_Enable_Function::
# 675 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 676 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Vanilla_was_Enabled, MSGBOX_DEFAULT
# 677 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 678 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_VANILLA_MODE
# 679 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Vanilla_Disable
# 680 "data/maps/InsideOfTruck/scripts.pory"
	end
# 681 "data/maps/InsideOfTruck/scripts.pory"
	
# 682 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_Vanilla_Info::
# 683 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 684 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Vanilla_Info, MSGBOX_DEFAULT
# 685 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_VANILLA_MODE, Start_EventScript_Game_Mode_Vanilla_Disable
# 686 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Vanilla
# 687 "data/maps/InsideOfTruck/scripts.pory"
	end
# 688 "data/maps/InsideOfTruck/scripts.pory"
	
# 689 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Vanilla_Info:
# 690 "data/maps/InsideOfTruck/scripts.pory"
	.string "This removes the Pokémon stat\n"
# 691 "data/maps/InsideOfTruck/scripts.pory"
	.string "changes made in this game but it\l"
# 692 "data/maps/InsideOfTruck/scripts.pory"
	.string "does not work for move changes.$"
# 693 "data/maps/InsideOfTruck/scripts.pory"
	
# 694 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Vanilla_was_Enabled:
# 695 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}The Vanilla mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"
# 696 "data/maps/InsideOfTruck/scripts.pory"
	
# 697 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Vanilla_was_Disabled:
# 698 "data/maps/InsideOfTruck/scripts.pory"
	.string "{COLOR BLUE}The Vanilla mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"
# 699 "data/maps/InsideOfTruck/scripts.pory"
//
# 700 "data/maps/InsideOfTruck/scripts.pory"

# 701 "data/maps/InsideOfTruck/scripts.pory"
	
# 702 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Modes_Default:
# 703 "data/maps/InsideOfTruck/scripts.pory"
	.string "All of the modes were disabled!$"
# 704 "data/maps/InsideOfTruck/scripts.pory"
	
# 705 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Start::
# 706 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Start_Question, MSGBOX_YESNO
# 707 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
# 708 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq Start_EventScript_Starter_Chose
# 709 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_SetSeason
# 710 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_WallClock
# 711 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_SetIntroFlags
# 712 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_Starter
# 713 "data/maps/InsideOfTruck/scripts.pory"
	end
# 714 "data/maps/InsideOfTruck/scripts.pory"
	
# 715 "data/maps/InsideOfTruck/scripts.pory"
Game_Start_Text_Game_Start_Question:
# 716 "data/maps/InsideOfTruck/scripts.pory"
	.string "Are you sure you want to start the\n"
# 717 "data/maps/InsideOfTruck/scripts.pory"
	.string "game with this configuration?\l"
# 718 "data/maps/InsideOfTruck/scripts.pory"
	.string "This can't be undone later.$"
# 719 "data/maps/InsideOfTruck/scripts.pory"
	
# 720 "data/maps/InsideOfTruck/scripts.pory"
Start_EvenScript_Flagset_Difficulty::
# 721 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_DIFFICULTY_SET, Start_EventScript_Give_Items
# 722 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_DIFFICULTY, DIFFICULTY_NORMAL
# 723 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LEVEL_CAP_LEVEL, 1
# 724 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Give_Items
# 725 "data/maps/InsideOfTruck/scripts.pory"
	end
# 726 "data/maps/InsideOfTruck/scripts.pory"
	
# 727 "data/maps/InsideOfTruck/scripts.pory"
//Setting up the Clock
# 728 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_WallClock::
# 729 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_Set_Up_Clock, MSGBOX_DEFAULT
# 730 "data/maps/InsideOfTruck/scripts.pory"
	call PlayersHouse_2F_EventScript_SetWallClock
# 731 "data/maps/InsideOfTruck/scripts.pory"
	delay 30
# 732 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 6
# 733 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 734 "data/maps/InsideOfTruck/scripts.pory"
	//setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1
# 735 "data/maps/InsideOfTruck/scripts.pory"
	//setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2
# 736 "data/maps/InsideOfTruck/scripts.pory"
	return
# 737 "data/maps/InsideOfTruck/scripts.pory"
	end
# 738 "data/maps/InsideOfTruck/scripts.pory"
	
# 739 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_SetUpclock::
# 740 "data/maps/InsideOfTruck/scripts.pory"
	lock
# 741 "data/maps/InsideOfTruck/scripts.pory"
	faceplayer
# 742 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Text_SetClock, MSGBOX_SIGN
# 743 "data/maps/InsideOfTruck/scripts.pory"
	end
# 744 "data/maps/InsideOfTruck/scripts.pory"

# 745 "data/maps/InsideOfTruck/scripts.pory"
//Intro Flags per Gender
# 746 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_SetIntroFlags::
# 747 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 748 "data/maps/InsideOfTruck/scripts.pory"
	checkplayergender
# 749 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MALE
# 750 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq Start_EventScript_SetIntroFlagsMale
# 751 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, FEMALE
# 752 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_eq Start_EventScript_SetIntroFlagsFemale
# 753 "data/maps/InsideOfTruck/scripts.pory"
	return
# 754 "data/maps/InsideOfTruck/scripts.pory"
	end
# 755 "data/maps/InsideOfTruck/scripts.pory"

# 756 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_SetIntroFlagsMale::
# 757 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM
# 758 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 759 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
# 760 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
# 761 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 762 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 763 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
# 764 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 3
# 765 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EvenScript_StoryFlagset
# 766 "data/maps/InsideOfTruck/scripts.pory"
	return
# 767 "data/maps/InsideOfTruck/scripts.pory"
	end
# 768 "data/maps/InsideOfTruck/scripts.pory"

# 769 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_SetIntroFlagsFemale::
# 770 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
# 771 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
# 772 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 773 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM
# 774 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING
# 775 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
# 776 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 3
# 777 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 778 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EvenScript_StoryFlagset
# 779 "data/maps/InsideOfTruck/scripts.pory"
	return
# 780 "data/maps/InsideOfTruck/scripts.pory"
	end
# 781 "data/maps/InsideOfTruck/scripts.pory"
	
# 782 "data/maps/InsideOfTruck/scripts.pory"
Start_EvenScript_StoryFlagset::
# 783 "data/maps/InsideOfTruck/scripts.pory"
	call Start_Flagset
# 784 "data/maps/InsideOfTruck/scripts.pory"
	setflag	  FLAG_SYS_POKEDEX_GET
# 785 "data/maps/InsideOfTruck/scripts.pory"
	setflag	  FLAG_SYS_POKEMON_GET
# 786 "data/maps/InsideOfTruck/scripts.pory"
	setflag	  FLAG_SYS_POKENAV_GET
# 787 "data/maps/InsideOfTruck/scripts.pory"
	setflag   FLAG_SYS_B_DASH
# 788 "data/maps/InsideOfTruck/scripts.pory"
	setflag   FLAG_SYS_NATIONAL_DEX
# 789 "data/maps/InsideOfTruck/scripts.pory"
	setflag   FLAG_UPDATED_SAVE
# 790 "data/maps/InsideOfTruck/scripts.pory"
	setflag   FLAG_UPDATED_SAVE_2
# 791 "data/maps/InsideOfTruck/scripts.pory"
	setflag   FLAG_ADVENTURE_STARTED
# 792 "data/maps/InsideOfTruck/scripts.pory"
	setflag   FLAG_SYS_NATIONAL_DEX
# 793 "data/maps/InsideOfTruck/scripts.pory"
	setflag	  FLAG_SYS_DETECTOR_MODE
# 794 "data/maps/InsideOfTruck/scripts.pory"
	setflag	  FLAG_SYS_DEXNAV_GET
# 795 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_ROUTE101_STATE, 3
# 796 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_BIRCH_LAB_STATE, 5
# 797 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_LITTLEROOT_RIVAL_STATE, 4
# 798 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 799 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_LITTLEROOT_TOWN_STATE, 4
# 800 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_LITTLEROOT_INTRO_STATE 7
# 801 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_RUSTBORO_CITY_STATE, 8
# 802 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_ROUTE104_STATE, 2
# 803 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 804 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_REGISTER_BIRCH_STATE, 2
# 805 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_ROUTE110_STATE, 1
# 806 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_ROUTE119_STATE, 1
# 807 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_PETALBURG_CITY_STATE, 3
# 808 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_PETALBURG_GYM_STATE, 6
# 809 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 810 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_BRINEY_HOUSE_STATE, 2
# 811 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_BRINEY_LOCATION, 1
# 812 "data/maps/InsideOfTruck/scripts.pory"
	setvar    VAR_PETALBURG_WOODS_STATE, 1
# 813 "data/maps/InsideOfTruck/scripts.pory"
	return
# 814 "data/maps/InsideOfTruck/scripts.pory"
	end
# 815 "data/maps/InsideOfTruck/scripts.pory"

# 816 "data/maps/InsideOfTruck/scripts.pory"
EventScript_FirstSave::
# 817 "data/maps/InsideOfTruck/scripts.pory"
	call_if_unset FLAG_RECEIVED_POKEDEX_FROM_BIRCH, EventScript_ForceSave
# 818 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 819 "data/maps/InsideOfTruck/scripts.pory"
	return
# 820 "data/maps/InsideOfTruck/scripts.pory"

# 821 "data/maps/InsideOfTruck/scripts.pory"
EventScript_ForceSave::
# 822 "data/maps/InsideOfTruck/scripts.pory"
	call Common_EventScript_SaveGame
# 823 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_TEMP_0, 255
# 824 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, 0
# 825 "data/maps/InsideOfTruck/scripts.pory"
	call_if_eq EventScript_ForceSave
# 826 "data/maps/InsideOfTruck/scripts.pory"
	return
# 827 "data/maps/InsideOfTruck/scripts.pory"
	
# 828 "data/maps/InsideOfTruck/scripts.pory"
Start_Text_Emulator_Text:
# 829 "data/maps/InsideOfTruck/scripts.pory"
	.string "Are you using a supported\n"
# 830 "data/maps/InsideOfTruck/scripts.pory"
	.string "emulator to play this game?$"
# 831 "data/maps/InsideOfTruck/scripts.pory"

# 832 "data/maps/InsideOfTruck/scripts.pory"
Start_Text_Starter_Text:
# 833 "data/maps/InsideOfTruck/scripts.pory"
	.string "What Pokémon would you like\n"
# 834 "data/maps/InsideOfTruck/scripts.pory"
	.string "as your starter Pokémon?$"
# 835 "data/maps/InsideOfTruck/scripts.pory"
	
# 836 "data/maps/InsideOfTruck/scripts.pory"
Text_Start_Pokedex::
# 837 "data/maps/InsideOfTruck/scripts.pory"
	.string "{PLAYER} obtained the Pokedex.$"
# 838 "data/maps/InsideOfTruck/scripts.pory"
	
# 839 "data/maps/InsideOfTruck/scripts.pory"
Text_Start_Lapras::
# 840 "data/maps/InsideOfTruck/scripts.pory"
	.string "{PLAYER} can now use Surf and Dive\n"
# 841 "data/maps/InsideOfTruck/scripts.pory"
	.string "thanks to the Pokeride.$"
# 842 "data/maps/InsideOfTruck/scripts.pory"
	
# 843 "data/maps/InsideOfTruck/scripts.pory"
Text_SetClock:
# 844 "data/maps/InsideOfTruck/scripts.pory"
	.string "Please set up the clock\n"
# 845 "data/maps/InsideOfTruck/scripts.pory"
	.string "before starting.$"
# 846 "data/maps/InsideOfTruck/scripts.pory"
	
# 847 "data/maps/InsideOfTruck/scripts.pory"
Text_Set_Up_Clock:
# 848 "data/maps/InsideOfTruck/scripts.pory"
	.string "Please set up the clock.$"
# 849 "data/maps/InsideOfTruck/scripts.pory"
	
# 850 "data/maps/InsideOfTruck/scripts.pory"
Start_NPC_Change_Mode::
# 851 "data/maps/InsideOfTruck/scripts.pory"
	end
# 852 "data/maps/InsideOfTruck/scripts.pory"
	
# 853 "data/maps/InsideOfTruck/scripts.pory"
Start_Flagset::
# 854 "data/maps/InsideOfTruck/scripts.pory"
	//Flags Start
# 855 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_ZIGZAGOON
# 856 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE
# 857 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 858 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_RIVAL
# 859 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
# 860 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
# 861 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 862 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 863 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 864 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 865 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 866 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 867 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 868 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 869 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 870 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 871 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_BIRCH
# 872 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA
# 873 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE
# 874 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL
# 875 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
# 876 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 877 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 878 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO
# 879 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 880 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_119_RIVAL
# 881 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_119_SCOTT
# 882 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_120_STEVEN
# 883 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE_VISIBLE
# 884 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_ROUTE_121_TEAM_AQUA_GRUNTS
# 885 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
# 886 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
# 887 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS
# 888 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN
# 889 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE
# 890 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE
# 891 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON
# 892 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE
# 893 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_SOOTOPOLIS_CITY_RAYQUAZA
# 894 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 895 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ENABLE_NORMAN_MATCH_CALL
# 896 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 897 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 898 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 899 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 900 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 901 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 902 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 903 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 904 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY
# 905 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE
# 906 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_RECEIVED_HM08
# 907 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE
# 908 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN
# 909 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_ROUTE101_STATE, 3
# 910 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_BIRCH_LAB_STATE, 5
# 911 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_LITTLEROOT_RIVAL_STATE, 4
# 912 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 913 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_LITTLEROOT_TOWN_STATE, 4
# 914 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_LITTLEROOT_INTRO_STATE 7
# 915 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_RUSTBORO_CITY_STATE, 8
# 916 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_ROUTE104_STATE, 2
# 917 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 918 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_REGISTER_BIRCH_STATE, 2
# 919 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_ROUTE110_STATE, 1
# 920 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_ROUTE119_STATE, 1
# 921 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_PETALBURG_CITY_STATE, 3
# 922 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_PETALBURG_GYM_STATE, 6
# 923 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 924 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_BRINEY_HOUSE_STATE, 2
# 925 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_BRINEY_LOCATION, 1
# 926 "data/maps/InsideOfTruck/scripts.pory"
	setvar  VAR_PETALBURG_WOODS_STATE, 1
# 927 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO
# 928 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY
# 929 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS
# 930 "data/maps/InsideOfTruck/scripts.pory"
	return
# 931 "data/maps/InsideOfTruck/scripts.pory"
	end	
# 932 "data/maps/InsideOfTruck/scripts.pory"
	
# 933 "data/maps/InsideOfTruck/scripts.pory"
Script_PokeballGet::
# 934 "data/maps/InsideOfTruck/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 935 "data/maps/InsideOfTruck/scripts.pory"
	giveitem ITEM_TEACHY_TV
# 936 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 937 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 938 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 939 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 940 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 941 "data/maps/InsideOfTruck/scripts.pory"
	special SetUnlockedPokedexFlags
# 942 "data/maps/InsideOfTruck/scripts.pory"
	message Text_Start_Lapras
# 943 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 944 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 945 "data/maps/InsideOfTruck/scripts.pory"
	message Text_Start_Pokedex
# 946 "data/maps/InsideOfTruck/scripts.pory"
	special EnableNationalPokedex
# 947 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 948 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 949 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_Flagset
# 950 "data/maps/InsideOfTruck/scripts.pory"
	end
# 951 "data/maps/InsideOfTruck/scripts.pory"

# 952 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_NewGamePlus_Check::
# 953 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 954 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_You_Cant_Chose_this_mode, MSGBOX_DEFAULT
# 955 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
# 956 "data/maps/InsideOfTruck/scripts.pory"
	end
# 957 "data/maps/InsideOfTruck/scripts.pory"

# 958 "data/maps/InsideOfTruck/scripts.pory"
Start_EventScript_Game_Mode_NewGamePlus_Info::
# 959 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 960 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Introduction_NewGamePlus_Information, MSGBOX_DEFAULT
# 961 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Starter_Chose_NewGamePlus
# 962 "data/maps/InsideOfTruck/scripts.pory"
	end

Start_EventScript_Give_Random_Sevii_Ticket::
# 965 "data/maps/InsideOfTruck/scripts.pory"
	random 8
# 966 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 967 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Give_Random_Sevii_Ticket_2
# 970 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Give_Random_Sevii_Ticket_3
# 973 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Give_Random_Sevii_Ticket_4
# 976 "data/maps/InsideOfTruck/scripts.pory"
	case 3, Start_EventScript_Give_Random_Sevii_Ticket_5
# 979 "data/maps/InsideOfTruck/scripts.pory"
	case 4, Start_EventScript_Give_Random_Sevii_Ticket_6
# 982 "data/maps/InsideOfTruck/scripts.pory"
	case 5, Start_EventScript_Give_Random_Sevii_Ticket_7
# 985 "data/maps/InsideOfTruck/scripts.pory"
	case 6, Start_EventScript_Give_Random_Sevii_Ticket_8
# 988 "data/maps/InsideOfTruck/scripts.pory"
	case 7, Start_EventScript_Give_Random_Sevii_Ticket_9
	return

Start_EventScript_Give_Random_Sevii_Ticket_2:
# 968 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_1, 1
	return

Start_EventScript_Give_Random_Sevii_Ticket_3:
# 971 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_2, 1
	return

Start_EventScript_Give_Random_Sevii_Ticket_4:
# 974 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_3, 1
	return

Start_EventScript_Give_Random_Sevii_Ticket_5:
# 977 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_4, 1
	return

Start_EventScript_Give_Random_Sevii_Ticket_6:
# 980 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_5, 1
	return

Start_EventScript_Give_Random_Sevii_Ticket_7:
# 983 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_6, 1
	return

Start_EventScript_Give_Random_Sevii_Ticket_8:
# 986 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_7, 1
	return

Start_EventScript_Give_Random_Sevii_Ticket_9:
# 989 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_8, 1
	return


Start_EventScript_Give_Items_New_Game_Plus::
# 996 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Give_Items_New_Game_Plus_Text_0, MSGBOX_DEFAULT
# 997 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 998 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Give_Items_New_Game_Plus_Text_1, MSGBOX_SIGN
# 999 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POTION, 200
# 1000 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POKE_BALL, 200
# 1001 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_MAX_REPEL, 10
# 1002 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_EXIOLITE, 6
# 1003 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_ABILITY_PATCH, 6
# 1004 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POWER_WEIGHT, 6
# 1005 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POWER_BRACER, 6
# 1006 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POWER_BELT, 6
# 1007 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POWER_LENS, 6
# 1008 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POWER_BAND, 6
# 1009 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POWER_ANKLET, 6
# 1010 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_LUCKY_EGG, 6
# 1011 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_NUGGET, 20
# 1012 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_ACRO_BIKE
# 1013 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_WAILMER_PAIL
# 1014 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_OLD_ROD
# 1015 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_EXP_SHARE
# 1016 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SURF_TOOL
# 1017 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_DIVE_TOOL
# 1018 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_ITEMFINDER
# 1019 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_HEADBUTT_TOOL
# 1020 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1021 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	end


Start_EventScript_Give_Items::
# 1027 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Give_Items_New_Game_Plus_Text_0, MSGBOX_DEFAULT
# 1028 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1029 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Give_Items_Text_0, MSGBOX_SIGN
# 1030 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_ACRO_BIKE
# 1031 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_WAILMER_PAIL
# 1032 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_OLD_ROD
# 1033 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_EXP_SHARE
# 1034 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SURF_TOOL
# 1035 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_DIVE_TOOL
# 1036 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_ITEMFINDER
# 1037 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POTION, 5
# 1038 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_POKE_BALL, 10
# 1039 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_REPEL, 5
# 1040 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_HEADBUTT_TOOL, 1
# 1042 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	end


Start_EventScript_Starter_Chose::
# 1047 "data/maps/InsideOfTruck/scripts.pory"
	lock
# 1048 "data/maps/InsideOfTruck/scripts.pory"
	faceplayer
# 1049 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Start_EventScript_Starter_No_Exploit
# 1050 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_NEW_GAME_PLUS, Start_EventScript_Starter_Chose_NewGamePlus
# 1051 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Introduction, MSGBOX_DEFAULT
# 1052 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1053 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_NEW_GAME_QUESTIONS, 0
# 1054 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1055 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Starter_Chose_3
# 1056 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Starter_Chose_4
# 1057 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Starter_Chose_5
# 1058 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Starter_Chose_6
Start_EventScript_Starter_Chose_1:
	end

Start_EventScript_Starter_Chose_3:
# 1055 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Level
	goto Start_EventScript_Starter_Chose_1

Start_EventScript_Starter_Chose_4:
# 1056 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Starter_Chose_1

Start_EventScript_Starter_Chose_5:
# 1057 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Start
	goto Start_EventScript_Starter_Chose_1

Start_EventScript_Starter_Chose_6:
# 1058 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Start
	goto Start_EventScript_Starter_Chose_1


Start_EventScript_Starter_Chose_NewGamePlus::
# 1064 "data/maps/InsideOfTruck/scripts.pory"
	lock
# 1065 "data/maps/InsideOfTruck/scripts.pory"
	faceplayer
# 1066 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_set FLAG_ENABLE_NORMAN_MATCH_CALL, Start_EventScript_Starter_No_Exploit
# 1067 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Introduction_NewGamePlus, MSGBOX_DEFAULT
# 1068 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1069 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_NEW_GAME_PLUS_QUESTIONS, 0
# 1070 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1071 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Starter_Chose_NewGamePlus_3
# 1072 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Starter_Chose_NewGamePlus_4
# 1073 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Starter_Chose_NewGamePlus_5
# 1074 "data/maps/InsideOfTruck/scripts.pory"
	case 3, Start_EventScript_Starter_Chose_NewGamePlus_6
# 1075 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Starter_Chose_NewGamePlus_7
Start_EventScript_Starter_Chose_NewGamePlus_1:
	end

Start_EventScript_Starter_Chose_NewGamePlus_3:
# 1071 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Level
	goto Start_EventScript_Starter_Chose_NewGamePlus_1

Start_EventScript_Starter_Chose_NewGamePlus_4:
# 1072 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Starter_Chose_NewGamePlus_1

Start_EventScript_Starter_Chose_NewGamePlus_5:
# 1073 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_NewGamePlus_Info
	goto Start_EventScript_Starter_Chose_NewGamePlus_1

Start_EventScript_Starter_Chose_NewGamePlus_6:
# 1074 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Start
	goto Start_EventScript_Starter_Chose_NewGamePlus_1

Start_EventScript_Starter_Chose_NewGamePlus_7:
# 1075 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Start
	goto Start_EventScript_Starter_Chose_NewGamePlus_1


Start_EventScript_Game_Modes::
# 1081 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Modes_Text_0, MSGBOX_DEFAULT
# 1082 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1083 "data/maps/InsideOfTruck/scripts.pory"
	scrollingmultichoice SCROLLING_GAME_MODES, 0, 0, 6, TRUE
# 1084 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1085 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Modes_3
# 1086 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Modes_4
# 1087 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Modes_5
# 1088 "data/maps/InsideOfTruck/scripts.pory"
	case 3, Start_EventScript_Game_Modes_6
# 1089 "data/maps/InsideOfTruck/scripts.pory"
	case 4, Start_EventScript_Game_Modes_7
# 1090 "data/maps/InsideOfTruck/scripts.pory"
	case 5, Start_EventScript_Game_Modes_8
# 1091 "data/maps/InsideOfTruck/scripts.pory"
	case 6, Start_EventScript_Game_Modes_9
# 1092 "data/maps/InsideOfTruck/scripts.pory"
	case 7, Start_EventScript_Game_Modes_10
# 1093 "data/maps/InsideOfTruck/scripts.pory"
	case 8, Start_EventScript_Game_Modes_11
# 1094 "data/maps/InsideOfTruck/scripts.pory"
	case 9, Start_EventScript_Game_Modes_12
# 1095 "data/maps/InsideOfTruck/scripts.pory"
	case 10, Start_EventScript_Game_Modes_13
# 1096 "data/maps/InsideOfTruck/scripts.pory"
	case 11, Start_EventScript_Game_Modes_14
# 1097 "data/maps/InsideOfTruck/scripts.pory"
	case 12, Start_EventScript_Game_Modes_15
# 1098 "data/maps/InsideOfTruck/scripts.pory"
	case 13, Start_EventScript_Game_Modes_16
# 1099 "data/maps/InsideOfTruck/scripts.pory"
	case 14, Start_EventScript_Game_Modes_17
# 1100 "data/maps/InsideOfTruck/scripts.pory"
	case 15, Start_EventScript_Game_Modes_18
# 1101 "data/maps/InsideOfTruck/scripts.pory"
	case 16, Start_EventScript_Game_Modes_19
# 1102 "data/maps/InsideOfTruck/scripts.pory"
	case 17, Start_EventScript_Game_Modes_20
# 1103 "data/maps/InsideOfTruck/scripts.pory"
	case 18, Start_EventScript_Game_Modes_20
# 1104 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Modes_20
Start_EventScript_Game_Modes_1:
	end

Start_EventScript_Game_Modes_3:
# 1085 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Grindless_Mode
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_4:
# 1086 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Evs
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_5:
# 1087 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Scalemon_Mode
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_6:
# 1088 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Gym_Shuffle
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_7:
# 1089 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Inverse
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_8:
# 1090 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Randomized
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_9:
# 1091 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_True_Random_Mode
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_10:
# 1092 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Randomized_Party
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_11:
# 1093 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Double_Battle
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_12:
# 1094 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Evolution
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_13:
# 1095 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Random_Type_Mode
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_14:
# 1096 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Random_Ability_Mode
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_15:
# 1097 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Third_Type_Mode
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_16:
# 1098 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Old_STAB_Mode
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_17:
# 1099 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Split
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_18:
# 1100 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Mega_Mode
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_19:
# 1101 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Vanilla
	goto Start_EventScript_Game_Modes_1

Start_EventScript_Game_Modes_20:
# 1105 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Save
	goto Start_EventScript_Game_Modes_1


Start_EventScript_Chose_Starter::
# 1113 "data/maps/InsideOfTruck/scripts.pory"
	generateStarters
# 1114 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_CHOSING_STARTER
# 1115 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_STARTER_POKEMON, 0
# 1116 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_PARTY_RANDOMIZED_MODE, Start_EventScript_Chose_Starter_4
Start_EventScript_Chose_Starter_3:
# 1144 "data/maps/InsideOfTruck/scripts.pory"
	givemon SPECIES_NONE, 10, ITEM_NONE
# 1145 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1146 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_Starter_Text_2, MSGBOX_DEFAULT
# 1147 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1148 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
Start_EventScript_Chose_Starter_1:
# 1150 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1151 "data/maps/InsideOfTruck/scripts.pory"
	special DisableLegendaryMons
# 1152 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1153 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_CHOSING_STARTER
# 1154 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EvenScript_Flagset_Difficulty
	end

Start_EventScript_Chose_Starter_2:
# 1117 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_Starter_Text_0, MSGBOX_DEFAULT
# 1118 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1119 "data/maps/InsideOfTruck/scripts.pory"
	scrollingmultichoice SCROLLING_SET_STARTERS, 0, 0, 6, FALSE
# 1120 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1133 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Chose_Starter_9
# 1134 "data/maps/InsideOfTruck/scripts.pory"
	case 9, Start_EventScript_Chose_Starter_9
# 1122 "data/maps/InsideOfTruck/scripts.pory"
	showmonpic SPECIES_NONE, 10, 3
# 1123 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_Starter_Text_1, MSGBOX_YESNO
# 1124 "data/maps/InsideOfTruck/scripts.pory"
	hidemonpic
# 1125 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_Starter_11
Start_EventScript_Chose_Starter_10:
# 1128 "data/maps/InsideOfTruck/scripts.pory"
	givemon SPECIES_NONE, 10, ITEM_NONE
# 1129 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1130 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1131 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_Starter_Text_2, MSGBOX_DEFAULT
	goto Start_EventScript_Chose_Starter_1

Start_EventScript_Chose_Starter_4:
# 1116 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_TRUE_RANDOM_MODE, Start_EventScript_Chose_Starter_2
	goto Start_EventScript_Chose_Starter_3

Start_EventScript_Chose_Starter_9:
# 1135 "data/maps/InsideOfTruck/scripts.pory"
	givemon SPECIES_NONE, 10, ITEM_NONE
# 1136 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1137 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1138 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_Starter_Text_2, MSGBOX_DEFAULT
# 1139 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
	goto Start_EventScript_Chose_Starter_1

Start_EventScript_Chose_Starter_11:
# 1126 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_Starter
	goto Start_EventScript_Chose_Starter_10


Start_EventScript_Chose_City::
# 1160 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_0, MSGBOX_DEFAULT
# 1161 "data/maps/InsideOfTruck/scripts.pory"
	scrollingmultichoice SCROLLING_SET_STARTING_TOWNS, 0, 0, 6, FALSE
# 1162 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1163 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Chose_City_3
# 1180 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Chose_City_4
# 1191 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Chose_City_5
# 1202 "data/maps/InsideOfTruck/scripts.pory"
	case 3, Start_EventScript_Chose_City_6
# 1213 "data/maps/InsideOfTruck/scripts.pory"
	case 4, Start_EventScript_Chose_City_7
# 1224 "data/maps/InsideOfTruck/scripts.pory"
	case 5, Start_EventScript_Chose_City_8
# 1234 "data/maps/InsideOfTruck/scripts.pory"
	case 6, Start_EventScript_Chose_City_9
# 1245 "data/maps/InsideOfTruck/scripts.pory"
	case 7, Start_EventScript_Chose_City_10
# 1255 "data/maps/InsideOfTruck/scripts.pory"
	case 8, Start_EventScript_Chose_City_11
# 1266 "data/maps/InsideOfTruck/scripts.pory"
	case 9, Start_EventScript_Chose_City_12
# 1276 "data/maps/InsideOfTruck/scripts.pory"
	case 10, Start_EventScript_Chose_City_13
# 1286 "data/maps/InsideOfTruck/scripts.pory"
	case 11, Start_EventScript_Chose_City_14
# 1296 "data/maps/InsideOfTruck/scripts.pory"
	case 12, Start_EventScript_Chose_City_15
# 1306 "data/maps/InsideOfTruck/scripts.pory"
	case 13, Start_EventScript_Chose_City_16
# 1316 "data/maps/InsideOfTruck/scripts.pory"
	case 14, Start_EventScript_Chose_City_17
# 1326 "data/maps/InsideOfTruck/scripts.pory"
	case 15, Start_EventScript_Chose_City_18
# 1336 "data/maps/InsideOfTruck/scripts.pory"
	case 16, Start_EventScript_Chose_City_19
# 1346 "data/maps/InsideOfTruck/scripts.pory"
	case 17, Start_EventScript_Chose_City_20
# 1356 "data/maps/InsideOfTruck/scripts.pory"
	case 18, Start_EventScript_Chose_City_21
# 1366 "data/maps/InsideOfTruck/scripts.pory"
	case 19, Start_EventScript_Chose_City_22
# 1376 "data/maps/InsideOfTruck/scripts.pory"
	case 20, Start_EventScript_Chose_City_23
# 1386 "data/maps/InsideOfTruck/scripts.pory"
	case 21, Start_EventScript_Chose_City_24
# 1396 "data/maps/InsideOfTruck/scripts.pory"
	case 22, Start_EventScript_Chose_City_25
# 1406 "data/maps/InsideOfTruck/scripts.pory"
	case 23, Start_EventScript_Chose_City_26
# 1416 "data/maps/InsideOfTruck/scripts.pory"
	case 24, Start_EventScript_Chose_City_27
Start_EventScript_Chose_City_1:
	end

Start_EventScript_Chose_City_3:
# 1165 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_1, MSGBOX_YESNO
# 1166 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_29
Start_EventScript_Chose_City_28:
# 1169 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1170 "data/maps/InsideOfTruck/scripts.pory"
	checkplayergender
# 1171 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Start_EventScript_Chose_City_101
# 1176 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 255, 24, 9
# 1177 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
Start_EventScript_Chose_City_100:
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_4:
# 1182 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_2, MSGBOX_YESNO
# 1183 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_32
Start_EventScript_Chose_City_31:
# 1186 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1187 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 1188 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_OLDALE_TOWN, 255, 14, 8
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_5:
# 1193 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_3, MSGBOX_YESNO
# 1194 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_35
Start_EventScript_Chose_City_34:
# 1197 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1198 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 1199 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_PETALBURG_CITY, 255, 21, 27
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_6:
# 1204 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_4, MSGBOX_YESNO
# 1205 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_38
Start_EventScript_Chose_City_37:
# 1208 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1209 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 1210 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_RUSTBORO_CITY, 255, 16, 39
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_7:
# 1215 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_5, MSGBOX_YESNO
# 1216 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_41
Start_EventScript_Chose_City_40:
# 1219 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1220 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
# 1221 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_DEWFORD_TOWN, 255, 2, 11
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_8:
# 1226 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_6, MSGBOX_YESNO
# 1227 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_44
Start_EventScript_Chose_City_43:
# 1230 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1231 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
# 1232 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_SLATEPORT_CITY, 255, 19, 20
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_9:
# 1236 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_7, MSGBOX_YESNO
# 1237 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_47
Start_EventScript_Chose_City_46:
# 1240 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1241 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 1242 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_MAUVILLE_CITY, 255, 34, 6
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_10:
# 1247 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_8, MSGBOX_YESNO
# 1248 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_50
Start_EventScript_Chose_City_49:
# 1251 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1252 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
# 1253 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_VERDANTURF_TOWN, 255, 22, 4
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_11:
# 1257 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_9, MSGBOX_YESNO
# 1258 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_53
Start_EventScript_Chose_City_52:
# 1261 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1262 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
# 1263 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_FALLARBOR_TOWN, 255, 14, 8
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_12:
# 1268 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_10, MSGBOX_YESNO
# 1269 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_56
Start_EventScript_Chose_City_55:
# 1272 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1273 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
# 1274 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LAVARIDGE_TOWN, 255, 9, 7
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_13:
# 1278 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_11, MSGBOX_YESNO
# 1279 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_59
Start_EventScript_Chose_City_58:
# 1282 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1283 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_FORTREE_CITY
# 1284 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_FORTREE_CITY, 255, 5, 7
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_14:
# 1288 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_12, MSGBOX_YESNO
# 1289 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_62
Start_EventScript_Chose_City_61:
# 1292 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1293 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LILYCOVE_CITY
# 1294 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LILYCOVE_CITY, 255, 24, 15
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_15:
# 1298 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_13, MSGBOX_YESNO
# 1299 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_65
Start_EventScript_Chose_City_64:
# 1302 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1303 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_MOSSDEEP_CITY
# 1304 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_MOSSDEEP_CITY, 255, 28, 17
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_16:
# 1308 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_14, MSGBOX_YESNO
# 1309 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_68
Start_EventScript_Chose_City_67:
# 1312 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1313 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_SOOTOPOLIS_CITY
# 1314 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_SOOTOPOLIS_CITY, 255, 43, 32
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_17:
# 1318 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_15, MSGBOX_YESNO
# 1319 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_71
Start_EventScript_Chose_City_70:
# 1322 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1323 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
# 1324 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_PACIFIDLOG_TOWN, 255, 8, 16
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_18:
# 1328 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_16, MSGBOX_YESNO
# 1329 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_74
Start_EventScript_Chose_City_73:
# 1332 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1333 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY
# 1334 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_EVER_GRANDE_CITY, 255, 27, 49
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_19:
# 1338 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_17, MSGBOX_YESNO
# 1339 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_77
Start_EventScript_Chose_City_76:
# 1342 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_1, 1
# 1343 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_ONE_ISLAND
# 1344 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_ONE_ISLAND, 255, 30, 6
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_20:
# 1348 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_18, MSGBOX_YESNO
# 1349 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_80
Start_EventScript_Chose_City_79:
# 1352 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_2, 1
# 1353 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_TWO_ISLAND
# 1354 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_TWO_ISLAND, 255, 21, 8
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_21:
# 1358 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_19, MSGBOX_YESNO
# 1359 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_83
Start_EventScript_Chose_City_82:
# 1362 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_3, 1
# 1363 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_THREE_ISLAND
# 1364 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_THREE_ISLAND, 255, 14, 28
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_22:
# 1368 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_20, MSGBOX_YESNO
# 1369 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_86
Start_EventScript_Chose_City_85:
# 1372 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_4, 1
# 1373 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_FOUR_ISLAND
# 1374 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_FOUR_ISLAND, 255, 18, 21
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_23:
# 1378 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_21, MSGBOX_YESNO
# 1379 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_89
Start_EventScript_Chose_City_88:
# 1382 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_5, 1
# 1383 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_FIVE_ISLAND
# 1384 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_FIVE_ISLAND, 255, 29, 16
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_24:
# 1388 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_22, MSGBOX_YESNO
# 1389 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_92
Start_EventScript_Chose_City_91:
# 1392 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_6, 1
# 1393 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_SIX_ISLAND
# 1394 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_SIX_ISLAND, 255, 27, 12
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_25:
# 1398 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_23, MSGBOX_YESNO
# 1399 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_95
Start_EventScript_Chose_City_94:
# 1402 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_7, 1
# 1403 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_SEVEN_ISLAND
# 1404 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_SEVEN_ISLAND, 255, 15, 4
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_26:
# 1408 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Chose_City_Text_24, MSGBOX_YESNO
# 1409 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Start_EventScript_Chose_City_98
Start_EventScript_Chose_City_97:
# 1412 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_8, 1
# 1413 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_EIGHT_ISLAND
# 1414 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_EIGHT_ISLAND, 255, 24, 25
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_27:
# 1418 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City_Surprise
	goto Start_EventScript_Chose_City_1

Start_EventScript_Chose_City_29:
# 1167 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_28

Start_EventScript_Chose_City_32:
# 1184 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_31

Start_EventScript_Chose_City_35:
# 1195 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_34

Start_EventScript_Chose_City_38:
# 1206 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_37

Start_EventScript_Chose_City_41:
# 1217 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_40

Start_EventScript_Chose_City_44:
# 1228 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_43

Start_EventScript_Chose_City_47:
# 1238 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_46

Start_EventScript_Chose_City_50:
# 1249 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_49

Start_EventScript_Chose_City_53:
# 1259 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_52

Start_EventScript_Chose_City_56:
# 1270 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_55

Start_EventScript_Chose_City_59:
# 1280 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_58

Start_EventScript_Chose_City_62:
# 1290 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_61

Start_EventScript_Chose_City_65:
# 1300 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_64

Start_EventScript_Chose_City_68:
# 1310 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_67

Start_EventScript_Chose_City_71:
# 1320 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_70

Start_EventScript_Chose_City_74:
# 1330 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_73

Start_EventScript_Chose_City_77:
# 1340 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_76

Start_EventScript_Chose_City_80:
# 1350 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_79

Start_EventScript_Chose_City_83:
# 1360 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_82

Start_EventScript_Chose_City_86:
# 1370 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_85

Start_EventScript_Chose_City_89:
# 1380 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_88

Start_EventScript_Chose_City_92:
# 1390 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_91

Start_EventScript_Chose_City_95:
# 1400 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_94

Start_EventScript_Chose_City_98:
# 1410 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Chose_City
	goto Start_EventScript_Chose_City_97

Start_EventScript_Chose_City_101:
# 1172 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 255, 15, 9
# 1173 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	goto Start_EventScript_Chose_City_100


Common_Eventscript_CheckForSeviiTicket::
# 1425 "data/maps/InsideOfTruck/scripts.pory"
	checkitem ITEM_SEVII_TICKET_1, 1
# 1426 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_Eventscript_CheckForSeviiTicket_2
Common_Eventscript_CheckForSeviiTicket_1:
	return

Common_Eventscript_CheckForSeviiTicket_2:
# 1427 "data/maps/InsideOfTruck/scripts.pory"
	checkitem ITEM_SEVII_TICKET_2, 1
# 1428 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_Eventscript_CheckForSeviiTicket_4
	goto Common_Eventscript_CheckForSeviiTicket_1

Common_Eventscript_CheckForSeviiTicket_4:
# 1429 "data/maps/InsideOfTruck/scripts.pory"
	checkitem ITEM_SEVII_TICKET_3, 1
# 1430 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_Eventscript_CheckForSeviiTicket_6
	goto Common_Eventscript_CheckForSeviiTicket_1

Common_Eventscript_CheckForSeviiTicket_6:
# 1431 "data/maps/InsideOfTruck/scripts.pory"
	checkitem ITEM_SEVII_TICKET_4, 1
# 1432 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_Eventscript_CheckForSeviiTicket_8
	goto Common_Eventscript_CheckForSeviiTicket_1

Common_Eventscript_CheckForSeviiTicket_8:
# 1433 "data/maps/InsideOfTruck/scripts.pory"
	checkitem ITEM_SEVII_TICKET_5, 1
# 1434 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_Eventscript_CheckForSeviiTicket_10
	goto Common_Eventscript_CheckForSeviiTicket_1

Common_Eventscript_CheckForSeviiTicket_10:
# 1435 "data/maps/InsideOfTruck/scripts.pory"
	checkitem ITEM_SEVII_TICKET_6, 1
# 1436 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_Eventscript_CheckForSeviiTicket_12
	goto Common_Eventscript_CheckForSeviiTicket_1

Common_Eventscript_CheckForSeviiTicket_12:
# 1437 "data/maps/InsideOfTruck/scripts.pory"
	checkitem ITEM_SEVII_TICKET_7, 1
# 1438 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_Eventscript_CheckForSeviiTicket_14
	goto Common_Eventscript_CheckForSeviiTicket_1

Common_Eventscript_CheckForSeviiTicket_14:
# 1439 "data/maps/InsideOfTruck/scripts.pory"
	checkitem ITEM_SEVII_TICKET_8, 1
# 1440 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_Eventscript_CheckForSeviiTicket_16
	goto Common_Eventscript_CheckForSeviiTicket_1

Common_Eventscript_CheckForSeviiTicket_16:
# 1441 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
	goto Common_Eventscript_CheckForSeviiTicket_1


Start_EventScript_Chose_City_Surprise::
# 1454 "data/maps/InsideOfTruck/scripts.pory"
	random 24
# 1455 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1457 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Chose_City_Surprise_3
# 1470 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Chose_City_Surprise_4
# 1476 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Chose_City_Surprise_5
# 1482 "data/maps/InsideOfTruck/scripts.pory"
	case 3, Start_EventScript_Chose_City_Surprise_6
# 1488 "data/maps/InsideOfTruck/scripts.pory"
	case 4, Start_EventScript_Chose_City_Surprise_7
# 1494 "data/maps/InsideOfTruck/scripts.pory"
	case 5, Start_EventScript_Chose_City_Surprise_8
# 1500 "data/maps/InsideOfTruck/scripts.pory"
	case 6, Start_EventScript_Chose_City_Surprise_9
# 1506 "data/maps/InsideOfTruck/scripts.pory"
	case 7, Start_EventScript_Chose_City_Surprise_10
# 1512 "data/maps/InsideOfTruck/scripts.pory"
	case 8, Start_EventScript_Chose_City_Surprise_11
# 1518 "data/maps/InsideOfTruck/scripts.pory"
	case 9, Start_EventScript_Chose_City_Surprise_12
# 1524 "data/maps/InsideOfTruck/scripts.pory"
	case 10, Start_EventScript_Chose_City_Surprise_13
# 1530 "data/maps/InsideOfTruck/scripts.pory"
	case 11, Start_EventScript_Chose_City_Surprise_14
# 1536 "data/maps/InsideOfTruck/scripts.pory"
	case 12, Start_EventScript_Chose_City_Surprise_15
# 1542 "data/maps/InsideOfTruck/scripts.pory"
	case 13, Start_EventScript_Chose_City_Surprise_16
# 1548 "data/maps/InsideOfTruck/scripts.pory"
	case 14, Start_EventScript_Chose_City_Surprise_17
# 1554 "data/maps/InsideOfTruck/scripts.pory"
	case 15, Start_EventScript_Chose_City_Surprise_18
# 1560 "data/maps/InsideOfTruck/scripts.pory"
	case 16, Start_EventScript_Chose_City_Surprise_19
# 1566 "data/maps/InsideOfTruck/scripts.pory"
	case 17, Start_EventScript_Chose_City_Surprise_20
# 1572 "data/maps/InsideOfTruck/scripts.pory"
	case 18, Start_EventScript_Chose_City_Surprise_21
# 1578 "data/maps/InsideOfTruck/scripts.pory"
	case 19, Start_EventScript_Chose_City_Surprise_22
# 1584 "data/maps/InsideOfTruck/scripts.pory"
	case 20, Start_EventScript_Chose_City_Surprise_23
# 1590 "data/maps/InsideOfTruck/scripts.pory"
	case 21, Start_EventScript_Chose_City_Surprise_24
# 1596 "data/maps/InsideOfTruck/scripts.pory"
	case 22, Start_EventScript_Chose_City_Surprise_25
# 1602 "data/maps/InsideOfTruck/scripts.pory"
	case 23, Start_EventScript_Chose_City_Surprise_26
Start_EventScript_Chose_City_Surprise_3:
# 1459 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1460 "data/maps/InsideOfTruck/scripts.pory"
	checkplayergender
# 1461 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Start_EventScript_Chose_City_Surprise_32
# 1466 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 255, 24, 9
# 1467 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
Start_EventScript_Chose_City_Surprise_31:
Start_EventScript_Chose_City_Surprise_1:
	end

Start_EventScript_Chose_City_Surprise_4:
# 1472 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1473 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_OLDALE_TOWN
# 1474 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_OLDALE_TOWN, 255, 14, 8
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_5:
# 1478 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1479 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_PETALBURG_CITY
# 1480 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_PETALBURG_CITY, 255, 21, 27
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_6:
# 1484 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1485 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_RUSTBORO_CITY
# 1486 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_RUSTBORO_CITY, 255, 16, 39
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_7:
# 1490 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1491 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
# 1492 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_DEWFORD_TOWN, 255, 2, 11
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_8:
# 1496 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1497 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
# 1498 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_SLATEPORT_CITY, 255, 19, 20
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_9:
# 1502 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1503 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
# 1504 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_MAUVILLE_CITY, 255, 34, 6
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_10:
# 1508 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1509 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_VERDANTURF_TOWN
# 1510 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_VERDANTURF_TOWN, 255, 22, 4
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_11:
# 1514 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1515 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_FALLARBOR_TOWN
# 1516 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_FALLARBOR_TOWN, 255, 14, 8
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_12:
# 1520 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1521 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
# 1522 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LAVARIDGE_TOWN, 255, 9, 7
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_13:
# 1526 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1527 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_FORTREE_CITY
# 1528 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_FORTREE_CITY, 255, 5, 7
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_14:
# 1532 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1533 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LILYCOVE_CITY
# 1534 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LILYCOVE_CITY, 255, 24, 15
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_15:
# 1538 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1539 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_MOSSDEEP_CITY
# 1540 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_MOSSDEEP_CITY, 255, 28, 17
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_16:
# 1544 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1545 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_SOOTOPOLIS_CITY
# 1546 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_SOOTOPOLIS_CITY, 255, 43, 32
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_17:
# 1550 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1551 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_PACIFIDLOG_TOWN
# 1552 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_PACIFIDLOG_TOWN, 255, 8, 16
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_18:
# 1556 "data/maps/InsideOfTruck/scripts.pory"
	call Start_EventScript_Give_Random_Sevii_Ticket
# 1557 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY
# 1558 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_EVER_GRANDE_CITY, 255, 27, 49
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_19:
# 1562 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_1, 1
# 1563 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_ONE_ISLAND
# 1564 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_ONE_ISLAND, 255, 30, 6
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_20:
# 1568 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_2, 1
# 1569 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_TWO_ISLAND
# 1570 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_TWO_ISLAND, 255, 21, 8
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_21:
# 1574 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_3, 1
# 1575 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_THREE_ISLAND
# 1576 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_THREE_ISLAND, 255, 14, 28
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_22:
# 1580 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_4, 1
# 1581 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_FOUR_ISLAND
# 1582 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_FOUR_ISLAND, 255, 18, 21
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_23:
# 1586 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_5, 1
# 1587 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_FIVE_ISLAND
# 1588 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_FIVE_ISLAND, 255, 29, 16
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_24:
# 1592 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_6, 1
# 1593 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_SIX_ISLAND
# 1594 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_SIX_ISLAND, 255, 27, 12
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_25:
# 1598 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_7, 1
# 1599 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_SEVEN_ISLAND
# 1600 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_SEVEN_ISLAND, 255, 15, 4
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_26:
# 1604 "data/maps/InsideOfTruck/scripts.pory"
	additem ITEM_SEVII_TICKET_8, 1
# 1605 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_EIGHT_ISLAND
# 1606 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_EIGHT_ISLAND, 255, 24, 25
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_27:
	goto Start_EventScript_Chose_City_Surprise_1

Start_EventScript_Chose_City_Surprise_28:
# 1462 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 255, 15, 9
# 1463 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	goto Start_EventScript_Chose_City_Surprise_27

Start_EventScript_Chose_City_Surprise_29:
# 1466 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 255, 24, 9
# 1467 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
	goto Start_EventScript_Chose_City_Surprise_27

# 1461 "data/maps/InsideOfTruck/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Start_EventScript_Chose_City_Surprise_28
	goto Start_EventScript_Chose_City_Surprise_29

Start_EventScript_Chose_City_Surprise_32:
# 1462 "data/maps/InsideOfTruck/scripts.pory"
	warp MAP_LITTLEROOT_TOWN, 255, 15, 9
# 1463 "data/maps/InsideOfTruck/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	goto Start_EventScript_Chose_City_Surprise_31


Start_EventScript_Game_Mode_Random_Type_Mode::
# 1627 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 1629 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_TYPE_RANDOMIZER_MODE, Start_EventScript_Game_Mode_Random_Type_Mode_2
# 1635 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Type_Mode_Text_1, MSGBOX_DEFAULT
# 1636 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1637 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
Start_EventScript_Game_Mode_Random_Type_Mode_1:
# 1640 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1641 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_Random_Type_Mode_7
# 1655 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Random_Type_Mode_8
# 1658 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_Random_Type_Mode_9
# 1659 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Mode_Random_Type_Mode_9
Start_EventScript_Game_Mode_Random_Type_Mode_5:
# 1664 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Random_Type_Mode
	end

Start_EventScript_Game_Mode_Random_Type_Mode_2:
# 1630 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Type_Mode_Text_0, MSGBOX_DEFAULT
# 1631 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1632 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
	goto Start_EventScript_Game_Mode_Random_Type_Mode_1

Start_EventScript_Game_Mode_Random_Type_Mode_7:
# 1642 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_TYPE_RANDOMIZER_MODE, Start_EventScript_Game_Mode_Random_Type_Mode_11
# 1649 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 1650 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Type_Mode_Text_3, MSGBOX_DEFAULT
# 1651 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1652 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_TYPE_RANDOMIZER_MODE
Start_EventScript_Game_Mode_Random_Type_Mode_10:
	goto Start_EventScript_Game_Mode_Random_Type_Mode_5

Start_EventScript_Game_Mode_Random_Type_Mode_8:
# 1656 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Type_Mode_Text_4, MSGBOX_DEFAULT
	goto Start_EventScript_Game_Mode_Random_Type_Mode_5

Start_EventScript_Game_Mode_Random_Type_Mode_9:
# 1660 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_Random_Type_Mode_5

Start_EventScript_Game_Mode_Random_Type_Mode_11:
# 1643 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1644 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Type_Mode_Text_2, MSGBOX_DEFAULT
# 1645 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1646 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_TYPE_RANDOMIZER_MODE
	goto Start_EventScript_Game_Mode_Random_Type_Mode_10


Start_EventScript_Game_Mode_Random_Ability_Mode::
# 1670 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 1672 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_ABILITY_RANDOMIZER_MODE, Start_EventScript_Game_Mode_Random_Ability_Mode_2
# 1678 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Ability_Mode_Text_1, MSGBOX_DEFAULT
# 1679 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1680 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
Start_EventScript_Game_Mode_Random_Ability_Mode_1:
# 1683 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1684 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_Random_Ability_Mode_7
# 1698 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Random_Ability_Mode_8
# 1701 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_Random_Ability_Mode_9
# 1702 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Mode_Random_Ability_Mode_9
Start_EventScript_Game_Mode_Random_Ability_Mode_5:
# 1707 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Random_Ability_Mode
	end

Start_EventScript_Game_Mode_Random_Ability_Mode_2:
# 1673 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Ability_Mode_Text_0, MSGBOX_DEFAULT
# 1674 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1675 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
	goto Start_EventScript_Game_Mode_Random_Ability_Mode_1

Start_EventScript_Game_Mode_Random_Ability_Mode_7:
# 1685 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_ABILITY_RANDOMIZER_MODE, Start_EventScript_Game_Mode_Random_Ability_Mode_11
# 1692 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 1693 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Ability_Mode_Text_3, MSGBOX_DEFAULT
# 1694 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1695 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_ABILITY_RANDOMIZER_MODE
Start_EventScript_Game_Mode_Random_Ability_Mode_10:
	goto Start_EventScript_Game_Mode_Random_Ability_Mode_5

Start_EventScript_Game_Mode_Random_Ability_Mode_8:
# 1699 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Ability_Mode_Text_4, MSGBOX_DEFAULT
	goto Start_EventScript_Game_Mode_Random_Ability_Mode_5

Start_EventScript_Game_Mode_Random_Ability_Mode_9:
# 1703 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_Random_Ability_Mode_5

Start_EventScript_Game_Mode_Random_Ability_Mode_11:
# 1686 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1687 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Random_Ability_Mode_Text_2, MSGBOX_DEFAULT
# 1688 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1689 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_ABILITY_RANDOMIZER_MODE
	goto Start_EventScript_Game_Mode_Random_Ability_Mode_10


Start_EventScript_Game_Mode_Third_Type_Mode::
# 1713 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 1715 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_THIRD_TYPE_MODE, Start_EventScript_Game_Mode_Third_Type_Mode_2
# 1721 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Third_Type_Mode_Text_1, MSGBOX_DEFAULT
# 1722 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1723 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
Start_EventScript_Game_Mode_Third_Type_Mode_1:
# 1726 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1727 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_Third_Type_Mode_7
# 1741 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Third_Type_Mode_8
# 1744 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_Third_Type_Mode_9
# 1745 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Mode_Third_Type_Mode_9
Start_EventScript_Game_Mode_Third_Type_Mode_5:
# 1750 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Third_Type_Mode
	end

Start_EventScript_Game_Mode_Third_Type_Mode_2:
# 1716 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Third_Type_Mode_Text_0, MSGBOX_DEFAULT
# 1717 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1718 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
	goto Start_EventScript_Game_Mode_Third_Type_Mode_1

Start_EventScript_Game_Mode_Third_Type_Mode_7:
# 1728 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_THIRD_TYPE_MODE, Start_EventScript_Game_Mode_Third_Type_Mode_11
# 1735 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 1736 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Third_Type_Mode_Text_3, MSGBOX_DEFAULT
# 1737 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1738 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_THIRD_TYPE_MODE
Start_EventScript_Game_Mode_Third_Type_Mode_10:
	goto Start_EventScript_Game_Mode_Third_Type_Mode_5

Start_EventScript_Game_Mode_Third_Type_Mode_8:
# 1742 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Third_Type_Mode_Text_4, MSGBOX_DEFAULT
	goto Start_EventScript_Game_Mode_Third_Type_Mode_5

Start_EventScript_Game_Mode_Third_Type_Mode_9:
# 1746 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_Third_Type_Mode_5

Start_EventScript_Game_Mode_Third_Type_Mode_11:
# 1729 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1730 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Third_Type_Mode_Text_2, MSGBOX_DEFAULT
# 1731 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1732 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_THIRD_TYPE_MODE
	goto Start_EventScript_Game_Mode_Third_Type_Mode_10


Start_EventScript_Game_Mode_No_Mega_Mode::
# 1756 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 1758 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_NO_MEGA_MODE, Start_EventScript_Game_Mode_No_Mega_Mode_2
# 1764 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_No_Mega_Mode_Text_1, MSGBOX_DEFAULT
# 1765 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1766 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
Start_EventScript_Game_Mode_No_Mega_Mode_1:
# 1769 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1770 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_No_Mega_Mode_7
# 1784 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_No_Mega_Mode_8
# 1787 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_No_Mega_Mode_9
# 1788 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Mode_No_Mega_Mode_9
Start_EventScript_Game_Mode_No_Mega_Mode_5:
# 1793 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_No_Mega_Mode
	end

Start_EventScript_Game_Mode_No_Mega_Mode_2:
# 1759 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_No_Mega_Mode_Text_0, MSGBOX_DEFAULT
# 1760 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1761 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
	goto Start_EventScript_Game_Mode_No_Mega_Mode_1

Start_EventScript_Game_Mode_No_Mega_Mode_7:
# 1771 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_NO_MEGA_MODE, Start_EventScript_Game_Mode_No_Mega_Mode_11
# 1778 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 1779 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_No_Mega_Mode_Text_3, MSGBOX_DEFAULT
# 1780 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1781 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_NO_MEGA_MODE
Start_EventScript_Game_Mode_No_Mega_Mode_10:
	goto Start_EventScript_Game_Mode_No_Mega_Mode_5

Start_EventScript_Game_Mode_No_Mega_Mode_8:
# 1785 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_No_Mega_Mode_Text_4, MSGBOX_DEFAULT
	goto Start_EventScript_Game_Mode_No_Mega_Mode_5

Start_EventScript_Game_Mode_No_Mega_Mode_9:
# 1789 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_No_Mega_Mode_5

Start_EventScript_Game_Mode_No_Mega_Mode_11:
# 1772 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1773 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_No_Mega_Mode_Text_2, MSGBOX_DEFAULT
# 1774 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1775 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_NO_MEGA_MODE
	goto Start_EventScript_Game_Mode_No_Mega_Mode_10


Start_EventScript_Game_Mode_Old_STAB_Mode::
# 1799 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 1801 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_OLD_STAB_MODE, Start_EventScript_Game_Mode_Old_STAB_Mode_2
# 1807 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Old_STAB_Mode_Text_1, MSGBOX_DEFAULT
# 1808 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1809 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
Start_EventScript_Game_Mode_Old_STAB_Mode_1:
# 1812 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1813 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_Old_STAB_Mode_7
# 1827 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Old_STAB_Mode_8
# 1830 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_Old_STAB_Mode_9
# 1831 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Mode_Old_STAB_Mode_9
Start_EventScript_Game_Mode_Old_STAB_Mode_5:
# 1836 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Old_STAB_Mode
	end

Start_EventScript_Game_Mode_Old_STAB_Mode_2:
# 1802 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Old_STAB_Mode_Text_0, MSGBOX_DEFAULT
# 1803 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1804 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
	goto Start_EventScript_Game_Mode_Old_STAB_Mode_1

Start_EventScript_Game_Mode_Old_STAB_Mode_7:
# 1814 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_OLD_STAB_MODE, Start_EventScript_Game_Mode_Old_STAB_Mode_11
# 1821 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 1822 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Old_STAB_Mode_Text_3, MSGBOX_DEFAULT
# 1823 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1824 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_OLD_STAB_MODE
Start_EventScript_Game_Mode_Old_STAB_Mode_10:
	goto Start_EventScript_Game_Mode_Old_STAB_Mode_5

Start_EventScript_Game_Mode_Old_STAB_Mode_8:
# 1828 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Old_STAB_Mode_Text_4, MSGBOX_DEFAULT
	goto Start_EventScript_Game_Mode_Old_STAB_Mode_5

Start_EventScript_Game_Mode_Old_STAB_Mode_9:
# 1832 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_Old_STAB_Mode_5

Start_EventScript_Game_Mode_Old_STAB_Mode_11:
# 1815 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1816 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Old_STAB_Mode_Text_2, MSGBOX_DEFAULT
# 1817 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1818 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_OLD_STAB_MODE
	goto Start_EventScript_Game_Mode_Old_STAB_Mode_10


Start_EventScript_Game_Mode_True_Random_Mode::
# 1842 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 1844 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_TRUE_RANDOM_MODE, Start_EventScript_Game_Mode_True_Random_Mode_2
# 1850 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_True_Random_Mode_Text_1, MSGBOX_DEFAULT
# 1851 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1852 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
Start_EventScript_Game_Mode_True_Random_Mode_1:
# 1855 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1856 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_True_Random_Mode_7
# 1871 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_True_Random_Mode_8
# 1874 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_True_Random_Mode_9
# 1875 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Mode_True_Random_Mode_9
Start_EventScript_Game_Mode_True_Random_Mode_5:
# 1880 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_True_Random_Mode
	end

Start_EventScript_Game_Mode_True_Random_Mode_2:
# 1845 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_True_Random_Mode_Text_0, MSGBOX_DEFAULT
# 1846 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1847 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
	goto Start_EventScript_Game_Mode_True_Random_Mode_1

Start_EventScript_Game_Mode_True_Random_Mode_7:
# 1857 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_TRUE_RANDOM_MODE, Start_EventScript_Game_Mode_True_Random_Mode_11
# 1865 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 1866 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_True_Random_Mode_Text_3, MSGBOX_DEFAULT
# 1867 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1868 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_TRUE_RANDOM_MODE
Start_EventScript_Game_Mode_True_Random_Mode_10:
	goto Start_EventScript_Game_Mode_True_Random_Mode_5

Start_EventScript_Game_Mode_True_Random_Mode_8:
# 1872 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_True_Random_Mode_Text_4, MSGBOX_DEFAULT
	goto Start_EventScript_Game_Mode_True_Random_Mode_5

Start_EventScript_Game_Mode_True_Random_Mode_9:
# 1876 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_True_Random_Mode_5

Start_EventScript_Game_Mode_True_Random_Mode_11:
# 1858 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1859 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_True_Random_Mode_Text_2, MSGBOX_DEFAULT
# 1860 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1861 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_TRUE_RANDOM_MODE
# 1862 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZED_MODE
	goto Start_EventScript_Game_Mode_True_Random_Mode_10


Start_EventScript_Game_Mode_Grindless_Mode::
# 1886 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 1888 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_GRINDLESS_MODE, Start_EventScript_Game_Mode_Grindless_Mode_2
# 1894 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Grindless_Mode_Text_1, MSGBOX_DEFAULT
# 1895 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1896 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
Start_EventScript_Game_Mode_Grindless_Mode_1:
# 1899 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1900 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_Grindless_Mode_7
# 1914 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Grindless_Mode_8
# 1917 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_Grindless_Mode_9
# 1918 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Mode_Grindless_Mode_9
Start_EventScript_Game_Mode_Grindless_Mode_5:
# 1923 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Grindless_Mode
	end

Start_EventScript_Game_Mode_Grindless_Mode_2:
# 1889 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Grindless_Mode_Text_0, MSGBOX_DEFAULT
# 1890 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1891 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
	goto Start_EventScript_Game_Mode_Grindless_Mode_1

Start_EventScript_Game_Mode_Grindless_Mode_7:
# 1901 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_GRINDLESS_MODE, Start_EventScript_Game_Mode_Grindless_Mode_11
# 1908 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 1909 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Grindless_Mode_Text_3, MSGBOX_DEFAULT
# 1910 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1911 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_GRINDLESS_MODE
Start_EventScript_Game_Mode_Grindless_Mode_10:
	goto Start_EventScript_Game_Mode_Grindless_Mode_5

Start_EventScript_Game_Mode_Grindless_Mode_8:
# 1915 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Grindless_Mode_Text_4, MSGBOX_DEFAULT
	goto Start_EventScript_Game_Mode_Grindless_Mode_5

Start_EventScript_Game_Mode_Grindless_Mode_9:
# 1919 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_Grindless_Mode_5

Start_EventScript_Game_Mode_Grindless_Mode_11:
# 1902 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1903 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Grindless_Mode_Text_2, MSGBOX_DEFAULT
# 1904 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1905 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_GRINDLESS_MODE
	goto Start_EventScript_Game_Mode_Grindless_Mode_10


Start_EventScript_Game_Mode_Scalemon_Mode::
# 1929 "data/maps/InsideOfTruck/scripts.pory"
	lockall
# 1931 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_SCALEMON_MODE, Start_EventScript_Game_Mode_Scalemon_Mode_2
# 1937 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Scalemon_Mode_Text_1, MSGBOX_DEFAULT
# 1938 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1939 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_DISABLE, 0
Start_EventScript_Game_Mode_Scalemon_Mode_1:
# 1942 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1943 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_Scalemon_Mode_7
# 1957 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Scalemon_Mode_8
# 1960 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_Scalemon_Mode_9
# 1961 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_Game_Mode_Scalemon_Mode_9
Start_EventScript_Game_Mode_Scalemon_Mode_5:
# 1966 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Mode_Scalemon_Mode
	end

Start_EventScript_Game_Mode_Scalemon_Mode_2:
# 1932 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Scalemon_Mode_Text_0, MSGBOX_DEFAULT
# 1933 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1934 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_ENABLE, 0
	goto Start_EventScript_Game_Mode_Scalemon_Mode_1

Start_EventScript_Game_Mode_Scalemon_Mode_7:
# 1944 "data/maps/InsideOfTruck/scripts.pory"
	goto_if_unset FLAG_SCALEMON_MODE, Start_EventScript_Game_Mode_Scalemon_Mode_11
# 1951 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_BOO
# 1952 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Scalemon_Mode_Text_3, MSGBOX_DEFAULT
# 1953 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1954 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_SCALEMON_MODE
Start_EventScript_Game_Mode_Scalemon_Mode_10:
	goto Start_EventScript_Game_Mode_Scalemon_Mode_5

Start_EventScript_Game_Mode_Scalemon_Mode_8:
# 1958 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Scalemon_Mode_Text_4, MSGBOX_DEFAULT
	goto Start_EventScript_Game_Mode_Scalemon_Mode_5

Start_EventScript_Game_Mode_Scalemon_Mode_9:
# 1962 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_Scalemon_Mode_5

Start_EventScript_Game_Mode_Scalemon_Mode_11:
# 1945 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1946 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Scalemon_Mode_Text_2, MSGBOX_DEFAULT
# 1947 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1948 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SCALEMON_MODE
	goto Start_EventScript_Game_Mode_Scalemon_Mode_10


Start_EventScript_Difficulty_Save::
# 1971 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1972 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1973 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Difficulty_Save_Text_0, MSGBOX_DEFAULT
# 1974 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Starter_Chose
	end


Start_EventScript_Game_Modes_were_Saved::
# 1979 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 1980 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 1981 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Modes_were_Saved_Text_0, MSGBOX_DEFAULT
# 1982 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Starter_Chose
	end


Start_EventScript_Game_Mode_Save::
# 1987 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_Game_Mode_Save_Text_0, MSGBOX_DEFAULT
# 1988 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 1989 "data/maps/InsideOfTruck/scripts.pory"
	multichoice 0, 0, MULTI_GAME_MODE_SAVE, 0
# 1990 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 1991 "data/maps/InsideOfTruck/scripts.pory"
	case 0, Start_EventScript_Game_Mode_Save_3
# 1994 "data/maps/InsideOfTruck/scripts.pory"
	case 1, Start_EventScript_Game_Mode_Save_4
# 1997 "data/maps/InsideOfTruck/scripts.pory"
	case 2, Start_EventScript_Game_Mode_Save_5
# 2001 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
Start_EventScript_Game_Mode_Save_1:
	end

Start_EventScript_Game_Mode_Save_3:
# 1992 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	goto Start_EventScript_Game_Mode_Save_1

Start_EventScript_Game_Mode_Save_4:
# 1995 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes_were_Saved
	goto Start_EventScript_Game_Mode_Save_1

Start_EventScript_Game_Mode_Save_5:
# 1998 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes_Default
	goto Start_EventScript_Game_Mode_Save_1


EventScript_PkmnCenterNurseDifficulty_Save::
# 2008 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 2009 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 2010 "data/maps/InsideOfTruck/scripts.pory"
	msgbox EventScript_PkmnCenterNurseDifficulty_Save_Text_0, MSGBOX_DEFAULT
# 2011 "data/maps/InsideOfTruck/scripts.pory"
	goto EventScript_PkmnCenterNurse_Goodbye
	end


Start_EventScript_Game_Modes_Default::
# 2016 "data/maps/InsideOfTruck/scripts.pory"
	playfanfare SE_SAVE
# 2017 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Game_Start_Text_Game_Modes_Default, MSGBOX_DEFAULT
# 2018 "data/maps/InsideOfTruck/scripts.pory"
	waitfanfare
# 2019 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_SCALEMON_MODE
# 2020 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_GRINDLESS_MODE
# 2021 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_VANILLA_MODE
# 2022 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_NO_SPLIT_MODE
# 2023 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_NO_EVOLUTION_MODE
# 2024 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_DOUBLE_BATTLE_MODE
# 2025 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_NO_EVS_MODE
# 2026 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_PARTY_RANDOMIZED_MODE
# 2027 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_RANDOMIZED_MODE
# 2028 "data/maps/InsideOfTruck/scripts.pory"
	clearflag FLAG_INVERSE_MODE
# 2029 "data/maps/InsideOfTruck/scripts.pory"
	goto Start_EventScript_Game_Modes
	end


Start_EventScript_SetSeason::
# 2034 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_HIDE_GYM_MONS
# 2035 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_SetSeason_Text_0, MSGBOX_DEFAULT
# 2036 "data/maps/InsideOfTruck/scripts.pory"
	waitmessage
# 2037 "data/maps/InsideOfTruck/scripts.pory"
	scrollingmultichoice SCROLLING_SEASONS, 0, 0, 5, FALSE
# 2038 "data/maps/InsideOfTruck/scripts.pory"
	switch VAR_RESULT
# 2039 "data/maps/InsideOfTruck/scripts.pory"
	case SEASON_SPRING, Start_EventScript_SetSeason_3
# 2044 "data/maps/InsideOfTruck/scripts.pory"
	case SEASON_SUMMER, Start_EventScript_SetSeason_4
# 2049 "data/maps/InsideOfTruck/scripts.pory"
	case SEASON_AUTUMN, Start_EventScript_SetSeason_5
# 2054 "data/maps/InsideOfTruck/scripts.pory"
	case SEASON_WINTER, Start_EventScript_SetSeason_6
# 2059 "data/maps/InsideOfTruck/scripts.pory"
	case MULTI_B_PRESSED, Start_EventScript_SetSeason_7
Start_EventScript_SetSeason_7:
# 2061 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_SetSeason_Text_5
# 2062 "data/maps/InsideOfTruck/scripts.pory"
	return
Start_EventScript_SetSeason_1:
	return

Start_EventScript_SetSeason_3:
# 2040 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_CURRENT_SEASON, SEASON_SPRING
# 2041 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_DISABLE_AUTOMATIC_SEASON
# 2042 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_SetSeason_Text_1
	goto Start_EventScript_SetSeason_1

Start_EventScript_SetSeason_4:
# 2045 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_CURRENT_SEASON, SEASON_SUMMER
# 2046 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_DISABLE_AUTOMATIC_SEASON
# 2047 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_SetSeason_Text_2
	goto Start_EventScript_SetSeason_1

Start_EventScript_SetSeason_5:
# 2050 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_CURRENT_SEASON, SEASON_AUTUMN
# 2051 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_DISABLE_AUTOMATIC_SEASON
# 2052 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_SetSeason_Text_3
	goto Start_EventScript_SetSeason_1

Start_EventScript_SetSeason_6:
# 2055 "data/maps/InsideOfTruck/scripts.pory"
	setvar VAR_CURRENT_SEASON, SEASON_WINTER
# 2056 "data/maps/InsideOfTruck/scripts.pory"
	setflag FLAG_SYS_DISABLE_AUTOMATIC_SEASON
# 2057 "data/maps/InsideOfTruck/scripts.pory"
	msgbox Start_EventScript_SetSeason_Text_4
	goto Start_EventScript_SetSeason_1


Start_EventScript_Give_Items_New_Game_Plus_Text_0:
# 996 "data/maps/InsideOfTruck/scripts.pory"
	.string "Take these items, too.$"

Start_EventScript_Give_Items_New_Game_Plus_Text_1:
# 998 "data/maps/InsideOfTruck/scripts.pory"
	.string "{PLAYER} received a LOT of special\n"
	.string "items!$"

Start_EventScript_Give_Items_Text_0:
# 1029 "data/maps/InsideOfTruck/scripts.pory"
	.string "{PLAYER} received a Bike, Wailmer Pail,\n"
	.string "Old Rod, Exp.Share, Surfboard, Diving\l"
	.string "Kit, a Sevii Island Ticket and the\l"
	.string "essentials to start it's Pokémon\l"
	.string "Adventure!$"

Start_EventScript_Game_Modes_Text_0:
# 1081 "data/maps/InsideOfTruck/scripts.pory"
	.string "Please select the modes you want to\n"
	.string "use. Most of them {COLOR RED}CAN NOT{COLOR DARK_GREY} be disabled\l"
	.string "later.$"

Start_EventScript_Chose_Starter_Text_0:
# 1117 "data/maps/InsideOfTruck/scripts.pory"
	.string "Please choose your starter Pokémon$"

Start_EventScript_Chose_Starter_Text_1:
# 1123 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want the {STR_VAR_2}\n"
	.string "Pokemon {STR_VAR_1} as your\l"
	.string "Starter Pokemon?$"

Start_EventScript_Chose_Starter_Text_2:
# 1131 "data/maps/InsideOfTruck/scripts.pory"
	.string "{PLAYER} received a {STR_VAR_1}!$"

Start_EventScript_Chose_City_Text_0:
# 1160 "data/maps/InsideOfTruck/scripts.pory"
	.string "What location would you like to start\n"
	.string "in?$"

Start_EventScript_Chose_City_Text_1:
# 1165 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Littleroot\n"
	.string "Town?$"

Start_EventScript_Chose_City_Text_2:
# 1182 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Oldale Town?$"

Start_EventScript_Chose_City_Text_3:
# 1193 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Petalburg City?$"

Start_EventScript_Chose_City_Text_4:
# 1204 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Rustboro City?$"

Start_EventScript_Chose_City_Text_5:
# 1215 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Dewford Town?$"

Start_EventScript_Chose_City_Text_6:
# 1226 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Slateport Town?$"

Start_EventScript_Chose_City_Text_7:
# 1236 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Mauville City?$"

Start_EventScript_Chose_City_Text_8:
# 1247 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Verdanturf\n"
	.string "Town?$"

Start_EventScript_Chose_City_Text_9:
# 1257 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Fallarbor Town?$"

Start_EventScript_Chose_City_Text_10:
# 1268 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Lavaridge Town?$"

Start_EventScript_Chose_City_Text_11:
# 1278 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Fortree City?$"

Start_EventScript_Chose_City_Text_12:
# 1288 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Lilycove City?$"

Start_EventScript_Chose_City_Text_13:
# 1298 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Mossdeep City?$"

Start_EventScript_Chose_City_Text_14:
# 1308 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Sootopolis\n"
	.string "City?$"

Start_EventScript_Chose_City_Text_15:
# 1318 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Pacifidlog\n"
	.string "Town?$"

Start_EventScript_Chose_City_Text_16:
# 1328 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Evergrade City?$"

Start_EventScript_Chose_City_Text_17:
# 1338 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in One Island?$"

Start_EventScript_Chose_City_Text_18:
# 1348 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Two Island?$"

Start_EventScript_Chose_City_Text_19:
# 1358 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Three Island?$"

Start_EventScript_Chose_City_Text_20:
# 1368 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Four Island?$"

Start_EventScript_Chose_City_Text_21:
# 1378 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Five Island?$"

Start_EventScript_Chose_City_Text_22:
# 1388 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Six Island?$"

Start_EventScript_Chose_City_Text_23:
# 1398 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Seven Island?$"

Start_EventScript_Chose_City_Text_24:
# 1408 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to start in Eight Island?$"

Start_EventScript_Game_Mode_Random_Type_Mode_Text_0:
# 1630 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the {COLOR BLUE}Random Type\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Random_Type_Mode_Text_1:
# 1635 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the {COLOR BLUE}Random Type\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Random_Type_Mode_Text_2:
# 1644 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Random Type Mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Random_Type_Mode_Text_3:
# 1650 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Random Type Mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Random_Type_Mode_Text_4:
# 1656 "data/maps/InsideOfTruck/scripts.pory"
	.string "This Randomizes every Pokemon Type.$"

Start_EventScript_Game_Mode_Random_Ability_Mode_Text_0:
# 1673 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the {COLOR BLUE}Random\n"
	.string "Ability Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Random_Ability_Mode_Text_1:
# 1678 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the {COLOR BLUE}Random\n"
	.string "Ability Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Random_Ability_Mode_Text_2:
# 1687 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Random Ability Mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Random_Ability_Mode_Text_3:
# 1693 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Random Ability Mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Random_Ability_Mode_Text_4:
# 1699 "data/maps/InsideOfTruck/scripts.pory"
	.string "This Randomizes every Pokemon Ability.$"

Start_EventScript_Game_Mode_Third_Type_Mode_Text_0:
# 1716 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the {COLOR BLUE}Third Type\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Third_Type_Mode_Text_1:
# 1721 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the {COLOR BLUE}Third Type\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Third_Type_Mode_Text_2:
# 1730 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Third Type Mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Third_Type_Mode_Text_3:
# 1736 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Third Type Mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Third_Type_Mode_Text_4:
# 1742 "data/maps/InsideOfTruck/scripts.pory"
	.string "This gives every Pokémon a random third\n"
	.string "type.$"

Start_EventScript_Game_Mode_No_Mega_Mode_Text_0:
# 1759 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the {COLOR BLUE}No Mega Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_No_Mega_Mode_Text_1:
# 1764 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the {COLOR BLUE}No Mega\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_No_Mega_Mode_Text_2:
# 1773 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}No Mega Mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_No_Mega_Mode_Text_3:
# 1779 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}No Mega Mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_No_Mega_Mode_Text_4:
# 1785 "data/maps/InsideOfTruck/scripts.pory"
	.string "This disables mega evolution.$"

Start_EventScript_Game_Mode_Old_STAB_Mode_Text_0:
# 1802 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the {COLOR BLUE}Old STAB\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Old_STAB_Mode_Text_1:
# 1807 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the {COLOR BLUE}Old STAB\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Old_STAB_Mode_Text_2:
# 1816 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Old STAB Mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Old_STAB_Mode_Text_3:
# 1822 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Old STAB Mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Old_STAB_Mode_Text_4:
# 1828 "data/maps/InsideOfTruck/scripts.pory"
	.string "This uses the vanilla games STAB\n"
	.string "calculation and disables the monotype\l"
	.string "boost.$"

Start_EventScript_Game_Mode_True_Random_Mode_Text_0:
# 1845 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the {COLOR BLUE}True Random\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_True_Random_Mode_Text_1:
# 1850 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the {COLOR BLUE}True Random\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_True_Random_Mode_Text_2:
# 1859 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}True Random Mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_True_Random_Mode_Text_3:
# 1866 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}True Random Mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_True_Random_Mode_Text_4:
# 1872 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will fully randomize every Pokemon\n"
	.string "in the wild or used by trainers, you can\l"
	.string "probably get all the first stages in\l"
	.string "just one route with this, this also\l"
	.string "disables the dexnav.$"

Start_EventScript_Game_Mode_Grindless_Mode_Text_0:
# 1889 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the {COLOR BLUE}Grindless\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Grindless_Mode_Text_1:
# 1894 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the {COLOR BLUE}Grindless\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Grindless_Mode_Text_2:
# 1903 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Grindless Mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Grindless_Mode_Text_3:
# 1909 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Grindless Mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Grindless_Mode_Text_4:
# 1915 "data/maps/InsideOfTruck/scripts.pory"
	.string "This will let you set the EVs from the\n"
	.string "summary screen, remove Levels and\l"
	.string "balance stats using the number of\l"
	.string "badges you have, this also affects\l"
	.string "enemy mons and enemy trainers so it is\l"
	.string "balanced for both$"

Start_EventScript_Game_Mode_Scalemon_Mode_Text_0:
# 1932 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR GREEN}enable{COLOR DARK_GREY} the {COLOR BLUE}Scalemon\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Scalemon_Mode_Text_1:
# 1937 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to {COLOR RED}disable{COLOR DARK_GREY} the {COLOR BLUE}Scalemon\n"
	.string "Mode{COLOR DARK_GREY}?$"

Start_EventScript_Game_Mode_Scalemon_Mode_Text_2:
# 1946 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Scalemon Mode{COLOR DARK_GREY} was {COLOR GREEN}enabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Scalemon_Mode_Text_3:
# 1952 "data/maps/InsideOfTruck/scripts.pory"
	.string "The {COLOR BLUE}Scalemon Mode{COLOR DARK_GREY} was {COLOR RED}disabled{COLOR DARK_GREY}!$"

Start_EventScript_Game_Mode_Scalemon_Mode_Text_4:
# 1958 "data/maps/InsideOfTruck/scripts.pory"
	.string "In Scalemon Mode, every Pokemon's\n"
	.string "stats, barring HP, are scaled to give\l"
	.string "them a BST as close to a certain BST\l"
	.string "depending on your badge count, with all\l"
	.string "recalculated stats being rounded down.$"

Start_EventScript_Difficulty_Save_Text_0:
# 1973 "data/maps/InsideOfTruck/scripts.pory"
	.string "The difficulty was saved!$"

Start_EventScript_Game_Modes_were_Saved_Text_0:
# 1981 "data/maps/InsideOfTruck/scripts.pory"
	.string "The modes were saved!$"

Start_EventScript_Game_Mode_Save_Text_0:
# 1987 "data/maps/InsideOfTruck/scripts.pory"
	.string "Do you want to save this\n"
	.string "configuration?$"

EventScript_PkmnCenterNurseDifficulty_Save_Text_0:
# 2010 "data/maps/InsideOfTruck/scripts.pory"
	.string "The changes were saved!$"

Start_EventScript_SetSeason_Text_0:
# 2035 "data/maps/InsideOfTruck/scripts.pory"
	.string "Before starting, please chose the\n"
	.string "season you like the best.$"

Start_EventScript_SetSeason_Text_1:
# 2042 "data/maps/InsideOfTruck/scripts.pory"
	.string "You will play in Spring!$"

Start_EventScript_SetSeason_Text_2:
# 2047 "data/maps/InsideOfTruck/scripts.pory"
	.string "You will play in Summer!$"

Start_EventScript_SetSeason_Text_3:
# 2052 "data/maps/InsideOfTruck/scripts.pory"
	.string "You will play in Autumn!$"

Start_EventScript_SetSeason_Text_4:
# 2057 "data/maps/InsideOfTruck/scripts.pory"
	.string "You will play in Winter!$"

Start_EventScript_SetSeason_Text_5:
# 2061 "data/maps/InsideOfTruck/scripts.pory"
	.string "The season will update according to the\n"
	.string "real time!$"

Game_Start_Text_Introduction_NewGamePlus::
# 1612 "data/maps/InsideOfTruck/scripts.pory"
	.string "I'm Glad to see you again, Welcome to\n"
	.string "New Game+. Do you have any Question?$"

Game_Start_Text_Game_Modes_You_Cant_Chose_this_mode::
# 1616 "data/maps/InsideOfTruck/scripts.pory"
	.string "You can't chose this mode in a New Game\n"
	.string "Plus run.$"

Game_Start_Text_Introduction_NewGamePlus_Information::
# 1620 "data/maps/InsideOfTruck/scripts.pory"
	.string "New Game Plus is a mode that lets you\n"
	.string "create a new save file while keeping all\l"
	.string "your Pokemon, Items, Achievements and\l"
	.string "Money.\p"
	.string "It also has some special features like\n"
	.string "trainers scaling to your level and\l"
	.string "Pokémon numbers, you also get a\l"
	.string "boosted experience depending on the\l"
	.string "number of times you have beaten the\l"
	.string "game and started a New Game plus save,\l"
	.string "the game becomes a little more\l"
	.string "difficult and finally it removes some of\l"
	.string "the caps used in the game.$"
