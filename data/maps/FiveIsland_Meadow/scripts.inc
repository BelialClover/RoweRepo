# 1 "data/maps/FiveIsland_Meadow/scripts.pory"

# 2 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_MapScripts:: @ 8168932
# 3 "data/maps/FiveIsland_Meadow/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_Meadow_OnLoad
# 4 "data/maps/FiveIsland_Meadow/scripts.pory"
	.byte 0
# 5 "data/maps/FiveIsland_Meadow/scripts.pory"

# 6 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_OnLoad:: @ 8168938
# 7 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
# 8 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 9 "data/maps/FiveIsland_Meadow/scripts.pory"

# 10 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_WarehouseDoor:: @ 8168942
# 11 "data/maps/FiveIsland_Meadow/scripts.pory"
	lockall
# 12 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen
# 13 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_LEARNED_YES_NAH_CHANSEY, FiveIsland_Meadow_EventScript_OpenWarehouseDoor
# 14 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded
# 15 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
# 16 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 17 "data/maps/FiveIsland_Meadow/scripts.pory"

# 18 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_OpenWarehouseDoor:: @ 816895F
# 19 "data/maps/FiveIsland_Meadow/scripts.pory"
	setflag FLAG_UNLOCKED_ROCKET_WAREHOUSE
# 20 "data/maps/FiveIsland_Meadow/scripts.pory"
	message FiveIsland_Meadow_Text_EnteredPasswordDoorOpened
# 21 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitmessage
# 22 "data/maps/FiveIsland_Meadow/scripts.pory"
	delay 60
# 23 "data/maps/FiveIsland_Meadow/scripts.pory"
	call FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
# 24 "data/maps/FiveIsland_Meadow/scripts.pory"
	special DrawWholeMapView
# 25 "data/maps/FiveIsland_Meadow/scripts.pory"
	playse SE_PIN
# 26 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitse
# 27 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
# 28 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 29 "data/maps/FiveIsland_Meadow/scripts.pory"

# 30 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen:: @ 8168979
# 31 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen
# 32 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
# 33 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 34 "data/maps/FiveIsland_Meadow/scripts.pory"

# 35 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked:: @ 8168983
# 36 "data/maps/FiveIsland_Meadow/scripts.pory"
	setmetatile 12, 21, METATILE_SeviiIslands45_RocketWarehouseDoor_Unlocked, 1
# 37 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 38 "data/maps/FiveIsland_Meadow/scripts.pory"

# 39 "data/maps/FiveIsland_Meadow/scripts.pory"
@ Unused
# 40 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_DoorNeedsTwoPasswords:: @ 818AB73
# 41 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "To open the door\n"
# 42 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "it seems you need 2 passwords$"
# 43 "data/maps/FiveIsland_Meadow/scripts.pory"

# 44 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded:: @ 818AB8E
# 45 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "{PLAYER} entered a password.\p"
# 46 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "“Goldeen need log.”\p"
# 47 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "… …  … …  … …\p"
# 48 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "Another password is needed to\n"
# 49 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "open the door…$"
# 50 "data/maps/FiveIsland_Meadow/scripts.pory"

# 51 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_EnteredPasswordDoorOpened:: @ 818ABF4
# 52 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "{PLAYER} entered two passwords.\p"
# 53 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "“Goldeen need log.”\n"
# 54 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "“Yes, nah, Chansey.”\p"
# 55 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "… …  … …  … …\p"
# 56 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "The Warehouse's door opened!$"
# 57 "data/maps/FiveIsland_Meadow/scripts.pory"

# 58 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen:: @ 818AC62
# 59 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "The Warehouse's door is already\n"
# 60 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "open.$"
# 61 "data/maps/FiveIsland_Meadow/scripts.pory"

# 62 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Rocket1Intro:: @ 818AC88
# 63 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "This area's strictly off-limits!\n"
# 64 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "Out, out!$"
# 65 "data/maps/FiveIsland_Meadow/scripts.pory"

# 66 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Rocket1Defeat:: @ 818ACB3
# 67 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "Is this for real?$"
# 68 "data/maps/FiveIsland_Meadow/scripts.pory"

# 69 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Rocket1PostBattle:: @ 818ACC5
# 70 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "You don't have any business here!\n"
# 71 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "Go home!$"
# 72 "data/maps/FiveIsland_Meadow/scripts.pory"

# 73 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Rocket2Intro:: @ 818ACF0
# 74 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "There's nothing past here except\n"
# 75 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "our Warehouse.\p"
# 76 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "So what brings you here?$"
# 77 "data/maps/FiveIsland_Meadow/scripts.pory"

# 78 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Rocket2Defeat:: @ 818AD39
# 79 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "That wasn't supposed to happen…$"
# 80 "data/maps/FiveIsland_Meadow/scripts.pory"

# 81 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Rocket2PostBattle:: @ 818AD59
# 82 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "You're wanting to know what's inside\n"
# 83 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "this Warehouse?\p"
# 84 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "It's better you didn't know.\n"
# 85 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "For your own sake, I mean.$"
# 86 "data/maps/FiveIsland_Meadow/scripts.pory"

# 87 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Rocket3Intro:: @ 818ADC6
# 88 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "You'd be wasting time even if you\n"
# 89 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "were to get by me.$"
# 90 "data/maps/FiveIsland_Meadow/scripts.pory"

# 91 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Rocket3Defeat:: @ 818ADFB
# 92 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "Oh, that makes me furious!$"
# 93 "data/maps/FiveIsland_Meadow/scripts.pory"

# 94 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Rocket3PostBattle:: @ 818AE16
# 95 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "You won't be able to get in without\n"
# 96 "data/maps/FiveIsland_Meadow/scripts.pory"
    .string "the passwords anyway.$"
