# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 3 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_MOM, 4
# 4 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 8
# 5 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 6
# 6 "data/maps/LittlerootTown/scripts.pory"

# 7 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts:: @ 81E7DCB
# 8 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 9 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 10 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 11 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 12 "data/maps/LittlerootTown/scripts.pory"

# 13 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 14 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 17 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 18 "data/maps/LittlerootTown/scripts.pory"

# 19 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 26 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 27 "data/maps/LittlerootTown/scripts.pory"

# 28 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_HOUSES_STATE_MAY
# 29 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 30 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 34 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 35 "data/maps/LittlerootTown/scripts.pory"

# 36 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 37 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 40 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 41 "data/maps/LittlerootTown/scripts.pory"

# 42 "data/maps/LittlerootTown/scripts.pory"

# 43 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition: @ 81E7DDB
# 44 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 45 "data/maps/LittlerootTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 46 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_INTRO_STATE, 2
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MoveMomToMaysDoor
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_SetTwinPos
# 49 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 3
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 51 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_HOUSES_STATE_MAY, 4
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 53 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4
# 54 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 55 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_OLDALE_RIVAL_STATE, 1
# 56 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MoveRivalFromOldale
# 57 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_RIVAL_STATE, 3
# 58 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_SetRivalLeftForRoute103
# 59 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1
# 60 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_HideMapNamePopup
# 61 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2
# 62 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 63 "data/maps/LittlerootTown/scripts.pory"
	end
# 64 "data/maps/LittlerootTown/scripts.pory"

# 65 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade:: @ 81E7E45
# 66 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 67 "data/maps/LittlerootTown/scripts.pory"
	return
# 68 "data/maps/LittlerootTown/scripts.pory"

# 69 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup:: @ 81E7E4B
# 70 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 71 "data/maps/LittlerootTown/scripts.pory"
	return
# 72 "data/maps/LittlerootTown/scripts.pory"

# 73 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103:: @ 81E7E4F
# 74 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 75 "data/maps/LittlerootTown/scripts.pory"
	return
# 76 "data/maps/LittlerootTown/scripts.pory"

# 77 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale:: @ 81E7E53
# 78 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 79 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 80 "data/maps/LittlerootTown/scripts.pory"
	return
# 81 "data/maps/LittlerootTown/scripts.pory"

# 82 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent:: @ 81E7E5C
# 83 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 5
# 84 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 85 "data/maps/LittlerootTown/scripts.pory"
	return
# 86 "data/maps/LittlerootTown/scripts.pory"

# 87 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor:: @ 81E7E67
# 88 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 89 "data/maps/LittlerootTown/scripts.pory"
	return
# 90 "data/maps/LittlerootTown/scripts.pory"

# 91 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos:: @ 81E7E6F
# 92 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 0
# 93 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 94 "data/maps/LittlerootTown/scripts.pory"
	//setobjectxyperm LOCALID_TWIN, 10, 1
# 95 "data/maps/LittlerootTown/scripts.pory"
	//setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 96 "data/maps/LittlerootTown/scripts.pory"
	return
# 97 "data/maps/LittlerootTown/scripts.pory"

# 98 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos:: @ 81E7E86
# 99 "data/maps/LittlerootTown/scripts.pory"
	//setobjectxyperm LOCALID_TWIN, 7, 2
# 100 "data/maps/LittlerootTown/scripts.pory"
	//setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 101 "data/maps/LittlerootTown/scripts.pory"
	return
# 102 "data/maps/LittlerootTown/scripts.pory"

# 103 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos:: @ 81E7E92
# 104 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 105 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 106 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 107 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
# 108 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 109 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
# 110 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 111 "data/maps/LittlerootTown/scripts.pory"
	return
# 112 "data/maps/LittlerootTown/scripts.pory"

# 113 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale:: @ 81E7EB1
# 114 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 115 "data/maps/LittlerootTown/scripts.pory"
	return
# 116 "data/maps/LittlerootTown/scripts.pory"

# 117 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale:: @ 81E7EB9
# 118 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 119 "data/maps/LittlerootTown/scripts.pory"
	return
# 120 "data/maps/LittlerootTown/scripts.pory"

# 121 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame: @ 81E7EC1
# 122 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 123 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 124 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 125 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 126 "data/maps/LittlerootTown/scripts.pory"

# 127 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale:: @ 81E7EDB
# 128 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 129 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 130 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 131 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 132 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 133 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 255, 8, 8
# 134 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 135 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 136 "data/maps/LittlerootTown/scripts.pory"
	end
# 137 "data/maps/LittlerootTown/scripts.pory"

# 138 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale:: @ 81E7EF9
# 139 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 140 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 141 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 142 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 143 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 144 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 255, 2, 8
# 145 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 146 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 147 "data/maps/LittlerootTown/scripts.pory"
	end
# 148 "data/maps/LittlerootTown/scripts.pory"

# 149 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom:: @ 81E7F17
# 150 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 151 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 152 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 153 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 154 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 155 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 156 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 157 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 158 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 159 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 160 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 161 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 162 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 163 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 164 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 165 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 166 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 167 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 168 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 169 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 170 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 171 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 172 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 173 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 174 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 175 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 176 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 177 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 178 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 179 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 180 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 181 "data/maps/LittlerootTown/scripts.pory"
	return
# 182 "data/maps/LittlerootTown/scripts.pory"

# 183 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse: @ 81E7F98
# 184 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 185 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 186 "data/maps/LittlerootTown/scripts.pory"

