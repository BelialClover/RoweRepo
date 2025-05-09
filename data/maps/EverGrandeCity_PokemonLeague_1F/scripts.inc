# 1 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 2 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
.set LOCALID_GUARD_1, 3
# 4 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
.set LOCALID_GUARD_2, 4
# 5 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 6 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_MapScripts:: @ 82295D2
# 7 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_PokemonLeague_1F_OnTransition
# 8 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	@map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 9 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.byte 0
# 10 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 11 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_OnTransition: @ 82295DD
# 12 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setrespawn HEAL_LOCATION_EVER_GRANDE_CITY_POKEMON_LEAGUE
# 13 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
# 14 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_unset FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor
# 15 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 17 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_GuardsBlockDoor:: @ 82295ED
# 18 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setobjectxyperm LOCALID_GUARD_1, 9, 2
# 19 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setobjectxyperm LOCALID_GUARD_2, 10, 2
# 20 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 21 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 22 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_Nurse:: @ 82295FC
# 23 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 24 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 25 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 26 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitbuttonpress
# 27 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 28 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 29 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 30 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_Clerk:: @ 822960A
# 31 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 32 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 33 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message gText_HowMayIServeYou
# 34 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 35 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	pokemart EverGrandeCity_PokemonLeague_Pokemart
# 36 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 37 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 38 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 39 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	
# 40 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_Power_Candy::
# 41 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lock
# 42 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	faceplayer
# 43 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_PowerCandy, MSGBOX_YESNO
# 44 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	compare VAR_RESULT, NO
# 45 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq EverGrandeCity_PokemonLeague_1F_EventScript_Power_Candy_Decline
# 46 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	checkmoney 9000, 0
# 47 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	compare VAR_RESULT, FALSE
# 48 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_eq EverGrandeCity_PokemonLeague_1F_EventScript_Power_Candy_no_Money
# 49 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	removemoney 9000, 0
# 50 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	giveitem ITEM_ABILITY_PATCH
# 51 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_PowerCandy_Bought, MSGBOX_DEFAULT
# 52 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 53 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 54 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	
# 55 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_Power_Candy_Decline::
# 56 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_PowerCandy_Decline, MSGBOX_DEFAULT
# 57 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 58 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 59 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	
# 60 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_Power_Candy_no_Money::
# 61 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_PowerCandy_no_Money, MSGBOX_DEFAULT
# 62 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 63 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 64 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	
# 65 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.align 2
# 66 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_Pokemart:
# 67 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 68 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 69 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 70 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 71 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 72 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_REVIVE
# 73 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 74 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 75 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 76 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_ETHER
# 77 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_ELIXIR
# 78 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_LURE
# 79 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_SUPER_LURE
# 80 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_MAX_LURE	
# 81 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_HEART_SCALE
# 82 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 83 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.2byte ITEM_NONE
# 84 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	release
# 85 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 86 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 87 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ The door guards only check for FLAG_BADGE06_GET because Winonas badge is the only one that can be skipped
# 88 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
@ Its assumed the player has the remaining badges
# 89 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_DoorGuard:: @ 8229636
# 90 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	lockall
# 91 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_set FLAG_ENTERED_ELITE_FOUR, EverGrandeCity_PokemonLeague_1F_EventScript_GoForth
# 92 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 93 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	compare VAR_TEMP_0, 11
# 94 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_ge EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight
# 95 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	compare VAR_TEMP_0, 8
# 96 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	call_if_le EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft
# 97 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges
# 98 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 99 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 120
# 100 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	goto_if_unset FLAG_GOT_BADGE_16, EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges
# 101 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 102 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_GUARD_1, EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay
# 103 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement LOCALID_GUARD_2, EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay
# 104 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 105 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	delay 10
# 106 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 107 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	message EverGrandeCity_PokemonLeague_1F_Text_GoForth
# 108 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmessage
# 109 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitfanfare
# 110 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 111 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_GUARD_1
# 112 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	copyobjectxytoperm LOCALID_GUARD_2
# 113 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	setflag FLAG_ENTERED_ELITE_FOUR
# 114 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 115 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 116 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 117 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromRight:: @ 8229698
# 118 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight
# 119 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 120 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 121 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 122 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_PlayerMoveToFrontFromLeft:: @ 82296A3
# 123 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft
# 124 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 125 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	return
# 126 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 127 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_NotAllBadges:: @ 82296AE
# 128 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	playse SE_FAILURE
# 129 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges, MSGBOX_DEFAULT
# 130 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 131 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 132 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 133 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_EventScript_GoForth:: @ 82296BB
# 134 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 135 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 136 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	msgbox EverGrandeCity_PokemonLeague_1F_Text_GoForth, MSGBOX_DEFAULT
# 137 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	closemessage
# 138 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 139 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	waitmovement 0
# 140 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	releaseall
# 141 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	end
# 142 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 143 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromRight: @ 82296DA
# 144 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 145 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 146 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_fastest_up
# 147 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 148 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 149 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_MoveToFrontFromLeft: @ 82296DE
# 150 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_down
# 151 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 152 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_fastest_up
# 153 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 154 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 155 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_LeftGuardOutOfWay: @ 82296E2
# 156 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_left
# 157 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_fastest_down
# 158 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 159 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 160 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Movement_RightGuardOutOfWay: @ 82296E5
# 161 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_right
# 162 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	walk_in_place_fastest_down
# 163 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	step_end
# 164 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 165 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_MustHaveAllGymBadges: @ 82296E8
# 166 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Beyond this point, only those Trainers\n"
# 167 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "who have collected all the Gym Badges\l"
# 168 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "are permitted to enter.\p"
# 169 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Trainer, let us confirm that you have\n"
# 170 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "all the Gym Badges.$"
# 171 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 172 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_HaventObtainedAllBadges: @ 8229787
# 173 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "You haven't obtained all the Badges.\p"
# 174 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "If you're bound for the Pokémon\n"
# 175 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "League, you must return with them.$"
# 176 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 177 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_GoForth: @ 82297EF
# 178 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Trainer! Believe in yourself and your\n"
# 179 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Pokémon, and go forth!$"
# 180 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	
# 181 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_PowerCandy:
# 182 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Hello, there! Have I got a deal just\n"
# 183 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "you, I'll let you have a secret Item\p"
# 184 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "for just 9000! So, you'll buy it,\n"
# 185 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "am I right!$"
# 186 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	
# 187 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_PowerCandy_Decline:
# 188 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "No? You say no? I'm only doing this!\n"
# 189 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "as a favor to you!$"
# 190 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"

# 191 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_PowerCandy_no_Money:
# 192 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "It looks like you don't have enough\n"
# 193 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "money!$"
# 194 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	
# 195 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
EverGrandeCity_PokemonLeague_1F_Text_PowerCandy_Bought:
# 196 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "Oh, yeah... Returns not accepted,\n"
# 197 "data/maps/EverGrandeCity_PokemonLeague_1F/scripts.pory"
	.string "got that?$"
