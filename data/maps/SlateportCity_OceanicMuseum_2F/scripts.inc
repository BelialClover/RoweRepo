# 1 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 2 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_CAPT_STERN, 1
# 3 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_ARCHIE, 2
# 4 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_GRUNT_1, 3
# 5 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
.set LOCALID_GRUNT_2, 4
# 6 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 7 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_MapScripts:: @ 820BAFF
# 8 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.byte 0
# 9 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 10 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_CaptStern:: @ 820BB00
# 11 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 12 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 13 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts, MSGBOX_DEFAULT
# 14 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 15 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, 1
# 16 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_GRUNT_1
# 17 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter
# 18 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 19 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_GRUNT_2
# 20 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter
# 21 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 22 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach
# 23 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach
# 24 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 25 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 26 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 27 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 28 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts
# 29 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts, MSGBOX_DEFAULT
# 30 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_EAST
# 31 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_ne SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts
# 32 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou, MSGBOX_DEFAULT
# 33 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua, MSGBOX_DEFAULT
# 34 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 35 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 36 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 37 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
# 38 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth
# 39 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_FACING, DIR_WEST
# 40 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest
# 41 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_1, SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat
# 42 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious, MSGBOX_DEFAULT
# 43 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 44 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 45 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 46 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle
# 47 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 48 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis, MSGBOX_DEFAULT
# 49 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MUSEUM_2, SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat
# 50 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated
# 51 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 52 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_WalkInPlaceFastestDown
# 53 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_WalkInPlaceFastestUp
# 54 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 55 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_MeddlingKid, MSGBOX_DEFAULT
# 56 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 57 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 35
# 58 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	addobject LOCALID_ARCHIE
# 59 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter
# 60 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_GRUNT_2, SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie
# 61 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 62 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong, MSGBOX_DEFAULT
# 63 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 64 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_ARCHIE, SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer
# 65 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 66 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_ArchieWarning, MSGBOX_DEFAULT
# 67 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 68 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	savebgm MUS_DUMMY
# 69 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadedefaultbgm
# 70 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_ARCHIE
# 72 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 73 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 74 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 75 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay 30
# 76 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS
# 77 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestRight
# 78 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 79 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs, MSGBOX_DEFAULT
# 80 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_0x8004, ITEM_DEVON_GOODS
# 81 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 82 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo, MSGBOX_DEFAULT
# 83 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 84 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 85 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	playfanfare MUS_HEAL
# 86 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitfanfare
# 87 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	special HealPlayerParty
# 88 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 89 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
# 90 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	compare VAR_REGISTER_BIRCH_STATE, 0
# 91 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	call_if_eq SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch
# 92 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_DELIVERED_DEVON_GOODS
# 93 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE
# 94 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE
# 95 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 96 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 97 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 98 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 99 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 100 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_ReadyRegisterBirch:: @ 820BC8C
# 101 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 1
# 102 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 103 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 104 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerFaceGrunts:: @ 820BC92
# 105 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestLeft
# 106 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 107 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 108 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 109 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SternFaceGrunts:: @ 820BC9D
# 110 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFastestLeft
# 111 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 112 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 113 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 114 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntSouth:: @ 820BCA8
# 115 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth
# 116 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 117 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 118 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 119 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PlayerApproachGruntWest:: @ 820BCB3
# 120 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest
# 121 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 122 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	return
# 123 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 124 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntSouth: @ 820BCBE
# 125 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 126 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 127 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_fastest_left
# 128 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 129 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 130 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_PlayerApproachGruntWest: @ 820BCC2
# 131 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 132 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 133 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 134 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 135 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_fastest_left
# 136 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 137 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 138 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_Unused: @ 820BCC8
# 139 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 140 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 141 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 142 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 143 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 144 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 145 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 146 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 147 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 148 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 149 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 150 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_up
# 151 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 152 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 153 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 154 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieApproachPlayer: @ 820BCD6
# 155 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 156 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 157 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 158 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_ArchieEnter: @ 820BCD8
# 159 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 160 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 161 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 162 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 163 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 164 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 165 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 166 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 167 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 168 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 169 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 170 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntApproachToBattle: @ 820BCE2
# 171 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 172 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 173 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 174 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntEnter: @ 820BCE4
# 175 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 176 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 177 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_fastest_down
# 178 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 179 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 180 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_FirstGruntApproach: @ 820BCE8
# 181 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 182 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 183 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 184 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 185 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 186 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 187 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 188 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 189 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntDefeated: @ 820BCEF
# 190 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock_facing_direction
# 191 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_left
# 192 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	unlock_facing_direction
# 193 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 194 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 195 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntEnter: @ 820BCF3
# 196 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 197 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 198 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 199 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_SecondGruntApproach: @ 820BCF5
# 200 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 201 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 202 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 203 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_down
# 204 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 205 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 206 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 207 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_right
# 208 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 209 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 210 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Movement_GruntMoveForArchie: @ 820BCFE
# 211 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 212 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 213 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 214 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 215 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 216 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 217 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 218 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_16
# 219 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	delay_8
# 220 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_fast_down
# 221 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	walk_in_place_fastest_up
# 222 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	step_end
# 223 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 224 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample1:: @ 820BD0A
# 225 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1, MSGBOX_SIGN
# 226 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 227 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 228 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_WaterQualitySample2:: @ 820BD13
# 229 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2, MSGBOX_SIGN
# 230 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 231 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 232 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_PressureExperiment:: @ 820BD1C
# 233 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_PressureExperiment, MSGBOX_SIGN
# 234 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 235 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 236 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_HoennModel:: @ 820BD25
# 237 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_HoennModel, MSGBOX_SIGN
# 238 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 239 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 240 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_DeepSeawaterDisplay:: @ 820BD2E
# 241 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay, MSGBOX_SIGN
# 242 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 243 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 244 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SurfaceSeawaterDisplay:: @ 820BD37
# 245 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay, MSGBOX_SIGN
# 246 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 247 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 248 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSTidalReplica:: @ 820BD40
# 249 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica, MSGBOX_SIGN
# 250 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 251 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 252 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmarineReplica:: @ 820BD49
# 253 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica, MSGBOX_SIGN
# 254 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 255 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 256 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SubmersibleReplica:: @ 820BD52
# 257 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica, MSGBOX_SIGN
# 258 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 259 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 260 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_SSAnneReplica:: @ 820BD5B
# 261 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica, MSGBOX_SIGN
# 262 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 263 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 264 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron1:: @ 820BD64
# 265 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip, MSGBOX_NPC
# 266 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 267 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 268 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron2:: @ 820BD6D
# 269 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum, MSGBOX_NPC
# 270 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 271 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 272 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_EventScript_MuseumPatron3:: @ 820BD76
# 273 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	lock
# 274 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	faceplayer
# 275 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	msgbox SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine, MSGBOX_DEFAULT
# 276 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	closemessage
# 277 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 278 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	waitmovement 0
# 279 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	release
# 280 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	end
# 281 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 282 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ThankYouForTheParts: @ 820BD8D
# 283 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Yes? If you're looking for Stern,\n"
# 284 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "that would be me.\p"
# 285 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah! Those must be the parts I ordered\n"
# 286 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "from Mr. Stone of Devon.\p"
# 287 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thank you! That's great!\n"
# 288 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We can prepare for our expedition now.$"
# 289 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 290 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WellTakeThoseParts: @ 820BE40
# 291 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Hehehe, hold it!\n"
# 292 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We'll take those parts!$"
# 293 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 294 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternWhoAreYou: @ 820BE69
# 295 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Capt. Stern: Wh-what?\n"
# 296 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Who are you people?$"
# 297 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 298 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WereTeamAqua: @ 820BE93
# 299 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We're Team Aqua!\p"
# 300 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Our Boss wants those parts!\n"
# 301 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Shut your yap and fork them over!$"
# 302 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 303 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt1Defeat: @ 820BEE2
# 304 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Awaaaah!\n"
# 305 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A kid beat me!$"
# 306 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 307 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_BossGoingToBeFurious: @ 820BEFA
# 308 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, man, what a disaster…\n"
# 309 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The Boss is going to be furious…$"
# 310 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 311 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_LetMeTakeCareOfThis: @ 820BF35
# 312 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Humph, sniveling wimp!\n"
# 313 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Let me take care of this!$"
# 314 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 315 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_Grunt2Defeat: @ 820BF66
# 316 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What?!\n"
# 317 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I lost, too!$"
# 318 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 319 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_MeddlingKid: @ 820BF7A
# 320 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Now what? If we don't get the parts,\n"
# 321 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "we're in for it!\p"
# 322 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Arrgh, I didn't count on being meddled\n"
# 323 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "with by some meddling kid!$"
# 324 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 325 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_CameToSeeWhatsTakingSoLong: @ 820BFF2
# 326 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I came to see what was taking so\n"
# 327 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "long to snatch some parts, and you\l"
# 328 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "simps are held up by a mere child?$"
# 329 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 330 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_ArchieWarning: @ 820C059
# 331 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We are Team Aqua,\n"
# 332 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "and we love the sea!\p"
# 333 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "And I am Team Aqua's leader,\n"
# 334 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Archie!\p"
# 335 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "What makes you interfere with us?\p"
# 336 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "…No! You can't be!\n"
# 337 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not one of Team Magma?\p"
# 338 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wait, that can't be right.\n"
# 339 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're not dressed for the part.\p"
# 340 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\n"
# 341 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "… … … … … …\p"
# 342 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Pokémon, people… All life depends on\n"
# 343 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the sea.\p"
# 344 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "So, Team Aqua is dedicated to\n"
# 345 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the expansion of the sea.\p"
# 346 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't you agree? What we are doing\n"
# 347 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "is a magnificent undertaking.\p"
# 348 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, fine…\n"
# 349 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "You're still too young to understand\l"
# 350 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "our noble objective.\p"
# 351 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "But, I warn you, don't even consider\n"
# 352 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "interfering with our plans again.\p"
# 353 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The consequences will cost you\n"
# 354 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "dearly!\p"
# 355 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "And don't you forget it!$"
# 356 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 357 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternThankYouForSavingUs: @ 820C2BE
# 358 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Capt. Stern: You're…\n"
# 359 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Ah, okay, you're {PLAYER}{KUN}…\p"
# 360 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Anyway, that was a tense situation!\n"
# 361 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thank you for saving us!\p"
# 362 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Oh, yes, I almost forgot that you\n"
# 363 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "even brought the parts from Devon!$"
# 364 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 365 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SternIveGotToGo: @ 820C36C
# 366 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Capt. Stern: Whoops!\n"
# 367 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "There's no time to lose!\p"
# 368 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "We have to set out on our ocean-floor\n"
# 369 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "expedition really soon.\p"
# 370 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Thanks again, but now I've got\n"
# 371 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "to go!\p"
# 372 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Feel free to wander around and check\n"
# 373 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "out our facilities, though.$"
# 374 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 375 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_RemindsMeOfAbandonedShip: @ 820C43F
# 376 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I saw a model of a ship here.\p"
# 377 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It reminded me of the Abandoned Ship\n"
# 378 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "near Dewford Town…$"
# 379 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 380 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DontRunInMuseum: @ 820C495
# 381 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Don't you dare run around inside\n"
# 382 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the Museum!$"
# 383 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 384 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WantToRideSubmarine: @ 820C4C2
# 385 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Wow, the submarine's awesome!\n"
# 386 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "I want to go for a ride!$"
# 387 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 388 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample1: @ 820C4F9
# 389 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Water Quality Sample 1,” the\n"
# 390 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 391 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "The sea is all connected, but the\n"
# 392 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "water seems to differ by region.$"
# 393 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 394 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_WaterQualitySample2: @ 820C566
# 395 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Water Quality Sample 2,” the\n"
# 396 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "label says.\p"
# 397 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Does the saltiness of seawater differ\n"
# 398 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "by region, too?$"
# 399 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 400 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_PressureExperiment: @ 820C5C6
# 401 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "A rubber ball is expanding and\n"
# 402 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "shrinking.\p"
# 403 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In the sea, the weight of water itself\n"
# 404 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "exerts pressure.\p"
# 405 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“In shallow water, the pressure is not\n"
# 406 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "very heavy.\p"
# 407 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“However, in extremely deep water,\n"
# 408 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "the pressure can reach even tens of\l"
# 409 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "thousands of tons on a small area.”$"
# 410 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 411 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_HoennModel: @ 820C6C7
# 412 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Model of Hoenn Region”\p"
# 413 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a miniature diorama of the\n"
# 414 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Hoenn region.\p"
# 415 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "Where is Littleroot Town on this?$"
# 416 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 417 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_DeepSeawaterDisplay: @ 820C72F
# 418 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 419 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Near the bottom of the sea, water\n"
# 420 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "flows due to differences in such\l"
# 421 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "factors as temperature and salinity.”$"
# 422 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 423 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SurfaceSeawaterDisplay: @ 820C7C1
# 424 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "It's a display on the flow of seawater.\p"
# 425 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Toward the surface, seawater flows\n"
# 426 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "as currents driven by the winds.”$"
# 427 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 428 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSTidalReplica: @ 820C82F
# 429 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“The Ferry S.S. Tidal\p"
# 430 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A scale replica of the ship under\n"
# 431 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "construction at Stern's Shipyard.”$"
# 432 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 433 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SubmarineReplica: @ 820C88B
# 434 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Submarine Explorer 1\p"
# 435 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the high-performance\n"
# 436 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "ocean floor exploration submarine.”$"
# 437 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 438 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SumbersibleReplica: @ 820C8E8
# 439 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“Submersible Pod\p"
# 440 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of a compact, unmanned\n"
# 441 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "pod for seafloor exploration.”$"
# 442 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"

# 443 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
SlateportCity_OceanicMuseum_2F_Text_SSAnneReplica: @ 820C93A
# 444 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“S.S. Anne\p"
# 445 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "“A replica of the luxury liner that\n"
# 446 "data/maps/SlateportCity_OceanicMuseum_2F/scripts.pory"
	.string "circles the globe.”$"
