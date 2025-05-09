# 1 "data/maps/RustboroCity/scripts.pory"

# 2 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_BOY, 7
# 3 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_LITTLE_GIRL, 8
# 4 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 9
# 5 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_GRUNT, 10
# 6 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_RIVAL, 14
# 7 "data/maps/RustboroCity/scripts.pory"
.set LOCALID_SCIENTIST, 15
# 8 "data/maps/RustboroCity/scripts.pory"

# 9 "data/maps/RustboroCity/scripts.pory"
RustboroCity_MapScripts:: @ 81E06BD
# 10 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_OnTransition
# 11 "data/maps/RustboroCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_OnFrame
# 12 "data/maps/RustboroCity/scripts.pory"
	.byte 0
# 13 "data/maps/RustboroCity/scripts.pory"

# 14 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnTransition: @ 81E06C8
# 15 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 16 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_VISITED_ROUTE104
# 17 "data/maps/RustboroCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 18 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 6
# 19 "data/maps/RustboroCity/scripts.pory"
	call_if_eq RustboroCity_EventScript_HideMapNamePopup
# 20 "data/maps/RustboroCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 21 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RUSTBORO_CITY_STATE, 6
# 22 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_PositionScientistForExit
# 23 "data/maps/RustboroCity/scripts.pory"
	end
# 24 "data/maps/RustboroCity/scripts.pory"

# 25 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistForExit:: @ 81E06EC
# 26 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_0, 11
# 27 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_PositionScientistLeftExit
# 28 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 12, 15
# 29 "data/maps/RustboroCity/scripts.pory"
	end
# 30 "data/maps/RustboroCity/scripts.pory"

# 31 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PositionScientistLeftExit:: @ 81E06FF
# 32 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_SCIENTIST, 11, 15
# 33 "data/maps/RustboroCity/scripts.pory"
	end
# 34 "data/maps/RustboroCity/scripts.pory"

# 35 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HideMapNamePopup:: @ 81E0707
# 36 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 37 "data/maps/RustboroCity/scripts.pory"
	return
# 38 "data/maps/RustboroCity/scripts.pory"

# 39 "data/maps/RustboroCity/scripts.pory"
RustboroCity_OnFrame: @ 81E070B
# 40 "data/maps/RustboroCity/scripts.pory"
	map_script_2 VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_EventScript_ScientistAddMatchCall
# 41 "data/maps/RustboroCity/scripts.pory"
	.2byte 0
# 42 "data/maps/RustboroCity/scripts.pory"

# 43 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ScientistAddMatchCall:: @ 81E0715
# 44 "data/maps/RustboroCity/scripts.pory"
	lockall
# 45 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 1
# 46 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_Movement_PlayerWalkDown
# 47 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 48 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 49 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 50 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_SCIENTIST
# 51 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistApproachPlayer
# 52 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 53 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 54 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_ExclamationMark
# 55 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 56 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_Delay48
# 57 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 58 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 59 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 60 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistWalkInPlaceDown
# 61 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 62 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevelopedNewPokenavFeature, MSGBOX_DEFAULT
# 63 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 64 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HAS_MATCH_CALL
# 65 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFastestLeft
# 66 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 67 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 68 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 69 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 70 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 71 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 72 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 73 "data/maps/RustboroCity/scripts.pory"
	playse SE_CLICK
# 74 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 75 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_WalkInPlaceFastestDown
# 76 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 77 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_AddedMatchCallPleaseCallMrStone, MSGBOX_DEFAULT
# 78 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 79 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 80 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 81 "data/maps/RustboroCity/scripts.pory"

# 82 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PleaseSelectPokenav:: @ 81E07AC
# 83 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseSelectPokenav, MSGBOX_DEFAULT
# 84 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 85 "data/maps/RustboroCity/scripts.pory"
	delay 10
# 86 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MatchCallTutorial
# 87 "data/maps/RustboroCity/scripts.pory"

# 88 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MatchCallTutorial:: @ 81E07BD
# 89 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ADDED_MATCH_CALL_TO_POKENAV
# 90 "data/maps/RustboroCity/scripts.pory"
	special ScriptMenu_CreateStartMenuForPokenavTutorial
# 91 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 92 "data/maps/RustboroCity/scripts.pory"
	switch VAR_RESULT
# 93 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_PleaseSelectPokenav
# 94 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_PleaseSelectPokenav
# 95 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_PleaseSelectPokenav
# 96 "data/maps/RustboroCity/scripts.pory"
	case 4, RustboroCity_EventScript_PleaseSelectPokenav
# 97 "data/maps/RustboroCity/scripts.pory"
	case 5, RustboroCity_EventScript_PleaseSelectPokenav
# 98 "data/maps/RustboroCity/scripts.pory"
	case 6, RustboroCity_EventScript_PleaseSelectPokenav
# 99 "data/maps/RustboroCity/scripts.pory"
	case 7, RustboroCity_EventScript_PleaseSelectPokenav
# 100 "data/maps/RustboroCity/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_EventScript_PleaseSelectPokenav
# 101 "data/maps/RustboroCity/scripts.pory"
	special OpenPokenavForTutorial
# 102 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 103 "data/maps/RustboroCity/scripts.pory"
	delay 20
# 104 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_IdBetterGetBackToWork, MSGBOX_DEFAULT
# 105 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 106 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_SCIENTIST, RustboroCity_Movement_ScientistLeave
# 107 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 108 "data/maps/RustboroCity/scripts.pory"
	playse SE_EXIT
# 109 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_SCIENTIST
# 110 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
# 111 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 7
# 112 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 113 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 114 "data/maps/RustboroCity/scripts.pory"
	end
# 115 "data/maps/RustboroCity/scripts.pory"

# 116 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkInPlaceDown: @ 81E084E
# 117 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_down
# 118 "data/maps/RustboroCity/scripts.pory"
	step_end
# 119 "data/maps/RustboroCity/scripts.pory"

# 120 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_PlayerWalkDown: @ 81E0850
# 121 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 122 "data/maps/RustboroCity/scripts.pory"
	step_end
# 123 "data/maps/RustboroCity/scripts.pory"

# 124 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistApproachPlayer: @ 81E0852
# 125 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 126 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 127 "data/maps/RustboroCity/scripts.pory"
	step_end
# 128 "data/maps/RustboroCity/scripts.pory"

# 129 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 130 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistWalkAroundPlayer: @ 81E0855
# 131 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 132 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 133 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 134 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 135 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 136 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fastest_up
# 137 "data/maps/RustboroCity/scripts.pory"
	delay_16
# 138 "data/maps/RustboroCity/scripts.pory"
	step_end
# 139 "data/maps/RustboroCity/scripts.pory"

# 140 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_ScientistLeave: @ 81E085D
# 141 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 142 "data/maps/RustboroCity/scripts.pory"
	step_end
# 143 "data/maps/RustboroCity/scripts.pory"

# 144 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatMan:: @ 81E085F
# 145 "data/maps/RustboroCity/scripts.pory"
	lock
# 146 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 147 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_EventScript_FatManSawGrunt
# 148 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WeShortenItToDevon, MSGBOX_DEFAULT
# 149 "data/maps/RustboroCity/scripts.pory"
	release
# 150 "data/maps/RustboroCity/scripts.pory"
	end
# 151 "data/maps/RustboroCity/scripts.pory"

# 152 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_FatManSawGrunt:: @ 81E0874
# 153 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_SneakyLookingManWentAroundCorner, MSGBOX_DEFAULT
# 154 "data/maps/RustboroCity/scripts.pory"
	release
# 155 "data/maps/RustboroCity/scripts.pory"
	end
# 156 "data/maps/RustboroCity/scripts.pory"

# 157 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee2:: @ 81E087E
# 158 "data/maps/RustboroCity/scripts.pory"
	lock
# 159 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 160 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureNewAroundHere, MSGBOX_DEFAULT
# 161 "data/maps/RustboroCity/scripts.pory"
	release
# 162 "data/maps/RustboroCity/scripts.pory"
	end
# 163 "data/maps/RustboroCity/scripts.pory"

# 164 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Woman:: @ 81E088A
# 165 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymLeaderIsntEasyWithFire, MSGBOX_NPC
# 166 "data/maps/RustboroCity/scripts.pory"
	end
# 167 "data/maps/RustboroCity/scripts.pory"

# 168 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1:: @ 81E0893
# 169 "data/maps/RustboroCity/scripts.pory"
	lock
# 170 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 171 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_EventScript_Man1HaveBadge
# 172 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HaveYouChallengedGym, MSGBOX_DEFAULT
# 173 "data/maps/RustboroCity/scripts.pory"
	release
