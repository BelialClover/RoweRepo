# 1 "data/maps/MtPyre_Summit/scripts.pory"

# 2 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_ARCHIE, 2
# 3 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_OLD_LADY, 3
# 4 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_1, 4
# 5 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_2, 5
# 6 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_3, 6
# 7 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_4, 7
# 8 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_MAXIE, 8
# 9 "data/maps/MtPyre_Summit/scripts.pory"

# 10 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_MapScripts:: @ 8231FF7
# 11 "data/maps/MtPyre_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Summit_OnTransition
# 12 "data/maps/MtPyre_Summit/scripts.pory"
	.byte 0
# 13 "data/maps/MtPyre_Summit/scripts.pory"

# 14 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_OnTransition: @ 8231FFD
# 15 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_MT_PYRE_STATE, 2
# 16 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_SetArchieMaxiePositions
# 17 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 18 "data/maps/MtPyre_Summit/scripts.pory"

# 19 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_SetArchieMaxiePositions:: @ 8232009
# 20 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 23, 6
# 21 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 22, 6
# 22 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 23 "data/maps/MtPyre_Summit/scripts.pory"

# 24 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger0:: @ 8232018
# 25 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 26 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 27 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 28 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 29 "data/maps/MtPyre_Summit/scripts.pory"

# 30 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger1:: @ 8232024
# 31 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 32 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 33 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 34 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 35 "data/maps/MtPyre_Summit/scripts.pory"

# 36 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger2:: @ 8232030
# 37 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 38 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 39 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 40 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 41 "data/maps/MtPyre_Summit/scripts.pory"

# 42 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits:: @ 823203C
# 43 "data/maps/MtPyre_Summit/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, 0
# 44 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 45 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 46 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFastestDown
# 47 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 48 "data/maps/MtPyre_Summit/scripts.pory"
	delay 50
# 49 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 0
# 50 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_ArchieFacePlayer0
# 51 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 1
# 52 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_ArchieFacePlayer1
# 53 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 2
# 54 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_ArchieFacePlayer2
# 55 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo, MSGBOX_DEFAULT
# 56 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 57 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_TO_BLACK
# 58 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 59 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 60 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 61 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 62 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 63 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 64 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 65 "data/maps/MtPyre_Summit/scripts.pory"
	fadedefaultbgm
# 66 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 67 "data/maps/MtPyre_Summit/scripts.pory"
	delay 20
# 68 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 1
# 69 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 0
# 70 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_OldLadyApproachPlayer0
# 71 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 1
# 72 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_OldLadyApproachPlayer1
# 73 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 2
# 74 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_OldLadyApproachPlayer2
# 75 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis, MSGBOX_DEFAULT
# 76 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_MAGMA_EMBLEM
# 77 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
# 78 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
# 79 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 80 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 81 "data/maps/MtPyre_Summit/scripts.pory"

# 82 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer0:: @ 82320E0
# 83 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer0
# 84 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 85 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 86 "data/maps/MtPyre_Summit/scripts.pory"

# 87 "data/maps/MtPyre_Summit/scripts.pory"
@ Archie is already facing player
# 88 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer1:: @ 82320EB
# 89 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 90 "data/maps/MtPyre_Summit/scripts.pory"

# 91 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer2:: @ 82320EC
# 92 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer2
# 93 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 94 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 95 "data/maps/MtPyre_Summit/scripts.pory"

# 96 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer0:: @ 82320F7
# 97 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer0
# 98 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 99 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 100 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 101 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 102 "data/maps/MtPyre_Summit/scripts.pory"

# 103 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer1:: @ 823210C
# 104 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer1
# 105 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 106 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 107 "data/maps/MtPyre_Summit/scripts.pory"

# 108 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer2:: @ 8232117
# 109 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_OLD_LADY, MtPyre_Summit_Movement_OldLadyApproachPlayer2
# 110 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 111 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 112 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 113 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 114 "data/maps/MtPyre_Summit/scripts.pory"

