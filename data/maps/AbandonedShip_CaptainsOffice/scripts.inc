AbandonedShip_CaptainsOffice_MapScripts:: @ 82387E1
	.byte 0

AbandonedShip_CaptainsOffice_EventScript_CaptSternAide:: @ 82387E2
	lock
	faceplayer
	goto_if_set FLAG_EXCHANGED_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
	checkitem ITEM_SCANNER, 1
	compare VAR_RESULT, TRUE
	goto_if_eq AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner
	goto_if_set FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_4_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
	msgbox AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner, MSGBOX_DEFAULT
	release
	end

AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner:: @ 8238810
	msgbox AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner, MSGBOX_DEFAULT
	release
	end

AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus:: @ 823881A
	msgbox AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus, MSGBOX_DEFAULT
	release
	end

AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner: @ 8238824
	.string "I'm investigating this ship on behalf\n"
	.string "of Capt. Stern.\p"
	.string "He also asked me to find a Scanner,\n"
	.string "but I haven't had any success…$"

AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner: @ 823889D
	.string "Oh! That's a Scanner!\p"
	.string "Listen, can I get you to deliver that\n"
	.string "to Capt. Stern?\p"
	.string "I want to investigate this ship a\n"
	.string "little more.$"

AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus: @ 8238918
	.string "This ship is called S.S. Cactus.\n"
	.string "It seems to be from an earlier era.$"

Common_EventScript_PkmnCenterJack_Change_Costume::
	lock
	faceplayer
	msgbox Common_EventScript_PkmnCenterJack_Change_Costume_Text_0, MSGBOX_DEFAULT
	multichoice 16, 0, MULTI_COSTUMES, 0
	copyvar VAR_TEMP_1, VAR_RESULT
	switch VAR_RESULT
	case EMERALD_COSTUME, Common_EventScript_PkmnCenterJack_Change_Costume_3
	case RS_COSTUME, Common_EventScript_PkmnCenterJack_Change_Costume_3
	case FRLG_COSTUME, Common_EventScript_PkmnCenterJack_Change_Costume_3
	case DP_COSTUME, Common_EventScript_PkmnCenterJack_Change_Costume_3
	case BW_COSTUME, Common_EventScript_PkmnCenterJack_Change_Costume_4
	case NUM_COSTUMES, Common_EventScript_PkmnCenterJack_Change_Costume_5
	case MULTI_B_PRESSED, Common_EventScript_PkmnCenterJack_Change_Costume_5
Common_EventScript_PkmnCenterJack_Change_Costume_1:
	releaseall
	end

Common_EventScript_PkmnCenterJack_Change_Costume_3:
	copyvar VAR_COSTUME_NUMBER, VAR_TEMP_1
	msgbox Common_EventScript_PkmnCenterJack_Change_Costume_Text_1, MSGBOX_DEFAULT
	warp MAP_LITTLEROOT_TOWN, 192, 192, 192
	goto Common_EventScript_PkmnCenterJack_Change_Costume_1

Common_EventScript_PkmnCenterJack_Change_Costume_4:
	checkplayergender
	compare VAR_RESULT, GENDER_FEMALE
	goto_if_eq Common_EventScript_PkmnCenterJack_Change_Costume_7
	copyvar VAR_COSTUME_NUMBER, VAR_TEMP_1
	msgbox Common_EventScript_PkmnCenterJack_Change_Costume_Text_1, MSGBOX_DEFAULT
	warp MAP_LITTLEROOT_TOWN, 192, 192, 192
Common_EventScript_PkmnCenterJack_Change_Costume_6:
	goto Common_EventScript_PkmnCenterJack_Change_Costume_1

Common_EventScript_PkmnCenterJack_Change_Costume_5:
	msgbox Common_EventScript_PkmnCenterJack_Change_Costume_Text_3, MSGBOX_DEFAULT
	goto Common_EventScript_PkmnCenterJack_Change_Costume_1

Common_EventScript_PkmnCenterJack_Change_Costume_7:
	msgbox Common_EventScript_PkmnCenterJack_Change_Costume_Text_2, MSGBOX_DEFAULT
	goto Common_EventScript_PkmnCenterJack_Change_Costume_6


Common_EventScript_PkmnCenterJack_Change_Costume_Text_0:
	.string "What outfit do you want to use today?$"

Common_EventScript_PkmnCenterJack_Change_Costume_Text_1:
	.string "Come this way so you can change your\n"
	.string "outfit$"

Common_EventScript_PkmnCenterJack_Change_Costume_Text_2:
	.string "Sorry but this costume has not been\n"
	.string "added to the game yet.$"

Common_EventScript_PkmnCenterJack_Change_Costume_Text_3:
	.string "Come back anytime you want to change\n"
	.string "outfits!$"
