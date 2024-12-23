Special_Gym_EventScript_Give_Item::
# 107 "data/scripts/gym_scripts.pory"
	setflag FLAG_GYM_ATTENDANT_CALL
# 108 "data/scripts/gym_scripts.pory"
	switch VAR_NUM_BADGES
# 109 "data/scripts/gym_scripts.pory"
	case 0, Special_Gym_EventScript_Give_Item_2
# 115 "data/scripts/gym_scripts.pory"
	case 1, Special_Gym_EventScript_Give_Item_3
# 121 "data/scripts/gym_scripts.pory"
	case 2, Special_Gym_EventScript_Give_Item_4
# 127 "data/scripts/gym_scripts.pory"
	case 3, Special_Gym_EventScript_Give_Item_5
# 133 "data/scripts/gym_scripts.pory"
	case 4, Special_Gym_EventScript_Give_Item_6
# 139 "data/scripts/gym_scripts.pory"
	case 5, Special_Gym_EventScript_Give_Item_7
# 145 "data/scripts/gym_scripts.pory"
	case 6, Special_Gym_EventScript_Give_Item_8
# 151 "data/scripts/gym_scripts.pory"
	case 7, Special_Gym_EventScript_Give_Item_9
# 157 "data/scripts/gym_scripts.pory"
	case 8, Special_Gym_EventScript_Give_Item_10
# 163 "data/scripts/gym_scripts.pory"
	case 9, Special_Gym_EventScript_Give_Item_11
# 169 "data/scripts/gym_scripts.pory"
	case 10, Special_Gym_EventScript_Give_Item_12
# 175 "data/scripts/gym_scripts.pory"
	case 11, Special_Gym_EventScript_Give_Item_13
# 181 "data/scripts/gym_scripts.pory"
	case 12, Special_Gym_EventScript_Give_Item_14
# 187 "data/scripts/gym_scripts.pory"
	case 13, Special_Gym_EventScript_Give_Item_15
# 193 "data/scripts/gym_scripts.pory"
	case 14, Special_Gym_EventScript_Give_Item_16
# 199 "data/scripts/gym_scripts.pory"
	case 15, Special_Gym_EventScript_Give_Item_17
	return

Special_Gym_EventScript_Give_Item_2:
# 110 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_BADGE_01
# 111 "data/scripts/gym_scripts.pory"
	giveitem ITEM_CUT_TOOL
# 112 "data/scripts/gym_scripts.pory"
	msgbox Special_Gym_Text_Explain_Item_01, MSGBOX_DEFAULT
# 113 "data/scripts/gym_scripts.pory"
	setvar VAR_NUM_BADGES, 1
	return

Special_Gym_EventScript_Give_Item_3:
# 116 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_BADGE_02
# 117 "data/scripts/gym_scripts.pory"
	giveitem ITEM_WATERFALL_TOOL
# 118 "data/scripts/gym_scripts.pory"
	msgbox Special_Gym_Text_Explain_Item_02, MSGBOX_DEFAULT
# 119 "data/scripts/gym_scripts.pory"
	setvar VAR_NUM_BADGES, 2
	return

Special_Gym_EventScript_Give_Item_4:
# 122 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_BADGE_03
# 123 "data/scripts/gym_scripts.pory"
	giveitem ITEM_GOOD_ROD
# 124 "data/scripts/gym_scripts.pory"
	msgbox Special_Gym_Text_Explain_Item_03, MSGBOX_DEFAULT
# 125 "data/scripts/gym_scripts.pory"
	setvar VAR_NUM_BADGES, 3
	return

Special_Gym_EventScript_Give_Item_5:
# 128 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_BADGE_04
# 129 "data/scripts/gym_scripts.pory"
	giveitem ITEM_ROCK_SMASH_TOOL
# 130 "data/scripts/gym_scripts.pory"
	msgbox Special_Gym_Text_Explain_Item_04, MSGBOX_DEFAULT
# 131 "data/scripts/gym_scripts.pory"
	setvar VAR_NUM_BADGES, 4
	return

Special_Gym_EventScript_Give_Item_6:
# 134 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_BADGE_05
# 135 "data/scripts/gym_scripts.pory"
	giveitem ITEM_CATCHING_CHARM
# 136 "data/scripts/gym_scripts.pory"
	msgbox Special_Gym_Text_Explain_Item_05, MSGBOX_DEFAULT
# 137 "data/scripts/gym_scripts.pory"
	setvar VAR_NUM_BADGES, 5
	return

Special_Gym_EventScript_Give_Item_7:
# 140 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_BADGE_06
# 141 "data/scripts/gym_scripts.pory"
	giveitem ITEM_STRENGTH_TOOL
# 142 "data/scripts/gym_scripts.pory"
	msgbox Special_Gym_Text_Explain_Item_06, MSGBOX_DEFAULT
# 143 "data/scripts/gym_scripts.pory"
	setvar VAR_NUM_BADGES, 6
	return

Special_Gym_EventScript_Give_Item_8:
# 146 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_BADGE_07
# 147 "data/scripts/gym_scripts.pory"
	giveitem ITEM_ROCK_CLIMB_TOOL
# 148 "data/scripts/gym_scripts.pory"
	msgbox Special_Gym_Text_Explain_Item_07, MSGBOX_DEFAULT
# 149 "data/scripts/gym_scripts.pory"
	setvar VAR_NUM_BADGES, 7
	return

Special_Gym_EventScript_Give_Item_9:
# 152 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_BADGE_08
# 153 "data/scripts/gym_scripts.pory"
	giveitem ITEM_SUPER_ROD
# 154 "data/scripts/gym_scripts.pory"
	msgbox Special_Gym_Text_Explain_Item_08, MSGBOX_DEFAULT
# 155 "data/scripts/gym_scripts.pory"
	setvar VAR_NUM_BADGES, 8
	return

Special_Gym_EventScript_Give_Item_10:
# 158 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_BADGE_09
# 159 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FLY_CHARM
# 160 "data/scripts/gym_scripts.pory"
	msgbox Special_Gym_Text_Explain_Item_09, MSGBOX_DEFAULT
# 161 "data/scripts/gym_scripts.pory"
	setvar VAR_NUM_BADGES, 9
	return

Special_Gym_EventScript_Give_Item_11:
# 164 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_BADGE_10
# 165 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FLY_TOOL
# 166 "data/scripts/gym_scripts.pory"
	msgbox Special_Gym_Text_Explain_Item_10, MSGBOX_DEFAULT
# 167 "data/scripts/gym_scripts.pory"
	setvar VAR_NUM_BADGES, 10
	return

Special_Gym_EventScript_Give_Item_12:
# 170 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_BADGE_11
# 171 "data/scripts/gym_scripts.pory"
	giveitem ITEM_MEGA_BRACELET
# 172 "data/scripts/gym_scripts.pory"
	msgbox Special_Gym_Text_Explain_Item_11, MSGBOX_DEFAULT
# 173 "data/scripts/gym_scripts.pory"
	setvar VAR_NUM_BADGES, 11
	return

Special_Gym_EventScript_Give_Item_13:
# 176 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_BADGE_12
# 177 "data/scripts/gym_scripts.pory"
	giveitem ITEM_EXP_CHARM
# 178 "data/scripts/gym_scripts.pory"
	msgbox Special_Gym_Text_Explain_Item_12, MSGBOX_DEFAULT
# 179 "data/scripts/gym_scripts.pory"
	setvar VAR_NUM_BADGES, 12
	return

Special_Gym_EventScript_Give_Item_14:
# 182 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_BADGE_13
# 183 "data/scripts/gym_scripts.pory"
	giveitem ITEM_OVAL_CHARM
# 184 "data/scripts/gym_scripts.pory"
	msgbox Special_Gym_Text_Explain_Item_13, MSGBOX_DEFAULT
# 185 "data/scripts/gym_scripts.pory"
	setvar VAR_NUM_BADGES, 13
	return

Special_Gym_EventScript_Give_Item_15:
# 188 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_BADGE_14
# 189 "data/scripts/gym_scripts.pory"
	giveitem ITEM_CASINO_CHARM
# 190 "data/scripts/gym_scripts.pory"
	msgbox Special_Gym_Text_Explain_Item_14, MSGBOX_DEFAULT
# 191 "data/scripts/gym_scripts.pory"
	setvar VAR_NUM_BADGES, 14
	return

Special_Gym_EventScript_Give_Item_16:
# 194 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_BADGE_15
# 195 "data/scripts/gym_scripts.pory"
	giveitem ITEM_WONDER_CHARM
# 196 "data/scripts/gym_scripts.pory"
	msgbox Special_Gym_Text_Explain_Item_15, MSGBOX_DEFAULT
# 197 "data/scripts/gym_scripts.pory"
	setvar VAR_NUM_BADGES, 15
	return

Special_Gym_EventScript_Give_Item_17:
# 200 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_BADGE_16
# 201 "data/scripts/gym_scripts.pory"
	giveitem ITEM_SHINY_CHARM
# 202 "data/scripts/gym_scripts.pory"
	msgbox Special_Gym_Text_Explain_Item_16, MSGBOX_DEFAULT
# 203 "data/scripts/gym_scripts.pory"
	setvar VAR_NUM_BADGES, 16
	return


EventScript_Gym_Attendant_Call::
# 209 "data/scripts/gym_scripts.pory"
	lockall
# 210 "data/scripts/gym_scripts.pory"
	switch VAR_NUM_BADGES
# 211 "data/scripts/gym_scripts.pory"
	case 1, EventScript_Gym_Attendant_Call_3
# 212 "data/scripts/gym_scripts.pory"
	case 2, EventScript_Gym_Attendant_Call_4
# 213 "data/scripts/gym_scripts.pory"
	case 3, EventScript_Gym_Attendant_Call_5
# 214 "data/scripts/gym_scripts.pory"
	case 4, EventScript_Gym_Attendant_Call_6
# 215 "data/scripts/gym_scripts.pory"
	case 5, EventScript_Gym_Attendant_Call_7
# 216 "data/scripts/gym_scripts.pory"
	case 6, EventScript_Gym_Attendant_Call_8
# 217 "data/scripts/gym_scripts.pory"
	case 7, EventScript_Gym_Attendant_Call_9
# 218 "data/scripts/gym_scripts.pory"
	case 8, EventScript_Gym_Attendant_Call_10
# 219 "data/scripts/gym_scripts.pory"
	case 9, EventScript_Gym_Attendant_Call_11
# 220 "data/scripts/gym_scripts.pory"
	case 10, EventScript_Gym_Attendant_Call_12
# 221 "data/scripts/gym_scripts.pory"
	case 11, EventScript_Gym_Attendant_Call_13
# 222 "data/scripts/gym_scripts.pory"
	case 12, EventScript_Gym_Attendant_Call_14
# 223 "data/scripts/gym_scripts.pory"
	case 13, EventScript_Gym_Attendant_Call_15
# 224 "data/scripts/gym_scripts.pory"
	case 14, EventScript_Gym_Attendant_Call_16
# 225 "data/scripts/gym_scripts.pory"
	case 15, EventScript_Gym_Attendant_Call_17
# 226 "data/scripts/gym_scripts.pory"
	case 16, EventScript_Gym_Attendant_Call_18
EventScript_Gym_Attendant_Call_1:
# 228 "data/scripts/gym_scripts.pory"
	waitmessage
# 229 "data/scripts/gym_scripts.pory"
	clearflag FLAG_GYM_ATTENDANT_CALL
# 230 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_ATTENDANT_STEP_COUNTER, 0
# 231 "data/scripts/gym_scripts.pory"
	releaseall
	end

EventScript_Gym_Attendant_Call_3:
# 211 "data/scripts/gym_scripts.pory"
	pokenavcall EventScript_Gym_Attendant_Call_Text_0
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_4:
# 212 "data/scripts/gym_scripts.pory"
	pokenavcall EventScript_Gym_Attendant_Call_Text_1
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_5:
# 213 "data/scripts/gym_scripts.pory"
	pokenavcall EventScript_Gym_Attendant_Call_Text_2
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_6:
# 214 "data/scripts/gym_scripts.pory"
	pokenavcall EventScript_Gym_Attendant_Call_Text_3
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_7:
# 215 "data/scripts/gym_scripts.pory"
	pokenavcall EventScript_Gym_Attendant_Call_Text_4
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_8:
# 216 "data/scripts/gym_scripts.pory"
	pokenavcall EventScript_Gym_Attendant_Call_Text_5
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_9:
# 217 "data/scripts/gym_scripts.pory"
	pokenavcall EventScript_Gym_Attendant_Call_Text_6
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_10:
# 218 "data/scripts/gym_scripts.pory"
	pokenavcall EventScript_Gym_Attendant_Call_Text_7
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_11:
# 219 "data/scripts/gym_scripts.pory"
	pokenavcall EventScript_Gym_Attendant_Call_Text_8
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_12:
# 220 "data/scripts/gym_scripts.pory"
	pokenavcall EventScript_Gym_Attendant_Call_Text_9
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_13:
# 221 "data/scripts/gym_scripts.pory"
	pokenavcall EventScript_Gym_Attendant_Call_Text_10
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_14:
# 222 "data/scripts/gym_scripts.pory"
	pokenavcall EventScript_Gym_Attendant_Call_Text_11
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_15:
# 223 "data/scripts/gym_scripts.pory"
	pokenavcall EventScript_Gym_Attendant_Call_Text_12
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_16:
# 224 "data/scripts/gym_scripts.pory"
	pokenavcall EventScript_Gym_Attendant_Call_Text_13
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_17:
# 225 "data/scripts/gym_scripts.pory"
	pokenavcall EventScript_Gym_Attendant_Call_Text_14
	goto EventScript_Gym_Attendant_Call_1

EventScript_Gym_Attendant_Call_18:
# 226 "data/scripts/gym_scripts.pory"
	pokenavcall EventScript_Gym_Attendant_Call_Text_15
	goto EventScript_Gym_Attendant_Call_1


Gym_EventScript_Reset_Rematches::
# 237 "data/scripts/gym_scripts.pory"
	clearflag FLAG_ROXANNE_REMATCH
# 238 "data/scripts/gym_scripts.pory"
	clearflag FLAG_BRAWLY_REMATCH
# 239 "data/scripts/gym_scripts.pory"
	clearflag FLAG_WATTSON_REMATCH
# 240 "data/scripts/gym_scripts.pory"
	clearflag FLAG_FLANNERY_REMATCH
# 241 "data/scripts/gym_scripts.pory"
	clearflag FLAG_NORMAN_REMATCH
# 242 "data/scripts/gym_scripts.pory"
	clearflag FLAG_WINONA_REMATCH
# 243 "data/scripts/gym_scripts.pory"
	clearflag FLAG_TATE_AND_LIZA_REMATCH
# 244 "data/scripts/gym_scripts.pory"
	clearflag FLAG_JUAN_REMATCH
# 246 "data/scripts/gym_scripts.pory"
	clearflag FLAG_FALKNER_REMATCH
# 247 "data/scripts/gym_scripts.pory"
	clearflag FLAG_BUGSY_REMATCH
# 248 "data/scripts/gym_scripts.pory"
	clearflag FLAG_WHITNEY_REMATCH
# 249 "data/scripts/gym_scripts.pory"
	clearflag FLAG_MORTY_REMATCH
# 250 "data/scripts/gym_scripts.pory"
	clearflag FLAG_CHUCK_REMATCH
# 251 "data/scripts/gym_scripts.pory"
	clearflag FLAG_JASMINE_REMATCH
# 252 "data/scripts/gym_scripts.pory"
	clearflag FLAG_PRYCE_REMATCH
# 253 "data/scripts/gym_scripts.pory"
	clearflag FLAG_CLAIR_REMATCH
	return


RustboroCity_Gym_EventScript_GymGuide_New::
# 258 "data/scripts/gym_scripts.pory"
	lock
# 259 "data/scripts/gym_scripts.pory"
	faceplayer
# 260 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuide_New_2
# 276 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_NPC
RustboroCity_Gym_EventScript_GymGuide_New_1:
# 278 "data/scripts/gym_scripts.pory"
	release
	end

RustboroCity_Gym_EventScript_GymGuide_New_2:
# 261 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_GymGuide_New_5
# 272 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_NPC
	goto RustboroCity_Gym_EventScript_GymGuide_New_1

RustboroCity_Gym_EventScript_GymGuide_New_5:
# 262 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_0, MSGBOX_YESNO
# 263 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_Gym_EventScript_GymGuide_New_8
# 268 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_2, MSGBOX_NPC
	goto RustboroCity_Gym_EventScript_GymGuide_New_1

RustboroCity_Gym_EventScript_GymGuide_New_8:
# 264 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_1, MSGBOX_NPC
# 265 "data/scripts/gym_scripts.pory"
	warp MAP_RUSTBORO_CITY_GYM, 255, 5, 3
	goto RustboroCity_Gym_EventScript_GymGuide_New_1


RustboroCity_Gym_EventScript_Roxanne_New::
# 283 "data/scripts/gym_scripts.pory"
	lock
# 284 "data/scripts/gym_scripts.pory"
	faceplayer
# 285 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Roxanne_New_8
RustboroCity_Gym_EventScript_Roxanne_New_6:
# 305 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Roxanne_New_5
RustboroCity_Gym_EventScript_Roxanne_New_4:
# 323 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxanneIntro, MSGBOX_NPC
# 325 "data/scripts/gym_scripts.pory"
	call RustboroCity_Gym_EventScript_Roxanne_Battle_New
# 328 "data/scripts/gym_scripts.pory"
	message RustboroCity_Gym_EventScript_Roxanne_New_Text_4
# 329 "data/scripts/gym_scripts.pory"
	waitmessage
# 330 "data/scripts/gym_scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 331 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_5, MSGBOX_NPC
# 332 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
# 333 "data/scripts/gym_scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 334 "data/scripts/gym_scripts.pory"
	setflag FLAG_BADGE01_GET
# 337 "data/scripts/gym_scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 340 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM39_ROCK_TOMB
# 341 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_6, MSGBOX_NPC
# 345 "data/scripts/gym_scripts.pory"
	waitfanfare
# 346 "data/scripts/gym_scripts.pory"
	closemessage
# 347 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
# 350 "data/scripts/gym_scripts.pory"
	call RustboroCity_Gym_EventScript_Roxanne_Give_Gifts
# 353 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 1
# 354 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 357 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 358 "data/scripts/gym_scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 359 "data/scripts/gym_scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 360 "data/scripts/gym_scripts.pory"
	waitfanfare
# 361 "data/scripts/gym_scripts.pory"
	closemessage
# 364 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_NPC
# 365 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 368 "data/scripts/gym_scripts.pory"
	setflag FLAG_ROXANNE_REMATCH
RustboroCity_Gym_EventScript_Roxanne_New_1:
# 370 "data/scripts/gym_scripts.pory"
	release
	end

RustboroCity_Gym_EventScript_Roxanne_New_2:
# 288 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePreRematch, MSGBOX_NPC
# 290 "data/scripts/gym_scripts.pory"
	call RustboroCity_Gym_EventScript_Roxanne_Battle_New
# 293 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_NPC
# 294 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 297 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
# 298 "data/scripts/gym_scripts.pory"
	call RustboroCity_Gym_EventScript_Roxanne_Give_Gifts
# 300 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_1, MSGBOX_NPC
# 303 "data/scripts/gym_scripts.pory"
	setflag FLAG_ROXANNE_REMATCH
	goto RustboroCity_Gym_EventScript_Roxanne_New_1

RustboroCity_Gym_EventScript_Roxanne_New_3:
# 307 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_2, MSGBOX_YESNO
# 308 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_Gym_EventScript_Roxanne_New_11
# 315 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 1
# 316 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 317 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_1, MSGBOX_NPC
	goto RustboroCity_Gym_EventScript_Roxanne_New_1

RustboroCity_Gym_EventScript_Roxanne_New_5:
# 305 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_Roxanne_New_3
	goto RustboroCity_Gym_EventScript_Roxanne_New_4

RustboroCity_Gym_EventScript_Roxanne_New_8:
# 285 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_Roxanne_New_2
	goto RustboroCity_Gym_EventScript_Roxanne_New_6

RustboroCity_Gym_EventScript_Roxanne_New_11:
# 309 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 1
# 310 "data/scripts/gym_scripts.pory"
	call Common_EventScript_ClearGymTrainers
# 311 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_3, MSGBOX_NPC
	goto RustboroCity_Gym_EventScript_Roxanne_New_1


RustboroCity_Gym_EventScript_Roxanne_Battle_New::
# 375 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Roxanne_Battle_New_2
# 381 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, RustboroCity_Gym_EventScript_Roxanne_Battle_New_5
# 394 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
RustboroCity_Gym_EventScript_Roxanne_Battle_New_1:
	return

RustboroCity_Gym_EventScript_Roxanne_Battle_New_2:
# 377 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_5:
# 383 "data/scripts/gym_scripts.pory"
	setflag FLAG_SYS_DISABLE_SCALED_TRAINERS
# 384 "data/scripts/gym_scripts.pory"
	random 5
# 385 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 386 "data/scripts/gym_scripts.pory"
	case 0, RustboroCity_Gym_EventScript_Roxanne_Battle_New_9
# 387 "data/scripts/gym_scripts.pory"
	case 1, RustboroCity_Gym_EventScript_Roxanne_Battle_New_10
# 388 "data/scripts/gym_scripts.pory"
	case 2, RustboroCity_Gym_EventScript_Roxanne_Battle_New_11
# 389 "data/scripts/gym_scripts.pory"
	case 3, RustboroCity_Gym_EventScript_Roxanne_Battle_New_12
# 390 "data/scripts/gym_scripts.pory"
	case 4, RustboroCity_Gym_EventScript_Roxanne_Battle_New_13
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_9:
# 386 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_10:
# 387 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_2, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_11:
# 388 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_3, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_12:
# 389 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_4, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1

RustboroCity_Gym_EventScript_Roxanne_Battle_New_13:
# 390 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_ROXANNE_5, RustboroCity_Gym_Text_RoxanneRematchDefeat
	goto RustboroCity_Gym_EventScript_Roxanne_Battle_New_1


RustboroCity_Gym_EventScript_Roxanne_Give_Gifts::
# 402 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM69_ROCK_POLISH, 1
# 403 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_SECOND_TM_BADGES_COUNT
	goto_if_ge RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_3
RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_1:
# 410 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM110_STEALTH_ROCK, 1
# 411 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_THIRD_TM_BADGES_COUNT
	goto_if_ge RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_8
RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_6:
# 418 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM107_POWER_GEM, 1
# 419 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_FOURTH_TM_BADGES_COUNT
	goto_if_ge RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_13
RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_11:
# 426 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM71_STONE_EDGE, 1
# 427 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_FIFTH_TM_BADGES_COUNT
	goto_if_ge RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_18
RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_16:
# 434 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_MEGA_STONES_BADGES_COUNT
	goto_if_ge RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_25
RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_24:
# 441 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_23
RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21:
# 454 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_CheckForAllBadges
	return

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_2:
# 404 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM69_ROCK_POLISH
# 405 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_0, MSGBOX_NPC
# 406 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_1

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_3:
# 403 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_2
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_1

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_7:
# 412 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM110_STEALTH_ROCK
# 413 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_1, MSGBOX_NPC
# 414 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_6

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_8:
# 411 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_7
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_6

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_12:
# 420 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM107_POWER_GEM
# 421 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_2, MSGBOX_NPC
# 422 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_11

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_13:
# 419 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_12
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_11

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_17:
# 428 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM71_STONE_EDGE
# 429 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_3, MSGBOX_NPC
# 430 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_16

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_18:
# 427 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_17
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_16

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_22:
# 435 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_4, MSGBOX_NPC
# 436 "data/scripts/gym_scripts.pory"
	giveitem ITEM_AGGRONITE
# 437 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_5, MSGBOX_NPC
# 438 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_AGGRON_MEGA_STONE
# 439 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_23:
# 443 "data/scripts/gym_scripts.pory"
	random 7
# 444 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 445 "data/scripts/gym_scripts.pory"
	case 0, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_29
# 446 "data/scripts/gym_scripts.pory"
	case 1, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_30
# 447 "data/scripts/gym_scripts.pory"
	case 2, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_31
# 448 "data/scripts/gym_scripts.pory"
	case 3, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_32
# 449 "data/scripts/gym_scripts.pory"
	case 4, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_33
# 450 "data/scripts/gym_scripts.pory"
	case 5, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_34
# 451 "data/scripts/gym_scripts.pory"
	case 6, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_35
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_25:
# 434 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_AGGRON_MEGA_STONE, RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_22
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_24

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_29:
# 445 "data/scripts/gym_scripts.pory"
	giveitem ITEM_ROCK_GEM, 2
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_30:
# 446 "data/scripts/gym_scripts.pory"
	giveitem ITEM_ROCKY_HELMET, 2
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_31:
# 447 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FOCUS_SASH, 2
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_32:
# 448 "data/scripts/gym_scripts.pory"
	giveitem ITEM_HARD_STONE, 2
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_33:
# 449 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FLOAT_STONE, 2
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_34:
# 450 "data/scripts/gym_scripts.pory"
	giveitem ITEM_METAL_COAT, 2
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_35:
# 451 "data/scripts/gym_scripts.pory"
	giveitem ITEM_PROTECTOR, 2
	goto RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_21


RustboroCity_Gym_EventScript_Gym_Aaron::
# 459 "data/scripts/gym_scripts.pory"
	lock
# 460 "data/scripts/gym_scripts.pory"
	faceplayer
# 461 "data/scripts/gym_scripts.pory"
	switch VAR_GYM_POKEMON_SPECIES
# 462 "data/scripts/gym_scripts.pory"
	case SPECIES_ARON, RustboroCity_Gym_EventScript_Gym_Aaron_3
# 480 "data/scripts/gym_scripts.pory"
	case SPECIES_LAIRON, RustboroCity_Gym_EventScript_Gym_Aaron_4
# 497 "data/scripts/gym_scripts.pory"
	case SPECIES_AGGRON, RustboroCity_Gym_EventScript_Gym_Aaron_5
RustboroCity_Gym_EventScript_Gym_Aaron_1:
# 523 "data/scripts/gym_scripts.pory"
	release
	end

RustboroCity_Gym_EventScript_Gym_Aaron_3:
# 463 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Gym_Aaron_12
RustboroCity_Gym_EventScript_Gym_Aaron_10:
# 469 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Gym_Aaron_9
RustboroCity_Gym_EventScript_Gym_Aaron_8:
# 476 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_4, MSGBOX_NPC
# 477 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_5, MSGBOX_SIGN
# 478 "data/scripts/gym_scripts.pory"
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_4:
# 481 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Gym_Aaron_21
RustboroCity_Gym_EventScript_Gym_Aaron_19:
# 487 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Gym_Aaron_18
RustboroCity_Gym_EventScript_Gym_Aaron_17:
# 493 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_8, MSGBOX_NPC
# 494 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_9, MSGBOX_SIGN
# 495 "data/scripts/gym_scripts.pory"
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_5:
# 498 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Gym_Aaron_34
RustboroCity_Gym_EventScript_Gym_Aaron_32:
# 504 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_Gym_Aaron_31
RustboroCity_Gym_EventScript_Gym_Aaron_29:
# 510 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_MEGA_STONES_BADGES_COUNT
	goto_if_ge RustboroCity_Gym_EventScript_Gym_Aaron_28
RustboroCity_Gym_EventScript_Gym_Aaron_27:
# 518 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_14, MSGBOX_NPC
# 519 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_15, MSGBOX_SIGN
# 520 "data/scripts/gym_scripts.pory"
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_6:
# 465 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_0, MSGBOX_NPC
# 466 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_1, MSGBOX_SIGN
# 467 "data/scripts/gym_scripts.pory"
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_7:
# 471 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_2, MSGBOX_NPC
# 472 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_3, MSGBOX_SIGN
# 473 "data/scripts/gym_scripts.pory"
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_9:
# 469 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_Gym_Aaron_7
	goto RustboroCity_Gym_EventScript_Gym_Aaron_8

RustboroCity_Gym_EventScript_Gym_Aaron_12:
# 463 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_Gym_Aaron_6
	goto RustboroCity_Gym_EventScript_Gym_Aaron_10

RustboroCity_Gym_EventScript_Gym_Aaron_15:
# 483 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_6, MSGBOX_NPC
# 484 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_1, MSGBOX_SIGN
# 485 "data/scripts/gym_scripts.pory"
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_16:
# 488 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_7, MSGBOX_NPC
# 489 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_3, MSGBOX_SIGN
# 490 "data/scripts/gym_scripts.pory"
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_18:
# 487 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_Gym_Aaron_16
	goto RustboroCity_Gym_EventScript_Gym_Aaron_17

RustboroCity_Gym_EventScript_Gym_Aaron_21:
# 481 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_Gym_Aaron_15
	goto RustboroCity_Gym_EventScript_Gym_Aaron_19

RustboroCity_Gym_EventScript_Gym_Aaron_24:
# 500 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_10, MSGBOX_NPC
# 501 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_11, MSGBOX_SIGN
# 502 "data/scripts/gym_scripts.pory"
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_25:
# 506 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_12, MSGBOX_NPC
# 507 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_3, MSGBOX_SIGN
# 508 "data/scripts/gym_scripts.pory"
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_26:
# 512 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_10, MSGBOX_NPC
# 513 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_13, MSGBOX_SIGN
# 514 "data/scripts/gym_scripts.pory"
	waitmessage
	goto RustboroCity_Gym_EventScript_Gym_Aaron_1

RustboroCity_Gym_EventScript_Gym_Aaron_28:
# 510 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_AGGRON_MEGA_STONE, RustboroCity_Gym_EventScript_Gym_Aaron_26
	goto RustboroCity_Gym_EventScript_Gym_Aaron_27

RustboroCity_Gym_EventScript_Gym_Aaron_31:
# 504 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_Gym_Aaron_25
	goto RustboroCity_Gym_EventScript_Gym_Aaron_29

RustboroCity_Gym_EventScript_Gym_Aaron_34:
# 498 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_ROXANNE_REMATCH, RustboroCity_Gym_EventScript_Gym_Aaron_24
	goto RustboroCity_Gym_EventScript_Gym_Aaron_32


RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species::
# 528 "data/scripts/gym_scripts.pory"
	setflag FLAG_HIDE_GYM_MONS
# 529 "data/scripts/gym_scripts.pory"
	switch VAR_NUM_BADGES
# 530 "data/scripts/gym_scripts.pory"
	case 0, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_3
# 531 "data/scripts/gym_scripts.pory"
	case 1, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_4
# 532 "data/scripts/gym_scripts.pory"
	case 2, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_5
# 533 "data/scripts/gym_scripts.pory"
	case 3, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_6
# 534 "data/scripts/gym_scripts.pory"
	case 4, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_7
# 535 "data/scripts/gym_scripts.pory"
	case 5, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_8
# 536 "data/scripts/gym_scripts.pory"
	case 6, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_9
# 537 "data/scripts/gym_scripts.pory"
	case 7, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_10
# 538 "data/scripts/gym_scripts.pory"
	case 8, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_11
# 539 "data/scripts/gym_scripts.pory"
	case 9, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_12
# 540 "data/scripts/gym_scripts.pory"
	case 10, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_13
# 541 "data/scripts/gym_scripts.pory"
	case 11, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_14
# 542 "data/scripts/gym_scripts.pory"
	case 12, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_15
# 543 "data/scripts/gym_scripts.pory"
	case 13, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_16
# 544 "data/scripts/gym_scripts.pory"
	case 14, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_17
# 545 "data/scripts/gym_scripts.pory"
	case 15, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_18
# 546 "data/scripts/gym_scripts.pory"
	case 16, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_19
# 547 "data/scripts/gym_scripts.pory"
	case 17, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_20
RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1:
# 550 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_NO_EVOLUTION_MODE, RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_22
RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_21:
	return

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_3:
# 530 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_ARON
# 530 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_ARON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_4:
# 531 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_ARON
# 531 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_ARON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_5:
# 532 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_ARON
# 532 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_ARON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_6:
# 533 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_ARON
# 533 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_ARON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_7:
# 534 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_ARON
# 534 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_ARON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_8:
# 535 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_ARON
# 535 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_ARON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_9:
# 536 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_LAIRON
# 536 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_LAIRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_10:
# 537 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_LAIRON
# 537 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_LAIRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_11:
# 538 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_LAIRON
# 538 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_LAIRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_12:
# 539 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_LAIRON
# 539 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_LAIRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_13:
# 540 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_AGGRON
# 540 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_AGGRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_14:
# 541 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_AGGRON
# 541 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_AGGRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_15:
# 542 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_AGGRON
# 542 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_AGGRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_16:
# 543 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_AGGRON
# 543 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_AGGRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_17:
# 544 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_AGGRON
# 544 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_AGGRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_18:
# 545 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_AGGRON
# 545 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_AGGRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_19:
# 546 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_AGGRON
# 546 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_AGGRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_20:
# 547 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_AGGRON
# 547 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_AGGRON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_22:
# 551 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_ARON
# 551 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_ARON
	goto RustboroCity_Gym_EventScript_Set_Gym_Pokemon_Species_21


DewfordTown_Gym_EventScript_GymGuide_New::
# 558 "data/scripts/gym_scripts.pory"
	lock
# 559 "data/scripts/gym_scripts.pory"
	faceplayer
# 560 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuide_New_2
# 576 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_NPC
DewfordTown_Gym_EventScript_GymGuide_New_1:
# 578 "data/scripts/gym_scripts.pory"
	release
	end

DewfordTown_Gym_EventScript_GymGuide_New_2:
# 561 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_BRAWLY_REMATCH, DewfordTown_Gym_EventScript_GymGuide_New_5
# 572 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_NPC
	goto DewfordTown_Gym_EventScript_GymGuide_New_1

DewfordTown_Gym_EventScript_GymGuide_New_5:
# 562 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_0, MSGBOX_YESNO
# 563 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DewfordTown_Gym_EventScript_GymGuide_New_8
# 568 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_2, MSGBOX_NPC
	goto DewfordTown_Gym_EventScript_GymGuide_New_1

DewfordTown_Gym_EventScript_GymGuide_New_8:
# 564 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_1, MSGBOX_NPC
# 565 "data/scripts/gym_scripts.pory"
	warp MAP_DEWFORD_TOWN_GYM, 255, 4, 4
	goto DewfordTown_Gym_EventScript_GymGuide_New_1


DewfordTown_Gym_EventScript_Brawly_New::
# 583 "data/scripts/gym_scripts.pory"
	lock
# 584 "data/scripts/gym_scripts.pory"
	faceplayer
# 585 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Brawly_New_8
DewfordTown_Gym_EventScript_Brawly_New_6:
# 605 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Brawly_New_5
DewfordTown_Gym_EventScript_Brawly_New_4:
# 622 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyIntro, MSGBOX_NPC
# 624 "data/scripts/gym_scripts.pory"
	call DewfordTown_Gym_EventScript_Brawly_Battle_New
# 627 "data/scripts/gym_scripts.pory"
	message DewfordTown_Gym_EventScript_Brawly_New_Text_3
# 628 "data/scripts/gym_scripts.pory"
	waitmessage
# 629 "data/scripts/gym_scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 630 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_5, MSGBOX_NPC
# 631 "data/scripts/gym_scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 632 "data/scripts/gym_scripts.pory"
	setflag FLAG_BADGE02_GET
# 635 "data/scripts/gym_scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 638 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM08_BULK_UP
# 639 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Brawly_New_Text_4, MSGBOX_NPC
# 641 "data/scripts/gym_scripts.pory"
	waitfanfare
# 642 "data/scripts/gym_scripts.pory"
	closemessage
# 643 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
# 646 "data/scripts/gym_scripts.pory"
	call DewfordTown_Gym_EventScript_Brawly_Give_Gifts
# 649 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 2
# 650 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 653 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
# 654 "data/scripts/gym_scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 655 "data/scripts/gym_scripts.pory"
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
# 656 "data/scripts/gym_scripts.pory"
	waitfanfare
# 657 "data/scripts/gym_scripts.pory"
	closemessage
# 660 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_NPC
# 661 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 664 "data/scripts/gym_scripts.pory"
	setflag FLAG_BRAWLY_REMATCH
DewfordTown_Gym_EventScript_Brawly_New_1:
# 666 "data/scripts/gym_scripts.pory"
	release
	end

DewfordTown_Gym_EventScript_Brawly_New_2:
# 588 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPreRematch, MSGBOX_NPC
# 590 "data/scripts/gym_scripts.pory"
	call DewfordTown_Gym_EventScript_Brawly_Battle_New
