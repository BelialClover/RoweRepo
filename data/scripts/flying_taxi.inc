Common_EventScript_FlyingTaxi::
# 2 "data/scripts/flying_taxi.pory"
	lock
# 3 "data/scripts/flying_taxi.pory"
	faceplayer
# 4 "data/scripts/flying_taxi.pory"
	setvar VAR_0x800A, LAST_TALKED_TO_FLYING_TAXI
# 5 "data/scripts/flying_taxi.pory"
	checkitem ITEM_FLY_CHARM, 1
# 6 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_FlyingTaxi_2
# 12 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_FlyingTaxi_Text_1, MSGBOX_YESNO
Common_EventScript_FlyingTaxi_1:
# 14 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, YES
	goto_if_eq Common_EventScript_FlyingTaxi_6
Common_EventScript_FlyingTaxi_5:
# 35 "data/scripts/flying_taxi.pory"
	checkitem ITEM_FLY_CHARM, 1
# 36 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_FlyingTaxi_9
Common_EventScript_FlyingTaxi_8:
# 39 "data/scripts/flying_taxi.pory"
	msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
# 40 "data/scripts/flying_taxi.pory"
	setvar VAR_LAST_TALKED, 0
# 41 "data/scripts/flying_taxi.pory"
	releaseall
	end

Common_EventScript_FlyingTaxi_2:
# 7 "data/scripts/flying_taxi.pory"
	setvar VAR_SHOP_MONEY_TYPE, MART_MONEY_TYPE_BATTLE_POINTS
# 8 "data/scripts/flying_taxi.pory"
	showmoneybox 0, 0, 0
# 9 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_FlyingTaxi_Text_0, MSGBOX_YESNO
	goto Common_EventScript_FlyingTaxi_1

Common_EventScript_FlyingTaxi_6:
# 16 "data/scripts/flying_taxi.pory"
	checkitem ITEM_FLY_CHARM, 1
# 17 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_FlyingTaxi_12
Common_EventScript_FlyingTaxi_11:
# 21 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_FlyingTaxi_14
# 26 "data/scripts/flying_taxi.pory"
	checkitem ITEM_FLY_CHARM, 1
# 27 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_FlyingTaxi_18
Common_EventScript_FlyingTaxi_17:
# 32 "data/scripts/flying_taxi.pory"
	special FieldLoadFlyMap
	goto Common_EventScript_FlyingTaxi_5

Common_EventScript_FlyingTaxi_9:
# 37 "data/scripts/flying_taxi.pory"
	hidemoneybox
	goto Common_EventScript_FlyingTaxi_8

Common_EventScript_FlyingTaxi_12:
# 18 "data/scripts/flying_taxi.pory"
	checkmoney FLYING_TAXIS_PRICE, 0
	goto Common_EventScript_FlyingTaxi_11

Common_EventScript_FlyingTaxi_14:
# 22 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_FlyingTaxi_Text_2, MSGBOX_DEFAULT
# 23 "data/scripts/flying_taxi.pory"
	setvar VAR_SHOP_MONEY_TYPE, 0
	goto Common_EventScript_FlyingTaxi_5

Common_EventScript_FlyingTaxi_18:
# 28 "data/scripts/flying_taxi.pory"
	playse SE_SHOP
# 29 "data/scripts/flying_taxi.pory"
	setflag FLAG_USING_FLYING_TAXIS
# 30 "data/scripts/flying_taxi.pory"
	hidemoneybox
	goto Common_EventScript_FlyingTaxi_17


LilycoveCity_Harbor_EventScript_ExitSailSelect::
# 64 "data/scripts/flying_taxi.pory"
	msgbox LilycoveCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 65 "data/scripts/flying_taxi.pory"
	release
	end


LilycoveCity_Harbor_EventScript_FerryAttendant::
# 70 "data/scripts/flying_taxi.pory"
	lock
# 71 "data/scripts/flying_taxi.pory"
	faceplayer
# 72 "data/scripts/flying_taxi.pory"
	msgbox LilycoveCity_Harbor_EventScript_FerryAttendant_Text_0, MSGBOX_DEFAULT
# 75 "data/scripts/flying_taxi.pory"
	goto LilycoveCity_Harbor_EventScript_Ferry_Location_Select
	end


LilycoveCity_Harbor_EventScript_Ferry_Location_Select::
# 80 "data/scripts/flying_taxi.pory"
	clearflag FLAG_SAILED_FROM_SLATEPORT
# 81 "data/scripts/flying_taxi.pory"
	msgbox LilycoveCity_Harbor_EventScript_Ferry_Location_Select_Text_0, MSGBOX_DEFAULT
# 82 "data/scripts/flying_taxi.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, LilycoveCity_Harbor_EventScript_Ferry_Location_Select_2
# 92 "data/scripts/flying_taxi.pory"
	scrollingmultichoice SCROLLING_LILYCOVE_HARBOR_AFTER_LEAGUE_OPTIONS, 0, 0, 4, TRUE
# 93 "data/scripts/flying_taxi.pory"
	goto Common_Evenscript_WarpUsingFerry
LilycoveCity_Harbor_EventScript_Ferry_Location_Select_1:
# 95 "data/scripts/flying_taxi.pory"
	waitstate
# 96 "data/scripts/flying_taxi.pory"
	release
	end

LilycoveCity_Harbor_EventScript_Ferry_Location_Select_2:
# 83 "data/scripts/flying_taxi.pory"
	scrollingmultichoice SCROLLING_LILYCOVE_HARBOR_BEFORE_LEAGUE_OPTIONS, 0, 0, 4, TRUE
# 84 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, 9
	goto_if_lt LilycoveCity_Harbor_EventScript_Ferry_Location_Select_5
# 88 "data/scripts/flying_taxi.pory"
	goto LilycoveCity_Harbor_EventScript_ExitSailSelect
	goto LilycoveCity_Harbor_EventScript_Ferry_Location_Select_1

LilycoveCity_Harbor_EventScript_Ferry_Location_Select_5:
# 85 "data/scripts/flying_taxi.pory"
	goto Common_Evenscript_WarpUsingFerry
	goto LilycoveCity_Harbor_EventScript_Ferry_Location_Select_1


Common_EventScript_Colress_One_Island::
# 101 "data/scripts/flying_taxi.pory"
	lock
# 102 "data/scripts/flying_taxi.pory"
	faceplayer
# 103 "data/scripts/flying_taxi.pory"
	setvar VAR_CURRENT_SEVII, 0
# 104 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress
	return


Common_EventScript_Colress_Two_Island::
# 108 "data/scripts/flying_taxi.pory"
	lock
# 109 "data/scripts/flying_taxi.pory"
	faceplayer
# 110 "data/scripts/flying_taxi.pory"
	setvar VAR_CURRENT_SEVII, 1
# 111 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress
	return


Common_EventScript_Colress_Three_Island::
# 115 "data/scripts/flying_taxi.pory"
	lock
# 116 "data/scripts/flying_taxi.pory"
	faceplayer
# 117 "data/scripts/flying_taxi.pory"
	setvar VAR_CURRENT_SEVII, 2
# 118 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress
	return


Common_EventScript_Colress_Four_Island::
# 122 "data/scripts/flying_taxi.pory"
	lock
# 123 "data/scripts/flying_taxi.pory"
	faceplayer
# 124 "data/scripts/flying_taxi.pory"
	setvar VAR_CURRENT_SEVII, 3
# 125 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress
	return


Common_EventScript_Colress_Five_Island::
# 129 "data/scripts/flying_taxi.pory"
	lock
# 130 "data/scripts/flying_taxi.pory"
	faceplayer
# 131 "data/scripts/flying_taxi.pory"
	setvar VAR_CURRENT_SEVII, 4
# 132 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress
	return