# 115 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer0: @ 823212C
# 116 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 117 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 118 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_left
# 119 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 120 "data/maps/MtPyre_Summit/scripts.pory"

# 121 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer1: @ 8232130
# 122 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 123 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 124 "data/maps/MtPyre_Summit/scripts.pory"

# 125 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer2: @ 8232132
# 126 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 127 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 128 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_right
# 129 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 130 "data/maps/MtPyre_Summit/scripts.pory"

# 131 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer0: @ 8232136
# 132 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 133 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_down
# 134 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 135 "data/maps/MtPyre_Summit/scripts.pory"

# 136 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer2: @ 8232139
# 137 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 138 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_down
# 139 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 140 "data/maps/MtPyre_Summit/scripts.pory"

# 141 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan:: @ 823213C
# 142 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 144 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
# 145 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 146 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, YES
# 147 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_OldManTale
# 148 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, NO
# 149 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_DeclineOldManTale
# 150 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 151 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 152 "data/maps/MtPyre_Summit/scripts.pory"

# 153 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza:: @ 8232167
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, YES
# 156 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_OldManNewTale
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_RESULT, NO
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_DeclineOldManTale
# 159 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 161 "data/maps/MtPyre_Summit/scripts.pory"

# 162 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManTale:: @ 8232187
# 163 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
# 164 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 165 "data/maps/MtPyre_Summit/scripts.pory"

# 166 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_DeclineOldManTale:: @ 8232190
# 167 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
# 168 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 169 "data/maps/MtPyre_Summit/scripts.pory"

# 170 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManNewTale:: @ 8232199
# 171 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
# 172 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 173 "data/maps/MtPyre_Summit/scripts.pory"

# 174 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady:: @ 82321A2
# 175 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 176 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 177 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
# 178 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_MT_PYRE_STATE, 3
# 179 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_ge MtPyre_Summit_EventScript_OldLadyOrbsReturned
# 180 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
# 181 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
# 182 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 183 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 184 "data/maps/MtPyre_Summit/scripts.pory"

# 185 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyOrbsReturned:: @ 82321CB
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 187 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 188 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 190 "data/maps/MtPyre_Summit/scripts.pory"

# 191 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake:: @ 82321D8
# 192 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 193 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 194 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 195 "data/maps/MtPyre_Summit/scripts.pory"

# 196 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned:: @ 82321E2
# 197 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 198 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 199 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 200 "data/maps/MtPyre_Summit/scripts.pory"

# 201 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger0:: @ 82321EC
# 202 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 203 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 204 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 205 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 206 "data/maps/MtPyre_Summit/scripts.pory"

# 207 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger1:: @ 82321F8
# 208 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 209 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 210 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 211 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 212 "data/maps/MtPyre_Summit/scripts.pory"

# 213 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger2:: @ 8232204
# 214 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 215 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 216 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 217 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 218 "data/maps/MtPyre_Summit/scripts.pory"

# 219 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs:: @ 8232210
# 220 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 221 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 222 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 223 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 0
# 224 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
# 225 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 1
# 226 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
# 227 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 2
# 228 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
# 229 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 230 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 231 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 232 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 233 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 234 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 235 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 0
# 236 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_MaxieApproachPlayer0
# 237 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 1
# 238 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_MaxieApproachPlayer1
# 239 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 2
# 240 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_MaxieApproachPlayer2
# 241 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 242 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 243 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 0
# 244 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_MaxieApproachArchie0
# 245 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 1
# 246 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_MaxieApproachArchie1
# 247 "data/maps/MtPyre_Summit/scripts.pory"
	compare VAR_0x8008, 2
# 248 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq MtPyre_Summit_EventScript_MaxieApproachArchie2
# 249 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 250 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 251 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 252 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 253 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 254 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MAXIE
# 255 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 256 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 257 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 258 "data/maps/MtPyre_Summit/scripts.pory"