# 593 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_NPC
# 594 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 597 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
# 598 "data/scripts/gym_scripts.pory"
	call DewfordTown_Gym_EventScript_Brawly_Give_Gifts
# 600 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Brawly_New_Text_0, MSGBOX_NPC
# 603 "data/scripts/gym_scripts.pory"
	setflag FLAG_BRAWLY_REMATCH
	goto DewfordTown_Gym_EventScript_Brawly_New_1

DewfordTown_Gym_EventScript_Brawly_New_3:
# 607 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Brawly_New_Text_1, MSGBOX_YESNO
# 608 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_New_11
# 614 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 2
# 615 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 616 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Brawly_New_Text_0, MSGBOX_NPC
	goto DewfordTown_Gym_EventScript_Brawly_New_1

DewfordTown_Gym_EventScript_Brawly_New_5:
# 605 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BRAWLY_REMATCH, DewfordTown_Gym_EventScript_Brawly_New_3
	goto DewfordTown_Gym_EventScript_Brawly_New_4

DewfordTown_Gym_EventScript_Brawly_New_8:
# 585 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_BRAWLY_REMATCH, DewfordTown_Gym_EventScript_Brawly_New_2
	goto DewfordTown_Gym_EventScript_Brawly_New_6

DewfordTown_Gym_EventScript_Brawly_New_11:
# 609 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 2
# 610 "data/scripts/gym_scripts.pory"
	call Common_EventScript_ClearGymTrainers
# 611 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Brawly_New_Text_2, MSGBOX_NPC
	goto DewfordTown_Gym_EventScript_Brawly_New_1


DewfordTown_Gym_EventScript_Brawly_Battle_New::
# 671 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Brawly_Battle_New_2
# 677 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, DewfordTown_Gym_EventScript_Brawly_Battle_New_5
# 690 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
DewfordTown_Gym_EventScript_Brawly_Battle_New_1:
	return

DewfordTown_Gym_EventScript_Brawly_Battle_New_2:
# 673 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_5:
# 679 "data/scripts/gym_scripts.pory"
	setflag FLAG_SYS_DISABLE_SCALED_TRAINERS
# 680 "data/scripts/gym_scripts.pory"
	random 5
# 681 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 682 "data/scripts/gym_scripts.pory"
	case 0, DewfordTown_Gym_EventScript_Brawly_Battle_New_9
# 683 "data/scripts/gym_scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Brawly_Battle_New_10
# 684 "data/scripts/gym_scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Brawly_Battle_New_11
# 685 "data/scripts/gym_scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Brawly_Battle_New_12
# 686 "data/scripts/gym_scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Brawly_Battle_New_13
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_9:
# 682 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_10:
# 683 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_2, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_11:
# 684 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_3, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_12:
# 685 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_4, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1

DewfordTown_Gym_EventScript_Brawly_Battle_New_13:
# 686 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_5, DewfordTown_Gym_Text_BrawlyRematchDefeat
	goto DewfordTown_Gym_EventScript_Brawly_Battle_New_1


DewfordTown_Gym_EventScript_Brawly_Give_Gifts::
# 698 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM51_LOW_SWEEP, 1
# 699 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_SECOND_TM_BADGES_COUNT
	goto_if_ge DewfordTown_Gym_EventScript_Brawly_Give_Gifts_3
DewfordTown_Gym_EventScript_Brawly_Give_Gifts_1:
# 706 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM87_SWAGGER, 1
# 707 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_THIRD_TM_BADGES_COUNT
	goto_if_ge DewfordTown_Gym_EventScript_Brawly_Give_Gifts_8
DewfordTown_Gym_EventScript_Brawly_Give_Gifts_6:
# 714 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM52_FOCUS_BLAST, 1
# 715 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_FOURTH_TM_BADGES_COUNT
	goto_if_ge DewfordTown_Gym_EventScript_Brawly_Give_Gifts_13
DewfordTown_Gym_EventScript_Brawly_Give_Gifts_11:
# 722 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM106_AURA_SPHERE, 1
# 723 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_FIFTH_TM_BADGES_COUNT
	goto_if_ge DewfordTown_Gym_EventScript_Brawly_Give_Gifts_18
DewfordTown_Gym_EventScript_Brawly_Give_Gifts_16:
# 730 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_MEGA_STONES_BADGES_COUNT
	goto_if_ge DewfordTown_Gym_EventScript_Brawly_Give_Gifts_25
DewfordTown_Gym_EventScript_Brawly_Give_Gifts_24:
# 737 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_23
DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21:
# 750 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_CheckForAllBadges
	return

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_2:
# 700 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM51_LOW_SWEEP
# 701 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_0, MSGBOX_NPC
# 702 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_1

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_3:
# 699 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_Give_Gifts_2
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_1

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_7:
# 708 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM87_SWAGGER
# 709 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_1, MSGBOX_NPC
# 710 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_6

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_8:
# 707 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_Give_Gifts_7
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_6

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_12:
# 716 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM52_FOCUS_BLAST
# 717 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_2, MSGBOX_NPC
# 718 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_11

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_13:
# 715 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_Give_Gifts_12
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_11

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_17:
# 724 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM106_AURA_SPHERE
# 725 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_3, MSGBOX_NPC
# 726 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_16

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_18:
# 723 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_Gym_EventScript_Brawly_Give_Gifts_17
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_16

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_22:
# 731 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_4, MSGBOX_NPC
# 732 "data/scripts/gym_scripts.pory"
	giveitem ITEM_HERACRONITE
# 733 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_5, MSGBOX_NPC
# 734 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_HERACROSS_MEGA_STONE
# 735 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_23:
# 739 "data/scripts/gym_scripts.pory"
	random 7
# 740 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 741 "data/scripts/gym_scripts.pory"
	case 0, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_29
# 742 "data/scripts/gym_scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_30
# 743 "data/scripts/gym_scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_31
# 744 "data/scripts/gym_scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_32
# 745 "data/scripts/gym_scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_33
# 746 "data/scripts/gym_scripts.pory"
	case 5, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_34
# 747 "data/scripts/gym_scripts.pory"
	case 6, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_35
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_25:
# 730 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_HERACROSS_MEGA_STONE, DewfordTown_Gym_EventScript_Brawly_Give_Gifts_22
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_24

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_29:
# 741 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FIGHTING_GEM, 2
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_30:
# 742 "data/scripts/gym_scripts.pory"
	giveitem ITEM_MUSCLE_WING, 10
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_31:
# 743 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FOCUS_BAND, 2
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_32:
# 744 "data/scripts/gym_scripts.pory"
	giveitem ITEM_CHOICE_BAND, 2
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_33:
# 745 "data/scripts/gym_scripts.pory"
	giveitem ITEM_PAYAPA_BERRY, 5
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_34:
# 746 "data/scripts/gym_scripts.pory"
	giveitem ITEM_KINGS_ROCK, 2
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_35:
# 747 "data/scripts/gym_scripts.pory"
	giveitem ITEM_EXPERT_BELT, 2
	goto DewfordTown_Gym_EventScript_Brawly_Give_Gifts_21


DewfordTown_Gym_EventScript_Gym_Makuhita::
# 755 "data/scripts/gym_scripts.pory"
	lock
# 756 "data/scripts/gym_scripts.pory"
	faceplayer
# 757 "data/scripts/gym_scripts.pory"
	switch VAR_GYM_POKEMON_SPECIES
# 758 "data/scripts/gym_scripts.pory"
	case SPECIES_MAKUHITA, DewfordTown_Gym_EventScript_Gym_Makuhita_3
# 776 "data/scripts/gym_scripts.pory"
	case SPECIES_HARIYAMA, DewfordTown_Gym_EventScript_Gym_Makuhita_4
DewfordTown_Gym_EventScript_Gym_Makuhita_1:
# 794 "data/scripts/gym_scripts.pory"
	release
	end

DewfordTown_Gym_EventScript_Gym_Makuhita_3:
# 759 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Gym_Makuhita_11
DewfordTown_Gym_EventScript_Gym_Makuhita_9:
# 765 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Gym_Makuhita_8
DewfordTown_Gym_EventScript_Gym_Makuhita_7:
# 772 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_4, MSGBOX_NPC
# 773 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_5, MSGBOX_SIGN
# 774 "data/scripts/gym_scripts.pory"
	waitmessage
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_1

DewfordTown_Gym_EventScript_Gym_Makuhita_4:
# 777 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Gym_Makuhita_20
DewfordTown_Gym_EventScript_Gym_Makuhita_18:
# 783 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_Gym_Makuhita_17
DewfordTown_Gym_EventScript_Gym_Makuhita_16:
# 789 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_10, MSGBOX_NPC
# 790 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_11, MSGBOX_SIGN
# 791 "data/scripts/gym_scripts.pory"
	waitmessage
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_1

DewfordTown_Gym_EventScript_Gym_Makuhita_5:
# 761 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_0, MSGBOX_NPC
# 762 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_1, MSGBOX_SIGN
# 763 "data/scripts/gym_scripts.pory"
	waitmessage
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_1

DewfordTown_Gym_EventScript_Gym_Makuhita_6:
# 767 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_2, MSGBOX_NPC
# 768 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_3, MSGBOX_SIGN
# 769 "data/scripts/gym_scripts.pory"
	waitmessage
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_1

DewfordTown_Gym_EventScript_Gym_Makuhita_8:
# 765 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BRAWLY_REMATCH, DewfordTown_Gym_EventScript_Gym_Makuhita_6
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_7

DewfordTown_Gym_EventScript_Gym_Makuhita_11:
# 759 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_BRAWLY_REMATCH, DewfordTown_Gym_EventScript_Gym_Makuhita_5
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_9

DewfordTown_Gym_EventScript_Gym_Makuhita_14:
# 779 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_6, MSGBOX_NPC
# 780 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_7, MSGBOX_SIGN
# 781 "data/scripts/gym_scripts.pory"
	waitmessage
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_1

DewfordTown_Gym_EventScript_Gym_Makuhita_15:
# 784 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_8, MSGBOX_NPC
# 785 "data/scripts/gym_scripts.pory"
	msgbox DewfordTown_Gym_EventScript_Gym_Makuhita_Text_9, MSGBOX_SIGN
# 786 "data/scripts/gym_scripts.pory"
	waitmessage
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_1

DewfordTown_Gym_EventScript_Gym_Makuhita_17:
# 783 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BRAWLY_REMATCH, DewfordTown_Gym_EventScript_Gym_Makuhita_15
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_16

DewfordTown_Gym_EventScript_Gym_Makuhita_20:
# 777 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_BRAWLY_REMATCH, DewfordTown_Gym_EventScript_Gym_Makuhita_14
	goto DewfordTown_Gym_EventScript_Gym_Makuhita_18


DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species::
# 799 "data/scripts/gym_scripts.pory"
	setflag FLAG_HIDE_GYM_MONS
# 800 "data/scripts/gym_scripts.pory"
	switch VAR_NUM_BADGES
# 801 "data/scripts/gym_scripts.pory"
	case 0, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_3
# 802 "data/scripts/gym_scripts.pory"
	case 1, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_4
# 803 "data/scripts/gym_scripts.pory"
	case 2, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_5
# 804 "data/scripts/gym_scripts.pory"
	case 3, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_6
# 805 "data/scripts/gym_scripts.pory"
	case 4, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_7
# 806 "data/scripts/gym_scripts.pory"
	case 5, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_8
# 807 "data/scripts/gym_scripts.pory"
	case 6, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_9
# 808 "data/scripts/gym_scripts.pory"
	case 7, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_10
# 809 "data/scripts/gym_scripts.pory"
	case 8, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_11
DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1:
# 812 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_NO_EVOLUTION_MODE, DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_13
DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_12:
	return

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_3:
# 801 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MAKUHITA
# 801 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MAKUHITA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_4:
# 802 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MAKUHITA
# 802 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MAKUHITA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_5:
# 803 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HARIYAMA
# 803 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HARIYAMA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_6:
# 804 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HARIYAMA
# 804 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HARIYAMA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_7:
# 805 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HARIYAMA
# 805 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HARIYAMA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_8:
# 806 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HARIYAMA
# 806 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HARIYAMA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_9:
# 807 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HARIYAMA
# 807 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HARIYAMA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_10:
# 808 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HARIYAMA
# 808 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HARIYAMA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_11:
# 809 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HARIYAMA
# 809 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HARIYAMA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_1

DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_13:
# 813 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MAKUHITA
# 813 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MAKUHITA
	goto DewfordTown_Gym_EventScript_Set_Gym_Pokemon_Species_12


MauvilleCity_Gym_EventScript_Wattson_New::
# 820 "data/scripts/gym_scripts.pory"
	lock
# 821 "data/scripts/gym_scripts.pory"
	faceplayer
# 822 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_Wattson_New_8
MauvilleCity_Gym_EventScript_Wattson_New_6:
# 842 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_Wattson_New_5
MauvilleCity_Gym_EventScript_Wattson_New_4:
# 859 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonIntro_New, MSGBOX_NPC
# 861 "data/scripts/gym_scripts.pory"
	call MauvilleCity_Gym_EventScript_Wattson_Battle_New
# 864 "data/scripts/gym_scripts.pory"
	message MauvilleCity_Gym_EventScript_Wattson_New_Text_3
# 865 "data/scripts/gym_scripts.pory"
	waitmessage
# 866 "data/scripts/gym_scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 867 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_5, MSGBOX_NPC
# 868 "data/scripts/gym_scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 869 "data/scripts/gym_scripts.pory"
	setflag FLAG_BADGE03_GET
# 872 "data/scripts/gym_scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 875 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM73_THUNDER_WAVE
# 876 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Wattson_New_Text_4, MSGBOX_NPC
# 878 "data/scripts/gym_scripts.pory"
	waitfanfare
# 879 "data/scripts/gym_scripts.pory"
	closemessage
# 880 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
# 883 "data/scripts/gym_scripts.pory"
	call MauvilleCity_Gym_EventScript_Wattson_Give_Gifts
# 886 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 3
# 887 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 890 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_Text_RegisteredWattson, MSGBOX_DEFAULT
# 891 "data/scripts/gym_scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 892 "data/scripts/gym_scripts.pory"
	setflag FLAG_ENABLE_WATTSON_MATCH_CALL
# 893 "data/scripts/gym_scripts.pory"
	waitfanfare
# 894 "data/scripts/gym_scripts.pory"
	closemessage
# 897 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostBattle, MSGBOX_NPC
# 898 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 901 "data/scripts/gym_scripts.pory"
	setflag FLAG_WATTSON_REMATCH
MauvilleCity_Gym_EventScript_Wattson_New_1:
# 903 "data/scripts/gym_scripts.pory"
	release
	end

MauvilleCity_Gym_EventScript_Wattson_New_2:
# 825 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPreRematch, MSGBOX_NPC
# 827 "data/scripts/gym_scripts.pory"
	call MauvilleCity_Gym_EventScript_Wattson_Battle_New
# 830 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_Text_WattsonPostRematch, MSGBOX_NPC
# 831 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 834 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
# 835 "data/scripts/gym_scripts.pory"
	call MauvilleCity_Gym_EventScript_Wattson_Give_Gifts
# 837 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Wattson_New_Text_0, MSGBOX_NPC
# 840 "data/scripts/gym_scripts.pory"
	setflag FLAG_WATTSON_REMATCH
	goto MauvilleCity_Gym_EventScript_Wattson_New_1

MauvilleCity_Gym_EventScript_Wattson_New_3:
# 844 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Wattson_New_Text_1, MSGBOX_YESNO
# 845 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_Gym_EventScript_Wattson_New_11
# 851 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 3
# 852 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 853 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Wattson_New_Text_0, MSGBOX_NPC
	goto MauvilleCity_Gym_EventScript_Wattson_New_1

MauvilleCity_Gym_EventScript_Wattson_New_5:
# 842 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_WATTSON_REMATCH, MauvilleCity_Gym_EventScript_Wattson_New_3
	goto MauvilleCity_Gym_EventScript_Wattson_New_4

MauvilleCity_Gym_EventScript_Wattson_New_8:
# 822 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_WATTSON_REMATCH, MauvilleCity_Gym_EventScript_Wattson_New_2
	goto MauvilleCity_Gym_EventScript_Wattson_New_6

MauvilleCity_Gym_EventScript_Wattson_New_11:
# 846 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 3
# 847 "data/scripts/gym_scripts.pory"
	call Common_EventScript_ClearGymTrainers
# 848 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Wattson_New_Text_2, MSGBOX_NPC
	goto MauvilleCity_Gym_EventScript_Wattson_New_1


MauvilleCity_Gym_EventScript_Wattson_Battle_New::
# 908 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_Wattson_Battle_New_2
# 914 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MauvilleCity_Gym_EventScript_Wattson_Battle_New_5
# 927 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
MauvilleCity_Gym_EventScript_Wattson_Battle_New_1:
	return

MauvilleCity_Gym_EventScript_Wattson_Battle_New_2:
# 910 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_5:
# 916 "data/scripts/gym_scripts.pory"
	setflag FLAG_SYS_DISABLE_SCALED_TRAINERS
# 917 "data/scripts/gym_scripts.pory"
	random 5
# 918 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 919 "data/scripts/gym_scripts.pory"
	case 0, MauvilleCity_Gym_EventScript_Wattson_Battle_New_9
# 920 "data/scripts/gym_scripts.pory"
	case 1, MauvilleCity_Gym_EventScript_Wattson_Battle_New_10
# 921 "data/scripts/gym_scripts.pory"
	case 2, MauvilleCity_Gym_EventScript_Wattson_Battle_New_11
# 922 "data/scripts/gym_scripts.pory"
	case 3, MauvilleCity_Gym_EventScript_Wattson_Battle_New_12
# 923 "data/scripts/gym_scripts.pory"
	case 4, MauvilleCity_Gym_EventScript_Wattson_Battle_New_13
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_9:
# 919 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_1, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_10:
# 920 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_2, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_11:
# 921 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_3, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_12:
# 922 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_4, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1

MauvilleCity_Gym_EventScript_Wattson_Battle_New_13:
# 923 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_5, MauvilleCity_Gym_Text_WattsonRematchDefeat
	goto MauvilleCity_Gym_EventScript_Wattson_Battle_New_1


MauvilleCity_Gym_EventScript_Wattson_Give_Gifts::
# 935 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM34_SHOCK_WAVE, 1
# 936 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_SECOND_TM_BADGES_COUNT
	goto_if_ge MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_3
MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_1:
# 943 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM57_CHARGE_BEAM, 1
# 944 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_THIRD_TM_BADGES_COUNT
	goto_if_ge MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_8
MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_6:
# 951 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM72_VOLT_SWITCH, 1
# 952 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_FOURTH_TM_BADGES_COUNT
	goto_if_ge MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_13
MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_11:
# 959 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM93_WILD_CHARGE, 1
# 960 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_FIFTH_TM_BADGES_COUNT
	goto_if_ge MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_18
MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_16:
# 967 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_MEGA_STONES_BADGES_COUNT
	goto_if_ge MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_25
MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_24:
# 974 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_23
MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21:
# 987 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_CheckForAllBadges
	return

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_2:
# 937 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM34_SHOCK_WAVE
# 938 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_0, MSGBOX_NPC
# 939 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_1

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_3:
# 936 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_2
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_1

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_7:
# 945 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM57_CHARGE_BEAM
# 946 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_1, MSGBOX_NPC
# 947 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_6

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_8:
# 944 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_7
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_6

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_12:
# 953 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM72_VOLT_SWITCH
# 954 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_2, MSGBOX_NPC
# 955 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_11

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_13:
# 952 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_12
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_11

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_17:
# 961 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM93_WILD_CHARGE
# 962 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_3, MSGBOX_NPC
# 963 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_16

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_18:
# 960 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_17
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_16

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_22:
# 968 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_4, MSGBOX_NPC
# 969 "data/scripts/gym_scripts.pory"
	giveitem ITEM_MANECTITE
# 970 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_5, MSGBOX_NPC
# 971 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_MANECTRIC_MEGA_STONE
# 972 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_23:
# 976 "data/scripts/gym_scripts.pory"
	random 7
# 977 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 978 "data/scripts/gym_scripts.pory"
	case 0, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_29
# 979 "data/scripts/gym_scripts.pory"
	case 1, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_30
# 980 "data/scripts/gym_scripts.pory"
	case 2, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_31
# 981 "data/scripts/gym_scripts.pory"
	case 3, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_32
# 982 "data/scripts/gym_scripts.pory"
	case 4, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_33
# 983 "data/scripts/gym_scripts.pory"
	case 5, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_34
# 984 "data/scripts/gym_scripts.pory"
	case 6, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_35
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_25:
# 967 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_MANECTRIC_MEGA_STONE, MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_22
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_24

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_29:
# 978 "data/scripts/gym_scripts.pory"
	giveitem ITEM_CELL_BATTERY, 2
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_30:
# 979 "data/scripts/gym_scripts.pory"
	giveitem ITEM_MAGNET, 2
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_31:
# 980 "data/scripts/gym_scripts.pory"
	giveitem ITEM_LIGHT_BALL, 2
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_32:
# 981 "data/scripts/gym_scripts.pory"
	giveitem ITEM_ELECTRIC_SEED, 2
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_33:
# 982 "data/scripts/gym_scripts.pory"
	giveitem ITEM_WACAN_BERRY, 5
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_34:
# 983 "data/scripts/gym_scripts.pory"
	giveitem ITEM_THUNDER_STONE, 2
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_35:
# 984 "data/scripts/gym_scripts.pory"
	giveitem ITEM_ELECTRIC_GEM, 2
	goto MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_21


MauvilleCity_Gym_EventScript_GymGuide_New::
# 992 "data/scripts/gym_scripts.pory"
	lock
# 993 "data/scripts/gym_scripts.pory"
	faceplayer
# 994 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, MauvilleCity_Gym_EventScript_GymGuide_New_2
# 1010 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuideAdvice, MSGBOX_NPC
MauvilleCity_Gym_EventScript_GymGuide_New_1:
# 1012 "data/scripts/gym_scripts.pory"
	release
	end

MauvilleCity_Gym_EventScript_GymGuide_New_2:
# 995 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_WATTSON_REMATCH, MauvilleCity_Gym_EventScript_GymGuide_New_5
# 1006 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_Text_GymGuidePostVictory, MSGBOX_NPC
	goto MauvilleCity_Gym_EventScript_GymGuide_New_1

MauvilleCity_Gym_EventScript_GymGuide_New_5:
# 996 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_0, MSGBOX_YESNO
# 997 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MauvilleCity_Gym_EventScript_GymGuide_New_8
# 1002 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_2, MSGBOX_NPC
	goto MauvilleCity_Gym_EventScript_GymGuide_New_1

MauvilleCity_Gym_EventScript_GymGuide_New_8:
# 998 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_1, MSGBOX_NPC
# 999 "data/scripts/gym_scripts.pory"
	warp MAP_MAUVILLE_CITY_GYM, 255, 5, 3
	goto MauvilleCity_Gym_EventScript_GymGuide_New_1


MauvilleCity_Gym_EventScript_Gym_Electrike::
# 1017 "data/scripts/gym_scripts.pory"
	lock
# 1018 "data/scripts/gym_scripts.pory"
	faceplayer
# 1019 "data/scripts/gym_scripts.pory"
	switch VAR_GYM_POKEMON_SPECIES
# 1020 "data/scripts/gym_scripts.pory"
	case SPECIES_ELECTRIKE, MauvilleCity_Gym_EventScript_Gym_Electrike_3
# 1038 "data/scripts/gym_scripts.pory"
	case SPECIES_MANECTRIC, MauvilleCity_Gym_EventScript_Gym_Electrike_4
MauvilleCity_Gym_EventScript_Gym_Electrike_1:
# 1062 "data/scripts/gym_scripts.pory"
	release
	end

MauvilleCity_Gym_EventScript_Gym_Electrike_3:
# 1021 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_Gym_Electrike_11
MauvilleCity_Gym_EventScript_Gym_Electrike_9:
# 1027 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_Gym_Electrike_8
MauvilleCity_Gym_EventScript_Gym_Electrike_7:
# 1034 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_4, MSGBOX_NPC
# 1035 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_5, MSGBOX_SIGN
# 1036 "data/scripts/gym_scripts.pory"
	waitmessage
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_1

MauvilleCity_Gym_EventScript_Gym_Electrike_4:
# 1039 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_Gym_Electrike_24
MauvilleCity_Gym_EventScript_Gym_Electrike_22:
# 1045 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_Gym_EventScript_Gym_Electrike_21
MauvilleCity_Gym_EventScript_Gym_Electrike_19:
# 1050 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, 6
	goto_if_ge MauvilleCity_Gym_EventScript_Gym_Electrike_18
MauvilleCity_Gym_EventScript_Gym_Electrike_17:
# 1057 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_12, MSGBOX_NPC
# 1058 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_13, MSGBOX_SIGN
# 1059 "data/scripts/gym_scripts.pory"
	waitmessage
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_1

MauvilleCity_Gym_EventScript_Gym_Electrike_5:
# 1023 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_0, MSGBOX_NPC
# 1024 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_1, MSGBOX_SIGN
# 1025 "data/scripts/gym_scripts.pory"
	waitmessage
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_1

MauvilleCity_Gym_EventScript_Gym_Electrike_6:
# 1029 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_2, MSGBOX_NPC
# 1030 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_3, MSGBOX_SIGN
# 1031 "data/scripts/gym_scripts.pory"
	waitmessage
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_1

MauvilleCity_Gym_EventScript_Gym_Electrike_8:
# 1027 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_WATTSON_REMATCH, MauvilleCity_Gym_EventScript_Gym_Electrike_6
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_7

MauvilleCity_Gym_EventScript_Gym_Electrike_11:
# 1021 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_WATTSON_REMATCH, MauvilleCity_Gym_EventScript_Gym_Electrike_5
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_9

MauvilleCity_Gym_EventScript_Gym_Electrike_14:
# 1041 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_6, MSGBOX_NPC
# 1042 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_7, MSGBOX_SIGN
# 1043 "data/scripts/gym_scripts.pory"
	waitmessage
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_1

MauvilleCity_Gym_EventScript_Gym_Electrike_15:
# 1046 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_8, MSGBOX_NPC
# 1047 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_9, MSGBOX_SIGN
# 1048 "data/scripts/gym_scripts.pory"
	waitmessage
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_1

MauvilleCity_Gym_EventScript_Gym_Electrike_16:
# 1052 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_10, MSGBOX_NPC
# 1053 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_11, MSGBOX_SIGN
# 1054 "data/scripts/gym_scripts.pory"
	waitmessage
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_1

MauvilleCity_Gym_EventScript_Gym_Electrike_18:
# 1050 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_MANECTRIC_MEGA_STONE, MauvilleCity_Gym_EventScript_Gym_Electrike_16
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_17

MauvilleCity_Gym_EventScript_Gym_Electrike_21:
# 1045 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_WATTSON_REMATCH, MauvilleCity_Gym_EventScript_Gym_Electrike_15
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_19

MauvilleCity_Gym_EventScript_Gym_Electrike_24:
# 1039 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_WATTSON_REMATCH, MauvilleCity_Gym_EventScript_Gym_Electrike_14
	goto MauvilleCity_Gym_EventScript_Gym_Electrike_22


MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species::
# 1067 "data/scripts/gym_scripts.pory"
	setflag FLAG_HIDE_GYM_MONS
# 1068 "data/scripts/gym_scripts.pory"
	switch VAR_NUM_BADGES
# 1069 "data/scripts/gym_scripts.pory"
	case 0, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_3
# 1070 "data/scripts/gym_scripts.pory"
	case 1, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_4
# 1071 "data/scripts/gym_scripts.pory"
	case 2, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_5
# 1072 "data/scripts/gym_scripts.pory"
	case 3, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_6
# 1073 "data/scripts/gym_scripts.pory"
	case 4, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_7
# 1074 "data/scripts/gym_scripts.pory"
	case 5, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_8
# 1075 "data/scripts/gym_scripts.pory"
	case 6, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_9
# 1076 "data/scripts/gym_scripts.pory"
	case 7, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_10
# 1077 "data/scripts/gym_scripts.pory"
	case 8, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_11
MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1:
# 1080 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_NO_EVOLUTION_MODE, MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_13
MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_12:
	return

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_3:
# 1069 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_ELECTRIKE
# 1069 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_ELECTRIKE
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_4:
# 1070 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_ELECTRIKE
# 1070 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_ELECTRIKE
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_5:
# 1071 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MANECTRIC
# 1071 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MANECTRIC
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_6:
# 1072 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MANECTRIC
# 1072 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MANECTRIC
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_7:
# 1073 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MANECTRIC
# 1073 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MANECTRIC
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_8:
# 1074 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MANECTRIC
# 1074 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MANECTRIC
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_9:
# 1075 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MANECTRIC
# 1075 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MANECTRIC
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_10:
# 1076 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MANECTRIC
# 1076 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MANECTRIC
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_11:
# 1077 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_MANECTRIC
# 1077 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_MANECTRIC
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_13:
# 1081 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_ELECTRIKE
# 1081 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_ELECTRIKE
	goto MauvilleCity_Gym_EventScript_Set_Gym_Pokemon_Species_12


LavaridgeTown_Gym_1F_EventScript_Flannery_New::
# 1106 "data/scripts/gym_scripts.pory"
	lock
# 1107 "data/scripts/gym_scripts.pory"
	faceplayer
# 1108 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_Flannery_New_8
LavaridgeTown_Gym_1F_EventScript_Flannery_New_6:
# 1128 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_Flannery_New_5
LavaridgeTown_Gym_1F_EventScript_Flannery_New_4:
# 1145 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryIntro, MSGBOX_NPC
# 1147 "data/scripts/gym_scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New
# 1150 "data/scripts/gym_scripts.pory"
	message LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_3
# 1151 "data/scripts/gym_scripts.pory"
	waitmessage
# 1152 "data/scripts/gym_scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 1153 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_5, MSGBOX_NPC
# 1154 "data/scripts/gym_scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 1155 "data/scripts/gym_scripts.pory"
	setflag FLAG_BADGE04_GET
# 1158 "data/scripts/gym_scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 1161 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM61_WILL_O_WISP
# 1162 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_4, MSGBOX_NPC
# 1164 "data/scripts/gym_scripts.pory"
	waitfanfare
# 1165 "data/scripts/gym_scripts.pory"
	closemessage
# 1166 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
# 1169 "data/scripts/gym_scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts
# 1172 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 4
# 1173 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 1176 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_RegisteredFlannery, MSGBOX_DEFAULT
# 1177 "data/scripts/gym_scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 1178 "data/scripts/gym_scripts.pory"
	setflag FLAG_ENABLE_FLANNERY_MATCH_CALL
# 1179 "data/scripts/gym_scripts.pory"
	waitfanfare
# 1180 "data/scripts/gym_scripts.pory"
	closemessage
# 1183 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_NPC
# 1184 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 1187 "data/scripts/gym_scripts.pory"
	setflag FLAG_FLANNERY_REMATCH
LavaridgeTown_Gym_1F_EventScript_Flannery_New_1:
# 1189 "data/scripts/gym_scripts.pory"
	release
	end

LavaridgeTown_Gym_1F_EventScript_Flannery_New_2:
# 1111 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, MSGBOX_NPC
# 1113 "data/scripts/gym_scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New
# 1116 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_NPC
# 1117 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 1120 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
# 1121 "data/scripts/gym_scripts.pory"
	call LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts
# 1123 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_0, MSGBOX_NPC
# 1126 "data/scripts/gym_scripts.pory"
	setflag FLAG_FLANNERY_REMATCH
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_New_3:
# 1130 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_1, MSGBOX_YESNO
# 1131 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Flannery_New_11
# 1137 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 4
# 1138 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 1139 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_0, MSGBOX_NPC
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_New_5:
# 1128 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_FLANNERY_REMATCH, LavaridgeTown_Gym_1F_EventScript_Flannery_New_3
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_New_4

LavaridgeTown_Gym_1F_EventScript_Flannery_New_8:
# 1108 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_FLANNERY_REMATCH, LavaridgeTown_Gym_1F_EventScript_Flannery_New_2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_New_6

LavaridgeTown_Gym_1F_EventScript_Flannery_New_11:
# 1132 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 4
# 1133 "data/scripts/gym_scripts.pory"
	call Common_EventScript_ClearGymTrainers
# 1134 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_2, MSGBOX_NPC
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_New_1


LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New::
# 1194 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_2
# 1200 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_5
# 1213 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1:
	return

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_2:
# 1196 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_5:
# 1202 "data/scripts/gym_scripts.pory"
	setflag FLAG_SYS_DISABLE_SCALED_TRAINERS
# 1203 "data/scripts/gym_scripts.pory"
	random 5
# 1204 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 1205 "data/scripts/gym_scripts.pory"
	case 0, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_9
# 1206 "data/scripts/gym_scripts.pory"
	case 1, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_10
# 1207 "data/scripts/gym_scripts.pory"
	case 2, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_11
# 1208 "data/scripts/gym_scripts.pory"
	case 3, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_12
# 1209 "data/scripts/gym_scripts.pory"
	case 4, LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_13
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_9:
# 1205 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_10:
# 1206 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_2, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_11:
# 1207 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_3, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_12:
# 1208 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_4, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_13:
# 1209 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_FLANNERY_5, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Battle_New_1


LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts::
# 1221 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM120_MYSTICAL_FIRE, 1
# 1222 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_SECOND_TM_BADGES_COUNT
	goto_if_ge LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_3
LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_1:
# 1229 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM111_HEAT_CRASH, 1
# 1230 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_THIRD_TM_BADGES_COUNT
	goto_if_ge LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_8
LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_6:
# 1237 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM117_BLAZE_KICK, 1
# 1238 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_FOURTH_TM_BADGES_COUNT
	goto_if_ge LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_13
LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_11:
# 1245 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM50_OVERHEAT, 1
# 1246 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_FIFTH_TM_BADGES_COUNT
	goto_if_ge LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_18
LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_16:
# 1253 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_MEGA_STONES_BADGES_COUNT
	goto_if_ge LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_25
LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_24:
# 1260 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_23
LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21:
# 1273 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_CheckForAllBadges
	return

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_2:
# 1223 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM120_MYSTICAL_FIRE
# 1224 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_0, MSGBOX_NPC
# 1225 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_3:
# 1222 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_1

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_7:
# 1231 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM111_HEAT_CRASH
# 1232 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_1, MSGBOX_NPC
# 1233 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_6

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_8:
# 1230 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_7
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_6

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_12:
# 1239 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM117_BLAZE_KICK
# 1240 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_2, MSGBOX_NPC
# 1241 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_11

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_13:
# 1238 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_12
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_11

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_17:
# 1247 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM50_OVERHEAT
# 1248 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_3, MSGBOX_NPC
# 1249 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_16

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_18:
# 1246 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_17
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_16

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_22:
# 1254 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_4, MSGBOX_NPC
# 1255 "data/scripts/gym_scripts.pory"
	giveitem ITEM_HOUNDOOMINITE
# 1256 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_5, MSGBOX_NPC
# 1257 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_HOUNDOOM_MEGA_STONE
# 1258 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_23:
# 1262 "data/scripts/gym_scripts.pory"
	random 7
# 1263 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 1264 "data/scripts/gym_scripts.pory"
	case 0, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_29
# 1265 "data/scripts/gym_scripts.pory"
	case 1, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_30
# 1266 "data/scripts/gym_scripts.pory"
	case 2, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_31
# 1267 "data/scripts/gym_scripts.pory"
	case 3, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_32
# 1268 "data/scripts/gym_scripts.pory"
	case 4, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_33
# 1269 "data/scripts/gym_scripts.pory"
	case 5, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_34
# 1270 "data/scripts/gym_scripts.pory"
	case 6, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_35
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_25:
# 1253 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_HOUNDOOM_MEGA_STONE, LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_22
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_24

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_29:
# 1264 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FIRE_GEM, 2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_30:
# 1265 "data/scripts/gym_scripts.pory"
	giveitem ITEM_CHARCOAL, 2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_31:
# 1266 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FLAME_ORB, 2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_32:
# 1267 "data/scripts/gym_scripts.pory"
	giveitem ITEM_HEAT_ROCK, 2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_33:
# 1268 "data/scripts/gym_scripts.pory"
	giveitem ITEM_OCCA_BERRY, 5
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_34:
# 1269 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FIRE_STONE, 2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_35:
# 1270 "data/scripts/gym_scripts.pory"
	giveitem ITEM_MAGMARIZER, 2
	goto LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_21


