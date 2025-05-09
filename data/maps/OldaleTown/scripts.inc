# 1 "data/maps/OldaleTown/scripts.pory"

# 2 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_MART_EMPLOYEE, 2
# 3 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_FOOTPRINTS_MAN, 3
# 4 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_RIVAL, 4
# 5 "data/maps/OldaleTown/scripts.pory"

# 6 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts:: @ 81E8EA2
# 7 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 8 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 9 "data/maps/OldaleTown/scripts.pory"

# 10 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition: @ 81E8EA8
# 11 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 12 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 13 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_ROUTE101
# 14 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 15 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 16 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_SetOldaleState
# 17 "data/maps/OldaleTown/scripts.pory"
	end
# 18 "data/maps/OldaleTown/scripts.pory"

# 19 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 20 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState:: @ 81E8ECC
# 21 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 22 "data/maps/OldaleTown/scripts.pory"
	return
# 23 "data/maps/OldaleTown/scripts.pory"

# 24 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance:: @ 81E8ED2
# 25 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_FOOTPRINTS_MAN, 1, 11
# 26 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_FOOTPRINTS_MAN, MOVEMENT_TYPE_FACE_LEFT
# 27 "data/maps/OldaleTown/scripts.pory"
	return
# 28 "data/maps/OldaleTown/scripts.pory"

# 29 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee:: @ 81E8EDE
# 30 "data/maps/OldaleTown/scripts.pory"
	setobjectxyperm LOCALID_MART_EMPLOYEE, 13, 14
# 31 "data/maps/OldaleTown/scripts.pory"
	setobjectmovementtype LOCALID_MART_EMPLOYEE, MOVEMENT_TYPE_FACE_DOWN
# 32 "data/maps/OldaleTown/scripts.pory"
	return
# 33 "data/maps/OldaleTown/scripts.pory"

# 34 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_CitySign:: @ 81E8EEA
# 35 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_CitySign, MSGBOX_SIGN
# 36 "data/maps/OldaleTown/scripts.pory"
	end
# 37 "data/maps/OldaleTown/scripts.pory"

# 38 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl:: @ 81E8EF3
# 39 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 40 "data/maps/OldaleTown/scripts.pory"
	end
# 41 "data/maps/OldaleTown/scripts.pory"

# 42 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee:: @ 81E8EFC
# 43 "data/maps/OldaleTown/scripts.pory"
	lock
# 44 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 45 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 46 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 47 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 48 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 49 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 50 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 51 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 52 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 53 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 54 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 55 "data/maps/OldaleTown/scripts.pory"
	end
# 56 "data/maps/OldaleTown/scripts.pory"
	
# 57 "data/maps/OldaleTown/scripts.pory"
EventScript_Flying_Zigzagoon::
# 58 "data/maps/OldaleTown/scripts.pory"
	lockall
# 59 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_FlyingTaxi
# 60 "data/maps/OldaleTown/scripts.pory"
	waitstate
# 61 "data/maps/OldaleTown/scripts.pory"
	end
# 62 "data/maps/OldaleTown/scripts.pory"

# 63 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth:: @ 81E8F47
# 64 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 65 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerSouth
# 66 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 67 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 68 "data/maps/OldaleTown/scripts.pory"
	end
# 69 "data/maps/OldaleTown/scripts.pory"

# 70 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth:: @ 81E8F5E
# 71 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 72 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerNorth
# 73 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 74 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 75 "data/maps/OldaleTown/scripts.pory"
	end
# 76 "data/maps/OldaleTown/scripts.pory"

# 77 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast:: @ 81E8F75
# 78 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerEast
# 79 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 80 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 81 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 82 "data/maps/OldaleTown/scripts.pory"
	end
# 83 "data/maps/OldaleTown/scripts.pory"

# 84 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart:: @ 81E8F8C
# 85 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 86 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 87 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FALSE
# 88 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq OldaleTown_EventScript_BagIsFull
# 89 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 90 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 91 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 92 "data/maps/OldaleTown/scripts.pory"
	release
# 93 "data/maps/OldaleTown/scripts.pory"
	end
# 94 "data/maps/OldaleTown/scripts.pory"

# 95 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion:: @ 81E8FB9
# 96 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 97 "data/maps/OldaleTown/scripts.pory"
	release
# 98 "data/maps/OldaleTown/scripts.pory"
	end