# 174 "data/maps/RustboroCity/scripts.pory"
	end
# 175 "data/maps/RustboroCity/scripts.pory"

# 176 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man1HaveBadge:: @ 81E08A8
# 177 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HeyThatsRustborosGymBadge, MSGBOX_DEFAULT
# 178 "data/maps/RustboroCity/scripts.pory"
	release
# 179 "data/maps/RustboroCity/scripts.pory"
	end
# 180 "data/maps/RustboroCity/scripts.pory"

# 181 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2:: @ 81E08B2
# 182 "data/maps/RustboroCity/scripts.pory"
	lock
# 183 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 184 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_EventScript_Boy2BrineyLeftTunnel
# 185 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyWalksInTheTunnel, MSGBOX_DEFAULT
# 186 "data/maps/RustboroCity/scripts.pory"
	release
# 187 "data/maps/RustboroCity/scripts.pory"
	end
# 188 "data/maps/RustboroCity/scripts.pory"

# 189 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy2BrineyLeftTunnel:: @ 81E08C7
# 190 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MrBrineyLovesPeeko, MSGBOX_DEFAULT
# 191 "data/maps/RustboroCity/scripts.pory"
	release
# 192 "data/maps/RustboroCity/scripts.pory"
	end
# 193 "data/maps/RustboroCity/scripts.pory"

# 194 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Twin:: @ 81E08D1
# 195 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WowYouHavePokemon, MSGBOX_NPC
# 196 "data/maps/RustboroCity/scripts.pory"
	end
# 197 "data/maps/RustboroCity/scripts.pory"

# 198 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_NinjaBoy:: @ 81E08DA
# 199 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CatchRarePokemonIfIGoToSchool, MSGBOX_SIGN
# 200 "data/maps/RustboroCity/scripts.pory"
	end
# 201 "data/maps/RustboroCity/scripts.pory"

# 202 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TunnelSign:: @ 81E08E3
# 203 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TunnelNearingCompletion, MSGBOX_SIGN
# 204 "data/maps/RustboroCity/scripts.pory"
	end
# 205 "data/maps/RustboroCity/scripts.pory"

# 206 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpSign:: @ 81E08EC
# 207 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpSign, MSGBOX_SIGN
# 208 "data/maps/RustboroCity/scripts.pory"
	end
# 209 "data/maps/RustboroCity/scripts.pory"

# 210 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_GymSign:: @ 81E08F5
# 211 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_GymSign, MSGBOX_SIGN
# 212 "data/maps/RustboroCity/scripts.pory"
	end
# 213 "data/maps/RustboroCity/scripts.pory"

# 214 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 215 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonCorpBranchOfficeSign:: @ 81E08FE
# 216 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_DevonCorpBranchOfficeSign, MSGBOX_SIGN
# 217 "data/maps/RustboroCity/scripts.pory"
	end
# 218 "data/maps/RustboroCity/scripts.pory"

# 219 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CitySign:: @ 81E0907
# 220 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CitySign, MSGBOX_SIGN
# 221 "data/maps/RustboroCity/scripts.pory"
	end
# 222 "data/maps/RustboroCity/scripts.pory"

# 223 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_TrainersSchoolSign:: @ 81E0910
# 224 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TrainersSchoolSign, MSGBOX_SIGN
# 225 "data/maps/RustboroCity/scripts.pory"
	end
# 226 "data/maps/RustboroCity/scripts.pory"

# 227 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_CuttersHouseSign:: @ 81E0919
# 228 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_CuttersHouse, MSGBOX_SIGN
# 229 "data/maps/RustboroCity/scripts.pory"
	end
# 230 "data/maps/RustboroCity/scripts.pory"

# 231 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleBoy:: @ 81E0922
# 232 "data/maps/RustboroCity/scripts.pory"
	lock
# 233 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 234 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonCanChangeLookFromExp, MSGBOX_DEFAULT
# 235 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_BOY, Common_Movement_FaceOriginalDirection
# 236 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 237 "data/maps/RustboroCity/scripts.pory"
	release
# 238 "data/maps/RustboroCity/scripts.pory"
	end
# 239 "data/maps/RustboroCity/scripts.pory"

# 240 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_LittleGirl:: @ 81E0938
# 241 "data/maps/RustboroCity/scripts.pory"
	lock
# 242 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 243 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PokemonChangeShape, MSGBOX_DEFAULT
# 244 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_LITTLE_GIRL, Common_Movement_FaceOriginalDirection
# 245 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 246 "data/maps/RustboroCity/scripts.pory"
	release
# 247 "data/maps/RustboroCity/scripts.pory"
	end
# 248 "data/maps/RustboroCity/scripts.pory"

# 249 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Man2:: @ 81E094E
# 250 "data/maps/RustboroCity/scripts.pory"
	lock
# 251 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 252 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_TradePokemonGrowFast, MSGBOX_DEFAULT
# 253 "data/maps/RustboroCity/scripts.pory"
	release
# 254 "data/maps/RustboroCity/scripts.pory"
	end
# 255 "data/maps/RustboroCity/scripts.pory"

# 256 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger0:: @ 81E095A
# 257 "data/maps/RustboroCity/scripts.pory"
	lockall
# 258 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 259 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 260 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 0
# 261 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 262 "data/maps/RustboroCity/scripts.pory"
	end
# 263 "data/maps/RustboroCity/scripts.pory"

# 264 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger1:: @ 81E0971
# 265 "data/maps/RustboroCity/scripts.pory"
	lockall
# 266 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 267 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 268 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 1
# 269 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 270 "data/maps/RustboroCity/scripts.pory"
	end
# 271 "data/maps/RustboroCity/scripts.pory"

# 272 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger2:: @ 81E0988
# 273 "data/maps/RustboroCity/scripts.pory"
	lockall
# 274 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 275 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 276 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 2
# 277 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 278 "data/maps/RustboroCity/scripts.pory"
	end
# 279 "data/maps/RustboroCity/scripts.pory"

# 280 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger3:: @ 81E099F
# 281 "data/maps/RustboroCity/scripts.pory"
	lockall
# 282 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 283 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 284 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 3
# 285 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 286 "data/maps/RustboroCity/scripts.pory"
	end
# 287 "data/maps/RustboroCity/scripts.pory"

# 288 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsTrigger4:: @ 81E09B6
# 289 "data/maps/RustboroCity/scripts.pory"
	lockall
# 290 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 14, 21
# 291 "data/maps/RustboroCity/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_RIGHT
# 292 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8004, 4
# 293 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_StolenGoodsScene
# 294 "data/maps/RustboroCity/scripts.pory"
	end
# 295 "data/maps/RustboroCity/scripts.pory"

# 296 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_StolenGoodsScene:: @ 81E09CD
# 297 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_OutOfTheWay, MSGBOX_DEFAULT
# 298 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 299 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, 0
# 300 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_GRUNT
# 301 "data/maps/RustboroCity/scripts.pory"
	addobject LOCALID_DEVON_EMPLOYEE
# 302 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_GRUNT, RustboroCity_Movement_GruntEscape
# 303 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 304 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 305 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt1
# 306 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 307 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_WaitDontTakeMyGoods, MSGBOX_DEFAULT
# 308 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 309 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeChaseGrunt2
# 310 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 311 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 312 "data/maps/RustboroCity/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 313 "data/maps/RustboroCity/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 30, 10
# 314 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 315 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEVON_GOODS_STOLEN
# 316 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 2
# 317 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 2
# 318 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE116_STATE, 1
# 319 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 320 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
# 321 "data/maps/RustboroCity/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 322 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 323 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 324 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 325 "data/maps/RustboroCity/scripts.pory"
	end
# 326 "data/maps/RustboroCity/scripts.pory"

# 327 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 328 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ShadyCharacterTookOff:: @ 81E0A3B
# 329 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 330 "data/maps/RustboroCity/scripts.pory"
	return
# 331 "data/maps/RustboroCity/scripts.pory"

# 332 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 333 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_YouGotItThankYou:: @ 81E0A44
# 334 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 335 "data/maps/RustboroCity/scripts.pory"
	return
# 336 "data/maps/RustboroCity/scripts.pory"

# 337 "data/maps/RustboroCity/scripts.pory"
@ Unknown, unused employee movements. Based on the differences in movement theyre for approaching an object (probably the player) in different positions
# 338 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachUp:: @ 81E0A4D
# 339 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachUp
# 340 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 341 "data/maps/RustboroCity/scripts.pory"
	return
# 342 "data/maps/RustboroCity/scripts.pory"