LavaridgeTown_Gym_1F_EventScript_GymGuide_New::
# 1278 "data/scripts/gym_scripts.pory"
	lock
# 1279 "data/scripts/gym_scripts.pory"
	faceplayer
# 1280 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuide_New_2
# 1296 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_NPC
LavaridgeTown_Gym_1F_EventScript_GymGuide_New_1:
# 1298 "data/scripts/gym_scripts.pory"
	release
	end

LavaridgeTown_Gym_1F_EventScript_GymGuide_New_2:
# 1281 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_FLANNERY_REMATCH, LavaridgeTown_Gym_1F_EventScript_GymGuide_New_5
# 1292 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_NPC
	goto LavaridgeTown_Gym_1F_EventScript_GymGuide_New_1

LavaridgeTown_Gym_1F_EventScript_GymGuide_New_5:
# 1282 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_0, MSGBOX_YESNO
# 1283 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq LavaridgeTown_Gym_1F_EventScript_GymGuide_New_8
# 1288 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_2, MSGBOX_NPC
	goto LavaridgeTown_Gym_1F_EventScript_GymGuide_New_1

LavaridgeTown_Gym_1F_EventScript_GymGuide_New_8:
# 1284 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_1, MSGBOX_NPC
# 1285 "data/scripts/gym_scripts.pory"
	warp MAP_LAVARIDGE_TOWN_GYM_1F, 255, 13, 10
	goto LavaridgeTown_Gym_1F_EventScript_GymGuide_New_1


LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal::
# 1303 "data/scripts/gym_scripts.pory"
	lock
# 1304 "data/scripts/gym_scripts.pory"
	faceplayer
# 1305 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_8
LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_6:
# 1311 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_5
LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_4:
# 1317 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_4, MSGBOX_NPC
# 1318 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_5, MSGBOX_SIGN
# 1319 "data/scripts/gym_scripts.pory"
	waitmessage
LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_1:
# 1321 "data/scripts/gym_scripts.pory"
	release
	end

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_2:
# 1307 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_0, MSGBOX_NPC
# 1308 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_1, MSGBOX_SIGN
# 1309 "data/scripts/gym_scripts.pory"
	waitmessage
	goto LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_1

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_3:
# 1312 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_2, MSGBOX_NPC
# 1313 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_3, MSGBOX_SIGN
# 1314 "data/scripts/gym_scripts.pory"
	waitmessage
	goto LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_1

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_5:
# 1311 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_FLANNERY_REMATCH, LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_3
	goto LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_4

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_8:
# 1305 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_FLANNERY_REMATCH, LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_2
	goto LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_6


PetalburgCity_Gym_EventScript_Norman_New::
# 1327 "data/scripts/gym_scripts.pory"
	lock
# 1328 "data/scripts/gym_scripts.pory"
	faceplayer
# 1329 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_Norman_New_8
PetalburgCity_Gym_EventScript_Norman_New_6:
# 1349 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_Norman_New_5
PetalburgCity_Gym_EventScript_Norman_New_4:
# 1366 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_NPC
# 1368 "data/scripts/gym_scripts.pory"
	call PetalburgCity_Gym_EventScript_Norman_Battle_New
# 1371 "data/scripts/gym_scripts.pory"
	message PetalburgCity_Gym_EventScript_Norman_New_Text_3
# 1372 "data/scripts/gym_scripts.pory"
	waitmessage
# 1373 "data/scripts/gym_scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 1374 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_5, MSGBOX_NPC
# 1375 "data/scripts/gym_scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 1376 "data/scripts/gym_scripts.pory"
	setflag FLAG_BADGE05_GET
# 1379 "data/scripts/gym_scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 1382 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM54_FALSE_SWIPE
# 1383 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Norman_New_Text_4, MSGBOX_NPC
# 1385 "data/scripts/gym_scripts.pory"
	waitfanfare
# 1386 "data/scripts/gym_scripts.pory"
	closemessage
# 1387 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
# 1390 "data/scripts/gym_scripts.pory"
	call PetalburgCity_Gym_EventScript_Norman_Give_Gifts
# 1393 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 5
# 1394 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 1404 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_NPC
# 1405 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 1408 "data/scripts/gym_scripts.pory"
	setflag FLAG_NORMAN_REMATCH
PetalburgCity_Gym_EventScript_Norman_New_1:
# 1410 "data/scripts/gym_scripts.pory"
	release
	end

PetalburgCity_Gym_EventScript_Norman_New_2:
# 1332 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPreRematch, MSGBOX_NPC
# 1334 "data/scripts/gym_scripts.pory"
	call PetalburgCity_Gym_EventScript_Norman_Battle_New
# 1337 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_NPC
# 1338 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 1341 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
# 1342 "data/scripts/gym_scripts.pory"
	call PetalburgCity_Gym_EventScript_Norman_Give_Gifts
# 1344 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Norman_New_Text_0, MSGBOX_NPC
# 1347 "data/scripts/gym_scripts.pory"
	setflag FLAG_NORMAN_REMATCH
	goto PetalburgCity_Gym_EventScript_Norman_New_1

PetalburgCity_Gym_EventScript_Norman_New_3:
# 1351 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Norman_New_Text_1, MSGBOX_YESNO
# 1352 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCity_Gym_EventScript_Norman_New_11
# 1358 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 5
# 1359 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 1360 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Norman_New_Text_0, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_Norman_New_1

PetalburgCity_Gym_EventScript_Norman_New_5:
# 1349 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_NORMAN_REMATCH, PetalburgCity_Gym_EventScript_Norman_New_3
	goto PetalburgCity_Gym_EventScript_Norman_New_4

PetalburgCity_Gym_EventScript_Norman_New_8:
# 1329 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_NORMAN_REMATCH, PetalburgCity_Gym_EventScript_Norman_New_2
	goto PetalburgCity_Gym_EventScript_Norman_New_6

PetalburgCity_Gym_EventScript_Norman_New_11:
# 1353 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 5
# 1354 "data/scripts/gym_scripts.pory"
	call Common_EventScript_ClearGymTrainers
# 1355 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Norman_New_Text_2, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_Norman_New_1


PetalburgCity_Gym_EventScript_Norman_Battle_New::
# 1415 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_Norman_Battle_New_2
# 1421 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_Norman_Battle_New_5
# 1434 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanRematchDefeat
PetalburgCity_Gym_EventScript_Norman_Battle_New_1:
	return

PetalburgCity_Gym_EventScript_Norman_Battle_New_2:
# 1417 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
	goto PetalburgCity_Gym_EventScript_Norman_Battle_New_1

PetalburgCity_Gym_EventScript_Norman_Battle_New_5:
# 1423 "data/scripts/gym_scripts.pory"
	setflag FLAG_SYS_DISABLE_SCALED_TRAINERS
# 1424 "data/scripts/gym_scripts.pory"
	random 5
# 1425 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 1426 "data/scripts/gym_scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_Norman_Battle_New_9
# 1427 "data/scripts/gym_scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_Norman_Battle_New_10
# 1428 "data/scripts/gym_scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_Norman_Battle_New_11
# 1429 "data/scripts/gym_scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_Norman_Battle_New_12
# 1430 "data/scripts/gym_scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_Norman_Battle_New_13
	goto PetalburgCity_Gym_EventScript_Norman_Battle_New_1

PetalburgCity_Gym_EventScript_Norman_Battle_New_9:
# 1426 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanRematchDefeat
	goto PetalburgCity_Gym_EventScript_Norman_Battle_New_1

PetalburgCity_Gym_EventScript_Norman_Battle_New_10:
# 1427 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_2, PetalburgCity_Gym_Text_NormanRematchDefeat
	goto PetalburgCity_Gym_EventScript_Norman_Battle_New_1

PetalburgCity_Gym_EventScript_Norman_Battle_New_11:
# 1428 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_3, PetalburgCity_Gym_Text_NormanRematchDefeat
	goto PetalburgCity_Gym_EventScript_Norman_Battle_New_1

PetalburgCity_Gym_EventScript_Norman_Battle_New_12:
# 1429 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_4, PetalburgCity_Gym_Text_NormanRematchDefeat
	goto PetalburgCity_Gym_EventScript_Norman_Battle_New_1

PetalburgCity_Gym_EventScript_Norman_Battle_New_13:
# 1430 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_5, PetalburgCity_Gym_Text_NormanRematchDefeat
	goto PetalburgCity_Gym_EventScript_Norman_Battle_New_1


PetalburgCity_Gym_EventScript_Norman_Give_Gifts::
# 1442 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM100_CONFIDE, 1
# 1443 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_SECOND_TM_BADGES_COUNT
	goto_if_ge PetalburgCity_Gym_EventScript_Norman_Give_Gifts_3
PetalburgCity_Gym_EventScript_Norman_Give_Gifts_1:
# 1450 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM96_NATURE_POWER, 1
# 1451 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_THIRD_TM_BADGES_COUNT
	goto_if_ge PetalburgCity_Gym_EventScript_Norman_Give_Gifts_8
PetalburgCity_Gym_EventScript_Norman_Give_Gifts_6:
# 1458 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM42_FACADE, 1
# 1459 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_FOURTH_TM_BADGES_COUNT
	goto_if_ge PetalburgCity_Gym_EventScript_Norman_Give_Gifts_13
PetalburgCity_Gym_EventScript_Norman_Give_Gifts_11:
# 1466 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM68_GIGA_IMPACT, 1
# 1467 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_FIFTH_TM_BADGES_COUNT
	goto_if_ge PetalburgCity_Gym_EventScript_Norman_Give_Gifts_18
PetalburgCity_Gym_EventScript_Norman_Give_Gifts_16:
# 1474 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_MEGA_STONES_BADGES_COUNT
	goto_if_ge PetalburgCity_Gym_EventScript_Norman_Give_Gifts_25
PetalburgCity_Gym_EventScript_Norman_Give_Gifts_24:
# 1481 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, PetalburgCity_Gym_EventScript_Norman_Give_Gifts_23
PetalburgCity_Gym_EventScript_Norman_Give_Gifts_21:
# 1494 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_CheckForAllBadges
	return

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_2:
# 1444 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM100_CONFIDE
# 1445 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Norman_Give_Gifts_Text_0, MSGBOX_NPC
# 1446 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_1

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_3:
# 1443 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgCity_Gym_EventScript_Norman_Give_Gifts_2
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_1

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_7:
# 1452 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM96_NATURE_POWER
# 1453 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Norman_Give_Gifts_Text_1, MSGBOX_NPC
# 1454 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_6

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_8:
# 1451 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgCity_Gym_EventScript_Norman_Give_Gifts_7
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_6

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_12:
# 1460 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM42_FACADE
# 1461 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Norman_Give_Gifts_Text_2, MSGBOX_NPC
# 1462 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_11

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_13:
# 1459 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgCity_Gym_EventScript_Norman_Give_Gifts_12
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_11

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_17:
# 1468 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM68_GIGA_IMPACT
# 1469 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Norman_Give_Gifts_Text_3, MSGBOX_NPC
# 1470 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_16

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_18:
# 1467 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgCity_Gym_EventScript_Norman_Give_Gifts_17
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_16

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_22:
# 1475 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Norman_Give_Gifts_Text_4, MSGBOX_NPC
# 1476 "data/scripts/gym_scripts.pory"
	giveitem ITEM_KANGASKHANITE
# 1477 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Norman_Give_Gifts_Text_5, MSGBOX_NPC
# 1478 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_KANGASKHAN_MEGA_STONE
# 1479 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_21

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_23:
# 1483 "data/scripts/gym_scripts.pory"
	random 7
# 1484 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 1485 "data/scripts/gym_scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_Norman_Give_Gifts_29
# 1486 "data/scripts/gym_scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_Norman_Give_Gifts_30
# 1487 "data/scripts/gym_scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_Norman_Give_Gifts_31
# 1488 "data/scripts/gym_scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_Norman_Give_Gifts_32
# 1489 "data/scripts/gym_scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_Norman_Give_Gifts_33
# 1490 "data/scripts/gym_scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_Norman_Give_Gifts_34
# 1491 "data/scripts/gym_scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_Norman_Give_Gifts_35
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_21

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_25:
# 1474 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_KANGASKHAN_MEGA_STONE, PetalburgCity_Gym_EventScript_Norman_Give_Gifts_22
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_24

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_29:
# 1485 "data/scripts/gym_scripts.pory"
	giveitem ITEM_NORMAL_GEM, 2
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_21

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_30:
# 1486 "data/scripts/gym_scripts.pory"
	giveitem ITEM_CHILAN_BERRY, 5
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_21

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_31:
# 1487 "data/scripts/gym_scripts.pory"
	giveitem ITEM_SILK_SCARF, 2
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_21

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_32:
# 1488 "data/scripts/gym_scripts.pory"
	giveitem ITEM_LUCKY_EGG, 2
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_21

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_33:
# 1489 "data/scripts/gym_scripts.pory"
	giveitem ITEM_NUGGET, 2
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_21

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_34:
# 1490 "data/scripts/gym_scripts.pory"
	giveitem ITEM_SAFETY_GOGGLES, 2
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_21

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_35:
# 1491 "data/scripts/gym_scripts.pory"
	giveitem ITEM_QUICK_POWDER, 2
	goto PetalburgCity_Gym_EventScript_Norman_Give_Gifts_21


PetalburgCity_Gym_EventScript_GymGuide_New::
# 1499 "data/scripts/gym_scripts.pory"
	lock
# 1500 "data/scripts/gym_scripts.pory"
	faceplayer
# 1502 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymGuide_New_2
# 1518 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_NPC
PetalburgCity_Gym_EventScript_GymGuide_New_1:
# 1520 "data/scripts/gym_scripts.pory"
	release
	end

PetalburgCity_Gym_EventScript_GymGuide_New_2:
# 1503 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_NORMAN_REMATCH, PetalburgCity_Gym_EventScript_GymGuide_New_5
# 1514 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_GymGuide_New_1

PetalburgCity_Gym_EventScript_GymGuide_New_5:
# 1504 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_0, MSGBOX_YESNO
# 1505 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PetalburgCity_Gym_EventScript_GymGuide_New_8
# 1510 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_2, MSGBOX_NPC
	goto PetalburgCity_Gym_EventScript_GymGuide_New_1

PetalburgCity_Gym_EventScript_GymGuide_New_8:
# 1506 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_1, MSGBOX_NPC
# 1507 "data/scripts/gym_scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 255, 4, 3
	goto PetalburgCity_Gym_EventScript_GymGuide_New_1


PetalburgCity_Gym_EventScript_Gym_Slakoth::
# 1525 "data/scripts/gym_scripts.pory"
	lock
# 1526 "data/scripts/gym_scripts.pory"
	faceplayer
# 1527 "data/scripts/gym_scripts.pory"
	switch VAR_GYM_POKEMON_SPECIES
# 1528 "data/scripts/gym_scripts.pory"
	case SPECIES_SLAKOTH, PetalburgCity_Gym_EventScript_Gym_Slakoth_3
# 1546 "data/scripts/gym_scripts.pory"
	case SPECIES_VIGOROTH, PetalburgCity_Gym_EventScript_Gym_Slakoth_4
# 1564 "data/scripts/gym_scripts.pory"
	case SPECIES_SLAKING, PetalburgCity_Gym_EventScript_Gym_Slakoth_5
PetalburgCity_Gym_EventScript_Gym_Slakoth_1:
# 1582 "data/scripts/gym_scripts.pory"
	release
	end

PetalburgCity_Gym_EventScript_Gym_Slakoth_3:
# 1529 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_Gym_Slakoth_12
PetalburgCity_Gym_EventScript_Gym_Slakoth_10:
# 1535 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_Gym_Slakoth_9
PetalburgCity_Gym_EventScript_Gym_Slakoth_8:
# 1542 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_4, MSGBOX_NPC
# 1543 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_5, MSGBOX_SIGN
# 1544 "data/scripts/gym_scripts.pory"
	waitmessage
	goto PetalburgCity_Gym_EventScript_Gym_Slakoth_1

PetalburgCity_Gym_EventScript_Gym_Slakoth_4:
# 1547 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_Gym_Slakoth_21
PetalburgCity_Gym_EventScript_Gym_Slakoth_19:
# 1553 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_Gym_Slakoth_18
PetalburgCity_Gym_EventScript_Gym_Slakoth_17:
# 1560 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_9, MSGBOX_NPC
# 1561 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_10, MSGBOX_SIGN
# 1562 "data/scripts/gym_scripts.pory"
	waitmessage
	goto PetalburgCity_Gym_EventScript_Gym_Slakoth_1

PetalburgCity_Gym_EventScript_Gym_Slakoth_5:
# 1565 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_Gym_Slakoth_30
PetalburgCity_Gym_EventScript_Gym_Slakoth_28:
# 1571 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_Gym_Slakoth_27
PetalburgCity_Gym_EventScript_Gym_Slakoth_26:
# 1577 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_15, MSGBOX_NPC
# 1578 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_16, MSGBOX_SIGN
# 1579 "data/scripts/gym_scripts.pory"
	waitmessage
	goto PetalburgCity_Gym_EventScript_Gym_Slakoth_1

PetalburgCity_Gym_EventScript_Gym_Slakoth_6:
# 1531 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_0, MSGBOX_NPC
# 1532 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_1, MSGBOX_SIGN
# 1533 "data/scripts/gym_scripts.pory"
	waitmessage
	goto PetalburgCity_Gym_EventScript_Gym_Slakoth_1

PetalburgCity_Gym_EventScript_Gym_Slakoth_7:
# 1537 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_2, MSGBOX_NPC
# 1538 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_3, MSGBOX_SIGN
# 1539 "data/scripts/gym_scripts.pory"
	waitmessage
	goto PetalburgCity_Gym_EventScript_Gym_Slakoth_1

PetalburgCity_Gym_EventScript_Gym_Slakoth_9:
# 1535 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_NORMAN_REMATCH, PetalburgCity_Gym_EventScript_Gym_Slakoth_7
	goto PetalburgCity_Gym_EventScript_Gym_Slakoth_8

PetalburgCity_Gym_EventScript_Gym_Slakoth_12:
# 1529 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_NORMAN_REMATCH, PetalburgCity_Gym_EventScript_Gym_Slakoth_6
	goto PetalburgCity_Gym_EventScript_Gym_Slakoth_10

PetalburgCity_Gym_EventScript_Gym_Slakoth_15:
# 1549 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_6, MSGBOX_NPC
# 1550 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_7, MSGBOX_SIGN
# 1551 "data/scripts/gym_scripts.pory"
	waitmessage
	goto PetalburgCity_Gym_EventScript_Gym_Slakoth_1

PetalburgCity_Gym_EventScript_Gym_Slakoth_16:
# 1555 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_8, MSGBOX_NPC
# 1556 "data/scripts/gym_scripts.pory"
	msgbox MauvilleCity_Gym_EventScript_Gym_Electrike_Text_3, MSGBOX_SIGN
# 1557 "data/scripts/gym_scripts.pory"
	waitmessage
	goto PetalburgCity_Gym_EventScript_Gym_Slakoth_1

PetalburgCity_Gym_EventScript_Gym_Slakoth_18:
# 1553 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_NORMAN_REMATCH, PetalburgCity_Gym_EventScript_Gym_Slakoth_16
	goto PetalburgCity_Gym_EventScript_Gym_Slakoth_17

PetalburgCity_Gym_EventScript_Gym_Slakoth_21:
# 1547 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_NORMAN_REMATCH, PetalburgCity_Gym_EventScript_Gym_Slakoth_15
	goto PetalburgCity_Gym_EventScript_Gym_Slakoth_19

PetalburgCity_Gym_EventScript_Gym_Slakoth_24:
# 1567 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_11, MSGBOX_NPC
# 1568 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_12, MSGBOX_SIGN
# 1569 "data/scripts/gym_scripts.pory"
	waitmessage
	goto PetalburgCity_Gym_EventScript_Gym_Slakoth_1

PetalburgCity_Gym_EventScript_Gym_Slakoth_25:
# 1572 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_13, MSGBOX_NPC
# 1573 "data/scripts/gym_scripts.pory"
	msgbox PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_14, MSGBOX_SIGN
# 1574 "data/scripts/gym_scripts.pory"
	waitmessage
	goto PetalburgCity_Gym_EventScript_Gym_Slakoth_1

PetalburgCity_Gym_EventScript_Gym_Slakoth_27:
# 1571 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_NORMAN_REMATCH, PetalburgCity_Gym_EventScript_Gym_Slakoth_25
	goto PetalburgCity_Gym_EventScript_Gym_Slakoth_26

PetalburgCity_Gym_EventScript_Gym_Slakoth_30:
# 1565 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_NORMAN_REMATCH, PetalburgCity_Gym_EventScript_Gym_Slakoth_24
	goto PetalburgCity_Gym_EventScript_Gym_Slakoth_28


PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species::
# 1587 "data/scripts/gym_scripts.pory"
	setflag FLAG_HIDE_GYM_MONS
# 1588 "data/scripts/gym_scripts.pory"
	switch VAR_NUM_BADGES
# 1589 "data/scripts/gym_scripts.pory"
	case 0, PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_3
# 1590 "data/scripts/gym_scripts.pory"
	case 1, PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_4
# 1591 "data/scripts/gym_scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_5
# 1592 "data/scripts/gym_scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_6
# 1593 "data/scripts/gym_scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_7
# 1594 "data/scripts/gym_scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_8
# 1595 "data/scripts/gym_scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_9
# 1596 "data/scripts/gym_scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_10
# 1597 "data/scripts/gym_scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_11
PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_1:
# 1601 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_NO_EVOLUTION_MODE, PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_13
PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_12:
	return

PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_3:
# 1589 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SLAKOTH
# 1589 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SLAKOTH
	goto PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_4:
# 1590 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_VIGOROTH
# 1590 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_VIGOROTH
	goto PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_5:
# 1591 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_VIGOROTH
# 1591 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_VIGOROTH
	goto PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_6:
# 1592 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_VIGOROTH
# 1592 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_VIGOROTH
	goto PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_7:
# 1593 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SLAKING
# 1593 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SLAKING
	goto PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_8:
# 1594 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SLAKING
# 1594 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SLAKING
	goto PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_9:
# 1595 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SLAKING
# 1595 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SLAKING
	goto PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_10:
# 1596 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SLAKING
# 1596 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SLAKING
	goto PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_11:
# 1597 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SLAKING
# 1597 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SLAKING
	goto PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_13:
# 1602 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SLAKOTH
# 1602 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SLAKOTH
	goto PetalburgCity_Gym_EventScript_Set_Gym_Pokemon_Species_12


FortreeCity_Gym_EventScript_Winona_New::
# 1609 "data/scripts/gym_scripts.pory"
	lock
# 1610 "data/scripts/gym_scripts.pory"
	faceplayer
# 1611 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Winona_New_8
FortreeCity_Gym_EventScript_Winona_New_6:
# 1631 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Winona_New_5
FortreeCity_Gym_EventScript_Winona_New_4:
# 1648 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaIntro, MSGBOX_NPC
# 1650 "data/scripts/gym_scripts.pory"
	call FortreeCity_Gym_EventScript_Winona_Battle_New
# 1653 "data/scripts/gym_scripts.pory"
	message FortreeCity_Gym_EventScript_Winona_New_Text_3
# 1654 "data/scripts/gym_scripts.pory"
	waitmessage
# 1655 "data/scripts/gym_scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 1656 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_5, MSGBOX_NPC
# 1657 "data/scripts/gym_scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 1658 "data/scripts/gym_scripts.pory"
	setflag FLAG_BADGE06_GET
# 1661 "data/scripts/gym_scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 1664 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM58_ROOST
# 1665 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Winona_New_Text_4, MSGBOX_NPC
# 1667 "data/scripts/gym_scripts.pory"
	waitfanfare
# 1668 "data/scripts/gym_scripts.pory"
	closemessage
# 1669 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
# 1672 "data/scripts/gym_scripts.pory"
	call FortreeCity_Gym_EventScript_Winona_Give_Gifts
# 1675 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 6
# 1676 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 1679 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_Text_RegisteredWinona, MSGBOX_DEFAULT
# 1680 "data/scripts/gym_scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 1681 "data/scripts/gym_scripts.pory"
	setflag FLAG_ENABLE_WINONA_MATCH_CALL
# 1682 "data/scripts/gym_scripts.pory"
	waitfanfare
# 1683 "data/scripts/gym_scripts.pory"
	closemessage
# 1686 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostBattle, MSGBOX_NPC
# 1687 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 1690 "data/scripts/gym_scripts.pory"
	setflag FLAG_WINONA_REMATCH
FortreeCity_Gym_EventScript_Winona_New_1:
# 1692 "data/scripts/gym_scripts.pory"
	release
	end

FortreeCity_Gym_EventScript_Winona_New_2:
# 1614 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPreRematch, MSGBOX_NPC
# 1616 "data/scripts/gym_scripts.pory"
	call FortreeCity_Gym_EventScript_Winona_Battle_New
# 1619 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_Text_WinonaPostRematch, MSGBOX_NPC
# 1620 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 1623 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
# 1624 "data/scripts/gym_scripts.pory"
	call FortreeCity_Gym_EventScript_Winona_Give_Gifts
# 1626 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Winona_New_Text_0, MSGBOX_NPC
# 1629 "data/scripts/gym_scripts.pory"
	setflag FLAG_WINONA_REMATCH
	goto FortreeCity_Gym_EventScript_Winona_New_1

FortreeCity_Gym_EventScript_Winona_New_3:
# 1633 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Winona_New_Text_1, MSGBOX_YESNO
# 1634 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FortreeCity_Gym_EventScript_Winona_New_11
# 1640 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 6
# 1641 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 1642 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Winona_New_Text_0, MSGBOX_NPC
	goto FortreeCity_Gym_EventScript_Winona_New_1

FortreeCity_Gym_EventScript_Winona_New_5:
# 1631 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_WINONA_REMATCH, FortreeCity_Gym_EventScript_Winona_New_3
	goto FortreeCity_Gym_EventScript_Winona_New_4

FortreeCity_Gym_EventScript_Winona_New_8:
# 1611 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_WINONA_REMATCH, FortreeCity_Gym_EventScript_Winona_New_2
	goto FortreeCity_Gym_EventScript_Winona_New_6

FortreeCity_Gym_EventScript_Winona_New_11:
# 1635 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 6
# 1636 "data/scripts/gym_scripts.pory"
	call Common_EventScript_ClearGymTrainers
# 1637 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Winona_New_Text_2, MSGBOX_NPC
	goto FortreeCity_Gym_EventScript_Winona_New_1


FortreeCity_Gym_EventScript_Winona_Battle_New::
# 1697 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Winona_Battle_New_2
# 1703 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, FortreeCity_Gym_EventScript_Winona_Battle_New_5
# 1716 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
FortreeCity_Gym_EventScript_Winona_Battle_New_1:
	return

FortreeCity_Gym_EventScript_Winona_Battle_New_2:
# 1699 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_5:
# 1705 "data/scripts/gym_scripts.pory"
	setflag FLAG_SYS_DISABLE_SCALED_TRAINERS
# 1706 "data/scripts/gym_scripts.pory"
	random 5
# 1707 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 1708 "data/scripts/gym_scripts.pory"
	case 0, FortreeCity_Gym_EventScript_Winona_Battle_New_9
# 1709 "data/scripts/gym_scripts.pory"
	case 1, FortreeCity_Gym_EventScript_Winona_Battle_New_10
# 1710 "data/scripts/gym_scripts.pory"
	case 2, FortreeCity_Gym_EventScript_Winona_Battle_New_11
# 1711 "data/scripts/gym_scripts.pory"
	case 3, FortreeCity_Gym_EventScript_Winona_Battle_New_12
# 1712 "data/scripts/gym_scripts.pory"
	case 4, FortreeCity_Gym_EventScript_Winona_Battle_New_13
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_9:
# 1708 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_1, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_10:
# 1709 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_2, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_11:
# 1710 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_3, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_12:
# 1711 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_4, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1

FortreeCity_Gym_EventScript_Winona_Battle_New_13:
# 1712 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_5, FortreeCity_Gym_Text_WinonaRematchDefeat
	goto FortreeCity_Gym_EventScript_Winona_Battle_New_1


FortreeCity_Gym_EventScript_Winona_Give_Gifts::
# 1724 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM40_AERIAL_ACE, 1
# 1725 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_SECOND_TM_BADGES_COUNT
	goto_if_ge FortreeCity_Gym_EventScript_Winona_Give_Gifts_3
FortreeCity_Gym_EventScript_Winona_Give_Gifts_1:
# 1732 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM62_ACROBATICS, 1
# 1733 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_THIRD_TM_BADGES_COUNT
	goto_if_ge FortreeCity_Gym_EventScript_Winona_Give_Gifts_8
FortreeCity_Gym_EventScript_Winona_Give_Gifts_6:
# 1740 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM76_FLY, 1
# 1741 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_FOURTH_TM_BADGES_COUNT
	goto_if_ge FortreeCity_Gym_EventScript_Winona_Give_Gifts_13
FortreeCity_Gym_EventScript_Winona_Give_Gifts_11:
# 1748 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM114_BRAVE_BIRD, 1
# 1749 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_FIFTH_TM_BADGES_COUNT
	goto_if_ge FortreeCity_Gym_EventScript_Winona_Give_Gifts_18
FortreeCity_Gym_EventScript_Winona_Give_Gifts_16:
# 1756 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_MEGA_STONES_BADGES_COUNT
	goto_if_ge FortreeCity_Gym_EventScript_Winona_Give_Gifts_25
FortreeCity_Gym_EventScript_Winona_Give_Gifts_24:
# 1763 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, FortreeCity_Gym_EventScript_Winona_Give_Gifts_23
FortreeCity_Gym_EventScript_Winona_Give_Gifts_21:
# 1776 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_CheckForAllBadges
	return

FortreeCity_Gym_EventScript_Winona_Give_Gifts_2:
# 1726 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM40_AERIAL_ACE
# 1727 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_0, MSGBOX_NPC
# 1728 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_1

FortreeCity_Gym_EventScript_Winona_Give_Gifts_3:
# 1725 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FortreeCity_Gym_EventScript_Winona_Give_Gifts_2
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_1

FortreeCity_Gym_EventScript_Winona_Give_Gifts_7:
# 1734 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM62_ACROBATICS
# 1735 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_1, MSGBOX_NPC
# 1736 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_6

FortreeCity_Gym_EventScript_Winona_Give_Gifts_8:
# 1733 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FortreeCity_Gym_EventScript_Winona_Give_Gifts_7
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_6

FortreeCity_Gym_EventScript_Winona_Give_Gifts_12:
# 1742 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM76_FLY
# 1743 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_2, MSGBOX_NPC
# 1744 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_11

FortreeCity_Gym_EventScript_Winona_Give_Gifts_13:
# 1741 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FortreeCity_Gym_EventScript_Winona_Give_Gifts_12
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_11

FortreeCity_Gym_EventScript_Winona_Give_Gifts_17:
# 1750 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM114_BRAVE_BIRD
# 1751 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_3, MSGBOX_NPC
# 1752 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_16

FortreeCity_Gym_EventScript_Winona_Give_Gifts_18:
# 1749 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FortreeCity_Gym_EventScript_Winona_Give_Gifts_17
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_16

FortreeCity_Gym_EventScript_Winona_Give_Gifts_22:
# 1757 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_4, MSGBOX_NPC
# 1758 "data/scripts/gym_scripts.pory"
	giveitem ITEM_ALTARIANITE
# 1759 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_5, MSGBOX_NPC
# 1760 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_ALTARIA_MEGA_STONE
# 1761 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21

FortreeCity_Gym_EventScript_Winona_Give_Gifts_23:
# 1765 "data/scripts/gym_scripts.pory"
	random 7
# 1766 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 1767 "data/scripts/gym_scripts.pory"
	case 0, FortreeCity_Gym_EventScript_Winona_Give_Gifts_29
# 1768 "data/scripts/gym_scripts.pory"
	case 1, FortreeCity_Gym_EventScript_Winona_Give_Gifts_30
# 1769 "data/scripts/gym_scripts.pory"
	case 2, FortreeCity_Gym_EventScript_Winona_Give_Gifts_31
# 1770 "data/scripts/gym_scripts.pory"
	case 3, FortreeCity_Gym_EventScript_Winona_Give_Gifts_32
# 1771 "data/scripts/gym_scripts.pory"
	case 4, FortreeCity_Gym_EventScript_Winona_Give_Gifts_33
# 1772 "data/scripts/gym_scripts.pory"
	case 5, FortreeCity_Gym_EventScript_Winona_Give_Gifts_34
# 1773 "data/scripts/gym_scripts.pory"
	case 6, FortreeCity_Gym_EventScript_Winona_Give_Gifts_35
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21

FortreeCity_Gym_EventScript_Winona_Give_Gifts_25:
# 1756 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_ALTARIA_MEGA_STONE, FortreeCity_Gym_EventScript_Winona_Give_Gifts_22
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_24

FortreeCity_Gym_EventScript_Winona_Give_Gifts_29:
# 1767 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FLYING_GEM, 2
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21

FortreeCity_Gym_EventScript_Winona_Give_Gifts_30:
# 1768 "data/scripts/gym_scripts.pory"
	giveitem ITEM_POWER_HERB, 2
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21

FortreeCity_Gym_EventScript_Winona_Give_Gifts_31:
# 1769 "data/scripts/gym_scripts.pory"
	giveitem ITEM_AIR_BALLOON, 2
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21

FortreeCity_Gym_EventScript_Winona_Give_Gifts_32:
# 1770 "data/scripts/gym_scripts.pory"
	giveitem ITEM_SWIFT_WING, 2
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21

FortreeCity_Gym_EventScript_Winona_Give_Gifts_33:
# 1771 "data/scripts/gym_scripts.pory"
	giveitem ITEM_SHARP_BEAK, 5
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21

FortreeCity_Gym_EventScript_Winona_Give_Gifts_34:
# 1772 "data/scripts/gym_scripts.pory"
	giveitem ITEM_COBA_BERRY, 2
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21

FortreeCity_Gym_EventScript_Winona_Give_Gifts_35:
# 1773 "data/scripts/gym_scripts.pory"
	giveitem ITEM_GREPA_BERRY, 2
	goto FortreeCity_Gym_EventScript_Winona_Give_Gifts_21


FortreeCity_Gym_EventScript_GymGuide_New::
# 1781 "data/scripts/gym_scripts.pory"
	lock
# 1782 "data/scripts/gym_scripts.pory"
	faceplayer
# 1783 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, FortreeCity_Gym_EventScript_GymGuide_New_2
# 1799 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuideAdvice, MSGBOX_NPC
FortreeCity_Gym_EventScript_GymGuide_New_1:
# 1801 "data/scripts/gym_scripts.pory"
	release
	end

FortreeCity_Gym_EventScript_GymGuide_New_2:
# 1784 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_WINONA_REMATCH, FortreeCity_Gym_EventScript_GymGuide_New_5
# 1795 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_Text_GymGuidePostVictory, MSGBOX_NPC
	goto FortreeCity_Gym_EventScript_GymGuide_New_1

FortreeCity_Gym_EventScript_GymGuide_New_5:
# 1785 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_0, MSGBOX_YESNO
# 1786 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FortreeCity_Gym_EventScript_GymGuide_New_8
# 1791 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_2, MSGBOX_NPC
	goto FortreeCity_Gym_EventScript_GymGuide_New_1

FortreeCity_Gym_EventScript_GymGuide_New_8:
# 1787 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_1, MSGBOX_NPC
# 1788 "data/scripts/gym_scripts.pory"
	warp MAP_FORTREE_CITY_GYM, 255, 15, 3
	goto FortreeCity_Gym_EventScript_GymGuide_New_1


FortreeCity_Gym_EventScript_Gym_Taillow::
# 1806 "data/scripts/gym_scripts.pory"
	lock
# 1807 "data/scripts/gym_scripts.pory"
	faceplayer
# 1808 "data/scripts/gym_scripts.pory"
	switch VAR_GYM_POKEMON_SPECIES
# 1809 "data/scripts/gym_scripts.pory"
	case SPECIES_TAILLOW, FortreeCity_Gym_EventScript_Gym_Taillow_3
# 1827 "data/scripts/gym_scripts.pory"
	case SPECIES_SWELLOW, FortreeCity_Gym_EventScript_Gym_Taillow_4
FortreeCity_Gym_EventScript_Gym_Taillow_1:
# 1845 "data/scripts/gym_scripts.pory"
	release
	end