Common_EventScript_Colress_Six_Island::
# 136 "data/scripts/flying_taxi.pory"
	lock
# 137 "data/scripts/flying_taxi.pory"
	faceplayer
# 138 "data/scripts/flying_taxi.pory"
	setvar VAR_CURRENT_SEVII, 5
# 139 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress
	return


Common_EventScript_Colress_Seven_Island::
# 143 "data/scripts/flying_taxi.pory"
	lock
# 144 "data/scripts/flying_taxi.pory"
	faceplayer
# 145 "data/scripts/flying_taxi.pory"
	setvar VAR_CURRENT_SEVII, 6
# 146 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress
	return


Common_EventScript_Colress_Eight_Island::
# 150 "data/scripts/flying_taxi.pory"
	lock
# 151 "data/scripts/flying_taxi.pory"
	faceplayer
# 152 "data/scripts/flying_taxi.pory"
	setvar VAR_CURRENT_SEVII, 7
# 153 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress
	return


Common_EventScript_Colress::
# 157 "data/scripts/flying_taxi.pory"
	switch VAR_VISITED_SEVII
# 158 "data/scripts/flying_taxi.pory"
	case 0, Common_EventScript_Colress_3
# 161 "data/scripts/flying_taxi.pory"
	case 1, Common_EventScript_Colress_4
# 162 "data/scripts/flying_taxi.pory"
	case 2, Common_EventScript_Colress_4
# 163 "data/scripts/flying_taxi.pory"
	case 3, Common_EventScript_Colress_4
# 164 "data/scripts/flying_taxi.pory"
	case 4, Common_EventScript_Colress_4
# 165 "data/scripts/flying_taxi.pory"
	case 5, Common_EventScript_Colress_4
# 166 "data/scripts/flying_taxi.pory"
	case 6, Common_EventScript_Colress_4
# 169 "data/scripts/flying_taxi.pory"
	case 7, Common_EventScript_Colress_5
# 170 "data/scripts/flying_taxi.pory"
	case 8, Common_EventScript_Colress_5
Common_EventScript_Colress_1:
	end

Common_EventScript_Colress_3:
# 159 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter
	goto Common_EventScript_Colress_1

Common_EventScript_Colress_4:
# 167 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_Second_Encounter
	goto Common_EventScript_Colress_1

Common_EventScript_Colress_5:
# 171 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_Final_Encounter
	goto Common_EventScript_Colress_1


Common_EventScript_Colress_First_Encounter::
# 180 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_Text_0, MSGBOX_DEFAULT
# 181 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_Text_1, MSGBOX_DEFAULT
# 182 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_Text_2, MSGBOX_DEFAULT
# 183 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_Text_3, MSGBOX_DEFAULT
# 184 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
	return


Common_EventScript_Colress_Second_Encounter::
# 188 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_Second_Encounter_Text_0, MSGBOX_DEFAULT
# 189 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
	return


Common_EventScript_Colress_Final_Encounter::
# 193 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_Final_Encounter_Text_0, MSGBOX_DEFAULT
# 194 "data/scripts/flying_taxi.pory"
	giveitem ITEM_SHOCK_DRIVE
# 195 "data/scripts/flying_taxi.pory"
	giveitem ITEM_BURN_DRIVE
# 196 "data/scripts/flying_taxi.pory"
	giveitem ITEM_CHILL_DRIVE
# 197 "data/scripts/flying_taxi.pory"
	giveitem ITEM_DOUSE_DRIVE
# 198 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_Final_Encounter_Text_1, MSGBOX_YESNO
# 199 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_Colress_Final_Encounter_2
# 203 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_Final_Encounter_Text_3, MSGBOX_DEFAULT
Common_EventScript_Colress_Final_Encounter_1:
# 205 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_Final_Encounter_Text_4, MSGBOX_DEFAULT
# 206 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_Final_Encounter_Text_5, MSGBOX_DEFAULT
# 207 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_Final_Encounter_Text_6, MSGBOX_DEFAULT
# 208 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_Final_Encounter_Text_7, MSGBOX_DEFAULT
# 209 "data/scripts/flying_taxi.pory"
	call Common_EventScript_Colress_SetTicketFlag
# 210 "data/scripts/flying_taxi.pory"
	warp MAP_LITTLEROOT_TOWN, 192, 192, 192
	return

Common_EventScript_Colress_Final_Encounter_2:
# 200 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_Final_Encounter_Text_2, MSGBOX_DEFAULT
	goto Common_EventScript_Colress_Final_Encounter_1


Common_EventScript_Colress_First_Encounter_ChooseIsland::
# 214 "data/scripts/flying_taxi.pory"
	scrollingmultichoice SCROLLING_SEVII_TICKET, 0, 0, 4, TRUE
# 215 "data/scripts/flying_taxi.pory"
	switch VAR_RESULT
# 216 "data/scripts/flying_taxi.pory"
	case 0, Common_EventScript_Colress_First_Encounter_ChooseIsland_2
# 241 "data/scripts/flying_taxi.pory"
	case 1, Common_EventScript_Colress_First_Encounter_ChooseIsland_3
# 266 "data/scripts/flying_taxi.pory"
	case 2, Common_EventScript_Colress_First_Encounter_ChooseIsland_4
# 291 "data/scripts/flying_taxi.pory"
	case 3, Common_EventScript_Colress_First_Encounter_ChooseIsland_5
# 316 "data/scripts/flying_taxi.pory"
	case 4, Common_EventScript_Colress_First_Encounter_ChooseIsland_6
# 341 "data/scripts/flying_taxi.pory"
	case 5, Common_EventScript_Colress_First_Encounter_ChooseIsland_7
# 366 "data/scripts/flying_taxi.pory"
	case 6, Common_EventScript_Colress_First_Encounter_ChooseIsland_8
# 391 "data/scripts/flying_taxi.pory"
	case 7, Common_EventScript_Colress_First_Encounter_ChooseIsland_9
	return

Common_EventScript_Colress_First_Encounter_ChooseIsland_2:
# 218 "data/scripts/flying_taxi.pory"
	checkitem ITEM_SEVII_TICKET_1, 1
# 219 "data/scripts/flying_taxi.pory"
	setvar VAR_TEMP_A, 0
# 220 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_11
# 230 "data/scripts/flying_taxi.pory"
	compare VAR_CURRENT_SEVII, 0
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_12
# 236 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_4, MSGBOX_DEFAULT
# 237 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_3, MSGBOX_DEFAULT
# 238 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
Common_EventScript_Colress_First_Encounter_ChooseIsland_10:
	return

Common_EventScript_Colress_First_Encounter_ChooseIsland_3:
# 243 "data/scripts/flying_taxi.pory"
	checkitem ITEM_SEVII_TICKET_2, 1
# 244 "data/scripts/flying_taxi.pory"
	setvar VAR_TEMP_A, 1
# 245 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_17
# 255 "data/scripts/flying_taxi.pory"
	compare VAR_CURRENT_SEVII, 1
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_18
# 261 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_4, MSGBOX_DEFAULT
# 262 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_3, MSGBOX_DEFAULT
# 263 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
Common_EventScript_Colress_First_Encounter_ChooseIsland_16:
	return

Common_EventScript_Colress_First_Encounter_ChooseIsland_4:
# 268 "data/scripts/flying_taxi.pory"
	checkitem ITEM_SEVII_TICKET_3, 1
# 269 "data/scripts/flying_taxi.pory"
	setvar VAR_TEMP_A, 2
# 270 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_23
# 280 "data/scripts/flying_taxi.pory"
	compare VAR_CURRENT_SEVII, 2
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_24
# 286 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_4, MSGBOX_DEFAULT
# 287 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_3, MSGBOX_DEFAULT
# 288 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
Common_EventScript_Colress_First_Encounter_ChooseIsland_22:
	return

