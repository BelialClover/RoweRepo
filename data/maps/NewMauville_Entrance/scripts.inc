# 1 "data/maps/NewMauville_Entrance/scripts.pory"

# 2 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_MapScripts:: @ 82372AD
# 3 "data/maps/NewMauville_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewMauville_Entrance_OnLoad
# 4 "data/maps/NewMauville_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NewMauville_Entrance_OnTransition
# 5 "data/maps/NewMauville_Entrance/scripts.pory"
	.byte 0
# 6 "data/maps/NewMauville_Entrance/scripts.pory"

# 7 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_OnLoad: @ 82372B8
# 8 "data/maps/NewMauville_Entrance/scripts.pory"
	end
# 9 "data/maps/NewMauville_Entrance/scripts.pory"

# 10 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_EventScript_CloseDoor:: @ 82372C4
# 11 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile0, 1
# 12 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile1, 1
# 13 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 0, METATILE_Facility_NewMauvilleDoor_Closed_Tile2, 1
# 14 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile3, 1
# 15 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile4, 1
# 16 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 1, METATILE_Facility_NewMauvilleDoor_Closed_Tile5, 1
# 17 "data/maps/NewMauville_Entrance/scripts.pory"
	return
# 18 "data/maps/NewMauville_Entrance/scripts.pory"

# 19 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_OnTransition: @ 82372FB
# 20 "data/maps/NewMauville_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_NEW_MAUVILLE
# 21 "data/maps/NewMauville_Entrance/scripts.pory"
	end
# 22 "data/maps/NewMauville_Entrance/scripts.pory"

# 23 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_EventScript_Door:: @ 82372FF
# 24 "data/maps/NewMauville_Entrance/scripts.pory"
	lockall
# 25 "data/maps/NewMauville_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 26 "data/maps/NewMauville_Entrance/scripts.pory"
	waitmovement 0
# 27 "data/maps/NewMauville_Entrance/scripts.pory"
	msgbox NewMauville_Entrance_Text_DoorIsLocked, MSGBOX_DEFAULT
# 28 "data/maps/NewMauville_Entrance/scripts.pory"
	checkitem ITEM_BASEMENT_KEY, 1
# 29 "data/maps/NewMauville_Entrance/scripts.pory"
	compare VAR_RESULT, FALSE
# 30 "data/maps/NewMauville_Entrance/scripts.pory"
	goto_if_eq NewMauville_Entrance_EventScript_DontOpenDoor
# 31 "data/maps/NewMauville_Entrance/scripts.pory"
	msgbox NewMauville_Entrance_Text_UseBasementKey, MSGBOX_YESNO
# 32 "data/maps/NewMauville_Entrance/scripts.pory"
	compare VAR_RESULT, NO
# 33 "data/maps/NewMauville_Entrance/scripts.pory"
	goto_if_eq NewMauville_Entrance_EventScript_DontOpenDoor
# 34 "data/maps/NewMauville_Entrance/scripts.pory"
	msgbox NewMauville_Entrance_Text_UsedBasementKey, MSGBOX_DEFAULT
# 35 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile0, 0
# 36 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile1, 0
# 37 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 0, METATILE_Facility_NewMauvilleDoor_Open_Tile2, 0
# 38 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 3, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile3, 1
# 39 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 4, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile4, 0
# 40 "data/maps/NewMauville_Entrance/scripts.pory"
	setmetatile 5, 1, METATILE_Facility_NewMauvilleDoor_Open_Tile5, 1
# 41 "data/maps/NewMauville_Entrance/scripts.pory"
	special DrawWholeMapView
# 42 "data/maps/NewMauville_Entrance/scripts.pory"
	playse SE_BANG
# 43 "data/maps/NewMauville_Entrance/scripts.pory"
	setvar VAR_NEW_MAUVILLE_STATE, 1
# 44 "data/maps/NewMauville_Entrance/scripts.pory"
	releaseall
# 45 "data/maps/NewMauville_Entrance/scripts.pory"
	end
# 46 "data/maps/NewMauville_Entrance/scripts.pory"

# 47 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_EventScript_DontOpenDoor:: @ 8237380
# 48 "data/maps/NewMauville_Entrance/scripts.pory"
	releaseall
# 49 "data/maps/NewMauville_Entrance/scripts.pory"
	end
# 50 "data/maps/NewMauville_Entrance/scripts.pory"

# 51 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_Text_DoorIsLocked: @ 8237382
# 52 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "The door is locked.$"
# 53 "data/maps/NewMauville_Entrance/scripts.pory"

# 54 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_Text_UseBasementKey: @ 8237396
# 55 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "Use the Basement Key?$"
# 56 "data/maps/NewMauville_Entrance/scripts.pory"

# 57 "data/maps/NewMauville_Entrance/scripts.pory"
NewMauville_Entrance_Text_UsedBasementKey: @ 82373AC
# 58 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "{PLAYER} used the Basement Key.\p"
# 59 "data/maps/NewMauville_Entrance/scripts.pory"
	.string "The door opened!$"
