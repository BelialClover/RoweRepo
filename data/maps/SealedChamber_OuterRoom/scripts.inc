# 1 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 2 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_MapScripts:: @ 8239106
# 3 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SealedChamber_OuterRoom_OnResume
# 4 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SealedChamber_OuterRoom_OnTransition
# 5 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SealedChamber_OuterRoom_OnLoad
# 6 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	.byte 0
# 7 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 8 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_OnResume: @ 8239116
# 9 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setdivewarp MAP_UNDERWATER_SEALED_CHAMBER, 255, 12, 44
# 10 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setescapewarp MAP_UNDERWATER_SEALED_CHAMBER, 255, 12, 44
# 11 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 12 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 13 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_OnTransition: @ 8239127
# 14 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setflag FLAG_LANDMARK_SEALED_CHAMBER
# 15 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setflag FLAG_VISITED_ROUTE132
# 16 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setflag FLAG_VISITED_ROUTE133
# 17 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setflag FLAG_VISITED_ROUTE124
# 18 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 19 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 20 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_OnLoad: @ 823912B
# 21 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	call_if_unset FLAG_SYS_BRAILLE_DIG, SealedChamber_OuterRoom_EventScript_CloseInnerRoomEntrance
# 22 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 23 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 24 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_CloseInnerRoomEntrance:: @ 8239135
# 25 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 9, 1, METATILE_Cave_EntranceCover, 1
# 26 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 10, 1, METATILE_Cave_EntranceCover, 1
# 27 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 11, 1, METATILE_Cave_EntranceCover, 1
# 28 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 9, 2, METATILE_Cave_SealedChamberBraille_Mid, 1
# 29 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 10, 2, METATILE_Cave_SealedChamberBraille_Mid, 1
# 30 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	setmetatile 11, 2, METATILE_Cave_SealedChamberBraille_Mid, 1
# 31 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	return
# 32 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 33 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleABC:: @ 823916C
# 34 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 35 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemessage SealedChamber_OuterRoom_Braille_ABC
# 36 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	waitbuttonpress
# 37 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	closebraillemessage
# 38 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 39 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 40 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 41 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleGHI:: @ 8239176
# 42 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 43 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemessage SealedChamber_OuterRoom_Braille_GHI
# 44 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	waitbuttonpress
# 45 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	closebraillemessage
# 46 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 47 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 48 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 49 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleMNO:: @ 8239180
# 50 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 51 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemessage SealedChamber_OuterRoom_Braille_MNO
# 52 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	waitbuttonpress
# 53 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	closebraillemessage
# 54 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 55 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 56 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 57 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleTUV:: @ 823918A
# 58 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 59 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemessage SealedChamber_OuterRoom_Braille_TUV
# 60 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	waitbuttonpress
# 61 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	closebraillemessage
# 62 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 63 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 64 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 65 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleDEF:: @ 8239194
# 66 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 67 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemessage SealedChamber_OuterRoom_Braille_DEF
# 68 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	waitbuttonpress
# 69 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	closebraillemessage
# 70 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 71 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 72 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 73 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleJKL:: @ 823919E
# 74 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 75 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemessage SealedChamber_OuterRoom_Braille_JKL
# 76 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	waitbuttonpress
# 77 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	closebraillemessage
# 78 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 79 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 80 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 81 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BraillePQRS:: @ 82391A8
# 82 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 83 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemessage SealedChamber_OuterRoom_Braille_PQRS
# 84 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	waitbuttonpress
# 85 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	closebraillemessage
# 86 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 87 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 88 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 89 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BraillePeriod:: @ 82391B2
# 90 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 91 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemessage SealedChamber_OuterRoom_Braille_Period
# 92 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	waitbuttonpress
# 93 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	closebraillemessage
# 94 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 95 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 96 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 97 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleWXYZ:: @ 82391BC
# 98 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 99 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemessage SealedChamber_OuterRoom_Braille_WXYZ
# 100 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	waitbuttonpress
# 101 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	closebraillemessage
# 102 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 103 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 104 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 105 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleComma:: @ 82391C6
# 106 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 107 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemessage SealedChamber_OuterRoom_Braille_Comma
# 108 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	waitbuttonpress
# 109 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	closebraillemessage
# 110 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 111 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 112 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 113 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_InnerRoomEntranceWall:: @ 82391D0
# 114 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 115 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	goto_if_set FLAG_SYS_BRAILLE_DIG, SealedChamber_OuterRoom_EventScript_HoleInWall
# 116 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemessage SealedChamber_OuterRoom_Braille_DigHere
# 117 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	waitbuttonpress
# 118 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	closebraillemessage
# 119 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 120 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 121 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 122 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_HoleInWall:: @ 82391E3
# 123 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
# 124 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 125 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
# 126 "data/maps/SealedChamber_OuterRoom/scripts.pory"

# 127 "data/maps/SealedChamber_OuterRoom/scripts.pory"
SealedChamber_OuterRoom_EventScript_BrailleDigHere:: @ 82391ED
# 128 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	lockall
# 129 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	braillemessage SealedChamber_OuterRoom_Braille_DigHere
# 130 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	waitbuttonpress
# 131 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	closebraillemessage
# 132 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	releaseall
# 133 "data/maps/SealedChamber_OuterRoom/scripts.pory"
	end