Common_EventScript_Colress_First_Encounter_ChooseIsland_5:
# 293 "data/scripts/flying_taxi.pory"
	checkitem ITEM_SEVII_TICKET_4, 1
# 294 "data/scripts/flying_taxi.pory"
	setvar VAR_TEMP_A, 3
# 295 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_29
# 305 "data/scripts/flying_taxi.pory"
	compare VAR_CURRENT_SEVII, 3
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_30
# 311 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_4, MSGBOX_DEFAULT
# 312 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_3, MSGBOX_DEFAULT
# 313 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
Common_EventScript_Colress_First_Encounter_ChooseIsland_28:
	return

Common_EventScript_Colress_First_Encounter_ChooseIsland_6:
# 318 "data/scripts/flying_taxi.pory"
	checkitem ITEM_SEVII_TICKET_5, 1
# 319 "data/scripts/flying_taxi.pory"
	setvar VAR_TEMP_A, 4
# 320 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_35
# 330 "data/scripts/flying_taxi.pory"
	compare VAR_CURRENT_SEVII, 4
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_36
# 336 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_4, MSGBOX_DEFAULT
# 337 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_3, MSGBOX_DEFAULT
# 338 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
Common_EventScript_Colress_First_Encounter_ChooseIsland_34:
	return

Common_EventScript_Colress_First_Encounter_ChooseIsland_7:
# 343 "data/scripts/flying_taxi.pory"
	checkitem ITEM_SEVII_TICKET_6, 1
# 344 "data/scripts/flying_taxi.pory"
	setvar VAR_TEMP_A, 5
# 345 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_41
# 355 "data/scripts/flying_taxi.pory"
	compare VAR_CURRENT_SEVII, 5
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_42
# 361 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_4, MSGBOX_DEFAULT
# 362 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_3, MSGBOX_DEFAULT
# 363 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
Common_EventScript_Colress_First_Encounter_ChooseIsland_40:
	return

Common_EventScript_Colress_First_Encounter_ChooseIsland_8:
# 368 "data/scripts/flying_taxi.pory"
	checkitem ITEM_SEVII_TICKET_7, 1
# 369 "data/scripts/flying_taxi.pory"
	setvar VAR_TEMP_A, 6
# 370 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_47
# 380 "data/scripts/flying_taxi.pory"
	compare VAR_CURRENT_SEVII, 6
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_48
# 386 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_4, MSGBOX_DEFAULT
# 387 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_3, MSGBOX_DEFAULT
# 388 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
Common_EventScript_Colress_First_Encounter_ChooseIsland_46:
	return

Common_EventScript_Colress_First_Encounter_ChooseIsland_9:
# 393 "data/scripts/flying_taxi.pory"
	checkitem ITEM_SEVII_TICKET_8, 1
# 394 "data/scripts/flying_taxi.pory"
	setvar VAR_TEMP_A, 7
# 395 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_53
# 407 "data/scripts/flying_taxi.pory"
	compare VAR_CURRENT_SEVII, 7
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_54
# 413 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_4, MSGBOX_DEFAULT
# 414 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_3, MSGBOX_DEFAULT
# 415 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
Common_EventScript_Colress_First_Encounter_ChooseIsland_52:
	return

Common_EventScript_Colress_First_Encounter_ChooseIsland_11:
# 221 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_0, MSGBOX_DEFAULT
# 222 "data/scripts/flying_taxi.pory"
	giveitem ITEM_SEVII_TICKET_1
# 223 "data/scripts/flying_taxi.pory"
	addvar VAR_VISITED_SEVII, 1
# 225 "data/scripts/flying_taxi.pory"
	compare VAR_VISITED_SEVII, 1
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_59
Common_EventScript_Colress_First_Encounter_ChooseIsland_58:
# 228 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_AskForWarping
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_10

Common_EventScript_Colress_First_Encounter_ChooseIsland_12:
# 231 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_2, MSGBOX_DEFAULT
# 232 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_3, MSGBOX_DEFAULT
# 233 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_10

Common_EventScript_Colress_First_Encounter_ChooseIsland_17:
# 246 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_5, MSGBOX_DEFAULT
# 247 "data/scripts/flying_taxi.pory"
	giveitem ITEM_SEVII_TICKET_2
# 248 "data/scripts/flying_taxi.pory"
	addvar VAR_VISITED_SEVII, 1
# 250 "data/scripts/flying_taxi.pory"
	compare VAR_VISITED_SEVII, 1
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_62
Common_EventScript_Colress_First_Encounter_ChooseIsland_61:
# 253 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_AskForWarping
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_16

Common_EventScript_Colress_First_Encounter_ChooseIsland_18:
# 256 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_2, MSGBOX_DEFAULT
# 257 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_3, MSGBOX_DEFAULT
# 258 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_16

Common_EventScript_Colress_First_Encounter_ChooseIsland_23:
# 271 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_6, MSGBOX_DEFAULT
# 272 "data/scripts/flying_taxi.pory"
	giveitem ITEM_SEVII_TICKET_3
# 273 "data/scripts/flying_taxi.pory"
	addvar VAR_VISITED_SEVII, 1
# 275 "data/scripts/flying_taxi.pory"
	compare VAR_VISITED_SEVII, 1
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_65
Common_EventScript_Colress_First_Encounter_ChooseIsland_64:
# 278 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_AskForWarping
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_22

Common_EventScript_Colress_First_Encounter_ChooseIsland_24:
# 281 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_2, MSGBOX_DEFAULT
# 282 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_3, MSGBOX_DEFAULT
# 283 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_22

Common_EventScript_Colress_First_Encounter_ChooseIsland_29:
# 296 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_7, MSGBOX_DEFAULT
# 297 "data/scripts/flying_taxi.pory"
	giveitem ITEM_SEVII_TICKET_4
# 298 "data/scripts/flying_taxi.pory"
	addvar VAR_VISITED_SEVII, 1
# 300 "data/scripts/flying_taxi.pory"
	compare VAR_VISITED_SEVII, 1
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_68
Common_EventScript_Colress_First_Encounter_ChooseIsland_67:
# 303 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_AskForWarping
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_28

Common_EventScript_Colress_First_Encounter_ChooseIsland_30:
# 306 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_2, MSGBOX_DEFAULT
# 307 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_3, MSGBOX_DEFAULT
# 308 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_28

Common_EventScript_Colress_First_Encounter_ChooseIsland_35:
# 321 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_8, MSGBOX_DEFAULT
# 322 "data/scripts/flying_taxi.pory"
	giveitem ITEM_SEVII_TICKET_5
# 323 "data/scripts/flying_taxi.pory"
	addvar VAR_VISITED_SEVII, 1
# 325 "data/scripts/flying_taxi.pory"
	compare VAR_VISITED_SEVII, 1
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_71
Common_EventScript_Colress_First_Encounter_ChooseIsland_70:
# 328 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_AskForWarping
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_34

Common_EventScript_Colress_First_Encounter_ChooseIsland_36:
# 331 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_2, MSGBOX_DEFAULT
# 332 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_3, MSGBOX_DEFAULT
# 333 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_34

Common_EventScript_Colress_First_Encounter_ChooseIsland_41:
# 346 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_9, MSGBOX_DEFAULT
# 347 "data/scripts/flying_taxi.pory"
	giveitem ITEM_SEVII_TICKET_6
# 348 "data/scripts/flying_taxi.pory"
	addvar VAR_VISITED_SEVII, 1
# 350 "data/scripts/flying_taxi.pory"
	compare VAR_VISITED_SEVII, 1
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_74
Common_EventScript_Colress_First_Encounter_ChooseIsland_73:
# 353 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_AskForWarping
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_40

Common_EventScript_Colress_First_Encounter_ChooseIsland_42:
# 356 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_2, MSGBOX_DEFAULT
# 357 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_3, MSGBOX_DEFAULT
# 358 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_40