FortreeCity_Gym_EventScript_Gym_Taillow_3:
# 1810 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Gym_Taillow_11
FortreeCity_Gym_EventScript_Gym_Taillow_9:
# 1816 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Gym_Taillow_8
FortreeCity_Gym_EventScript_Gym_Taillow_7:
# 1823 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_4, MSGBOX_NPC
# 1824 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_5, MSGBOX_SIGN
# 1825 "data/scripts/gym_scripts.pory"
	waitmessage
	goto FortreeCity_Gym_EventScript_Gym_Taillow_1

FortreeCity_Gym_EventScript_Gym_Taillow_4:
# 1828 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Gym_Taillow_20
FortreeCity_Gym_EventScript_Gym_Taillow_18:
# 1834 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE06_GET, FortreeCity_Gym_EventScript_Gym_Taillow_17
FortreeCity_Gym_EventScript_Gym_Taillow_16:
# 1840 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_10, MSGBOX_NPC
# 1841 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_11, MSGBOX_SIGN
# 1842 "data/scripts/gym_scripts.pory"
	waitmessage
	goto FortreeCity_Gym_EventScript_Gym_Taillow_1

FortreeCity_Gym_EventScript_Gym_Taillow_5:
# 1812 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_0, MSGBOX_NPC
# 1813 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_1, MSGBOX_SIGN
# 1814 "data/scripts/gym_scripts.pory"
	waitmessage
	goto FortreeCity_Gym_EventScript_Gym_Taillow_1

FortreeCity_Gym_EventScript_Gym_Taillow_6:
# 1818 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_2, MSGBOX_NPC
# 1819 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_3, MSGBOX_SIGN
# 1820 "data/scripts/gym_scripts.pory"
	waitmessage
	goto FortreeCity_Gym_EventScript_Gym_Taillow_1

FortreeCity_Gym_EventScript_Gym_Taillow_8:
# 1816 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_WINONA_REMATCH, FortreeCity_Gym_EventScript_Gym_Taillow_6
	goto FortreeCity_Gym_EventScript_Gym_Taillow_7

FortreeCity_Gym_EventScript_Gym_Taillow_11:
# 1810 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_WINONA_REMATCH, FortreeCity_Gym_EventScript_Gym_Taillow_5
	goto FortreeCity_Gym_EventScript_Gym_Taillow_9

FortreeCity_Gym_EventScript_Gym_Taillow_14:
# 1830 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_6, MSGBOX_NPC
# 1831 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_7, MSGBOX_SIGN
# 1832 "data/scripts/gym_scripts.pory"
	waitmessage
	goto FortreeCity_Gym_EventScript_Gym_Taillow_1

FortreeCity_Gym_EventScript_Gym_Taillow_15:
# 1835 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_8, MSGBOX_NPC
# 1836 "data/scripts/gym_scripts.pory"
	msgbox FortreeCity_Gym_EventScript_Gym_Taillow_Text_9, MSGBOX_SIGN
# 1837 "data/scripts/gym_scripts.pory"
	waitmessage
	goto FortreeCity_Gym_EventScript_Gym_Taillow_1

FortreeCity_Gym_EventScript_Gym_Taillow_17:
# 1834 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_WINONA_REMATCH, FortreeCity_Gym_EventScript_Gym_Taillow_15
	goto FortreeCity_Gym_EventScript_Gym_Taillow_16

FortreeCity_Gym_EventScript_Gym_Taillow_20:
# 1828 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_WINONA_REMATCH, FortreeCity_Gym_EventScript_Gym_Taillow_14
	goto FortreeCity_Gym_EventScript_Gym_Taillow_18


FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species::
# 1850 "data/scripts/gym_scripts.pory"
	setflag FLAG_HIDE_GYM_MONS
# 1851 "data/scripts/gym_scripts.pory"
	switch VAR_NUM_BADGES
# 1852 "data/scripts/gym_scripts.pory"
	case 0, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_3
# 1853 "data/scripts/gym_scripts.pory"
	case 1, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_4
# 1854 "data/scripts/gym_scripts.pory"
	case 2, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_5
# 1855 "data/scripts/gym_scripts.pory"
	case 3, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_6
# 1856 "data/scripts/gym_scripts.pory"
	case 4, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_7
# 1857 "data/scripts/gym_scripts.pory"
	case 5, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_8
# 1858 "data/scripts/gym_scripts.pory"
	case 6, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_9
# 1859 "data/scripts/gym_scripts.pory"
	case 7, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_10
# 1860 "data/scripts/gym_scripts.pory"
	case 8, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_11
FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1:
# 1863 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_NO_EVOLUTION_MODE, FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_13
FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_12:
	return

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_3:
# 1852 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_TAILLOW
# 1852 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_TAILLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_4:
# 1853 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_TAILLOW
# 1853 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_TAILLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_5:
# 1854 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_TAILLOW
# 1854 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_TAILLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_6:
# 1855 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SWELLOW
# 1855 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SWELLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_7:
# 1856 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SWELLOW
# 1856 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SWELLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_8:
# 1857 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SWELLOW
# 1857 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SWELLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_9:
# 1858 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SWELLOW
# 1858 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SWELLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_10:
# 1859 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SWELLOW
# 1859 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SWELLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_11:
# 1860 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SWELLOW
# 1860 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SWELLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_1

FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_13:
# 1864 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_TAILLOW
# 1864 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_TAILLOW
	goto FortreeCity_Gym_EventScript_Set_Gym_Pokemon_Species_12


MossdeepCity_Gym_EventScript_TateAndLiza_New::
# 1870 "data/scripts/gym_scripts.pory"
	lock
# 1871 "data/scripts/gym_scripts.pory"
	faceplayer
# 1872 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_TateAndLiza_New_8
MossdeepCity_Gym_EventScript_TateAndLiza_New_6:
# 1894 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_TateAndLiza_New_5
MossdeepCity_Gym_EventScript_TateAndLiza_New_4:
# 1915 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaIntro, MSGBOX_NPC
# 1917 "data/scripts/gym_scripts.pory"
	call MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New
# 1920 "data/scripts/gym_scripts.pory"
	message MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_9
# 1921 "data/scripts/gym_scripts.pory"
	waitmessage
# 1922 "data/scripts/gym_scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 1923 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_5, MSGBOX_NPC
# 1924 "data/scripts/gym_scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 1925 "data/scripts/gym_scripts.pory"
	setflag FLAG_BADGE07_GET
# 1928 "data/scripts/gym_scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 1931 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM04_CALM_MIND
# 1932 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_10, MSGBOX_NPC
# 1934 "data/scripts/gym_scripts.pory"
	waitfanfare
# 1935 "data/scripts/gym_scripts.pory"
	closemessage
# 1936 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
# 1939 "data/scripts/gym_scripts.pory"
	call MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts
# 1942 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 7
# 1943 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 1946 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_Text_RegisteredTateAndLiza, MSGBOX_DEFAULT
# 1947 "data/scripts/gym_scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 1948 "data/scripts/gym_scripts.pory"
	setflag FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL
# 1949 "data/scripts/gym_scripts.pory"
	waitfanfare
# 1950 "data/scripts/gym_scripts.pory"
	closemessage
# 1953 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostBattle, MSGBOX_NPC
# 1954 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 1957 "data/scripts/gym_scripts.pory"
	setflag FLAG_TATE_AND_LIZA_REMATCH
MossdeepCity_Gym_EventScript_TateAndLiza_New_1:
# 1959 "data/scripts/gym_scripts.pory"
	release
	end

MossdeepCity_Gym_EventScript_TateAndLiza_New_2:
# 1875 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPreRematch, MSGBOX_NPC
# 1877 "data/scripts/gym_scripts.pory"
	call MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New
# 1880 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_Text_TateAndLizaPostRematch, MSGBOX_NPC
# 1881 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 1884 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_0, MSGBOX_NPC
# 1885 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_1, MSGBOX_NPC
# 1886 "data/scripts/gym_scripts.pory"
	call MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts
# 1888 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_2, MSGBOX_NPC
# 1889 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_3, MSGBOX_NPC
# 1892 "data/scripts/gym_scripts.pory"
	setflag FLAG_TATE_AND_LIZA_REMATCH
	goto MossdeepCity_Gym_EventScript_TateAndLiza_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_New_3:
# 1896 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_4, MSGBOX_NPC
# 1897 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_5, MSGBOX_NPC
# 1898 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_6, MSGBOX_YESNO
# 1899 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MossdeepCity_Gym_EventScript_TateAndLiza_New_11
# 1906 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 7
# 1907 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 1908 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_2, MSGBOX_NPC
# 1909 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_3, MSGBOX_NPC
	goto MossdeepCity_Gym_EventScript_TateAndLiza_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_New_5:
# 1894 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_TATE_AND_LIZA_REMATCH, MossdeepCity_Gym_EventScript_TateAndLiza_New_3
	goto MossdeepCity_Gym_EventScript_TateAndLiza_New_4

MossdeepCity_Gym_EventScript_TateAndLiza_New_8:
# 1872 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TATE_AND_LIZA_REMATCH, MossdeepCity_Gym_EventScript_TateAndLiza_New_2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_New_6

MossdeepCity_Gym_EventScript_TateAndLiza_New_11:
# 1900 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 7
# 1901 "data/scripts/gym_scripts.pory"
	call Common_EventScript_ClearGymTrainers
# 1902 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_7, MSGBOX_NPC
# 1903 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_8, MSGBOX_NPC
	goto MossdeepCity_Gym_EventScript_TateAndLiza_New_1


MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New::
# 1964 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_2
# 1970 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_5
# 1983 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1:
	return

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_2:
# 1966 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_5:
# 1972 "data/scripts/gym_scripts.pory"
	setflag FLAG_SYS_DISABLE_SCALED_TRAINERS
# 1973 "data/scripts/gym_scripts.pory"
	random 5
# 1974 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 1975 "data/scripts/gym_scripts.pory"
	case 0, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_9
# 1976 "data/scripts/gym_scripts.pory"
	case 1, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_10
# 1977 "data/scripts/gym_scripts.pory"
	case 2, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_11
# 1978 "data/scripts/gym_scripts.pory"
	case 3, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_12
# 1979 "data/scripts/gym_scripts.pory"
	case 4, MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_13
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_9:
# 1975 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_1, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_10:
# 1976 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_2, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_11:
# 1977 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_3, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_12:
# 1978 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_4, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1

MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_13:
# 1979 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_TATE_AND_LIZA_5, MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Battle_New_1


MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts::
# 1991 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM85_DREAM_EATER, 1
# 1992 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_SECOND_TM_BADGES_COUNT
	goto_if_ge MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_3
MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_1:
# 2000 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM92_TRICK_ROOM, 1
# 2001 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_THIRD_TM_BADGES_COUNT
	goto_if_ge MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_8
MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_6:
# 2009 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM105_PSYSHOCK, 1
# 2010 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_FOURTH_TM_BADGES_COUNT
	goto_if_ge MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_13
MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_11:
# 2026 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_MEGA_STONES_BADGES_COUNT
	goto_if_ge MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_20
MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_19:
# 2034 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_18
MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16:
# 2047 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_CheckForAllBadges
	return

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_2:
# 1993 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM85_DREAM_EATER
# 1994 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_0, MSGBOX_NPC
# 1995 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_1, MSGBOX_NPC
# 1996 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_1

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_3:
# 1992 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_1

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_7:
# 2002 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM92_TRICK_ROOM
# 2003 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_2, MSGBOX_NPC
# 2004 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_3, MSGBOX_NPC
# 2005 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_6

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_8:
# 2001 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_7
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_6

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_12:
# 2011 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM105_PSYSHOCK
# 2012 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_4, MSGBOX_NPC
# 2013 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_5, MSGBOX_NPC
# 2014 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_11

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_13:
# 2010 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_12
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_11

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_17:
# 2027 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_6, MSGBOX_NPC
# 2028 "data/scripts/gym_scripts.pory"
	giveitem ITEM_GARDEVOIRITE
# 2029 "data/scripts/gym_scripts.pory"
	giveitem ITEM_GALLADITE
# 2030 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_7, MSGBOX_NPC
# 2031 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_GARDEVOIR_MEGA_STONE
# 2032 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_18:
# 2036 "data/scripts/gym_scripts.pory"
	random 7
# 2037 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 2038 "data/scripts/gym_scripts.pory"
	case 0, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_24
# 2039 "data/scripts/gym_scripts.pory"
	case 1, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_25
# 2040 "data/scripts/gym_scripts.pory"
	case 2, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_26
# 2041 "data/scripts/gym_scripts.pory"
	case 3, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_27
# 2042 "data/scripts/gym_scripts.pory"
	case 4, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_28
# 2043 "data/scripts/gym_scripts.pory"
	case 5, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_29
# 2044 "data/scripts/gym_scripts.pory"
	case 6, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_30
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_20:
# 2026 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_GARDEVOIR_MEGA_STONE, MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_17
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_19

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_24:
# 2038 "data/scripts/gym_scripts.pory"
	giveitem ITEM_LIFE_ORB, 2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_25:
# 2039 "data/scripts/gym_scripts.pory"
	giveitem ITEM_PSYCHIC_GEM, 2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_26:
# 2040 "data/scripts/gym_scripts.pory"
	giveitem ITEM_SUN_STONE, 2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_27:
# 2041 "data/scripts/gym_scripts.pory"
	giveitem ITEM_MOON_STONE, 2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_28:
# 2042 "data/scripts/gym_scripts.pory"
	giveitem ITEM_SCOPE_LENS, 2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_29:
# 2043 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TERRAIN_EXTENDER, 2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_30:
# 2044 "data/scripts/gym_scripts.pory"
	giveitem ITEM_COLBUR_BERRY, 2
	goto MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_16


MossdeepCity_Gym_EventScript_GymGuide_New::
# 2052 "data/scripts/gym_scripts.pory"
	lock
# 2053 "data/scripts/gym_scripts.pory"
	faceplayer
# 2054 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, MossdeepCity_Gym_EventScript_GymGuide_New_2
# 2070 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuideAdvice, MSGBOX_NPC
MossdeepCity_Gym_EventScript_GymGuide_New_1:
# 2072 "data/scripts/gym_scripts.pory"
	release
	end

MossdeepCity_Gym_EventScript_GymGuide_New_2:
# 2055 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TATE_AND_LIZA_REMATCH, MossdeepCity_Gym_EventScript_GymGuide_New_5
# 2066 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_Text_GymGuidePostVictory, MSGBOX_NPC
	goto MossdeepCity_Gym_EventScript_GymGuide_New_1

MossdeepCity_Gym_EventScript_GymGuide_New_5:
# 2056 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_GymGuide_New_Text_0, MSGBOX_YESNO
# 2057 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MossdeepCity_Gym_EventScript_GymGuide_New_8
# 2062 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_2, MSGBOX_NPC
	goto MossdeepCity_Gym_EventScript_GymGuide_New_1

MossdeepCity_Gym_EventScript_GymGuide_New_8:
# 2058 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_GymGuide_New_Text_1, MSGBOX_NPC
# 2059 "data/scripts/gym_scripts.pory"
	warp MAP_MOSSDEEP_CITY_GYM, 255, 12, 13
	goto MossdeepCity_Gym_EventScript_GymGuide_New_1


MossdeepCity_Gym_EventScript_Gym_Solrock::
# 2077 "data/scripts/gym_scripts.pory"
	lock
# 2078 "data/scripts/gym_scripts.pory"
	faceplayer
# 2079 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_Gym_Solrock_8
MossdeepCity_Gym_EventScript_Gym_Solrock_6:
# 2085 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_Gym_Solrock_5
MossdeepCity_Gym_EventScript_Gym_Solrock_4:
# 2091 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_Gym_Solrock_Text_3, MSGBOX_NPC
# 2092 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_5, MSGBOX_SIGN
# 2093 "data/scripts/gym_scripts.pory"
	waitmessage
MossdeepCity_Gym_EventScript_Gym_Solrock_1:
# 2095 "data/scripts/gym_scripts.pory"
	release
	end

MossdeepCity_Gym_EventScript_Gym_Solrock_2:
# 2081 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_Gym_Solrock_Text_0, MSGBOX_NPC
# 2082 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_Gym_Solrock_Text_1, MSGBOX_SIGN
# 2083 "data/scripts/gym_scripts.pory"
	waitmessage
	goto MossdeepCity_Gym_EventScript_Gym_Solrock_1

MossdeepCity_Gym_EventScript_Gym_Solrock_3:
# 2086 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_Gym_Solrock_Text_2, MSGBOX_NPC
# 2087 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_3, MSGBOX_SIGN
# 2088 "data/scripts/gym_scripts.pory"
	waitmessage
	goto MossdeepCity_Gym_EventScript_Gym_Solrock_1

MossdeepCity_Gym_EventScript_Gym_Solrock_5:
# 2085 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_TATE_AND_LIZA_REMATCH, MossdeepCity_Gym_EventScript_Gym_Solrock_3
	goto MossdeepCity_Gym_EventScript_Gym_Solrock_4

MossdeepCity_Gym_EventScript_Gym_Solrock_8:
# 2079 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TATE_AND_LIZA_REMATCH, MossdeepCity_Gym_EventScript_Gym_Solrock_2
	goto MossdeepCity_Gym_EventScript_Gym_Solrock_6


MossdeepCity_Gym_EventScript_Gym_Lunatone::
# 2100 "data/scripts/gym_scripts.pory"
	lock
# 2101 "data/scripts/gym_scripts.pory"
	faceplayer
# 2102 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_Gym_Lunatone_8
MossdeepCity_Gym_EventScript_Gym_Lunatone_6:
# 2108 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE07_GET, MossdeepCity_Gym_EventScript_Gym_Lunatone_5
MossdeepCity_Gym_EventScript_Gym_Lunatone_4:
# 2114 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_Gym_Lunatone_Text_2, MSGBOX_NPC
# 2115 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_5, MSGBOX_SIGN
# 2116 "data/scripts/gym_scripts.pory"
	waitmessage
MossdeepCity_Gym_EventScript_Gym_Lunatone_1:
# 2118 "data/scripts/gym_scripts.pory"
	release
	end

MossdeepCity_Gym_EventScript_Gym_Lunatone_2:
# 2104 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_Gym_Lunatone_Text_0, MSGBOX_NPC
# 2105 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_Gym_Solrock_Text_1, MSGBOX_SIGN
# 2106 "data/scripts/gym_scripts.pory"
	waitmessage
	goto MossdeepCity_Gym_EventScript_Gym_Lunatone_1

MossdeepCity_Gym_EventScript_Gym_Lunatone_3:
# 2109 "data/scripts/gym_scripts.pory"
	msgbox MossdeepCity_Gym_EventScript_Gym_Lunatone_Text_1, MSGBOX_NPC
# 2110 "data/scripts/gym_scripts.pory"
	msgbox LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_3, MSGBOX_SIGN
# 2111 "data/scripts/gym_scripts.pory"
	waitmessage
	goto MossdeepCity_Gym_EventScript_Gym_Lunatone_1

MossdeepCity_Gym_EventScript_Gym_Lunatone_5:
# 2108 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_TATE_AND_LIZA_REMATCH, MossdeepCity_Gym_EventScript_Gym_Lunatone_3
	goto MossdeepCity_Gym_EventScript_Gym_Lunatone_4

MossdeepCity_Gym_EventScript_Gym_Lunatone_8:
# 2102 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TATE_AND_LIZA_REMATCH, MossdeepCity_Gym_EventScript_Gym_Lunatone_2
	goto MossdeepCity_Gym_EventScript_Gym_Lunatone_6


SootopolisCity_Gym_1F_EventScript_Juan_New::
# 2123 "data/scripts/gym_scripts.pory"
	lock
# 2124 "data/scripts/gym_scripts.pory"
	faceplayer
# 2125 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Juan_New_8
SootopolisCity_Gym_1F_EventScript_Juan_New_6:
# 2145 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Juan_New_5
SootopolisCity_Gym_1F_EventScript_Juan_New_4:
# 2163 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanIntro, MSGBOX_NPC
# 2165 "data/scripts/gym_scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_Juan_Battle_New
# 2168 "data/scripts/gym_scripts.pory"
	message SootopolisCity_Gym_1F_Text_ReceivedRainBadge
# 2169 "data/scripts/gym_scripts.pory"
	waitmessage
# 2170 "data/scripts/gym_scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 2171 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_5, MSGBOX_NPC
# 2172 "data/scripts/gym_scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 2173 "data/scripts/gym_scripts.pory"
	setflag FLAG_BADGE08_GET
# 2176 "data/scripts/gym_scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 2179 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM03_WATER_PULSE
# 2180 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_New_Text_3, MSGBOX_NPC
# 2182 "data/scripts/gym_scripts.pory"
	waitfanfare
# 2183 "data/scripts/gym_scripts.pory"
	closemessage
# 2184 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
# 2187 "data/scripts/gym_scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts
# 2190 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 8
# 2191 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 2194 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_RegisteredJuan, MSGBOX_DEFAULT
# 2195 "data/scripts/gym_scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 2196 "data/scripts/gym_scripts.pory"
	setflag FLAG_ENABLE_JUAN_MATCH_CALL
# 2197 "data/scripts/gym_scripts.pory"
	waitfanfare
# 2198 "data/scripts/gym_scripts.pory"
	closemessage
# 2201 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostBattle, MSGBOX_NPC
# 2202 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 2205 "data/scripts/gym_scripts.pory"
	setflag FLAG_JUAN_REMATCH
SootopolisCity_Gym_1F_EventScript_Juan_New_1:
# 2207 "data/scripts/gym_scripts.pory"
	release
	end

SootopolisCity_Gym_1F_EventScript_Juan_New_2:
# 2128 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPreRematch, MSGBOX_NPC
# 2130 "data/scripts/gym_scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_Juan_Battle_New
# 2133 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_JuanPostRematch, MSGBOX_NPC
# 2134 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 2137 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
# 2138 "data/scripts/gym_scripts.pory"
	call SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts
# 2140 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_New_Text_0, MSGBOX_NPC
# 2143 "data/scripts/gym_scripts.pory"
	setflag FLAG_JUAN_REMATCH
	goto SootopolisCity_Gym_1F_EventScript_Juan_New_1

SootopolisCity_Gym_1F_EventScript_Juan_New_3:
# 2147 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_New_Text_1, MSGBOX_YESNO
# 2148 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Juan_New_11
# 2155 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 8
# 2156 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 2157 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_New_Text_0, MSGBOX_NPC
	goto SootopolisCity_Gym_1F_EventScript_Juan_New_1

SootopolisCity_Gym_1F_EventScript_Juan_New_5:
# 2145 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Juan_New_3
	goto SootopolisCity_Gym_1F_EventScript_Juan_New_4

SootopolisCity_Gym_1F_EventScript_Juan_New_8:
# 2125 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Juan_New_2
	goto SootopolisCity_Gym_1F_EventScript_Juan_New_6

SootopolisCity_Gym_1F_EventScript_Juan_New_11:
# 2149 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 8
# 2150 "data/scripts/gym_scripts.pory"
	call Common_EventScript_ClearGymTrainers
# 2151 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_New_Text_2, MSGBOX_NPC
	goto SootopolisCity_Gym_1F_EventScript_Juan_New_1


SootopolisCity_Gym_1F_EventScript_Juan_Battle_New::
# 2212 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_2
# 2218 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_5
# 2231 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1:
	return

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_2:
# 2214 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_5:
# 2220 "data/scripts/gym_scripts.pory"
	setflag FLAG_SYS_DISABLE_SCALED_TRAINERS
# 2221 "data/scripts/gym_scripts.pory"
	random 5
# 2222 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 2223 "data/scripts/gym_scripts.pory"
	case 0, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_9
# 2224 "data/scripts/gym_scripts.pory"
	case 1, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_10
# 2225 "data/scripts/gym_scripts.pory"
	case 2, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_11
# 2226 "data/scripts/gym_scripts.pory"
	case 3, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_12
# 2227 "data/scripts/gym_scripts.pory"
	case 4, SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_13
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_9:
# 2223 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_1, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_10:
# 2224 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_2, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_11:
# 2225 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_3, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_12:
# 2226 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_4, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1

SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_13:
# 2227 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_JUAN_5, SootopolisCity_Gym_1F_Text_JuanRematchDefeat
	goto SootopolisCity_Gym_1F_EventScript_Juan_Battle_New_1


SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts::
# 2238 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM55_SCALD, 1
# 2239 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_SECOND_TM_BADGES_COUNT
	goto_if_ge SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_3
SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_1:
# 2246 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM94_SURF, 1
# 2247 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_THIRD_TM_BADGES_COUNT
	goto_if_ge SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_8
SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_6:
# 2254 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM98_WATERFALL, 1
# 2255 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_FOURTH_TM_BADGES_COUNT
	goto_if_ge SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_13
SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_11:
# 2262 "data/scripts/gym_scripts.pory"
	checkitem ITEM_TM102_LIQUIDATION, 1
# 2263 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_FIFTH_TM_BADGES_COUNT
	goto_if_ge SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_18
SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_16:
# 2270 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, GYM_MEGA_STONES_BADGES_COUNT
	goto_if_ge SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_25
SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_24:
# 2277 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_23
SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21:
# 2290 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_CheckForAllBadges
	return

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_2:
# 2240 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM55_SCALD
# 2241 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_0, MSGBOX_NPC
# 2242 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_1

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_3:
# 2239 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_2
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_1

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_7:
# 2248 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM94_SURF
# 2249 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_1, MSGBOX_NPC
# 2250 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_6

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_8:
# 2247 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_7
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_6

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_12:
# 2256 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM98_WATERFALL
# 2257 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_2, MSGBOX_NPC
# 2258 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_11

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_13:
# 2255 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_12
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_11

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_17:
# 2264 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TM102_LIQUIDATION
# 2265 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_3, MSGBOX_NPC
# 2266 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_16

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_18:
# 2263 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_17
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_16

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_22:
# 2271 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_4, MSGBOX_NPC
# 2272 "data/scripts/gym_scripts.pory"
	giveitem ITEM_GYARADOSITE
# 2273 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_5, MSGBOX_NPC
# 2274 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_GYARADOS_MEGA_STONE
# 2275 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_23:
# 2279 "data/scripts/gym_scripts.pory"
	random 7
# 2280 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 2281 "data/scripts/gym_scripts.pory"
	case 0, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_29
# 2282 "data/scripts/gym_scripts.pory"
	case 1, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_30
# 2283 "data/scripts/gym_scripts.pory"
	case 2, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_31
# 2284 "data/scripts/gym_scripts.pory"
	case 3, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_32
# 2285 "data/scripts/gym_scripts.pory"
	case 4, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_33
# 2286 "data/scripts/gym_scripts.pory"
	case 5, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_34
# 2287 "data/scripts/gym_scripts.pory"
	case 6, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_35
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_25:
# 2270 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_GYARADOS_MEGA_STONE, SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_22
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_24

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_29:
# 2281 "data/scripts/gym_scripts.pory"
	giveitem ITEM_WATER_GEM, 2
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_30:
# 2282 "data/scripts/gym_scripts.pory"
	giveitem ITEM_WATER_STONE, 2
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_31:
# 2283 "data/scripts/gym_scripts.pory"
	giveitem ITEM_LURE_BALL_SEAL, 2
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_32:
# 2284 "data/scripts/gym_scripts.pory"
	giveitem ITEM_DRAGON_SCALE, 2
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_33:
# 2285 "data/scripts/gym_scripts.pory"
	giveitem ITEM_PRISM_SCALE, 2
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_34:
# 2286 "data/scripts/gym_scripts.pory"
	giveitem ITEM_DAMP_ROCK, 2
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_35:
# 2287 "data/scripts/gym_scripts.pory"
	giveitem ITEM_LUSTROUS_ORB, 2
	goto SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_21


SootopolisCity_Gym_1F_EventScript_GymGuide_New::
# 2294 "data/scripts/gym_scripts.pory"
	lock
# 2295 "data/scripts/gym_scripts.pory"
	faceplayer
# 2296 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, SootopolisCity_Gym_1F_EventScript_GymGuide_New_2
# 2312 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuideAdvice, MSGBOX_NPC
SootopolisCity_Gym_1F_EventScript_GymGuide_New_1:
# 2314 "data/scripts/gym_scripts.pory"
	release
	end

SootopolisCity_Gym_1F_EventScript_GymGuide_New_2:
# 2297 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_GymGuide_New_5
# 2308 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_Text_GymGuidePostVictory, MSGBOX_NPC
	goto SootopolisCity_Gym_1F_EventScript_GymGuide_New_1

SootopolisCity_Gym_1F_EventScript_GymGuide_New_5:
# 2298 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_0, MSGBOX_YESNO
# 2299 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SootopolisCity_Gym_1F_EventScript_GymGuide_New_8
# 2304 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_2, MSGBOX_NPC
	goto SootopolisCity_Gym_1F_EventScript_GymGuide_New_1

SootopolisCity_Gym_1F_EventScript_GymGuide_New_8:
# 2300 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_GymGuide_New_Text_1, MSGBOX_NPC
# 2301 "data/scripts/gym_scripts.pory"
	warp MAP_SOOTOPOLIS_CITY_GYM_1F, 255, 8, 3
	goto SootopolisCity_Gym_1F_EventScript_GymGuide_New_1


SootopolisCity_Gym_1F_EventScript_Gym_Horsea::
# 2319 "data/scripts/gym_scripts.pory"
	lock
# 2320 "data/scripts/gym_scripts.pory"
	faceplayer
# 2321 "data/scripts/gym_scripts.pory"
	switch VAR_GYM_POKEMON_SPECIES
# 2322 "data/scripts/gym_scripts.pory"
	case SPECIES_HORSEA, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_3
# 2340 "data/scripts/gym_scripts.pory"
	case SPECIES_SEADRA, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_4
# 2357 "data/scripts/gym_scripts.pory"
	case SPECIES_KINGDRA, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_5
SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1:
# 2377 "data/scripts/gym_scripts.pory"
	release
	end

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_3:
# 2323 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_12
SootopolisCity_Gym_1F_EventScript_Gym_Horsea_10:
# 2329 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_9
SootopolisCity_Gym_1F_EventScript_Gym_Horsea_8:
# 2336 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_3, MSGBOX_NPC
# 2337 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_4, MSGBOX_SIGN
# 2338 "data/scripts/gym_scripts.pory"
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_4:
# 2341 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_21
SootopolisCity_Gym_1F_EventScript_Gym_Horsea_19:
# 2347 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_18
SootopolisCity_Gym_1F_EventScript_Gym_Horsea_17:
# 2353 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_7, MSGBOX_NPC
# 2354 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_8, MSGBOX_SIGN
# 2355 "data/scripts/gym_scripts.pory"
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_5:
# 2358 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_30
SootopolisCity_Gym_1F_EventScript_Gym_Horsea_28:
# 2364 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_27
SootopolisCity_Gym_1F_EventScript_Gym_Horsea_26:
# 2372 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_11, MSGBOX_NPC
# 2373 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_12, MSGBOX_SIGN
# 2374 "data/scripts/gym_scripts.pory"
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_6:
# 2325 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_0, MSGBOX_NPC
# 2326 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_1, MSGBOX_SIGN
# 2327 "data/scripts/gym_scripts.pory"
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_7:
# 2331 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_2, MSGBOX_NPC
# 2332 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_3, MSGBOX_SIGN
# 2333 "data/scripts/gym_scripts.pory"
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_9:
# 2329 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_7
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_8

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_12:
# 2323 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_6
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_10

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_15:
# 2343 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_5, MSGBOX_NPC
# 2344 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_1, MSGBOX_SIGN
# 2345 "data/scripts/gym_scripts.pory"
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_16:
# 2348 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_6, MSGBOX_NPC
# 2349 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_3, MSGBOX_SIGN
# 2350 "data/scripts/gym_scripts.pory"
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_18:
# 2347 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_16
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_17

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_21:
# 2341 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_15
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_19

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_24:
# 2360 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_9, MSGBOX_NPC
# 2361 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_11, MSGBOX_SIGN
# 2362 "data/scripts/gym_scripts.pory"
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_25:
# 2366 "data/scripts/gym_scripts.pory"
	msgbox SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_10, MSGBOX_NPC
# 2367 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Gym_Aaron_Text_3, MSGBOX_SIGN
# 2368 "data/scripts/gym_scripts.pory"
	waitmessage
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_1

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_27:
# 2364 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_25
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_26

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_30:
# 2358 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_JUAN_REMATCH, SootopolisCity_Gym_1F_EventScript_Gym_Horsea_24
	goto SootopolisCity_Gym_1F_EventScript_Gym_Horsea_28


SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species::
# 2382 "data/scripts/gym_scripts.pory"
	switch VAR_NUM_BADGES
# 2383 "data/scripts/gym_scripts.pory"
	case 0, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_3
# 2384 "data/scripts/gym_scripts.pory"
	case 1, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_4
# 2385 "data/scripts/gym_scripts.pory"
	case 2, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_5
# 2386 "data/scripts/gym_scripts.pory"
	case 3, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_6
# 2387 "data/scripts/gym_scripts.pory"
	case 4, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_7
# 2388 "data/scripts/gym_scripts.pory"
	case 5, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_8
# 2389 "data/scripts/gym_scripts.pory"
	case 6, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_9
# 2390 "data/scripts/gym_scripts.pory"
	case 7, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_10
# 2391 "data/scripts/gym_scripts.pory"
	case 8, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_11
SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1:
# 2394 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_NO_EVOLUTION_MODE, SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_13
SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_12:
	return

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_3:
# 2383 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HORSEA
# 2383 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HORSEA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_4:
# 2384 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HORSEA
# 2384 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HORSEA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_5:
# 2385 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HORSEA
# 2385 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HORSEA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_6:
# 2386 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SEADRA
# 2386 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SEADRA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_7:
# 2387 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_SEADRA
# 2387 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_SEADRA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_8:
# 2388 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_KINGDRA
# 2388 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_KINGDRA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_9:
# 2389 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_KINGDRA
# 2389 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_KINGDRA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_10:
# 2390 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_KINGDRA
# 2390 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_KINGDRA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_11:
# 2391 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_KINGDRA
# 2391 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_KINGDRA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_1

SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_13:
# 2395 "data/scripts/gym_scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_POKEMON_000 + SPECIES_HORSEA
# 2395 "data/scripts/gym_scripts.pory"
	setvar VAR_GYM_POKEMON_SPECIES, SPECIES_HORSEA
	goto SootopolisCity_Gym_1F_EventScript_Set_Gym_Pokemon_Species_12


Common_Eventscript_Gym_Leader_Falkner::
# 2406 "data/scripts/gym_scripts.pory"
	lock
# 2407 "data/scripts/gym_scripts.pory"
	faceplayer
# 2408 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_09, Common_Eventscript_Gym_Leader_Falkner_8
Common_Eventscript_Gym_Leader_Falkner_6:
# 2424 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_09, Common_Eventscript_Gym_Leader_Falkner_5
Common_Eventscript_Gym_Leader_Falkner_4:
# 2442 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Text_5, MSGBOX_NPC
# 2444 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Falkner_Battle_New
# 2446 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Text_6, MSGBOX_NPC
# 2447 "data/scripts/gym_scripts.pory"
	message Common_Eventscript_Gym_Leader_Falkner_Text_7
# 2448 "data/scripts/gym_scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 2449 "data/scripts/gym_scripts.pory"
	waitmessage
# 2450 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_5, MSGBOX_NPC
# 2451 "data/scripts/gym_scripts.pory"
	setflag FLAG_RECEIVED_BADGE_09
# 2452 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
# 2454 "data/scripts/gym_scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 2455 "data/scripts/gym_scripts.pory"
	waitfanfare
# 2456 "data/scripts/gym_scripts.pory"
	closemessage
# 2458 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Falkner_Give_Gifts
# 2459 "data/scripts/gym_scripts.pory"
	setflag FLAG_RECEIVED_BADGE_09
# 2461 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Text_8, MSGBOX_NPC
# 2462 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 2463 "data/scripts/gym_scripts.pory"
	clearflag FLAG_FALKNER_REMATCH
# 2464 "data/scripts/gym_scripts.pory"
	special HealPlayerParty
Common_Eventscript_Gym_Leader_Falkner_1:
# 2466 "data/scripts/gym_scripts.pory"
	release
	end

Common_Eventscript_Gym_Leader_Falkner_2:
# 2411 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Text_0, MSGBOX_NPC
# 2413 "data/scripts/gym_scripts.pory"
	special HealPlayerParty