# 259 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit0:: @ 82322C4
# 260 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
# 261 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 262 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 263 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 264 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 265 "data/maps/MtPyre_Summit/scripts.pory"

# 266 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit1:: @ 82322DD
# 267 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
# 268 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 269 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 270 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 271 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 272 "data/maps/MtPyre_Summit/scripts.pory"

# 273 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit2:: @ 82322F6
# 274 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
# 275 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 276 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 277 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 278 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 279 "data/maps/MtPyre_Summit/scripts.pory"

# 280 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer0:: @ 823230F
# 281 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
# 282 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 283 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
# 284 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 285 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 286 "data/maps/MtPyre_Summit/scripts.pory"

# 287 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer1:: @ 8232328
# 288 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 289 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 290 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
# 291 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 292 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 293 "data/maps/MtPyre_Summit/scripts.pory"

# 294 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer2:: @ 8232341
# 295 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 296 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 297 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
# 298 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 299 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 300 "data/maps/MtPyre_Summit/scripts.pory"

# 301 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie0:: @ 823235A
# 302 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 303 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
# 304 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 305 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFastestRight
# 306 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 307 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 308 "data/maps/MtPyre_Summit/scripts.pory"

# 309 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie1:: @ 8232376
# 310 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 311 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
# 312 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 313 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFastestRight
# 314 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 315 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 316 "data/maps/MtPyre_Summit/scripts.pory"

# 317 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie2:: @ 8232392
# 318 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 319 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
# 320 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 321 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFastestRight
# 322 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 323 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 324 "data/maps/MtPyre_Summit/scripts.pory"

# 325 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie0: @ 82323AE
# 326 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 327 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 328 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_right
# 329 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 330 "data/maps/MtPyre_Summit/scripts.pory"

# 331 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie: @ 82323B2
# 332 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 333 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 334 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_left
# 335 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 336 "data/maps/MtPyre_Summit/scripts.pory"

# 337 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit: @ 82323B6
# 338 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 339 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 340 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 341 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 342 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 343 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 344 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 345 "data/maps/MtPyre_Summit/scripts.pory"

# 346 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit: @ 82323BD
# 347 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 348 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 349 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 350 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 351 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 352 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 353 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 354 "data/maps/MtPyre_Summit/scripts.pory"

# 355 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0: @ 82323C4
# 356 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 357 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 358 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 359 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_right
# 360 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 361 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_down
# 362 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 363 "data/maps/MtPyre_Summit/scripts.pory"

# 364 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1: @ 82323CB
# 365 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 366 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 367 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 368 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_left
# 369 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 370 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_down
# 371 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 372 "data/maps/MtPyre_Summit/scripts.pory"

# 373 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2: @ 82323D2
# 374 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 375 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 376 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_left
# 377 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 378 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_down
# 379 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 380 "data/maps/MtPyre_Summit/scripts.pory"

# 381 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer0: @ 82323D8
# 382 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 383 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 384 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 385 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 386 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 387 "data/maps/MtPyre_Summit/scripts.pory"

# 388 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer1: @ 82323DD
# 389 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 390 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 391 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 392 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_right
# 393 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 394 "data/maps/MtPyre_Summit/scripts.pory"

# 395 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer2: @ 82323E2
# 396 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 397 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 398 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 399 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_right
# 400 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 401 "data/maps/MtPyre_Summit/scripts.pory"

# 402 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieWatchMaxie: @ 82323E7
# 403 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 404 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_up
# 405 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 406 "data/maps/MtPyre_Summit/scripts.pory"

# 407 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxie: @ 82323EA
# 408 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 409 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_down
# 410 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 411 "data/maps/MtPyre_Summit/scripts.pory"

# 412 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie0: @ 82323ED
# 413 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 414 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 415 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 416 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 417 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_left
# 418 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 419 "data/maps/MtPyre_Summit/scripts.pory"