Common_EventScript_Colress_First_Encounter_ChooseIsland_47:
# 371 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_10, MSGBOX_DEFAULT
# 372 "data/scripts/flying_taxi.pory"
	giveitem ITEM_SEVII_TICKET_7
# 373 "data/scripts/flying_taxi.pory"
	addvar VAR_VISITED_SEVII, 1
# 375 "data/scripts/flying_taxi.pory"
	compare VAR_VISITED_SEVII, 1
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_77
Common_EventScript_Colress_First_Encounter_ChooseIsland_76:
# 378 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_AskForWarping
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_46

Common_EventScript_Colress_First_Encounter_ChooseIsland_48:
# 381 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_2, MSGBOX_DEFAULT
# 382 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_3, MSGBOX_DEFAULT
# 383 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_46

Common_EventScript_Colress_First_Encounter_ChooseIsland_53:
# 396 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_11, MSGBOX_DEFAULT
# 397 "data/scripts/flying_taxi.pory"
	delay 90
# 398 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_12, MSGBOX_DEFAULT
# 399 "data/scripts/flying_taxi.pory"
	giveitem ITEM_SEVII_TICKET_8
# 400 "data/scripts/flying_taxi.pory"
	addvar VAR_VISITED_SEVII, 1
# 402 "data/scripts/flying_taxi.pory"
	compare VAR_VISITED_SEVII, 1
	goto_if_eq Common_EventScript_Colress_First_Encounter_ChooseIsland_80
Common_EventScript_Colress_First_Encounter_ChooseIsland_79:
# 405 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_AskForWarping
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_52

Common_EventScript_Colress_First_Encounter_ChooseIsland_54:
# 408 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_2, MSGBOX_DEFAULT
# 409 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_3, MSGBOX_DEFAULT
# 410 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_52

Common_EventScript_Colress_First_Encounter_ChooseIsland_59:
# 226 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_1, MSGBOX_DEFAULT
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_58

Common_EventScript_Colress_First_Encounter_ChooseIsland_62:
# 251 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_1, MSGBOX_DEFAULT
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_61

Common_EventScript_Colress_First_Encounter_ChooseIsland_65:
# 276 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_1, MSGBOX_DEFAULT
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_64

Common_EventScript_Colress_First_Encounter_ChooseIsland_68:
# 301 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_1, MSGBOX_DEFAULT
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_67

Common_EventScript_Colress_First_Encounter_ChooseIsland_71:
# 326 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_1, MSGBOX_DEFAULT
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_70

Common_EventScript_Colress_First_Encounter_ChooseIsland_74:
# 351 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_1, MSGBOX_DEFAULT
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_73

Common_EventScript_Colress_First_Encounter_ChooseIsland_77:
# 376 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_1, MSGBOX_DEFAULT
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_76

Common_EventScript_Colress_First_Encounter_ChooseIsland_80:
# 403 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_1, MSGBOX_DEFAULT
	goto Common_EventScript_Colress_First_Encounter_ChooseIsland_79


Common_EventScript_Colress_AskForWarping::
# 422 "data/scripts/flying_taxi.pory"
	call Common_EventScript_Colress_SetTicketFlag
# 423 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_AskForWarping_Text_0, MSGBOX_YESNO
# 424 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_Colress_AskForWarping_2
# 428 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_WarpToSevii
Common_EventScript_Colress_AskForWarping_1:
# 430 "data/scripts/flying_taxi.pory"
	waitstate
# 431 "data/scripts/flying_taxi.pory"
	release
	end

Common_EventScript_Colress_AskForWarping_2:
# 425 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Colress_NoWarp
	goto Common_EventScript_Colress_AskForWarping_1


Common_EventScript_Colress_SetTicketFlag::
# 436 "data/scripts/flying_taxi.pory"
	switch VAR_CURRENT_SEVII
# 437 "data/scripts/flying_taxi.pory"
	case 0, Common_EventScript_Colress_SetTicketFlag_3
# 440 "data/scripts/flying_taxi.pory"
	case 1, Common_EventScript_Colress_SetTicketFlag_4
# 443 "data/scripts/flying_taxi.pory"
	case 2, Common_EventScript_Colress_SetTicketFlag_5
# 446 "data/scripts/flying_taxi.pory"
	case 3, Common_EventScript_Colress_SetTicketFlag_6
# 449 "data/scripts/flying_taxi.pory"
	case 4, Common_EventScript_Colress_SetTicketFlag_7
# 452 "data/scripts/flying_taxi.pory"
	case 5, Common_EventScript_Colress_SetTicketFlag_8
# 455 "data/scripts/flying_taxi.pory"
	case 6, Common_EventScript_Colress_SetTicketFlag_9
# 458 "data/scripts/flying_taxi.pory"
	case 7, Common_EventScript_Colress_SetTicketFlag_10
Common_EventScript_Colress_SetTicketFlag_1:
	return

Common_EventScript_Colress_SetTicketFlag_3:
# 438 "data/scripts/flying_taxi.pory"
	setflag FLAG_GOT_SEVII_TICKET_1
	goto Common_EventScript_Colress_SetTicketFlag_1

Common_EventScript_Colress_SetTicketFlag_4:
# 441 "data/scripts/flying_taxi.pory"
	setflag FLAG_GOT_SEVII_TICKET_2
	goto Common_EventScript_Colress_SetTicketFlag_1

Common_EventScript_Colress_SetTicketFlag_5:
# 444 "data/scripts/flying_taxi.pory"
	setflag FLAG_GOT_SEVII_TICKET_3
	goto Common_EventScript_Colress_SetTicketFlag_1

Common_EventScript_Colress_SetTicketFlag_6:
# 447 "data/scripts/flying_taxi.pory"
	setflag FLAG_GOT_SEVII_TICKET_4
	goto Common_EventScript_Colress_SetTicketFlag_1

Common_EventScript_Colress_SetTicketFlag_7:
# 450 "data/scripts/flying_taxi.pory"
	setflag FLAG_GOT_SEVII_TICKET_5
	goto Common_EventScript_Colress_SetTicketFlag_1

Common_EventScript_Colress_SetTicketFlag_8:
# 453 "data/scripts/flying_taxi.pory"
	setflag FLAG_GOT_SEVII_TICKET_6
	goto Common_EventScript_Colress_SetTicketFlag_1

Common_EventScript_Colress_SetTicketFlag_9:
# 456 "data/scripts/flying_taxi.pory"
	setflag FLAG_GOT_SEVII_TICKET_7
	goto Common_EventScript_Colress_SetTicketFlag_1

Common_EventScript_Colress_SetTicketFlag_10:
# 459 "data/scripts/flying_taxi.pory"
	setflag FLAG_GOT_SEVII_TICKET_8
	goto Common_EventScript_Colress_SetTicketFlag_1


Common_EventScript_Colress_NoWarp::
# 466 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_NoWarp_Text_0, MSGBOX_DEFAULT
# 467 "data/scripts/flying_taxi.pory"
	warp MAP_LITTLEROOT_TOWN, 192, 192, 192
# 468 "data/scripts/flying_taxi.pory"
	waitstate
# 469 "data/scripts/flying_taxi.pory"
	release
	end


Common_EventScript_Colress_WarpToSevii::
# 474 "data/scripts/flying_taxi.pory"
	msgbox Common_EventScript_Colress_WarpToSevii_Text_0, MSGBOX_DEFAULT
# 476 "data/scripts/flying_taxi.pory"
	switch VAR_TEMP_A
# 477 "data/scripts/flying_taxi.pory"
	case 0, Common_EventScript_Colress_WarpToSevii_3
# 480 "data/scripts/flying_taxi.pory"
	case 1, Common_EventScript_Colress_WarpToSevii_4
# 483 "data/scripts/flying_taxi.pory"
	case 2, Common_EventScript_Colress_WarpToSevii_5