# 2414 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Falkner_Battle_New
# 2416 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Text_1, MSGBOX_NPC
# 2417 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 2419 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Falkner_Give_Gifts
# 2420 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Text_2, MSGBOX_NPC
# 2422 "data/scripts/gym_scripts.pory"
	setflag FLAG_FALKNER_REMATCH
	goto Common_Eventscript_Gym_Leader_Falkner_1

Common_Eventscript_Gym_Leader_Falkner_3:
# 2426 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Text_3, MSGBOX_YESNO
# 2427 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_Eventscript_Gym_Leader_Falkner_11
# 2434 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 9
# 2435 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 2436 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Text_2, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Falkner_1

Common_Eventscript_Gym_Leader_Falkner_5:
# 2424 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_FALKNER_REMATCH, Common_Eventscript_Gym_Leader_Falkner_3
	goto Common_Eventscript_Gym_Leader_Falkner_4

Common_Eventscript_Gym_Leader_Falkner_8:
# 2408 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_FALKNER_REMATCH, Common_Eventscript_Gym_Leader_Falkner_2
	goto Common_Eventscript_Gym_Leader_Falkner_6

Common_Eventscript_Gym_Leader_Falkner_11:
# 2428 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 9
# 2429 "data/scripts/gym_scripts.pory"
	call Common_EventScript_ClearGymTrainers
# 2430 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Text_4, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Falkner_1


Common_Eventscript_Gym_Leader_Falkner_Give_Gifts::
# 2472 "data/scripts/gym_scripts.pory"
	random 8
# 2474 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_CORVIKNIGHT_MEGA_STONE, Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_3
Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_1:
# 2478 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 2479 "data/scripts/gym_scripts.pory"
	case 0, Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_8
# 2485 "data/scripts/gym_scripts.pory"
	case 1, Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_9
# 2491 "data/scripts/gym_scripts.pory"
	case 2, Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_10
# 2497 "data/scripts/gym_scripts.pory"
	case 3, Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_11
# 2503 "data/scripts/gym_scripts.pory"
	case 4, Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_12
# 2509 "data/scripts/gym_scripts.pory"
	case 5, Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_13
# 2515 "data/scripts/gym_scripts.pory"
	case 6, Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_14
# 2521 "data/scripts/gym_scripts.pory"
	case 7, Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_15
Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_15:
# 2523 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_38
Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_37:
# 2526 "data/scripts/gym_scripts.pory"
	giveitem ITEM_CORVIKNITE, 1
# 2527 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_CORVIKNIGHT_MEGA_STONE
Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_6:
# 2530 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_CheckForAllBadges
	return

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_2:
# 2475 "data/scripts/gym_scripts.pory"
	setvar VAR_RESULT, 7
	goto Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_1

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_3:
# 2474 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, 11
	goto_if_gt Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_2
	goto Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_1

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_8:
# 2480 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_17
Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_16:
# 2483 "data/scripts/gym_scripts.pory"
	giveitem ITEM_COBA_BERRY, 3
	goto Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_6

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_9:
# 2486 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_20
Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_19:
# 2489 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FLYING_GEM, 2
	goto Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_6

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_10:
# 2492 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_23
Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_22:
# 2495 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FLYING_MEMORY, 1
	goto Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_6

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_11:
# 2498 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_26
Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_25:
# 2501 "data/scripts/gym_scripts.pory"
	giveitem ITEM_AIR_BALLOON, 1
	goto Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_6

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_12:
# 2504 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_29
Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_28:
# 2507 "data/scripts/gym_scripts.pory"
	giveitem ITEM_UTILITY_UMBRELLA, 1
	goto Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_6

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_13:
# 2510 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_32
Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_31:
# 2513 "data/scripts/gym_scripts.pory"
	giveitem ITEM_HEAVY_DUTY_BOOTS, 1
	goto Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_6

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_14:
# 2516 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_35
Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_34:
# 2519 "data/scripts/gym_scripts.pory"
	giveitem ITEM_POWER_HERB, 1
	goto Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_6

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_17:
# 2481 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_16

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_20:
# 2487 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_19

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_23:
# 2493 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_22

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_26:
# 2499 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_25

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_29:
# 2505 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_28

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_32:
# 2511 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_31

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_35:
# 2517 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_34

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_38:
# 2524 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_37


Common_Eventscript_Gym_Leader_Falkner_Battle_New::
# 2536 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_RECEIVED_BADGE_09, Common_Eventscript_Gym_Leader_Falkner_Battle_New_2
# 2542 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_Eventscript_Gym_Leader_Falkner_Battle_New_5
# 2548 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_FALKNER, Common_Eventscript_Gym_Leader_Falkner_Battle_New_Text_2
Common_Eventscript_Gym_Leader_Falkner_Battle_New_1:
	return

Common_Eventscript_Gym_Leader_Falkner_Battle_New_2:
# 2538 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_FALKNER, Common_Eventscript_Gym_Leader_Falkner_Battle_New_Text_0
	goto Common_Eventscript_Gym_Leader_Falkner_Battle_New_1

Common_Eventscript_Gym_Leader_Falkner_Battle_New_5:
# 2545 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_FALKNER, Common_Eventscript_Gym_Leader_Falkner_Battle_New_Text_1
	goto Common_Eventscript_Gym_Leader_Falkner_Battle_New_1


Common_Eventscript_Gym_Leader_Bugsy::
# 2557 "data/scripts/gym_scripts.pory"
	lock
# 2558 "data/scripts/gym_scripts.pory"
	faceplayer
# 2559 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_10, Common_Eventscript_Gym_Leader_Bugsy_8
Common_Eventscript_Gym_Leader_Bugsy_6:
# 2575 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_10, Common_Eventscript_Gym_Leader_Bugsy_5
Common_Eventscript_Gym_Leader_Bugsy_4:
# 2593 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Bugsy_Text_5, MSGBOX_NPC
# 2595 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Bugsy_Battle_New
# 2597 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Bugsy_Text_6, MSGBOX_NPC
# 2598 "data/scripts/gym_scripts.pory"
	message Common_Eventscript_Gym_Leader_Bugsy_Text_7
# 2599 "data/scripts/gym_scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 2600 "data/scripts/gym_scripts.pory"
	waitmessage
# 2601 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_5, MSGBOX_NPC
# 2602 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
# 2603 "data/scripts/gym_scripts.pory"
	setflag FLAG_RECEIVED_BADGE_10
# 2605 "data/scripts/gym_scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 2606 "data/scripts/gym_scripts.pory"
	waitfanfare
# 2607 "data/scripts/gym_scripts.pory"
	closemessage
# 2609 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts
# 2611 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Bugsy_Text_8, MSGBOX_NPC
# 2612 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 2613 "data/scripts/gym_scripts.pory"
	clearflag FLAG_BUGSY_REMATCH
# 2614 "data/scripts/gym_scripts.pory"
	special HealPlayerParty
Common_Eventscript_Gym_Leader_Bugsy_1:
# 2616 "data/scripts/gym_scripts.pory"
	release
	end

Common_Eventscript_Gym_Leader_Bugsy_2:
# 2562 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Bugsy_Text_0, MSGBOX_NPC
# 2564 "data/scripts/gym_scripts.pory"
	special HealPlayerParty
# 2565 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Bugsy_Battle_New
# 2567 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Bugsy_Text_1, MSGBOX_NPC
# 2568 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 2570 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts
# 2571 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Bugsy_Text_2, MSGBOX_NPC
# 2573 "data/scripts/gym_scripts.pory"
	setflag FLAG_BUGSY_REMATCH
	goto Common_Eventscript_Gym_Leader_Bugsy_1

Common_Eventscript_Gym_Leader_Bugsy_3:
# 2577 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Bugsy_Text_3, MSGBOX_YESNO
# 2578 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_Eventscript_Gym_Leader_Bugsy_11
# 2585 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 10
# 2586 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 2587 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Bugsy_Text_2, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Bugsy_1

Common_Eventscript_Gym_Leader_Bugsy_5:
# 2575 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BUGSY_REMATCH, Common_Eventscript_Gym_Leader_Bugsy_3
	goto Common_Eventscript_Gym_Leader_Bugsy_4

Common_Eventscript_Gym_Leader_Bugsy_8:
# 2559 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_BUGSY_REMATCH, Common_Eventscript_Gym_Leader_Bugsy_2
	goto Common_Eventscript_Gym_Leader_Bugsy_6

Common_Eventscript_Gym_Leader_Bugsy_11:
# 2579 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 10
# 2580 "data/scripts/gym_scripts.pory"
	call Common_EventScript_ClearGymTrainers
# 2581 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Bugsy_Text_4, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Bugsy_1


Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts::
# 2622 "data/scripts/gym_scripts.pory"
	random 8
# 2624 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_BUTTERFREE_MEGA_STONE, Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_3
Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_1:
# 2628 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 2629 "data/scripts/gym_scripts.pory"
	case 0, Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_8
# 2635 "data/scripts/gym_scripts.pory"
	case 1, Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_9
# 2641 "data/scripts/gym_scripts.pory"
	case 2, Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_10
# 2647 "data/scripts/gym_scripts.pory"
	case 3, Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_11
# 2653 "data/scripts/gym_scripts.pory"
	case 4, Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_12
# 2659 "data/scripts/gym_scripts.pory"
	case 5, Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_13
# 2665 "data/scripts/gym_scripts.pory"
	case 6, Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_14
# 2671 "data/scripts/gym_scripts.pory"
	case 7, Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_15
Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_15:
# 2673 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_38
Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_37:
# 2676 "data/scripts/gym_scripts.pory"
	giveitem ITEM_BUTTERFRITE, 1
# 2677 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_BUTTERFREE_MEGA_STONE
Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_6:
# 2680 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_CheckForAllBadges
	return

Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_2:
# 2625 "data/scripts/gym_scripts.pory"
	setvar VAR_RESULT, 7
	goto Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_1

Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_3:
# 2624 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, 11
	goto_if_gt Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_2
	goto Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_1

Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_8:
# 2630 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_17
Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_16:
# 2633 "data/scripts/gym_scripts.pory"
	giveitem ITEM_TANGA_BERRY, 3
	goto Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_6

Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_9:
# 2636 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_20
Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_19:
# 2639 "data/scripts/gym_scripts.pory"
	giveitem ITEM_BUG_GEM, 2
	goto Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_6

Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_10:
# 2642 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_23
Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_22:
# 2645 "data/scripts/gym_scripts.pory"
	giveitem ITEM_BUG_MEMORY, 1
	goto Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_6

Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_11:
# 2648 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_26
Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_25:
# 2651 "data/scripts/gym_scripts.pory"
	giveitem ITEM_NET_BALL, 5
	goto Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_6

Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_12:
# 2654 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_29
Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_28:
# 2657 "data/scripts/gym_scripts.pory"
	giveitem ITEM_HONEY, 3
	goto Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_6

Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_13:
# 2660 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_32
Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_31:
# 2663 "data/scripts/gym_scripts.pory"
	giveitem ITEM_SHED_SHELL, 1
	goto Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_6

Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_14:
# 2666 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_35
Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_34:
# 2669 "data/scripts/gym_scripts.pory"
	giveitem ITEM_GRIP_CLAW, 1
	goto Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_6

Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_17:
# 2631 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_16

Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_20:
# 2637 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_19

Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_23:
# 2643 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_22

Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_26:
# 2649 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_25

Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_29:
# 2655 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_28

Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_32:
# 2661 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_31

Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_35:
# 2667 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_34

Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_38:
# 2674 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Bugsy_Give_Gifts_37


Common_Eventscript_Gym_Leader_Bugsy_Battle_New::
# 2686 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_RECEIVED_BADGE_10, Common_Eventscript_Gym_Leader_Bugsy_Battle_New_2
# 2692 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_Eventscript_Gym_Leader_Bugsy_Battle_New_5
# 2698 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_BUGSY, Common_Eventscript_Gym_Leader_Bugsy_Battle_New_Text_2
Common_Eventscript_Gym_Leader_Bugsy_Battle_New_1:
	return

Common_Eventscript_Gym_Leader_Bugsy_Battle_New_2:
# 2688 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_BUGSY, Common_Eventscript_Gym_Leader_Bugsy_Battle_New_Text_0
	goto Common_Eventscript_Gym_Leader_Bugsy_Battle_New_1

Common_Eventscript_Gym_Leader_Bugsy_Battle_New_5:
# 2695 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_BUGSY, Common_Eventscript_Gym_Leader_Bugsy_Battle_New_Text_1
	goto Common_Eventscript_Gym_Leader_Bugsy_Battle_New_1


Common_Eventscript_Gym_Leader_Whitney::
# 2707 "data/scripts/gym_scripts.pory"
	lock
# 2708 "data/scripts/gym_scripts.pory"
	faceplayer
# 2709 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_11, Common_Eventscript_Gym_Leader_Whitney_8
Common_Eventscript_Gym_Leader_Whitney_6:
# 2725 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_11, Common_Eventscript_Gym_Leader_Whitney_5
Common_Eventscript_Gym_Leader_Whitney_4:
# 2743 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Whitney_Text_5, MSGBOX_NPC
# 2745 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Whitney_Battle_New
# 2747 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Whitney_Text_6, MSGBOX_NPC
# 2748 "data/scripts/gym_scripts.pory"
	message Common_Eventscript_Gym_Leader_Whitney_Text_7
# 2749 "data/scripts/gym_scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 2750 "data/scripts/gym_scripts.pory"
	waitmessage
# 2751 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_5, MSGBOX_NPC
# 2752 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
# 2753 "data/scripts/gym_scripts.pory"
	setflag FLAG_RECEIVED_BADGE_11
# 2755 "data/scripts/gym_scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 2756 "data/scripts/gym_scripts.pory"
	waitfanfare
# 2757 "data/scripts/gym_scripts.pory"
	closemessage
# 2759 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Whitney_Give_Gifts
# 2761 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Whitney_Text_8, MSGBOX_NPC
# 2762 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 2763 "data/scripts/gym_scripts.pory"
	clearflag FLAG_WHITNEY_REMATCH
# 2764 "data/scripts/gym_scripts.pory"
	special HealPlayerParty
Common_Eventscript_Gym_Leader_Whitney_1:
# 2766 "data/scripts/gym_scripts.pory"
	release
	end

Common_Eventscript_Gym_Leader_Whitney_2:
# 2712 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Whitney_Text_0, MSGBOX_NPC
# 2714 "data/scripts/gym_scripts.pory"
	special HealPlayerParty
# 2715 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Whitney_Battle_New
# 2717 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Whitney_Text_1, MSGBOX_NPC
# 2718 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 2720 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Whitney_Give_Gifts
# 2721 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Whitney_Text_2, MSGBOX_NPC
# 2723 "data/scripts/gym_scripts.pory"
	setflag FLAG_WHITNEY_REMATCH
	goto Common_Eventscript_Gym_Leader_Whitney_1

Common_Eventscript_Gym_Leader_Whitney_3:
# 2727 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Whitney_Text_3, MSGBOX_YESNO
# 2728 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_Eventscript_Gym_Leader_Whitney_11
# 2735 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 11
# 2736 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 2737 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Whitney_Text_2, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Whitney_1

Common_Eventscript_Gym_Leader_Whitney_5:
# 2725 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_WHITNEY_REMATCH, Common_Eventscript_Gym_Leader_Whitney_3
	goto Common_Eventscript_Gym_Leader_Whitney_4

Common_Eventscript_Gym_Leader_Whitney_8:
# 2709 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_WHITNEY_REMATCH, Common_Eventscript_Gym_Leader_Whitney_2
	goto Common_Eventscript_Gym_Leader_Whitney_6

Common_Eventscript_Gym_Leader_Whitney_11:
# 2729 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 11
# 2730 "data/scripts/gym_scripts.pory"
	call Common_EventScript_ClearGymTrainers
# 2731 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Whitney_Text_4, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Whitney_1


Common_Eventscript_Gym_Leader_Whitney_Give_Gifts::
# 2772 "data/scripts/gym_scripts.pory"
	random 8
# 2774 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_SNORLAX_MEGA_STONE, Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_3
Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_1:
# 2778 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 2779 "data/scripts/gym_scripts.pory"
	case 0, Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_8
# 2785 "data/scripts/gym_scripts.pory"
	case 1, Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_9
# 2791 "data/scripts/gym_scripts.pory"
	case 2, Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_10
# 2797 "data/scripts/gym_scripts.pory"
	case 3, Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_11
# 2803 "data/scripts/gym_scripts.pory"
	case 4, Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_12
# 2809 "data/scripts/gym_scripts.pory"
	case 5, Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_13
# 2815 "data/scripts/gym_scripts.pory"
	case 6, Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_14
# 2821 "data/scripts/gym_scripts.pory"
	case 7, Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_15
Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_15:
# 2823 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_38
Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_37:
# 2826 "data/scripts/gym_scripts.pory"
	giveitem ITEM_SNORLAXITE, 1
# 2827 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_SNORLAX_MEGA_STONE
Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_6:
# 2830 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_CheckForAllBadges
	return

Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_2:
# 2775 "data/scripts/gym_scripts.pory"
	setvar VAR_RESULT, 7
	goto Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_1

Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_3:
# 2774 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, 11
	goto_if_gt Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_2
	goto Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_1

Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_8:
# 2780 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_17
Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_16:
# 2783 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FAIRY_GEM, 2
	goto Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_6

Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_9:
# 2786 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_20
Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_19:
# 2789 "data/scripts/gym_scripts.pory"
	giveitem ITEM_NORMAL_GEM, 2
	goto Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_6

Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_10:
# 2792 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_23
Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_22:
# 2795 "data/scripts/gym_scripts.pory"
	giveitem ITEM_SILK_SCARF, 1
	goto Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_6

Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_11:
# 2798 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_26
Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_25:
# 2801 "data/scripts/gym_scripts.pory"
	giveitem ITEM_ROSELI_BERRY, 3
	goto Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_6

Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_12:
# 2804 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_29
Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_28:
# 2807 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FAIRY_MEMORY, 1
	goto Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_6

Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_13:
# 2810 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_32
Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_31:
# 2813 "data/scripts/gym_scripts.pory"
	giveitem ITEM_CHILAN_BERRY, 3
	goto Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_6

Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_14:
# 2816 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_35
Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_34:
# 2819 "data/scripts/gym_scripts.pory"
	giveitem ITEM_SAFETY_GOGGLES, 1
	goto Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_6

Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_17:
# 2781 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_16

Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_20:
# 2787 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_19

Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_23:
# 2793 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_22

Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_26:
# 2799 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_25

Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_29:
# 2805 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_28

Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_32:
# 2811 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_31

Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_35:
# 2817 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_34

Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_38:
# 2824 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Whitney_Give_Gifts_37


Common_Eventscript_Gym_Leader_Whitney_Battle_New::
# 2836 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_RECEIVED_BADGE_11, Common_Eventscript_Gym_Leader_Whitney_Battle_New_2
# 2842 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_Eventscript_Gym_Leader_Whitney_Battle_New_5
# 2848 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_WHITNEY, Common_Eventscript_Gym_Leader_Whitney_Battle_New_Text_2
Common_Eventscript_Gym_Leader_Whitney_Battle_New_1:
	return

Common_Eventscript_Gym_Leader_Whitney_Battle_New_2:
# 2838 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_WHITNEY, Common_Eventscript_Gym_Leader_Whitney_Battle_New_Text_0
	goto Common_Eventscript_Gym_Leader_Whitney_Battle_New_1

Common_Eventscript_Gym_Leader_Whitney_Battle_New_5:
# 2845 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_WHITNEY, Common_Eventscript_Gym_Leader_Whitney_Battle_New_Text_1
	goto Common_Eventscript_Gym_Leader_Whitney_Battle_New_1


Common_Eventscript_Gym_Leader_Morty::
# 2857 "data/scripts/gym_scripts.pory"
	lock
# 2858 "data/scripts/gym_scripts.pory"
	faceplayer
# 2859 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_12, Common_Eventscript_Gym_Leader_Morty_8
Common_Eventscript_Gym_Leader_Morty_6:
# 2875 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_12, Common_Eventscript_Gym_Leader_Morty_5
Common_Eventscript_Gym_Leader_Morty_4:
# 2893 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Morty_Text_5, MSGBOX_NPC
# 2895 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Morty_Battle_New
# 2897 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Morty_Text_6, MSGBOX_NPC
# 2898 "data/scripts/gym_scripts.pory"
	message Common_Eventscript_Gym_Leader_Morty_Text_7
# 2899 "data/scripts/gym_scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 2900 "data/scripts/gym_scripts.pory"
	waitmessage
# 2901 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_5, MSGBOX_NPC
# 2902 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
# 2903 "data/scripts/gym_scripts.pory"
	setflag FLAG_RECEIVED_BADGE_12
# 2905 "data/scripts/gym_scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 2906 "data/scripts/gym_scripts.pory"
	waitfanfare
# 2907 "data/scripts/gym_scripts.pory"
	closemessage
# 2909 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Morty_Give_Gifts
# 2911 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Morty_Text_8, MSGBOX_NPC
# 2912 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 2913 "data/scripts/gym_scripts.pory"
	clearflag FLAG_MORTY_REMATCH
# 2914 "data/scripts/gym_scripts.pory"
	special HealPlayerParty
Common_Eventscript_Gym_Leader_Morty_1:
# 2916 "data/scripts/gym_scripts.pory"
	release
	end

Common_Eventscript_Gym_Leader_Morty_2:
# 2862 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Morty_Text_0, MSGBOX_NPC
# 2864 "data/scripts/gym_scripts.pory"
	special HealPlayerParty
# 2865 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Morty_Battle_New
# 2867 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Morty_Text_1, MSGBOX_NPC
# 2868 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 2870 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Morty_Give_Gifts
# 2871 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Morty_Text_2, MSGBOX_NPC
# 2873 "data/scripts/gym_scripts.pory"
	setflag FLAG_MORTY_REMATCH
	goto Common_Eventscript_Gym_Leader_Morty_1

Common_Eventscript_Gym_Leader_Morty_3:
# 2877 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Morty_Text_3, MSGBOX_YESNO
# 2878 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_Eventscript_Gym_Leader_Morty_11
# 2885 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 12
# 2886 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 2887 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Morty_Text_2, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Morty_1

Common_Eventscript_Gym_Leader_Morty_5:
# 2875 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_MORTY_REMATCH, Common_Eventscript_Gym_Leader_Morty_3
	goto Common_Eventscript_Gym_Leader_Morty_4

Common_Eventscript_Gym_Leader_Morty_8:
# 2859 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_MORTY_REMATCH, Common_Eventscript_Gym_Leader_Morty_2
	goto Common_Eventscript_Gym_Leader_Morty_6

Common_Eventscript_Gym_Leader_Morty_11:
# 2879 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 12
# 2880 "data/scripts/gym_scripts.pory"
	call Common_EventScript_ClearGymTrainers
# 2881 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Morty_Text_4, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Morty_1


Common_Eventscript_Gym_Leader_Morty_Give_Gifts::
# 2922 "data/scripts/gym_scripts.pory"
	random 8
# 2924 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_GENGAR_MEGA_STONE, Common_Eventscript_Gym_Leader_Morty_Give_Gifts_3
Common_Eventscript_Gym_Leader_Morty_Give_Gifts_1:
# 2928 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 2929 "data/scripts/gym_scripts.pory"
	case 0, Common_Eventscript_Gym_Leader_Morty_Give_Gifts_8
# 2935 "data/scripts/gym_scripts.pory"
	case 1, Common_Eventscript_Gym_Leader_Morty_Give_Gifts_9
# 2941 "data/scripts/gym_scripts.pory"
	case 2, Common_Eventscript_Gym_Leader_Morty_Give_Gifts_10
# 2947 "data/scripts/gym_scripts.pory"
	case 3, Common_Eventscript_Gym_Leader_Morty_Give_Gifts_11
# 2953 "data/scripts/gym_scripts.pory"
	case 4, Common_Eventscript_Gym_Leader_Morty_Give_Gifts_12
# 2959 "data/scripts/gym_scripts.pory"
	case 5, Common_Eventscript_Gym_Leader_Morty_Give_Gifts_13
# 2965 "data/scripts/gym_scripts.pory"
	case 6, Common_Eventscript_Gym_Leader_Morty_Give_Gifts_14
# 2971 "data/scripts/gym_scripts.pory"
	case 7, Common_Eventscript_Gym_Leader_Morty_Give_Gifts_15
Common_Eventscript_Gym_Leader_Morty_Give_Gifts_15:
# 2973 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Morty_Give_Gifts_38
Common_Eventscript_Gym_Leader_Morty_Give_Gifts_37:
# 2976 "data/scripts/gym_scripts.pory"
	giveitem ITEM_GENGARITE, 1
# 2977 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_GENGAR_MEGA_STONE
Common_Eventscript_Gym_Leader_Morty_Give_Gifts_6:
# 2980 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_CheckForAllBadges
	return

Common_Eventscript_Gym_Leader_Morty_Give_Gifts_2:
# 2925 "data/scripts/gym_scripts.pory"
	setvar VAR_RESULT, 7
	goto Common_Eventscript_Gym_Leader_Morty_Give_Gifts_1

Common_Eventscript_Gym_Leader_Morty_Give_Gifts_3:
# 2924 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, 11
	goto_if_gt Common_Eventscript_Gym_Leader_Morty_Give_Gifts_2
	goto Common_Eventscript_Gym_Leader_Morty_Give_Gifts_1

Common_Eventscript_Gym_Leader_Morty_Give_Gifts_8:
# 2930 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Morty_Give_Gifts_17
Common_Eventscript_Gym_Leader_Morty_Give_Gifts_16:
# 2933 "data/scripts/gym_scripts.pory"
	giveitem ITEM_GHOST_GEM, 2
	goto Common_Eventscript_Gym_Leader_Morty_Give_Gifts_6

Common_Eventscript_Gym_Leader_Morty_Give_Gifts_9:
# 2936 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Morty_Give_Gifts_20
Common_Eventscript_Gym_Leader_Morty_Give_Gifts_19:
# 2939 "data/scripts/gym_scripts.pory"
	giveitem ITEM_CLEANSE_TAG, 2
	goto Common_Eventscript_Gym_Leader_Morty_Give_Gifts_6

Common_Eventscript_Gym_Leader_Morty_Give_Gifts_10:
# 2942 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Morty_Give_Gifts_23
Common_Eventscript_Gym_Leader_Morty_Give_Gifts_22:
# 2945 "data/scripts/gym_scripts.pory"
	giveitem ITEM_SPELL_TAG, 1
	goto Common_Eventscript_Gym_Leader_Morty_Give_Gifts_6

Common_Eventscript_Gym_Leader_Morty_Give_Gifts_11:
# 2948 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Morty_Give_Gifts_26
Common_Eventscript_Gym_Leader_Morty_Give_Gifts_25:
# 2951 "data/scripts/gym_scripts.pory"
	giveitem ITEM_KASIB_BERRY, 3
	goto Common_Eventscript_Gym_Leader_Morty_Give_Gifts_6

Common_Eventscript_Gym_Leader_Morty_Give_Gifts_12:
# 2954 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Morty_Give_Gifts_29
Common_Eventscript_Gym_Leader_Morty_Give_Gifts_28:
# 2957 "data/scripts/gym_scripts.pory"
	giveitem ITEM_GHOST_MEMORY, 1
	goto Common_Eventscript_Gym_Leader_Morty_Give_Gifts_6

Common_Eventscript_Gym_Leader_Morty_Give_Gifts_13:
# 2960 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Morty_Give_Gifts_32
Common_Eventscript_Gym_Leader_Morty_Give_Gifts_31:
# 2963 "data/scripts/gym_scripts.pory"
	giveitem ITEM_ODD_INCENSE, 1
	goto Common_Eventscript_Gym_Leader_Morty_Give_Gifts_6

Common_Eventscript_Gym_Leader_Morty_Give_Gifts_14:
# 2966 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Morty_Give_Gifts_35
Common_Eventscript_Gym_Leader_Morty_Give_Gifts_34:
# 2969 "data/scripts/gym_scripts.pory"
	giveitem ITEM_DUSK_BALL, 5
	goto Common_Eventscript_Gym_Leader_Morty_Give_Gifts_6

Common_Eventscript_Gym_Leader_Morty_Give_Gifts_17:
# 2931 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Morty_Give_Gifts_16

Common_Eventscript_Gym_Leader_Morty_Give_Gifts_20:
# 2937 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Morty_Give_Gifts_19

Common_Eventscript_Gym_Leader_Morty_Give_Gifts_23:
# 2943 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Morty_Give_Gifts_22

Common_Eventscript_Gym_Leader_Morty_Give_Gifts_26:
# 2949 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Morty_Give_Gifts_25

Common_Eventscript_Gym_Leader_Morty_Give_Gifts_29:
# 2955 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Morty_Give_Gifts_28

Common_Eventscript_Gym_Leader_Morty_Give_Gifts_32:
# 2961 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Morty_Give_Gifts_31

Common_Eventscript_Gym_Leader_Morty_Give_Gifts_35:
# 2967 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Morty_Give_Gifts_34

Common_Eventscript_Gym_Leader_Morty_Give_Gifts_38:
# 2974 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Morty_Give_Gifts_37


Common_Eventscript_Gym_Leader_Morty_Battle_New::
# 2986 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_RECEIVED_BADGE_12, Common_Eventscript_Gym_Leader_Morty_Battle_New_2
# 2992 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_Eventscript_Gym_Leader_Morty_Battle_New_5
# 2998 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_MORTY, Common_Eventscript_Gym_Leader_Morty_Battle_New_Text_0
Common_Eventscript_Gym_Leader_Morty_Battle_New_1:
	return

Common_Eventscript_Gym_Leader_Morty_Battle_New_2:
# 2988 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_MORTY, Common_Eventscript_Gym_Leader_Morty_Battle_New_Text_0
	goto Common_Eventscript_Gym_Leader_Morty_Battle_New_1

Common_Eventscript_Gym_Leader_Morty_Battle_New_5:
# 2995 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_MORTY, Common_Eventscript_Gym_Leader_Morty_Battle_New_Text_1
	goto Common_Eventscript_Gym_Leader_Morty_Battle_New_1


Common_Eventscript_Gym_Leader_Chuck::
# 3007 "data/scripts/gym_scripts.pory"
	lock
# 3008 "data/scripts/gym_scripts.pory"
	faceplayer
# 3009 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_13, Common_Eventscript_Gym_Leader_Chuck_8
Common_Eventscript_Gym_Leader_Chuck_6:
# 3025 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_13, Common_Eventscript_Gym_Leader_Chuck_5
Common_Eventscript_Gym_Leader_Chuck_4:
# 3043 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Chuck_Text_5, MSGBOX_NPC
# 3045 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Chuck_Battle_New
# 3047 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Chuck_Text_6, MSGBOX_NPC
# 3048 "data/scripts/gym_scripts.pory"
	message Common_Eventscript_Gym_Leader_Chuck_Text_7
# 3049 "data/scripts/gym_scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 3050 "data/scripts/gym_scripts.pory"
	waitmessage
# 3051 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_5, MSGBOX_NPC
# 3052 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
# 3053 "data/scripts/gym_scripts.pory"
	setflag FLAG_RECEIVED_BADGE_13
# 3055 "data/scripts/gym_scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 3056 "data/scripts/gym_scripts.pory"
	waitfanfare
# 3057 "data/scripts/gym_scripts.pory"
	closemessage
# 3059 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Chuck_Give_Gifts
# 3061 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Chuck_Text_8, MSGBOX_NPC
# 3062 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 3063 "data/scripts/gym_scripts.pory"
	clearflag FLAG_CHUCK_REMATCH
# 3064 "data/scripts/gym_scripts.pory"
	special HealPlayerParty
Common_Eventscript_Gym_Leader_Chuck_1:
# 3066 "data/scripts/gym_scripts.pory"
	release
	end

Common_Eventscript_Gym_Leader_Chuck_2:
# 3012 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Chuck_Text_0, MSGBOX_NPC
# 3014 "data/scripts/gym_scripts.pory"
	special HealPlayerParty
# 3015 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Chuck_Battle_New
# 3017 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Chuck_Text_1, MSGBOX_NPC
# 3018 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 3020 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Chuck_Give_Gifts
# 3021 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Chuck_Text_2, MSGBOX_NPC
# 3023 "data/scripts/gym_scripts.pory"
	setflag FLAG_CHUCK_REMATCH
	goto Common_Eventscript_Gym_Leader_Chuck_1

Common_Eventscript_Gym_Leader_Chuck_3:
# 3027 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Chuck_Text_3, MSGBOX_YESNO
# 3028 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_Eventscript_Gym_Leader_Chuck_11
# 3035 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 13
# 3036 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 3037 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Chuck_Text_2, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Chuck_1

Common_Eventscript_Gym_Leader_Chuck_5:
# 3025 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_CHUCK_REMATCH, Common_Eventscript_Gym_Leader_Chuck_3
	goto Common_Eventscript_Gym_Leader_Chuck_4

Common_Eventscript_Gym_Leader_Chuck_8:
# 3009 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_CHUCK_REMATCH, Common_Eventscript_Gym_Leader_Chuck_2
	goto Common_Eventscript_Gym_Leader_Chuck_6

Common_Eventscript_Gym_Leader_Chuck_11:
# 3029 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 13
# 3030 "data/scripts/gym_scripts.pory"
	call Common_EventScript_ClearGymTrainers
# 3031 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Chuck_Text_4, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Chuck_1


Common_Eventscript_Gym_Leader_Chuck_Give_Gifts::
# 3072 "data/scripts/gym_scripts.pory"
	random 8
# 3074 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_MACHAMP_MEGA_STONE, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_3
Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_1:
# 3078 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 3079 "data/scripts/gym_scripts.pory"
	case 0, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_8
# 3085 "data/scripts/gym_scripts.pory"
	case 1, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_9
# 3091 "data/scripts/gym_scripts.pory"
	case 2, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_10
# 3097 "data/scripts/gym_scripts.pory"
	case 3, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_11
# 3103 "data/scripts/gym_scripts.pory"
	case 4, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_12
# 3109 "data/scripts/gym_scripts.pory"
	case 5, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_13
# 3115 "data/scripts/gym_scripts.pory"
	case 6, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_14
# 3122 "data/scripts/gym_scripts.pory"
	case 7, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_15
Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_15:
# 3123 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_41
Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_40:
# 3126 "data/scripts/gym_scripts.pory"
	giveitem ITEM_MACHAMPITE, 1
# 3127 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_MACHAMP_MEGA_STONE
Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_6:
# 3130 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_CheckForAllBadges
	return

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_2:
# 3075 "data/scripts/gym_scripts.pory"
	setvar VAR_RESULT, 7
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_1

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_3:
# 3074 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, 11
	goto_if_gt Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_2
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_1

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_8:
# 3080 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_17
Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_16:
# 3083 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FIGHTING_GEM, 2
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_6

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_9:
# 3086 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_20
Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_19:
# 3089 "data/scripts/gym_scripts.pory"
	giveitem ITEM_CHOPLE_BERRY, 3
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_6

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_10:
# 3092 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_23
Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_22:
# 3095 "data/scripts/gym_scripts.pory"
	giveitem ITEM_BLACK_BELT, 1
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_6

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_11:
# 3098 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_26
Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_25:
# 3101 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FOCUS_SASH, 1
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_6

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_12:
# 3104 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_29
Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_28:
# 3107 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FIGHTING_MEMORY, 1
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_6

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_13:
# 3110 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_32
Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_31:
# 3113 "data/scripts/gym_scripts.pory"
	giveitem ITEM_CHOICE_BAND, 1
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_6

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_14:
# 3116 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_35
Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_34:
# 3119 "data/scripts/gym_scripts.pory"
	giveitem ITEM_EXPERT_BELT, 1
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_6

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_17:
# 3081 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_16

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_20:
# 3087 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_19

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_23:
# 3093 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_22

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_26:
# 3099 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_25

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_29:
# 3105 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_28

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_32:
# 3111 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_31

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_35:
# 3117 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_34

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_37:
# 3126 "data/scripts/gym_scripts.pory"
	giveitem ITEM_MACHAMPITE, 1
# 3127 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_MACHAMP_MEGA_STONE
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_6

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_38:
# 3124 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_37

# 3123 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_38
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_37

Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_41:
# 3124 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Chuck_Give_Gifts_40


Common_Eventscript_Gym_Leader_Chuck_Battle_New::
# 3136 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_RECEIVED_BADGE_13, Common_Eventscript_Gym_Leader_Chuck_Battle_New_2
# 3142 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_Eventscript_Gym_Leader_Chuck_Battle_New_5
# 3148 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_CHUCK, Common_Eventscript_Gym_Leader_Chuck_Battle_New_Text_1
Common_Eventscript_Gym_Leader_Chuck_Battle_New_1:
	return