# 187 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck: @ 81E7F9A
# 188 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 189 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_fastest_left
# 190 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 191 "data/maps/LittlerootTown/scripts.pory"

# 192 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor: @ 81E7F9D
# 193 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 194 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 195 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 196 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 197 "data/maps/LittlerootTown/scripts.pory"

# 198 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse: @ 81E7FA1
# 199 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 200 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 201 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 202 "data/maps/LittlerootTown/scripts.pory"

# 203 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor: @ 81E7FA4
# 204 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 205 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 206 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 207 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_fastest_up
# 208 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 209 "data/maps/LittlerootTown/scripts.pory"

# 210 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse: @ 81E7FA9
# 211 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 212 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 213 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 214 "data/maps/LittlerootTown/scripts.pory"

# 215 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck: @ 81E7FAC
# 216 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 217 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 218 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 219 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 220 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 221 "data/maps/LittlerootTown/scripts.pory"

# 222 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene:: @ 81E7FB1
# 223 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 224 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 225 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 226 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 227 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 228 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab_New, MSGBOX_DEFAULT
# 229 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 230 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 231 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 232 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 233 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 234 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 255, 6, 5
# 235 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 236 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 237 "data/maps/LittlerootTown/scripts.pory"
	end
# 238 "data/maps/LittlerootTown/scripts.pory"

# 239 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp: @ 81E7FE2
# 240 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 241 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 242 "data/maps/LittlerootTown/scripts.pory"

# 243 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade:: @ 81E7FEC
# 244 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 245 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 246 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 247 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
# 248 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 249 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 250 "data/maps/LittlerootTown/scripts.pory"
	end
# 251 "data/maps/LittlerootTown/scripts.pory"

# 252 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale:: @ 81E8004
# 253 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 254 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 255 "data/maps/LittlerootTown/scripts.pory"
	end
# 256 "data/maps/LittlerootTown/scripts.pory"

# 257 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale:: @ 81E8013
# 258 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 259 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 260 "data/maps/LittlerootTown/scripts.pory"
	end
# 261 "data/maps/LittlerootTown/scripts.pory"

# 262 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan:: @ 81E8022
# 263 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 264 "data/maps/LittlerootTown/scripts.pory"
	end
# 265 "data/maps/LittlerootTown/scripts.pory"

# 266 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy:: @ 81E802B
# 267 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 268 "data/maps/LittlerootTown/scripts.pory"
	end
# 269 "data/maps/LittlerootTown/scripts.pory"

# 270 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin:: @ 81E8034
# 271 "data/maps/LittlerootTown/scripts.pory"
	lock
# 272 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 273 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, LittlerootTown_EventScript_GoodLuck
# 274 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RESCUED_BIRCH, LittlerootTown_EventScript_YouSavedBirch
# 275 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_LITTLEROOT_TOWN_STATE, 0
# 276 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne LittlerootTown_EventScript_GoSaveBirch
# 277 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 278 "data/maps/LittlerootTown/scripts.pory"
	release
# 279 "data/maps/LittlerootTown/scripts.pory"
	end
# 280 "data/maps/LittlerootTown/scripts.pory"

# 281 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch:: @ 81E805D
# 282 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 283 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 284 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 285 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 286 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 287 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 288 "data/maps/LittlerootTown/scripts.pory"
	release
# 289 "data/maps/LittlerootTown/scripts.pory"
	end
# 290 "data/maps/LittlerootTown/scripts.pory"

# 291 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch:: @ 81E807A
# 292 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 293 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 294 "data/maps/LittlerootTown/scripts.pory"
	release
# 295 "data/maps/LittlerootTown/scripts.pory"
	end
# 296 "data/maps/LittlerootTown/scripts.pory"

# 297 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck:: @ 81E8087
# 298 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 299 "data/maps/LittlerootTown/scripts.pory"
	release
# 300 "data/maps/LittlerootTown/scripts.pory"
	end
# 301 "data/maps/LittlerootTown/scripts.pory"

# 302 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft:: @ 81E8091
# 303 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 304 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 305 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 306 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 307 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 308 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 309 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 310 "data/maps/LittlerootTown/scripts.pory"
	end
# 311 "data/maps/LittlerootTown/scripts.pory"

# 312 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon:: @ 81E80AD
# 313 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 314 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 315 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 316 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 317 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 318 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 319 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 320 "data/maps/LittlerootTown/scripts.pory"
	return
# 321 "data/maps/LittlerootTown/scripts.pory"

# 322 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft: @ 81E80D1
# 323 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 324 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 325 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 326 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 327 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 328 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 329 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 330 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 331 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 335 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 336 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 337 "data/maps/LittlerootTown/scripts.pory"

# 338 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute: @ 81E80DF
# 339 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 340 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 341 "data/maps/LittlerootTown/scripts.pory"

# 342 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft: @ 81E80E1
# 343 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 344 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 345 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 346 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 347 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 348 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 349 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 350 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 351 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_fastest_down
# 352 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 353 "data/maps/LittlerootTown/scripts.pory"

# 354 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute: @ 81E80EB
# 355 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 356 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 357 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 358 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 359 "data/maps/LittlerootTown/scripts.pory"

# 360 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight:: @ 81E80EF
# 361 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 362 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 363 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 364 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 365 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 366 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 367 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 368 "data/maps/LittlerootTown/scripts.pory"
	end
# 369 "data/maps/LittlerootTown/scripts.pory"

# 370 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight: @ 81E810B
# 371 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 372 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 373 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 374 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 375 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 376 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 377 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 378 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 379 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 380 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 381 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 382 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 383 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 384 "data/maps/LittlerootTown/scripts.pory"