# 343 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 344 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachLeft:: @ 81E0A58
# 345 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachLeft
# 346 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 347 "data/maps/RustboroCity/scripts.pory"
	return
# 348 "data/maps/RustboroCity/scripts.pory"

# 349 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 350 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachRight:: @ 81E0A63
# 351 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachRight
# 352 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 353 "data/maps/RustboroCity/scripts.pory"
	return
# 354 "data/maps/RustboroCity/scripts.pory"

# 355 "data/maps/RustboroCity/scripts.pory"
@ Unused, see above
# 356 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachDown:: @ 81E0A6E
# 357 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachDown
# 358 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 359 "data/maps/RustboroCity/scripts.pory"
	return
# 360 "data/maps/RustboroCity/scripts.pory"

# 361 "data/maps/RustboroCity/scripts.pory"
@ Unused, similar movement to the above scripts
# 362 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerFar:: @ 81E0A79
# 363 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerFar
# 364 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 365 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 366 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 367 "data/maps/RustboroCity/scripts.pory"
	return
# 368 "data/maps/RustboroCity/scripts.pory"

# 369 "data/maps/RustboroCity/scripts.pory"
@ Unused
# 370 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscapeExtended: @ 81E0A8E
# 371 "data/maps/RustboroCity/scripts.pory"
	walk_fastest_right
# 372 "data/maps/RustboroCity/scripts.pory"
	walk_fastest_right
# 373 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 374 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 375 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 376 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 377 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 378 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 379 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 380 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 381 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 382 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 383 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 384 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 385 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 386 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 387 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 388 "data/maps/RustboroCity/scripts.pory"
	step_end
# 389 "data/maps/RustboroCity/scripts.pory"

# 390 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_GruntEscape: @ 81E0AA0
# 391 "data/maps/RustboroCity/scripts.pory"
	walk_fastest_right
# 392 "data/maps/RustboroCity/scripts.pory"
	walk_fastest_right
# 393 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 394 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 395 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 396 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 397 "data/maps/RustboroCity/scripts.pory"
	walk_fast_right
# 398 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 399 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 400 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 401 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 402 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 403 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 404 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 405 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 406 "data/maps/RustboroCity/scripts.pory"
	walk_fast_up
# 407 "data/maps/RustboroCity/scripts.pory"
	step_end
# 408 "data/maps/RustboroCity/scripts.pory"

# 409 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt1: @ 81E0AB1
# 410 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 411 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 412 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 413 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 414 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 415 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 416 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fastest_up
# 417 "data/maps/RustboroCity/scripts.pory"
	step_end
# 418 "data/maps/RustboroCity/scripts.pory"

# 419 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeChaseGrunt2: @ 81E0AB9
# 420 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 421 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 422 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 423 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 424 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 425 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 426 "data/maps/RustboroCity/scripts.pory"
	walk_up
# 427 "data/maps/RustboroCity/scripts.pory"
	step_end
# 428 "data/maps/RustboroCity/scripts.pory"

# 429 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 430 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachUp: @ 81E0AC1
# 431 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 432 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 433 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 434 "data/maps/RustboroCity/scripts.pory"
	step_end
# 435 "data/maps/RustboroCity/scripts.pory"

# 436 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 437 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachLeft: @ 81E0AC5
# 438 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 439 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 440 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 441 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 442 "data/maps/RustboroCity/scripts.pory"
	step_end
# 443 "data/maps/RustboroCity/scripts.pory"

# 444 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 445 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachRight: @ 81E0ACA
# 446 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 447 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 448 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 449 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 450 "data/maps/RustboroCity/scripts.pory"
	step_end
# 451 "data/maps/RustboroCity/scripts.pory"

# 452 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 453 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachDown: @ 81E0ACF
# 454 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 455 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 456 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 457 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 458 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 459 "data/maps/RustboroCity/scripts.pory"
	step_end
# 460 "data/maps/RustboroCity/scripts.pory"

# 461 "data/maps/RustboroCity/scripts.pory"
@ Functionally unused
# 462 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerFar: @ 81E0AD5
# 463 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 464 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 465 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 466 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 467 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 468 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 469 "data/maps/RustboroCity/scripts.pory"
	walk_in_place_fastest_down
# 470 "data/maps/RustboroCity/scripts.pory"
	step_end
# 471 "data/maps/RustboroCity/scripts.pory"

# 472 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_DevonEmployee1:: @ 81E0ADD
# 473 "data/maps/RustboroCity/scripts.pory"
	lock
# 474 "data/maps/RustboroCity/scripts.pory"
	faceplayer
# 475 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_EventScript_ReturnGoodsSpokeToEmployee
# 476 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel, MSGBOX_DEFAULT
# 477 "data/maps/RustboroCity/scripts.pory"
	release
# 478 "data/maps/RustboroCity/scripts.pory"
	end
# 479 "data/maps/RustboroCity/scripts.pory"

# 480 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsSpokeToEmployee:: @ 81E0AF2
# 481 "data/maps/RustboroCity/scripts.pory"
	waitse
# 482 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 483 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 484 "data/maps/RustboroCity/scripts.pory"
	end
# 485 "data/maps/RustboroCity/scripts.pory"

# 486 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger0:: @ 81E0AFE
# 487 "data/maps/RustboroCity/scripts.pory"
	lockall
# 488 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 489 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 490 "data/maps/RustboroCity/scripts.pory"
	end
# 491 "data/maps/RustboroCity/scripts.pory"

# 492 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger1:: @ 81E0B0A
# 493 "data/maps/RustboroCity/scripts.pory"
	lockall
# 494 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 495 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 496 "data/maps/RustboroCity/scripts.pory"
	end
# 497 "data/maps/RustboroCity/scripts.pory"

# 498 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger2:: @ 81E0B16
# 499 "data/maps/RustboroCity/scripts.pory"
	lockall
# 500 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 501 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 502 "data/maps/RustboroCity/scripts.pory"
	end
# 503 "data/maps/RustboroCity/scripts.pory"

# 504 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_HelpGetGoodsTrigger3:: @ 81E0B22
# 505 "data/maps/RustboroCity/scripts.pory"
	lockall
# 506 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 507 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_EmployeeAskToGetGoods
# 508 "data/maps/RustboroCity/scripts.pory"
	end
# 509 "data/maps/RustboroCity/scripts.pory"

# 510 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeAskToGetGoods:: @ 81E0B2E
# 511 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 0
# 512 "data/maps/RustboroCity/scripts.pory"
	call_if_eq RustboroCity_EventScript_EmployeeFacePlayerUp1
# 513 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 1
# 514 "data/maps/RustboroCity/scripts.pory"
	call_if_eq RustboroCity_EventScript_EmployeeFacePlayerLeft1
# 515 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 2
# 516 "data/maps/RustboroCity/scripts.pory"
	call_if_eq RustboroCity_EventScript_EmployeeFacePlayerDown1
# 517 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 3
# 518 "data/maps/RustboroCity/scripts.pory"
	call_if_eq RustboroCity_EventScript_EmployeeApproachPlayerDown1
# 519 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN
# 520 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 3
# 521 "data/maps/RustboroCity/scripts.pory"
	copyobjectxytoperm LOCALID_DEVON_EMPLOYEE
# 522 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_HelpMeIWasRobbed, MSGBOX_DEFAULT
# 523 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 524 "data/maps/RustboroCity/scripts.pory"
	end
# 525 "data/maps/RustboroCity/scripts.pory"

# 526 "data/maps/RustboroCity/scripts.pory"
@ The below movement scripts are either partially or fully duplicated by the movement scripts when the player returns the goods
# 527 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp1:: @ 81E0B6F
# 528 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFastestUp
# 529 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 530 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 531 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 532 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 533 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 534 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 535 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
# 536 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 537 "data/maps/RustboroCity/scripts.pory"
	return
# 538 "data/maps/RustboroCity/scripts.pory"

# 539 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft1:: @ 81E0B9B
# 540 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFastestLeft
# 541 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 542 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 543 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 544 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 546 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 547 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 548 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/RustboroCity/scripts.pory"
	return
# 550 "data/maps/RustboroCity/scripts.pory"

# 551 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown1:: @ 81E0BC7
# 552 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFastestDown
# 553 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 554 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 555 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 556 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 557 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 558 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 559 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 560 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 561 "data/maps/RustboroCity/scripts.pory"
	return
# 562 "data/maps/RustboroCity/scripts.pory"

# 563 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown1:: @ 81E0BF3
# 564 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFastestDown
# 565 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 566 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 567 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 568 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 569 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 570 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 571 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 572 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 573 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 574 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 575 "data/maps/RustboroCity/scripts.pory"
	return
