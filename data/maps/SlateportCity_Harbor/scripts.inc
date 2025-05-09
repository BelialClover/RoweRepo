# 1 "data/maps/SlateportCity_Harbor/scripts.pory"

# 2 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_CAPT_STERN, 4
# 3 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_SS_TIDAL, 2
# 4 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_GRUNT, 6
# 5 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_ARCHIE, 7
# 6 "data/maps/SlateportCity_Harbor/scripts.pory"
.set LOCALID_SUBMARINE, 8
# 7 "data/maps/SlateportCity_Harbor/scripts.pory"

# 8 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_MapScripts:: @ 820C97D
# 9 "data/maps/SlateportCity_Harbor/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_Harbor_OnTransition
# 10 "data/maps/SlateportCity_Harbor/scripts.pory"
	.byte 0
# 11 "data/maps/SlateportCity_Harbor/scripts.pory"

# 12 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_OnTransition: @ 820C983
# 13 "data/maps/SlateportCity_Harbor/scripts.pory"
	setescapewarp MAP_SLATEPORT_CITY, 255, 28, 13
# 14 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 0
# 15 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_SLATEPORT_HARBOR_STATE, 1
# 16 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq SlateportCity_Harbor_EventScript_ReadyAquaEscapeScene
# 17 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_ShowSSTidal
# 18 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 19 "data/maps/SlateportCity_Harbor/scripts.pory"

# 20 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ShowSSTidal:: @ 820C9A5
# 21 "data/maps/SlateportCity_Harbor/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL
# 22 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 23 "data/maps/SlateportCity_Harbor/scripts.pory"

# 24 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ReadyAquaEscapeScene:: @ 820C9A9
# 25 "data/maps/SlateportCity_Harbor/scripts.pory"
	savebgm MUS_ENCOUNTER_AQUA
# 26 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 12, 13
# 27 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_LEFT
# 28 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS
# 29 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 30 "data/maps/SlateportCity_Harbor/scripts.pory"

# 31 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger0:: @ 820C9BB
# 32 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 33 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 0
# 34 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 35 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 36 "data/maps/SlateportCity_Harbor/scripts.pory"

# 37 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger1:: @ 820C9C7
# 38 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 39 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 1
# 40 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 41 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 42 "data/maps/SlateportCity_Harbor/scripts.pory"

# 43 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger2:: @ 820C9D3
# 44 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 45 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 2
# 46 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 47 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 48 "data/maps/SlateportCity_Harbor/scripts.pory"

# 49 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeTrigger3:: @ 820C9DF
# 50 "data/maps/SlateportCity_Harbor/scripts.pory"
	lockall
# 51 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8008, 3
# 52 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_PlayerWalkUp
# 53 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 54 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_AquaEscapeScene
# 55 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 56 "data/maps/SlateportCity_Harbor/scripts.pory"

# 57 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AquaEscapeScene:: @ 820C9F5
# 58 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFastestDown
# 59 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 60 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFastestDown
# 61 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 62 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 63 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ArchieYouAgainHideoutInLilycove, MSGBOX_DEFAULT
# 64 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 65 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_GRUNT, SlateportCity_Harbor_Movement_AquaBoardSub
# 66 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_ARCHIE, SlateportCity_Harbor_Movement_AquaBoardSub
# 67 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_SUBMARINE, SlateportCity_Harbor_Movement_SubmarineExit
# 68 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 69 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_GRUNT
# 70 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_ARCHIE
# 71 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeobject LOCALID_SUBMARINE
# 72 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SLATEPORT_HARBOR_STATE, 2
# 73 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_MET_TEAM_AQUA_HARBOR
# 74 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_LILCOVE_MOTEL_SCOTT
# 75 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_0x8008, 0
# 76 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq SlateportCity_Harbor_EventScript_SternApproachPlayer0
# 77 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_0x8008, 1
# 78 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq SlateportCity_Harbor_EventScript_SternApproachPlayer1
# 79 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_0x8008, 2
# 80 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq SlateportCity_Harbor_EventScript_SternApproachPlayer
# 81 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_0x8008, 3
# 82 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq SlateportCity_Harbor_EventScript_SternApproachPlayer
# 83 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine, MSGBOX_DEFAULT
# 84 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 85 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
# 86 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE
# 87 "data/maps/SlateportCity_Harbor/scripts.pory"
	copyobjectxytoperm LOCALID_CAPT_STERN