# 486 "data/scripts/flying_taxi.pory"
	case 3, Common_EventScript_Colress_WarpToSevii_6
# 489 "data/scripts/flying_taxi.pory"
	case 4, Common_EventScript_Colress_WarpToSevii_7
# 492 "data/scripts/flying_taxi.pory"
	case 5, Common_EventScript_Colress_WarpToSevii_8
# 495 "data/scripts/flying_taxi.pory"
	case 6, Common_EventScript_Colress_WarpToSevii_9
# 498 "data/scripts/flying_taxi.pory"
	case 7, Common_EventScript_Colress_WarpToSevii_10
Common_EventScript_Colress_WarpToSevii_1:
# 502 "data/scripts/flying_taxi.pory"
	waitstate
# 503 "data/scripts/flying_taxi.pory"
	release
	end

Common_EventScript_Colress_WarpToSevii_3:
# 478 "data/scripts/flying_taxi.pory"
	warp MAP_ONE_ISLAND, 255, 28, 17
	goto Common_EventScript_Colress_WarpToSevii_1

Common_EventScript_Colress_WarpToSevii_4:
# 481 "data/scripts/flying_taxi.pory"
	warp MAP_TWO_ISLAND, 255, 10, 7
	goto Common_EventScript_Colress_WarpToSevii_1

Common_EventScript_Colress_WarpToSevii_5:
# 484 "data/scripts/flying_taxi.pory"
	warp MAP_THREE_ISLAND_PORT, 255, 12, 12
	goto Common_EventScript_Colress_WarpToSevii_1

Common_EventScript_Colress_WarpToSevii_6:
# 487 "data/scripts/flying_taxi.pory"
	warp MAP_FOUR_ISLAND, 255, 10, 27
	goto Common_EventScript_Colress_WarpToSevii_1

Common_EventScript_Colress_WarpToSevii_7:
# 490 "data/scripts/flying_taxi.pory"
	warp MAP_FIVE_ISLAND, 255, 23, 23
	goto Common_EventScript_Colress_WarpToSevii_1

Common_EventScript_Colress_WarpToSevii_8:
# 493 "data/scripts/flying_taxi.pory"
	warp MAP_SIX_ISLAND, 255, 27, 22
	goto Common_EventScript_Colress_WarpToSevii_1

Common_EventScript_Colress_WarpToSevii_9:
# 496 "data/scripts/flying_taxi.pory"
	warp MAP_SEVEN_ISLAND, 255, 19, 12
	goto Common_EventScript_Colress_WarpToSevii_1

Common_EventScript_Colress_WarpToSevii_10:
# 499 "data/scripts/flying_taxi.pory"
	warp MAP_EIGHT_ISLAND, 255, 20, 33
	goto Common_EventScript_Colress_WarpToSevii_1


SlateportCity_Harbor_EventScript_FerryAttendant::
# 508 "data/scripts/flying_taxi.pory"
	lock
# 509 "data/scripts/flying_taxi.pory"
	faceplayer
# 510 "data/scripts/flying_taxi.pory"
	msgbox LilycoveCity_Harbor_EventScript_FerryAttendant_Text_0, MSGBOX_DEFAULT
# 513 "data/scripts/flying_taxi.pory"
	goto SlateportCity_Harbor_EventScript_Ferry_Location_Select
	end


SlateportCity_Harbor_EventScript_Ferry_Location_Select::
# 518 "data/scripts/flying_taxi.pory"
	setflag FLAG_SAILED_FROM_SLATEPORT
# 519 "data/scripts/flying_taxi.pory"
	msgbox LilycoveCity_Harbor_EventScript_Ferry_Location_Select_Text_0, MSGBOX_DEFAULT
# 520 "data/scripts/flying_taxi.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_Ferry_Location_Select_2
# 530 "data/scripts/flying_taxi.pory"
	scrollingmultichoice SCROLLING_SLATEPORT_HARBOR_AFTER_LEAGUE_OPTIONS, 0, 0, 4, TRUE
# 531 "data/scripts/flying_taxi.pory"
	goto Common_Evenscript_WarpUsingFerry
SlateportCity_Harbor_EventScript_Ferry_Location_Select_1:
# 533 "data/scripts/flying_taxi.pory"
	waitstate
# 534 "data/scripts/flying_taxi.pory"
	release
	end

SlateportCity_Harbor_EventScript_Ferry_Location_Select_2:
# 521 "data/scripts/flying_taxi.pory"
	scrollingmultichoice SCROLLING_SLATEPORT_HARBOR_BEFORE_LEAGUE_OPTIONS, 0, 0, 4, TRUE
# 522 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, 9
	goto_if_lt SlateportCity_Harbor_EventScript_Ferry_Location_Select_5
# 526 "data/scripts/flying_taxi.pory"
	goto LilycoveCity_Harbor_EventScript_ExitSailSelect
	goto SlateportCity_Harbor_EventScript_Ferry_Location_Select_1

SlateportCity_Harbor_EventScript_Ferry_Location_Select_5:
# 523 "data/scripts/flying_taxi.pory"
	goto Common_Evenscript_WarpUsingFerry
	goto SlateportCity_Harbor_EventScript_Ferry_Location_Select_1


Common_EventScript_Ferry_Location_Exit::
# 539 "data/scripts/flying_taxi.pory"
	clearflag FLAG_SAILED_FROM_SLATEPORT
# 540 "data/scripts/flying_taxi.pory"
	release
	end


Common_Evenscript_WarpUsingFerry::
# 545 "data/scripts/flying_taxi.pory"
	switch VAR_RESULT
# 546 "data/scripts/flying_taxi.pory"
	case 0, Common_Evenscript_WarpUsingFerry_3
# 568 "data/scripts/flying_taxi.pory"
	case 1, Common_Evenscript_WarpUsingFerry_4
# 579 "data/scripts/flying_taxi.pory"
	case 2, Common_Evenscript_WarpUsingFerry_5
# 590 "data/scripts/flying_taxi.pory"
	case 3, Common_Evenscript_WarpUsingFerry_6
# 601 "data/scripts/flying_taxi.pory"
	case 4, Common_Evenscript_WarpUsingFerry_7
# 612 "data/scripts/flying_taxi.pory"
	case 5, Common_Evenscript_WarpUsingFerry_8
# 623 "data/scripts/flying_taxi.pory"
	case 6, Common_Evenscript_WarpUsingFerry_9
# 634 "data/scripts/flying_taxi.pory"
	case 7, Common_Evenscript_WarpUsingFerry_10
# 645 "data/scripts/flying_taxi.pory"
	case 8, Common_Evenscript_WarpUsingFerry_11
# 656 "data/scripts/flying_taxi.pory"
	case 9, Common_Evenscript_WarpUsingFerry_12
# 666 "data/scripts/flying_taxi.pory"
	case 10, Common_Evenscript_WarpUsingFerry_13
# 677 "data/scripts/flying_taxi.pory"
	case 11, Common_Evenscript_WarpUsingFerry_14
# 688 "data/scripts/flying_taxi.pory"
	case 12, Common_Evenscript_WarpUsingFerry_15
# 699 "data/scripts/flying_taxi.pory"
	case 13, Common_Evenscript_WarpUsingFerry_16
# 711 "data/scripts/flying_taxi.pory"
	case MULTI_B_PRESSED, Common_Evenscript_WarpUsingFerry_17
Common_Evenscript_WarpUsingFerry_17:
# 712 "data/scripts/flying_taxi.pory"
	goto LilycoveCity_Harbor_EventScript_ExitSailSelect
Common_Evenscript_WarpUsingFerry_1:
# 715 "data/scripts/flying_taxi.pory"
	waitstate
# 716 "data/scripts/flying_taxi.pory"
	release
	end