# 385 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight: @ 81E8118
# 386 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 387 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 388 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 389 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 390 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 391 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_fastest_down
# 392 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 393 "data/maps/LittlerootTown/scripts.pory"

# 394 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger:: @ 81E811F
# 395 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 396 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFastestRight
# 397 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 398 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 399 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 400 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 401 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 402 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 403 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 404 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 405 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 406 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 407 "data/maps/LittlerootTown/scripts.pory"
	end
# 408 "data/maps/LittlerootTown/scripts.pory"

# 409 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign:: @ 81E8151
# 410 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 411 "data/maps/LittlerootTown/scripts.pory"
	end
# 412 "data/maps/LittlerootTown/scripts.pory"

# 413 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign:: @ 81E815A
# 414 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 415 "data/maps/LittlerootTown/scripts.pory"
	end
# 416 "data/maps/LittlerootTown/scripts.pory"

# 417 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign:: @ 81E8163
# 418 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 419 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 420 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
# 421 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_PlayersHouseSignMale
# 422 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
# 423 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_BirchsHouseSignFemale
# 424 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 425 "data/maps/LittlerootTown/scripts.pory"
	end
# 426 "data/maps/LittlerootTown/scripts.pory"

# 427 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale:: @ 81E817D
# 428 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 429 "data/maps/LittlerootTown/scripts.pory"
	return
# 430 "data/maps/LittlerootTown/scripts.pory"

# 431 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale:: @ 81E8186
# 432 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 433 "data/maps/LittlerootTown/scripts.pory"
	return
# 434 "data/maps/LittlerootTown/scripts.pory"

# 435 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign:: @ 81E818F
# 436 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 437 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 438 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
# 439 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_BirchsHouseSignMale
# 440 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
# 441 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_PlayersHouseSignFemale
# 442 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 443 "data/maps/LittlerootTown/scripts.pory"
	end
# 444 "data/maps/LittlerootTown/scripts.pory"

# 445 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale:: @ 81E81A9
# 446 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 447 "data/maps/LittlerootTown/scripts.pory"
	return
# 448 "data/maps/LittlerootTown/scripts.pory"

# 449 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale:: @ 81E81B2
# 450 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 451 "data/maps/LittlerootTown/scripts.pory"
	return
# 452 "data/maps/LittlerootTown/scripts.pory"

# 453 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0:: @ 81E81BB
# 454 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 455 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 456 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 457 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 458 "data/maps/LittlerootTown/scripts.pory"
	end
# 459 "data/maps/LittlerootTown/scripts.pory"

# 460 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1:: @ 81E81CE
# 461 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 462 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 463 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 464 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 465 "data/maps/LittlerootTown/scripts.pory"
	end
# 466 "data/maps/LittlerootTown/scripts.pory"

# 467 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2:: @ 81E81E1
# 468 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 469 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 470 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 471 "data/maps/LittlerootTown/scripts.pory"
	end
# 472 "data/maps/LittlerootTown/scripts.pory"

# 473 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3:: @ 81E81ED
# 474 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 475 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 476 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 477 "data/maps/LittlerootTown/scripts.pory"
	end
# 478 "data/maps/LittlerootTown/scripts.pory"

# 479 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4:: @ 81E81F9
# 480 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 481 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 482 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 483 "data/maps/LittlerootTown/scripts.pory"
	end
# 484 "data/maps/LittlerootTown/scripts.pory"

# 485 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5:: @ 81E8205
# 486 "data/maps/LittlerootTown/scripts.pory"
	lockall
# 487 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 488 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 489 "data/maps/LittlerootTown/scripts.pory"
	end
# 490 "data/maps/LittlerootTown/scripts.pory"

# 491 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger:: @ 81E8211
# 492 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 493 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
# 494 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomNoticePlayerMale
# 495 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
# 496 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomNoticePlayerFemale
# 497 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 498 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
# 499 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 500 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
# 501 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 502 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 503 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 504 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 505 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
# 506 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomApproachPlayerMale
# 507 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
# 508 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomApproachPlayerFemale
# 509 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 510 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 511 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
# 512 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomReturnHomeMale
# 513 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
# 514 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomReturnHomeFemale
# 515 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 516 "data/maps/LittlerootTown/scripts.pory"
	end
# 517 "data/maps/LittlerootTown/scripts.pory"

# 518 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale:: @ 81E8281
# 519 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 520 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 521 "data/maps/LittlerootTown/scripts.pory"
	return
# 522 "data/maps/LittlerootTown/scripts.pory"

# 523 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale:: @ 81E828C
# 524 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 525 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 526 "data/maps/LittlerootTown/scripts.pory"
	return
# 527 "data/maps/LittlerootTown/scripts.pory"

# 528 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale:: @ 81E8297
# 529 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFastestRight
# 530 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 531 "data/maps/LittlerootTown/scripts.pory"
	return
# 532 "data/maps/LittlerootTown/scripts.pory"

# 533 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale:: @ 81E82A2
# 534 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFastestLeft
# 535 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 536 "data/maps/LittlerootTown/scripts.pory"
	return
# 537 "data/maps/LittlerootTown/scripts.pory"

# 538 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale:: @ 81E82AD
# 539 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 0
# 540 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomApproachPlayer0
# 541 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 1
# 542 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomApproachPlayer1
# 543 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 2
# 544 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomApproachPlayerMale2
# 545 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 3
# 546 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomApproachPlayerMale3
# 547 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 4
# 548 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomApproachPlayerMale4
# 549 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 5
# 550 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomApproachPlayerMale5
# 551 "data/maps/LittlerootTown/scripts.pory"
	return
