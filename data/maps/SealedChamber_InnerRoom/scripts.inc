# 1 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 2 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_MapScripts:: @ 82391F7
# 3 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	.byte 0
# 4 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 5 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleBackWall:: @ 82391F8
# 6 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 7 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemessage SealedChamber_InnerRoom_Braille_FirstWailordLastRelicanth
# 8 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitbuttonpress
# 9 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	closebraillemessage
# 10 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_set FLAG_REGI_DOORS_OPENED, SealedChamber_InnerRoom_EventScript_NoEffect
# 11 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	specialvar VAR_RESULT, CheckRelicanthWailord
# 12 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 13 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	goto_if_eq SealedChamber_InnerRoom_EventScript_NoEffect
# 14 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadeoutbgm 0
# 15 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_TRUCK_MOVE
# 16 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect1
# 17 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 18 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 19 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect2
# 20 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 21 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 22 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 23 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect2
# 24 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 25 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 26 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 27 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	special DoSealedChamberShakingEffect2
# 28 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitstate
# 29 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	playse SE_DOOR
# 30 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	delay 40
# 31 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	msgbox gText_DoorOpenedFarAway, MSGBOX_DEFAULT
# 32 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	closemessage
# 33 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	fadeinbgm 0
# 34 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	setflag FLAG_REGI_DOORS_OPENED
# 35 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 36 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 37 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 38 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_NoEffect:: @ 8239253
# 39 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 40 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 41 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 42 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart1:: @ 8239255
# 43 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 44 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemessage SealedChamber_InnerRoom_Braille_InThisCaveWeHaveLived
# 45 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitbuttonpress
# 46 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	closebraillemessage
# 47 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 48 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 49 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 50 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart2:: @ 823925F
# 51 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 52 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemessage SealedChamber_InnerRoom_Braille_WeOweAllToThePokemon
# 53 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitbuttonpress
# 54 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	closebraillemessage
# 55 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 56 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 57 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 58 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart3:: @ 8239269
# 59 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 60 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemessage SealedChamber_InnerRoom_Braille_ButWeSealedThePokemonAway
# 61 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitbuttonpress
# 62 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	closebraillemessage
# 63 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 64 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 65 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 66 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart4:: @ 8239273
# 67 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 68 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemessage SealedChamber_InnerRoom_Braille_WeFearedIt
# 69 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitbuttonpress
# 70 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	closebraillemessage
# 71 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 72 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 73 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 74 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart5:: @ 823927D
# 75 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 76 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemessage SealedChamber_InnerRoom_Braille_ThoseWithCourageHope
# 77 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitbuttonpress
# 78 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	closebraillemessage
# 79 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 80 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
# 81 "data/maps/SealedChamber_InnerRoom/scripts.pory"

# 82 "data/maps/SealedChamber_InnerRoom/scripts.pory"
SealedChamber_InnerRoom_EventScript_BrailleStoryPart6:: @ 8239287
# 83 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	lockall
# 84 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	braillemessage SealedChamber_InnerRoom_Braille_OpenDoorEternalPokemonWaits
# 85 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	waitbuttonpress
# 86 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	closebraillemessage
# 87 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	releaseall
# 88 "data/maps/SealedChamber_InnerRoom/scripts.pory"
	end
