# 1 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 2 "data/maps/LilycoveCity_Harbor/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/LilycoveCity_Harbor/scripts.pory"
.set LOCALID_SS_TIDAL, 2
# 4 "data/maps/LilycoveCity_Harbor/scripts.pory"
.set LOCALID_FERRY_SAILOR, 4
# 5 "data/maps/LilycoveCity_Harbor/scripts.pory"
.set LOCALID_BRINEY, 5
# 6 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 7 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_MapScripts:: @ 821E000
# 8 "data/maps/LilycoveCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_Harbor_OnTransition
# 9 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.byte 0
# 10 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 11 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_OnTransition: @ 821E006
# 12 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setescapewarp MAP_LILYCOVE_CITY, 255, 12, 33
# 13 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 14 "data/maps/LilycoveCity_Harbor/scripts.pory"
	
# 15 "data/maps/LilycoveCity_Harbor/scripts.pory"
// -----------------------------------------------------------------------------------------------------------------------------
# 16 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSlateport_Postgame:: @ 821E149
# 17 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SlateportItIs, MSGBOX_YESNO
# 18 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
# 19 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind
# 20 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_LILYCOVE
# 21 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 22 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 255, 1, 10
# 23 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 24 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 25 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 26 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 27 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBattleFrontier:: @ 821E171
# 28 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerry
# 29 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 255, 19, 67
# 30 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 31 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 32 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 33 "data/maps/LilycoveCity_Harbor/scripts.pory"
	
# 34 "data/maps/LilycoveCity_Harbor/scripts.pory"
// -----------------------------------------------------------------------------------------------------------------------------
# 35 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 36 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetEonTicketState:: @ 821E194
# 37 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_E, 0
# 38 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_SOUTHERN_ISLAND, Common_EventScript_NopReturn
# 39 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_EON_TICKET, 1
# 40 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
# 41 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq Common_EventScript_NopReturn
# 42 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_E, 1
# 43 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_EON_TICKET, Common_EventScript_NopReturn
# 44 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_E, 2
# 45 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 46 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 47 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetAuroraTicketState:: @ 821E1C6
# 48 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_D, 0
# 49 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_BIRTH_ISLAND, Common_EventScript_NopReturn
# 50 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_AURORA_TICKET, 1
# 51 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
# 52 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq Common_EventScript_NopReturn
# 53 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_D, 1
# 54 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_AURORA_TICKET, Common_EventScript_NopReturn
# 55 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_D, 2
# 56 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 57 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 58 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetOldSeaMapState:: @ 821E1F8
# 59 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_C, 0
# 60 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_FARAWAY_ISLAND, Common_EventScript_NopReturn
# 61 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_OLD_SEA_MAP, 1
# 62 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
# 63 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq Common_EventScript_NopReturn
# 64 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_C, 1
# 65 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_OLD_SEA_MAP, Common_EventScript_NopReturn
# 66 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_C, 2
# 67 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 68 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 69 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetMysticTicketState:: @ 821E22A
# 70 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_9, 0
# 71 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_NAVEL_ROCK, Common_EventScript_NopReturn
# 72 "data/maps/LilycoveCity_Harbor/scripts.pory"
	checkitem ITEM_MYSTIC_TICKET, 1
