# 1 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 2 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_SCIENTIST_1, 1
# 3 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_SCIENTIST_2, 2
# 4 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_SAILOR, 3
# 5 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_OLD_MAN, 4
# 6 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_WOMAN, 5
# 7 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
.set LOCALID_STAIR_GRUNT, 9
# 8 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 9 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_MapScripts:: @ 8222F41
# 10 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MossdeepCity_SpaceCenter_1F_OnLoad
# 11 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_SpaceCenter_1F_OnTransition
# 12 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.byte 0
# 13 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 14 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnTransition: @ 8222F4C
# 15 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 16 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma
# 17 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 18 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 19 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveObjectsForTeamMagma:: @ 8222F58
# 20 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SAILOR, 1, 9
# 21 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SAILOR, MOVEMENT_TYPE_FACE_RIGHT
# 22 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_WOMAN, 0, 8
# 23 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_WOMAN, MOVEMENT_TYPE_FACE_RIGHT
# 24 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_OLD_MAN, 1, 6
# 25 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_OLD_MAN, MOVEMENT_TYPE_FACE_RIGHT
# 26 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST_1, 3, 4
# 27 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST_1, MOVEMENT_TYPE_FACE_RIGHT
# 28 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_SCIENTIST_2, MOVEMENT_TYPE_FACE_RIGHT
# 29 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 1
# 30 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardLeft
# 31 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 2
# 32 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardDown
# 33 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 3
# 34 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardRight
# 35 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 36 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 37 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardLeft:: @ 8222FAA
# 38 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_STAIR_GRUNT, 12, 2
# 39 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 40 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 41 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardDown:: @ 8222FB2
# 42 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_STAIR_GRUNT, 13, 3
# 43 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 44 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 45 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ Functionally unused. See comment on MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast
# 46 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveStairGuardRight:: @ 8222FBA
# 47 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_STAIR_GRUNT, 14, 2
# 48 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 49 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 50 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_OnLoad: @ 8222FC2
# 51 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_MOSSDEEP_CITY_STATE, 2
# 52 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_le MossdeepCity_SpaceCenter_1F_EventScript_SetMagmaNote
# 53 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 54 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 55 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SetMagmaNote:: @ 8222FCE
# 56 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setmetatile 2, 5, METATILE_Facility_DataPad, 1
# 57 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 58 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 59 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounter:: @ 8222FD8
# 60 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 61 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 62 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	dotimebasedevents
# 63 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWeekCount
# 64 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	buffernumberstring 0, VAR_RESULT
# 65 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
# 66 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_eq MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYet
# 67 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
# 68 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_ge MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumber
# 69 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 70 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 71 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 72 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 73 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 74 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 75 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYet:: @ 8223012
# 76 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent, MSGBOX_DEFAULT
# 77 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 78 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 79 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumber:: @ 822301B
# 80 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber, MSGBOX_DEFAULT
# 81 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 82 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 83 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_RocketLaunchCounterMagma:: @ 8223024
# 84 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	dotimebasedevents
# 85 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetWeekCount
# 86 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	buffernumberstring 0, VAR_RESULT
# 87 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
# 88 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_eq MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYetMagma
# 89 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
# 90 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	call_if_ge MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumberMagma
# 91 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 92 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestRight
# 93 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 94 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 95 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 96 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 97 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_NoLaunchesYetMagma:: @ 8223051
# 98 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent, MSGBOX_DEFAULT
# 99 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 100 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 101 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ShowLaunchNumberMagma:: @ 822305A
# 102 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber, MSGBOX_DEFAULT
# 103 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	return
# 104 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 105 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Scientist:: @ 8223063
# 106 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 107 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 108 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection, MSGBOX_DEFAULT
# 109 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 110 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 111 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 112 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_ScientistMagma:: @ 822307A
# 113 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter, MSGBOX_DEFAULT
# 114 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestRight
# 115 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 116 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 117 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 118 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 119 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneMan:: @ 822308E
# 120 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 121 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 122 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStone
# 123 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt, MSGBOX_DEFAULT
# 124 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	giveitem ITEM_SUN_STONE
# 125 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 126 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 127 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
# 128 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
# 129 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 130 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 131 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 132 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStone:: @ 82230D0
# 133 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers, MSGBOX_DEFAULT
# 134 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 135 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 136 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 137 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_SunStoneManMagma:: @ 82230DA
# 138 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_SUN_STONE_MOSSDEEP, MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStoneMagma
# 139 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis, MSGBOX_DEFAULT
# 140 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	giveitem ITEM_SUN_STONE
# 141 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 142 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 143 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_SUN_STONE_MOSSDEEP
# 144 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
# 145 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestRight
# 146 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 147 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 148 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 149 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 150 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_GaveSunStoneMagma:: @ 8223119
# 151 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma, MSGBOX_DEFAULT
# 152 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestRight
# 153 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 154 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 155 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 156 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 157 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Woman:: @ 822312D
# 158 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 159 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 160 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace, MSGBOX_DEFAULT
# 161 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 162 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 163 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 164 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_WomanNormal:: @ 8223154
# 165 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 166 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 167 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace, MSGBOX_DEFAULT
# 168 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 169 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 170 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 171 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_WomanMagma:: @ 822315E
# 172 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma, MSGBOX_DEFAULT
# 173 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 174 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 175 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 176 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldMan:: @ 8223168
# 177 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 178 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 179 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind, MSGBOX_DEFAULT
# 180 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 181 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 182 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 183 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 184 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 185 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 186 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldManNormal:: @ 822318F
# 187 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 188 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 189 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind, MSGBOX_DEFAULT
# 190 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 191 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 192 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 193 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 194 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 195 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 196 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 197 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_OldManMagma:: @ 82231A4
# 198 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream, MSGBOX_DEFAULT
# 199 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	closemessage
# 200 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 201 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 202 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 203 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 204 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 205 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Steven:: @ 82231B9
# 206 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 207 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 208 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel, MSGBOX_DEFAULT
# 209 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 210 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 211 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 212 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 213 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 214 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MagmaNote:: @ 82231CF
# 215 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lockall
# 216 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice, MSGBOX_DEFAULT
# 217 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	releaseall
# 218 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 219 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 220 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt3:: @ 82231DA
# 221 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_3, MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat
# 222 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 223 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 224 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 225 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt1:: @ 82231F1
# 226 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_1, MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat
# 227 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 228 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 229 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 230 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt4:: @ 8223208
# 231 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_4, MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro, MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat
# 232 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 233 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 234 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 235 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2:: @ 822321F
# 236 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock
# 237 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	faceplayer
# 238 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F, MossdeepCity_SpaceCenter_1F_EventScript_Grunt2Defeated
# 239 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro, MSGBOX_DEFAULT
# 240 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_SPACE_CENTER_2, MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat
# 241 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setflag FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F
# 242 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	copyobjectxytoperm LOCALID_STAIR_GRUNT
# 243 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	switch VAR_FACING
# 244 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsWest
# 245 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	case DIR_WEST, MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast  @ BUG: This was meant to be case DIR_EAST
# 246 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_STAIR_GRUNT, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairs
# 247 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 248 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 2
# 249 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 250 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 251 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 252 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_Grunt2Defeated:: @ 822326E
# 253 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	msgbox MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle, MSGBOX_DEFAULT
# 254 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 255 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 256 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 257 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsWest:: @ 8223278
# 258 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_STAIR_GRUNT, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsWest
# 259 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 260 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 1
# 261 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 262 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 263 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 264 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ Functionally unused by mistake. The movement is handled anyway after the switch (see above)
# 265 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ This also means VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE can never be 3
# 266 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_EventScript_MoveGruntFromStairsEast:: @ 8223289
# 267 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	applymovement LOCALID_STAIR_GRUNT, MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsEast
# 268 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	waitmovement 0
# 269 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	setvar VAR_MOSSDEEP_SPACE_CENTER_STAIR_GUARD_STATE, 3
# 270 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	release
# 271 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	end
# 272 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 273 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsWest: @ 822329A
# 274 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 275 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_left
# 276 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 277 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 278 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 279 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ Functionally unused. See above
# 280 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairsEast: @ 822329E
# 281 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 282 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_right
# 283 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 284 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 285 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 286 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
@ This was meant to only handle the player facing North, but by mistake(?) it also handles the player facing East
# 287 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Movement_MoveGruntFromStairs: @ 82232A2
# 288 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	face_left
# 289 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	lock_facing_direction
# 290 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	walk_right
# 291 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	unlock_facing_direction
# 292 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	step_end
# 293 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 294 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketLaunchImminent: @ 82232A7
# 295 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket's launch is imminent!$"
# 296 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 297 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_SuccessfulLaunchNumber: @ 82232C8
# 298 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket launched safely!\n"
# 299 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "That's successful launch no. {STR_VAR_1}!$"
# 300 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 301 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HaywireButRocketLaunchImminent: @ 8223305
# 302 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket's launch is imminent!$"
# 303 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 304 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HaywireButSuccessfulLaunchNumber: @ 822335E
# 305 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket launched safely!\n"
# 306 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "That's successful launch no. {STR_VAR_1}!$"
# 307 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 308 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketLaunchDemandsPerfection: @ 82233D3
# 309 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A rocket launch demands perfection.\n"
# 310 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Not even a 1% margin of error is allowed.\p"
# 311 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Even if it's 99% okay, the whole thing\n"
# 312 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "is useless if 1% happens to be no good.\p"
# 313 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Despite that, we never stop trying.\n"
# 314 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Why? It's a dream that never ends.$"
# 315 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 316 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaHaveSightsOnSpaceCenter: @ 82234B7
# 317 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A rocket launch demands perfection.\n"
# 318 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Not even a 1% margin of error is allowed.\p"
# 319 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Even if it's 99% okay, the whole thing\n"
# 320 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "is useless if 1% happens to be no good.\p"
# 321 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Despite that, we never stop trying.\n"
# 322 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Why? It's a dream that never ends.$"
# 323 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 324 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_FoundThisYouCanHaveIt: @ 8223540
# 325 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I was taking a stroll down the beach\n"
# 326 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "when I found this.\p"
# 327 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "It's not anything I need, so you can\n"
# 328 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "have it.$"
# 329 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 330 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_HoennFamousForMeteorShowers: @ 82235A6
# 331 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The Hoenn region has been famous for \n"
# 332 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "its meteor showers for a long time.$"
# 333 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 334 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis: @ 82235F0
# 335 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I was taking a stroll down the beach\n"
# 336 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "when I found this.\p"
# 337 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "It's not anything I need, so you can\n"
# 338 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "have it.$"
# 339 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 340 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_CantStrollOnBeachWithMagma: @ 8223664
# 341 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I always like to take strolls on the\n"
# 342 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "beach, sometimes I find some rare items.$"
# 343 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 344 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_DidPokemonComeFromSpace: @ 82236A6
# 345 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Some people claim that Pokémon came\n"
# 346 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "from space. Could it be true?$"
# 347 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 348 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_AquaShouldBeatMagma: @ 82236E8
# 349 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Some people claim that Pokémon came\n"
# 350 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "from space. Could it be true?$"
# 351 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 352 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_RocketsBoggleMyMind: @ 822375B
# 353 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A giant chunk of metal bursts through\n"
# 354 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the skies and flies into space…\p"
# 355 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "It boggles my mind!$"
# 356 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 357 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaWantsToSpoilMyDream: @ 82237B5
# 358 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "A giant chunk of metal bursts through\n"
# 359 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the skies and flies into space…\p"
# 360 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "It boggles my mind!$"
# 361 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 362 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_StevenMagmaCantBeAllowedToTakeFuel: @ 8223849
# 363 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Steven: {PLAYER}{KUN}, have you read that\n"
# 364 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "proclamation already?\p"
# 365 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Team Magma is coming after the rocket\n"
# 366 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "fuel on this island.\p"
# 367 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I don't know what they'd need it for,\n"
# 368 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "but they can't be allowed to take it.\p"
# 369 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I'll keep an eye on things for\n"
# 370 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "a while longer.\p"
# 371 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "In the meantime, why don't you go\n"
# 372 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "check out the town?$"
# 373 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 374 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt3Intro: @ 822396C
# 375 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "As promised, we've come for\n"
# 376 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the rocket fuel!$"
# 377 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 378 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt3Defeat: @ 8223999
# 379 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ran out of fuel…$"
# 380 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 381 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt3PostBattle: @ 82239AA
# 382 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Don't think you're on a roll just\n"
# 383 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "because you've beaten me!$"
# 384 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 385 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt1Intro: @ 82239E6
# 386 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We gave you fair warning!\n"
# 387 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "There's nothing sneaky about us!$"
# 388 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 389 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt1Defeat: @ 8223A21
# 390 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Grrr…\n"
# 391 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We should've used sneaky treachery…$"
# 392 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 393 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt1PostBattle: @ 8223A4B
# 394 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Okay, I get it already! The next time,\n"
# 395 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "we'll come unannounced.$"
# 396 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 397 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt4Intro: @ 8223A8A
# 398 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "The rocket fuel the Space Center has\n"
# 399 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "in storage--that's what we're after.\p"
# 400 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We mean to take every last bit of it!$"
# 401 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 402 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt4Defeat: @ 8223AFA
# 403 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Please, can you spare some fuel?\n"
# 404 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Even a chintzy cup will do!$"
# 405 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 406 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt4PostBattle: @ 8223B37
# 407 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "What are we going to do with\n"
# 408 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "the rocket fuel?\p"
# 409 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "How would I know?\n"
# 410 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ask our leader upstairs!$"
# 411 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 412 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2Intro: @ 8223B90
# 413 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Our leader said no one, but no one,\n"
# 414 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "gets past me!$"
# 415 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 416 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2Defeat: @ 8223BC2
# 417 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Ack! Ack! Aaack!$"
# 418 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 419 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_Grunt2PostBattle: @ 8223BD3
# 420 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "Please, tell our leader that\n"
# 421 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "I never abandoned my post.\l"
# 422 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "That I stayed to the bitter end…$"
# 423 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"

# 424 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
MossdeepCity_SpaceCenter_1F_Text_MagmaIntentToStealNotice: @ 8223C2C
# 425 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "This is…\n"
# 426 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "An intent-to-steal notice?\p"
# 427 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“To the staff of the Space Center:\n"
# 428 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "How are you? We are doing fine.\p"
# 429 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“We will soon visit you to take your\n"
# 430 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "rocket fuel.\p"
# 431 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“Please don't try to stop us.\n"
# 432 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "We will take the fuel no matter what.\p"
# 433 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "“Let there be more land!\n"
# 434 "data/maps/MossdeepCity_SpaceCenter_1F/scripts.pory"
	.string "                                          Team Magma”$"
