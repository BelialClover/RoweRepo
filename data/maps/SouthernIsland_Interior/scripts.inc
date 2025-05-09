# 1 "data/maps/SouthernIsland_Interior/scripts.pory"

# 2 "data/maps/SouthernIsland_Interior/scripts.pory"
.set LOCALID_LATI, 2
# 3 "data/maps/SouthernIsland_Interior/scripts.pory"

# 4 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_MapScripts:: @ 8242A45
# 5 "data/maps/SouthernIsland_Interior/scripts.pory"
	.byte 0
# 6 "data/maps/SouthernIsland_Interior/scripts.pory"

# 7 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_OnResume: @ 8242A50
# 8 "data/maps/SouthernIsland_Interior/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, SouthernIsland_Interior_EventScript_TryRemoveLati
# 9 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 10 "data/maps/SouthernIsland_Interior/scripts.pory"

# 11 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_TryRemoveLati:: @ 8242A5A
# 12 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 13 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 14 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_ne Common_EventScript_NopReturn
# 15 "data/maps/SouthernIsland_Interior/scripts.pory"
	removeobject LOCALID_LATI
# 16 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 17 "data/maps/SouthernIsland_Interior/scripts.pory"

# 18 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_OnTransition: @ 8242A6E
# 19 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_ROAMER_POKEMON, 0
# 20 "data/maps/SouthernIsland_Interior/scripts.pory"
	call_if_eq SouthernIsland_Interior_EventScript_SetUpLatios
# 21 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_ROAMER_POKEMON, 0
# 22 "data/maps/SouthernIsland_Interior/scripts.pory"
	call_if_ne SouthernIsland_Interior_EventScript_SetUpLatias
# 23 "data/maps/SouthernIsland_Interior/scripts.pory"
	call SouthernIsland_Interior_EventScript_SetUpPlayerGfx
# 24 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 25 "data/maps/SouthernIsland_Interior/scripts.pory"

# 26 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetUpLatios:: @ 8242A8A
# 27 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LATIOS
# 28 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIOS
# 29 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 30 "data/maps/SouthernIsland_Interior/scripts.pory"

# 31 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetUpLatias:: @ 8242A95
# 32 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_LATIAS
# 33 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_TEMP_4, SPECIES_LATIAS
# 34 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 35 "data/maps/SouthernIsland_Interior/scripts.pory"

# 36 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetUpPlayerGfx:: @ 8242AA0
# 37 "data/maps/SouthernIsland_Interior/scripts.pory"
	checkplayergender
# 38 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, MALE
# 39 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_SetBrendanGfx
# 40 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, FEMALE
# 41 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_SetMayGfx
# 42 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 43 "data/maps/SouthernIsland_Interior/scripts.pory"

# 44 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetBrendanGfx:: @ 8242AB8
# 45 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 46 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 47 "data/maps/SouthernIsland_Interior/scripts.pory"

# 48 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetMayGfx:: @ 8242ABE
# 49 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 50 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 51 "data/maps/SouthernIsland_Interior/scripts.pory"

# 52 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_TryLatiEncounter:: @ 8242AC4
# 53 "data/maps/SouthernIsland_Interior/scripts.pory"
	lockall
# 54 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_0x8008, 12
# 55 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto SouthernIsland_Interior_EventScript_Lati
# 56 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 57 "data/maps/SouthernIsland_Interior/scripts.pory"

# 58 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Lati:: @ 8242AD0
# 59 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_TEMP_2, SouthernIsland_Interior_EventScript_Sign
# 60 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_DEFEATED_LATIAS_OR_LATIOS, SouthernIsland_Interior_EventScript_Sign
# 61 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIAS_OR_LATIOS, SouthernIsland_Interior_EventScript_Sign
# 62 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_SOUTHERN_ISLAND, SouthernIsland_Interior_EventScript_Sign
# 63 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_ENCOUNTERED_LATIAS_OR_LATIOS
# 64 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_TEMP_2
# 65 "data/maps/SouthernIsland_Interior/scripts.pory"
	special SpawnCameraObject