# 552 "data/maps/LittlerootTown/scripts.pory"

# 553 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale:: @ 81E82F0
# 554 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 0
# 555 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomApproachPlayer0
# 556 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 1
# 557 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomApproachPlayer1
# 558 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 2
# 559 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomApproachPlayerFemale2
# 560 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 3
# 561 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomApproachPlayerFemale3
# 562 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 4
# 563 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomApproachPlayerFemale4
# 564 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 5
# 565 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomApproachPlayerFemale5
# 566 "data/maps/LittlerootTown/scripts.pory"
	return
# 567 "data/maps/LittlerootTown/scripts.pory"

# 568 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0:: @ 81E8333
# 569 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
# 570 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 571 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 572 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 573 "data/maps/LittlerootTown/scripts.pory"
	return
# 574 "data/maps/LittlerootTown/scripts.pory"

# 575 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1:: @ 81E8348
# 576 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
# 577 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 578 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 579 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 580 "data/maps/LittlerootTown/scripts.pory"
	return
# 581 "data/maps/LittlerootTown/scripts.pory"

# 582 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2:: @ 81E835D
# 583 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 584 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 585 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 586 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 587 "data/maps/LittlerootTown/scripts.pory"
	return
# 588 "data/maps/LittlerootTown/scripts.pory"

# 589 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3:: @ 81E8372
# 590 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 591 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 592 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 593 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 594 "data/maps/LittlerootTown/scripts.pory"
	return
# 595 "data/maps/LittlerootTown/scripts.pory"

# 596 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4:: @ 81E8387
# 597 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 598 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 599 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 600 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 601 "data/maps/LittlerootTown/scripts.pory"
	return
# 602 "data/maps/LittlerootTown/scripts.pory"

# 603 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5:: @ 81E839C
# 604 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 605 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 606 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 607 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 608 "data/maps/LittlerootTown/scripts.pory"
	return
# 609 "data/maps/LittlerootTown/scripts.pory"

# 610 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2:: @ 81E83B1
# 611 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 612 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 613 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 614 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 615 "data/maps/LittlerootTown/scripts.pory"
	return
# 616 "data/maps/LittlerootTown/scripts.pory"

# 617 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3:: @ 81E83C6
# 618 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 619 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 620 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 621 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 622 "data/maps/LittlerootTown/scripts.pory"
	return
# 623 "data/maps/LittlerootTown/scripts.pory"

# 624 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4:: @ 81E83DB
# 625 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 626 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 627 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 628 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 629 "data/maps/LittlerootTown/scripts.pory"
	return
# 630 "data/maps/LittlerootTown/scripts.pory"

# 631 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5:: @ 81E83F0
# 632 "data/maps/LittlerootTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 633 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 634 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 635 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 636 "data/maps/LittlerootTown/scripts.pory"
	return
# 637 "data/maps/LittlerootTown/scripts.pory"

# 638 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale:: @ 81E8405
# 639 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 0
# 640 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomReturnHome0
# 641 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 1
# 642 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomReturnHome1
# 643 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 2
# 644 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomReturnHomeMale2
# 645 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 3
# 646 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomReturnHomeMale3
# 647 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 4
# 648 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomReturnHomeMale4
# 649 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 5
# 650 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomReturnHomeMale5
# 651 "data/maps/LittlerootTown/scripts.pory"
	return
# 652 "data/maps/LittlerootTown/scripts.pory"

# 653 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale:: @ 81E8448
# 654 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 0
# 655 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomReturnHome0
# 656 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 1
# 657 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomReturnHome1
# 658 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 2
# 659 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomReturnHomeFemale2
# 660 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 3
# 661 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomReturnHomeFemale3
# 662 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 4
# 663 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomReturnHomeFemale4
# 664 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_0x8008, 5
# 665 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_MomReturnHomeFemale5
# 666 "data/maps/LittlerootTown/scripts.pory"
	return
# 667 "data/maps/LittlerootTown/scripts.pory"

# 668 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0:: @ 81E848B
# 669 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 670 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 671 "data/maps/LittlerootTown/scripts.pory"
	return
# 672 "data/maps/LittlerootTown/scripts.pory"

# 673 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1:: @ 81E8496
# 674 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 675 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 676 "data/maps/LittlerootTown/scripts.pory"
	return
# 677 "data/maps/LittlerootTown/scripts.pory"

# 678 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2:: @ 81E84A1
# 679 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 680 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 681 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 682 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 683 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 684 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 685 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 686 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 687 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 688 "data/maps/LittlerootTown/scripts.pory"
	return
# 689 "data/maps/LittlerootTown/scripts.pory"

# 690 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3:: @ 81E84C7
# 691 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 692 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 693 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 694 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 695 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 696 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 697 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 698 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 699 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 700 "data/maps/LittlerootTown/scripts.pory"
	return
# 701 "data/maps/LittlerootTown/scripts.pory"

# 702 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4:: @ 81E84ED
# 703 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 704 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 705 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 706 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 707 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 708 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 709 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 710 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 711 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 712 "data/maps/LittlerootTown/scripts.pory"
	return
# 713 "data/maps/LittlerootTown/scripts.pory"

# 714 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5:: @ 81E8513
# 715 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 716 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 717 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 718 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 719 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 720 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 721 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 722 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 723 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 724 "data/maps/LittlerootTown/scripts.pory"
	return