# 88 "data/maps/SlateportCity_Harbor/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_RIGHT
# 89 "data/maps/SlateportCity_Harbor/scripts.pory"
	releaseall
# 90 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 91 "data/maps/SlateportCity_Harbor/scripts.pory"

# 92 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer0:: @ 820CA89
# 93 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer0
# 94 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 95 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
# 96 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 97 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 98 "data/maps/SlateportCity_Harbor/scripts.pory"

# 99 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer1:: @ 820CA9E
# 100 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer1
# 101 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 102 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 103 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 104 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 105 "data/maps/SlateportCity_Harbor/scripts.pory"

# 106 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SternApproachPlayer:: @ 820CAB3
# 107 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Harbor_Movement_SternApproachPlayer
# 108 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 109 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 110 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 111 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 112 "data/maps/SlateportCity_Harbor/scripts.pory"

# 113 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_AquaBoardSub: @ 820CAC8
# 114 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 115 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 116 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 117 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
# 118 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 119 "data/maps/SlateportCity_Harbor/scripts.pory"

# 120 "data/maps/SlateportCity_Harbor/scripts.pory"
@ Unused, Archie instead shares above identical movement script with Grunt
# 121 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_ArchieBoardSub: @ 820CACD
# 122 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 123 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 124 "data/maps/SlateportCity_Harbor/scripts.pory"
	jump_up
# 125 "data/maps/SlateportCity_Harbor/scripts.pory"
	set_invisible
# 126 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 127 "data/maps/SlateportCity_Harbor/scripts.pory"

# 128 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SubmarineExit: @ 820CAD2
# 129 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 130 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 131 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 132 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay_16
# 133 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 134 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 135 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 136 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 137 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 138 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 139 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 140 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 141 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_fast_right
# 142 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 143 "data/maps/SlateportCity_Harbor/scripts.pory"

# 144 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer0: @ 820CAE0
# 145 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 146 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 147 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 148 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 149 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 150 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 151 "data/maps/SlateportCity_Harbor/scripts.pory"

# 152 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer1: @ 820CAE6
# 153 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 154 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 155 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 156 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 157 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 158 "data/maps/SlateportCity_Harbor/scripts.pory"

# 159 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_SternApproachPlayer: @ 820CAEB
# 160 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 161 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 162 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_left
# 163 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 164 "data/maps/SlateportCity_Harbor/scripts.pory"

# 165 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_PlayerWalkUp: @ 820CAEF
# 166 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 167 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 168 "data/maps/SlateportCity_Harbor/scripts.pory"

# 169 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskForTicket:: @ 820CB06
# 170 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_MayISeeYourTicket, MSGBOX_DEFAULT
# 171 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_FlashedTicketWhereTo
# 172 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 173 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 174 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 175 "data/maps/SlateportCity_Harbor/scripts.pory"

# 176 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestination:: @ 820CB1A
# 177 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_ON_SS_TIDAL, SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier
# 178 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 18, 8, MULTI_SSTIDAL_SLATEPORT_NO_BF, 2, 0
# 179 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 180 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 181 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 182 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 183 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 184 "data/maps/SlateportCity_Harbor/scripts.pory"

# 185 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDestinationWithBattleFrontier:: @ 820CB50
# 186 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoicedefault 17, 6, MULTI_SSTIDAL_SLATEPORT_WITH_BF, 2, 0
# 187 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 188 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_Lilycove
# 189 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_BattleFrontier
# 190 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 191 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_CancelDestinationSelect
# 192 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 193 "data/maps/SlateportCity_Harbor/scripts.pory"

# 194 "data/maps/SlateportCity_Harbor/scripts.pory"
@ Unused. Should be impossible for player to reach Ferry without having received SS Tidal ticket
# 195 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NoTicket:: @ 820CB88
# 196 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_YouMustHaveTicket, MSGBOX_DEFAULT
# 197 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 198 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 199 "data/maps/SlateportCity_Harbor/scripts.pory"

# 200 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Lilycove:: @ 820CB92
# 201 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LilycoveItIs, MSGBOX_YESNO
# 202 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
# 203 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_ChooseNewDestination
# 204 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_SS_TIDAL_STATE, SS_TIDAL_BOARD_SLATEPORT
# 205 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 206 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_SS_TIDAL_CORRIDOR, 255, 1, 10
# 207 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 208 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 209 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 210 "data/maps/SlateportCity_Harbor/scripts.pory"

