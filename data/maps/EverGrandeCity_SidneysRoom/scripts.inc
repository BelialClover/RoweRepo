# 1 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 2 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_MapScripts:: @ 8227F01
# 3 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, EverGrandeCity_SidneysRoom_OnLoad
# 4 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
# 5 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_SidneysRoom_OnTransition
# 6 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EverGrandeCity_SidneysRoom_OnFrame
# 7 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.byte 0
# 8 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 9 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnTransition: @ 8227F16
# 10 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
# 11 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
# 12 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 13 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 14 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnLoad: @ 8227F1D
# 15 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_ResetAdvanceToNextRoom
# 16 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	compare VAR_ELITE_4_STATE, 1
# 17 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call_if_eq EverGrandeCity_SidneysRoom_EventScript_CloseDoor
# 18 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 19 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 20 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_ResetAdvanceToNextRoom:: @ 8227F32
# 21 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
# 22 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	return
# 23 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 24 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_CloseDoor:: @ 8227F38
# 25 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_CloseDoor
# 26 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	return
# 27 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 28 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnWarp: @ 8227F3E
# 29 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth
# 30 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.2byte 0
# 31 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 32 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_PlayerTurnNorth:: @ 8227F48
# 33 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 34 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 35 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 36 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_OnFrame: @ 8227F4D
# 37 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	map_script_2 VAR_ELITE_4_STATE, 0, EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor
# 38 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.2byte 0
# 39 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 40 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_WalkInCloseDoor:: @ 8227F57
# 41 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lockall
# 42 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
# 43 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setvar VAR_ELITE_4_STATE, 1
# 44 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	releaseall
# 45 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 46 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 47 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_Sidney:: @ 8227F64
# 48 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	lock
# 49 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	faceplayer
# 50 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	special HealPlayerParty
# 51 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech
# 52 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_ELITE_FOUR, 0
# 53 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_IntroSpeech, MSGBOX_DEFAULT
# 54 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_SIDNEY, EverGrandeCity_SidneysRoom_Text_Defeat
# 55 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	goto EverGrandeCity_SidneysRoom_EventScript_Defeated
# 56 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 57 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 58 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_PostBattleSpeech:: @ 8227F8B
# 59 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 60 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	release
# 61 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 62 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 63 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_EventScript_Defeated:: @ 8227F95
# 64 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	setflag FLAG_DEFEATED_ELITE_4_SIDNEY
# 65 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	special HealPlayerParty
# 66 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
# 67 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	msgbox EverGrandeCity_SidneysRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
# 68 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	release
# 69 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	end
# 70 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 71 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_IntroSpeech: @ 8227FA7
# 72 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Welcome, challenger!\n"
# 73 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "I'm Sidney of the Elite Four.\p"
# 74 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "I like that look you're giving me.\n"
# 75 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "I guess you'll give me a good match.\l"
# 76 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "That's good! Looking real good!\p"
# 77 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "All right! You and me, let's enjoy\n"
# 78 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "a battle that can only be staged\l"
# 79 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "here in the Pokémon League!$"
# 80 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 81 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_Defeat: @ 82280A2
# 82 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Well, how do you like that? I lost!\n"
# 83 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Eh, it was fun, so it doesn't matter.$"
# 84 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"

# 85 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
EverGrandeCity_SidneysRoom_Text_PostBattleSpeech: @ 82280EC
# 86 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Well, listen to what this loser has\n"
# 87 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "to say.\p"
# 88 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "You've got what it takes to go far.\n"
# 89 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "Now, go on to the next room and enjoy\l"
# 90 "data/maps/EverGrandeCity_SidneysRoom/scripts.pory"
	.string "your next battle!$"
