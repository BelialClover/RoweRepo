# 1 "data/maps/ThreeIsland_Port/scripts.pory"

# 2 "data/maps/ThreeIsland_Port/scripts.pory"
.set LOCALID_SAILOR, 1
# 3 "data/maps/ThreeIsland_Port/scripts.pory"

# 4 "data/maps/ThreeIsland_Port/scripts.pory"
ThreeIsland_Port_Port_MapScripts::
# 5 "data/maps/ThreeIsland_Port/scripts.pory"
ThreeIsland_Port_MapScripts::
# 6 "data/maps/ThreeIsland_Port/scripts.pory"
	.byte 0
# 7 "data/maps/ThreeIsland_Port/scripts.pory"
	
# 8 "data/maps/ThreeIsland_Port/scripts.pory"
// Sailor -------------------------------------------------------------------------------------------
# 9 "data/maps/ThreeIsland_Port/scripts.pory"
ThreeIsland_Port_EventScript_Sailor:: @ 8267CA2
# 10 "data/maps/ThreeIsland_Port/scripts.pory"
	lock
# 11 "data/maps/ThreeIsland_Port/scripts.pory"
	faceplayer
# 12 "data/maps/ThreeIsland_Port/scripts.pory"
	goto_if_set FLAG_SAILED_FROM_SLATEPORT, ThreeIsland_Port_EventScript_Sailor_Slateport
# 13 "data/maps/ThreeIsland_Port/scripts.pory"
	msgbox ThreeIsland_Port_Text_Text_SailorReturn_Lilycove, MSGBOX_YESNO
# 14 "data/maps/ThreeIsland_Port/scripts.pory"
	compare VAR_RESULT, NO
# 15 "data/maps/ThreeIsland_Port/scripts.pory"
	goto_if_eq ThreeIsland_Port_EventScript_AsYouLike
# 16 "data/maps/ThreeIsland_Port/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 17 "data/maps/ThreeIsland_Port/scripts.pory"
	closemessage
# 18 "data/maps/ThreeIsland_Port/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestDown
# 19 "data/maps/ThreeIsland_Port/scripts.pory"
	waitmovement 0
# 20 "data/maps/ThreeIsland_Port/scripts.pory"
	delay 30
# 21 "data/maps/ThreeIsland_Port/scripts.pory"
	hideobjectat LOCALID_SAILOR, MAP_THREE_ISLAND_PORT
# 22 "data/maps/ThreeIsland_Port/scripts.pory"
	special HideFollower
# 23 "data/maps/ThreeIsland_Port/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 24 "data/maps/ThreeIsland_Port/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 25 "data/maps/ThreeIsland_Port/scripts.pory"
	warp MAP_LILYCOVE_CITY_HARBOR, 255, 8, 11
# 26 "data/maps/ThreeIsland_Port/scripts.pory"
	waitstate
# 27 "data/maps/ThreeIsland_Port/scripts.pory"
	release
# 28 "data/maps/ThreeIsland_Port/scripts.pory"
	end
# 29 "data/maps/ThreeIsland_Port/scripts.pory"
	
# 30 "data/maps/ThreeIsland_Port/scripts.pory"
ThreeIsland_Port_EventScript_Sailor_Slateport:
# 31 "data/maps/ThreeIsland_Port/scripts.pory"
	msgbox ThreeIsland_Port_Text_Text_SailorReturn_Slateport, MSGBOX_YESNO
# 32 "data/maps/ThreeIsland_Port/scripts.pory"
	compare VAR_RESULT, NO
# 33 "data/maps/ThreeIsland_Port/scripts.pory"
	goto_if_eq ThreeIsland_Port_EventScript_AsYouLike
# 34 "data/maps/ThreeIsland_Port/scripts.pory"
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
# 35 "data/maps/ThreeIsland_Port/scripts.pory"
	closemessage
# 36 "data/maps/ThreeIsland_Port/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestDown
# 37 "data/maps/ThreeIsland_Port/scripts.pory"
	waitmovement 0
# 38 "data/maps/ThreeIsland_Port/scripts.pory"
	delay 30
# 39 "data/maps/ThreeIsland_Port/scripts.pory"
	hideobjectat LOCALID_SAILOR, MAP_THREE_ISLAND_PORT
# 40 "data/maps/ThreeIsland_Port/scripts.pory"
	special HideFollower
# 41 "data/maps/ThreeIsland_Port/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 42 "data/maps/ThreeIsland_Port/scripts.pory"
	call Common_EventScript_FerryDepartIsland
# 43 "data/maps/ThreeIsland_Port/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 255, 8, 11
# 44 "data/maps/ThreeIsland_Port/scripts.pory"
	waitstate
# 45 "data/maps/ThreeIsland_Port/scripts.pory"
	release
# 46 "data/maps/ThreeIsland_Port/scripts.pory"
	end
# 47 "data/maps/ThreeIsland_Port/scripts.pory"

# 48 "data/maps/ThreeIsland_Port/scripts.pory"
ThreeIsland_Port_EventScript_AsYouLike:: @ 8267CE7
# 49 "data/maps/ThreeIsland_Port/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 50 "data/maps/ThreeIsland_Port/scripts.pory"
	release
# 51 "data/maps/ThreeIsland_Port/scripts.pory"
	end
# 52 "data/maps/ThreeIsland_Port/scripts.pory"
	
# 53 "data/maps/ThreeIsland_Port/scripts.pory"
ThreeIsland_Port_Text_Text_SailorReturn_Lilycove: @ 82C6B90
# 54 "data/maps/ThreeIsland_Port/scripts.pory"
    .string "This island has a lot of berries, eh?\n"
# 55 "data/maps/ThreeIsland_Port/scripts.pory"
	.string "Do you want to return to Lilycove?$"
# 56 "data/maps/ThreeIsland_Port/scripts.pory"
	
# 57 "data/maps/ThreeIsland_Port/scripts.pory"
ThreeIsland_Port_Text_Text_SailorReturn_Slateport: @ 82C6B90
# 58 "data/maps/ThreeIsland_Port/scripts.pory"
    .string "This island has a lot of berries, eh?\n"
# 59 "data/maps/ThreeIsland_Port/scripts.pory"
	.string "Do you want to return to Slateport?$"
# 60 "data/maps/ThreeIsland_Port/scripts.pory"
	
# 61 "data/maps/ThreeIsland_Port/scripts.pory"
// -------------------------------------------------------------------------------------------