# 66 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SouthernIsland_Interior_Movement_CameraPanUp
# 67 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 0
# 68 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 50
# 69 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitse
# 70 "data/maps/SouthernIsland_Interior/scripts.pory"
	playmoncry VAR_TEMP_4, 0
# 71 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 30
# 72 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmoncry
# 73 "data/maps/SouthernIsland_Interior/scripts.pory"
	addobject LOCALID_LATI
# 74 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 30
# 75 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SouthernIsland_Interior_Movement_CameraPanDown
# 76 "data/maps/SouthernIsland_Interior/scripts.pory"
	applymovement LOCALID_LATI, SouthernIsland_Interior_Movement_LatiApproach
# 77 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmovement 0
# 78 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 50
# 79 "data/maps/SouthernIsland_Interior/scripts.pory"
	special RemoveCameraObject
# 80 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_LATI
# 81 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_ROAMER_POKEMON, 0
# 82 "data/maps/SouthernIsland_Interior/scripts.pory"
	call_if_eq SouthernIsland_Interior_EventScript_SetLatiosBattleVars
# 83 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_ROAMER_POKEMON, 0
# 84 "data/maps/SouthernIsland_Interior/scripts.pory"
	call_if_ne SouthernIsland_Interior_EventScript_SetLatiasBattleVars
# 85 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 86 "data/maps/SouthernIsland_Interior/scripts.pory"
	special BattleSetup_StartLatiBattle
# 87 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitstate
# 88 "data/maps/SouthernIsland_Interior/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 89 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 90 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 91 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_LatiDefeated
# 92 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 93 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_RanFromLati
# 94 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 95 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_RanFromLati
# 96 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_CAUGHT_LATIAS_OR_LATIOS
# 97 "data/maps/SouthernIsland_Interior/scripts.pory"
	releaseall
# 98 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 99 "data/maps/SouthernIsland_Interior/scripts.pory"

# 100 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_LatiDefeated:: @ 8242B81
# 101 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_DEFEATED_LATIAS_OR_LATIOS
# 102 "data/maps/SouthernIsland_Interior/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_4
# 103 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 104 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 105 "data/maps/SouthernIsland_Interior/scripts.pory"

# 106 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_RanFromLati:: @ 8242B8F
# 107 "data/maps/SouthernIsland_Interior/scripts.pory"
	copyvar VAR_0x8004, VAR_TEMP_4
# 108 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto Common_EventScript_LegendaryFlewAway
# 109 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 110 "data/maps/SouthernIsland_Interior/scripts.pory"

# 111 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Sign:: @ 8242B9A
# 112 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox SouthernIsland_Interior_Text_Sign, MSGBOX_DEFAULT
# 113 "data/maps/SouthernIsland_Interior/scripts.pory"
	releaseall
# 114 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 115 "data/maps/SouthernIsland_Interior/scripts.pory"

# 116 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetLatiosBattleVars:: @ 8242BA4
# 117 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_0x8004, SPECIES_LATIOS
# 118 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_0x8005, 50 @ level
# 119 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_0x8006, ITEM_SOUL_DEW
# 120 "data/maps/SouthernIsland_Interior/scripts.pory"
	special CreateObedientEnemyMon
# 121 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 122 "data/maps/SouthernIsland_Interior/scripts.pory"

# 123 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_SetLatiasBattleVars:: @ 8242BB7
# 124 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_0x8004, SPECIES_LATIAS
# 125 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_0x8005, 50 @ level
# 126 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_0x8006, ITEM_SOUL_DEW
# 127 "data/maps/SouthernIsland_Interior/scripts.pory"
	special CreateObedientEnemyMon
# 128 "data/maps/SouthernIsland_Interior/scripts.pory"
	return