# 99 "data/maps/OldaleTown/scripts.pory"

# 100 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull:: @ 81E8FC3
# 101 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 102 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 103 "data/maps/OldaleTown/scripts.pory"
	release
# 104 "data/maps/OldaleTown/scripts.pory"
	end
# 105 "data/maps/OldaleTown/scripts.pory"

# 106 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast: @ 81E8FCE
# 107 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 108 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 109 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 110 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 112 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 113 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_fastest_down
# 115 "data/maps/OldaleTown/scripts.pory"
	step_end
# 116 "data/maps/OldaleTown/scripts.pory"

# 117 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth: @ 81E8FD7
# 118 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 119 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 120 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 121 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 122 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 124 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 125 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 126 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 127 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_fastest_down
# 128 "data/maps/OldaleTown/scripts.pory"
	step_end
# 129 "data/maps/OldaleTown/scripts.pory"

# 130 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth: @ 81E8FE2
# 131 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 132 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 133 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 134 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 135 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 136 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 137 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 138 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_fastest_down
# 139 "data/maps/OldaleTown/scripts.pory"
	step_end
# 140 "data/maps/OldaleTown/scripts.pory"

# 141 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1: @ 81E8FEB
# 142 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 143 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 144 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 145 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 146 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 147 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 148 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 149 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 150 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 151 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 152 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 153 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 154 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_fastest_down
# 155 "data/maps/OldaleTown/scripts.pory"
	step_end
# 156 "data/maps/OldaleTown/scripts.pory"

# 157 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast: @ 81E8FF9
# 158 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 159 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 160 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 161 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 162 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 163 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 164 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 165 "data/maps/OldaleTown/scripts.pory"
	step_end
# 166 "data/maps/OldaleTown/scripts.pory"

# 167 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth: @ 81E9001
# 168 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 169 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 170 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 171 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 172 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 173 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 174 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 175 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 176 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 177 "data/maps/OldaleTown/scripts.pory"
	step_end
# 178 "data/maps/OldaleTown/scripts.pory"

# 179 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth: @ 81E900B
# 180 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 184 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 185 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 187 "data/maps/OldaleTown/scripts.pory"
	step_end
# 188 "data/maps/OldaleTown/scripts.pory"

# 189 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2: @ 81E9013
# 190 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 191 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 192 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 193 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 194 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 195 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 196 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 197 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 198 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 199 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 200 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 201 "data/maps/OldaleTown/scripts.pory"
	step_end
# 202 "data/maps/OldaleTown/scripts.pory"

# 203 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan:: @ 81E901F
# 204 "data/maps/OldaleTown/scripts.pory"
	lock
# 205 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 206 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 207 "data/maps/OldaleTown/scripts.pory"
	release
# 208 "data/maps/OldaleTown/scripts.pory"
	end
# 209 "data/maps/OldaleTown/scripts.pory"

# 210 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath:: @ 81E903F
# 211 "data/maps/OldaleTown/scripts.pory"
	lockall
# 212 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 213 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 214 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 215 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 216 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 217 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 218 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 219 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 220 "data/maps/OldaleTown/scripts.pory"
	end
# 221 "data/maps/OldaleTown/scripts.pory"

# 222 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath:: @ 81E9066
# 223 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 224 "data/maps/OldaleTown/scripts.pory"
	release
# 225 "data/maps/OldaleTown/scripts.pory"
	end
# 226 "data/maps/OldaleTown/scripts.pory"

# 227 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival:: @ 81E9070
# 228 "data/maps/OldaleTown/scripts.pory"
	lockall
# 229 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 230 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 231 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 232 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 233 "data/maps/OldaleTown/scripts.pory"
	end
# 234 "data/maps/OldaleTown/scripts.pory"

# 235 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1:: @ 81E9086
# 236 "data/maps/OldaleTown/scripts.pory"
	lockall
# 237 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 238 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 239 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 240 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 241 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 242 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 243 "data/maps/OldaleTown/scripts.pory"
	end
# 244 "data/maps/OldaleTown/scripts.pory"

# 245 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2:: @ 81E90A6
# 246 "data/maps/OldaleTown/scripts.pory"
	lockall
# 247 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 248 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 249 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 250 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 251 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 252 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 253 "data/maps/OldaleTown/scripts.pory"
	end
# 254 "data/maps/OldaleTown/scripts.pory"

# 255 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3:: @ 81E90C6
# 256 "data/maps/OldaleTown/scripts.pory"
	lockall