# 576 "data/maps/RustboroCity/scripts.pory"

# 577 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_EmployeeApproachPlayerDown: @ 81E0C29
# 578 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 579 "data/maps/RustboroCity/scripts.pory"
	step_end
# 580 "data/maps/RustboroCity/scripts.pory"

# 581 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger0:: @ 81E0C2B
# 582 "data/maps/RustboroCity/scripts.pory"
	lockall
# 583 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 584 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 585 "data/maps/RustboroCity/scripts.pory"
	end
# 586 "data/maps/RustboroCity/scripts.pory"

# 587 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger1:: @ 81E0C37
# 588 "data/maps/RustboroCity/scripts.pory"
	lockall
# 589 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 590 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 591 "data/maps/RustboroCity/scripts.pory"
	end
# 592 "data/maps/RustboroCity/scripts.pory"

# 593 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger2:: @ 81E0C43
# 594 "data/maps/RustboroCity/scripts.pory"
	lockall
# 595 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 596 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 597 "data/maps/RustboroCity/scripts.pory"
	end
# 598 "data/maps/RustboroCity/scripts.pory"

# 599 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoodsTrigger3:: @ 81E0C4F
# 600 "data/maps/RustboroCity/scripts.pory"
	lockall
# 601 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 602 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_ReturnGoods
# 603 "data/maps/RustboroCity/scripts.pory"
	end
# 604 "data/maps/RustboroCity/scripts.pory"

# 605 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_ReturnGoods:: @ 81E0C5B
# 606 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 0
# 607 "data/maps/RustboroCity/scripts.pory"
	call_if_eq RustboroCity_EventScript_EmployeeFacePlayerUp2
# 608 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 1
# 609 "data/maps/RustboroCity/scripts.pory"
	call_if_eq RustboroCity_EventScript_EmployeeFacePlayerLeft2
# 610 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 2
# 611 "data/maps/RustboroCity/scripts.pory"
	call_if_eq RustboroCity_EventScript_EmployeeFacePlayerDown2
# 612 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 3
# 613 "data/maps/RustboroCity/scripts.pory"
	call_if_eq RustboroCity_EventScript_EmployeeApproachPlayerDown2
# 614 "data/maps/RustboroCity/scripts.pory"
	compare VAR_TEMP_1, 4
# 615 "data/maps/RustboroCity/scripts.pory"
	call_if_eq RustboroCity_EventScript_EmployeeFacePlayerRight
# 616 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouGotItThankYou, MSGBOX_DEFAULT
# 617 "data/maps/RustboroCity/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 618 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 619 "data/maps/RustboroCity/scripts.pory"
	call_if_eq RustboroCity_EventScript_BagFull
# 620 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 621 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 622 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_RETURNED_DEVON_GOODS
# 623 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
# 624 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 5
# 625 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 626 "data/maps/RustboroCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_3F, 255, 2, 2
# 627 "data/maps/RustboroCity/scripts.pory"
	waitstate
# 628 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 629 "data/maps/RustboroCity/scripts.pory"
	end
# 630 "data/maps/RustboroCity/scripts.pory"

# 631 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BagFull:: @ 81E0CD3
# 632 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 633 "data/maps/RustboroCity/scripts.pory"
	return
# 634 "data/maps/RustboroCity/scripts.pory"

# 635 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerUp2:: @ 81E0CDC
# 636 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFastestUp
# 637 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 638 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 639 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 640 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 641 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 642 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 643 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestDown
# 644 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 645 "data/maps/RustboroCity/scripts.pory"
	return
# 646 "data/maps/RustboroCity/scripts.pory"

# 647 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerLeft2:: @ 81E0D08
# 648 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFastestRight
# 649 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 650 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 651 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 652 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 653 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 654 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 656 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 657 "data/maps/RustboroCity/scripts.pory"
	return
# 658 "data/maps/RustboroCity/scripts.pory"

# 659 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerDown2:: @ 81E0D34
# 660 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFastestDown
# 661 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 662 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 663 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 664 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 665 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 666 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 667 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 668 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 669 "data/maps/RustboroCity/scripts.pory"
	return
# 670 "data/maps/RustboroCity/scripts.pory"

# 671 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeApproachPlayerDown2:: @ 81E0D60
# 672 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFastestDown
# 673 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 674 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 675 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 676 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 677 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 678 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 679 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_Movement_EmployeeApproachPlayerDown
# 680 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 681 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 682 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 683 "data/maps/RustboroCity/scripts.pory"
	return
# 684 "data/maps/RustboroCity/scripts.pory"

# 685 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_EmployeeFacePlayerRight:: @ 81E0D96
# 686 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFastestLeft
# 687 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 688 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 689 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_ExclamationMark
# 690 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 691 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_Delay48
# 692 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 693 "data/maps/RustboroCity/scripts.pory"
	return
# 694 "data/maps/RustboroCity/scripts.pory"

# 695 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Rival:: @ 81E0DB8
# 696 "data/maps/RustboroCity/scripts.pory"
	lockall
# 697 "data/maps/RustboroCity/scripts.pory"
	call_if_unset FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_PlayRivalMusic
# 698 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 699 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 700 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 701 "data/maps/RustboroCity/scripts.pory"

# 702 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayRivalMusic:: @ 81E0DD1
# 703 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 704 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, MALE
# 705 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_PlayMayMusic
# 706 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, FEMALE
# 707 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_PlayBrendanMusic
# 708 "data/maps/RustboroCity/scripts.pory"
	return
# 709 "data/maps/RustboroCity/scripts.pory"

# 710 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayMayMusic:: @ 81E0DE9
# 711 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
# 712 "data/maps/RustboroCity/scripts.pory"
	return
# 713 "data/maps/RustboroCity/scripts.pory"

# 714 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_PlayBrendanMusic:: @ 81E0DEE
# 715 "data/maps/RustboroCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
# 716 "data/maps/RustboroCity/scripts.pory"
	return
# 717 "data/maps/RustboroCity/scripts.pory"

# 718 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger0:: @ 81E0DF3
# 719 "data/maps/RustboroCity/scripts.pory"
	lockall
# 720 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 721 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFastestDown
# 722 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 723 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 724 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 725 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 726 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 727 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 728 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer0
# 729 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 730 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 731 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 732 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 733 "data/maps/RustboroCity/scripts.pory"

# 734 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger1:: @ 81E0E33
# 735 "data/maps/RustboroCity/scripts.pory"
	lockall
# 736 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 737 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFastestDown
# 738 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 739 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 740 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 741 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 742 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 743 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 744 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer1
# 745 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 746 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 747 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 748 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 749 "data/maps/RustboroCity/scripts.pory"

# 750 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger2:: @ 81E0E73
# 751 "data/maps/RustboroCity/scripts.pory"
	lockall
# 752 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 753 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFastestDown
# 754 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 755 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 756 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 757 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 758 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 759 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 760 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer2
# 761 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 762 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 763 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 764 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 765 "data/maps/RustboroCity/scripts.pory"

# 766 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger3:: @ 81E0EB3
# 767 "data/maps/RustboroCity/scripts.pory"
	lockall
# 768 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 769 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFastestDown
# 770 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 771 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 772 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 773 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 774 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 775 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 776 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer3
# 777 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 778 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 779 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 780 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 781 "data/maps/RustboroCity/scripts.pory"

# 782 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger4:: @ 81E0EF3
# 783 "data/maps/RustboroCity/scripts.pory"
	lockall
# 784 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 785 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFastestDown
# 786 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 787 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 788 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 789 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 790 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 791 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 792 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer4
# 793 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 794 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 795 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 796 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 797 "data/maps/RustboroCity/scripts.pory"

# 798 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger5:: @ 81E0F33
# 799 "data/maps/RustboroCity/scripts.pory"
	lockall
# 800 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 801 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFastestDown
# 802 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 803 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 804 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 805 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 806 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 807 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 808 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer5
# 809 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 810 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 811 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 812 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 813 "data/maps/RustboroCity/scripts.pory"

# 814 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger6:: @ 81E0F73
# 815 "data/maps/RustboroCity/scripts.pory"
	lockall
# 816 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 817 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFastestDown
# 818 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 819 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 820 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 821 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 822 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 823 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 824 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer6
# 825 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 826 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 827 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 828 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 829 "data/maps/RustboroCity/scripts.pory"

# 830 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalTrigger7:: @ 81E0FB3
# 831 "data/maps/RustboroCity/scripts.pory"
	lockall
# 832 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_PlayRivalMusic
# 833 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFastestDown
# 834 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 835 "data/maps/RustboroCity/scripts.pory"
	playse SE_PIN
