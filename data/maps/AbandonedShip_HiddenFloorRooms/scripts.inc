# 1 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 2 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_MapScripts:: @ 8238C49
# 3 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AbandonedShip_HiddenFloorRooms_OnFrame
# 4 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.byte 0
# 5 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 6 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_OnFrame: @ 8238C4F
# 7 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle
# 8 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.2byte 0
# 9 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 10 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ After the below calculation, VAR_TEMP_4 is the room number of the door the player entered
# 11 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Bottom row, left column   (Rm 1)
# 12 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Bottom row, middle column (Rm 2)
# 13 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Bottom row, right column	(Rm 3)
# 14 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Upper row,  left column   (Rm 4)
# 15 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Upper row,  middle column (Rm 5)
# 16 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
@ Upper row,  right column  (Rm 6)
# 17 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_DoHiddenItemSparkle:: @ 8238C59
# 18 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setvar VAR_TEMP_1, 1
# 19 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 20 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	setvar VAR_TEMP_4, 1
# 21 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_TEMP_2, 21
# 22 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq AbandonedShip_HiddenFloorRooms_EventScript_InMiddleRoomColumn
# 23 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_TEMP_2, 36
# 24 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq AbandonedShip_HiddenFloorRooms_EventScript_InRightRoomColumn
# 25 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_TEMP_3, 2
# 26 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq AbandonedShip_HiddenFloorRooms_EventScript_InUpperRoomRow
# 27 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	switch VAR_TEMP_4
# 28 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 1, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1
# 29 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 2, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm2
# 30 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 3, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3
# 31 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 4, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4
# 32 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 5, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5
# 33 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	case 6, AbandonedShip_HiddenFloorRooms_EventScript_EnterRm6
# 34 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 35 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 36 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_InMiddleRoomColumn:: @ 8238CD1
# 37 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 1
# 38 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 39 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 40 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_InRightRoomColumn:: @ 8238CD7
# 41 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 2
# 42 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 43 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 44 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_InUpperRoomRow:: @ 8238CDD
# 45 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	addvar VAR_TEMP_4, 3
# 46 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 47 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 48 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm1:: @ 8238CE3
# 49 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 50 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 10, 10, 0
# 51 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom4Key
# 52 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
# 53 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq AbandonedShip_HiddenFloorRooms_EventScript_Rm4KeySparkle
# 54 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 55 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 56 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 57 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 58 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm2:: @ 8238D0C
# 59 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 60 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 61 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm3:: @ 8238D0D
# 62 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom1Key
# 63 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, TRUE
# 64 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	goto_if_eq AbandonedShip_HiddenFloorRooms_EventScript_Rm3NoSparkle
# 65 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 66 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
# 67 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq AbandonedShip_HiddenFloorRooms_EventScript_Rm1KeySparkle
# 68 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 69 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 70 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 71 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 72 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm3NoSparkle:: @ 8238D32
# 73 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 74 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 75 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm4:: @ 8238D33
# 76 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 77 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 8, 5, 0
# 78 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 11, 3, 0
# 79 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom6Key
# 80 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
# 81 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq AbandonedShip_HiddenFloorRooms_EventScript_Rm6KeySparkle
# 82 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 83 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 84 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 85 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 86 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm5:: @ 8238D6B
# 87 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 20
# 88 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 16, 3, 0
# 89 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 25, 2, 0
# 90 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 24, 6, 0
# 91 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	specialvar VAR_RESULT, FoundAbandonedShipRoom2Key
# 92 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	compare VAR_RESULT, FALSE
# 93 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	call_if_eq AbandonedShip_HiddenFloorRooms_EventScript_Rm2KeySparkle
# 94 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	waitfieldeffect FLDEFF_SPARKLE
# 95 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	delay 10
# 96 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 97 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 98 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_EnterRm6:: @ 8238DB2
# 99 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 100 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 101 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm1KeySparkle:: @ 8238DB3
# 102 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 42, 10, 0
# 103 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 104 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 105 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm2KeySparkle:: @ 8238DC3
# 106 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 20, 5, 0
# 107 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 108 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 109 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm4KeySparkle:: @ 8238DD3
# 110 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 1, 12, 0
# 111 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 112 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 113 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Rm6KeySparkle:: @ 8238DE3
# 114 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	dofieldeffectsparkle 1, 2, 0
# 115 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	return
# 116 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 117 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_EventScript_Trash:: @ 8238DF3
# 118 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	lockall
# 119 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	msgbox AbandonedShip_HiddenFloorRooms_Text_BrightShinyTrash, MSGBOX_DEFAULT
# 120 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	releaseall
# 121 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	end
# 122 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"

# 123 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
AbandonedShip_HiddenFloorRooms_Text_BrightShinyTrash: @ 8238DFE
# 124 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.string "It's bright and shiny!\n"
# 125 "data/maps/AbandonedShip_HiddenFloorRooms/scripts.pory"
	.string "But it's just trash…$"