# 725 "data/maps/LittlerootTown/scripts.pory"

# 726 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2:: @ 81E8539
# 727 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 728 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 729 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 730 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 731 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 732 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 733 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 734 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 735 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 736 "data/maps/LittlerootTown/scripts.pory"
	return
# 737 "data/maps/LittlerootTown/scripts.pory"

# 738 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3:: @ 81E855F
# 739 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 740 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 741 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 742 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 743 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 744 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 745 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 746 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 747 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 748 "data/maps/LittlerootTown/scripts.pory"
	return
# 749 "data/maps/LittlerootTown/scripts.pory"

# 750 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4:: @ 81E8585
# 751 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 752 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 753 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 754 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 755 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 756 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 757 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 758 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 759 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 760 "data/maps/LittlerootTown/scripts.pory"
	return
# 761 "data/maps/LittlerootTown/scripts.pory"

# 762 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5:: @ 81E85AB
# 763 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 764 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 765 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 766 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 767 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 768 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 769 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 770 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 771 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 772 "data/maps/LittlerootTown/scripts.pory"
	return
# 773 "data/maps/LittlerootTown/scripts.pory"

# 774 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0: @ 81E85D1
# 775 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 776 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 777 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 778 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 779 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 780 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 781 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 782 "data/maps/LittlerootTown/scripts.pory"

# 783 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1: @ 81E85D8
# 784 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 785 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 786 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 787 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 788 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 789 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 790 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 791 "data/maps/LittlerootTown/scripts.pory"

# 792 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2: @ 81E85DF
# 793 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 794 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 795 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 796 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 797 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 798 "data/maps/LittlerootTown/scripts.pory"

# 799 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3: @ 81E85E4
# 800 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 801 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 802 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 803 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 804 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 805 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 806 "data/maps/LittlerootTown/scripts.pory"

# 807 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4: @ 81E85EA
# 808 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 809 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 810 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 811 "data/maps/LittlerootTown/scripts.pory"

# 812 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5: @ 81E85ED
# 813 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 814 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 815 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 816 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 817 "data/maps/LittlerootTown/scripts.pory"

# 818 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2: @ 81E85F1
# 819 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 820 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 821 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 822 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 823 "data/maps/LittlerootTown/scripts.pory"

# 824 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3: @ 81E85F5
# 825 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 826 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 827 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 828 "data/maps/LittlerootTown/scripts.pory"

# 829 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4: @ 81E85F8
# 830 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 831 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 832 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 833 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 834 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 835 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 836 "data/maps/LittlerootTown/scripts.pory"

# 837 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5: @ 81E85FE
# 838 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 839 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 840 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 841 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 842 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 843 "data/maps/LittlerootTown/scripts.pory"

# 844 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0: @ 81E8603
# 845 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 846 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 847 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 849 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 850 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 851 "data/maps/LittlerootTown/scripts.pory"

# 852 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1: @ 81E8609
# 853 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 854 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 857 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 858 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 859 "data/maps/LittlerootTown/scripts.pory"

# 860 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2: @ 81E860F
# 861 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 862 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 864 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 865 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_fastest_up
# 866 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 867 "data/maps/LittlerootTown/scripts.pory"

# 868 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3: @ 81E8615
# 869 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 870 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 871 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 872 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 873 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 874 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_fastest_up
# 875 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 876 "data/maps/LittlerootTown/scripts.pory"

# 877 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4: @ 81E861C
# 878 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 879 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 880 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_fastest_up
# 881 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 882 "data/maps/LittlerootTown/scripts.pory"

# 883 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5: @ 81E8620
# 884 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 885 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 886 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 887 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_fastest_up
# 888 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 889 "data/maps/LittlerootTown/scripts.pory"

# 890 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2: @ 81E8625
# 891 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 892 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 893 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 894 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_fastest_up
# 895 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 896 "data/maps/LittlerootTown/scripts.pory"

# 897 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3: @ 81E862A
# 898 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 899 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 900 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_fastest_up
# 901 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 902 "data/maps/LittlerootTown/scripts.pory"

# 903 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4: @ 81E862E
# 904 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 905 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 906 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 907 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 908 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 909 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_fastest_up
# 910 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 911 "data/maps/LittlerootTown/scripts.pory"

# 912 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5: @ 81E8635
# 913 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 914 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 915 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 916 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 917 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_fastest_up
# 918 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 919 "data/maps/LittlerootTown/scripts.pory"

# 920 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor: @ 81E863B
# 921 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 922 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 923 "data/maps/LittlerootTown/scripts.pory"

# 924 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom:: @ 81E863D
# 925 "data/maps/LittlerootTown/scripts.pory"
	lock
# 926 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 927 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 928 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, MALE
# 929 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 930 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FEMALE
# 931 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 932 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 933 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFastestUp
# 934 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 935 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 936 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 937 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 938 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 939 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 940 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 941 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 942 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 943 "data/maps/LittlerootTown/scripts.pory"
	end
# 944 "data/maps/LittlerootTown/scripts.pory"

# 945 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes:: @ 81E8686
# 946 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 947 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 948 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 949 "data/maps/LittlerootTown/scripts.pory"
	release
# 950 "data/maps/LittlerootTown/scripts.pory"
	end
# 951 "data/maps/LittlerootTown/scripts.pory"

# 952 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes:: @ 81E8693
# 953 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 954 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 955 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 956 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 957 "data/maps/LittlerootTown/scripts.pory"
	return
# 958 "data/maps/LittlerootTown/scripts.pory"