# 836 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 837 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 838 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 839 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 840 "data/maps/RustboroCity/scripts.pory"
	applymovement LOCALID_RIVAL, RustboroCity_Movement_RivalApproachPlayer7
# 841 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 842 "data/maps/RustboroCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFastestUp
# 843 "data/maps/RustboroCity/scripts.pory"
	waitmovement 0
# 844 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_RivalEncounter
# 845 "data/maps/RustboroCity/scripts.pory"

# 846 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RivalEncounter:: @ 81E0FF3
# 847 "data/maps/RustboroCity/scripts.pory"
	checkplayergender
# 848 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, MALE
# 849 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_MayEncounter
# 850 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, FEMALE
# 851 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_BrendanEncounter
# 852 "data/maps/RustboroCity/scripts.pory"
	end
# 853 "data/maps/RustboroCity/scripts.pory"

# 854 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayEncounter:: @ 81E100B
# 855 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_MayBrineyHint
# 856 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_MayAskToBattle
# 857 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 858 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayHiLetsRegister, MSGBOX_DEFAULT
# 859 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 860 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 861 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 862 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredMay, MSGBOX_DEFAULT
# 863 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 864 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 865 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 866 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 867 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 868 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 869 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 0
# 870 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayPassedBrineyWantToBattle, MSGBOX_YESNO
# 871 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
# 872 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_BattleMay
# 873 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 874 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 875 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 876 "data/maps/RustboroCity/scripts.pory"
	end
# 877 "data/maps/RustboroCity/scripts.pory"

# 878 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayAskToBattle:: @ 81E1070
# 879 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_0x8008, 1
# 880 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayWantToBattle, MSGBOX_YESNO
# 881 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
# 882 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_BattleMay
# 883 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayOhHaventRaisedPokemonEnough, MSGBOX_DEFAULT
# 884 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 885 "data/maps/RustboroCity/scripts.pory"
	end
# 886 "data/maps/RustboroCity/scripts.pory"

# 887 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMay:: @ 81E1092
# 888 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayImNotGoingToLose, MSGBOX_DEFAULT
# 889 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 890 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleMayTreecko
# 891 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleMayTorchic
# 892 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleMayMudkip
# 893 "data/maps/RustboroCity/scripts.pory"
	end
# 894 "data/maps/RustboroCity/scripts.pory"

# 895 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_MayBrineyHint:: @ 81E10C1
# 896 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_MayMrBrineyHint, MSGBOX_DEFAULT
# 897 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 0
# 898 "data/maps/RustboroCity/scripts.pory"
	call_if_eq RustboroCity_EventScript_RestoreBgm
# 899 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 900 "data/maps/RustboroCity/scripts.pory"
	end
# 901 "data/maps/RustboroCity/scripts.pory"

# 902 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_RestoreBgm:: @ 81E10D6
# 903 "data/maps/RustboroCity/scripts.pory"
	savebgm MUS_DUMMY
# 904 "data/maps/RustboroCity/scripts.pory"
	fadedefaultbgm
# 905 "data/maps/RustboroCity/scripts.pory"
	return
# 906 "data/maps/RustboroCity/scripts.pory"

# 907 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTreecko:: @ 81E10DB
# 908 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, RustboroCity_Text_MayDefeat
# 909 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 910 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 911 "data/maps/RustboroCity/scripts.pory"
	end
# 912 "data/maps/RustboroCity/scripts.pory"

# 913 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayTorchic:: @ 81E10EE
# 914 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TORCHIC, RustboroCity_Text_MayDefeat
# 915 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 916 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 917 "data/maps/RustboroCity/scripts.pory"
	end
# 918 "data/maps/RustboroCity/scripts.pory"

# 919 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleMayMudkip:: @ 81E1101
# 920 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_RUSTBORO_MUDKIP, RustboroCity_Text_MayDefeat
# 921 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 922 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_MayBrineyHint
# 923 "data/maps/RustboroCity/scripts.pory"
	end
# 924 "data/maps/RustboroCity/scripts.pory"

# 925 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanEncounter:: @ 81E1114
# 926 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_DEFEATED_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanBrineyHint
# 927 "data/maps/RustboroCity/scripts.pory"
	goto_if_set FLAG_MET_RIVAL_RUSTBORO, RustboroCity_EventScript_BrendanAskToBattle
# 928 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_MET_RIVAL_RUSTBORO
# 929 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanHiLetsRegister, MSGBOX_DEFAULT
# 930 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 931 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 932 "data/maps/RustboroCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 933 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_RegisteredBrendan, MSGBOX_DEFAULT
# 934 "data/maps/RustboroCity/scripts.pory"
	waitfanfare
# 935 "data/maps/RustboroCity/scripts.pory"
	closemessage
# 936 "data/maps/RustboroCity/scripts.pory"
	delay 30
# 937 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_ENABLE_RIVAL_MATCH_CALL
# 938 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 8
# 939 "data/maps/RustboroCity/scripts.pory"
	setvar VAR_ROUTE104_STATE, 2
# 940 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanPassedBrineyWantToBattle, MSGBOX_YESNO
# 941 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
# 942 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_BattleBrendan
# 943 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 944 "data/maps/RustboroCity/scripts.pory"
	call RustboroCity_EventScript_RestoreBgm
# 945 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 946 "data/maps/RustboroCity/scripts.pory"
	end
# 947 "data/maps/RustboroCity/scripts.pory"

# 948 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanAskToBattle:: @ 81E1174
# 949 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanWantToBattle, MSGBOX_YESNO
# 950 "data/maps/RustboroCity/scripts.pory"
	compare VAR_RESULT, YES
# 951 "data/maps/RustboroCity/scripts.pory"
	goto_if_eq RustboroCity_EventScript_BattleBrendan
# 952 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanNoConfidenceInPokemon, MSGBOX_DEFAULT
# 953 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 954 "data/maps/RustboroCity/scripts.pory"
	end
# 955 "data/maps/RustboroCity/scripts.pory"

# 956 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendan:: @ 81E1191
# 957 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanIWontGoEasy, MSGBOX_DEFAULT
# 958 "data/maps/RustboroCity/scripts.pory"
	switch VAR_STARTER_MON
# 959 "data/maps/RustboroCity/scripts.pory"
	case 0, RustboroCity_EventScript_BattleBrendanTreecko
# 960 "data/maps/RustboroCity/scripts.pory"
	case 1, RustboroCity_EventScript_BattleBrendanTorchic
# 961 "data/maps/RustboroCity/scripts.pory"
	case 2, RustboroCity_EventScript_BattleBrendanMudkip
# 962 "data/maps/RustboroCity/scripts.pory"
	end
# 963 "data/maps/RustboroCity/scripts.pory"

# 964 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BrendanBrineyHint:: @ 81E11C0
# 965 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_BrendanMrBrineyHint, MSGBOX_DEFAULT
# 966 "data/maps/RustboroCity/scripts.pory"
	compare VAR_0x8008, 0
# 967 "data/maps/RustboroCity/scripts.pory"
	call_if_eq RustboroCity_EventScript_RestoreBgm
# 968 "data/maps/RustboroCity/scripts.pory"
	releaseall
# 969 "data/maps/RustboroCity/scripts.pory"
	end
# 970 "data/maps/RustboroCity/scripts.pory"

# 971 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTreecko:: @ 81E11D5
# 972 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TREECKO, RustboroCity_Text_BrendanDefeat
# 973 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 974 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 975 "data/maps/RustboroCity/scripts.pory"
	end
# 976 "data/maps/RustboroCity/scripts.pory"

# 977 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanTorchic:: @ 81E11E8
# 978 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_TORCHIC, RustboroCity_Text_BrendanDefeat
# 979 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 980 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 981 "data/maps/RustboroCity/scripts.pory"
	end
# 982 "data/maps/RustboroCity/scripts.pory"

# 983 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_BattleBrendanMudkip:: @ 81E11FB
# 984 "data/maps/RustboroCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_RUSTBORO_MUDKIP, RustboroCity_Text_BrendanDefeat
# 985 "data/maps/RustboroCity/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_RUSTBORO
# 986 "data/maps/RustboroCity/scripts.pory"
	goto RustboroCity_EventScript_BrendanBrineyHint
# 987 "data/maps/RustboroCity/scripts.pory"
	end
# 988 "data/maps/RustboroCity/scripts.pory"

# 989 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer0: @ 81E120E
# 990 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 991 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 992 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 993 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 994 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 995 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 996 "data/maps/RustboroCity/scripts.pory"
	step_end
# 997 "data/maps/RustboroCity/scripts.pory"