# 73 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
# 74 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_eq Common_EventScript_NopReturn
# 75 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_9, 1
# 76 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SHOWN_MYSTIC_TICKET, Common_EventScript_NopReturn
# 77 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_9, 2
# 78 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 79 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 80 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetFirstTimeShowingTicket:: @ 821E25C
# 81 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_B, 0
# 82 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_E, 2
# 83 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_SetFirstTimeShowingEonTicket
# 84 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_D, 2
# 85 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_SetFirstTimeShowingAuroraTicket
# 86 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_C, 2
# 87 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_SetFirstTimeShowingOldSeaMap
# 88 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_9, 2
# 89 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_SetFirstTimeShowingMysticTicket
# 90 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 91 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 92 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetFirstTimeShowingEonTicket:: @ 821E28E
# 93 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 1
# 94 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 95 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 96 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetFirstTimeShowingAuroraTicket:: @ 821E294
# 97 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 2
# 98 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 99 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 100 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetFirstTimeShowingOldSeaMap:: @ 821E29A
# 101 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 4
# 102 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 103 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 104 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetFirstTimeShowingMysticTicket:: @ 821E2A0
# 105 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_B, 8
# 106 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 107 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 108 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetHasTicketsState:: @ 821E2A6
# 109 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_TEMP_A, 0
# 110 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_E, 1
# 111 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_SetHasEonTicket
# 112 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_D, 1
# 113 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_SetHasAuroraTicket
# 114 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_C, 1
# 115 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_SetHasOldSeaMap
# 116 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_TEMP_9, 1
# 117 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_SetHasMysticTicket
# 118 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 119 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 120 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetHasEonTicket:: @ 821E2D8
# 121 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 1
# 122 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 123 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 124 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetHasAuroraTicket:: @ 821E2DE
# 125 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 2
# 126 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 127 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 128 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetHasOldSeaMap:: @ 821E2E4
# 129 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 4
# 130 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 131 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 132 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SetHasMysticTicket:: @ 821E2EA
# 133 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addvar VAR_TEMP_A, 8
# 134 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 135 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 136 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_EonTicketFirstTime:: @ 821E2F0
# 137 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_EON_TICKET
# 138 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 139 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 140 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 141 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ShowEonTicket, MSGBOX_DEFAULT
# 142 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToSouthernIslandFirstTime
# 143 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 144 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 145 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToSouthernIslandFirstTime:: @ 821E30F
# 146 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 147 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 148 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_SOUTHERN_ISLAND_EXTERIOR, 255, 13, 22
# 149 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 150 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 151 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 152 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 153 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_AuroraTicketFirstTime:: @ 821E320
# 154 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_AURORA_TICKET
# 155 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 156 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 157 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 158 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_OddTicketGetOnBoard, MSGBOX_DEFAULT
# 159 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToBirthIslandFirstTime
# 160 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 161 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 162 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToBirthIslandFirstTime:: @ 821E33F
# 163 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 164 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 165 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_BIRTH_ISLAND_HARBOR, 255, 8, 4
# 166 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 167 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 168 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 169 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 170 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_OldSeaMapFirstTime:: @ 821E350
# 171 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_OLD_SEA_MAP
# 172 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ShowOldSeaMap, MSGBOX_DEFAULT
# 173 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 174 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 175 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_OldSeaMapTooFar, MSGBOX_DEFAULT
# 176 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 177 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, Common_Movement_WalkInPlaceFastestUp
# 178 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 179 "data/maps/LilycoveCity_Harbor/scripts.pory"
	playse SE_PIN
# 180 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, Common_Movement_ExclamationMark
# 181 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 182 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, Common_Movement_Delay48
# 183 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 184 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 185 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayNorth
# 186 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 187 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayEast
# 188 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addobject LOCALID_BRINEY
# 189 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 190 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_BrineyFaceSailorNorth
# 191 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 192 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_BrineyFaceSailorEast
# 193 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_BrineyHoldOnASecond, MSGBOX_DEFAULT
# 194 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 195 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_BrineyFacePlayerNorth
# 196 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 197 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_BrineyFacePlayerEast
# 198 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_BrineyLetsSail, MSGBOX_DEFAULT
# 199 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 200 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 201 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorNorth
# 202 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 203 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorEast
# 204 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 205 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 206 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 255, 13, 38
# 207 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 208 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 209 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 210 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 211 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToFarawayIslandFirstTime:: @ 821E40C
# 212 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 213 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 214 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_FARAWAY_ISLAND_ENTRANCE, 255, 13, 38
# 215 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 216 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 217 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 218 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 219 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MysticTicketFirstTime:: @ 821E41D
# 220 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setflag FLAG_SHOWN_MYSTIC_TICKET
# 221 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 222 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 223 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 224 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_OddTicketGetOnBoard, MSGBOX_DEFAULT
# 225 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto LilycoveCity_Harbor_EventScript_GoToNavelRockFirstTime
# 226 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 227 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 228 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GoToNavelRockFirstTime:: @ 821E43C
# 229 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 230 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_BoardFerryWithSailor
# 231 "data/maps/LilycoveCity_Harbor/scripts.pory"
	warp MAP_NAVEL_ROCK_HARBOR, 255, 8, 4
# 232 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 233 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 234 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 235 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 236 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MultipleEventTicketsFirstTime:: @ 821E44D
# 237 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_ThatPass, MSGBOX_DEFAULT
# 238 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 239 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call LilycoveCity_Harbor_EventScript_GetEventTicketSailor
# 240 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message EventTicket_Text_OddTicketsWhereTo
# 241 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 242 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 1
# 243 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special ScriptMenu_CreateLilycoveSSTidalMultichoice
# 244 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitstate
# 245 "data/maps/LilycoveCity_Harbor/scripts.pory"
	special GetLilycoveSSTidalSelection
# 246 "data/maps/LilycoveCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 247 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 2, LilycoveCity_Harbor_EventScript_GoToSouthernIslandFirstTime
# 248 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 3, LilycoveCity_Harbor_EventScript_GoToNavelRockFirstTime
# 249 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 4, LilycoveCity_Harbor_EventScript_GoToBirthIslandFirstTime
# 250 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 5, LilycoveCity_Harbor_EventScript_GoToFarawayIslandFirstTime
# 251 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case 6, LilycoveCity_Harbor_EventScript_ExitFirstTimeTicketSailSelect
# 252 "data/maps/LilycoveCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, LilycoveCity_Harbor_EventScript_ExitFirstTimeTicketSailSelect
# 253 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 254 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 255 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 256 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_ExitFirstTimeTicketSailSelect:: @ 821E4B6
# 257 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
# 258 "data/maps/LilycoveCity_Harbor/scripts.pory"
	closemessage