# 420 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie1: @ 82323F3
# 421 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 422 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 423 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 424 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_left
# 425 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 426 "data/maps/MtPyre_Summit/scripts.pory"

# 427 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie2: @ 82323F8
# 428 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 429 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 430 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 431 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_fastest_left
# 432 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 433 "data/maps/MtPyre_Summit/scripts.pory"

# 434 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt1:: @ 82323FD
# 435 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
# 436 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 437 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 438 "data/maps/MtPyre_Summit/scripts.pory"

# 439 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt2:: @ 8232414
# 440 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
# 441 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 442 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 443 "data/maps/MtPyre_Summit/scripts.pory"

# 444 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt3:: @ 823242B
# 445 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
# 446 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 447 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 448 "data/maps/MtPyre_Summit/scripts.pory"

# 449 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt4:: @ 8232442
# 450 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
# 451 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 452 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 453 "data/maps/MtPyre_Summit/scripts.pory"

# 454 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Intro: @ 8232459
# 455 "data/maps/MtPyre_Summit/scripts.pory"
	.string "No! Those Team Magma goons got\n"
# 456 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here ahead of us!\p"
# 457 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We can't fall behind!$"
# 458 "data/maps/MtPyre_Summit/scripts.pory"

# 459 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Defeat: @ 82324A0
# 460 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought you were one of the Magmas\n"
# 461 "data/maps/MtPyre_Summit/scripts.pory"
	.string "who happened to come back…$"
# 462 "data/maps/MtPyre_Summit/scripts.pory"

# 463 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1PostBattle: @ 82324E0
# 464 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Yeah, so you are strong…\n"
# 465 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But there're a lot of us!$"
# 466 "data/maps/MtPyre_Summit/scripts.pory"

# 467 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Intro: @ 8232513
# 468 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hah!\n"
# 469 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Too bad for you!\p"
# 470 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you came earlier, you only would've\n"
# 471 "data/maps/MtPyre_Summit/scripts.pory"
	.string "had to battle the wimpy Team Magma.\p"
# 472 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But since you arrived now, you have\n"
# 473 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to take on us toughies!$"
# 474 "data/maps/MtPyre_Summit/scripts.pory"

# 475 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Defeat: @ 82325B0
# 476 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Urgh… I should've let you take on\n"
# 477 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Magma first…$"
# 478 "data/maps/MtPyre_Summit/scripts.pory"

# 479 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2PostBattle: @ 82325E4
# 480 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't know anything!\n"
# 481 "data/maps/MtPyre_Summit/scripts.pory"
	.string "So why are you messing with us?$"
# 482 "data/maps/MtPyre_Summit/scripts.pory"

# 483 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Intro: @ 823261D
# 484 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You…\n"
# 485 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We saw you at Mt. Chimney.\p"
# 486 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't belong to either Team,\n"
# 487 "data/maps/MtPyre_Summit/scripts.pory"
	.string "so why would you be here?$"
# 488 "data/maps/MtPyre_Summit/scripts.pory"

# 489 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Defeat: @ 8232678
# 490 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to mess with anyone,\n"
# 491 "data/maps/MtPyre_Summit/scripts.pory"
	.string "let it be Team Magma…$"
# 492 "data/maps/MtPyre_Summit/scripts.pory"

# 493 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3PostBattle: @ 82326B3
# 494 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heh, it doesn't matter!\n"
# 495 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We bought ourselves some time!\p"
# 496 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Boss should have snatched what\n"
# 497 "data/maps/MtPyre_Summit/scripts.pory"
	.string "he was after!$"
# 498 "data/maps/MtPyre_Summit/scripts.pory"

# 499 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Intro: @ 823271B
# 500 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, I know!\n"
# 501 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You tried to join Team Magma,\l"
# 502 "data/maps/MtPyre_Summit/scripts.pory"
	.string "but they wouldn't have you!\p"