# 959 "data/maps/LittlerootTown/scripts.pory"
#if GAME_LANGUAGE == LANGUAGE_SPANISH
# 960 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside: @ 81E86BC
# 961 "data/maps/LittlerootTown/scripts.pory"
	.string "Mamá: {PLAYER}, ya hemos llegado, cielo.\p"
# 962 "data/maps/LittlerootTown/scripts.pory"
	.string "Debe de ser agotador ir en el camión\n"
# 963 "data/maps/LittlerootTown/scripts.pory"
	.string "de la mudanza con todos los muebles…\p"
# 964 "data/maps/LittlerootTown/scripts.pory"
	.string "Bueno, esto es Villa Raíz.\p"
# 965 "data/maps/LittlerootTown/scripts.pory"
	.string "¿Qué? ¿Te gusta?\n"
# 966 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Aquí es donde vamos a vivir!\p"
# 967 "data/maps/LittlerootTown/scripts.pory"
	.string "Es un lugar pintoresco, pero creo que\n"
# 968 "data/maps/LittlerootTown/scripts.pory"
	.string "se puede vivir muy a gusto aquí, ¿eh?\p"
# 969 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Y además tienes tu propio cuarto!\n"
# 970 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Entremos en casa!$"
# 971 "data/maps/LittlerootTown/scripts.pory"

# 972 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer: @ 81E87E1
# 973 "data/maps/LittlerootTown/scripts.pory"
	.string "Mamá: Espera, {PLAYER}.$"
# 974 "data/maps/LittlerootTown/scripts.pory"

# 975 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes: @ 81E87F0
# 976 "data/maps/LittlerootTown/scripts.pory"
	.string "Mamá: ¡{PLAYER}, {PLAYER}! ¿Ya te has\n"
# 977 "data/maps/LittlerootTown/scripts.pory"
	.string "presentado al Prof. Abedul?\p"
# 978 "data/maps/LittlerootTown/scripts.pory"
	.string "Ooooh… ¡Qué Pokémon tan bonito!\n"
# 979 "data/maps/LittlerootTown/scripts.pory"
	.string "¿Te lo ha dado el Profesor? ¡Qué majo!\p"
# 980 "data/maps/LittlerootTown/scripts.pory"
	.string "Se ve que has salido a tu padre.\n"
# 981 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Tienes mano con los Pokémon!$"
# 982 "data/maps/LittlerootTown/scripts.pory"

# 983 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens: @ 81E8A03
# 984 "data/maps/LittlerootTown/scripts.pory"
	.string "Ay…\n"
# 985 "data/maps/LittlerootTown/scripts.pory"
	.string "Cómo pasa el tiempo…\p"
# 986 "data/maps/LittlerootTown/scripts.pory"
	.string "Pensar que ya tienes tu propio\n"
# 987 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon… Qué contento\l"
# 988 "data/maps/LittlerootTown/scripts.pory"
	.string "se va a poner tu padre…\p"
# 989 "data/maps/LittlerootTown/scripts.pory"
	.string "Pero ten cuidado, ¿vale?\n"
# 990 "data/maps/LittlerootTown/scripts.pory"
	.string "Y pasa por casa cuando quieras.\p"
# 991 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Adelante, cariño! ¡Atrápalos todos!$"
# 992 "data/maps/LittlerootTown/scripts.pory"

# 993 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems: @ 81E8ACF
# 994 "data/maps/LittlerootTown/scripts.pory"
	.string "¿Sabes que puedes guardar objetos\n"
# 995 "data/maps/LittlerootTown/scripts.pory"
	.string "y Pokémon en un PC?\p"
# 996 "data/maps/LittlerootTown/scripts.pory"
	.string "¡La ciencia avanza que es una\n"
# 997 "data/maps/LittlerootTown/scripts.pory"
	.string "barbaridad!$"
# 998 "data/maps/LittlerootTown/scripts.pory"

# 999 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab: @ 81E8B25
# 1000 "data/maps/LittlerootTown/scripts.pory"
	.string "El Prof. Abedul se pasa los días metido\n"
# 1001 "data/maps/LittlerootTown/scripts.pory"
	.string "en el Laboratorio, pero a veces sale\l"
# 1002 "data/maps/LittlerootTown/scripts.pory"
	.string "a investigar sobre el terreno.\p"
# 1003 "data/maps/LittlerootTown/scripts.pory"
	.string "¿Cuándo se va a su casa, digo yo?…$"
# 1004 "data/maps/LittlerootTown/scripts.pory"

# 1005 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut: @ 81E8BB8
# 1006 "data/maps/LittlerootTown/scripts.pory"
	.string "¡La, la, la!\p"
# 1007 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Si caminas entre la hierba, te darás\n"
# 1008 "data/maps/LittlerootTown/scripts.pory"
	.string "de bruces con Pokémon salvajes!$"
# 1009 "data/maps/LittlerootTown/scripts.pory"

# 1010 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon: @ 81E8C07
# 1011 "data/maps/LittlerootTown/scripts.pory"
	.string "No es una buena idea si no tienes\n"
# 1012 "data/maps/LittlerootTown/scripts.pory"
	.string "algunos Pokémon propios.$"
# 1013 "data/maps/LittlerootTown/scripts.pory"

# 1014 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening: @ 81E8C3A
# 1015 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Hola, la, la, la!\p"
# 1016 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Fuera hay Pokémon que dan miedo!\n"
# 1017 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Puedo oír cómo chillan!\p"
# 1018 "data/maps/LittlerootTown/scripts.pory"
	.string "Me gustaría ir a echar una ojeada,\n"
