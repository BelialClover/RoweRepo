# 1 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
.set LOCALID_FOSSIL_SCIENTIST, 5
# 3 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 4 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_MapScripts:: @ 8211857
# 5 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
# 6 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.byte 0
# 7 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 8 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_OnTransition: @ 821185D
# 9 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
# 10 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 11 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 12 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 13 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_SetFossilReady:: @ 8211869
# 14 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_Porygon_Scientist
# 15 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 16 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 17 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 18 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist:: @ 821186F
# 19 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 20 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 21 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
# 22 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 23 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_DEFAULT
# 24 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 25 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 26 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 27 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_BallScientist:: @ 8211886
# 28 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 29 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 30 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
# 31 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 32 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls
# 33 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls, MSGBOX_DEFAULT
# 34 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 35 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 36 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 37 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls:: @ 82118A6
# 38 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls, MSGBOX_DEFAULT
# 39 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 40 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 41 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 42 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokenavScientist:: @ 82118B0
# 43 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 44 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 45 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
# 46 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 47 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_DevonCorp_2F_EventScript_HasPokenav
# 48 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_IMadePokenav, MSGBOX_DEFAULT
# 49 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 50 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 51 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 52 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_HasPokenav:: @ 82118D0
# 53 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav, MSGBOX_DEFAULT
# 54 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 55 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 56 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 57 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist:: @ 82118DA
# 58 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 59 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 60 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
# 61 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 62 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_DEFAULT
# 63 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 64 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 65 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 66 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
//Resurection Script
# 67 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilScientist:: @ 82118F1
# 68 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 69 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 70 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_DEFAULT
# 71 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 72 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
# 73 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 74 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	getpartysize
# 75 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 76 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_No_Space
# 77 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_WhatFossil
# 78 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 79 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 80 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_WhatFossil::
# 81 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox LilycoveCity_MoveDeletersHouse_Text_Chose_Well, MSGBOX_SIGN
# 82 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	scrollingmultichoice SCROLLING_SET_FOSSILS, 2, 3, 5, TRUE
# 83 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 84 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_Revive_Dome_Fossil
# 85 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, RustboroCity_DevonCorp_2F_EventScript_Revive_Helix_Fossil
# 86 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, RustboroCity_DevonCorp_2F_EventScript_Revive_Old_Amber_Mega
# 87 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 3, RustboroCity_DevonCorp_2F_EventScript_Revive_Root_Fossil
# 88 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 4, RustboroCity_DevonCorp_2F_EventScript_Revive_Claw_Fossil
# 89 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 5, RustboroCity_DevonCorp_2F_EventScript_Revive_Skull_Fossil
# 90 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 6, RustboroCity_DevonCorp_2F_EventScript_Revive_Armor_Fossil
# 91 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 7, RustboroCity_DevonCorp_2F_EventScript_Revive_Cover_Fossil
# 92 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 8, RustboroCity_DevonCorp_2F_EventScript_Revive_Plume_Fossil
# 93 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 9, RustboroCity_DevonCorp_2F_EventScript_Revive_Jaw_Fossil
# 94 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 10, RustboroCity_DevonCorp_2F_EventScript_Revive_Sail_Fossil
# 95 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0x7F, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 96 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 97 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 98 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_No_Fossil::
# 99 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_No_Fossil, MSGBOX_DEFAULT
# 100 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 101 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 102 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 103 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_No_Space::
# 104 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_TooManyPokemon, MSGBOX_DEFAULT
# 105 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 106 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 107 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 108 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Revive_Dome_Fossil::
# 109 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_DOME_FOSSIL, 1
# 110 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
# 111 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_No_Fossil
# 112 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname 0, ITEM_DOME_FOSSIL
# 113 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 1
# 115 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_HEAL
# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_DOME_FOSSIL
# 118 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_KABUTO
# 119 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 120 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 0
# 121 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 30
# 122 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 123 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 124 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 125 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_KABUTO, 10, ITEM_NONE
# 126 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 127 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_More_Fossils, MSGBOX_DEFAULT
# 128 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 129 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 130 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Revive_Helix_Fossil::
# 132 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_HELIX_FOSSIL, 1
# 133 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
# 134 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_No_Fossil
# 135 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname 0, ITEM_HELIX_FOSSIL
# 136 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 137 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 1
# 138 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_HEAL
# 139 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 140 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_HELIX_FOSSIL
# 141 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_OMANYTE
# 142 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 143 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 0
# 144 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 30
# 145 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 146 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 147 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 148 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_OMANYTE, 10, ITEM_NONE
# 149 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 150 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_More_Fossils, MSGBOX_DEFAULT
# 151 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 152 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 153 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 154 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Revive_Old_Amber::
# 155 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_OLD_AMBER, 1
# 156 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
# 157 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_No_Fossil
# 158 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname 0, ITEM_OLD_AMBER
# 159 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 160 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 1
# 161 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_HEAL
# 162 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 163 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_OLD_AMBER
# 164 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_AERODACTYL
# 165 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 166 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 0
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 30
# 168 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 169 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 170 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 171 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_AERODACTYL, 10, ITEM_NONE
# 172 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 173 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_More_Fossils, MSGBOX_DEFAULT
# 174 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 175 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 176 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 177 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Revive_Old_Amber_Mega::
# 178 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_unset FLAG_GOT_BADGE_11 RustboroCity_DevonCorp_2F_EventScript_Revive_Old_Amber
# 179 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_GOT_AERODACTYL_MEGA_STONE RustboroCity_DevonCorp_2F_EventScript_Revive_Old_Amber
# 180 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_OLD_AMBER, 1
# 181 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
# 182 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_No_Fossil
# 183 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname 0, ITEM_OLD_AMBER
# 184 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 185 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 1
# 186 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_HEAL
# 187 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 188 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_OLD_AMBER
# 189 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_AERODACTYL
# 190 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 191 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 0
# 192 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 30
# 193 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 194 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 195 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 196 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_AERODACTYL, 30, ITEM_AERODACTYLITE
# 197 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_GOT_AERODACTYL_MEGA_STONE
# 198 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 199 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_More_Fossils, MSGBOX_DEFAULT
# 200 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 201 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 202 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 203 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Revive_Root_Fossil::
# 204 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL, 1
# 205 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
# 206 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_No_Fossil
# 207 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname 0, ITEM_ROOT_FOSSIL
# 208 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 209 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 1
# 210 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_HEAL
# 211 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 212 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
# 213 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_LILEEP
# 214 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 215 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 0
# 216 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 30
# 217 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 218 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 219 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 220 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_LILEEP, 10, ITEM_NONE
# 221 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 222 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_More_Fossils, MSGBOX_DEFAULT
# 223 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 224 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 225 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 226 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Revive_Claw_Fossil::
# 227 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL, 1
# 228 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
# 229 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_No_Fossil
# 230 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname 0, ITEM_CLAW_FOSSIL
# 231 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 232 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 1
# 233 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_HEAL
# 234 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 235 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
# 236 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_ANORITH
# 237 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 238 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 0
# 239 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 30
# 240 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 241 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 242 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 243 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ANORITH, 10, ITEM_NONE
# 244 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 245 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_More_Fossils, MSGBOX_DEFAULT
# 246 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 247 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 248 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 249 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Revive_Skull_Fossil::
# 250 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_SKULL_FOSSIL, 1
# 251 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
# 252 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_No_Fossil
# 253 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname 0, ITEM_SKULL_FOSSIL
# 254 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 255 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 1
# 256 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_HEAL
# 257 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 258 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_SKULL_FOSSIL
# 259 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_CRANIDOS
# 260 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 261 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 0
# 262 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 30
# 263 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 264 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 265 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 266 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_CRANIDOS, 10, ITEM_NONE
# 267 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 268 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_More_Fossils, MSGBOX_DEFAULT
# 269 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 270 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 271 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 272 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Revive_Armor_Fossil::
# 273 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ARMOR_FOSSIL, 1
# 274 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
# 275 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_No_Fossil
# 276 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname 0, ITEM_ARMOR_FOSSIL
# 277 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 278 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 1
# 279 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_HEAL
# 280 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 281 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ARMOR_FOSSIL
# 282 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_SHIELDON
# 283 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 284 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 0
# 285 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 30
# 286 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 287 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 288 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 289 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_SHIELDON, 10, ITEM_NONE
# 290 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 291 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_More_Fossils, MSGBOX_DEFAULT
# 292 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 293 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 294 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 295 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Revive_Cover_Fossil::
# 296 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_COVER_FOSSIL, 1
# 297 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
# 298 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_No_Fossil
# 299 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname 0, ITEM_COVER_FOSSIL
# 300 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 301 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 1
# 302 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_HEAL
# 303 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 304 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_COVER_FOSSIL
# 305 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_TIRTOUGA
# 306 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 307 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 0
# 308 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 30
# 309 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 310 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 311 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 312 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_TIRTOUGA, 10, ITEM_NONE
# 313 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 314 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_More_Fossils, MSGBOX_DEFAULT
# 315 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 316 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 317 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 318 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Revive_Plume_Fossil::
# 319 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_PLUME_FOSSIL, 1
# 320 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
# 321 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_No_Fossil
# 322 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname 0, ITEM_PLUME_FOSSIL
# 323 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 324 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 1
# 325 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_HEAL
# 326 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 327 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_PLUME_FOSSIL
# 328 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_ARCHEN
# 329 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 330 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 0
# 331 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 30
# 332 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 333 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 334 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 335 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ARCHEN, 10, ITEM_NONE
# 336 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 337 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_More_Fossils, MSGBOX_DEFAULT
# 338 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 339 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 340 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 341 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Revive_Jaw_Fossil::
# 342 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_JAW_FOSSIL, 1
# 343 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
# 344 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_No_Fossil
# 345 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname 0, ITEM_JAW_FOSSIL
# 346 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 347 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 1
# 348 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_HEAL
# 349 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 350 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_JAW_FOSSIL
# 351 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_TYRUNT
# 352 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 353 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 0
# 354 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 30
# 355 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 356 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 357 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 358 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_TYRUNT, 10, ITEM_NONE
# 359 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 360 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_More_Fossils, MSGBOX_DEFAULT
# 361 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 362 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 363 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 364 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Revive_Sail_Fossil::
# 365 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_SAIL_FOSSIL, 1
# 366 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
# 367 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_No_Fossil
# 368 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname 0, ITEM_SAIL_FOSSIL
# 369 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 370 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 1
# 371 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_HEAL
# 372 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 373 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_SAIL_FOSSIL
# 374 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_AMAURA
# 375 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 376 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	fadescreen 0
# 377 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 30
# 378 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 379 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 380 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 381 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_AMAURA, 10, ITEM_NONE
# 382 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 383 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_More_Fossils, MSGBOX_DEFAULT
# 384 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 385 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 386 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 387 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
//
# 388 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 389 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Porygon_Scientist:
# 390 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 391 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 392 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_GOT_BADGE_11, RustboroCity_DevonCorp_2F_EventScript_Type_Null_Scientist
# 393 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_GOT_PORYGON, RustboroCity_DevonCorp_2F_EventScript_ReceivedPorygon
# 394 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_PorygonTypeNull, MSGBOX_YESNO
# 395 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
# 396 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_DeclinePorygon
# 397 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	getpartysize
# 398 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 399 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoRoomForThis
# 400 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_PORYGON
# 401 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 402 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 403 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_PORYGON, 10, ITEM_NONE
# 404 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_GOT_PORYGON
# 405 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 406 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_PorygonTypeNull_Accepted, MSGBOX_DEFAULT
# 407 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 408 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 409 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 410 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Type_Null_Scientist:
# 411 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 412 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 413 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_unset FLAG_GOT_PORYGON, RustboroCity_DevonCorp_2F_EventScript_Porygon_Scientist_2
# 414 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_GOT_TYPE_NULL, RustboroCity_DevonCorp_2F_EventScript_ReceivedPorygon
# 415 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_PorygonTypeNull, MSGBOX_YESNO
# 416 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
# 417 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_DeclinePorygon
# 418 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	getpartysize
# 419 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 420 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoRoomForThis
# 421 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_TYPE_NULL
# 422 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 423 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 424 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_TYPE_NULL, 25, ITEM_NONE
# 425 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_GOT_TYPE_NULL
# 426 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 427 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_PorygonTypeNull_Accepted, MSGBOX_DEFAULT
# 428 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 429 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 430 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 431 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedPorygon::
# 432 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
# 433 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 434 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 435 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 436 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DeclinePorygon::
# 437 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_PorygonTypeNull_Declined, MSGBOX_DEFAULT
# 438 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 439 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 440 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 441 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoRoomForThis::
# 442 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox Route117_PokemonDayCare_Text_NoRoomForThis, MSGBOX_DEFAULT
# 443 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 444 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 445 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 446 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Porygon_Scientist_2:
# 447 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_PorygonTypeNull, MSGBOX_YESNO
# 448 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
# 449 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_DeclinePorygon
# 450 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	getpartysize
# 451 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
# 452 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoRoomForThis
# 453 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_PORYGON
# 454 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 455 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 456 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_PORYGON, 10, ITEM_NONE
# 457 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_GOT_PORYGON
# 458 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 459 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_PorygonTypeNull_Accepted, MSGBOX_DEFAULT
# 460 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 461 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 462 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 463 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
//
# 464 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 465 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ This whole section has needless duplication and could be condensed considerably
# 466 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil:: @ 8211933
# 467 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 468 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 469 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 470 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 471 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 472 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 473 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 474 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
# 475 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 476 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL, 1
# 477 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
# 478 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 479 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 480 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 481 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 482 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil:: @ 8211974
# 483 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname 0, ITEM_ROOT_FOSSIL
# 484 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 485 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
# 486 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 487 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 1
# 488 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 489 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 490 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 491 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil:: @ 8211991
# 492 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 493 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 494 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 495 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 496 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 497 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 498 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 499 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
# 500 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 501 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL, 1
# 502 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, TRUE
# 503 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 504 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 505 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 506 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 507 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil:: @ 82119D2
# 508 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname 0, ITEM_CLAW_FOSSIL
# 509 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 510 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
# 511 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 512 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 2
# 513 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 514 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 515 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 516 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil:: @ 82119EF
# 517 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
# 518 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 519 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 520 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 521 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_StillRegenerating:: @ 82119F9
# 522 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime, MSGBOX_DEFAULT
# 523 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 524 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 525 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 526 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady:: @ 8211A03
# 527 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, 1
# 528 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_LileepReady
# 529 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, 2
# 530 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_AnorithReady
# 531 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 532 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 533 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_LileepReady:: @ 8211A1A
# 534 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_LILEEP
# 535 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 536 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep
# 537 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 538 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 539 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_AnorithReady:: @ 8211A2C
# 540 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_ANORITH
# 541 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 542 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith
# 543 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 544 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 545 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep:: @ 8211A3E
# 546 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LILEEP
# 547 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_LILEEP, 20, ITEM_NONE
# 548 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 0
# 549 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty
# 550 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 1
# 551 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC
# 552 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 553 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 554 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 555 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty:: @ 8211A6E
# 556 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 557 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 558 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
# 559 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 560 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 561 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 562 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 563 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 564 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 565 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC:: @ 8211A96
# 566 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 567 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 568 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
# 569 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 570 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 571 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 572 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 573 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 574 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC:: @ 8211AB9
# 575 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 576 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 577 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 578 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 579 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare:: @ 8211AC4
# 580 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_LILEEP
# 581 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 582 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 583 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 584 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 585 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 0, SPECIES_LILEEP
# 586 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 587 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 588 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep:: @ 8211AD7
# 589 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 590 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 591 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 592 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 593 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 594 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith:: @ 8211AE1
# 595 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ANORITH
# 596 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ANORITH, 20, ITEM_NONE
# 597 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 0
# 598 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty
# 599 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, 1
# 600 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC
# 601 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 602 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 603 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 604 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty:: @ 8211B11
# 605 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 606 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 607 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
# 608 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 609 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 610 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 611 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 612 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 613 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 614 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC:: @ 8211B39
# 615 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 616 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 617 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, NO
# 618 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 619 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 620 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 621 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 622 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 623 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC:: @ 8211B5C
# 624 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 625 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 626 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 627 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 628 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare:: @ 8211B67
# 629 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 1, SPECIES_ANORITH
# 630 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 631 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 632 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 633 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 634 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname 0, SPECIES_ANORITH
# 635 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 636 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 637 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith:: @ 8211B7A
# 638 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 639 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 640 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 641 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 642 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 643 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil:: @ 8211B84
# 644 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne
# 645 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 646 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	multichoice 17, 6, MULTI_FOSSIL, 0
# 647 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 648 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil
# 649 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil
# 650 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 651 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 652 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 653 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 654 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil:: @ 8211BC1
# 655 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 656 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 657 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 658 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil:: @ 8211BC7
# 659 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 660 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 661 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 662 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect:: @ 8211BCD
# 663 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 664 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 665 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 666 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist:: @ 8211BCF
# 667 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 668 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 669 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
# 670 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 671 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 6
# 672 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_ge RustboroCity_DevonCorp_2F_EventScript_WorkOnNext
# 673 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_DEFAULT
# 674 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 675 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 676 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 677 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_WorkOnNext:: @ 8211BF1
# 678 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
# 679 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 680 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 681 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 682 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon: @ 8211BFB
# 683 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We're developing a device for talking\n"
# 684 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "with Pokémon.\p"
# 685 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But we haven't had much success…$"
# 686 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 687 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls: @ 8211C50
# 688 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm developing new kinds of\n"
# 689 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Poké Balls…\p"
# 690 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But I haven't made much headway…$"
# 691 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 692 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls: @ 8211C99
# 693 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We finally made new kinds of\n"
# 694 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Poké Balls!\p"
# 695 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The Repeat Ball makes it easier to\n"
# 696 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "catch Pokémon you've caught before.\p"
# 697 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The Timer Ball gets better at catching\n"
# 698 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Pokémon the longer a battle runs.\p"
# 699 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Both are proudly developed by\n"
# 700 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the Devon Corporation.\p"
# 701 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Please give them a try!$"
# 702 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 703 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_IMadePokenav: @ 8211D9F
# 704 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I made the Pokénav!\p"
# 705 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "As an engineer, I feel blessed to have\n"
# 706 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "made something so great!$"
# 707 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 708 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav: @ 8211DF3
# 709 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, wow!\n"
# 710 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "That's a Pokénav!\p"
# 711 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "It came about as a result of our\n"
# 712 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "President's desire to learn about\l"
# 713 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the feelings of Pokémon.\p"
# 714 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like me to describe its\n"
# 715 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "features in detail?\p"
# 716 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "No, no. I think you'll find out just by\n"
# 717 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "trying the Pokénav out.$"
# 718 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 719 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams: @ 8211EE0
# 720 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a device that\n"
# 721 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "visually reproduces the dreams of\l"
# 722 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Pokémon…\p"
# 723 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 724 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 725 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils: @ 8211F48
# 726 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I've been trying to develop a device\n"
# 727 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "that resurrects Pokémon from fossils…\p"
# 728 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "And, it's working!$"
# 729 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 730 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife:
# 731 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to bring a Fossil\n"
# 732 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "back to life?\p"
# 733 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I can with my newly developed\n"
# 734 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Fossil Regenerator.$"
# 735 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 736 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_What_Fossil:
# 737 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "What Fossil would you like to\n"
# 738 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "revive?$"
# 739 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 740 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_No_Fossil:
# 741 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "It doesn't look like you\n"
# 742 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "have that fossil.$"
# 743 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 744 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_OhIsThatSo: @ 8212046
# 745 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, is that so?\p"
# 746 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Devon's technological expertise\n"
# 747 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is outstanding, I tell you.$"
# 748 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 749 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne: @ 8212092
# 750 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, now that's a surprise!\n"
# 751 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have not one, but two, fossils?\p"
# 752 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Unfortunately, my machine can only\n"
# 753 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "regenerate one Pokémon at a time.\p"
# 754 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to pick one of your\n"
# 755 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "fossils for regeneration?$"
# 756 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 757 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher: @ 8212153
# 758 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent!\n"
# 759 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Let's do this right away.\p"
# 760 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} handed the {STR_VAR_1} to\n"
# 761 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the Devon Researcher.$"
# 762 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 763 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime: @ 82121A2
# 764 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The Fossil Regenerator, which I made,\n"
# 765 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is incredible.\p"
# 766 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it has one drawback--it takes\n"
# 767 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "a long time to work.\p"
# 768 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "So, uh… How about you go for a stroll\n"
# 769 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "and look around for a while?$"
# 770 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 771 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife: @ 8212251
# 772 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Thanks for waiting!\p"
# 773 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Your fossilized Pokémon has been\n"
# 774 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "brought back to life!\p"
# 775 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The fossil was an ancient Pokémon.\n"
# 776 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{STR_VAR_2}, it was!$"
# 777 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 778 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher: @ 82122CB
# 779 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2} from\n"
# 780 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the Devon Researcher.$"
# 781 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 782 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_More_Fossils:
# 783 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "If you get more fossils, please\n"
# 784 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "come see me again!$"
# 785 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 786 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 787 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TooManyPokemon: @ 82122F5
# 788 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Uh-oh, you've got too many Pokémon.\n"
# 789 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have no room for another one.$"
# 790 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 791 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature: @ 8212338
# 792 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a new feature\n"
# 793 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "for the Pokénav…\p"
# 794 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 795 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 796 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext: @ 8212386
# 797 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Well, now what shall I work on\n"
# 798 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "developing next?\p"
# 799 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Our company allows us to make our\n"
# 800 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "inspirations into reality.\p"
# 801 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "One couldn't ask for a better\n"
# 802 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "environment as an engineer.$"
# 803 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 804 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_PorygonTypeNull:
# 805 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I Just developed a new Pokémon\n"
# 806 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "species using some available\p"
# 807 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "data our company had laying\n"
# 808 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "around, do you want it?$"
# 809 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 810 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_PorygonTypeNull_Declined:
# 811 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Thats a shame.\p"
# 812 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "It's really strong, you should\n"
# 813 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "give it a try.$"
# 814 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 815 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_PorygonTypeNull_Accepted:
# 816 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Please treat it with care.\n"
# 817 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "It certainly can grow\p"
# 818 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "stronger.$"