# 503 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, don't think that we'll let you\n"
# 504 "data/maps/MtPyre_Summit/scripts.pory"
	.string "join our Team Aqua!$"
# 505 "data/maps/MtPyre_Summit/scripts.pory"

# 506 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Defeat: @ 823279A
# 507 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you want to join Team Aqua that\n"
# 508 "data/maps/MtPyre_Summit/scripts.pory"
	.string "badly, we can consider it…$"
# 509 "data/maps/MtPyre_Summit/scripts.pory"

# 510 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4PostBattle: @ 82327D8
# 511 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We have a great combination going\n"
# 512 "data/maps/MtPyre_Summit/scripts.pory"
	.string "with us members and our leader.$"
# 513 "data/maps/MtPyre_Summit/scripts.pory"

# 514 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo: @ 823281A
# 515 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Archie: Team Magma's Maxie got ahead\n"
# 516 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of us, but we also got what we wanted.\p"
# 517 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Red Orb preserved at Mt. Pyre…\n"
# 518 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I, Archie, now have it in my possession!\p"
# 519 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Fufufu… Now we can bring our ultimate\n"
# 520 "data/maps/MtPyre_Summit/scripts.pory"
	.string "objective to fruition!\p"
# 521 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Okay, Team!\n"
# 522 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We're pulling out!$"
# 523 "data/maps/MtPyre_Summit/scripts.pory"

# 524 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis: @ 823290E
# 525 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, no…\n"
# 526 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This cannot happen…\p"
# 527 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Not only the Blue Orb, but even\n"
# 528 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the Red Orb has been taken…\p"
# 529 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb and Red Orb must never\n"
# 530 "data/maps/MtPyre_Summit/scripts.pory"
	.string "be separated. They belong together.\p"
# 531 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What are those men trying to do with\n"
# 532 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two Orbs?\p"
# 533 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 534 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 535 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, yes. Was it Team Magma who came\n"
# 536 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and took the Blue Orb first?\p"
# 537 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, in their haste, they left this\n"
# 538 "data/maps/MtPyre_Summit/scripts.pory"
	.string "behind.\p"
# 539 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I couldn't imagine what exactly it\n"
# 540 "data/maps/MtPyre_Summit/scripts.pory"
	.string "could be.\p"
# 541 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I would like you to have it.\n"
# 542 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps it will be useful in some way.$"
# 543 "data/maps/MtPyre_Summit/scripts.pory"

# 544 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken: @ 8232AD8
# 545 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb and Red Orb taken by\n"
# 546 "data/maps/MtPyre_Summit/scripts.pory"
	.string "those sinister men…\p"
# 547 "data/maps/MtPyre_Summit/scripts.pory"
	.string "They must never be apart…\n"
# 548 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I fear something terrible will happen…$"
# 549 "data/maps/MtPyre_Summit/scripts.pory"

# 550 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened: @ 8232B4F
# 551 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\p"
# 552 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You say that both Groudon and Kyogre\n"
# 553 "data/maps/MtPyre_Summit/scripts.pory"
	.string "have been awakened?\p"
# 554 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is said that the Blue Orb and\n"
# 555 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the Red Orb quelled the rage of\l"
# 556 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two Pokémon…\p"
# 557 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is also said that the true owner\n"
# 558 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of the Orbs still exists.\p"
# 559 "data/maps/MtPyre_Summit/scripts.pory"
	.string "However, no one knows who, or what\n"
# 560 "data/maps/MtPyre_Summit/scripts.pory"
	.string "exactly, the Orbs belong to.\p"
# 561 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It could be a human, or perhaps\n"
# 562 "data/maps/MtPyre_Summit/scripts.pory"
	.string "a Pokémon, but no one knows.$"
# 563 "data/maps/MtPyre_Summit/scripts.pory"

# 564 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs: @ 8232CA6
# 565 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the Orbs came\n"
# 566 "data/maps/MtPyre_Summit/scripts.pory"
	.string "back to return them on their own.\p"