# 257 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 258 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 259 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 260 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 261 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 262 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 263 "data/maps/OldaleTown/scripts.pory"
	end
# 264 "data/maps/OldaleTown/scripts.pory"

# 265 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage:: @ 81E90E6
# 266 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 267 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, MALE
# 268 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq OldaleTown_EventScript_ShowMayMessage
# 269 "data/maps/OldaleTown/scripts.pory"
	compare VAR_RESULT, FEMALE
# 270 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq OldaleTown_EventScript_ShowBrendanMessage
# 271 "data/maps/OldaleTown/scripts.pory"
	end
# 272 "data/maps/OldaleTown/scripts.pory"

# 273 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage:: @ 81E90FE
# 274 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 275 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 276 "data/maps/OldaleTown/scripts.pory"
	end
# 277 "data/maps/OldaleTown/scripts.pory"

# 278 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage:: @ 81E910C
# 279 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 280 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 281 "data/maps/OldaleTown/scripts.pory"
	end
# 282 "data/maps/OldaleTown/scripts.pory"

# 283 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish:: @ 81E911A
# 284 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 285 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8009, 0
# 286 "data/maps/OldaleTown/scripts.pory"
	call_if_eq OldaleTown_EventScript_DoExitMovement1
# 287 "data/maps/OldaleTown/scripts.pory"
	compare VAR_0x8009, 1
# 288 "data/maps/OldaleTown/scripts.pory"
	call_if_eq OldaleTown_EventScript_DoExitMovement2
# 289 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 290 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 291 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 292 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 293 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 294 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 295 "data/maps/OldaleTown/scripts.pory"
	end
# 296 "data/maps/OldaleTown/scripts.pory"

# 297 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1:: @ 81E9148
# 298 "data/maps/OldaleTown/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 299 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne OldaleTown_EventScript_DoExitMovement2
# 300 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 301 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 302 "data/maps/OldaleTown/scripts.pory"
	return
# 303 "data/maps/OldaleTown/scripts.pory"

# 304 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2:: @ 81E915E
# 305 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 306 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 307 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 308 "data/maps/OldaleTown/scripts.pory"
	return
# 309 "data/maps/OldaleTown/scripts.pory"

# 310 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1: @ 81E9170
# 311 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 312 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 313 "data/maps/OldaleTown/scripts.pory"
	step_end
# 314 "data/maps/OldaleTown/scripts.pory"

# 315 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2: @ 81E9173
# 316 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 317 "data/maps/OldaleTown/scripts.pory"
	step_end
# 318 "data/maps/OldaleTown/scripts.pory"

# 319 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3: @ 81E9175
# 320 "data/maps/OldaleTown/scripts.pory"
	face_left
# 321 "data/maps/OldaleTown/scripts.pory"
	step_end
# 322 "data/maps/OldaleTown/scripts.pory"

# 323 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit: @ 81E9177
# 324 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 325 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 326 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 327 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 328 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 329 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 330 "data/maps/OldaleTown/scripts.pory"
	step_end
# 331 "data/maps/OldaleTown/scripts.pory"

# 332 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit: @ 81E917E
# 333 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 334 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 335 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_fastest_down
# 336 "data/maps/OldaleTown/scripts.pory"
	step_end
# 337 "data/maps/OldaleTown/scripts.pory"

# 338 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack: @ 81E9182
# 339 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 340 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 341 "data/maps/OldaleTown/scripts.pory"
	step_end
# 342 "data/maps/OldaleTown/scripts.pory"

# 343 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp: @ 81E9185
# 344 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 345 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_fastest_left
# 346 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 347 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 348 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 349 "data/maps/OldaleTown/scripts.pory"
	step_end
# 350 "data/maps/OldaleTown/scripts.pory"

# 351 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition: @ 81E918B
# 352 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 353 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 354 "data/maps/OldaleTown/scripts.pory"
	step_end
# 355 "data/maps/OldaleTown/scripts.pory"
	
# 356 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BattleMartSign:: @ 81E910C
# 357 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BattleMartSign, MSGBOX_SIGN
# 358 "data/maps/OldaleTown/scripts.pory"
	end
# 359 "data/maps/OldaleTown/scripts.pory"