# 998 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer1: @ 81E1215
# 999 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1000 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1001 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1002 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1003 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1004 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1005 "data/maps/RustboroCity/scripts.pory"

# 1006 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer2: @ 81E121B
# 1007 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1008 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1009 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1010 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1011 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1012 "data/maps/RustboroCity/scripts.pory"

# 1013 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer3: @ 81E1220
# 1014 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1015 "data/maps/RustboroCity/scripts.pory"
	walk_left
# 1016 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1017 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1018 "data/maps/RustboroCity/scripts.pory"

# 1019 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer4: @ 81E1224
# 1020 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1021 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1022 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1023 "data/maps/RustboroCity/scripts.pory"

# 1024 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer5: @ 81E1227
# 1025 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1026 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1027 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1028 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1029 "data/maps/RustboroCity/scripts.pory"

# 1030 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer6: @ 81E122B
# 1031 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1032 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1033 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1034 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1035 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1036 "data/maps/RustboroCity/scripts.pory"

# 1037 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Movement_RivalApproachPlayer7: @ 81E1230
# 1038 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1039 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1040 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1041 "data/maps/RustboroCity/scripts.pory"
	walk_right
# 1042 "data/maps/RustboroCity/scripts.pory"
	walk_down
# 1043 "data/maps/RustboroCity/scripts.pory"
	step_end
# 1044 "data/maps/RustboroCity/scripts.pory"

# 1045 "data/maps/RustboroCity/scripts.pory"
RustboroCity_EventScript_Boy1:: @ 81E1236
# 1046 "data/maps/RustboroCity/scripts.pory"
	msgbox RustboroCity_Text_YouCanHave2On2Battle, MSGBOX_NPC
# 1047 "data/maps/RustboroCity/scripts.pory"
	end
# 1048 "data/maps/RustboroCity/scripts.pory"

# 1049 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WeShortenItToDevon: @ 81E123F
# 1050 "data/maps/RustboroCity/scripts.pory"
	.string "The Devon Corporation…\n"
# 1051 "data/maps/RustboroCity/scripts.pory"
	.string "We all just shorten it to Devon.\p"
# 1052 "data/maps/RustboroCity/scripts.pory"
	.string "That company makes all sorts of\n"
# 1053 "data/maps/RustboroCity/scripts.pory"
	.string "convenient products.$"
# 1054 "data/maps/RustboroCity/scripts.pory"

# 1055 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_SneakyLookingManWentAroundCorner: @ 81E12AC
# 1056 "data/maps/RustboroCity/scripts.pory"
	.string "Hm? A sneaky-looking man?\p"
# 1057 "data/maps/RustboroCity/scripts.pory"
	.string "Come to think of it, yes, a shady-\n"
# 1058 "data/maps/RustboroCity/scripts.pory"
	.string "looking guy went around the corner.$"
# 1059 "data/maps/RustboroCity/scripts.pory"

# 1060 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HaveYouChallengedGym: @ 81E130D
# 1061 "data/maps/RustboroCity/scripts.pory"
	.string "Have you taken the Pokémon Gym\n"
# 1062 "data/maps/RustboroCity/scripts.pory"
	.string "challenge?\p"
# 1063 "data/maps/RustboroCity/scripts.pory"
	.string "When you get that shiny Gym Badge\n"
# 1064 "data/maps/RustboroCity/scripts.pory"
	.string "in hand, I guess Trainers begin to\l"
# 1065 "data/maps/RustboroCity/scripts.pory"
	.string "realize what is required of them.$"
# 1066 "data/maps/RustboroCity/scripts.pory"

# 1067 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HeyThatsRustborosGymBadge: @ 81E139E
# 1068 "data/maps/RustboroCity/scripts.pory"
	.string "Hey, that's Rustboro's Gym Badge!\p"
# 1069 "data/maps/RustboroCity/scripts.pory"
	.string "Out of all the Pokémon Gym Badges,\n"
# 1070 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro's is the coolest, I'd say.$"
# 1071 "data/maps/RustboroCity/scripts.pory"

# 1072 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureNewAroundHere: @ 81E1407
# 1073 "data/maps/RustboroCity/scripts.pory"
	.string "Oh? Who might you be?\n"
# 1074 "data/maps/RustboroCity/scripts.pory"
	.string "You're a new face around these parts.\p"
# 1075 "data/maps/RustboroCity/scripts.pory"
	.string "Have you just transferred into the\n"
# 1076 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School?$"
# 1077 "data/maps/RustboroCity/scripts.pory"

# 1078 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymLeaderIsntEasyWithFire: @ 81E1480
# 1079 "data/maps/RustboroCity/scripts.pory"
	.string "I challenged the Gym Leader, but…\p"
# 1080 "data/maps/RustboroCity/scripts.pory"
	.string "It's not going to be easy winning with\n"
# 1081 "data/maps/RustboroCity/scripts.pory"
	.string "my Fire-type Pokémon…\p"
# 1082 "data/maps/RustboroCity/scripts.pory"
	.string "Fire-type Pokémon don't match up\n"
# 1083 "data/maps/RustboroCity/scripts.pory"
	.string "well against Rock-type Pokémon…$"
# 1084 "data/maps/RustboroCity/scripts.pory"

# 1085 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyWalksInTheTunnel: @ 81E1520
# 1086 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor Mr. Briney lives in\n"
# 1087 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1088 "data/maps/RustboroCity/scripts.pory"
	.string "He goes for walks in the tunnel every\n"
# 1089 "data/maps/RustboroCity/scripts.pory"
	.string "so often.$"
# 1090 "data/maps/RustboroCity/scripts.pory"

# 1091 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MrBrineyLovesPeeko: @ 81E1589
# 1092 "data/maps/RustboroCity/scripts.pory"
	.string "The old sailor Mr. Briney lives in\n"
# 1093 "data/maps/RustboroCity/scripts.pory"
	.string "a cottage by the sea.\p"
# 1094 "data/maps/RustboroCity/scripts.pory"
	.string "He said he was going shopping in\n"
# 1095 "data/maps/RustboroCity/scripts.pory"
	.string "Slateport for his pet, Peeko.\p"
# 1096 "data/maps/RustboroCity/scripts.pory"
	.string "That old sea dog, he must really love\n"
# 1097 "data/maps/RustboroCity/scripts.pory"
	.string "that Peeko.$"
# 1098 "data/maps/RustboroCity/scripts.pory"

# 1099 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WowYouHavePokemon: @ 81E1633
# 1100 "data/maps/RustboroCity/scripts.pory"
	.string "Wow, you have Pokémon with you, too.\p"
# 1101 "data/maps/RustboroCity/scripts.pory"
	.string "When I get bigger, I'm going to go\n"
# 1102 "data/maps/RustboroCity/scripts.pory"
	.string "places with Pokémon, too.$"
# 1103 "data/maps/RustboroCity/scripts.pory"

# 1104 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CatchRarePokemonIfIGoToSchool: @ 81E1695
# 1105 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School!\p"
# 1106 "data/maps/RustboroCity/scripts.pory"
	.string "If I go to this school, will I be able\n"
# 1107 "data/maps/RustboroCity/scripts.pory"
	.string "to catch rare Pokémon easily?$"
# 1108 "data/maps/RustboroCity/scripts.pory"

# 1109 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonCanChangeLookFromExp: @ 81E16F4
# 1110 "data/maps/RustboroCity/scripts.pory"
	.string "If a Pokémon gains experience in\n"
# 1111 "data/maps/RustboroCity/scripts.pory"
	.string "battles, it can sometimes change in\l"
# 1112 "data/maps/RustboroCity/scripts.pory"
	.string "the way it looks.$"
# 1113 "data/maps/RustboroCity/scripts.pory"

# 1114 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PokemonChangeShape: @ 81E174B
# 1115 "data/maps/RustboroCity/scripts.pory"
	.string "A Pokémon changes shape?\n"
# 1116 "data/maps/RustboroCity/scripts.pory"
	.string "If one did that, I would be shocked!$"
# 1117 "data/maps/RustboroCity/scripts.pory"

# 1118 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TradePokemonGrowFast: @ 81E1789
# 1119 "data/maps/RustboroCity/scripts.pory"
	.string "A Pokémon you get in a trade from\n"
# 1120 "data/maps/RustboroCity/scripts.pory"
	.string "someone grows fast.\p"
# 1121 "data/maps/RustboroCity/scripts.pory"
	.string "But if you don't have certain Gym\n"
# 1122 "data/maps/RustboroCity/scripts.pory"
	.string "Badges, it may not obey you…$"
# 1123 "data/maps/RustboroCity/scripts.pory"