# 129 "data/maps/SouthernIsland_Interior/scripts.pory"

# 130 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_CameraPanUp: @ 8242BCA
# 131 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 132 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 133 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_up
# 134 "data/maps/SouthernIsland_Interior/scripts.pory"
	step_end
# 135 "data/maps/SouthernIsland_Interior/scripts.pory"

# 136 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_CameraPanDown: @ 8242BCE
# 137 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 138 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 139 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 140 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 141 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 142 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 143 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 144 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 145 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 146 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 147 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_in_place_fastest_up
# 148 "data/maps/SouthernIsland_Interior/scripts.pory"
	step_end
# 149 "data/maps/SouthernIsland_Interior/scripts.pory"

# 150 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Movement_LatiApproach: @ 8242BDA
# 151 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 152 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 153 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 154 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 155 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 156 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 157 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay_16
# 158 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 159 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 160 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 161 "data/maps/SouthernIsland_Interior/scripts.pory"
	walk_down
# 162 "data/maps/SouthernIsland_Interior/scripts.pory"
	step_end
# 163 "data/maps/SouthernIsland_Interior/scripts.pory"
	
# 164 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Latias::
# 165 "data/maps/SouthernIsland_Interior/scripts.pory"
	lock
# 166 "data/maps/SouthernIsland_Interior/scripts.pory"
	faceplayer
# 167 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitse
# 168 "data/maps/SouthernIsland_Interior/scripts.pory"
	playmoncry SPECIES_LATIAS, 2
# 169 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 40
# 170 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmoncry
# 171 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 172 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 3
# 173 "data/maps/SouthernIsland_Interior/scripts.pory"
	setwildbattlewithcustommoves SPECIES_LATIAS, 70, ITEM_LATIASITE, MOVE_MIST_BALL, MOVE_DRAGON_PULSE, MOVE_THUNDERBOLT, MOVE_MYSTICAL_FIRE, 0, NATURE_TIMID
# 174 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 175 "data/maps/SouthernIsland_Interior/scripts.pory"
	dowildbattle
# 176 "data/maps/SouthernIsland_Interior/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 177 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 178 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 179 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_CaughtLatias
# 180 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 181 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_RanFromLatias
# 182 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 183 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_RanFromLatias
# 184 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 185 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_RanFromLatias
# 186 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_DEFEATED_LATIAS
# 187 "data/maps/SouthernIsland_Interior/scripts.pory"
	release
# 188 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 189 "data/maps/SouthernIsland_Interior/scripts.pory"
	
# 190 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_CaughtLatias::
# 191 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_DEFEATED_LATIAS
# 192 "data/maps/SouthernIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 193 "data/maps/SouthernIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 194 "data/maps/SouthernIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 195 "data/maps/SouthernIsland_Interior/scripts.pory"
	giveitem ITEM_SOUL_DEW
# 196 "data/maps/SouthernIsland_Interior/scripts.pory"
	release
# 197 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 198 "data/maps/SouthernIsland_Interior/scripts.pory"

# 199 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_DefeatedLatias::
# 200 "data/maps/SouthernIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 201 "data/maps/SouthernIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 202 "data/maps/SouthernIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 203 "data/maps/SouthernIsland_Interior/scripts.pory"
	release
# 204 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 205 "data/maps/SouthernIsland_Interior/scripts.pory"

# 206 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_RanFromLatias::
# 207 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_0x8004, SPECIES_LATIAS
# 208 "data/maps/SouthernIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 209 "data/maps/SouthernIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 210 "data/maps/SouthernIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 211 "data/maps/SouthernIsland_Interior/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 212 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 213 "data/maps/SouthernIsland_Interior/scripts.pory"
	release
# 214 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 215 "data/maps/SouthernIsland_Interior/scripts.pory"
	
# 216 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Text_Latias::
# 217 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "Gwogobo weobobobo!$"
# 218 "data/maps/SouthernIsland_Interior/scripts.pory"