# 259 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, Common_Movement_WalkInPlaceFastestUp
# 260 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 261 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 262 "data/maps/LilycoveCity_Harbor/scripts.pory"
	removeobject LOCALID_FERRY_SAILOR
# 263 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 264 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_ATTENDANT, Common_Movement_WalkInPlaceFastestDown
# 265 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 266 "data/maps/LilycoveCity_Harbor/scripts.pory"
	showobjectat LOCALID_ATTENDANT, MAP_LILYCOVE_CITY_HARBOR
# 267 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 268 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 269 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 270 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 271 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 272 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_GetEventTicketSailor:: @ 821E4EE
# 273 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestUp
# 274 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 275 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 276 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_LILYCOVE_CITY_HARBOR
# 277 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 60
# 278 "data/maps/LilycoveCity_Harbor/scripts.pory"
	addobject LOCALID_FERRY_SAILOR
# 279 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 280 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, Common_Movement_FacePlayer
# 281 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 282 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 283 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 284 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerryWithSailor:: @ 821E514
# 285 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, Common_Movement_WalkInPlaceFastestUp
# 286 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 287 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 288 "data/maps/LilycoveCity_Harbor/scripts.pory"
	removeobject LOCALID_FERRY_SAILOR
# 289 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 290 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_PlayerBoardFerryNorth
# 291 "data/maps/LilycoveCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 292 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call_if_eq LilycoveCity_Harbor_EventScript_PlayerBoardFerryEast
# 293 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay 30
# 294 "data/maps/LilycoveCity_Harbor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 295 "data/maps/LilycoveCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 296 "data/maps/LilycoveCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 297 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 298 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 299 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryUnavailable:: @ 821E54D
# 300 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_FerryUnavailable, MSGBOX_DEFAULT
# 301 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 302 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 303 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 304 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_NoEventTickets:: @ 821E557
# 305 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 306 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message LilycoveCity_Harbor_Text_FlashTicketWhereTo
# 307 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 308 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 309 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 310 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_FerryDestinationChangeMind:: @ 821E5C0
# 311 "data/maps/LilycoveCity_Harbor/scripts.pory"
	message LilycoveCity_Harbor_Text_WhereWouldYouLikeToGo
# 312 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmessage
# 313 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 314 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 315 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_PlayerBoardFerryEast:: @ 821E610
# 316 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardFerryEast
# 317 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 318 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 319 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 320 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_PlayerBoardFerryNorth:: @ 821E61B
# 321 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardFerryNorth
# 322 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 323 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 324 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 325 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardFerryEast: @ 821E630
# 326 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 327 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_fastest_up
# 328 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 329 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 330 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardFerryNorth: @ 821E633
# 331 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 332 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 333 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 334 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_UnusedBoardFerry: @ 821E635
# 335 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 336 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 337 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 338 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_Sailor:: @ 821E637
# 339 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock
# 340 "data/maps/LilycoveCity_Harbor/scripts.pory"
	faceplayer
# 341 "data/maps/LilycoveCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_Harbor_EventScript_SailorFerryAvailable
# 342 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailorFerryUnavailable, MSGBOX_DEFAULT
# 343 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 344 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 345 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 346 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_SailorFerryAvailable:: @ 821E64C
# 347 "data/maps/LilycoveCity_Harbor/scripts.pory"
	msgbox LilycoveCity_Harbor_Text_SailorFerryAvailable, MSGBOX_DEFAULT
# 348 "data/maps/LilycoveCity_Harbor/scripts.pory"
	release
# 349 "data/maps/LilycoveCity_Harbor/scripts.pory"
	end
# 350 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 351 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayNorth:: @ 821E656
# 352 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorOutOfWayNorth
# 353 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 354 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 355 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 356 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_MoveSailorOutOfWayEast:: @ 821E661
# 357 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorOutOfWayEast
# 358 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 359 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 360 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 361 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorOutOfWayNorth: @ 821E66C
# 362 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_fastest_right
# 363 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock_facing_direction
# 364 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_left
# 365 "data/maps/LilycoveCity_Harbor/scripts.pory"
	unlock_facing_direction
# 366 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 367 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 368 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorOutOfWayEast: @ 821E671
# 369 "data/maps/LilycoveCity_Harbor/scripts.pory"
	lock_facing_direction
# 370 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_down
# 371 "data/maps/LilycoveCity_Harbor/scripts.pory"
	unlock_facing_direction