# 1124 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_OutOfTheWay: @ 81E17FE
# 1125 "data/maps/RustboroCity/scripts.pory"
	.string "Get out!\n"
# 1126 "data/maps/RustboroCity/scripts.pory"
	.string "Out of the way!$"
# 1127 "data/maps/RustboroCity/scripts.pory"

# 1128 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_WaitDontTakeMyGoods: @ 81E1817
# 1129 "data/maps/RustboroCity/scripts.pory"
	.string "Wait! Pleeeaaase!\p"
# 1130 "data/maps/RustboroCity/scripts.pory"
	.string "Don't take my Goods!$"
# 1131 "data/maps/RustboroCity/scripts.pory"

# 1132 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_HelpMeIWasRobbed: @ 81E183E
# 1133 "data/maps/RustboroCity/scripts.pory"
	.string "Oh, it's you!\p"
# 1134 "data/maps/RustboroCity/scripts.pory"
	.string "You're that fantastic Trainer who\n"
# 1135 "data/maps/RustboroCity/scripts.pory"
	.string "helped me in Petalburg Woods!\p"
# 1136 "data/maps/RustboroCity/scripts.pory"
	.string "Help me! I was robbed by Team Aqua!\n"
# 1137 "data/maps/RustboroCity/scripts.pory"
	.string "I have to get the Devon Goods back!\p"
# 1138 "data/maps/RustboroCity/scripts.pory"
	.string "If I don't…\n"
# 1139 "data/maps/RustboroCity/scripts.pory"
	.string "I'm going to be in serious trouble.$"
# 1140 "data/maps/RustboroCity/scripts.pory"

# 1141 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_ShadyCharacterTookOffTowardsTunnel: @ 81E1904
# 1142 "data/maps/RustboroCity/scripts.pory"
	.string "That shady character, I think he took\n"
# 1143 "data/maps/RustboroCity/scripts.pory"
	.string "off towards the tunnel over there.$"
# 1144 "data/maps/RustboroCity/scripts.pory"

# 1145 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouGotItThankYou: @ 81E194D
# 1146 "data/maps/RustboroCity/scripts.pory"
	.string "Oh! How did it go?\n"
# 1147 "data/maps/RustboroCity/scripts.pory"
	.string "The Devon Goods?\p"
# 1148 "data/maps/RustboroCity/scripts.pory"
	.string "You did!\n"
# 1149 "data/maps/RustboroCity/scripts.pory"
	.string "You got them back!\p"
# 1150 "data/maps/RustboroCity/scripts.pory"
	.string "You really are a great Trainer!\p"
# 1151 "data/maps/RustboroCity/scripts.pory"
	.string "I know! As my thanks, I'll give you\n"
# 1152 "data/maps/RustboroCity/scripts.pory"
	.string "another Great Ball!$"
# 1153 "data/maps/RustboroCity/scripts.pory"

# 1154 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YoureLoadedWithItems: @ 81E19E5
# 1155 "data/maps/RustboroCity/scripts.pory"
	.string "You're loaded with items.\n"
# 1156 "data/maps/RustboroCity/scripts.pory"
	.string "I can't give you this Great Ball.$"
# 1157 "data/maps/RustboroCity/scripts.pory"

# 1158 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseComeWithMe: @ 81E1A21
# 1159 "data/maps/RustboroCity/scripts.pory"
	.string "Excuse me, please!\n"
# 1160 "data/maps/RustboroCity/scripts.pory"
	.string "Please come with me!$"
# 1161 "data/maps/RustboroCity/scripts.pory"

# 1162 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayHiLetsRegister: @ 81E1A49
# 1163 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, hi, {PLAYER}{KUN}!\p"
# 1164 "data/maps/RustboroCity/scripts.pory"
	.string "You had a Match Call feature put\n"
# 1165 "data/maps/RustboroCity/scripts.pory"
	.string "on your Pokénav!\p"
# 1166 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1167 "data/maps/RustboroCity/scripts.pory"
	.string "contact one another anytime!\p"
# 1168 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1169 "data/maps/RustboroCity/scripts.pory"

# 1170 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredMay: @ 81E1ADB
# 1171 "data/maps/RustboroCity/scripts.pory"
	.string "Registered May\n"
# 1172 "data/maps/RustboroCity/scripts.pory"
	.string "in the Pokénav.$"
# 1173 "data/maps/RustboroCity/scripts.pory"

# 1174 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayPassedBrineyWantToBattle: @ 81E1AFA
# 1175 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, by the way, I passed\n"
# 1176 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney in Petalburg Woods.\p"
# 1177 "data/maps/RustboroCity/scripts.pory"
	.string "I guess he's on his way home to his\n"
# 1178 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1179 "data/maps/RustboroCity/scripts.pory"
	.string "How's your Pokédex coming along,\n"
# 1180 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}? Mine's looking pretty decent!\p"
# 1181 "data/maps/RustboroCity/scripts.pory"
	.string "So…\n"
# 1182 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle?$"
# 1183 "data/maps/RustboroCity/scripts.pory"

# 1184 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayOhHaventRaisedPokemonEnough: @ 81E1BD3
# 1185 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, what's the matter?\p"
# 1186 "data/maps/RustboroCity/scripts.pory"
	.string "Haven't you caught or raised your\n"
# 1187 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon very much?\p"
# 1188 "data/maps/RustboroCity/scripts.pory"
	.string "That's not very good for a Trainer!$"
# 1189 "data/maps/RustboroCity/scripts.pory"

# 1190 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayWantToBattle: @ 81E1C48
# 1191 "data/maps/RustboroCity/scripts.pory"
	.string "May: So, what do you think?\n"
# 1192 "data/maps/RustboroCity/scripts.pory"
	.string "How about a little battle here?$"
# 1193 "data/maps/RustboroCity/scripts.pory"

# 1194 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayImNotGoingToLose: @ 81E1C84
# 1195 "data/maps/RustboroCity/scripts.pory"
	.string "May: You just became a Trainer,\n"
# 1196 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}. I'm not going to lose!$"
# 1197 "data/maps/RustboroCity/scripts.pory"

# 1198 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayDefeat: @ 81E1CC1
# 1199 "data/maps/RustboroCity/scripts.pory"
	.string "Yikes!\n"
# 1200 "data/maps/RustboroCity/scripts.pory"
	.string "You're better than I expected!$"
# 1201 "data/maps/RustboroCity/scripts.pory"

# 1202 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_MayMrBrineyHint: @ 81E1CE7
# 1203 "data/maps/RustboroCity/scripts.pory"
	.string "May: Oh, by the way, Mr. Briney, who\n"
# 1204 "data/maps/RustboroCity/scripts.pory"
	.string "I just passed…\p"
# 1205 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}{KUN}, you just moved here so you\n"
# 1206 "data/maps/RustboroCity/scripts.pory"
	.string "might not know this, but Mr. Briney\l"
# 1207 "data/maps/RustboroCity/scripts.pory"
	.string "was once a revered seafarer.$"
# 1208 "data/maps/RustboroCity/scripts.pory"

# 1209 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanHiLetsRegister: @ 81E1D7D
# 1210 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: Oh, hey, {PLAYER}!\p"
# 1211 "data/maps/RustboroCity/scripts.pory"
	.string "You had a Match Call feature put\n"
# 1212 "data/maps/RustboroCity/scripts.pory"
	.string "on your Pokénav! Cool!\p"
# 1213 "data/maps/RustboroCity/scripts.pory"
	.string "Let's register each other so we can\n"
# 1214 "data/maps/RustboroCity/scripts.pory"
	.string "get in touch anytime!\p"
# 1215 "data/maps/RustboroCity/scripts.pory"
	.string "… … … … … …$"
# 1216 "data/maps/RustboroCity/scripts.pory"

# 1217 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_RegisteredBrendan: @ 81E1E11
# 1218 "data/maps/RustboroCity/scripts.pory"
	.string "Registered Brendan\n"
# 1219 "data/maps/RustboroCity/scripts.pory"
	.string "in the Pokénav.$"
# 1220 "data/maps/RustboroCity/scripts.pory"

# 1221 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanPassedBrineyWantToBattle: @ 81E1E34
# 1222 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: By the way, {PLAYER}, I walked\n"
# 1223 "data/maps/RustboroCity/scripts.pory"
	.string "by Mr. Briney in Petalburg Woods.\p"
# 1224 "data/maps/RustboroCity/scripts.pory"
	.string "I bet he was on his way home to his\n"
# 1225 "data/maps/RustboroCity/scripts.pory"
	.string "cottage by the sea.\p"