Common_Eventscript_Gym_Leader_Chuck_Battle_New_2:
# 3138 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_CHUCK, Common_Eventscript_Gym_Leader_Chuck_Battle_New_Text_0
	goto Common_Eventscript_Gym_Leader_Chuck_Battle_New_1

Common_Eventscript_Gym_Leader_Chuck_Battle_New_5:
# 3145 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_CHUCK, Common_Eventscript_Gym_Leader_Chuck_Battle_New_Text_1
	goto Common_Eventscript_Gym_Leader_Chuck_Battle_New_1


Common_Eventscript_Gym_Leader_Jasmine::
# 3157 "data/scripts/gym_scripts.pory"
	lock
# 3158 "data/scripts/gym_scripts.pory"
	faceplayer
# 3159 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_14, Common_Eventscript_Gym_Leader_Jasmine_8
Common_Eventscript_Gym_Leader_Jasmine_6:
# 3175 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_14, Common_Eventscript_Gym_Leader_Jasmine_5
Common_Eventscript_Gym_Leader_Jasmine_4:
# 3193 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Jasmine_Text_5, MSGBOX_NPC
# 3195 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Jasmine_Battle_New
# 3197 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Jasmine_Text_6, MSGBOX_NPC
# 3198 "data/scripts/gym_scripts.pory"
	message Common_Eventscript_Gym_Leader_Jasmine_Text_7
# 3199 "data/scripts/gym_scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 3200 "data/scripts/gym_scripts.pory"
	waitmessage
# 3201 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_5, MSGBOX_NPC
# 3202 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
# 3203 "data/scripts/gym_scripts.pory"
	setflag FLAG_RECEIVED_BADGE_14
# 3205 "data/scripts/gym_scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 3206 "data/scripts/gym_scripts.pory"
	waitfanfare
# 3207 "data/scripts/gym_scripts.pory"
	closemessage
# 3209 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts
# 3211 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Jasmine_Text_8, MSGBOX_NPC
# 3212 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 3213 "data/scripts/gym_scripts.pory"
	clearflag FLAG_JASMINE_REMATCH
# 3214 "data/scripts/gym_scripts.pory"
	special HealPlayerParty
Common_Eventscript_Gym_Leader_Jasmine_1:
# 3216 "data/scripts/gym_scripts.pory"
	release
	end

Common_Eventscript_Gym_Leader_Jasmine_2:
# 3162 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Jasmine_Text_0, MSGBOX_NPC
# 3164 "data/scripts/gym_scripts.pory"
	special HealPlayerParty
# 3165 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Jasmine_Battle_New
# 3167 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Jasmine_Text_1, MSGBOX_NPC
# 3168 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 3170 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts
# 3171 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Jasmine_Text_2, MSGBOX_NPC
# 3173 "data/scripts/gym_scripts.pory"
	setflag FLAG_JASMINE_REMATCH
	goto Common_Eventscript_Gym_Leader_Jasmine_1

Common_Eventscript_Gym_Leader_Jasmine_3:
# 3177 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Jasmine_Text_3, MSGBOX_YESNO
# 3178 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_Eventscript_Gym_Leader_Jasmine_11
# 3185 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 14
# 3186 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 3187 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Jasmine_Text_2, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Jasmine_1

Common_Eventscript_Gym_Leader_Jasmine_5:
# 3175 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_JASMINE_REMATCH, Common_Eventscript_Gym_Leader_Jasmine_3
	goto Common_Eventscript_Gym_Leader_Jasmine_4

Common_Eventscript_Gym_Leader_Jasmine_8:
# 3159 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_JASMINE_REMATCH, Common_Eventscript_Gym_Leader_Jasmine_2
	goto Common_Eventscript_Gym_Leader_Jasmine_6

Common_Eventscript_Gym_Leader_Jasmine_11:
# 3179 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 14
# 3180 "data/scripts/gym_scripts.pory"
	call Common_EventScript_ClearGymTrainers
# 3181 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Jasmine_Text_4, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Jasmine_1


Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts::
# 3222 "data/scripts/gym_scripts.pory"
	random 8
# 3224 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_STEELIX_MEGA_STONE, Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_3
Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_1:
# 3228 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 3229 "data/scripts/gym_scripts.pory"
	case 0, Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_8
# 3235 "data/scripts/gym_scripts.pory"
	case 1, Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_9
# 3241 "data/scripts/gym_scripts.pory"
	case 2, Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_10
# 3247 "data/scripts/gym_scripts.pory"
	case 3, Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_11
# 3253 "data/scripts/gym_scripts.pory"
	case 4, Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_12
# 3259 "data/scripts/gym_scripts.pory"
	case 5, Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_13
# 3265 "data/scripts/gym_scripts.pory"
	case 6, Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_14
# 3271 "data/scripts/gym_scripts.pory"
	case 7, Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_15
Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_15:
# 3273 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_38
Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_37:
# 3276 "data/scripts/gym_scripts.pory"
	giveitem ITEM_STEELIXITE, 1
# 3277 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_STEELIX_MEGA_STONE
Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_6:
# 3280 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_CheckForAllBadges
	return

Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_2:
# 3225 "data/scripts/gym_scripts.pory"
	setvar VAR_RESULT, 7
	goto Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_1

Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_3:
# 3224 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, 11
	goto_if_gt Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_2
	goto Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_1

Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_8:
# 3230 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_17
Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_16:
# 3233 "data/scripts/gym_scripts.pory"
	giveitem ITEM_STEEL_GEM, 2
	goto Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_6

Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_9:
# 3236 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_20
Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_19:
# 3239 "data/scripts/gym_scripts.pory"
	giveitem ITEM_BABIRI_BERRY, 3
	goto Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_6

Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_10:
# 3242 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_23
Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_22:
# 3245 "data/scripts/gym_scripts.pory"
	giveitem ITEM_METAL_COAT, 1
	goto Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_6

Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_11:
# 3248 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_26
Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_25:
# 3251 "data/scripts/gym_scripts.pory"
	giveitem ITEM_ASSAULT_VEST, 1
	goto Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_6

Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_12:
# 3254 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_29
Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_28:
# 3257 "data/scripts/gym_scripts.pory"
	giveitem ITEM_STEEL_MEMORY, 1
	goto Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_6

Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_13:
# 3260 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_32
Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_31:
# 3263 "data/scripts/gym_scripts.pory"
	giveitem ITEM_EJECT_BUTTON, 1
	goto Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_6

Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_14:
# 3266 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_35
Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_34:
# 3269 "data/scripts/gym_scripts.pory"
	giveitem ITEM_IRON_BALL, 1
	goto Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_6

Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_17:
# 3231 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_16

Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_20:
# 3237 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_19

Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_23:
# 3243 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_22

Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_26:
# 3249 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_25

Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_29:
# 3255 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_28

Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_32:
# 3261 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_31

Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_35:
# 3267 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_34

Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_38:
# 3274 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Jasmine_Give_Gifts_37


Common_Eventscript_Gym_Leader_Jasmine_Battle_New::
# 3286 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_RECEIVED_BADGE_14, Common_Eventscript_Gym_Leader_Jasmine_Battle_New_2
# 3292 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_Eventscript_Gym_Leader_Jasmine_Battle_New_5
# 3298 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_JASMINE, Common_Eventscript_Gym_Leader_Jasmine_Battle_New_Text_1
Common_Eventscript_Gym_Leader_Jasmine_Battle_New_1:
	return

Common_Eventscript_Gym_Leader_Jasmine_Battle_New_2:
# 3288 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_JASMINE, Common_Eventscript_Gym_Leader_Jasmine_Battle_New_Text_0
	goto Common_Eventscript_Gym_Leader_Jasmine_Battle_New_1

Common_Eventscript_Gym_Leader_Jasmine_Battle_New_5:
# 3295 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_JASMINE, Common_Eventscript_Gym_Leader_Jasmine_Battle_New_Text_1
	goto Common_Eventscript_Gym_Leader_Jasmine_Battle_New_1


Common_Eventscript_Gym_Leader_Pryce::
# 3307 "data/scripts/gym_scripts.pory"
	lock
# 3308 "data/scripts/gym_scripts.pory"
	faceplayer
# 3309 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_15, Common_Eventscript_Gym_Leader_Pryce_8
Common_Eventscript_Gym_Leader_Pryce_6:
# 3325 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_15, Common_Eventscript_Gym_Leader_Pryce_5
Common_Eventscript_Gym_Leader_Pryce_4:
# 3343 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Pryce_Text_5, MSGBOX_NPC
# 3345 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Pryce_Battle_New
# 3347 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Pryce_Text_6, MSGBOX_NPC
# 3348 "data/scripts/gym_scripts.pory"
	message Common_Eventscript_Gym_Leader_Pryce_Text_7
# 3349 "data/scripts/gym_scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 3350 "data/scripts/gym_scripts.pory"
	waitmessage
# 3351 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_5, MSGBOX_NPC
# 3352 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
# 3353 "data/scripts/gym_scripts.pory"
	setflag FLAG_RECEIVED_BADGE_15
# 3355 "data/scripts/gym_scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 3356 "data/scripts/gym_scripts.pory"
	waitfanfare
# 3357 "data/scripts/gym_scripts.pory"
	closemessage
# 3359 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Pryce_Give_Gifts
# 3361 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Pryce_Text_8, MSGBOX_NPC
# 3362 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 3363 "data/scripts/gym_scripts.pory"
	clearflag FLAG_PRYCE_REMATCH
# 3364 "data/scripts/gym_scripts.pory"
	special HealPlayerParty
Common_Eventscript_Gym_Leader_Pryce_1:
# 3366 "data/scripts/gym_scripts.pory"
	release
	end

Common_Eventscript_Gym_Leader_Pryce_2:
# 3312 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Pryce_Text_0, MSGBOX_NPC
# 3314 "data/scripts/gym_scripts.pory"
	special HealPlayerParty
# 3315 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Pryce_Battle_New
# 3317 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Pryce_Text_1, MSGBOX_NPC
# 3318 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 3320 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Pryce_Give_Gifts
# 3321 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Pryce_Text_2, MSGBOX_NPC
# 3323 "data/scripts/gym_scripts.pory"
	setflag FLAG_PRYCE_REMATCH
	goto Common_Eventscript_Gym_Leader_Pryce_1

Common_Eventscript_Gym_Leader_Pryce_3:
# 3327 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Pryce_Text_3, MSGBOX_YESNO
# 3328 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_Eventscript_Gym_Leader_Pryce_11
# 3335 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 15
# 3336 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 3337 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Pryce_Text_2, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Pryce_1

Common_Eventscript_Gym_Leader_Pryce_5:
# 3325 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_PRYCE_REMATCH, Common_Eventscript_Gym_Leader_Pryce_3
	goto Common_Eventscript_Gym_Leader_Pryce_4

Common_Eventscript_Gym_Leader_Pryce_8:
# 3309 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_PRYCE_REMATCH, Common_Eventscript_Gym_Leader_Pryce_2
	goto Common_Eventscript_Gym_Leader_Pryce_6

Common_Eventscript_Gym_Leader_Pryce_11:
# 3329 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 15
# 3330 "data/scripts/gym_scripts.pory"
	call Common_EventScript_ClearGymTrainers
# 3331 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Pryce_Text_4, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Pryce_1


Common_Eventscript_Gym_Leader_Pryce_Give_Gifts::
# 3372 "data/scripts/gym_scripts.pory"
	random 8
# 3374 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_LAPRAS_MEGA_STONE, Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_3
Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_1:
# 3377 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 3378 "data/scripts/gym_scripts.pory"
	case 0, Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_8
# 3384 "data/scripts/gym_scripts.pory"
	case 1, Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_9
# 3390 "data/scripts/gym_scripts.pory"
	case 2, Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_10
# 3396 "data/scripts/gym_scripts.pory"
	case 3, Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_11
# 3402 "data/scripts/gym_scripts.pory"
	case 4, Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_12
# 3408 "data/scripts/gym_scripts.pory"
	case 5, Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_13
# 3414 "data/scripts/gym_scripts.pory"
	case 6, Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_14
# 3420 "data/scripts/gym_scripts.pory"
	case 7, Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_15
Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_15:
# 3422 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_38
Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_37:
# 3425 "data/scripts/gym_scripts.pory"
	giveitem ITEM_LAPRITE, 1
# 3426 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_LAPRAS_MEGA_STONE
Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_6:
# 3429 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_CheckForAllBadges
	return

Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_2:
# 3375 "data/scripts/gym_scripts.pory"
	setvar VAR_RESULT, 7
	goto Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_1

Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_3:
# 3374 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, 11
	goto_if_gt Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_2
	goto Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_1

Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_8:
# 3379 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_17
Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_16:
# 3382 "data/scripts/gym_scripts.pory"
	giveitem ITEM_ICE_GEM, 2
	goto Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_6

Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_9:
# 3385 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_20
Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_19:
# 3388 "data/scripts/gym_scripts.pory"
	giveitem ITEM_YACHE_BERRY, 3
	goto Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_6

Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_10:
# 3391 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_23
Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_22:
# 3394 "data/scripts/gym_scripts.pory"
	giveitem ITEM_SNOWBALL, 1
	goto Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_6

Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_11:
# 3397 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_26
Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_25:
# 3400 "data/scripts/gym_scripts.pory"
	giveitem ITEM_NEVER_MELT_ICE, 1
	goto Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_6

Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_12:
# 3403 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_29
Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_28:
# 3406 "data/scripts/gym_scripts.pory"
	giveitem ITEM_ICE_MEMORY, 1
	goto Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_6

Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_13:
# 3409 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_32
Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_31:
# 3412 "data/scripts/gym_scripts.pory"
	giveitem ITEM_ICY_ROCK, 1
	goto Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_6

Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_14:
# 3415 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_35
Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_34:
# 3418 "data/scripts/gym_scripts.pory"
	giveitem ITEM_ICE_STONE, 1
	goto Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_6

Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_17:
# 3380 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_16

Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_20:
# 3386 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_19

Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_23:
# 3392 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_22

Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_26:
# 3398 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_25

Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_29:
# 3404 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_28

Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_32:
# 3410 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_31

Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_35:
# 3416 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_34

Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_38:
# 3423 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Pryce_Give_Gifts_37


Common_Eventscript_Gym_Leader_Pryce_Battle_New::
# 3435 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_RECEIVED_BADGE_15, Common_Eventscript_Gym_Leader_Pryce_Battle_New_2
# 3441 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_Eventscript_Gym_Leader_Pryce_Battle_New_5
# 3447 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_PRYCE, Common_Eventscript_Gym_Leader_Pryce_Battle_New_Text_1
Common_Eventscript_Gym_Leader_Pryce_Battle_New_1:
	return

Common_Eventscript_Gym_Leader_Pryce_Battle_New_2:
# 3437 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_PRYCE, Common_Eventscript_Gym_Leader_Pryce_Battle_New_Text_0
	goto Common_Eventscript_Gym_Leader_Pryce_Battle_New_1

Common_Eventscript_Gym_Leader_Pryce_Battle_New_5:
# 3444 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_PRYCE, Common_Eventscript_Gym_Leader_Pryce_Battle_New_Text_1
	goto Common_Eventscript_Gym_Leader_Pryce_Battle_New_1


Common_Eventscript_Gym_Leader_Clair::
# 3457 "data/scripts/gym_scripts.pory"
	lock
# 3458 "data/scripts/gym_scripts.pory"
	faceplayer
# 3459 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_16, Common_Eventscript_Gym_Leader_Clair_8
Common_Eventscript_Gym_Leader_Clair_6:
# 3475 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_16, Common_Eventscript_Gym_Leader_Clair_5
Common_Eventscript_Gym_Leader_Clair_4:
# 3493 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Clair_Text_5, MSGBOX_NPC
# 3495 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Clair_Battle_New
# 3497 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Clair_Text_6, MSGBOX_NPC
# 3498 "data/scripts/gym_scripts.pory"
	message Common_Eventscript_Gym_Leader_Clair_Text_7
# 3499 "data/scripts/gym_scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 3500 "data/scripts/gym_scripts.pory"
	waitmessage
# 3501 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_5, MSGBOX_NPC
# 3502 "data/scripts/gym_scripts.pory"
	setflag FLAG_TEMP_9
# 3503 "data/scripts/gym_scripts.pory"
	setflag FLAG_RECEIVED_BADGE_16
# 3505 "data/scripts/gym_scripts.pory"
	call Special_Gym_EventScript_Give_Item
# 3506 "data/scripts/gym_scripts.pory"
	waitfanfare
# 3507 "data/scripts/gym_scripts.pory"
	closemessage
# 3509 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Clair_Give_Gifts
# 3511 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Clair_Text_8, MSGBOX_NPC
# 3512 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 3513 "data/scripts/gym_scripts.pory"
	clearflag FLAG_CLAIR_REMATCH
# 3514 "data/scripts/gym_scripts.pory"
	special HealPlayerParty
Common_Eventscript_Gym_Leader_Clair_1:
# 3516 "data/scripts/gym_scripts.pory"
	release
	end

Common_Eventscript_Gym_Leader_Clair_2:
# 3462 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Clair_Text_0, MSGBOX_NPC
# 3464 "data/scripts/gym_scripts.pory"
	special HealPlayerParty
# 3465 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Clair_Battle_New
# 3467 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Clair_Text_1, MSGBOX_NPC
# 3468 "data/scripts/gym_scripts.pory"
	call Gym_EventScript_Reset_Rematches
# 3470 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_Clair_Give_Gifts
# 3471 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Clair_Text_2, MSGBOX_NPC
# 3473 "data/scripts/gym_scripts.pory"
	setflag FLAG_CLAIR_REMATCH
	goto Common_Eventscript_Gym_Leader_Clair_1

Common_Eventscript_Gym_Leader_Clair_3:
# 3477 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Clair_Text_3, MSGBOX_YESNO
# 3478 "data/scripts/gym_scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_Eventscript_Gym_Leader_Clair_11
# 3485 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 16
# 3486 "data/scripts/gym_scripts.pory"
	call Common_EventScript_SetGymTrainers
# 3487 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Clair_Text_2, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Clair_1

Common_Eventscript_Gym_Leader_Clair_5:
# 3475 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_CLAIR_REMATCH, Common_Eventscript_Gym_Leader_Clair_3
	goto Common_Eventscript_Gym_Leader_Clair_4

Common_Eventscript_Gym_Leader_Clair_8:
# 3459 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_CLAIR_REMATCH, Common_Eventscript_Gym_Leader_Clair_2
	goto Common_Eventscript_Gym_Leader_Clair_6

Common_Eventscript_Gym_Leader_Clair_11:
# 3479 "data/scripts/gym_scripts.pory"
	setvar VAR_0x8008, 16
# 3480 "data/scripts/gym_scripts.pory"
	call Common_EventScript_ClearGymTrainers
# 3481 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Clair_Text_4, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Clair_1


Common_Eventscript_Gym_Leader_Clair_Give_Gifts::
# 3522 "data/scripts/gym_scripts.pory"
	random 8
# 3524 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_GOT_FLAPPLE_MEGA_STONE, Common_Eventscript_Gym_Leader_Clair_Give_Gifts_3
Common_Eventscript_Gym_Leader_Clair_Give_Gifts_1:
# 3527 "data/scripts/gym_scripts.pory"
	switch VAR_RESULT
# 3528 "data/scripts/gym_scripts.pory"
	case 0, Common_Eventscript_Gym_Leader_Clair_Give_Gifts_8
# 3534 "data/scripts/gym_scripts.pory"
	case 1, Common_Eventscript_Gym_Leader_Clair_Give_Gifts_9
# 3540 "data/scripts/gym_scripts.pory"
	case 2, Common_Eventscript_Gym_Leader_Clair_Give_Gifts_10
# 3546 "data/scripts/gym_scripts.pory"
	case 3, Common_Eventscript_Gym_Leader_Clair_Give_Gifts_11
# 3552 "data/scripts/gym_scripts.pory"
	case 4, Common_Eventscript_Gym_Leader_Clair_Give_Gifts_12
# 3558 "data/scripts/gym_scripts.pory"
	case 5, Common_Eventscript_Gym_Leader_Clair_Give_Gifts_13
# 3564 "data/scripts/gym_scripts.pory"
	case 6, Common_Eventscript_Gym_Leader_Clair_Give_Gifts_14
# 3570 "data/scripts/gym_scripts.pory"
	case 7, Common_Eventscript_Gym_Leader_Clair_Give_Gifts_15
Common_Eventscript_Gym_Leader_Clair_Give_Gifts_15:
# 3572 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Clair_Give_Gifts_38
Common_Eventscript_Gym_Leader_Clair_Give_Gifts_37:
# 3575 "data/scripts/gym_scripts.pory"
	giveitem ITEM_FLAPPLITE, 1
# 3576 "data/scripts/gym_scripts.pory"
	setflag FLAG_GOT_FLAPPLE_MEGA_STONE
Common_Eventscript_Gym_Leader_Clair_Give_Gifts_6:
# 3579 "data/scripts/gym_scripts.pory"
	call Common_Eventscript_Gym_Leader_CheckForAllBadges
	return

Common_Eventscript_Gym_Leader_Clair_Give_Gifts_2:
# 3525 "data/scripts/gym_scripts.pory"
	setvar VAR_RESULT, 7
	goto Common_Eventscript_Gym_Leader_Clair_Give_Gifts_1

Common_Eventscript_Gym_Leader_Clair_Give_Gifts_3:
# 3524 "data/scripts/gym_scripts.pory"
	compare VAR_NUM_BADGES, 11
	goto_if_gt Common_Eventscript_Gym_Leader_Clair_Give_Gifts_2
	goto Common_Eventscript_Gym_Leader_Clair_Give_Gifts_1

Common_Eventscript_Gym_Leader_Clair_Give_Gifts_8:
# 3529 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Clair_Give_Gifts_17
Common_Eventscript_Gym_Leader_Clair_Give_Gifts_16:
# 3532 "data/scripts/gym_scripts.pory"
	giveitem ITEM_DRAGON_GEM, 2
	goto Common_Eventscript_Gym_Leader_Clair_Give_Gifts_6

Common_Eventscript_Gym_Leader_Clair_Give_Gifts_9:
# 3535 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Clair_Give_Gifts_20
Common_Eventscript_Gym_Leader_Clair_Give_Gifts_19:
# 3538 "data/scripts/gym_scripts.pory"
	giveitem ITEM_HABAN_BERRY, 3
	goto Common_Eventscript_Gym_Leader_Clair_Give_Gifts_6

Common_Eventscript_Gym_Leader_Clair_Give_Gifts_10:
# 3541 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Clair_Give_Gifts_23
Common_Eventscript_Gym_Leader_Clair_Give_Gifts_22:
# 3544 "data/scripts/gym_scripts.pory"
	giveitem ITEM_DRAGON_SCALE, 1
	goto Common_Eventscript_Gym_Leader_Clair_Give_Gifts_6

Common_Eventscript_Gym_Leader_Clair_Give_Gifts_11:
# 3547 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Clair_Give_Gifts_26
Common_Eventscript_Gym_Leader_Clair_Give_Gifts_25:
# 3550 "data/scripts/gym_scripts.pory"
	giveitem ITEM_DRAGON_FANG, 1
	goto Common_Eventscript_Gym_Leader_Clair_Give_Gifts_6

Common_Eventscript_Gym_Leader_Clair_Give_Gifts_12:
# 3553 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Clair_Give_Gifts_29
Common_Eventscript_Gym_Leader_Clair_Give_Gifts_28:
# 3556 "data/scripts/gym_scripts.pory"
	giveitem ITEM_DRAGON_MEMORY, 1
	goto Common_Eventscript_Gym_Leader_Clair_Give_Gifts_6

Common_Eventscript_Gym_Leader_Clair_Give_Gifts_13:
# 3559 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Clair_Give_Gifts_32
Common_Eventscript_Gym_Leader_Clair_Give_Gifts_31:
# 3562 "data/scripts/gym_scripts.pory"
	giveitem ITEM_LIFE_ORB, 1
	goto Common_Eventscript_Gym_Leader_Clair_Give_Gifts_6

Common_Eventscript_Gym_Leader_Clair_Give_Gifts_14:
# 3565 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_TEMP_9, Common_Eventscript_Gym_Leader_Clair_Give_Gifts_35
Common_Eventscript_Gym_Leader_Clair_Give_Gifts_34:
# 3568 "data/scripts/gym_scripts.pory"
	giveitem ITEM_EVIOLITE, 1
	goto Common_Eventscript_Gym_Leader_Clair_Give_Gifts_6

Common_Eventscript_Gym_Leader_Clair_Give_Gifts_17:
# 3530 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Clair_Give_Gifts_16

Common_Eventscript_Gym_Leader_Clair_Give_Gifts_20:
# 3536 "data/scripts/gym_scripts.pory"
	msgbox RustboroCity_Gym_EventScript_Roxanne_New_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Clair_Give_Gifts_19

Common_Eventscript_Gym_Leader_Clair_Give_Gifts_23:
# 3542 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Clair_Give_Gifts_22

Common_Eventscript_Gym_Leader_Clair_Give_Gifts_26:
# 3548 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Clair_Give_Gifts_25

Common_Eventscript_Gym_Leader_Clair_Give_Gifts_29:
# 3554 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Clair_Give_Gifts_28

Common_Eventscript_Gym_Leader_Clair_Give_Gifts_32:
# 3560 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Clair_Give_Gifts_31

Common_Eventscript_Gym_Leader_Clair_Give_Gifts_35:
# 3566 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Clair_Give_Gifts_34

Common_Eventscript_Gym_Leader_Clair_Give_Gifts_38:
# 3573 "data/scripts/gym_scripts.pory"
	msgbox Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0, MSGBOX_NPC
	goto Common_Eventscript_Gym_Leader_Clair_Give_Gifts_37


Common_Eventscript_Gym_Leader_Clair_Battle_New::
# 3585 "data/scripts/gym_scripts.pory"
	goto_if_unset FLAG_RECEIVED_BADGE_16, Common_Eventscript_Gym_Leader_Clair_Battle_New_2
# 3591 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_Eventscript_Gym_Leader_Clair_Battle_New_5
# 3597 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_CLAIR, Common_Eventscript_Gym_Leader_Clair_Battle_New_Text_2
Common_Eventscript_Gym_Leader_Clair_Battle_New_1:
	return

Common_Eventscript_Gym_Leader_Clair_Battle_New_2:
# 3587 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_CLAIR, Common_Eventscript_Gym_Leader_Clair_Battle_New_Text_0
	goto Common_Eventscript_Gym_Leader_Clair_Battle_New_1

Common_Eventscript_Gym_Leader_Clair_Battle_New_5:
# 3594 "data/scripts/gym_scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_CLAIR, Common_Eventscript_Gym_Leader_Clair_Battle_New_Text_1
	goto Common_Eventscript_Gym_Leader_Clair_Battle_New_1


Common_Eventscript_Gym_Leader_CheckForAllBadges::
# 3604 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Common_Eventscript_Gym_Leader_CheckForAllBadges_3
	return

Common_Eventscript_Gym_Leader_CheckForAllBadges_1:
# 3620 "data/scripts/gym_scripts.pory"
	setflag FLAG_DEFEATED_ALL_GYMS
	return

Common_Eventscript_Gym_Leader_CheckForAllBadges_2:
# 3606 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Common_Eventscript_Gym_Leader_CheckForAllBadges_7
	return

Common_Eventscript_Gym_Leader_CheckForAllBadges_3:
# 3605 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Common_Eventscript_Gym_Leader_CheckForAllBadges_2
	return

Common_Eventscript_Gym_Leader_CheckForAllBadges_6:
# 3608 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Common_Eventscript_Gym_Leader_CheckForAllBadges_11
	return

Common_Eventscript_Gym_Leader_CheckForAllBadges_7:
# 3607 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Common_Eventscript_Gym_Leader_CheckForAllBadges_6
	return

Common_Eventscript_Gym_Leader_CheckForAllBadges_10:
# 3610 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Common_Eventscript_Gym_Leader_CheckForAllBadges_15
	return

Common_Eventscript_Gym_Leader_CheckForAllBadges_11:
# 3609 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Common_Eventscript_Gym_Leader_CheckForAllBadges_10
	return

Common_Eventscript_Gym_Leader_CheckForAllBadges_14:
# 3612 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_09, Common_Eventscript_Gym_Leader_CheckForAllBadges_19
	return

Common_Eventscript_Gym_Leader_CheckForAllBadges_15:
# 3611 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Common_Eventscript_Gym_Leader_CheckForAllBadges_14
	return

Common_Eventscript_Gym_Leader_CheckForAllBadges_18:
# 3614 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_11, Common_Eventscript_Gym_Leader_CheckForAllBadges_23
	return

Common_Eventscript_Gym_Leader_CheckForAllBadges_19:
# 3613 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_10, Common_Eventscript_Gym_Leader_CheckForAllBadges_18
	return

Common_Eventscript_Gym_Leader_CheckForAllBadges_22:
# 3616 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_13, Common_Eventscript_Gym_Leader_CheckForAllBadges_27
	return

Common_Eventscript_Gym_Leader_CheckForAllBadges_23:
# 3615 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_12, Common_Eventscript_Gym_Leader_CheckForAllBadges_22
	return

Common_Eventscript_Gym_Leader_CheckForAllBadges_26:
# 3618 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_15, Common_Eventscript_Gym_Leader_CheckForAllBadges_30
	return

Common_Eventscript_Gym_Leader_CheckForAllBadges_27:
# 3617 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_14, Common_Eventscript_Gym_Leader_CheckForAllBadges_26
	return

Common_Eventscript_Gym_Leader_CheckForAllBadges_30:
# 3619 "data/scripts/gym_scripts.pory"
	goto_if_set FLAG_RECEIVED_BADGE_16, Common_Eventscript_Gym_Leader_CheckForAllBadges_1
	return


Common_EventScript_SetGymTrainers::
# 3627 "data/scripts/gym_scripts.pory"
	switch VAR_0x8008
# 3629 "data/scripts/gym_scripts.pory"
	case 1, Common_EventScript_SetGymTrainers_3
# 3636 "data/scripts/gym_scripts.pory"
	case 2, Common_EventScript_SetGymTrainers_4
# 3645 "data/scripts/gym_scripts.pory"
	case 3, Common_EventScript_SetGymTrainers_5
# 3653 "data/scripts/gym_scripts.pory"
	case 4, Common_EventScript_SetGymTrainers_6
# 3664 "data/scripts/gym_scripts.pory"
	case 5, Common_EventScript_SetGymTrainers_7
# 3674 "data/scripts/gym_scripts.pory"
	case 6, Common_EventScript_SetGymTrainers_8
# 3683 "data/scripts/gym_scripts.pory"
	case 7, Common_EventScript_SetGymTrainers_9
# 3697 "data/scripts/gym_scripts.pory"
	case 8, Common_EventScript_SetGymTrainers_10
# 3710 "data/scripts/gym_scripts.pory"
	case 9, Common_EventScript_SetGymTrainers_11
# 3715 "data/scripts/gym_scripts.pory"
	case 10, Common_EventScript_SetGymTrainers_12
# 3722 "data/scripts/gym_scripts.pory"
	case 11, Common_EventScript_SetGymTrainers_13
# 3729 "data/scripts/gym_scripts.pory"
	case 12, Common_EventScript_SetGymTrainers_14
# 3736 "data/scripts/gym_scripts.pory"
	case 13, Common_EventScript_SetGymTrainers_15
# 3743 "data/scripts/gym_scripts.pory"
	case 14, Common_EventScript_SetGymTrainers_16
# 3746 "data/scripts/gym_scripts.pory"
	case 15, Common_EventScript_SetGymTrainers_17
# 3754 "data/scripts/gym_scripts.pory"
	case 16, Common_EventScript_SetGymTrainers_18
Common_EventScript_SetGymTrainers_1:
	return

Common_EventScript_SetGymTrainers_3:
# 3630 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_JOSH
# 3631 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_TOMMY
# 3632 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_MARC
# 3633 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_SYLVIA
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_4:
# 3637 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_TAKAO
# 3638 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_JOCELYN
# 3639 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_LAURA
# 3640 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BRENDEN
# 3641 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_CRISTIAN
# 3642 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_LILITH
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_5:
# 3646 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_KIRK
# 3647 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_SHAWN
# 3648 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BEN
# 3649 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_VIVIAN
# 3650 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_ANGELO
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_6:
# 3654 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_COLE
# 3655 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_AXLE
# 3656 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_KEEGAN
# 3657 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_GERALD
# 3658 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_DANIELLE
# 3659 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_JACE
# 3660 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_JEFF
# 3661 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_ELI
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_7:
# 3665 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_RANDALL
# 3666 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_PARKER
# 3667 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_GEORGE
# 3668 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BERKE
# 3669 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_MARY
# 3670 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_ALEXIA
# 3671 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_JODY
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_8:
# 3675 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_JARED
# 3676 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_FLINT
# 3677 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_ASHLEY
# 3678 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_EDWARDO
# 3679 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_HUMBERTO
# 3680 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_DARIUS
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_9:
# 3684 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_PRESTON
# 3685 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_VIRGIL
# 3686 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BLAKE
# 3687 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_HANNAH
# 3688 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_SAMANTHA
# 3689 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_MAURA
# 3690 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_NATE
# 3691 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_KATHLEEN
# 3692 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_CLIFFORD
# 3693 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_MACEY
# 3694 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_NICHOLAS
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_10:
# 3698 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_ANDREA
# 3699 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_CRISSY
# 3700 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BRIANNA
# 3701 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_CONNIE
# 3702 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BRIDGET
# 3703 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_OLIVIA
# 3704 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_TIFFANY
# 3705 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BETHANY
# 3706 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_ANNIKA
# 3707 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_DAPHNE
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_11:
# 3711 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BIRD_KEEPER_ROD
# 3712 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BIRD_KEEPER_ABE
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_12:
# 3716 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_TWINS_AMY_AND_MAY
# 3717 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BUG_CATCHER_BENNY
# 3718 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BUG_CATCHER_AL
# 3719 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BUG_CATCHER_JOSH
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_13:
# 3723 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BEAUTY_VICTORIA
# 3724 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BEAUTY_SAMANTHA
# 3725 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_LASS_CARRIE
# 3726 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_LASS_BRIDGET
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_14:
# 3730 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_SAGE_JEFFREY
# 3731 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_SAGE_PING
# 3732 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_MEDIUM_MARTHA
# 3733 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_MEDIUM_GRACE
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_15:
# 3737 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BLACKBELT_YOSHI
# 3738 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BLACKBELT_LAO
# 3739 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BLACKBELT_NOB
# 3740 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BLACKBELT_LUNG
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_16:
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_17:
# 3747 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_SKIER_ROXANNE
# 3748 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_SKIER_CLARISSA
# 3749 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BOARDER_RONALD
# 3750 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BOARDER_BRAD
# 3751 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_BOARDER_DOUGLAS
	goto Common_EventScript_SetGymTrainers_1

Common_EventScript_SetGymTrainers_18:
# 3755 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_COOLTRAINERM_CODY
# 3756 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_COOLTRAINERF_FRAN
# 3757 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_COOLTRAINERM_PAUL
# 3758 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_COOLTRAINERM_MIKE
# 3759 "data/scripts/gym_scripts.pory"
	settrainerflag TRAINER_COOLTRAINERF_LOLA
	goto Common_EventScript_SetGymTrainers_1


Common_EventScript_ClearGymTrainers::
# 3766 "data/scripts/gym_scripts.pory"
	switch VAR_0x8008
# 3768 "data/scripts/gym_scripts.pory"
	case 1, Common_EventScript_ClearGymTrainers_3
# 3775 "data/scripts/gym_scripts.pory"
	case 2, Common_EventScript_ClearGymTrainers_4
# 3784 "data/scripts/gym_scripts.pory"
	case 3, Common_EventScript_ClearGymTrainers_5
# 3792 "data/scripts/gym_scripts.pory"
	case 4, Common_EventScript_ClearGymTrainers_6
# 3803 "data/scripts/gym_scripts.pory"
	case 5, Common_EventScript_ClearGymTrainers_7
# 3813 "data/scripts/gym_scripts.pory"
	case 6, Common_EventScript_ClearGymTrainers_8
# 3822 "data/scripts/gym_scripts.pory"
	case 7, Common_EventScript_ClearGymTrainers_9
# 3836 "data/scripts/gym_scripts.pory"
	case 8, Common_EventScript_ClearGymTrainers_10
# 3849 "data/scripts/gym_scripts.pory"
	case 9, Common_EventScript_ClearGymTrainers_11
# 3854 "data/scripts/gym_scripts.pory"
	case 10, Common_EventScript_ClearGymTrainers_12
# 3861 "data/scripts/gym_scripts.pory"
	case 11, Common_EventScript_ClearGymTrainers_13
# 3868 "data/scripts/gym_scripts.pory"
	case 12, Common_EventScript_ClearGymTrainers_14