# 1019 "data/maps/LittlerootTown/scripts.pory"
	.string "pero no tengo ningún Pokémon…\p"
# 1020 "data/maps/LittlerootTown/scripts.pory"
	.string "¿Podrías ir tú a mirar y\n"
# 1021 "data/maps/LittlerootTown/scripts.pory"
	.string "luego me lo cuentas?$"
# 1022 "data/maps/LittlerootTown/scripts.pory"

# 1023 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch: @ 81E8CE3
# 1024 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Has salvado al Prof. Abedul!\n"
# 1025 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Qué alegría!$"
# 1026 "data/maps/LittlerootTown/scripts.pory"

# 1027 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon: @ 81E8D07
# 1028 "data/maps/LittlerootTown/scripts.pory"
	.string "¿Vas a atrapar Pokémon?\n"
# 1029 "data/maps/LittlerootTown/scripts.pory"
	.string "¡Buena suerte!$"
# 1030 "data/maps/LittlerootTown/scripts.pory"

# 1031 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign: @ 81E8D32
# 1032 "data/maps/LittlerootTown/scripts.pory"
	.string "Villa Raíz\n"
# 1033 "data/maps/LittlerootTown/scripts.pory"
	.string "“Un pueblo poco colorido.”$"
# 1034 "data/maps/LittlerootTown/scripts.pory"

# 1035 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab: @ 81E8D69
# 1036 "data/maps/LittlerootTown/scripts.pory"
	.string "Laboratorio Pokémon del Prof. Abedul$"
# 1037 "data/maps/LittlerootTown/scripts.pory"

# 1038 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse: @ 81E8D83
# 1039 "data/maps/LittlerootTown/scripts.pory"
	.string "Casa de {PLAYER}$"
# 1040 "data/maps/LittlerootTown/scripts.pory"

# 1041 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse: @ 81E8D8E
# 1042 "data/maps/LittlerootTown/scripts.pory"
	.string "Casa del Prof. Abedul$"
# 1043 "data/maps/LittlerootTown/scripts.pory"

# 1044 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab: @ 81E8DA2
# 1045 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Abedul: Vaya, {PLAYER}{KUN}, has\n"
# 1046 "data/maps/LittlerootTown/scripts.pory"
	.string "hecho un gran trabajo.\p"
# 1047 "data/maps/LittlerootTown/scripts.pory"
	.string "Estaba convencido de que tenías algo\n"
# 1048 "data/maps/LittlerootTown/scripts.pory"
	.string "especial desde la primera vez que te\l"
# 1049 "data/maps/LittlerootTown/scripts.pory"
	.string "vi, pero esto supera mis expectativas.\p"
# 1050 "data/maps/LittlerootTown/scripts.pory"
	.string "Ah, sí, ¿todavía tienes la Pokédex\n"
# 1051 "data/maps/LittlerootTown/scripts.pory"
	.string "que te di hace tiempo?\p"
# 1052 "data/maps/LittlerootTown/scripts.pory"
	.string "Quiero enseñarte una cosita.\n"
# 1053 "data/maps/LittlerootTown/scripts.pory"
	.string "Vamos a mi Laboratorio.$"
# 1054 "data/maps/LittlerootTown/scripts.pory"
#else
# 1055 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside: @ 81E86BC
# 1056 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: {PLAYER}, we're here, honey!\p"
# 1057 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 1058 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 1059 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is Littleroot Town.\p"
# 1060 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 1061 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 1062 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 1063 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 1064 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 1065 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 1066 "data/maps/LittlerootTown/scripts.pory"

# 1067 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer: @ 81E87E1
# 1068 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: Wait, {PLAYER}!$"
# 1069 "data/maps/LittlerootTown/scripts.pory"

# 1070 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes: @ 81E87F0
# 1071 "data/maps/LittlerootTown/scripts.pory"
	.string "Mom: {PLAYER}! {PLAYER}! Did you\n"
# 1072 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to Prof. Birch?\p"
# 1073 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable Pokémon!\n"
# 1074 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from Prof. Birch. How nice!\p"
# 1075 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 1076 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with Pokémon!$"
# 1077 "data/maps/LittlerootTown/scripts.pory"

# 1078 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens: @ 81E8A03
# 1079 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 1080 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 1081 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 1082 "data/maps/LittlerootTown/scripts.pory"
	.string "Pokémon now…\l"
# 1083 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 1084 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 1085 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 1086 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 1087 "data/maps/LittlerootTown/scripts.pory"

# 1088 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems: @ 81E8ACF
# 1089 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 1090 "data/maps/LittlerootTown/scripts.pory"
	.string "and Pokémon.\p"
# 1091 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 1092 "data/maps/LittlerootTown/scripts.pory"

# 1093 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab: @ 81E8B25
# 1094 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch spends days in his Lab\n"
# 1095 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 1096 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 1097 "data/maps/LittlerootTown/scripts.pory"
	.string "When does Prof. Birch spend time\n"
# 1098 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 1099 "data/maps/LittlerootTown/scripts.pory"

# 1100 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut: @ 81E8BB8
# 1101 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 1102 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 1103 "data/maps/LittlerootTown/scripts.pory"
	.string "wild Pokémon will jump out!$"
# 1104 "data/maps/LittlerootTown/scripts.pory"

# 1105 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon: @ 81E8C07
# 1106 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 1107 "data/maps/LittlerootTown/scripts.pory"
	.string "your own Pokémon.$"
# 1108 "data/maps/LittlerootTown/scripts.pory"