# 211 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BattleFrontier:: @ 820CBBA
# 212 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_BattleFrontierItIs, MSGBOX_YESNO
# 213 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
# 214 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_ChooseNewDestination
# 215 "data/maps/SlateportCity_Harbor/scripts.pory"
	call SlateportCity_Harbor_EventScript_BoardFerry
# 216 "data/maps/SlateportCity_Harbor/scripts.pory"
	warp MAP_BATTLE_FRONTIER_OUTSIDE_WEST, 255, 19, 67
# 217 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 218 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 219 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 220 "data/maps/SlateportCity_Harbor/scripts.pory"

# 221 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseNewDestination:: @ 820CBDD
# 222 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhereWouldYouLikeToGo
# 223 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 224 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseDestination
# 225 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 226 "data/maps/SlateportCity_Harbor/scripts.pory"

# 227 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerry:: @ 820CBE9
# 228 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_PleaseBoardFerry, MSGBOX_DEFAULT
# 229 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 230 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestUp
# 231 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 232 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 233 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_SLATEPORT_CITY_HARBOR
# 234 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_NORTH
# 235 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq SlateportCity_Harbor_EventScript_BoardFerryNorth
# 236 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 237 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_eq SlateportCity_Harbor_EventScript_BoardFerryEast
# 238 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 30
# 239 "data/maps/SlateportCity_Harbor/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, 0
# 240 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, LOCALID_SS_TIDAL
# 241 "data/maps/SlateportCity_Harbor/scripts.pory"
	call Common_EventScript_FerryDepart
# 242 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 243 "data/maps/SlateportCity_Harbor/scripts.pory"

# 244 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CancelDestinationSelect:: @ 820CC2D
# 245 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SailAnotherTime, MSGBOX_DEFAULT
# 246 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 247 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 248 "data/maps/SlateportCity_Harbor/scripts.pory"

# 249 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryEast:: @ 820CC37
# 250 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryEast
# 251 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 252 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 253 "data/maps/SlateportCity_Harbor/scripts.pory"

# 254 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_BoardFerryNorth:: @ 820CC42
# 255 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Harbor_Movement_BoardFerryNorth
# 256 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 257 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 258 "data/maps/SlateportCity_Harbor/scripts.pory"

# 259 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryEast: @ 820CC4D
# 260 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_right
# 261 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_in_place_fastest_up
# 262 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 263 "data/maps/SlateportCity_Harbor/scripts.pory"

# 264 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Movement_BoardFerryNorth: @ 820CC50
# 265 "data/maps/SlateportCity_Harbor/scripts.pory"
	walk_up
# 266 "data/maps/SlateportCity_Harbor/scripts.pory"
	step_end
# 267 "data/maps/SlateportCity_Harbor/scripts.pory"

# 268 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_Sailor:: @ 820CC52
# 269 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 270 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 271 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather
# 272 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, 0
# 273 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_KYOGRE, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 274 "data/maps/SlateportCity_Harbor/scripts.pory"
	call_if_set FLAG_DEFEATED_GROUDON, SlateportCity_Harbor_EventScript_CountDefeatedLegendary
# 275 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_0x8004, 2  @ Defeated both
# 276 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather
# 277 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_AbnormalWeather, MSGBOX_DEFAULT
# 278 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 279 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 280 "data/maps/SlateportCity_Harbor/scripts.pory"

# 281 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_SailorNoAbnormalWeather:: @ 820CC89
# 282 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday, MSGBOX_DEFAULT
# 283 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 284 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 285 "data/maps/SlateportCity_Harbor/scripts.pory"

# 286 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CountDefeatedLegendary:: @ 820CC93
# 287 "data/maps/SlateportCity_Harbor/scripts.pory"
	addvar VAR_0x8004, 1
# 288 "data/maps/SlateportCity_Harbor/scripts.pory"
	return
# 289 "data/maps/SlateportCity_Harbor/scripts.pory"

# 290 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FatMan:: @ 820CC99
# 291 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SubTooSmallForMe, MSGBOX_NPC
# 292 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 293 "data/maps/SlateportCity_Harbor/scripts.pory"