Common_Evenscript_WarpUsingFerry_3:
# 547 "data/scripts/flying_taxi.pory"
	goto_if_unset FLAG_SAILED_FROM_SLATEPORT, Common_Evenscript_WarpUsingFerry_19
# 558 "data/scripts/flying_taxi.pory"
	goto_if_set FLAG_VISITED_LILYCOVE_CITY, Common_Evenscript_WarpUsingFerry_77
# 563 "data/scripts/flying_taxi.pory"
	msgbox Common_Evenscript_WarpUsingFerry_Text_1, MSGBOX_DEFAULT
# 564 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Ferry_Location_Exit
Common_Evenscript_WarpUsingFerry_18:
	goto Common_Evenscript_WarpUsingFerry_1

Common_Evenscript_WarpUsingFerry_4:
# 569 "data/scripts/flying_taxi.pory"
	checkitem ITEM_SEVII_TICKET_1, 1
# 570 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_Evenscript_WarpUsingFerry_23
# 576 "data/scripts/flying_taxi.pory"
	goto Common_Evenscript_CantSailThereWithoutATicket
Common_Evenscript_WarpUsingFerry_22:
	goto Common_Evenscript_WarpUsingFerry_1

Common_Evenscript_WarpUsingFerry_5:
# 580 "data/scripts/flying_taxi.pory"
	checkitem ITEM_SEVII_TICKET_2, 1
# 581 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_Evenscript_WarpUsingFerry_27
# 587 "data/scripts/flying_taxi.pory"
	goto Common_Evenscript_CantSailThereWithoutATicket
Common_Evenscript_WarpUsingFerry_26:
	goto Common_Evenscript_WarpUsingFerry_1

Common_Evenscript_WarpUsingFerry_6:
# 591 "data/scripts/flying_taxi.pory"
	checkitem ITEM_SEVII_TICKET_3, 1
# 592 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_Evenscript_WarpUsingFerry_31
# 598 "data/scripts/flying_taxi.pory"
	goto Common_Evenscript_CantSailThereWithoutATicket
Common_Evenscript_WarpUsingFerry_30:
	goto Common_Evenscript_WarpUsingFerry_1

Common_Evenscript_WarpUsingFerry_7:
# 602 "data/scripts/flying_taxi.pory"
	checkitem ITEM_SEVII_TICKET_4, 1
# 603 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_Evenscript_WarpUsingFerry_35
# 609 "data/scripts/flying_taxi.pory"
	goto Common_Evenscript_CantSailThereWithoutATicket
Common_Evenscript_WarpUsingFerry_34:
	goto Common_Evenscript_WarpUsingFerry_1

Common_Evenscript_WarpUsingFerry_8:
# 613 "data/scripts/flying_taxi.pory"
	checkitem ITEM_SEVII_TICKET_5, 1
# 614 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_Evenscript_WarpUsingFerry_39
# 620 "data/scripts/flying_taxi.pory"
	goto Common_Evenscript_CantSailThereWithoutATicket
Common_Evenscript_WarpUsingFerry_38:
	goto Common_Evenscript_WarpUsingFerry_1

Common_Evenscript_WarpUsingFerry_9:
# 624 "data/scripts/flying_taxi.pory"
	checkitem ITEM_SEVII_TICKET_6, 1
# 625 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_Evenscript_WarpUsingFerry_43
# 631 "data/scripts/flying_taxi.pory"
	goto Common_Evenscript_CantSailThereWithoutATicket
Common_Evenscript_WarpUsingFerry_42:
	goto Common_Evenscript_WarpUsingFerry_1

Common_Evenscript_WarpUsingFerry_10:
# 635 "data/scripts/flying_taxi.pory"
	checkitem ITEM_SEVII_TICKET_7, 1
# 636 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_Evenscript_WarpUsingFerry_47
# 642 "data/scripts/flying_taxi.pory"
	goto Common_Evenscript_CantSailThereWithoutATicket
Common_Evenscript_WarpUsingFerry_46:
	goto Common_Evenscript_WarpUsingFerry_1

Common_Evenscript_WarpUsingFerry_11:
# 646 "data/scripts/flying_taxi.pory"
	checkitem ITEM_SEVII_TICKET_8, 1
# 647 "data/scripts/flying_taxi.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Common_Evenscript_WarpUsingFerry_51
# 653 "data/scripts/flying_taxi.pory"
	goto Common_Evenscript_CantSailThereWithoutATicket
Common_Evenscript_WarpUsingFerry_50:
	goto Common_Evenscript_WarpUsingFerry_1

Common_Evenscript_WarpUsingFerry_12:
# 658 "data/scripts/flying_taxi.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_Evenscript_WarpUsingFerry_55
# 663 "data/scripts/flying_taxi.pory"
	goto Common_Evenscript_CantSailThereWithoutATicket
Common_Evenscript_WarpUsingFerry_54:
	goto Common_Evenscript_WarpUsingFerry_1

Common_Evenscript_WarpUsingFerry_13:
# 669 "data/scripts/flying_taxi.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_Evenscript_WarpUsingFerry_59
# 674 "data/scripts/flying_taxi.pory"
	goto Common_Evenscript_CantSailThereWithoutATicket
Common_Evenscript_WarpUsingFerry_58:
	goto Common_Evenscript_WarpUsingFerry_1

Common_Evenscript_WarpUsingFerry_14:
# 680 "data/scripts/flying_taxi.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_Evenscript_WarpUsingFerry_63
# 685 "data/scripts/flying_taxi.pory"
	goto Common_Evenscript_CantSailThereWithoutATicket
Common_Evenscript_WarpUsingFerry_62:
	goto Common_Evenscript_WarpUsingFerry_1

Common_Evenscript_WarpUsingFerry_15:
# 691 "data/scripts/flying_taxi.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_Evenscript_WarpUsingFerry_67
# 696 "data/scripts/flying_taxi.pory"
	goto Common_Evenscript_CantSailThereWithoutATicket
Common_Evenscript_WarpUsingFerry_66:
	goto Common_Evenscript_WarpUsingFerry_1

Common_Evenscript_WarpUsingFerry_16:
# 702 "data/scripts/flying_taxi.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, Common_Evenscript_WarpUsingFerry_71
# 707 "data/scripts/flying_taxi.pory"
	goto Common_Evenscript_CantSailThereWithoutATicket
Common_Evenscript_WarpUsingFerry_70:
	goto Common_Evenscript_WarpUsingFerry_1

Common_Evenscript_WarpUsingFerry_19:
# 548 "data/scripts/flying_taxi.pory"
	goto_if_set FLAG_VISITED_SLATEPORT_CITY, Common_Evenscript_WarpUsingFerry_74
# 553 "data/scripts/flying_taxi.pory"
	msgbox Common_Evenscript_WarpUsingFerry_Text_0, MSGBOX_DEFAULT
# 554 "data/scripts/flying_taxi.pory"
	goto Common_EventScript_Ferry_Location_Exit
	goto Common_Evenscript_WarpUsingFerry_18

Common_Evenscript_WarpUsingFerry_23:
# 571 "data/scripts/flying_taxi.pory"
	setrespawn HEAL_LOCATION_ONE_ISLAND
# 572 "data/scripts/flying_taxi.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 573 "data/scripts/flying_taxi.pory"
	warp MAP_ONE_ISLAND, 255, 28, 17
	goto Common_Evenscript_WarpUsingFerry_22

Common_Evenscript_WarpUsingFerry_27:
# 582 "data/scripts/flying_taxi.pory"
	setrespawn HEAL_LOCATION_TWO_ISLAND
# 583 "data/scripts/flying_taxi.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 584 "data/scripts/flying_taxi.pory"
	warp MAP_TWO_ISLAND, 255, 10, 7
	goto Common_Evenscript_WarpUsingFerry_26