# 3875 "data/scripts/gym_scripts.pory"
	case 13, Common_EventScript_ClearGymTrainers_15
# 3882 "data/scripts/gym_scripts.pory"
	case 14, Common_EventScript_ClearGymTrainers_16
# 3885 "data/scripts/gym_scripts.pory"
	case 15, Common_EventScript_ClearGymTrainers_17
# 3893 "data/scripts/gym_scripts.pory"
	case 16, Common_EventScript_ClearGymTrainers_18
Common_EventScript_ClearGymTrainers_1:
	return

Common_EventScript_ClearGymTrainers_3:
# 3769 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_JOSH
# 3770 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_TOMMY
# 3771 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_MARC
# 3772 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_SYLVIA
	goto Common_EventScript_ClearGymTrainers_1

Common_EventScript_ClearGymTrainers_4:
# 3776 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_TAKAO
# 3777 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_JOCELYN
# 3778 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_LAURA
# 3779 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BRENDEN
# 3780 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_CRISTIAN
# 3781 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_LILITH
	goto Common_EventScript_ClearGymTrainers_1

Common_EventScript_ClearGymTrainers_5:
# 3785 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_KIRK
# 3786 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_SHAWN
# 3787 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BEN
# 3788 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_VIVIAN
# 3789 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_ANGELO
	goto Common_EventScript_ClearGymTrainers_1

Common_EventScript_ClearGymTrainers_6:
# 3793 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_COLE
# 3794 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_AXLE
# 3795 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_KEEGAN
# 3796 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_GERALD
# 3797 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_DANIELLE
# 3798 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_JACE
# 3799 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_JEFF
# 3800 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_ELI
	goto Common_EventScript_ClearGymTrainers_1

Common_EventScript_ClearGymTrainers_7:
# 3804 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_RANDALL
# 3805 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_PARKER
# 3806 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_GEORGE
# 3807 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BERKE
# 3808 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_MARY
# 3809 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_ALEXIA
# 3810 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_JODY
	goto Common_EventScript_ClearGymTrainers_1

Common_EventScript_ClearGymTrainers_8:
# 3814 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_JARED
# 3815 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_FLINT
# 3816 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_ASHLEY
# 3817 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_EDWARDO
# 3818 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_HUMBERTO
# 3819 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_DARIUS
	goto Common_EventScript_ClearGymTrainers_1

Common_EventScript_ClearGymTrainers_9:
# 3823 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_PRESTON
# 3824 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_VIRGIL
# 3825 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BLAKE
# 3826 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_HANNAH
# 3827 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_SAMANTHA
# 3828 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_MAURA
# 3829 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_NATE
# 3830 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_KATHLEEN
# 3831 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_CLIFFORD
# 3832 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_MACEY
# 3833 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_NICHOLAS
	goto Common_EventScript_ClearGymTrainers_1

Common_EventScript_ClearGymTrainers_10:
# 3837 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_ANDREA
# 3838 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_CRISSY
# 3839 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BRIANNA
# 3840 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_CONNIE
# 3841 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BRIDGET
# 3842 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_OLIVIA
# 3843 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_TIFFANY
# 3844 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BETHANY
# 3845 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_ANNIKA
# 3846 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_DAPHNE
	goto Common_EventScript_ClearGymTrainers_1

Common_EventScript_ClearGymTrainers_11:
# 3850 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BIRD_KEEPER_ROD
# 3851 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BIRD_KEEPER_ABE
	goto Common_EventScript_ClearGymTrainers_1

Common_EventScript_ClearGymTrainers_12:
# 3855 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_TWINS_AMY_AND_MAY
# 3856 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BUG_CATCHER_BENNY
# 3857 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BUG_CATCHER_AL
# 3858 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BUG_CATCHER_JOSH
	goto Common_EventScript_ClearGymTrainers_1

Common_EventScript_ClearGymTrainers_13:
# 3862 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BEAUTY_VICTORIA
# 3863 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BEAUTY_SAMANTHA
# 3864 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_LASS_CARRIE
# 3865 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_LASS_BRIDGET
	goto Common_EventScript_ClearGymTrainers_1

Common_EventScript_ClearGymTrainers_14:
# 3869 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_SAGE_JEFFREY
# 3870 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_SAGE_PING
# 3871 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_MEDIUM_MARTHA
# 3872 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_MEDIUM_GRACE
	goto Common_EventScript_ClearGymTrainers_1

Common_EventScript_ClearGymTrainers_15:
# 3876 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BLACKBELT_YOSHI
# 3877 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BLACKBELT_LAO
# 3878 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BLACKBELT_NOB
# 3879 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BLACKBELT_LUNG
	goto Common_EventScript_ClearGymTrainers_1

Common_EventScript_ClearGymTrainers_16:
	goto Common_EventScript_ClearGymTrainers_1

Common_EventScript_ClearGymTrainers_17:
# 3886 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_SKIER_ROXANNE
# 3887 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_SKIER_CLARISSA
# 3888 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BOARDER_RONALD
# 3889 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BOARDER_BRAD
# 3890 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_BOARDER_DOUGLAS
	goto Common_EventScript_ClearGymTrainers_1

Common_EventScript_ClearGymTrainers_18:
# 3894 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_COOLTRAINERM_CODY
# 3895 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_COOLTRAINERF_FRAN
# 3896 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_COOLTRAINERM_PAUL
# 3897 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_COOLTRAINERM_MIKE
# 3898 "data/scripts/gym_scripts.pory"
	cleartrainerflag TRAINER_COOLTRAINERF_LOLA
	goto Common_EventScript_ClearGymTrainers_1


EventScript_Gym_Attendant_Call_Text_0:
# 211 "data/scripts/gym_scripts.pory"
	.string "Scott: Hey {PLAYER}, I heard you\n"
	.string "won your first Gym battle! That's\l"
	.string "an incredible start.\p"
	.string "You should head to Lilycove or\n"
	.string "Slateport. From there, you can\l"
	.string "reach the Sevii Islands, which\l"
	.string "also have 8 Gyms.\p"
	.string "Good luck!$"

EventScript_Gym_Attendant_Call_Text_1:
# 212 "data/scripts/gym_scripts.pory"
	.string "Scott: Great job on earning your\n"
	.string "second badge, {PLAYER}! I knew\l"
	.string "you had what it takes.\p"
	.string "By the way, did you know your\n"
	.string "Pokémon can share Egg or Tutor\l"
	.string "moves through the 'Learn Move'\l"
	.string "feature in the Party screen?\p"
	.string "Keep pushing forward!$"

EventScript_Gym_Attendant_Call_Text_2:
# 213 "data/scripts/gym_scripts.pory"
	.string "Scott: Wow, three badges already,\n"
	.string "{PLAYER}! You're moving fast!\p"
	.string "If you give your lead Pokémon an\n"
	.string "Everstone or Eviolite, you'll\l"
	.string "encounter only first stage\l"
	.string "Pokémon in the wild. Cool trick,\l"
	.string "huh?\p"
	.string "Take care!$"

EventScript_Gym_Attendant_Call_Text_3:
# 214 "data/scripts/gym_scripts.pory"
	.string "Scott: Four badges, {PLAYER}!\n"
	.string "That's halfway through the\l"
	.string "challenge.\p"
	.string "Have you visited the Battle Mart\n"
	.string "in Oldale? They've got Nature\l"
	.string "Mints that might help your\l"
	.string "Pokémon grow stronger.\p"
	.string "Keep up the momentum!$"

EventScript_Gym_Attendant_Call_Text_4:
# 215 "data/scripts/gym_scripts.pory"
	.string "Scott: Five badges, {PLAYER}!\n"
	.string "You're making amazing progress!\p"
	.string "Have you tried Wonder Trading\n"
	.string "yet? It costs 5BP, but you can get\l"
	.string "some incredible Pokémon that way.\p"
	.string "Best of luck on the next one!$"

EventScript_Gym_Attendant_Call_Text_5:
# 216 "data/scripts/gym_scripts.pory"
	.string "Scott: Six badges under your belt,\n"
	.string "{PLAYER}. That's impressive!\p"
	.string "Did you know the blue haired nurse\n"
	.string "in Pokémon Centers now teaches\l"
	.string "Egg Moves? That might be useful\l"
	.string "for your team.\p"
	.string "Keep up the hard work!$"

EventScript_Gym_Attendant_Call_Text_6:
# 217 "data/scripts/gym_scripts.pory"
	.string "Scott: Seven badges, {PLAYER}!\n"
	.string "You're so close to conquering this\l"
	.string "challenge!\p"
	.string "I heard the Lilycove Department\n"
	.string "Store has stocked up on Evolution\l"
	.string "items. It's worth checking out.\p"
	.string "Good luck!$"

EventScript_Gym_Attendant_Call_Text_7:
# 218 "data/scripts/gym_scripts.pory"
	.string "Scott: Eight badges already,\n"
	.string "{PLAYER}? That's incredible!\p"
	.string "If this were a single region\n"
	.string "league, you'd be ready for the\l"
	.string "Elite Four, but there's still more\l"
	.string "to go. I believe in you!$"

EventScript_Gym_Attendant_Call_Text_8:
# 219 "data/scripts/gym_scripts.pory"
	.string "Scott: Nine badges, {PLAYER}!\n"
	.string "You're on a roll.\p"
	.string "The blue haired nurse in Pokémon\n"
	.string "Centers now offers to teach Tutor\l"
	.string "Moves. Maybe give it a look.\p"
	.string "Keep it up!$"

EventScript_Gym_Attendant_Call_Text_9:
# 220 "data/scripts/gym_scripts.pory"
	.string "Scott: Ten badges? Amazing work,\n"
	.string "{PLAYER}!\p"
	.string "The next Gym Leader should give\n"
	.string "you a Mega Ring. With that, your\l"
	.string "team will reach a whole new level.\l"
	.string "Keep going!$"

EventScript_Gym_Attendant_Call_Text_10:
# 221 "data/scripts/gym_scripts.pory"
	.string "Scott: Eleven badges, {PLAYER}.\n"
	.string "You're almost there!\p"
	.string "Now that you have a Mega Ring, you\n"
	.string "can Mega Evolve your Pokémon.\l"
	.string "Just press the Start Button\l"
	.string "during battle while selecting a\l"
	.string "move.\p"
	.string "Good luck!$"

EventScript_Gym_Attendant_Call_Text_11:
# 222 "data/scripts/gym_scripts.pory"
	.string "Scott: Twelve badges? You're\n"
	.string "unstoppable, {PLAYER}!\p"
	.string "The blue haired nurse in Pokémon\n"
	.string "Centers can now teach TM Moves to\l"
	.string "your Pokémon. That might help for\l"
	.string "the next challenge.\p"
	.string "You've got this!$"

EventScript_Gym_Attendant_Call_Text_12:
# 223 "data/scripts/gym_scripts.pory"
	.string "Scott: Three more badges to go,\n"
	.string "{PLAYER}. You're in the final\l"
	.string "stretch now!\p"
	.string "I'm rooting for you all the way!$"

EventScript_Gym_Attendant_Call_Text_13:
# 224 "data/scripts/gym_scripts.pory"
	.string "Scott: Fourteen badges just two\n"
	.string "more left, {PLAYER}!\p"
	.string "I know you've got what it takes to\n"
	.string "finish strong!$"

EventScript_Gym_Attendant_Call_Text_14:
# 225 "data/scripts/gym_scripts.pory"
	.string "Scott: Fifteen badges! Only one\n"
	.string "more, {PLAYER}!\p"
	.string "The Wonder Charm should let you\n"
	.string "Wonder Trade for free now, so\l"
	.string "check that out at the Pokémon\l"
	.string "Center.\p"
	.string "I'm waiting to hear the big news!$"

EventScript_Gym_Attendant_Call_Text_15:
# 226 "data/scripts/gym_scripts.pory"
	.string "Scott: {PLAYER}, you did it! All\n"
	.string "Gym badges in Hoenn and Sevii are\l"
	.string "yours!\p"
	.string "Come see me at the Pokémon Center\n"
	.string "in Ever Grande City before\l"
	.string "tackling Victory Road and the\l"
	.string "Pokémon League.\p"
	.string "There's a green haired trainer\n"
	.string "here who seems really strong you\l"
	.string "might want to test your skills\l"
	.string "against them.\p"
	.string "Good luck!$"

RustboroCity_Gym_EventScript_GymGuide_New_Text_0:
# 262 "data/scripts/gym_scripts.pory"
	.string "Guide: Hello {PLAYER}, I see you came\n"
	.string "to this Gym again, do you want me to\l"
	.string "take you to the Leader?$"

RustboroCity_Gym_EventScript_GymGuide_New_Text_1:
# 264 "data/scripts/gym_scripts.pory"
	.string "Let me tell the leader that you are\n"
	.string "here.$"

RustboroCity_Gym_EventScript_GymGuide_New_Text_2:
# 268 "data/scripts/gym_scripts.pory"
	.string "I see, you can also go throught the Gym\n"
	.string "if you want.$"

RustboroCity_Gym_EventScript_Roxanne_New_Text_0:
# 297 "data/scripts/gym_scripts.pory"
	.string "Please take these items with you.$"

RustboroCity_Gym_EventScript_Roxanne_New_Text_1:
# 300 "data/scripts/gym_scripts.pory"
	.string "Roxanne: Come back tomorrow so we can\n"
	.string "battle again.$"

RustboroCity_Gym_EventScript_Roxanne_New_Text_2:
# 307 "data/scripts/gym_scripts.pory"
	.string "Roxanne: My Pokémon are tired for\n"
	.string "today, but the other trainers here need\l"
	.string "training, do you want to try battling\l"
	.string "them again?$"

RustboroCity_Gym_EventScript_Roxanne_New_Text_3:
# 311 "data/scripts/gym_scripts.pory"
	.string "Roxanne: I will tell them to get ready,\n"
	.string "so take care on your way out.$"

RustboroCity_Gym_EventScript_Roxanne_New_Text_4:
# 328 "data/scripts/gym_scripts.pory"
	.string "{PLAYER} received the Stone Badge\n"
	.string "from Roxanne.$"

RustboroCity_Gym_EventScript_Roxanne_New_Text_5:
# 331 "data/scripts/gym_scripts.pory"
	.string "Please take these items with you too.$"

RustboroCity_Gym_EventScript_Roxanne_New_Text_6:
# 341 "data/scripts/gym_scripts.pory"
	.string "That Technical Machine contains the\n"
	.string "move Rock Tomb.\p"
	.string "It not only inflicts damage by dropping\n"
	.string "rocks, it also lowers the target Speed.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a Pokémon.\p"
	.string "A TM can be used indefinitely, so use it\n"
	.string "without thinking it twice.$"

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_0:
# 405 "data/scripts/gym_scripts.pory"
	.string "Roxanne: This move raises the speed of\n"
	.string "Rock-type Pokémon by 2 stages, its\l"
	.string "really useful.$"

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_1:
# 413 "data/scripts/gym_scripts.pory"
	.string "Roxanne: This move does damage every\n"
	.string "time an opposing Pokémon enters to the\l"
	.string "battle, try it at the start of the\l"
	.string "battle.$"

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_2:
# 421 "data/scripts/gym_scripts.pory"
	.string "Roxanne: This is a Rock-type damage\n"
	.string "move made specially for Rock-type\l"
	.string "Pokémon with high Special Attack.$"

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_3:
# 429 "data/scripts/gym_scripts.pory"
	.string "Roxanne: This is a Rock-type damage\n"
	.string "move with a high base attack, but\l"
	.string "misses a lot too so be careful when\l"
	.string "using it.$"

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_4:
# 435 "data/scripts/gym_scripts.pory"
	.string "Roxanne: Take this as an special gift\n"
	.string "from me, it's an Aggronite.$"

RustboroCity_Gym_EventScript_Roxanne_Give_Gifts_Text_5:
# 437 "data/scripts/gym_scripts.pory"
	.string "Make an Aggron hold it to unleash its\n"
	.string "true potential.$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_0:
# 465 "data/scripts/gym_scripts.pory"
	.string "Aron: ron!$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_1:
# 466 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, its skin look's really\l"
	.string "shiny.$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_2:
# 471 "data/scripts/gym_scripts.pory"
	.string "Aron: ron...$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_3:
# 472 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems tired after today's\n"
	.string "battle, its better to let it rest.$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_4:
# 476 "data/scripts/gym_scripts.pory"
	.string "Aron: ron?$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_5:
# 477 "data/scripts/gym_scripts.pory"
	.string "The Pokémon is currently eating a little\n"
	.string "chunk of metal.$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_6:
# 483 "data/scripts/gym_scripts.pory"
	.string "Lairon: ron!$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_7:
# 488 "data/scripts/gym_scripts.pory"
	.string "Lairon: ron...$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_8:
# 493 "data/scripts/gym_scripts.pory"
	.string "Lairon: ron?$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_9:
# 494 "data/scripts/gym_scripts.pory"
	.string "The Pokémon is currently eating a chunk\n"
	.string "of metal.$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_10:
# 500 "data/scripts/gym_scripts.pory"
	.string "Aggron: ron!$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_11:
# 501 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, its skin look's really\l"
	.string "tought.$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_12:
# 506 "data/scripts/gym_scripts.pory"
	.string "Aggron: ron...$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_13:
# 513 "data/scripts/gym_scripts.pory"
	.string "The Pokémon is currently looking at a\n"
	.string "shiny rock on its arm with\l"
	.string "determination.$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_14:
# 518 "data/scripts/gym_scripts.pory"
	.string "Aggron: ron?$"

RustboroCity_Gym_EventScript_Gym_Aaron_Text_15:
# 519 "data/scripts/gym_scripts.pory"
	.string "The Pokémon is currently eating what it\n"
	.string "looks to be a big rock.$"

DewfordTown_Gym_EventScript_Brawly_New_Text_0:
# 600 "data/scripts/gym_scripts.pory"
	.string "Brawly: Come back tomorrow so we can\n"
	.string "battle again.$"

DewfordTown_Gym_EventScript_Brawly_New_Text_1:
# 607 "data/scripts/gym_scripts.pory"
	.string "Brawly: My Pokémon are tired for today,\n"
	.string "but the other trainers here need\l"
	.string "training, do you want to try battling\l"
	.string "them again?$"

DewfordTown_Gym_EventScript_Brawly_New_Text_2:
# 611 "data/scripts/gym_scripts.pory"
	.string "Brawly: I will tell them to get ready, so\n"
	.string "take care on your way out.$"

DewfordTown_Gym_EventScript_Brawly_New_Text_3:
# 627 "data/scripts/gym_scripts.pory"
	.string "{PLAYER} received the Knuckle Badge\n"
	.string "from Brawly.$"

DewfordTown_Gym_EventScript_Brawly_New_Text_4:
# 639 "data/scripts/gym_scripts.pory"
	.string "That technical machine contains the\n"
	.string "move Bulk Up.\p"
	.string "It's a move that raises both Attack and\n"
	.string "Defense stats for the User.$"

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_0:
# 701 "data/scripts/gym_scripts.pory"
	.string "Brawly: This move not only inflicts\n"
	.string "damage, it also lowers the target Speed\l"
	.string "stat by one stage.$"

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_1:
# 709 "data/scripts/gym_scripts.pory"
	.string "Brawly: This move confuses the target\n"
	.string "but it also raises its attack stat, use\l"
	.string "it with caution.$"

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_2:
# 717 "data/scripts/gym_scripts.pory"
	.string "Brawly: This is a Fighting-type damage\n"
	.string "move with a really high base attack, but\l"
	.string "misses a lot too so be careful when\l"
	.string "using it.$"

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_3:
# 725 "data/scripts/gym_scripts.pory"
	.string "Brawly: This is a Fighting-type damage\n"
	.string "move made specially for Fighting-type\l"
	.string "Pokémon with high Special Attack.$"

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_4:
# 731 "data/scripts/gym_scripts.pory"
	.string "Brawly: Take this as an special gift\n"
	.string "from me, it's a Heracronite.$"

DewfordTown_Gym_EventScript_Brawly_Give_Gifts_Text_5:
# 733 "data/scripts/gym_scripts.pory"
	.string "Make a Heracross hold it to unleash its\n"
	.string "real potential.$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_0:
# 761 "data/scripts/gym_scripts.pory"
	.string "Makuhita: hita!$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_1:
# 762 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, it has a really\l"
	.string "professional fighting stance.$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_2:
# 767 "data/scripts/gym_scripts.pory"
	.string "Makuhita: hita...$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_3:
# 768 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems tired after today's\n"
	.string "battle, but even then it has a lot of\l"
	.string "energy left.$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_4:
# 772 "data/scripts/gym_scripts.pory"
	.string "Makuhita: hita?$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_5:
# 773 "data/scripts/gym_scripts.pory"
	.string "The Pokémon is looking at a little\n"
	.string "surfboard on its hand.$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_6:
# 779 "data/scripts/gym_scripts.pory"
	.string "Hariyama: yama!$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_7:
# 780 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems like it wants a\n"
	.string "rematch, it is stomping the ground with\l"
	.string "determination.$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_8:
# 784 "data/scripts/gym_scripts.pory"
	.string "Hariyama: yama...$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_9:
# 785 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems tired after today's\n"
	.string "battle, but its thanking you for the\l"
	.string "battle very politely.$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_10:
# 789 "data/scripts/gym_scripts.pory"
	.string "Hariyama: yama?$"

DewfordTown_Gym_EventScript_Gym_Makuhita_Text_11:
# 790 "data/scripts/gym_scripts.pory"
	.string "The Pokémon is currently looking at\n"
	.string "you, it may be studying your movements.$"

MauvilleCity_Gym_EventScript_Wattson_New_Text_0:
# 837 "data/scripts/gym_scripts.pory"
	.string "Wattson: Come back tomorrow so we can\n"
	.string "battle again.$"

MauvilleCity_Gym_EventScript_Wattson_New_Text_1:
# 844 "data/scripts/gym_scripts.pory"
	.string "Wattson: My Pokémon are tired for\n"
	.string "today, but the other trainers here need\l"
	.string "training, do you want to try battling\l"
	.string "them again?$"

MauvilleCity_Gym_EventScript_Wattson_New_Text_2:
# 848 "data/scripts/gym_scripts.pory"
	.string "Wattson: I will tell them to get ready,\n"
	.string "so take care on your way out.$"

MauvilleCity_Gym_EventScript_Wattson_New_Text_3:
# 864 "data/scripts/gym_scripts.pory"
	.string "{PLAYER} received the Dynamo Badge\n"
	.string "from Wattson.$"

MauvilleCity_Gym_EventScript_Wattson_New_Text_4:
# 876 "data/scripts/gym_scripts.pory"
	.string "That technical machine contains the\n"
	.string "move Thunder Wave.\p"
	.string "This move paralyzes the target so you\n"
	.string "can attack before them, its really\l"
	.string "useful.$"

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_0:
# 938 "data/scripts/gym_scripts.pory"
	.string "Wattson: This move inflicts damage and\n"
	.string "always lands, use it if you had your\l"
	.string "accuracy lowered.$"

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_1:
# 946 "data/scripts/gym_scripts.pory"
	.string "Wattson: This move inflicts damage and\n"
	.string "always rises the user Special Attack so\l"
	.string "it becomes stronger on each hit.$"

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_2:
# 954 "data/scripts/gym_scripts.pory"
	.string "Wattson: This move inflicts damage and\n"
	.string "lets you switch your Pokémon on the\l"
	.string "same turn, use it to switch if you are\l"
	.string "faster than your enemy.$"

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_3:
# 962 "data/scripts/gym_scripts.pory"
	.string "Wattson: This is an Electric-type\n"
	.string "damage move made specially for\l"
	.string "Electric-type Pokémon with high\l"
	.string "Physical Attack, it also inflicts recoil\l"
	.string "damage to the user so use it wisely.$"

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_4:
# 968 "data/scripts/gym_scripts.pory"
	.string "Wattson: Take this as an special gift\n"
	.string "from me, it's a Manectite.$"

MauvilleCity_Gym_EventScript_Wattson_Give_Gifts_Text_5:
# 970 "data/scripts/gym_scripts.pory"
	.string "Make a Manectric hold it to unleash its\n"
	.string "real potential.$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_0:
# 1023 "data/scripts/gym_scripts.pory"
	.string "Electrike: trike!$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_1:
# 1024 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, its fur looks like it\l"
	.string "has a lot of electricity.$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_2:
# 1029 "data/scripts/gym_scripts.pory"
	.string "Electrike: trike...$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_3:
# 1030 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems tired after today's\n"
	.string "battle, it let out a loud yawn.$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_4:
# 1034 "data/scripts/gym_scripts.pory"
	.string "Electrike: trike?$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_5:
# 1035 "data/scripts/gym_scripts.pory"
	.string "The Pokémon is chewing on a little toy.$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_6:
# 1041 "data/scripts/gym_scripts.pory"
	.string "Manectric: tric!$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_7:
# 1042 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems like it wants a\n"
	.string "rematch, it may even create\l"
	.string "thunderclouds.$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_8:
# 1046 "data/scripts/gym_scripts.pory"
	.string "Manectric: tric...$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_9:
# 1047 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems tired after today's\n"
	.string "battle, but it is still alert.$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_10:
# 1052 "data/scripts/gym_scripts.pory"
	.string "Manectric: ron!$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_11:
# 1053 "data/scripts/gym_scripts.pory"
	.string "The Pokémon is proudly wearing a collar\n"
	.string "with an stone attatched to it.$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_12:
# 1057 "data/scripts/gym_scripts.pory"
	.string "Manectric: tric?$"

MauvilleCity_Gym_EventScript_Gym_Electrike_Text_13:
# 1058 "data/scripts/gym_scripts.pory"
	.string "The Pokémon is currently eating\n"
	.string "something.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_0:
# 1123 "data/scripts/gym_scripts.pory"
	.string "Flannery: Come back tomorrow so we can\n"
	.string "battle again.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_1:
# 1130 "data/scripts/gym_scripts.pory"
	.string "Flannery: My Pokémon are tired for\n"
	.string "today, but the other trainers here need\l"
	.string "training, do you want to try battling\l"
	.string "them again?$"

LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_2:
# 1134 "data/scripts/gym_scripts.pory"
	.string "Flannery: I will tell them to get ready,\n"
	.string "so take care on your way out.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_3:
# 1150 "data/scripts/gym_scripts.pory"
	.string "{PLAYER} received the Heat Badge\n"
	.string "from Flannery.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_New_Text_4:
# 1162 "data/scripts/gym_scripts.pory"
	.string "That technical machine contains the\n"
	.string "move Will-o-Wisp.\p"
	.string "This move burns the target damaging\n"
	.string "the Pokémon every turn while also\l"
	.string "lowering its Physical Attack.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_0:
# 1224 "data/scripts/gym_scripts.pory"
	.string "Flannery: This move inflicts damage and\n"
	.string "always lowers the enemy Special Attack.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_1:
# 1232 "data/scripts/gym_scripts.pory"
	.string "Flannery: This move inflicts damage\n"
	.string "depending on the user's weight, use it\l"
	.string "with Pokémon like my Torkoal.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_2:
# 1240 "data/scripts/gym_scripts.pory"
	.string "Flannery: This is an Fire-type damage\n"
	.string "move made specially for Fire-type\l"
	.string "Pokémon with high Physical Attack.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_3:
# 1248 "data/scripts/gym_scripts.pory"
	.string "Flannery: This is one of the strongest\n"
	.string "Fire-type moves but it also lowers the\l"
	.string "user Special Attack after each use, use\l"
	.string "it only while you are in a pinch or with a\l"
	.string "Pokémon holding a White Herb.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_4:
# 1254 "data/scripts/gym_scripts.pory"
	.string "Flannery: Take this as an special gift\n"
	.string "from me, it's a Houndoomite.$"

LavaridgeTown_Gym_1F_EventScript_Flannery_Give_Gifts_Text_5:
# 1256 "data/scripts/gym_scripts.pory"
	.string "Make a Houndoom hold it to unleash its\n"
	.string "real potential.$"

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_0:
# 1307 "data/scripts/gym_scripts.pory"
	.string "Torkoal: koal!$"

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_1:
# 1308 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, the smoke on its back\l"
	.string "its really hot.$"

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_2:
# 1312 "data/scripts/gym_scripts.pory"
	.string "Torkoal: koal...$"

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_3:
# 1313 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems tired after today's\n"
	.string "battle, its better to leave it rest$"

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_4:
# 1317 "data/scripts/gym_scripts.pory"
	.string "Torkoal: koal?$"

LavaridgeTown_Gym_1F_EventScript_Gym_Torkoal_Text_5:
# 1318 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems curious about how\n"
	.string "strong you are.$"

PetalburgCity_Gym_EventScript_Norman_New_Text_0:
# 1344 "data/scripts/gym_scripts.pory"
	.string "Dad: {PLAYER}, please come back\n"
	.string "tomorrow so you can battle with your\l"
	.string "dad again.$"

PetalburgCity_Gym_EventScript_Norman_New_Text_1:
# 1351 "data/scripts/gym_scripts.pory"
	.string "Dad: {PLAYER}, I'm tired for today,\n"
	.string "but the trainers here need training,\l"
	.string "could you shape them a little?$"

PetalburgCity_Gym_EventScript_Norman_New_Text_2:
# 1355 "data/scripts/gym_scripts.pory"
	.string "Dad: I will tell them to get ready, so\n"
	.string "take care on your way out.$"

PetalburgCity_Gym_EventScript_Norman_New_Text_3:
# 1371 "data/scripts/gym_scripts.pory"
	.string "{PLAYER} received the Balance Badge\n"
	.string "from Norman.$"

PetalburgCity_Gym_EventScript_Norman_New_Text_4:
# 1383 "data/scripts/gym_scripts.pory"
	.string "That technical machine contains the\n"
	.string "move False swipe.\p"
	.string "This move inflicts damage but never\n"
	.string "defeats the target, its a perfect for\l"
	.string "catching wild Pokémon.$"

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_Text_0:
# 1445 "data/scripts/gym_scripts.pory"
	.string "Dad: This move lowers the target\n"
	.string "Special Attack by 1 stage.$"

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_Text_1:
# 1453 "data/scripts/gym_scripts.pory"
	.string "Dad: This move changes depending on\n"
	.string "where you use it, its great for Pokémon\l"
	.string "without a lot of variety.$"

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_Text_2:
# 1461 "data/scripts/gym_scripts.pory"
	.string "Dad: This move inflicts damage and\n"
	.string "becomes stronger if the user has.$"

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_Text_3:
# 1469 "data/scripts/gym_scripts.pory"
	.string "Dad: This is the strongest physical\n"
	.string "Normal-type move, it does not let you\l"
	.string "attack on the next turn, so use it\l"
	.string "wisely.$"

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_Text_4:
# 1475 "data/scripts/gym_scripts.pory"
	.string "Dad: Take this as an special gift from\n"
	.string "me, it's a Kangaskhanite.$"

PetalburgCity_Gym_EventScript_Norman_Give_Gifts_Text_5:
# 1477 "data/scripts/gym_scripts.pory"
	.string "Make a Kangaskhan hold it to unleash\n"
	.string "its real potential.$"

PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_0:
# 1531 "data/scripts/gym_scripts.pory"
	.string "Slakoth: koth!$"

PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_1:
# 1532 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems like it has some\n"
	.string "energy and wants to battle you.$"

PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_2:
# 1537 "data/scripts/gym_scripts.pory"
	.string "Slakoth: koth...$"

PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_3:
# 1538 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems tired after today's\n"
	.string "battle, it let out a really loud yawn.$"

PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_4:
# 1542 "data/scripts/gym_scripts.pory"
	.string "Slakoth: koth?$"

PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_5:
# 1543 "data/scripts/gym_scripts.pory"
	.string "The Pokémon is currently loafing around\n"
	.string "while looking at you.$"

PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_6:
# 1549 "data/scripts/gym_scripts.pory"
	.string "Vigoroth: roth!$"

PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_7:
# 1550 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, it looks determined\l"
	.string "to beat you.$"

PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_8:
# 1555 "data/scripts/gym_scripts.pory"
	.string "Vigoroth: roth...$"

PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_9:
# 1560 "data/scripts/gym_scripts.pory"
	.string "Vigoroth: roth!!$"

PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_10:
# 1561 "data/scripts/gym_scripts.pory"
	.string "The Pokémon is warmly welcoming you.$"

PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_11:
# 1567 "data/scripts/gym_scripts.pory"
	.string "Slaking: king!$"

PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_12:
# 1568 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems like it wants a\n"
	.string "rematch, it looks proud on how much you\l"
	.string "have grown.$"

PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_13:
# 1572 "data/scripts/gym_scripts.pory"
	.string "Slaking: king...$"

PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_14:
# 1573 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems tired after today's\n"
	.string "battle, but it still looks happy that\l"
	.string "you are so strong.$"

PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_15:
# 1577 "data/scripts/gym_scripts.pory"
	.string "Slaking: king!!$"

PetalburgCity_Gym_EventScript_Gym_Slakoth_Text_16:
# 1578 "data/scripts/gym_scripts.pory"
	.string "The Pokémon looks surprised on how muh\n"
	.string "you have grown.$"

FortreeCity_Gym_EventScript_Winona_New_Text_0:
# 1626 "data/scripts/gym_scripts.pory"
	.string "Winona: Come back tomorrow so we can\n"
	.string "battle again.$"

FortreeCity_Gym_EventScript_Winona_New_Text_1:
# 1633 "data/scripts/gym_scripts.pory"
	.string "Winona: My Pokémon are tired for today,\n"
	.string "but the other trainers here need\l"
	.string "training, do you want to try battling\l"
	.string "them again?$"

FortreeCity_Gym_EventScript_Winona_New_Text_2:
# 1637 "data/scripts/gym_scripts.pory"
	.string "Winona: I will tell them to get ready, so\n"
	.string "take care on your way out.$"

FortreeCity_Gym_EventScript_Winona_New_Text_3:
# 1653 "data/scripts/gym_scripts.pory"
	.string "{PLAYER} received the Feather Badge\n"
	.string "from Winona.$"

FortreeCity_Gym_EventScript_Winona_New_Text_4:
# 1665 "data/scripts/gym_scripts.pory"
	.string "That technical machine contains the\n"
	.string "move Roost.\p"
	.string "It's a move that cures your Flying-type\n"
	.string "Pokémon.$"

FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_0:
# 1727 "data/scripts/gym_scripts.pory"
	.string "Winona: This move inflicts damage and\n"
	.string "never fails, use it when you are low on\l"
	.string "accuracy.$"

FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_1:
# 1735 "data/scripts/gym_scripts.pory"
	.string "Winona: This move inflicts double the\n"
	.string "damage if its used by a Pokémon without\l"
	.string "a held item.$"

FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_2:
# 1743 "data/scripts/gym_scripts.pory"
	.string "Winona: This is a two turns Flying-type\n"
	.string "move, its really powerful and lets you\l"
	.string "stay out of the enemy range for 1 turn.$"

FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_3:
# 1751 "data/scripts/gym_scripts.pory"
	.string "Winona: This is one of the best\n"
	.string "Flying-type moves, it does a lot of\l"
	.string "damage but also hurts the user.$"

FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_4:
# 1757 "data/scripts/gym_scripts.pory"
	.string "Winona: Take this as an special gift\n"
	.string "from me, it's a Altaria.$"

FortreeCity_Gym_EventScript_Winona_Give_Gifts_Text_5:
# 1759 "data/scripts/gym_scripts.pory"
	.string "Make a Altaria hold it to unleash its\n"
	.string "real potential.$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_0:
# 1812 "data/scripts/gym_scripts.pory"
	.string "Taillow: low!$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_1:
# 1813 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, it is flying really\l"
	.string "fast.$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_2:
# 1818 "data/scripts/gym_scripts.pory"
	.string "Taillow: low...$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_3:
# 1819 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems tired after today's\n"
	.string "battle, it is currently eating a\l"
	.string "sunflower seed.$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_4:
# 1823 "data/scripts/gym_scripts.pory"
	.string "Taillow: low?$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_5:
# 1824 "data/scripts/gym_scripts.pory"
	.string "The Pokémon is looking confused on how\n"
	.string "you finished the puzzle.$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_6:
# 1830 "data/scripts/gym_scripts.pory"
	.string "Swellow: low!$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_7:
# 1831 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems like it wants a\n"
	.string "rematch, it is flying really fast.$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_8:
# 1835 "data/scripts/gym_scripts.pory"
	.string "Swellow: low...$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_9:
