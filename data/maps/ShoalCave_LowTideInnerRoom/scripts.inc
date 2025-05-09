# 1 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 2 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_MapScripts:: @ 8236EF5
# 3 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ShoalCave_LowTideInnerRoom_OnLoad
# 4 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	//map_script MAP_SCRIPT_ON_TRANSITION, ShoalCave_LowTideInnerRoom_OnTransition
# 5 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	.byte 0
# 6 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 7 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_OnTransition: @ 8236F00
# 8 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	//goto_if_set FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideInnerRoom_EventScript_SetHighTide
# 9 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	//goto ShoalCave_LowTideInnerRoom_EventScript_SetLowTide
# 10 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 11 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetHighTide:: @ 8236F0E
# 12 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	//setmaplayoutindex LAYOUT_SHOAL_CAVE_HIGH_TIDE_INNER_ROOM
# 13 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 14 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 15 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetLowTide:: @ 8236F12
# 16 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	//setmaplayoutindex LAYOUT_SHOAL_CAVE_LOW_TIDE_INNER_ROOM
# 17 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 18 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 19 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_OnLoad: @ 8236F16
# 20 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, ShoalCave_LowTideInnerRoom_EventScript_OpenArticunoCave
# 21 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	//call ShoalCave_LowTideInnerRoom_EventScript_OpenArticunoCave
# 22 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 23 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	
# 24 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_OpenArticunoCave:
# 25 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 17, 8, METATILE_SeafoamIslands_Normal_Tile, 0
# 26 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 17, 7, METATILE_SeafoamIslands_Escalator_Tile, 0
# 27 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	//setmetatile 21, 9, METATILE_SeafoamIslands_Ice_Rock, 0
# 28 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 29 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 30 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles:: @ 8236F1C
# 31 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_1, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2
# 32 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2
# 33 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 31, 8, METATILE_Cave_ShoalCave_DirtPile_Large, 1
# 34 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2
# 35 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 36 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 37 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles2:: @ 8236F3D
# 38 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_2, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3
# 39 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3
# 40 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 14, 26, METATILE_Cave_ShoalCave_DirtPile_Large, 1
# 41 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3
# 42 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 43 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 44 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles3:: @ 8236F5E
# 45 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_1, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles4
# 46 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 41, 20, METATILE_Cave_ShoalCave_BlueStone_Large, 1
# 47 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles4
# 48 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 49 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 50 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles4:: @ 8236F76
# 51 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_2, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles5
# 52 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 41, 10, METATILE_Cave_ShoalCave_BlueStone_Large, 1
# 53 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles5
# 54 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 55 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 56 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles5:: @ 8236F8E
# 57 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_3, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles6
# 58 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 6, 9, METATILE_Cave_ShoalCave_BlueStone_Large, 1
# 59 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles6
# 60 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 61 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 62 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatiles6:: @ 8236FA6
# 63 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_4, ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatilesEnd
# 64 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 16, 13, METATILE_Cave_ShoalCave_BlueStone_Large, 1
# 65 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	return
# 66 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 67 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_SetShoalItemMetatilesEnd:: @ 8236FB9
# 68 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	return
# 69 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 70 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell1:: @ 8236FBA
# 71 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 72 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_1, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
# 73 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SHELL
# 74 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 75 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 76 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 41, 20, METATILE_Cave_ShoalCave_BlueStone_Small, 0
# 77 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 78 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SHELL_1
# 79 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 80 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 81 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 82 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell:: @ 8236FEC
# 83 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoallShellNowNothing, MSGBOX_DEFAULT
# 84 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 85 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 86 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 87 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell2:: @ 8236FF6
# 88 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 89 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_2, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
# 90 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SHELL
# 91 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 92 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 93 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 41, 10, METATILE_Cave_ShoalCave_BlueStone_Small, 0
# 94 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 95 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SHELL_2
# 96 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 97 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 98 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 99 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell3:: @ 8237028
# 100 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 101 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_3, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
# 102 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SHELL
# 103 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 104 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 105 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 6, 9, METATILE_Cave_ShoalCave_BlueStone_Small, 0
# 106 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 107 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SHELL_3
# 108 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 109 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 110 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 111 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalShell4:: @ 823705A
# 112 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 113 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SHELL_4, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalShell
# 114 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SHELL
# 115 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 116 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 117 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 16, 13, METATILE_Cave_ShoalCave_BlueStone_Small, 0
# 118 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 119 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SHELL_4
# 120 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 121 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 122 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 123 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt1:: @ 823708C
# 124 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 125 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_1, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalSalt
# 126 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 127 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 128 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 129 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 31, 8, METATILE_Cave_ShoalCave_DirtPile_Small, 0
# 130 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 131 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_1
# 132 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 133 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 134 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 135 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalSalt:: @ 82370BE
# 136 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	msgbox ShoalCave_Text_WasShoalSaltNowNothing, MSGBOX_DEFAULT
# 137 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 138 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
# 139 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"

# 140 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
ShoalCave_LowTideInnerRoom_EventScript_ShoalSalt2:: @ 82370C8
# 141 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	lockall
# 142 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_set FLAG_RECEIVED_SHOAL_SALT_2, ShoalCave_LowTideInnerRoom_EventScript_ReceivedShoalSalt
# 143 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	giveitem ITEM_SHOAL_SALT
# 144 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	compare VAR_RESULT, FALSE
# 145 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 146 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setmetatile 14, 26, METATILE_Cave_ShoalCave_DirtPile_Small, 0
# 147 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	special DrawWholeMapView
# 148 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHOAL_SALT_2
# 149 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	releaseall
# 150 "data/maps/ShoalCave_LowTideInnerRoom/scripts.pory"
	end