# 294 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptStern:: @ 820CCA2
# 295 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 296 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 297 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment
# 298 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE, SlateportCity_Harbor_EventScript_NeedDive
# 299 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive
# 300 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_SLATEPORT_HARBOR_STATE, 2
# 301 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_WhyStealSubmarine
# 302 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum, MSGBOX_DEFAULT
# 303 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 304 "data/maps/SlateportCity_Harbor/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 305 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmovement 0
# 306 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 307 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 308 "data/maps/SlateportCity_Harbor/scripts.pory"

# 309 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_WhyStealSubmarine:: @ 820CCDF
# 310 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine, MSGBOX_DEFAULT
# 311 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 312 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 313 "data/maps/SlateportCity_Harbor/scripts.pory"

# 314 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TeamAquaLeftNeedDive:: @ 820CCE9
# 315 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE
# 316 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TeamAquaLeftNeedDive, MSGBOX_DEFAULT
# 317 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 318 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 319 "data/maps/SlateportCity_Harbor/scripts.pory"

# 320 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_NeedDive:: @ 820CCF6
# 321 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_NeedDiveToCatchSub, MSGBOX_DEFAULT
# 322 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 323 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 324 "data/maps/SlateportCity_Harbor/scripts.pory"

# 325 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_CaptSternFerryOrScannerComment:: @ 820CD00
# 326 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_TEMP_1, 1
# 327 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_TradedScanner
# 328 "data/maps/SlateportCity_Harbor/scripts.pory"
	checkitem ITEM_SCANNER, 1
# 329 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, TRUE
# 330 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_AskToTradeScanner
# 331 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_Harbor_EventScript_FerryFinished
# 332 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry, MSGBOX_DEFAULT
# 333 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 334 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 335 "data/maps/SlateportCity_Harbor/scripts.pory"

# 336 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_FerryFinished:: @ 820CD2E
# 337 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_FinishedMakingFerry, MSGBOX_DEFAULT
# 338 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 339 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 340 "data/maps/SlateportCity_Harbor/scripts.pory"

# 341 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_AskToTradeScanner:: @ 820CD38
# 342 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WouldYouTradeScanner
# 343 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 344 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
# 345 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 346 "data/maps/SlateportCity_Harbor/scripts.pory"

# 347 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseScannerTrade:: @ 820CD44
# 348 "data/maps/SlateportCity_Harbor/scripts.pory"
	multichoice 0, 0, MULTI_STERN_DEEPSEA, 0
# 349 "data/maps/SlateportCity_Harbor/scripts.pory"
	switch VAR_RESULT
# 350 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 0, SlateportCity_Harbor_EventScript_DeepSeaTooth
# 351 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 1, SlateportCity_Harbor_EventScript_DeepSeaScale
# 352 "data/maps/SlateportCity_Harbor/scripts.pory"
	case 2, SlateportCity_Harbor_EventScript_DeclineTrade
# 353 "data/maps/SlateportCity_Harbor/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_Harbor_EventScript_DeclineTrade
# 354 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 355 "data/maps/SlateportCity_Harbor/scripts.pory"

# 356 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaTooth:: @ 820CD7B
# 357 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaTooth, MSGBOX_YESNO
# 358 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
# 359 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_ChooseDifferentTrade
# 360 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_TOOTH
# 361 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
# 362 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 363 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 364 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 365 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 366 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
# 367 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 368 "data/maps/SlateportCity_Harbor/scripts.pory"

# 369 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeepSeaScale:: @ 820CDBB
# 370 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_TradeForDeepSeaScale, MSGBOX_YESNO
# 371 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, NO
# 372 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq SlateportCity_Harbor_EventScript_ChooseDifferentTrade
# 373 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_SCALE
# 374 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, FALSE
# 375 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 376 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 377 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_HandedScannerToStern, MSGBOX_DEFAULT
# 378 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 379 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_TradedScanner
# 380 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 381 "data/maps/SlateportCity_Harbor/scripts.pory"

# 382 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_DeclineTrade:: @ 820CDFB
# 383 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow, MSGBOX_DEFAULT
# 384 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 385 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 386 "data/maps/SlateportCity_Harbor/scripts.pory"

# 387 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_ChooseDifferentTrade:: @ 820CE05
# 388 "data/maps/SlateportCity_Harbor/scripts.pory"
	message SlateportCity_Harbor_Text_WhichOneDoYouWant