# 360 "data/maps/OldaleTown/scripts.pory"
EightIsland_EventScript_BattleMartSign:: @ 81E910C
# 361 "data/maps/OldaleTown/scripts.pory"
	msgbox EightIsland_Text_BattleMartSign, MSGBOX_SIGN
# 362 "data/maps/OldaleTown/scripts.pory"
	end
# 363 "data/maps/OldaleTown/scripts.pory"
	
# 364 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FatMan::
# 365 "data/maps/OldaleTown/scripts.pory"
	lock
# 366 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 367 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FatMan, MSGBOX_NPC
# 368 "data/maps/OldaleTown/scripts.pory"
	end
# 369 "data/maps/OldaleTown/scripts.pory"
	
# 370 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_OldaleRuinsSign:: @ 81E910C
# 371 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_RuinsSign, MSGBOX_SIGN
# 372 "data/maps/OldaleTown/scripts.pory"
	end
# 373 "data/maps/OldaleTown/scripts.pory"

# 374 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress: @ 81E918E
# 375 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 376 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 377 "data/maps/OldaleTown/scripts.pory"

# 378 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart: @ 81E91C0
# 379 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 380 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a Pokémon Mart.\p"
# 381 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 382 "data/maps/OldaleTown/scripts.pory"

# 383 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart: @ 81E91FD
# 384 "data/maps/OldaleTown/scripts.pory"
	.string "This is a Pokémon Mart.\n"
# 385 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 386 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 387 "data/maps/OldaleTown/scripts.pory"
	.string "Poké Balls for catching Pokémon.\p"
# 388 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 389 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 390 "data/maps/OldaleTown/scripts.pory"

# 391 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation: @ 81E92AF
# 392 "data/maps/OldaleTown/scripts.pory"
	.string "A Potion can be used anytime, so it's\n"
# 393 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a Pokémon Center\l"
# 394 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 395 "data/maps/OldaleTown/scripts.pory"

# 396 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere: @ 81E9313
# 397 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 398 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 399 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 400 "data/maps/OldaleTown/scripts.pory"
	.string "a rare Pokémon!\p"
# 401 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 402 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 403 "data/maps/OldaleTown/scripts.pory"

# 404 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints: @ 81E939A
# 405 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 406 "data/maps/OldaleTown/scripts.pory"
	.string "a rare Pokémon!$"
# 407 "data/maps/OldaleTown/scripts.pory"

# 408 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints: @ 81E93F8
# 409 "data/maps/OldaleTown/scripts.pory"
	.string "Thats a nice Color$"
# 410 "data/maps/OldaleTown/scripts.pory"

# 411 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack: @ 81E9462
# 412 "data/maps/OldaleTown/scripts.pory"
	.string "May: {PLAYER}{KUN}!\n"
# 413 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 414 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 415 "data/maps/OldaleTown/scripts.pory"

# 416 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack: @ 81E948A
# 417 "data/maps/OldaleTown/scripts.pory"
	.string "Brendan: I'm heading back to my dad's\n"
# 418 "data/maps/OldaleTown/scripts.pory"
	.string "Lab now.\l"
# 419 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 420 "data/maps/OldaleTown/scripts.pory"

# 421 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_CitySign: @ 81E94DA
# 422 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town\n"
# 423 "data/maps/OldaleTown/scripts.pory"
	.string "“Where things start off scarce.”$"
# 424 "data/maps/OldaleTown/scripts.pory"
	
# 425 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BattleMartSign: @ 81E94DA
# 426 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Town - Battle Mart.$"
# 427 "data/maps/OldaleTown/scripts.pory"

# 428 "data/maps/OldaleTown/scripts.pory"
EightIsland_Text_BattleMartSign: @ 81E94DA
# 429 "data/maps/OldaleTown/scripts.pory"
	.string "Eight Island - Battle Mart.$"
# 430 "data/maps/OldaleTown/scripts.pory"
	
# 431 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_RuinsSign: @ 81E94DA
# 432 "data/maps/OldaleTown/scripts.pory"
	.string "Oldale Ruins ahead, be wary of rocks.$"
# 433 "data/maps/OldaleTown/scripts.pory"
	
# 434 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FatMan: @ 81E94DA
# 435 "data/maps/OldaleTown/scripts.pory"
	.string "Did you know that Oldale Town got\n"
# 436 "data/maps/OldaleTown/scripts.pory"
	.string "bigger after they found some strange\l"
# 437 "data/maps/OldaleTown/scripts.pory"
	.string "Ruins?$"