# 567 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Those men…\n"
# 568 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps they are not so evil after all…$"
# 569 "data/maps/MtPyre_Summit/scripts.pory"

# 570 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs: @ 8232D1E
# 571 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea,\n"
# 572 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the sky…\p"
# 573 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That is said to be the identities of\n"
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the super-ancient Pokémon…\p"
# 575 "data/maps/MtPyre_Summit/scripts.pory"
	.string "In the same way that we humans and\n"
# 576 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Pokémon have life, our world, too,\l"
# 577 "data/maps/MtPyre_Summit/scripts.pory"
	.string "is alive…\p"
# 578 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The super-ancient Pokémon have\n"
# 579 "data/maps/MtPyre_Summit/scripts.pory"
	.string "taught us that…$"
# 580 "data/maps/MtPyre_Summit/scripts.pory"

# 581 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale: @ 8232E0C
# 582 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Mt. Pyre is where we calm the spirits\n"
# 583 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Pokémon that have passed on…\p"
# 584 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This is a high place where one can\n"
# 585 "data/maps/MtPyre_Summit/scripts.pory"
	.string "see all of Hoenn…\p"
# 586 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The disembodied spirits of Pokémon\n"
# 587 "data/maps/MtPyre_Summit/scripts.pory"
	.string "must find solace here…\p"
# 588 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Is it coincidence that you are here…\p"
# 589 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Will you hear out my tale? A tale long\n"
# 590 "data/maps/MtPyre_Summit/scripts.pory"
	.string "told in the Hoenn region?$"
# 591 "data/maps/MtPyre_Summit/scripts.pory"

# 592 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale: @ 8232F27
# 593 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 594 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 595 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 596 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 597 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 598 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 599 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 600 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 601 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 602 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 603 "data/maps/MtPyre_Summit/scripts.pory"
	.string "infernos and vicious storms.\p"
# 604 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Blue Orb and the Red Orb brought\n"
# 605 "data/maps/MtPyre_Summit/scripts.pory"
	.string "an end to the calamity.\p"
# 606 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Light poured from the two Orbs and\n"
# 607 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the enraged adversaries.\p"
# 608 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The pair, made docile, dove deep into\n"
# 609 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sea where eventually they\l"
# 610 "data/maps/MtPyre_Summit/scripts.pory"
	.string "disappeared…$"
# 611 "data/maps/MtPyre_Summit/scripts.pory"

# 612 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine: @ 8233162
# 613 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
# 614 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, that, too, is fine…$"
# 615 "data/maps/MtPyre_Summit/scripts.pory"

# 616 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieSilence: @ 8233183
# 617 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Maxie: {PLAYER}…\p"
# 618 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 619 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …$"
# 620 "data/maps/MtPyre_Summit/scripts.pory"

# 621 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn: @ 82331A6
# 622 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
# 623 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Hoenn to future generations.\p"
# 624 "data/maps/MtPyre_Summit/scripts.pory"
	.string "And the crisis that just ended in\n"
# 625 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Sootopolis rewrote a legend…\p"
# 626 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Have you the time to hear the new\n"
# 627 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legend of Hoenn?$"
# 628 "data/maps/MtPyre_Summit/scripts.pory"

# 629 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale: @ 823325D
# 630 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 631 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 632 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 633 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 634 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 635 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 636 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 637 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 638 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 639 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 640 "data/maps/MtPyre_Summit/scripts.pory"
	.string "fires and vicious storms.\p"
# 641 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It was then that the Pokémon of\n"
# 642 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sky descended from a storm.\p"
# 643 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon, shining a vivid green,\n"
# 644 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the two enraged Pokémon.\p"
# 645 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Then, its duty done, the green Pokémon\n"
# 646 "data/maps/MtPyre_Summit/scripts.pory"
	.string "flew off into the wild blue yonder…$"