# 1836 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems tired after today's\n"
	.string "battle, it may want to rest a little\l"
	.string "more.$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_10:
# 1840 "data/scripts/gym_scripts.pory"
	.string "Swellow: low?$"

FortreeCity_Gym_EventScript_Gym_Taillow_Text_11:
# 1841 "data/scripts/gym_scripts.pory"
	.string "The Pokémon is currently looking at you\n"
	.string "while flying.$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_0:
# 1884 "data/scripts/gym_scripts.pory"
	.string "Tate: Please take$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_1:
# 1885 "data/scripts/gym_scripts.pory"
	.string "Liza: these items with you.$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_2:
# 1888 "data/scripts/gym_scripts.pory"
	.string "Tate: Come back tomorrow$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_3:
# 1889 "data/scripts/gym_scripts.pory"
	.string "Liza: so we can battle again.$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_4:
# 1896 "data/scripts/gym_scripts.pory"
	.string "Tate: Our Pokémon are tired for today,\n"
	.string "do you want to try battling them again?$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_5:
# 1897 "data/scripts/gym_scripts.pory"
	.string "Liza: but the other trainers here need\n"
	.string "training$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_6:
# 1898 "data/scripts/gym_scripts.pory"
	.string "Tate: Do you want to try battling them\n"
	.string "again?$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_7:
# 1902 "data/scripts/gym_scripts.pory"
	.string "Tate: I will tell them to get ready.$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_8:
# 1903 "data/scripts/gym_scripts.pory"
	.string "Liza: so take care on your way out.$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_9:
# 1920 "data/scripts/gym_scripts.pory"
	.string "{PLAYER} received the Mind Badge\n"
	.string "from Tate and Liza.$"

MossdeepCity_Gym_EventScript_TateAndLiza_New_Text_10:
# 1932 "data/scripts/gym_scripts.pory"
	.string "Tate: That technical machine contains\n"
	.string "the move Calm Mind.\p"
	.string "Liza: This move raises your Pokémon\n"
	.string "Special Attack and Special Defense at\l"
	.string "the same time.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_0:
# 1994 "data/scripts/gym_scripts.pory"
	.string "Tate: This move can only hit.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_1:
# 1995 "data/scripts/gym_scripts.pory"
	.string "Liza: if the Target is asleep.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_2:
# 2003 "data/scripts/gym_scripts.pory"
	.string "Tate: This move reverses the turn\n"
	.string "order.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_3:
# 2004 "data/scripts/gym_scripts.pory"
	.string "Liza: but only for 5 turns.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_4:
# 2012 "data/scripts/gym_scripts.pory"
	.string "Tate: This move inflicts damage.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_5:
# 2013 "data/scripts/gym_scripts.pory"
	.string "Liza: but its based on the target\n"
	.string "physical Defense.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_6:
# 2027 "data/scripts/gym_scripts.pory"
	.string "Tate: Take this as an special gift from\n"
	.string "us, it's a pair of Mega Stones.$"

MossdeepCity_Gym_EventScript_TateAndLiza_Give_Gifts_Text_7:
# 2030 "data/scripts/gym_scripts.pory"
	.string "Liza: Make a Gardevoir or a Gallade hold\n"
	.string "it to unleash their real potential.$"

MossdeepCity_Gym_EventScript_GymGuide_New_Text_0:
# 2056 "data/scripts/gym_scripts.pory"
	.string "Guide: Hello {PLAYER}, I see you came\n"
	.string "to this Gym again, do you want me to\l"
	.string "take you to the Leaders?$"

MossdeepCity_Gym_EventScript_GymGuide_New_Text_1:
# 2058 "data/scripts/gym_scripts.pory"
	.string "Let me tell them that you are here.$"

MossdeepCity_Gym_EventScript_Gym_Solrock_Text_0:
# 2081 "data/scripts/gym_scripts.pory"
	.string "Solrock: rock!$"

MossdeepCity_Gym_EventScript_Gym_Solrock_Text_1:
# 2082 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, it looks really bright.$"

MossdeepCity_Gym_EventScript_Gym_Solrock_Text_2:
# 2086 "data/scripts/gym_scripts.pory"
	.string "Solrock: rock...$"

MossdeepCity_Gym_EventScript_Gym_Solrock_Text_3:
# 2091 "data/scripts/gym_scripts.pory"
	.string "Solrock: rock?$"

MossdeepCity_Gym_EventScript_Gym_Lunatone_Text_0:
# 2104 "data/scripts/gym_scripts.pory"
	.string "Lunatone: tone!$"

MossdeepCity_Gym_EventScript_Gym_Lunatone_Text_1:
# 2109 "data/scripts/gym_scripts.pory"
	.string "Lunatone: tone...$"

MossdeepCity_Gym_EventScript_Gym_Lunatone_Text_2:
# 2114 "data/scripts/gym_scripts.pory"
	.string "Lunatone: tone?$"

SootopolisCity_Gym_1F_EventScript_Juan_New_Text_0:
# 2140 "data/scripts/gym_scripts.pory"
	.string "Juan: Come back tomorrow so we can\n"
	.string "battle again.$"

SootopolisCity_Gym_1F_EventScript_Juan_New_Text_1:
# 2147 "data/scripts/gym_scripts.pory"
	.string "Juan: My Pokémon are tired for today,\n"
	.string "but the other trainers here need\l"
	.string "training, do you want to try battling\l"
	.string "them again?$"

SootopolisCity_Gym_1F_EventScript_Juan_New_Text_2:
# 2151 "data/scripts/gym_scripts.pory"
	.string "Juan: I will tell them to get ready, so\n"
	.string "take care on your way out.$"

SootopolisCity_Gym_1F_EventScript_Juan_New_Text_3:
# 2180 "data/scripts/gym_scripts.pory"
	.string "That Technical Machine contains the\n"
	.string "move Water Pulse.\p"
	.string "This move inflicts damage and has a\n"
	.string "chance of confusing the target.$"

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_0:
# 2241 "data/scripts/gym_scripts.pory"
	.string "Juan: This move inflicts damage and has\n"
	.string "a high chance of burning the target.$"

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_1:
# 2249 "data/scripts/gym_scripts.pory"
	.string "Juan: This move does damages\n"
	.string "everything on the field even your\l"
	.string "allies.$"

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_2:
# 2257 "data/scripts/gym_scripts.pory"
	.string "Juan: This is a Physical oriented\n"
	.string "Water-type move, it can flinch the\l"
	.string "target.$"

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_3:
# 2265 "data/scripts/gym_scripts.pory"
	.string "Juan: This is one of the best physical\n"
	.string "Water-type moves it has a chance of\l"
	.string "lowering the target defense.$"

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_4:
# 2271 "data/scripts/gym_scripts.pory"
	.string "Juan: Take this as an special gift from\n"
	.string "me, it's an Gyarados.$"

SootopolisCity_Gym_1F_EventScript_Juan_Give_Gifts_Text_5:
# 2273 "data/scripts/gym_scripts.pory"
	.string "Make an Gyarados hold it to unleash its\n"
	.string "real potential.$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_0:
# 2325 "data/scripts/gym_scripts.pory"
	.string "Horsea: sea!$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_1:
# 2326 "data/scripts/gym_scripts.pory"
	.string "The Pokémon seems like it wants a\n"
	.string "rematch with You, it looks really\l"
	.string "excited.$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_2:
# 2331 "data/scripts/gym_scripts.pory"
	.string "Horsea: sea...$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_3:
# 2336 "data/scripts/gym_scripts.pory"
	.string "Horsea: sea?$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_4:
# 2337 "data/scripts/gym_scripts.pory"
	.string "The Pokémon is currently looking\n"
	.string "shooting ink from its mouth.$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_5:
# 2343 "data/scripts/gym_scripts.pory"
	.string "Seadra: dra!$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_6:
# 2348 "data/scripts/gym_scripts.pory"
	.string "Seadra: dra...$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_7:
# 2353 "data/scripts/gym_scripts.pory"
	.string "Seadra: dra?$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_8:
# 2354 "data/scripts/gym_scripts.pory"
	.string "The Pokémon is currently looking at\n"
	.string "some ring targets.$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_9:
# 2360 "data/scripts/gym_scripts.pory"
	.string "Seaking: ron!$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_10:
# 2366 "data/scripts/gym_scripts.pory"
	.string "Seaking: king...$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_11:
# 2372 "data/scripts/gym_scripts.pory"
	.string "Seaking: king?$"

SootopolisCity_Gym_1F_EventScript_Gym_Horsea_Text_12:
# 2373 "data/scripts/gym_scripts.pory"
	.string "The Pokémon is currently shooting some\n"
	.string "ring targets.$"

Common_Eventscript_Gym_Leader_Falkner_Text_0:
# 2411 "data/scripts/gym_scripts.pory"
	.string "Falkner: Hi! I've been waiting for you!\n"
	.string "It's a pleasure to be able to battle you\l"
	.string "again.$"

Common_Eventscript_Gym_Leader_Falkner_Text_1:
# 2416 "data/scripts/gym_scripts.pory"
	.string "Falkner: Mmm... It's still a long way to\n"
	.string "become the best Trainer, but I won't\l"
	.string "give up!$"

Common_Eventscript_Gym_Leader_Falkner_Text_2:
# 2420 "data/scripts/gym_scripts.pory"
	.string "Falkner: Come back tomorrow so we can\n"
	.string "battle again.$"

Common_Eventscript_Gym_Leader_Falkner_Text_3:
# 2426 "data/scripts/gym_scripts.pory"
	.string "Falkner: My Pokémon are tired for\n"
	.string "today, but the other trainers here need\l"
	.string "training, do you want to try battling\l"
	.string "them again?$"

Common_Eventscript_Gym_Leader_Falkner_Text_4:
# 2430 "data/scripts/gym_scripts.pory"
	.string "Falkner: I will tell them to get ready,\n"
	.string "so take care on your way out.$"

Common_Eventscript_Gym_Leader_Falkner_Text_5:
# 2442 "data/scripts/gym_scripts.pory"
	.string "I'm Falkner, this Island Pokémon Gym\n"
	.string "Leader! People say you can clip\l"
	.string "Flying-type Pokémon's wings with a jolt\l"
	.string "of electricity... I won't allow such\l"
	.string "insults to bird Pokémon! I'll show you\l"
	.string "the real power of the magnificent bird\l"
	.string "Pokémon!$"

Common_Eventscript_Gym_Leader_Falkner_Text_6:
# 2446 "data/scripts/gym_scripts.pory"
	.string "For pity's sake! My dad's cherished bird\n"
	.string "Pokémon... But a defeat is a defeat. All\l"
	.string "right. Take this official Pokémon\l"
	.string "League Badge. This one is the Zephyr\l"
	.string "Badge.$"

Common_Eventscript_Gym_Leader_Falkner_Text_7:
# 2447 "data/scripts/gym_scripts.pory"
	.string "{PLAYER} received the Zephyr Badge\n"
	.string "from Falkner.$"

Common_Eventscript_Gym_Leader_Falkner_Text_8:
# 2461 "data/scripts/gym_scripts.pory"
	.string "I'm going to train harder to become the\n"
	.string "greatest Bird Keeper of all so let's\l"
	.string "fight again tomorrow!$"

Common_Eventscript_Gym_Leader_Falkner_Give_Gifts_Text_0:
# 2493 "data/scripts/gym_scripts.pory"
	.string "Please take this item with you.$"

Common_Eventscript_Gym_Leader_Falkner_Battle_New_Text_0:
# 2538 "data/scripts/gym_scripts.pory"
	.string "...Darn! My Dad's cherished bird\n"
	.string "Pokémon...$"

Common_Eventscript_Gym_Leader_Falkner_Battle_New_Text_1:
# 2545 "data/scripts/gym_scripts.pory"
	.string "A defeat is a defeat. You are strong\n"
	.string "indeed. I'm going to train harder with my\l"
	.string "Pokémon to become the greatest Bird\l"
	.string "Keeper of all!$"

Common_Eventscript_Gym_Leader_Falkner_Battle_New_Text_2:
# 2548 "data/scripts/gym_scripts.pory"
	.string "I understand... I'll bow out gracefully.$"

Common_Eventscript_Gym_Leader_Bugsy_Text_0:
# 2562 "data/scripts/gym_scripts.pory"
	.string "Bugsy: Good to see you again! Behold my\n"
	.string "bug research!$"

Common_Eventscript_Gym_Leader_Bugsy_Text_1:
# 2567 "data/scripts/gym_scripts.pory"
	.string "Bugsy: You must have studied a lot\n"
	.string "about Pokémon!$"

Common_Eventscript_Gym_Leader_Bugsy_Text_2:
# 2571 "data/scripts/gym_scripts.pory"
	.string "Bugsy: Come back tomorrow so we can\n"
	.string "battle again.$"

Common_Eventscript_Gym_Leader_Bugsy_Text_3:
# 2577 "data/scripts/gym_scripts.pory"
	.string "Bugsy: My Pokémon are tired for today,\n"
	.string "but the other trainers here need\l"
	.string "training, do you want to try battling\l"
	.string "them again?$"

Common_Eventscript_Gym_Leader_Bugsy_Text_4:
# 2581 "data/scripts/gym_scripts.pory"
	.string "Bugsy: I will tell them to get ready, so\n"
	.string "take care on your way out.$"

Common_Eventscript_Gym_Leader_Bugsy_Text_5:
# 2593 "data/scripts/gym_scripts.pory"
	.string "I'm Bugsy! I never lose when it comes to\n"
	.string "bug Pokémon. My research is going to\l"
	.string "make me the authority on bug Pokémon!\l"
	.string "Let me demonstrate what I've learned\l"
	.string "from my studies.$"

Common_Eventscript_Gym_Leader_Bugsy_Text_6:
# 2597 "data/scripts/gym_scripts.pory"
	.string "Whoa, amazing! You're an expert on\n"
	.string "Pokémon! My research isn't complete\l"
	.string "yet. OK, you win. Take this Badge.$"

Common_Eventscript_Gym_Leader_Bugsy_Text_7:
# 2598 "data/scripts/gym_scripts.pory"
	.string "{PLAYER} received the Hive Badge\n"
	.string "from Bugsy.$"

Common_Eventscript_Gym_Leader_Bugsy_Text_8:
# 2611 "data/scripts/gym_scripts.pory"
	.string "Bug-type Pokémon are deep. There are\n"
	.string "many mysteries to explore. Study your\l"
	.string "top choices thoroughly. Let's fight\l"
	.string "again tomorrow!$"

Common_Eventscript_Gym_Leader_Bugsy_Battle_New_Text_0:
# 2688 "data/scripts/gym_scripts.pory"
	.string "Aw, that's the end of it...$"

Common_Eventscript_Gym_Leader_Bugsy_Battle_New_Text_1:
# 2695 "data/scripts/gym_scripts.pory"
	.string "Whoa, amazing! You're an expert on\n"
	.string "Pokémon!$"

Common_Eventscript_Gym_Leader_Bugsy_Battle_New_Text_2:
# 2698 "data/scripts/gym_scripts.pory"
	.string "Whoa, amazing!$"

Common_Eventscript_Gym_Leader_Whitney_Text_0:
# 2712 "data/scripts/gym_scripts.pory"
	.string "Whitney: I never break my promises! Are\n"
	.string "you ready?$"

Common_Eventscript_Gym_Leader_Whitney_Text_1:
# 2717 "data/scripts/gym_scripts.pory"
	.string "Whitney: You really are strong! But I\n"
	.string "won't lose next time!$"

Common_Eventscript_Gym_Leader_Whitney_Text_2:
# 2721 "data/scripts/gym_scripts.pory"
	.string "Whitney: Come back tomorrow so we can\n"
	.string "battle again.$"

Common_Eventscript_Gym_Leader_Whitney_Text_3:
# 2727 "data/scripts/gym_scripts.pory"
	.string "Whitney: My Pokémon are tired for\n"
	.string "today, but the other trainers here need\l"
	.string "training, do you want to try battling\l"
	.string "them again?$"

Common_Eventscript_Gym_Leader_Whitney_Text_4:
# 2731 "data/scripts/gym_scripts.pory"
	.string "Whitney: I will tell them to get ready,\n"
	.string "so take care on your way out.$"

Common_Eventscript_Gym_Leader_Whitney_Text_5:
# 2743 "data/scripts/gym_scripts.pory"
	.string "Hi! I'm Whitney! Everyone was into\n"
	.string "Pokémon, so I got into it too! Pokémon\l"
	.string "are super-cute! You want to battle? I'm\l"
	.string "warning you--I'm good!$"

Common_Eventscript_Gym_Leader_Whitney_Text_6:
# 2747 "data/scripts/gym_scripts.pory"
	.string "...Sniff... What? What do you want? A\n"
	.string "Badge? Oh, right. I forgot. Here's Plain\l"
	.string "Badge, isn't it just perfect for a cutie\l"
	.string "like me?$"

Common_Eventscript_Gym_Leader_Whitney_Text_7:
# 2748 "data/scripts/gym_scripts.pory"
	.string "{PLAYER} received the Plain Badge\n"
	.string "from Whitney.$"

Common_Eventscript_Gym_Leader_Whitney_Text_8:
# 2761 "data/scripts/gym_scripts.pory"
	.string "Ah, that was a good cry! Come for a visit\n"
	.string "again! Bye-bye!$"

Common_Eventscript_Gym_Leader_Whitney_Battle_New_Text_0:
# 2838 "data/scripts/gym_scripts.pory"
	.string "Sob... ...Waaaaaaah! You're mean! You\n"
	.string "shouldn't be so serious! You...you child,\l"
	.string "you! Waaaaah! Waaaaah! ...Snivel, hic...\l"
	.string "...You meanie!$"

Common_Eventscript_Gym_Leader_Whitney_Battle_New_Text_1:
# 2845 "data/scripts/gym_scripts.pory"
	.string "Poor me!$"

Common_Eventscript_Gym_Leader_Whitney_Battle_New_Text_2:
# 2848 "data/scripts/gym_scripts.pory"
	.string "Waaaaah! Waaaaah! ...Snivel, hic. ... You\n"
	.string "meanie!$"

Common_Eventscript_Gym_Leader_Morty_Text_0:
# 2862 "data/scripts/gym_scripts.pory"
	.string "Morty: I was just talking about you...\n"
	.string "Let's battle!$"

Common_Eventscript_Gym_Leader_Morty_Text_1:
# 2867 "data/scripts/gym_scripts.pory"
	.string "Morty: I've lost again... You may have\n"
	.string "something more than just strength.$"

Common_Eventscript_Gym_Leader_Morty_Text_2:
# 2871 "data/scripts/gym_scripts.pory"
	.string "Morty: Come back tomorrow so we can\n"
	.string "battle again.$"

Common_Eventscript_Gym_Leader_Morty_Text_3:
# 2877 "data/scripts/gym_scripts.pory"
	.string "Morty: My Pokémon are tired for today,\n"
	.string "but the other trainers here need\l"
	.string "training, do you want to try battling\l"
	.string "them again?$"

Common_Eventscript_Gym_Leader_Morty_Text_4:
# 2881 "data/scripts/gym_scripts.pory"
	.string "Morty: I will tell them to get ready, so\n"
	.string "take care on your way out.$"

Common_Eventscript_Gym_Leader_Morty_Text_5:
# 2893 "data/scripts/gym_scripts.pory"
	.string "Whether you choose to believe or not,\n"
	.string "mystic power does exist.\p"
	.string "You can bear witness to the fruits of\n"
	.string "my training.\p"
	.string "You must make your soul one with that\n"
	.string "of Pokémon. Can you do this?$"

Common_Eventscript_Gym_Leader_Morty_Text_6:
# 2897 "data/scripts/gym_scripts.pory"
	.string "I don't think our potentials are so\n"
	.string "different. But you seem to have\l"
	.string "something more than that... So be it.\l"
	.string "This Badge is yours.$"

Common_Eventscript_Gym_Leader_Morty_Text_7:
# 2898 "data/scripts/gym_scripts.pory"
	.string "{PLAYER} received the Fog Badge from\n"
	.string "Morty.$"

Common_Eventscript_Gym_Leader_Morty_Text_8:
# 2911 "data/scripts/gym_scripts.pory"
	.string "I see... Your journey has taken you to\n"
	.string "far-away places. And you have\l"
	.string "witnessed much more than I. I envy you\l"
	.string "for that...$"

Common_Eventscript_Gym_Leader_Morty_Battle_New_Text_0:
# 2988 "data/scripts/gym_scripts.pory"
	.string "How is this possible...$"

Common_Eventscript_Gym_Leader_Morty_Battle_New_Text_1:
# 2995 "data/scripts/gym_scripts.pory"
	.string "I'm not good enough yet...$"

Common_Eventscript_Gym_Leader_Chuck_Text_0:
# 3012 "data/scripts/gym_scripts.pory"
	.string "Chuck: There you are! Taste my 24-hour\n"
	.string "training!$"

Common_Eventscript_Gym_Leader_Chuck_Text_1:
# 3017 "data/scripts/gym_scripts.pory"
	.string "Chuck: Wahaha! A battle with you is\n"
	.string "never boring!$"

Common_Eventscript_Gym_Leader_Chuck_Text_2:
# 3021 "data/scripts/gym_scripts.pory"
	.string "Chuck: Come back tomorrow so we can\n"
	.string "battle again.$"

Common_Eventscript_Gym_Leader_Chuck_Text_3:
# 3027 "data/scripts/gym_scripts.pory"
	.string "Chuck: My Pokémon are tired for today,\n"
	.string "but the other trainers here need\l"
	.string "training, do you want to try battling\l"
	.string "them again?$"

Common_Eventscript_Gym_Leader_Chuck_Text_4:
# 3031 "data/scripts/gym_scripts.pory"
	.string "Chuck: I will tell them to get ready, so\n"
	.string "take care on your way out.$"

Common_Eventscript_Gym_Leader_Chuck_Text_5:
# 3043 "data/scripts/gym_scripts.pory"
	.string "WAHAHAH! So you've come this far! Let\n"
	.string "me tell you, I'm tough!\p"
	.string "I can crush stones and shatter bones!\p"
	.string "Scared now, are you? What? It has\n"
	.string "nothing to do with Pokémon? That's\l"
	.string "true! Come on. We shall do battle!$"

Common_Eventscript_Gym_Leader_Chuck_Text_6:
# 3047 "data/scripts/gym_scripts.pory"
	.string "Hmm... I lost? How about that! All right.\n"
	.string "You're worthy of the Storm Badge!$"

Common_Eventscript_Gym_Leader_Chuck_Text_7:
# 3048 "data/scripts/gym_scripts.pory"
	.string "{PLAYER} received the Storm Badge\n"
	.string "from Chuck.$"

Common_Eventscript_Gym_Leader_Chuck_Text_8:
# 3061 "data/scripts/gym_scripts.pory"
	.string "Wahahah! I enjoyed battling you! But a\n"
	.string "loss is a loss! From now on, I'm going to\l"
	.string "train 24 hours a day!$"

Common_Eventscript_Gym_Leader_Chuck_Battle_New_Text_0:
# 3138 "data/scripts/gym_scripts.pory"
	.string "Wha? Huh? I lost?...$"

Common_Eventscript_Gym_Leader_Chuck_Battle_New_Text_1:
# 3145 "data/scripts/gym_scripts.pory"
	.string "Wahaha! I enjoyed battling you.$"

Common_Eventscript_Gym_Leader_Jasmine_Text_0:
# 3162 "data/scripts/gym_scripts.pory"
	.string "Jasmine: We're here as we promised... Are\n"
	.string "you prepared?$"

Common_Eventscript_Gym_Leader_Jasmine_Text_1:
# 3167 "data/scripts/gym_scripts.pory"
	.string "Jasmine: Properly tempered steel won't\n"
	.string "be made rusty by things like this!$"

Common_Eventscript_Gym_Leader_Jasmine_Text_2:
# 3171 "data/scripts/gym_scripts.pory"
	.string "Jasmine: Come back tomorrow so we can\n"
	.string "battle again.$"

Common_Eventscript_Gym_Leader_Jasmine_Text_3:
# 3177 "data/scripts/gym_scripts.pory"
	.string "Jasmine: My Pokémon are tired for\n"
	.string "today, but the other trainers here need\l"
	.string "training, do you want to try battling\l"
	.string "them again?$"

Common_Eventscript_Gym_Leader_Jasmine_Text_4:
# 3181 "data/scripts/gym_scripts.pory"
	.string "Jasmine: I will tell them to get ready,\n"
	.string "so take care on your way out.$"

Common_Eventscript_Gym_Leader_Jasmine_Text_5:
# 3193 "data/scripts/gym_scripts.pory"
	.string "Please allow me to introduce myself. I'm\n"
	.string "Jasmine, a Gym Leader. I use the...clang!\l"
	.string "Steel type! ...Do you know about the\l"
	.string "Steel type? They are very hard, cold,\l"
	.string "sharp, and really strong! Um... I'm not\l"
	.string "lying.$"

Common_Eventscript_Gym_Leader_Jasmine_Text_6:
# 3197 "data/scripts/gym_scripts.pory"
	.string "You are a better trainer than me, in\n"
	.string "both skill and kindness. In accordance\l"
	.string "with League rules, I confer upon you\l"
	.string "this Badge.$"

Common_Eventscript_Gym_Leader_Jasmine_Text_7:
# 3198 "data/scripts/gym_scripts.pory"
	.string "{PLAYER} received the Mineral Badge\n"
	.string "from Jasmine.$"

Common_Eventscript_Gym_Leader_Jasmine_Text_8:
# 3211 "data/scripts/gym_scripts.pory"
	.string "Um... I don't know how to say this, but\n"
	.string "good luck...$"

Common_Eventscript_Gym_Leader_Jasmine_Battle_New_Text_0:
# 3288 "data/scripts/gym_scripts.pory"
	.string "Well done...$"

Common_Eventscript_Gym_Leader_Jasmine_Battle_New_Text_1:
# 3295 "data/scripts/gym_scripts.pory"
	.string "True to your reputation...$"

Common_Eventscript_Gym_Leader_Pryce_Text_0:
# 3312 "data/scripts/gym_scripts.pory"
	.string "Pryce: Finally. No need for words. A\n"
	.string "Pokémon battle is the way for us to\l"
	.string "communicate.$"

Common_Eventscript_Gym_Leader_Pryce_Text_1:
# 3317 "data/scripts/gym_scripts.pory"
	.string "Pryce: If it's someone like you, I'm sure\n"
	.string "you'll keep winning and will find\l"
	.string "something important. Keep it up.$"

Common_Eventscript_Gym_Leader_Pryce_Text_2:
# 3321 "data/scripts/gym_scripts.pory"
	.string "Pryce: Come back tomorrow so we can\n"
	.string "battle again.$"

Common_Eventscript_Gym_Leader_Pryce_Text_3:
# 3327 "data/scripts/gym_scripts.pory"
	.string "Pryce: My Pokémon are tired for today,\n"
	.string "but the other trainers here need\l"
	.string "training, do you want to try battling\l"
	.string "them again?$"

Common_Eventscript_Gym_Leader_Pryce_Text_4:
# 3331 "data/scripts/gym_scripts.pory"
	.string "Pryce: I will tell them to get ready, so\n"
	.string "take care on your way out.$"

Common_Eventscript_Gym_Leader_Pryce_Text_5:
# 3343 "data/scripts/gym_scripts.pory"
	.string "Pokémon have many experiences in their\n"
	.string "lives, just like we do. I, too, have seen\l"
	.string "and suffered much in my life. Since I am\l"
	.string "your elder, let me show you what I mean.\l"
	.string "I have been with Pokémon since before\l"
	.string "you were born. I do not lose easily. I,\l"
	.string "Pryce--the winter trainer--shall\l"
	.string "demonstrate my power!$"

Common_Eventscript_Gym_Leader_Pryce_Text_6:
# 3347 "data/scripts/gym_scripts.pory"
	.string "I am impressed by your prowess. With\n"
	.string "your strong will, I know you will\l"
	.string "overcome all life's obstacles. You are\l"
	.string "worthy of this Badge!$"

Common_Eventscript_Gym_Leader_Pryce_Text_7:
# 3348 "data/scripts/gym_scripts.pory"
	.string "{PLAYER} received the Glacier Badge\n"
	.string "from Pryce.$"

Common_Eventscript_Gym_Leader_Pryce_Text_8:
# 3361 "data/scripts/gym_scripts.pory"
	.string "When the ice and snow melt, spring\n"
	.string "arrives. You and your Pokémon will be\l"
	.string "together for many years to come.\l"
	.string "Cherish your time together!$"

Common_Eventscript_Gym_Leader_Pryce_Battle_New_Text_0:
# 3437 "data/scripts/gym_scripts.pory"
	.string "Hmm. Seems as if my luck has run out.$"

Common_Eventscript_Gym_Leader_Pryce_Battle_New_Text_1:
# 3444 "data/scripts/gym_scripts.pory"
	.string "Mmm... Impressive!$"

Common_Eventscript_Gym_Leader_Clair_Text_0:
# 3462 "data/scripts/gym_scripts.pory"
	.string "...You are here. Now let's battle!$"

Common_Eventscript_Gym_Leader_Clair_Text_1:
# 3467 "data/scripts/gym_scripts.pory"
	.string "Way to go. ... Now give it your all!$"

Common_Eventscript_Gym_Leader_Clair_Text_2:
# 3471 "data/scripts/gym_scripts.pory"
	.string "Come back tomorrow so we can battle\n"
	.string "again.$"

Common_Eventscript_Gym_Leader_Clair_Text_3:
# 3477 "data/scripts/gym_scripts.pory"
	.string "My Pokémon are tired for today, but the\n"
	.string "other trainers here need training, do\l"
	.string "you want to try battling them again?$"

Common_Eventscript_Gym_Leader_Clair_Text_4:
# 3481 "data/scripts/gym_scripts.pory"
	.string "I will tell them to get ready, so take\n"
	.string "care on your way out.$"

Common_Eventscript_Gym_Leader_Clair_Text_5:
# 3493 "data/scripts/gym_scripts.pory"
	.string "I am Clair. The world's best Dragon\n"
	.string "master. I can hold my own against even\l"
	.string "the Pokémon League's Elite Four. Do you\l"
	.string "still want to take me on? ...Fine. Let's\l"
	.string "do it! As a trainer, I will use my full\l"
	.string "power against any opponent!$"

Common_Eventscript_Gym_Leader_Clair_Text_6:
# 3497 "data/scripts/gym_scripts.pory"
	.string "What I was missing until now... Battling\n"
	.string "with you made me realize what it is.\l"
	.string "That's how I feel. You are worthy of\l"
	.string "this Badge!$"

Common_Eventscript_Gym_Leader_Clair_Text_7:
# 3498 "data/scripts/gym_scripts.pory"
	.string "{PLAYER} received the Rising Badge\n"
	.string "from Clair.$"

Common_Eventscript_Gym_Leader_Clair_Text_8:
# 3511 "data/scripts/gym_scripts.pory"
	.string "Whatever you have to face from now,\n"
	.string "don't you dare give up! If you do, I'll\l"
	.string "feel even worse about having lost to\l"
	.string "you! Give it your all.$"

Common_Eventscript_Gym_Leader_Clair_Battle_New_Text_0:
# 3587 "data/scripts/gym_scripts.pory"
	.string "I lost? I don't believe it. There must be\n"
	.string "some mistake... ...You can brag about it.\l"
	.string "Because you beat me!$"

Common_Eventscript_Gym_Leader_Clair_Battle_New_Text_1:
# 3594 "data/scripts/gym_scripts.pory"
	.string "It's over...$"

Common_Eventscript_Gym_Leader_Clair_Battle_New_Text_2:
# 3597 "data/scripts/gym_scripts.pory"
	.string "Oh, I see..$"

Special_Gym_Text_Explain_Item_01::
# 22 "data/scripts/gym_scripts.pory"
	.string "This item is the Axe. You can use it cut\n"
	.string "small trees on your path.$"

Special_Gym_Text_Explain_Item_02::
# 32 "data/scripts/gym_scripts.pory"
	.string "This item is the Waterfall Tool. It lets\n"
	.string "you ascend using any waterfall you\l"
	.string "find.$"

Special_Gym_Text_Explain_Item_03::
# 37 "data/scripts/gym_scripts.pory"
	.string "This item is the Good Rod. You can use it\n"
	.string "to find stronger Pokémon than the Old\l"
	.string "Rod.$"

Special_Gym_Text_Explain_Item_04::
# 42 "data/scripts/gym_scripts.pory"
	.string "This item is the Pickaxe. It lets you\n"
	.string "break small rocks.$"

Special_Gym_Text_Explain_Item_05::
# 47 "data/scripts/gym_scripts.pory"
	.string "This item is a Catching Charm. It\n"
	.string "increase the chance of getting a\l"
	.string "critical catch.$"

Special_Gym_Text_Explain_Item_06::
# 52 "data/scripts/gym_scripts.pory"
	.string "This item is the Power Glove. It lets you\n"
	.string "move big rocks.$"

Special_Gym_Text_Explain_Item_07::
# 57 "data/scripts/gym_scripts.pory"
	.string "This item is the Rock Climb Tool. It lets\n"
	.string "ascend or descend using any rocky\l"
	.string "path.$"

Special_Gym_Text_Explain_Item_08::
# 62 "data/scripts/gym_scripts.pory"
	.string "This item is the Super Rod. Its the\n"
	.string "ultimate Rod you can find, its used by\l"
	.string "the pros for catching the strongest\l"
	.string "water Pokémon.$"

Special_Gym_Text_Explain_Item_09::
# 67 "data/scripts/gym_scripts.pory"
	.string "This item is the Fly Charm. It lets you\n"
	.string "use the Flying taxis for free.$"

Special_Gym_Text_Explain_Item_10::
# 72 "data/scripts/gym_scripts.pory"
	.string "This item is the Flying Mount. It lets\n"
	.string "you move use Fly using your own Pokémon\l"
	.string "at any time!$"

Special_Gym_Text_Explain_Item_11::
# 77 "data/scripts/gym_scripts.pory"
	.string "This item is the Mega Bracelet. This\n"
	.string "item will make you able to Mega Evolve\l"
	.string "your Pokémon Pressing Start with a\l"
	.string "Pokémon that can Mega Evolve in Battle.$"

Special_Gym_Text_Explain_Item_12::
# 82 "data/scripts/gym_scripts.pory"
	.string "This item is the Exp Charm. This item will\n"
	.string "make it so you receive double the\l"
	.string "Experience from battle.$"

Special_Gym_Text_Explain_Item_13::
# 87 "data/scripts/gym_scripts.pory"
	.string "This item is an Oval Charm. Its an item\n"
	.string "that doubles the possibilites of\l"
	.string "getting an Baby Pokémon from the\l"
	.string "Daycare.$"

Special_Gym_Text_Explain_Item_14::
# 92 "data/scripts/gym_scripts.pory"
	.string "This item is the Casino Charm. It will let\n"
	.string "you use any of the casino machines for\l"
	.string "free.$"

Special_Gym_Text_Explain_Item_15::
# 97 "data/scripts/gym_scripts.pory"
	.string "This item is the Wonder Charm. It will\n"
	.string "let you Wonder Trade for free.$"

Special_Gym_Text_Explain_Item_16::
# 102 "data/scripts/gym_scripts.pory"
	.string "This item is the Shiny Charm. Its an item\n"
	.string "that doubles the possibilites of\l"
	.string "getting a shiny Pokémon.$"

MauvilleCity_Gym_Text_WattsonIntro::
# 1086 "data/scripts/gym_scripts.pory"
	.string "I've given up on my plans to convert\n"
	.string "the city, I have.\p"
	.string "And so, I put my time into making\n"
	.string "door traps in my Gym.\p"
	.string "Oh? Now, what are you doing here?\p"
	.string "What's that? You say you've gotten\n"
	.string "past all my rigged doors?\p"
	.string "Wahahahah!\n"
	.string "Now, that is amusing!\p"
	.string "Then, I, Wattson, the Leader of\n"
	.string "Mauville Gym, shall electrify you!$"

MauvilleCity_Gym_Text_WattsonIntro_New::
# 1100 "data/scripts/gym_scripts.pory"
	.string "What? You say you've gotten past all my\n"
	.string "rigged doors? Wahahahah! Now, that is\l"
	.string "amusing! The plans to reform Mauville\l"
	.string "are done for now. Making traps for my\l"
	.string "Gym and battling with young Trainers\l"
	.string "like you are the things I live for now!\l"
	.string "Then I, Wattson, the Leader of Mauville\l"
	.string "Gym, shall electrify you!$"