# 1226 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, how's your Pokédex?\n"
# 1227 "data/maps/RustboroCity/scripts.pory"
	.string "Have you filled in any pages yet?\p"
# 1228 "data/maps/RustboroCity/scripts.pory"
	.string "Mine rules.\p"
# 1229 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle to test how\n"
# 1230 "data/maps/RustboroCity/scripts.pory"
	.string "far you've progressed?$"
# 1231 "data/maps/RustboroCity/scripts.pory"

# 1232 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanNoConfidenceInPokemon: @ 81E1F2F
# 1233 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: What's the matter? Don't have\n"
# 1234 "data/maps/RustboroCity/scripts.pory"
	.string "any confidence in your Pokémon?$"
# 1235 "data/maps/RustboroCity/scripts.pory"

# 1236 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanWantToBattle: @ 81E1F76
# 1237 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: What's up?\n"
# 1238 "data/maps/RustboroCity/scripts.pory"
	.string "Want to have a battle with me?$"
# 1239 "data/maps/RustboroCity/scripts.pory"

# 1240 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanIWontGoEasy: @ 81E1FA9
# 1241 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: I know you just became\n"
# 1242 "data/maps/RustboroCity/scripts.pory"
	.string "a Trainer, but I won't go easy!$"
# 1243 "data/maps/RustboroCity/scripts.pory"

# 1244 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanDefeat: @ 81E1FE9
# 1245 "data/maps/RustboroCity/scripts.pory"
	.string "Hmm…\n"
# 1246 "data/maps/RustboroCity/scripts.pory"
	.string "You're pretty good.$"
# 1247 "data/maps/RustboroCity/scripts.pory"

# 1248 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_BrendanMrBrineyHint: @ 81E2002
# 1249 "data/maps/RustboroCity/scripts.pory"
	.string "Brendan: By the way, you know\n"
# 1250 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney? The guy I just passed?\p"
# 1251 "data/maps/RustboroCity/scripts.pory"
	.string "I bet you didn't know this, since you\n"
# 1252 "data/maps/RustboroCity/scripts.pory"
	.string "just moved here, {PLAYER}, but\l"
# 1253 "data/maps/RustboroCity/scripts.pory"
	.string "Mr. Briney was once a great sailor.$"
# 1254 "data/maps/RustboroCity/scripts.pory"

# 1255 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TunnelNearingCompletion: @ 81E20A6
# 1256 "data/maps/RustboroCity/scripts.pory"
	.string "“Timesaving tunnel nearing\n"
# 1257 "data/maps/RustboroCity/scripts.pory"
	.string "completion!”\p"
# 1258 "data/maps/RustboroCity/scripts.pory"
	.string "…Is what it says on the sign, but\n"
# 1259 "data/maps/RustboroCity/scripts.pory"
	.string "there's also a big “X” splashed\l"
# 1260 "data/maps/RustboroCity/scripts.pory"
	.string "across it in red paint…$"
# 1261 "data/maps/RustboroCity/scripts.pory"

# 1262 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpSign: @ 81E2128
# 1263 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corporation\p"
# 1264 "data/maps/RustboroCity/scripts.pory"
	.string "“For all your living needs, we make\n"
# 1265 "data/maps/RustboroCity/scripts.pory"
	.string "it all.”$"
# 1266 "data/maps/RustboroCity/scripts.pory"

# 1267 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_GymSign: @ 81E2167
# 1268 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro City Pokémon Gym\n"
# 1269 "data/maps/RustboroCity/scripts.pory"
	.string "Leader: Roxanne\p"
# 1270 "data/maps/RustboroCity/scripts.pory"
	.string "“The Rock-loving honors student!”$"
# 1271 "data/maps/RustboroCity/scripts.pory"

# 1272 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevonCorpBranchOfficeSign: @ 81E21B3
# 1273 "data/maps/RustboroCity/scripts.pory"
	.string "Devon Corp. Branch Office\p"
# 1274 "data/maps/RustboroCity/scripts.pory"
	.string "“Access limited to Devon employees\n"
# 1275 "data/maps/RustboroCity/scripts.pory"
	.string "and authorized personnel.”$"
# 1276 "data/maps/RustboroCity/scripts.pory"

# 1277 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CitySign: @ 81E220B
# 1278 "data/maps/RustboroCity/scripts.pory"
	.string "Rustboro City\p"
# 1279 "data/maps/RustboroCity/scripts.pory"
	.string "“The city probing the integration of\n"
# 1280 "data/maps/RustboroCity/scripts.pory"
	.string "nature and science.”$"
# 1281 "data/maps/RustboroCity/scripts.pory"

# 1282 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_TrainersSchoolSign: @ 81E2253
# 1283 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon Trainer's School\p"
# 1284 "data/maps/RustboroCity/scripts.pory"
	.string "“We'll teach you anything about\n"
# 1285 "data/maps/RustboroCity/scripts.pory"
	.string "Pokémon!”$"
# 1286 "data/maps/RustboroCity/scripts.pory"

# 1287 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_CuttersHouse: @ 81E2296
# 1288 "data/maps/RustboroCity/scripts.pory"
	.string "Cutter's House$"
# 1289 "data/maps/RustboroCity/scripts.pory"

# 1290 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_DevelopedNewPokenavFeature: @ 81E22A5
# 1291 "data/maps/RustboroCity/scripts.pory"
	.string "I've been developing an added feature\n"
# 1292 "data/maps/RustboroCity/scripts.pory"
	.string "for the Pokénav…\p"
# 1293 "data/maps/RustboroCity/scripts.pory"
	.string "And it turned out great!\p"
# 1294 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, may I see that Pokénav?\n"
# 1295 "data/maps/RustboroCity/scripts.pory"
	.string "The one our President gave you?$"
# 1296 "data/maps/RustboroCity/scripts.pory"

# 1297 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_AddedMatchCallPleaseCallMrStone: @ 81E2331
# 1298 "data/maps/RustboroCity/scripts.pory"
	.string "There you go, {PLAYER}!\p"
# 1299 "data/maps/RustboroCity/scripts.pory"
	.string "I added a new feature named\n"
# 1300 "data/maps/RustboroCity/scripts.pory"
	.string "Match Call to your Pokénav.\p"
# 1301 "data/maps/RustboroCity/scripts.pory"
	.string "Using the Match Call feature,\n"
# 1302 "data/maps/RustboroCity/scripts.pory"
	.string "you can chat with people who have\l"
# 1303 "data/maps/RustboroCity/scripts.pory"
	.string "been registered in your Pokénav.\p"
# 1304 "data/maps/RustboroCity/scripts.pory"
	.string "{PLAYER}, our President Stone should\n"
# 1305 "data/maps/RustboroCity/scripts.pory"
	.string "be registered in your Pokénav.\p"
# 1306 "data/maps/RustboroCity/scripts.pory"
	.string "Test it out.\n"
# 1307 "data/maps/RustboroCity/scripts.pory"
	.string "Please give our President a call.$"
# 1308 "data/maps/RustboroCity/scripts.pory"

# 1309 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_PleaseSelectPokenav: @ 81E2449
# 1310 "data/maps/RustboroCity/scripts.pory"
	.string "Please select the Pokénav.$"
# 1311 "data/maps/RustboroCity/scripts.pory"

# 1312 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_IdBetterGetBackToWork: @ 81E2464
# 1313 "data/maps/RustboroCity/scripts.pory"
	.string "Okay, I'd better get back to work.\n"
# 1314 "data/maps/RustboroCity/scripts.pory"
	.string "Please take care, {PLAYER}!$"
# 1315 "data/maps/RustboroCity/scripts.pory"

# 1316 "data/maps/RustboroCity/scripts.pory"
RustboroCity_Text_YouCanHave2On2Battle: @ 81E249D
# 1317 "data/maps/RustboroCity/scripts.pory"
	.string "Did you know this?\p"
# 1318 "data/maps/RustboroCity/scripts.pory"
	.string "You can have a 2-on-2 battle even\n"
# 1319 "data/maps/RustboroCity/scripts.pory"
	.string "if you're not with another Trainer.\p"
# 1320 "data/maps/RustboroCity/scripts.pory"
	.string "If you catch the eyes of two Trainers\n"
# 1321 "data/maps/RustboroCity/scripts.pory"
	.string "when you have two or more Pokémon,\l"
# 1322 "data/maps/RustboroCity/scripts.pory"
	.string "they'll both challenge you.\p"
# 1323 "data/maps/RustboroCity/scripts.pory"
	.string "Don't you think it'd be cool if you\n"
# 1324 "data/maps/RustboroCity/scripts.pory"
	.string "could beat two Trainers by yourself?$"