# 372 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 373 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 374 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BrineyFaceSailorNorth:: @ 821E675
# 375 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFastestLeft
# 376 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 377 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 378 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 379 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BrineyFaceSailorEast:: @ 821E680
# 380 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFastestDown
# 381 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 382 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 383 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 384 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BrineyFacePlayerNorth:: @ 821E68B
# 385 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFastestDown
# 386 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 387 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 388 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 389 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BrineyFacePlayerEast:: @ 821E696
# 390 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_WalkInPlaceFastestLeft
# 391 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 392 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 393 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 394 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorNorth:: @ 821E6A1
# 395 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_BRINEY, LilycoveCity_Harbor_Movement_BrineyBoardFerry
# 396 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyNorth
# 397 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorBoardWithBrineyNorth
# 398 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 399 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 400 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 401 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_EventScript_BoardFerryWithBrineyAndSailorEast:: @ 821E6BA
# 402 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_BRINEY, LilycoveCity_Harbor_Movement_BrineyBoardFerry
# 403 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyEast
# 404 "data/maps/LilycoveCity_Harbor/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, LilycoveCity_Harbor_Movement_SailorBoardWithBrineyEast
# 405 "data/maps/LilycoveCity_Harbor/scripts.pory"
	waitmovement 0
# 406 "data/maps/LilycoveCity_Harbor/scripts.pory"
	return
# 407 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 408 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_BrineyBoardFerry: @ 821E6D3
# 409 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_fastest_up
# 410 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_8
# 411 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 412 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 413 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 414 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyNorth: @ 821E6D7
# 415 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 416 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 417 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 418 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 419 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 420 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 421 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorBoardWithBrineyNorth: @ 821E6DC
# 422 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 423 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 424 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 425 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 426 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_fastest_up
# 427 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 428 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 429 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 430 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 431 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_PlayerBoardWithBrineyEast: @ 821E6E4
# 432 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 433 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_right
# 434 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_in_place_fastest_up
# 435 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 436 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 437 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 438 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 439 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Movement_SailorBoardWithBrineyEast: @ 821E6EA
# 440 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 441 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 442 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 443 "data/maps/LilycoveCity_Harbor/scripts.pory"
	walk_up
# 444 "data/maps/LilycoveCity_Harbor/scripts.pory"
	delay_16
# 445 "data/maps/LilycoveCity_Harbor/scripts.pory"
	set_invisible
# 446 "data/maps/LilycoveCity_Harbor/scripts.pory"
	step_end
# 447 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 448 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_FerryUnavailable: @ 821E6F1
# 449 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I beg your pardon?\n"
# 450 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "You're looking for a ship?\p"
# 451 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I'm sorry, the ferry service isn't\n"
# 452 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "available at present…$"
# 453 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 454 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_MayISeeYourTicket: @ 821E758
# 455 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 456 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "May I see your Ticket?$"
# 457 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 458 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_NoTicket: @ 821E792
# 459 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "{PLAYER} doesn't have the Ticket…\p"
# 460 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I'm terribly sorry.\p"
# 461 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "You must have a Ticket to board\n"
# 462 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "the ferry.$"
# 463 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 464 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_FlashTicketWhereTo: @ 821E7ED
# 465 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "{PLAYER} flashed the Ticket.\p"
# 466 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 467 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "And where would you like to go?$"
# 468 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 469 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_SailAnotherTime: @ 821E842
# 470 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Please sail with us another time!$"
# 471 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 472 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_SlateportItIs: @ 821E864
# 473 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Slateport City it is, then!$"
# 474 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 475 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_BattleFrontierItIs: @ 821E880
# 476 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Battle Frontier it is, then!$"
# 477 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 478 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_PleaseBoard: @ 821E89D
# 479 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 480 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "departure.$"
# 481 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 482 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_WhereWouldYouLikeToGo: @ 821E8CC
# 483 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Then, where would you like to go?$"
# 484 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 485 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_SailorFerryUnavailable: @ 821E8EE
# 486 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Until they finish making the ferry,\n"
# 487 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "we sailors have nothing to do…\p"
# 488 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "I wish they'd get a move on, the folks\n"
# 489 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "at the Shipyard in Slateport.$"
# 490 "data/maps/LilycoveCity_Harbor/scripts.pory"

# 491 "data/maps/LilycoveCity_Harbor/scripts.pory"
LilycoveCity_Harbor_Text_SailorFerryAvailable: @ 821E976
# 492 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "The ferry S.S. Tidal is finally in\n"
# 493 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "operation.\p"
# 494 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "The folks at the Shipyard in Slateport\n"
# 495 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "must've worked extra hard.\p"
# 496 "data/maps/LilycoveCity_Harbor/scripts.pory"
	.string "Well, it's my turn to get busy now!$"