Common_Evenscript_WarpUsingFerry_31:
# 593 "data/scripts/flying_taxi.pory"
	setrespawn HEAL_LOCATION_THREE_ISLAND
# 594 "data/scripts/flying_taxi.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 595 "data/scripts/flying_taxi.pory"
	warp MAP_THREE_ISLAND_PORT, 255, 12, 12
	goto Common_Evenscript_WarpUsingFerry_30

Common_Evenscript_WarpUsingFerry_35:
# 604 "data/scripts/flying_taxi.pory"
	setrespawn HEAL_LOCATION_FOUR_ISLAND
# 605 "data/scripts/flying_taxi.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 606 "data/scripts/flying_taxi.pory"
	warp MAP_FOUR_ISLAND, 255, 10, 27
	goto Common_Evenscript_WarpUsingFerry_34

Common_Evenscript_WarpUsingFerry_39:
# 615 "data/scripts/flying_taxi.pory"
	setrespawn HEAL_LOCATION_FIVE_ISLAND
# 616 "data/scripts/flying_taxi.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 617 "data/scripts/flying_taxi.pory"
	warp MAP_FIVE_ISLAND, 255, 23, 23
	goto Common_Evenscript_WarpUsingFerry_38

Common_Evenscript_WarpUsingFerry_43:
# 626 "data/scripts/flying_taxi.pory"
	setrespawn HEAL_LOCATION_SIX_ISLAND
# 627 "data/scripts/flying_taxi.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 628 "data/scripts/flying_taxi.pory"
	warp MAP_SIX_ISLAND, 255, 27, 22
	goto Common_Evenscript_WarpUsingFerry_42

Common_Evenscript_WarpUsingFerry_47:
# 637 "data/scripts/flying_taxi.pory"
	setrespawn HEAL_LOCATION_SEVEN_ISLAND
# 638 "data/scripts/flying_taxi.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 639 "data/scripts/flying_taxi.pory"
	warp MAP_SEVEN_ISLAND, 255, 19, 12
	goto Common_Evenscript_WarpUsingFerry_46

Common_Evenscript_WarpUsingFerry_51:
# 648 "data/scripts/flying_taxi.pory"
	setrespawn HEAL_LOCATION_EIGHT_ISLAND
# 649 "data/scripts/flying_taxi.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 650 "data/scripts/flying_taxi.pory"
	warp MAP_EIGHT_ISLAND, 255, 20, 33
	goto Common_Evenscript_WarpUsingFerry_50

Common_Evenscript_WarpUsingFerry_55:
# 659 "data/scripts/flying_taxi.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 660 "data/scripts/flying_taxi.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 255, 19, 67
	goto Common_Evenscript_WarpUsingFerry_54

Common_Evenscript_WarpUsingFerry_59:
# 670 "data/scripts/flying_taxi.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 671 "data/scripts/flying_taxi.pory"
	warp MAP_NAVEL_ROCK_HARBOR, 255, 8, 4
	goto Common_Evenscript_WarpUsingFerry_58

Common_Evenscript_WarpUsingFerry_63:
# 681 "data/scripts/flying_taxi.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 682 "data/scripts/flying_taxi.pory"
	warp MAP_BIRTH_ISLAND_HARBOR, 255, 8, 4
	goto Common_Evenscript_WarpUsingFerry_62

Common_Evenscript_WarpUsingFerry_67:
# 692 "data/scripts/flying_taxi.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 693 "data/scripts/flying_taxi.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 255, 13, 38
	goto Common_Evenscript_WarpUsingFerry_66

Common_Evenscript_WarpUsingFerry_71:
# 703 "data/scripts/flying_taxi.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 704 "data/scripts/flying_taxi.pory"
	warp MAP_SOUTHERN_ISLAND_EXTERIOR, 255, 13, 22
	goto Common_Evenscript_WarpUsingFerry_70

Common_Evenscript_WarpUsingFerry_74:
# 549 "data/scripts/flying_taxi.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 550 "data/scripts/flying_taxi.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 255, 8, 11
	goto Common_Evenscript_WarpUsingFerry_18

Common_Evenscript_WarpUsingFerry_77:
# 559 "data/scripts/flying_taxi.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 560 "data/scripts/flying_taxi.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 255, 8, 11
	goto Common_Evenscript_WarpUsingFerry_18


Common_Evenscript_CantSailThereWithoutATicket::
# 721 "data/scripts/flying_taxi.pory"
	msgbox Common_Evenscript_CantSailThereWithoutATicket_Text_0, MSGBOX_DEFAULT
# 722 "data/scripts/flying_taxi.pory"
	release
	end


LilycoveCity_Harbor_EventScript_BoardFerry::
# 727 "data/scripts/flying_taxi.pory"
	msgbox LilycoveCity_Harbor_Text_PleaseBoard, MSGBOX_DEFAULT
# 728 "data/scripts/flying_taxi.pory"
	closemessage
# 729 "data/scripts/flying_taxi.pory"
	applymovement LOCALID_ATTENDANT, Common_Movement_WalkInPlaceFastestUp
# 730 "data/scripts/flying_taxi.pory"
	waitmovement 0
# 731 "data/scripts/flying_taxi.pory"
	delay 30
# 732 "data/scripts/flying_taxi.pory"
	hideobjectat LOCALID_ATTENDANT, MAP_LILYCOVE_CITY_HARBOR
# 733 "data/scripts/flying_taxi.pory"
	hideobjectat LOCALID_ATTENDANT, MAP_SLATEPORT_CITY_HARBOR
# 734 "data/scripts/flying_taxi.pory"
	special HideFollower
# 735 "data/scripts/flying_taxi.pory"
	compare VAR_FACING, DIR_NORTH
# 736 "data/scripts/flying_taxi.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_PlayerBoardFerryNorth
# 737 "data/scripts/flying_taxi.pory"
	compare VAR_FACING, DIR_EAST
# 738 "data/scripts/flying_taxi.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_PlayerBoardFerryEast
# 739 "data/scripts/flying_taxi.pory"
	delay 30
# 740 "data/scripts/flying_taxi.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 741 "data/scripts/flying_taxi.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 742 "data/scripts/flying_taxi.pory"
	call Common_EventScript_FerryDepart
	return


Common_EventScript_FlyingTaxi_Text_0:
# 9 "data/scripts/flying_taxi.pory"
	.string "Do you want to Fly with us, its only 2BP?$"

Common_EventScript_FlyingTaxi_Text_1:
# 12 "data/scripts/flying_taxi.pory"
	.string "Do you want to Fly with us?, its\n"
	.string "completely free.$"

Common_EventScript_FlyingTaxi_Text_2:
# 22 "data/scripts/flying_taxi.pory"
	.string "But it seems you can't afford using the\n"
	.string "flying taxis right now.\p"
	.string "Please come back when you have atleast\n"
	.string "2BP.$"

LilycoveCity_Harbor_EventScript_FerryAttendant_Text_0:
# 72 "data/scripts/flying_taxi.pory"
	.string "Hello, are you here for the ferry?, May I\n"
	.string "see your Tickets?$"

LilycoveCity_Harbor_EventScript_Ferry_Location_Select_Text_0:
# 81 "data/scripts/flying_taxi.pory"
	.string "Where would you like to go?$"

Common_EventScript_Colress_First_Encounter_Text_0:
# 180 "data/scripts/flying_taxi.pory"
	.string "Oh, excuse me! I am a scientist. My name\n"
	.string "is Colress. My research focuses on\l"
	.string "regional variations between species.\l"
	.string "For example, Vulpix from Kanto has\l"
	.string "developed differently compared to\l"
	.string "those found in Alola. It seems a similar\l"
	.string "phenomenon is occurring here in the\l"
	.string "Sevii Islands.$"

Common_EventScript_Colress_First_Encounter_Text_1:
# 181 "data/scripts/flying_taxi.pory"
	.string "Thats why I came to these islands, to\n"
	.string "uncover the reasons behind why this\l"
	.string "happens.$"