# 219 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_Latios::
# 220 "data/maps/SouthernIsland_Interior/scripts.pory"
	lock
# 221 "data/maps/SouthernIsland_Interior/scripts.pory"
	faceplayer
# 222 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitse
# 223 "data/maps/SouthernIsland_Interior/scripts.pory"
	playmoncry SPECIES_LATIOS, 2
# 224 "data/maps/SouthernIsland_Interior/scripts.pory"
	delay 40
# 225 "data/maps/SouthernIsland_Interior/scripts.pory"
	waitmoncry
# 226 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_TOTEM_BATTLE
# 227 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_NUM_WILD_POKEMON_STAT_BOOST, 3
# 228 "data/maps/SouthernIsland_Interior/scripts.pory"
	setwildbattlewithcustommoves SPECIES_LATIOS, 70, ITEM_LATIOSITE, MOVE_LUSTER_PURGE, MOVE_DRAGON_PULSE, MOVE_AURA_SPHERE, MOVE_ICE_BEAM, 0, NATURE_MODEST
# 229 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 230 "data/maps/SouthernIsland_Interior/scripts.pory"
	dowildbattle
# 231 "data/maps/SouthernIsland_Interior/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 232 "data/maps/SouthernIsland_Interior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 233 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 234 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_CaughtLatios
# 235 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 236 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_RanFromLatios
# 237 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 238 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_RanFromLatios
# 239 "data/maps/SouthernIsland_Interior/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 240 "data/maps/SouthernIsland_Interior/scripts.pory"
	goto_if_eq SouthernIsland_Interior_EventScript_RanFromLatios
# 241 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_DEFEATED_LATIOS
# 242 "data/maps/SouthernIsland_Interior/scripts.pory"
	release
# 243 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 244 "data/maps/SouthernIsland_Interior/scripts.pory"
	
# 245 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_CaughtLatios::
# 246 "data/maps/SouthernIsland_Interior/scripts.pory"
	setflag FLAG_DEFEATED_LATIOS
# 247 "data/maps/SouthernIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 248 "data/maps/SouthernIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 249 "data/maps/SouthernIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 250 "data/maps/SouthernIsland_Interior/scripts.pory"
	giveitem ITEM_SOUL_DEW
# 251 "data/maps/SouthernIsland_Interior/scripts.pory"
	release
# 252 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 253 "data/maps/SouthernIsland_Interior/scripts.pory"

# 254 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_DefeatedLatios::
# 255 "data/maps/SouthernIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 256 "data/maps/SouthernIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 257 "data/maps/SouthernIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 258 "data/maps/SouthernIsland_Interior/scripts.pory"
	release
# 259 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 260 "data/maps/SouthernIsland_Interior/scripts.pory"

# 261 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_EventScript_RanFromLatios::
# 262 "data/maps/SouthernIsland_Interior/scripts.pory"
	setvar VAR_0x8004, SPECIES_LATIOS
# 263 "data/maps/SouthernIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 264 "data/maps/SouthernIsland_Interior/scripts.pory"
	removeobject VAR_LAST_TALKED
# 265 "data/maps/SouthernIsland_Interior/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 266 "data/maps/SouthernIsland_Interior/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 267 "data/maps/SouthernIsland_Interior/scripts.pory"
	msgbox gText_LegendaryFlewAway, MSGBOX_DEFAULT
# 268 "data/maps/SouthernIsland_Interior/scripts.pory"
	release
# 269 "data/maps/SouthernIsland_Interior/scripts.pory"
	end
# 270 "data/maps/SouthernIsland_Interior/scripts.pory"
	
# 271 "data/maps/SouthernIsland_Interior/scripts.pory"
SouthernIsland_Interior_Text_Latios::
# 272 "data/maps/SouthernIsland_Interior/scripts.pory"
	.string "Gwogobo weobobobo!$"