# 389 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 390 "data/maps/SlateportCity_Harbor/scripts.pory"
	goto SlateportCity_Harbor_EventScript_ChooseScannerTrade
# 391 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 392 "data/maps/SlateportCity_Harbor/scripts.pory"

# 393 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_EventScript_TradedScanner:: @ 820CE11
# 394 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 395 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_Text_ThisWillHelpResearch, MSGBOX_DEFAULT
# 396 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
# 397 "data/maps/SlateportCity_Harbor/scripts.pory"
	end
# 398 "data/maps/SlateportCity_Harbor/scripts.pory"

# 399 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FerryServiceUnavailable: @ 820CE20
# 400 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I beg your pardon?\n"
# 401 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You're looking for a ship?\p"
# 402 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'm sorry, the ferry service isn't\n"
# 403 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "available at present…$"
# 404 "data/maps/SlateportCity_Harbor/scripts.pory"

# 405 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_MayISeeYourTicket: @ 820CE87
# 406 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Hello, are you here for the ferry?\n"
# 407 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "May I see your Ticket?$"
# 408 "data/maps/SlateportCity_Harbor/scripts.pory"

# 409 "data/maps/SlateportCity_Harbor/scripts.pory"

# 410 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_YouMustHaveTicket: @ 820CEC1
# 411 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} doesn't have the Ticket…\p"
# 412 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'm terribly sorry.\p"
# 413 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You must have a Ticket to board\n"
# 414 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the ferry.$"
# 415 "data/maps/SlateportCity_Harbor/scripts.pory"

# 416 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FlashedTicketWhereTo: @ 820CF1C
# 417 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} flashed the Ticket.\p"
# 418 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perfect! That's all you need!\p"
# 419 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "And where would you like to go?$"
# 420 "data/maps/SlateportCity_Harbor/scripts.pory"

# 421 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SailAnotherTime: @ 820CF71
# 422 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please sail with us another time!$"
# 423 "data/maps/SlateportCity_Harbor/scripts.pory"

# 424 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LilycoveItIs: @ 820CF93
# 425 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Lilycove City it is, then!$"
# 426 "data/maps/SlateportCity_Harbor/scripts.pory"

# 427 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_BattleFrontierItIs: @ 820CFAE
# 428 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Battle Frontier it is, then!$"
# 429 "data/maps/SlateportCity_Harbor/scripts.pory"

# 430 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_PleaseBoardFerry: @ 820CFCB
# 431 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please board the ferry and wait for\n"
# 432 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "departure.$"
# 433 "data/maps/SlateportCity_Harbor/scripts.pory"

# 434 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhereWouldYouLikeToGo: @ 820CFFA
# 435 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Then, where would you like to go?$"
# 436 "data/maps/SlateportCity_Harbor/scripts.pory"

# 437 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_LoveToGoDeepUnderwaterSomeday: @ 820D01C
# 438 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A journey to the bottom of the sea…\n"
# 439 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wonder what it'd be like?\p"
# 440 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I'd love to go deep underwater like\n"
# 441 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "that someday.$"
# 442 "data/maps/SlateportCity_Harbor/scripts.pory"

# 443 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_AbnormalWeather: @ 820D08E
# 444 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "For a ship to sail safely, we need to\n"
# 445 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "know about the weather!\p"
# 446 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Speaking of weather, I heard something\n"
# 447 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "from a guy at the Weather Institute.\p"
# 448 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "He was saying abnormal weather has\n"
# 449 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "been reported all over the place!\p"
# 450 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You should visit the Weather Institute\n"
# 451 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "and ask around!$"
# 452 "data/maps/SlateportCity_Harbor/scripts.pory"

# 453 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SubTooSmallForMe: @ 820D194
# 454 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I wanted to go with Capt. Stern on\n"
# 455 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the ocean floor exploration.\p"
# 456 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But the sub's too small for me.\p"
# 457 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "If I squeezed in, there wouldn't be\n"
# 458 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "any room for the Captain…$"
# 459 "data/maps/SlateportCity_Harbor/scripts.pory"

# 460 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_SameThugsTriedToRobAtMuseum: @ 820D232
# 461 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: Those thugs…\p"
# 462 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "They're the same lot who tried to rob\n"
# 463 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "the Devon Goods at the Museum.$"
# 464 "data/maps/SlateportCity_Harbor/scripts.pory"

