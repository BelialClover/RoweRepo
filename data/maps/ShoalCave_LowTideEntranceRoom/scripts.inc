# 1 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 2 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_MapScripts:: @ 8236DBA
# 3 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ShoalCave_LowTideEntranceRoom_OnTransition
# 4 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	.byte 0
# 5 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 6 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_OnTransition: @ 8236DC0
# 7 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setflag FLAG_VISITED_ROUTE125
# 8 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	//special UpdateShoalTideFlag
# 9 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	//goto_if_set FLAG_SYS_SHOAL_TIDE, ShoalCave_LowTideEntranceRoom_EventScript_SetHighTide
# 10 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto ShoalCave_LowTideEntranceRoom_EventScript_SetLowTide
# 11 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 12 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_SetHighTide:: @ 8236DD1
# 13 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	//setmaplayoutindex LAYOUT_SHOAL_CAVE_HIGH_TIDE_ENTRANCE_ROOM
# 14 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 15 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 16 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_SetLowTide:: @ 8236DD5
# 17 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	//setmaplayoutindex LAYOUT_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM
# 18 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 19 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	
# 20 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_Text_ShellBell: @ 822056D
# 21 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "I used to make Shell Bells before\n"
# 22 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "this cave became even colder after a\l"
# 23 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "strange bird Pokémon made its nest here\l"
# 24 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "and everything became colder.\p"
# 25 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "Since there are no more Shoal Salts or\n"
# 26 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "Shells I only have one Shell Bell left,\l"
# 27 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "I want you to take it, Here you go!$"
# 28 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	
# 29 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_Text_Slowbroite: @ 822056D
# 30 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "I found this strange stone further into\n"
# 31 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "this cave, it is really heavy for my\l"
# 32 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "old bones to carry so please take it.$"
# 33 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	
# 34 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_Text_Good_Care: @ 822056D
# 35 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "Please take good care of it!$"
# 36 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	
# 37 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_Text_I_May: @ 822056D
# 38 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	.string "Please take good care of it!$"
# 39 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	
# 40 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 41 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
@ If the bag is full, check if a slot will be freed when 4 Shoal Salt or Shells are given
# 42 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreed:: @ 8236E69
# 43 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SALT, 5
# 44 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 45 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreedShells
# 46 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	return
# 47 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 48 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_CheckSpaceWillBeFreedShells:: @ 8236E7A
# 49 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SHELL, 5
# 50 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 51 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_NoSpaceWillBeFreed
# 52 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	return
# 53 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 54 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_NoSpaceWillBeFreed:: @ 8236E8B
# 55 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setvar VAR_RESULT, 2
# 56 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	return
# 57 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 58 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_NoRoomForShellBell:: @ 8236E91
# 59 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_NoSpaceInYourBag, MSGBOX_DEFAULT
# 60 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 61 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 62 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 63 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_NotEnoughShoalSaltOrShells:: @ 8236E9B
# 64 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SALT, 1
# 65 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 66 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_HasSomeShoalSaltOrShell
# 67 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	checkitem ITEM_SHOAL_SHELL, 1
# 68 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
# 69 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_eq ShoalCave_LowTideEntranceRoom_EventScript_HasSomeShoalSaltOrShell
# 70 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_AreYouPlanningOnGoingInThere, MSGBOX_DEFAULT
# 71 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 72 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 73 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 74 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_HasSomeShoalSaltOrShell:: @ 8236EC5
# 75 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	call_if_unset FLAG_GOT_SLOWBRO_MEGA_STONE, ShoalCave_LowTideEntranceRoom_EventScript_HasSomeShoalSaltOrShell_Megastone
# 76 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_BringMe4ShoalSaltAndShells, MSGBOX_DEFAULT
# 77 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 78 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 79 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	
# 80 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_HasSomeShoalSaltOrShell_Megastone::
# 81 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_AreYouPlanningOnGoingInThere, MSGBOX_DEFAULT
# 82 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 83 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 84 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 85 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_DeclineShellBell:: @ 8236ECF
# 86 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	call_if_unset FLAG_GOT_SLOWBRO_MEGA_STONE, ShoalCave_LowTideEntranceRoom_EventScript_DeclineMegaStone
# 87 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_WantedToMakeShellBell, MSGBOX_DEFAULT
# 88 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 89 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 90 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	
# 91 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_DeclineMegaStone::
# 92 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_WantedToGiveSlowbroite, MSGBOX_DEFAULT
# 93 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
# 94 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	end
# 95 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"

# 96 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
ShoalCave_LowTideEntranceRoom_EventScript_ResetShoalItems:: @ 8236ED9
# 97 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_1
# 98 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_2
# 99 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_3
# 100 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SALT_4
# 101 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_1
# 102 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_2
# 103 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_3
# 104 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_RECEIVED_SHOAL_SHELL_4
# 105 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	clearflag FLAG_SYS_SHOAL_ITEM
# 106 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	return

ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert::
# 110 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	lock
# 111 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	faceplayer
# 112 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_set FLAG_TEMP_1, ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_2
# 115 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_unset FLAG_GOT_SLOWBRO_MEGA_STONE, ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_6
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_5:
# 122 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SHELL_BELL, ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_4
ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_1:
# 129 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	release
	end

ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_2:
# 113 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_Good_Care, MSGBOX_DEFAULT
	goto ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_1

ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_3:
# 116 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_Slowbroite, MSGBOX_DEFAULT
# 117 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	giveitem ITEM_SLOWBRONITE
# 118 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setflag FLAG_GOT_SLOWBRO_MEGA_STONE
# 119 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_Good_Care, MSGBOX_DEFAULT
# 120 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setflag FLAG_TEMP_1
	goto ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_1

ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_4:
# 123 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_ShellBell, MSGBOX_DEFAULT
# 124 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	giveitem ITEM_SHELL_BELL
# 125 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setflag FLAG_RECEIVED_SHELL_BELL
# 126 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	setflag FLAG_TEMP_1
# 127 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	msgbox ShoalCave_LowTideEntranceRoom_Text_Good_Care, MSGBOX_DEFAULT
	goto ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_1

ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_6:
# 115 "data/maps/ShoalCave_LowTideEntranceRoom/scripts.pory"
	compare VAR_NUM_BADGES, 11
	goto_if_ge ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_3
	goto ShoalCave_LowTideEntranceRoom_EventScript_ShellBellExpert_5