Common_EventScript_Colress_First_Encounter_Text_2:
# 182 "data/scripts/flying_taxi.pory"
	.string "Now that I think of it, I never asked\n"
	.string "your name...$"

Common_EventScript_Colress_First_Encounter_Text_3:
# 183 "data/scripts/flying_taxi.pory"
	.string "{PLAYER}, is it? I'll remember your\n"
	.string "name. To commemorate our encounter, I\l"
	.string "will let you decide which Sevii Island I\l"
	.string "should visit next!$"

Common_EventScript_Colress_Second_Encounter_Text_0:
# 188 "data/scripts/flying_taxi.pory"
	.string "Oh {PLAYER}, I was just finishing\n"
	.string "organizing the data that I found here,\l"
	.string "but I'm already excited on what I will\l"
	.string "find next so help me decide what Sevii\l"
	.string "Island I should visit next!$"

Common_EventScript_Colress_Final_Encounter_Text_0:
# 193 "data/scripts/flying_taxi.pory"
	.string "{PLAYER} this is so exciting! I finally\n"
	.string "completed my research here. The\l"
	.string "regional variations occur because of\l"
	.string "the unique environments you helped me\l"
	.string "explore. As a token of appreciation for\l"
	.string "your hard work, I have some prizes for\l"
	.string "you!!$"

Common_EventScript_Colress_Final_Encounter_Text_1:
# 198 "data/scripts/flying_taxi.pory"
	.string "Do you know of the Pokémon called\n"
	.string "Genesect?$"

Common_EventScript_Colress_Final_Encounter_Text_2:
# 200 "data/scripts/flying_taxi.pory"
	.string "Then allow me to inform you!$"

Common_EventScript_Colress_Final_Encounter_Text_3:
# 203 "data/scripts/flying_taxi.pory"
	.string "Then I have no choice but to admit that\n"
	.string "you are all I would expect you to be!$"

Common_EventScript_Colress_Final_Encounter_Text_4:
# 205 "data/scripts/flying_taxi.pory"
	.string "Genesect is a Pokémon that lived 300\n"
	.string "million years ago. Then an organization\l"
	.string "called Team Plasma modified it,\l"
	.string "attaching a cannon to its back.$"

Common_EventScript_Colress_Final_Encounter_Text_5:
# 206 "data/scripts/flying_taxi.pory"
	.string "The cannon's abilities could be\n"
	.string "activated using certain drives created\l"
	.string "by the scientists in the P2 Laboratory.\l"
	.string "I think that you might be able to use\l"
	.string "them as they should be used.$"

Common_EventScript_Colress_Final_Encounter_Text_6:
# 207 "data/scripts/flying_taxi.pory"
	.string "Simply believing in your Pokémon will\n"
	.string "not guarantee that you can do\l"
	.string "everything you want. But there are many\l"
	.string "things that are guaranteed to fail if\l"
	.string "you do not believe in them. It is the\l"
	.string "trust between a Trainer and a Pokémon\l"
	.string "alone that can overcome those hurdles!$"

Common_EventScript_Colress_Final_Encounter_Text_7:
# 208 "data/scripts/flying_taxi.pory"
	.string "My next quest will be looking for\n"
	.string "Genesect, I hope our paths cross again,\l"
	.string "thanks for everything!$"

Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_0:
# 221 "data/scripts/flying_taxi.pory"
	.string "One Island huh? I think there is a giant\n"
	.string "volcano there, it could lead to some\l"
	.string "interesting information for my\l"
	.string "research, so let's see each other over\l"
	.string "there!$"

Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_1:
# 226 "data/scripts/flying_taxi.pory"
	.string "That's right, you will help me with my\n"
	.string "research since you seem like an\l"
	.string "interesting Trainer.$"

Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_2:
# 231 "data/scripts/flying_taxi.pory"
	.string "But we are already there, take this more\n"
	.string "seriously!$"

Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_3:
# 232 "data/scripts/flying_taxi.pory"
	.string "{PLAYER} what Sevii Island I should\n"
	.string "visit next?$"

Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_4:
# 236 "data/scripts/flying_taxi.pory"
	.string "But we already visited that Island,\n"
	.string "take this more seriously!$"

Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_5:
# 246 "data/scripts/flying_taxi.pory"
	.string "Two Island huh? I think there is a\n"
	.string "swamp route there, it could lead to some\l"
	.string "interesting information for my\l"
	.string "research, so let's see each other over\l"
	.string "there!$"

Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_6:
# 271 "data/scripts/flying_taxi.pory"
	.string "Three Island huh? I think there is a\n"
	.string "Forest full of berries there, it could\l"
	.string "lead to some interesting information\l"
	.string "for my research, so let's see each other\l"
	.string "over there!$"

Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_7:
# 296 "data/scripts/flying_taxi.pory"
	.string "Four Island huh? I think there is a\n"
	.string "really cold cave in there, it could lead\l"
	.string "to some interesting information for my\l"
	.string "research, so let's see each other over\l"
	.string "there!$"

Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_8:
# 321 "data/scripts/flying_taxi.pory"
	.string "Five Island huh? I think there is a\n"
	.string "Water Labrynth in there, it could lead\l"
	.string "to some interesting information for my\l"
	.string "research, so let's see each other over\l"
	.string "there!$"

Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_9:
# 346 "data/scripts/flying_taxi.pory"
	.string "Six Island huh? I think there are some\n"
	.string "Ruins in there, it could lead to some\l"
	.string "interesting information for my\l"
	.string "research, so let's see each other over\l"
	.string "there!$"

Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_10:
# 371 "data/scripts/flying_taxi.pory"
	.string "Seven Island huh? I think there is a\n"
	.string "Canyon in there, it could lead to some\l"
	.string "interesting information for my\l"
	.string "research, so let's see each other over\l"
	.string "there!$"

Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_11:
# 396 "data/scripts/flying_taxi.pory"
	.string "Eight Island?, first time I heard of\n"
	.string "such Island, let me search for\l"
	.string "information on it...$"

Common_EventScript_Colress_First_Encounter_ChooseIsland_Text_12:
# 398 "data/scripts/flying_taxi.pory"
	.string "I see so that island was recently\n"
	.string "discovered by a famous Dragon Tamer,\l"
	.string "seems like an interesting place, let's\l"
	.string "see each other over there!$"

Common_EventScript_Colress_AskForWarping_Text_0:
# 423 "data/scripts/flying_taxi.pory"
	.string "I'm on my way back to that Island do you\n"
	.string "want to go there with me?$"

Common_EventScript_Colress_NoWarp_Text_0:
# 466 "data/scripts/flying_taxi.pory"
	.string "Well then, {PLAYER}, I hope to see you\n"
	.string "again in there.$"

Common_EventScript_Colress_WarpToSevii_Text_0:
# 474 "data/scripts/flying_taxi.pory"
	.string "Splendid! Let's get out of here!$"

Common_Evenscript_WarpUsingFerry_Text_0:
# 553 "data/scripts/flying_taxi.pory"
	.string "I'm terribly sorry, there seems to be a\n"
	.string "problem visiting Slateport right now,\l"
	.string "maybe visiting it yourself could help.$"

Common_Evenscript_WarpUsingFerry_Text_1:
# 563 "data/scripts/flying_taxi.pory"
	.string "I'm terribly sorry, there seems to be a\n"
	.string "problem visiting Lilycove right now,\l"
	.string "maybe visiting it yourself could help.$"

Common_Evenscript_CantSailThereWithoutATicket_Text_0:
# 721 "data/scripts/flying_taxi.pory"
	.string "{PLAYER} doesn't have the Ticket to\n"
	.string "this location…\p"
	.string "I'm terribly sorry.\p"
	.string "You must have that Ticket to board the\n"
	.string "ferry.$"