# 465 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_ArchieYouAgainHideoutInLilycove: @ 820D291
# 466 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Archie: Oh?\n"
# 467 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Not you again…\p"
# 468 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You are tenacious to track us here,\n"
# 469 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "that much I will give you.\p"
# 470 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But now…\n"
# 471 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "No one can stop us! No one!\p"
# 472 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Or, will you follow us back to our\n"
# 473 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Hideout in Lilycove City?\p"
# 474 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Fwahahahaha…$"
# 475 "data/maps/SlateportCity_Harbor/scripts.pory"

# 476 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_CaptSternWhyStealMySubmarine: @ 820D35A
# 477 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: Why…\p"
# 478 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Why would Team Aqua steal my\n"
# 479 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Submarine Explorer 1?\p"
# 480 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "They can't be after the slumbering\n"
# 481 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Pokémon at the bottom of the sea…\p"
# 482 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "But even if I were to chase them,\n"
# 483 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "I don't stand a chance against them…$"
# 484 "data/maps/SlateportCity_Harbor/scripts.pory"

# 485 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TeamAquaLeftNeedDive: @ 820D42B
# 486 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: Oh, {PLAYER}{KUN}…\p"
# 487 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Okay… So Team Aqua left before you\n"
# 488 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "could stop them…\p"
# 489 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Oh, no, don't blame yourself.\n"
# 490 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You're not responsible for this.\p"
# 491 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Trying to catch a submarine…\n"
# 492 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It's impossible for most people.\p"
# 493 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You would need a Pokémon that knows\n"
# 494 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "how to Dive…\p"
# 495 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perhaps if you went out to\n"
# 496 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Mossdeep City…\p"
# 497 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A lot of divers live out there, so\n"
# 498 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "someone might teach you…$"
# 499 "data/maps/SlateportCity_Harbor/scripts.pory"

# 500 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_NeedDiveToCatchSub: @ 820D58A
# 501 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: Trying to catch a\n"
# 502 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "submarine… It's impossible.\p"
# 503 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "You would need a Pokémon that knows\n"
# 504 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "how to Dive…\p"
# 505 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Perhaps if you went out to\n"
# 506 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Mossdeep City…\p"
# 507 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "A lot of divers live out there, so\n"
# 508 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "someone might teach you…$"
# 509 "data/maps/SlateportCity_Harbor/scripts.pory"

# 510 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WontBeLongBeforeWeFinishFerry: @ 820D65C
# 511 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: Oh, yes.\n"
# 512 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Mr. Briney came to our Shipyard.\p"
# 513 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It won't be long now before we finish\n"
# 514 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "making the ferry!$"
# 515 "data/maps/SlateportCity_Harbor/scripts.pory"

# 516 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_FinishedMakingFerry: @ 820D6CB
# 517 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: {PLAYER}{KUN}!\p"
# 518 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We finally finished making the ferry\n"
# 519 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "S.S. Tidal!\p"
# 520 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "We couldn't have done it without\n"
# 521 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your friend Mr. Briney.\p"
# 522 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Please go for a short cruise on it!$"
# 523 "data/maps/SlateportCity_Harbor/scripts.pory"

# 524 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WouldYouTradeScanner: @ 820D76C
# 525 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: Oh?\n"
# 526 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, that item you have…\p"
# 527 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "That's a Scanner! That would sure\n"
# 528 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "help us on our explorations.\p"
# 529 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER}{KUN}, would you trade your\n"
# 530 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Scanner for something?\p"
# 531 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Like, say, a Deepseatooth or\n"
# 532 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "a Deepseascale that I have?$"
# 533 "data/maps/SlateportCity_Harbor/scripts.pory"

# 534 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_IfYouWantToTradeLetMeKnow: @ 820D841
# 535 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: Are you certain?\n"
# 536 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "It's useless to you, {PLAYER}{KUN}…\p"
# 537 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Well, okay, then. If you want to trade\n"
# 538 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "your Scanner, let me know.$"
# 539 "data/maps/SlateportCity_Harbor/scripts.pory"

# 540 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaTooth: @ 820D8BC
# 541 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: So you'll trade it for\n"
# 542 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my Deepseatooth?$"
# 543 "data/maps/SlateportCity_Harbor/scripts.pory"