# 1109 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening: @ 81E8C3A
# 1110 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 1111 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary Pokémon outside!\n"
# 1112 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 1113 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 1114 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any Pokémon…\p"
# 1115 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 1116 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 1117 "data/maps/LittlerootTown/scripts.pory"

# 1118 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch: @ 81E8CE3
# 1119 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved Prof. Birch!\n"
# 1120 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 1121 "data/maps/LittlerootTown/scripts.pory"

# 1122 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon: @ 81E8D07
# 1123 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch Pokémon?\n"
# 1124 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 1125 "data/maps/LittlerootTown/scripts.pory"

# 1126 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign: @ 81E8D32
# 1127 "data/maps/LittlerootTown/scripts.pory"
	.string "Littleroot Town\n"
# 1128 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1129 "data/maps/LittlerootTown/scripts.pory"

# 1130 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab: @ 81E8D69
# 1131 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's Pokémon Lab$"
# 1132 "data/maps/LittlerootTown/scripts.pory"

# 1133 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse: @ 81E8D83
# 1134 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s House$"
# 1135 "data/maps/LittlerootTown/scripts.pory"

# 1136 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse: @ 81E8D8E
# 1137 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's House$"
# 1138 "data/maps/LittlerootTown/scripts.pory"

# 1139 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab: @ 81E8DA2
# 1140 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch: Well, well, {PLAYER}{KUN}!\n"
# 1141 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1142 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1143 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1144 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1145 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the Pokédex\n"
# 1146 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1147 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1148 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my Lab.$"
# 1149 "data/maps/LittlerootTown/scripts.pory"
#endif

Common_EventScript_PkmnCenterJack_Companion_Get_Trainer_Password::
# 1159 "data/maps/LittlerootTown/scripts.pory"
	checkcompanionstuff COMPANION_TRAINER_PASSWORD
# 1160 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_ne Common_EventScript_PkmnCenterJack_Companion_Get_Trainer_Password_2
# 1164 "data/maps/LittlerootTown/scripts.pory"
	msgbox Common_EventScript_PkmnCenterJack_Companion_Get_Trainer_Password_Text_1, MSGBOX_DEFAULT
Common_EventScript_PkmnCenterJack_Companion_Get_Trainer_Password_1:
# 1166 "data/maps/LittlerootTown/scripts.pory"
	goto Common_EventScript_PkmnCenterJack_Companion_Stuff
	return

Common_EventScript_PkmnCenterJack_Companion_Get_Trainer_Password_2:
# 1161 "data/maps/LittlerootTown/scripts.pory"
	msgbox Common_EventScript_PkmnCenterJack_Companion_Get_Trainer_Password_Text_0, MSGBOX_DEFAULT
	goto Common_EventScript_PkmnCenterJack_Companion_Get_Trainer_Password_1


Common_EventScript_PkmnCenterJack_StartARandomBattle_Password::
# 1171 "data/maps/LittlerootTown/scripts.pory"
	checkcompanionstuff COMPANION_WORKING_PASSWORD_TRAINER
# 1172 "data/maps/LittlerootTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_ne Common_EventScript_PkmnCenterJack_StartARandomBattle_Password_1
# 1184 "data/maps/LittlerootTown/scripts.pory"
	msgbox Common_EventScript_PkmnCenterJack_StartARandomBattle_Password_Text_0, MSGBOX_DEFAULT
# 1185 "data/maps/LittlerootTown/scripts.pory"
	goto Common_EventScript_PkmnCenterJack_StartARandomBattle
	return

Common_EventScript_PkmnCenterJack_StartARandomBattle_Password_1:
# 1173 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_PASSWORD_TRAINER
# 1174 "data/maps/LittlerootTown/scripts.pory"
	msgbox Common_PkmnCenterJack_Text_MockBattle_PSS, MSGBOX_DEFAULT
# 1175 "data/maps/LittlerootTown/scripts.pory"
	special HealPlayerParty
# 1176 "data/maps/LittlerootTown/scripts.pory"
	trainerbattle_no_intro TRAINER_PASSWORD_TRAINER, Common_PkmnCenterJack_Text_MockBattle_Defeat
# 1177 "data/maps/LittlerootTown/scripts.pory"
	special HealPlayerParty
# 1178 "data/maps/LittlerootTown/scripts.pory"
	msgbox gText_PkmnCenterJack_ComeBackAnytime, MSGBOX_DEFAULT
# 1179 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_PASSWORD_TRAINER
# 1180 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	end


Common_EventScript_PkmnCenterJack_Companion_Get_Trainer_Password_Text_0:
# 1161 "data/maps/LittlerootTown/scripts.pory"
	.string "Your trainer password was sent to the\n"
	.string "companion successfully!$"

Common_EventScript_PkmnCenterJack_Companion_Get_Trainer_Password_Text_1:
# 1164 "data/maps/LittlerootTown/scripts.pory"
	.string "There was a problem sending your\n"
	.string "password!$"

Common_EventScript_PkmnCenterJack_StartARandomBattle_Password_Text_0:
# 1184 "data/maps/LittlerootTown/scripts.pory"
	.string "There is no Password Trainer available!$"

LittlerootTown_Text_BirchSomethingToShowYouAtLab_New::
# 1152 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch: Well, well, {PLAYER}{KUN}! That\n"
	.string "was good work out there\p"
	.string "I knew there was something special\n"
	.string "about you when I first saw you, but I\l"
	.string "never expected this.\p"
	.string "I have something to show you. Let's go\n"
	.string "to my Lab.$"