# 544 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_TradeForDeepSeaScale: @ 820D8F1
# 545 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: So you'll trade it for\n"
# 546 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "my Deepseascale?$"
# 547 "data/maps/SlateportCity_Harbor/scripts.pory"

# 548 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_WhichOneDoYouWant: @ 820D926
# 549 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: Which one do you want?$"
# 550 "data/maps/SlateportCity_Harbor/scripts.pory"

# 551 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_HandedScannerToStern: @ 820D94A
# 552 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "{PLAYER} handed the Scanner to\n"
# 553 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern.$"
# 554 "data/maps/SlateportCity_Harbor/scripts.pory"

# 555 "data/maps/SlateportCity_Harbor/scripts.pory"
SlateportCity_Harbor_Text_ThisWillHelpResearch: @ 820D970
# 556 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: Thanks, {PLAYER}{KUN}!\n"
# 557 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "This will help our research a lot!$"

SlateportCity_Harbor_EventScript_CaptSternPory::
# 561 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 562 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 563 "data/maps/SlateportCity_Harbor/scripts.pory"
	checkitem ITEM_SCANNER, 1
# 564 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_Harbor_EventScript_CaptSternPory_6
SlateportCity_Harbor_EventScript_CaptSternPory_5:
# 580 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq SlateportCity_Harbor_EventScript_CaptSternPory_3
# 583 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_CaptSternPory_Text_5
SlateportCity_Harbor_EventScript_CaptSternPory_1:
# 587 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
	end

SlateportCity_Harbor_EventScript_CaptSternPory_2:
# 565 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_CaptSternPory_Text_0, MSGBOX_YESNO
# 567 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_Harbor_EventScript_CaptSternPory_9
# 578 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_CaptSternPory_Text_3
	goto SlateportCity_Harbor_EventScript_CaptSternPory_1

SlateportCity_Harbor_EventScript_CaptSternPory_3:
# 581 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_CaptSternPory_Text_4
	goto SlateportCity_Harbor_EventScript_CaptSternPory_1

SlateportCity_Harbor_EventScript_CaptSternPory_6:
# 564 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_ne SlateportCity_Harbor_EventScript_CaptSternPory_2
	goto SlateportCity_Harbor_EventScript_CaptSternPory_5

SlateportCity_Harbor_EventScript_CaptSternPory_9:
# 568 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_CaptSternPory_Text_1
# 570 "data/maps/SlateportCity_Harbor/scripts.pory"
	removeitem ITEM_SCANNER
# 571 "data/maps/SlateportCity_Harbor/scripts.pory"
	setflag FLAG_EXCHANGED_SCANNER
# 572 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_SCALE
# 573 "data/maps/SlateportCity_Harbor/scripts.pory"
	giveitem ITEM_DEEP_SEA_TOOTH
# 574 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 575 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_EventScript_CaptSternPory_Text_2
	goto SlateportCity_Harbor_EventScript_CaptSternPory_1


SlateportCity_Harbor_EventScript_CaptSternPory_Text_0:
# 565 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: Oh? {PLAYER}, that item\n"
	.string "you have... That's a Scanner!\p"
	.string "That would sure help us on our\n"
	.string "explorations. {PLAYER}, would you\l"
	.string "trade your Scanner for something?$"

SlateportCity_Harbor_EventScript_CaptSternPory_Text_1:
# 568 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: Yes! Thanks. This will help\n"
	.string "our research a lot!\p"
	.string "Take these items as a token of my\n"
	.string "appreciation for your generosity.$"

SlateportCity_Harbor_EventScript_CaptSternPory_Text_2:
# 575 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: I found these items while\n"
	.string "working on the Ferry!\p"
	.string "Using them with the Pokemon called\n"
	.string "Clamperl may help it on its evolution.$"

SlateportCity_Harbor_EventScript_CaptSternPory_Text_3:
# 578 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: You drive a hard bargain.\n"
	.string "Let me know if you reconsider.$"

SlateportCity_Harbor_EventScript_CaptSternPory_Text_4:
# 581 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: Thanks. This will help our\n"
	.string "research a lot!$"

SlateportCity_Harbor_EventScript_CaptSternPory_Text_5:
# 583 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Capt. Stern: We've finally completed our\n"
	.string "new ferry, the S.S. Tidal!\p"
	.string "She's anchored here in the harbor.\n"
	.string "Do give her a look, eh?$"
