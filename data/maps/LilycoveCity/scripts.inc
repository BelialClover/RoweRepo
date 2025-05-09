# 1 "data/maps/LilycoveCity/scripts.pory"

# 2 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_WOMAN_1, 19
# 3 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_MAN_1, 20
# 4 "data/maps/LilycoveCity/scripts.pory"

# 5 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_MapScripts:: @ 81E2B3C
# 6 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
# 7 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
# 8 "data/maps/LilycoveCity/scripts.pory"
	.byte 0
# 9 "data/maps/LilycoveCity/scripts.pory"

# 10 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnTransition: @ 81E2B47
# 11 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 12 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_ROUTE120
# 13 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_ROUTE121
# 14 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 15 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 16 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 17 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 18 "data/maps/LilycoveCity/scripts.pory"
	end
# 19 "data/maps/LilycoveCity/scripts.pory"

# 20 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnLoad: @ 81E2B61
# 21 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
# 22 "data/maps/LilycoveCity/scripts.pory"
	end
# 23 "data/maps/LilycoveCity/scripts.pory"

# 24 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SetWailmerMetatiles:: @ 81E2B6B
# 25 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, 1
# 26 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, 1
# 27 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, 1
# 28 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, 1
# 29 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, 1
# 30 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, 1
# 31 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, 1
# 32 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, 1
# 33 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, 1
# 34 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, 1
# 35 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, 1
# 36 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, 1
# 37 "data/maps/LilycoveCity/scripts.pory"
	return
# 38 "data/maps/LilycoveCity/scripts.pory"

# 39 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman:: @ 81E2BD8
# 40 "data/maps/LilycoveCity/scripts.pory"
	lock
# 41 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 42 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 43 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
# 44 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 45 "data/maps/LilycoveCity/scripts.pory"
	random 10
# 46 "data/maps/LilycoveCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 47 "data/maps/LilycoveCity/scripts.pory"
	giveitem VAR_RESULT
# 48 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 49 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 50 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 51 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 52 "data/maps/LilycoveCity/scripts.pory"
	release
# 53 "data/maps/LilycoveCity/scripts.pory"
	end
# 54 "data/maps/LilycoveCity/scripts.pory"

# 55 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry:: @ 81E2C18
# 56 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 57 "data/maps/LilycoveCity/scripts.pory"
	release
# 58 "data/maps/LilycoveCity/scripts.pory"
	end
# 59 "data/maps/LilycoveCity/scripts.pory"

# 60 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man3:: @ 81E2C22
# 61 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
# 62 "data/maps/LilycoveCity/scripts.pory"
	end
# 63 "data/maps/LilycoveCity/scripts.pory"

# 64 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl:: @ 81E2C2B
# 65 "data/maps/LilycoveCity/scripts.pory"
	lock
# 66 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 67 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
# 68 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 69 "data/maps/LilycoveCity/scripts.pory"
	release
# 70 "data/maps/LilycoveCity/scripts.pory"
	end
# 71 "data/maps/LilycoveCity/scripts.pory"

# 72 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_GirlAquaGone:: @ 81E2C40
# 73 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 74 "data/maps/LilycoveCity/scripts.pory"
	release
# 75 "data/maps/LilycoveCity/scripts.pory"
	end
# 76 "data/maps/LilycoveCity/scripts.pory"

# 77 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RichBoy:: @ 81E2C4A
# 78 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
# 79 "data/maps/LilycoveCity/scripts.pory"
	end
# 80 "data/maps/LilycoveCity/scripts.pory"

# 81 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2:: @ 81E2C53
# 82 "data/maps/LilycoveCity/scripts.pory"
	lock
# 83 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 84 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
# 85 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 86 "data/maps/LilycoveCity/scripts.pory"
	release
# 87 "data/maps/LilycoveCity/scripts.pory"
	end
# 88 "data/maps/LilycoveCity/scripts.pory"

# 89 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2AquaGone:: @ 81E2C68
# 90 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 91 "data/maps/LilycoveCity/scripts.pory"
	release
# 92 "data/maps/LilycoveCity/scripts.pory"
	end
# 93 "data/maps/LilycoveCity/scripts.pory"

# 94 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2:: @ 81E2C72
# 95 "data/maps/LilycoveCity/scripts.pory"
	lock
# 96 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 97 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
# 98 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 99 "data/maps/LilycoveCity/scripts.pory"
	release
# 100 "data/maps/LilycoveCity/scripts.pory"
	end
# 101 "data/maps/LilycoveCity/scripts.pory"

# 102 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2AquaGone:: @ 81E2C87
# 103 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 104 "data/maps/LilycoveCity/scripts.pory"
	release
# 105 "data/maps/LilycoveCity/scripts.pory"
	end
# 106 "data/maps/LilycoveCity/scripts.pory"

# 107 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man2:: @ 81E2C91
# 108 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
# 109 "data/maps/LilycoveCity/scripts.pory"
	end
# 110 "data/maps/LilycoveCity/scripts.pory"

# 111 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1:: @ 81E2C9A
# 112 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 113 "data/maps/LilycoveCity/scripts.pory"
	end
# 114 "data/maps/LilycoveCity/scripts.pory"

# 115 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF:: @ 81E2CA3
# 116 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 117 "data/maps/LilycoveCity/scripts.pory"
	end
# 118 "data/maps/LilycoveCity/scripts.pory"

# 119 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2:: @ 81E2CAC
# 120 "data/maps/LilycoveCity/scripts.pory"
	lock
# 121 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 122 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
# 123 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 124 "data/maps/LilycoveCity/scripts.pory"
	release
# 125 "data/maps/LilycoveCity/scripts.pory"
	end
# 126 "data/maps/LilycoveCity/scripts.pory"

# 127 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2AquaGone:: @ 81E2CC1
# 128 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 129 "data/maps/LilycoveCity/scripts.pory"
	release
# 130 "data/maps/LilycoveCity/scripts.pory"
	end
# 131 "data/maps/LilycoveCity/scripts.pory"

# 132 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor1:: @ 81E2CCB
# 133 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
# 134 "data/maps/LilycoveCity/scripts.pory"
	end
# 135 "data/maps/LilycoveCity/scripts.pory"

# 136 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_FatMan:: @ 81E2CD4
# 137 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
# 138 "data/maps/LilycoveCity/scripts.pory"
	end
# 139 "data/maps/LilycoveCity/scripts.pory"

# 140 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man1:: @ 81E2CDD
# 141 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 142 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 143 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_MAN_1, Common_Movement_FaceOriginalDirection
# 144 "data/maps/LilycoveCity/scripts.pory"
	end
# 145 "data/maps/LilycoveCity/scripts.pory"

# 146 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman1:: @ 81E2CEE
# 147 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 148 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 149 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 150 "data/maps/LilycoveCity/scripts.pory"
	end
# 151 "data/maps/LilycoveCity/scripts.pory"

# 152 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CitySign:: @ 81E2CFF
# 153 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
# 154 "data/maps/LilycoveCity/scripts.pory"
	end
# 155 "data/maps/LilycoveCity/scripts.pory"

# 156 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ContestHallSign:: @ 81E2D08
# 157 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
# 158 "data/maps/LilycoveCity/scripts.pory"
	end
# 159 "data/maps/LilycoveCity/scripts.pory"

# 160 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MotelSign:: @ 81E2D11
# 161 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
# 162 "data/maps/LilycoveCity/scripts.pory"
	end
# 163 "data/maps/LilycoveCity/scripts.pory"

# 164 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign:: @ 81E2D1A
# 165 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 166 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerContestPaintings
# 167 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 168 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
# 169 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 170 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 171 "data/maps/LilycoveCity/scripts.pory"
	end
# 172 "data/maps/LilycoveCity/scripts.pory"

# 173 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSignNoPaintings:: @ 81E2D3A
# 174 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 175 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 176 "data/maps/LilycoveCity/scripts.pory"
	end
# 177 "data/maps/LilycoveCity/scripts.pory"

# 178 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign:: @ 81E2D44
# 179 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 180 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
# 181 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 182 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 183 "data/maps/LilycoveCity/scripts.pory"
	end
# 184 "data/maps/LilycoveCity/scripts.pory"

# 185 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSignFerryReady:: @ 81E2D58
# 186 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 187 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 188 "data/maps/LilycoveCity/scripts.pory"
	end
# 189 "data/maps/LilycoveCity/scripts.pory"

# 190 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_TrainerFanClubSign:: @ 81E2D62
# 191 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 192 "data/maps/LilycoveCity/scripts.pory"
	end
# 193 "data/maps/LilycoveCity/scripts.pory"

# 194 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DepartmentStoreSign:: @ 81E2D6B
# 195 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
# 196 "data/maps/LilycoveCity/scripts.pory"
	end
# 197 "data/maps/LilycoveCity/scripts.pory"

# 198 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MoveDeletersHouseSign:: @ 81E2D74
# 199 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
# 200 "data/maps/LilycoveCity/scripts.pory"
	end
# 201 "data/maps/LilycoveCity/scripts.pory"

# 202 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_WailmerTrainerGrunt:: @ 81E2D7D
# 203 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 204 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
# 205 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 206 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 207 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 208 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
# 209 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 210 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 211 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_WAILMER_TRAINER
# 212 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 213 "data/maps/LilycoveCity/scripts.pory"
	end
# 214 "data/maps/LilycoveCity/scripts.pory"

# 215 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MetWailmerTrainer:: @ 81E2DB0
# 216 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 217 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 218 "data/maps/LilycoveCity/scripts.pory"
	end
# 219 "data/maps/LilycoveCity/scripts.pory"

# 220 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt1:: @ 81E2DBA
# 221 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
# 222 "data/maps/LilycoveCity/scripts.pory"
	end
# 223 "data/maps/LilycoveCity/scripts.pory"

# 224 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt2:: @ 81E2DC3
# 225 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
# 226 "data/maps/LilycoveCity/scripts.pory"
	end
# 227 "data/maps/LilycoveCity/scripts.pory"

# 228 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt3:: @ 81E2DCC
# 229 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
# 230 "data/maps/LilycoveCity/scripts.pory"
	end
# 231 "data/maps/LilycoveCity/scripts.pory"

# 232 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt4:: @ 81E2DD5
# 233 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
# 234 "data/maps/LilycoveCity/scripts.pory"
	end
# 235 "data/maps/LilycoveCity/scripts.pory"

# 236 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival:: @ 81E2DDE
# 237 "data/maps/LilycoveCity/scripts.pory"
	lock
# 238 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 239 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 240 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, MALE
# 241 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq LilycoveCity_EventScript_May
# 242 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, FEMALE
# 243 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq LilycoveCity_EventScript_Brendan
# 244 "data/maps/LilycoveCity/scripts.pory"
	end
# 245 "data/maps/LilycoveCity/scripts.pory"

# 246 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May:: @ 81E2DF8
# 247 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, 1
# 248 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattleAgain
# 249 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattle
# 250 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, NO
# 251 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq LilycoveCity_EventScript_DeclineMayBattle
# 252 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 253 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 254 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleMayTreecko
# 255 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleMayTorchic
# 256 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleMayMudkip
# 257 "data/maps/LilycoveCity/scripts.pory"
	end
# 258 "data/maps/LilycoveCity/scripts.pory"

# 259 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattleAgain:: @ 81E2E48
# 260 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
# 261 "data/maps/LilycoveCity/scripts.pory"
	return
# 262 "data/maps/LilycoveCity/scripts.pory"

# 263 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattle:: @ 81E2E51
# 264 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 265 "data/maps/LilycoveCity/scripts.pory"
	return
# 266 "data/maps/LilycoveCity/scripts.pory"

# 267 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineMayBattle:: @ 81E2E5A
# 268 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 269 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 270 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 271 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 272 "data/maps/LilycoveCity/scripts.pory"
	release
# 273 "data/maps/LilycoveCity/scripts.pory"
	end
# 274 "data/maps/LilycoveCity/scripts.pory"

# 275 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan:: @ 81E2E6B
# 276 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, 1
# 277 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattleAgain
# 278 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattle
# 279 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, NO
# 280 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq LilycoveCity_EventScript_DeclineBrendanBattle
# 281 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 282 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 283 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleBrendanTreecko
# 284 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleBrendanTorchic
# 285 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleBrendanMudkip
# 286 "data/maps/LilycoveCity/scripts.pory"
	end
# 287 "data/maps/LilycoveCity/scripts.pory"

# 288 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattleAgain:: @ 81E2EBB
# 289 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 290 "data/maps/LilycoveCity/scripts.pory"
	return
# 291 "data/maps/LilycoveCity/scripts.pory"

# 292 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattle:: @ 81E2EC4
# 293 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 294 "data/maps/LilycoveCity/scripts.pory"
	return
# 295 "data/maps/LilycoveCity/scripts.pory"

# 296 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineBrendanBattle:: @ 81E2ECD
# 297 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 298 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 299 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 300 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 301 "data/maps/LilycoveCity/scripts.pory"
	release
# 302 "data/maps/LilycoveCity/scripts.pory"
	end
# 303 "data/maps/LilycoveCity/scripts.pory"

# 304 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTreecko:: @ 81E2EDE
# 305 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
# 306 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 307 "data/maps/LilycoveCity/scripts.pory"
	end
# 308 "data/maps/LilycoveCity/scripts.pory"

# 309 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTorchic:: @ 81E2EEE
# 310 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
# 311 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 312 "data/maps/LilycoveCity/scripts.pory"
	end
# 313 "data/maps/LilycoveCity/scripts.pory"

# 314 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayMudkip:: @ 81E2EFE
# 315 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
# 316 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 317 "data/maps/LilycoveCity/scripts.pory"
	end
# 318 "data/maps/LilycoveCity/scripts.pory"

# 319 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTreecko:: @ 81E2F0E
# 320 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
# 321 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 322 "data/maps/LilycoveCity/scripts.pory"
	end
# 323 "data/maps/LilycoveCity/scripts.pory"

# 324 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTorchic:: @ 81E2F1E
# 325 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
# 326 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 327 "data/maps/LilycoveCity/scripts.pory"
	end
# 328 "data/maps/LilycoveCity/scripts.pory"

# 329 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanMudkip:: @ 81E2F2E
# 330 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
# 331 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 332 "data/maps/LilycoveCity/scripts.pory"
	end
# 333 "data/maps/LilycoveCity/scripts.pory"

# 334 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay:: @ 81E2F3E
# 335 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 336 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 337 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 338 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 339 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq LilycoveCity_EventScript_MayCollectBadges
# 340 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, TRUE
# 341 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq LilycoveCity_EventScript_MayPokemonLeague
# 342 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 343 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 344 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 345 "data/maps/LilycoveCity/scripts.pory"
	end
# 346 "data/maps/LilycoveCity/scripts.pory"

# 347 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CheckFinalBadge:: @ 81E2F76
# 348 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_HasFinalBadge
# 349 "data/maps/LilycoveCity/scripts.pory"
	return
# 350 "data/maps/LilycoveCity/scripts.pory"

# 351 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HasFinalBadge:: @ 81E2F80
# 352 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
# 353 "data/maps/LilycoveCity/scripts.pory"
	return
# 354 "data/maps/LilycoveCity/scripts.pory"

# 355 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayCollectBadges:: @ 81E2F86
# 356 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
# 357 "data/maps/LilycoveCity/scripts.pory"
	return
# 358 "data/maps/LilycoveCity/scripts.pory"

# 359 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayPokemonLeague:: @ 81E2F8F
# 360 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayBattleFrontier
# 361 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 362 "data/maps/LilycoveCity/scripts.pory"
	return
# 363 "data/maps/LilycoveCity/scripts.pory"

# 364 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayBattleFrontier:: @ 81E2FA1
# 365 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 366 "data/maps/LilycoveCity/scripts.pory"
	return
# 367 "data/maps/LilycoveCity/scripts.pory"

# 368 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan:: @ 81E2FAA
# 369 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 370 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 371 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 372 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, FALSE
# 373 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq LilycoveCity_EventScript_BrendanCollectBadges
# 374 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, TRUE
# 375 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq LilycoveCity_EventScript_BrendanPokemonLeague
# 376 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 377 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 378 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 379 "data/maps/LilycoveCity/scripts.pory"
	end
# 380 "data/maps/LilycoveCity/scripts.pory"

# 381 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanCollectBadges:: @ 81E2FE2
# 382 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
# 383 "data/maps/LilycoveCity/scripts.pory"
	return
# 384 "data/maps/LilycoveCity/scripts.pory"

# 385 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanPokemonLeague:: @ 81E2FEB
# 386 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanBattleFrontier
# 387 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 388 "data/maps/LilycoveCity/scripts.pory"
	return
# 389 "data/maps/LilycoveCity/scripts.pory"

# 390 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanBattleFrontier:: @ 81E2FFD
# 391 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 392 "data/maps/LilycoveCity/scripts.pory"
	return
# 393 "data/maps/LilycoveCity/scripts.pory"

# 394 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RivalFlyAway:: @ 81E3006
# 395 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 396 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFastestDown
# 397 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 398 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 399 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 400 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 401 "data/maps/LilycoveCity/scripts.pory"
	delay 15
# 402 "data/maps/LilycoveCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 403 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 404 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 405 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 406 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 407 "data/maps/LilycoveCity/scripts.pory"
	release
# 408 "data/maps/LilycoveCity/scripts.pory"
	end
# 409 "data/maps/LilycoveCity/scripts.pory"

# 410 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM:: @ 81E302D
# 411 "data/maps/LilycoveCity/scripts.pory"
	lock
# 412 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 413 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_YESNO
# 414 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, YES
# 415 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq LilycoveCity_EventScript_KnowAboutBerryBlender
# 416 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, NO
# 417 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq LilycoveCity_EventScript_DontKnowAboutBerryBlender
# 418 "data/maps/LilycoveCity/scripts.pory"
	release
# 419 "data/maps/LilycoveCity/scripts.pory"
	end
# 420 "data/maps/LilycoveCity/scripts.pory"

# 421 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender:: @ 81E304F
# 422 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 423 "data/maps/LilycoveCity/scripts.pory"
	return
# 424 "data/maps/LilycoveCity/scripts.pory"

# 425 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender:: @ 81E3058
# 426 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 427 "data/maps/LilycoveCity/scripts.pory"
	return
# 428 "data/maps/LilycoveCity/scripts.pory"

# 429 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayShoppingLetsBattle: @ 81E3061
# 430 "data/maps/LilycoveCity/scripts.pory"
	.string "May: Oh, hey?\n"
# 431 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, are you shopping, too?\p"
# 432 "data/maps/LilycoveCity/scripts.pory"
	.string "I bought a whole bunch of Dolls and\n"
# 433 "data/maps/LilycoveCity/scripts.pory"
	.string "Posters.\p"
# 434 "data/maps/LilycoveCity/scripts.pory"
	.string "Of course, I've also caught a lot of\n"
# 435 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon, and I'm raising them\l"
# 436 "data/maps/LilycoveCity/scripts.pory"
	.string "properly, too.\p"
# 437 "data/maps/LilycoveCity/scripts.pory"
	.string "Actually, I'm more worried if you're\n"
# 438 "data/maps/LilycoveCity/scripts.pory"
	.string "raising Pokémon properly, {PLAYER}{KUN}.\p"
# 439 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll battle with you, so you can show\n"
# 440 "data/maps/LilycoveCity/scripts.pory"
	.string "me your Pokémon, {PLAYER}{KUN}.$"
# 441 "data/maps/LilycoveCity/scripts.pory"

# 442 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayNotRaisingPokemon: @ 81E318D
# 443 "data/maps/LilycoveCity/scripts.pory"
	.string "May: Oh, why? {PLAYER}{KUN}, haven't you\n"
# 444 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising your Pokémon?\p"
# 445 "data/maps/LilycoveCity/scripts.pory"
	.string "That's not a very good showing as a\n"
# 446 "data/maps/LilycoveCity/scripts.pory"
	.string "Trainer…$"
# 447 "data/maps/LilycoveCity/scripts.pory"

# 448 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayBattleMe: @ 81E31F5
# 449 "data/maps/LilycoveCity/scripts.pory"
	.string "May: Come on, battle with me, so I can\n"
# 450 "data/maps/LilycoveCity/scripts.pory"
	.string "check out your Pokémon!$"
# 451 "data/maps/LilycoveCity/scripts.pory"

# 452 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayWontBeBeaten: @ 81E3234
# 453 "data/maps/LilycoveCity/scripts.pory"
	.string "May: The Pokémon I raised won't be\n"
# 454 "data/maps/LilycoveCity/scripts.pory"
	.string "beaten by your Pokémon, {PLAYER}{KUN}!$"
# 455 "data/maps/LilycoveCity/scripts.pory"

# 456 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayDefeat: @ 81E3275
# 457 "data/maps/LilycoveCity/scripts.pory"
	.string "… … … … … … … …\p"
# 458 "data/maps/LilycoveCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 459 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, on Route 103.\p"
# 460 "data/maps/LilycoveCity/scripts.pory"
	.string "That battle helped you become this\n"
# 461 "data/maps/LilycoveCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 462 "data/maps/LilycoveCity/scripts.pory"

# 463 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayGoingBackToLittleroot: @ 81E32FB
# 464 "data/maps/LilycoveCity/scripts.pory"
	.string "May: I'm thinking of going back to\n"
# 465 "data/maps/LilycoveCity/scripts.pory"
	.string "Littleroot soon.\p"
# 466 "data/maps/LilycoveCity/scripts.pory"
	.string "I've caught a decent group of Pokémon,\n"
# 467 "data/maps/LilycoveCity/scripts.pory"
	.string "and my Pokédex is coming along, so\l"
# 468 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going home to show my dad.$"
# 469 "data/maps/LilycoveCity/scripts.pory"

# 470 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToCollectBadges: @ 81E3398
# 471 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 472 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the Gym Badges and take\n"
# 473 "data/maps/LilycoveCity/scripts.pory"
	.string "the Pokémon League challenge?\p"
# 474 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, while you're collecting Badges,\n"
# 475 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
# 476 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex. I'll complete it before you!\p"
# 477 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 478 "data/maps/LilycoveCity/scripts.pory"

# 479 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToPokemonLeague: @ 81E346D
# 480 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 481 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the Pokémon League\n"
# 482 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 483 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 484 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex?\p"
# 485 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 486 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my Pokédex before you!\p"
# 487 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 488 "data/maps/LilycoveCity/scripts.pory"

# 489 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToBattleFrontier: @ 81E353A
# 490 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 491 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the Battle Frontier\n"
# 492 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 493 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 494 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex?\p"
# 495 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 496 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my Pokédex before you!\p"
# 497 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 498 "data/maps/LilycoveCity/scripts.pory"

# 499 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanShoppingLetsBattle: @ 81E3608
# 500 "data/maps/LilycoveCity/scripts.pory"
	.string "Brendan: Oh, hey, it's {PLAYER}.\p"
# 501 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm running an errand for my dad.\n"
# 502 "data/maps/LilycoveCity/scripts.pory"
	.string "No, I'm not buying any Dolls.\p"
# 503 "data/maps/LilycoveCity/scripts.pory"
	.string "Anyways, it's been a while.\p"
# 504 "data/maps/LilycoveCity/scripts.pory"
	.string "Want to have a battle to see who's been\n"
# 505 "data/maps/LilycoveCity/scripts.pory"
	.string "raising Pokémon better?$"
# 506 "data/maps/LilycoveCity/scripts.pory"

# 507 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanNoConfidence: @ 81E36BF
# 508 "data/maps/LilycoveCity/scripts.pory"
	.string "Brendan: Oh, what's the matter?\n"
# 509 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't have the confidence?$"
# 510 "data/maps/LilycoveCity/scripts.pory"

# 511 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanBattleMe: @ 81E36FA
# 512 "data/maps/LilycoveCity/scripts.pory"
	.string "Brendan: Want to battle to see who's\n"
# 513 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising Pokémon better?$"
# 514 "data/maps/LilycoveCity/scripts.pory"

# 515 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanWontBeBeaten: @ 81E373C
# 516 "data/maps/LilycoveCity/scripts.pory"
	.string "Brendan: Aww, but you know I'm not\n"
# 517 "data/maps/LilycoveCity/scripts.pory"
	.string "going to lose to no {PLAYER}.$"
# 518 "data/maps/LilycoveCity/scripts.pory"

# 519 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanDefeat: @ 81E3777
# 520 "data/maps/LilycoveCity/scripts.pory"
	.string "Humph…\n"
# 521 "data/maps/LilycoveCity/scripts.pory"
	.string "You've done a lot of raising.\p"
# 522 "data/maps/LilycoveCity/scripts.pory"
	.string "That stings a bit--I had a head start\n"
# 523 "data/maps/LilycoveCity/scripts.pory"
	.string "on you as a Trainer…$"
# 524 "data/maps/LilycoveCity/scripts.pory"

# 525 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanGoingBackToLittleroot: @ 81E37D7
# 526 "data/maps/LilycoveCity/scripts.pory"
	.string "Brendan: I…\n"
# 527 "data/maps/LilycoveCity/scripts.pory"
	.string "I plan on going home to Littleroot.\p"
# 528 "data/maps/LilycoveCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 529 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex. It's coming together pretty\l"
# 530 "data/maps/LilycoveCity/scripts.pory"
	.string "decently, so I should go show him.$"
# 531 "data/maps/LilycoveCity/scripts.pory"

# 532 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToCollectBadges: @ 81E3876
# 533 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 534 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the Gym Badges and take\n"
# 535 "data/maps/LilycoveCity/scripts.pory"
	.string "the Pokémon League challenge?\p"
# 536 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I'll do that, too…\p"
# 537 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 538 "data/maps/LilycoveCity/scripts.pory"

# 539 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToPokemonLeague: @ 81E390C
# 540 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 541 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, are you\n"
# 542 "data/maps/LilycoveCity/scripts.pory"
	.string "taking the Pokémon League challenge?\p"
# 543 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, even me--if I trained my Pokémon\n"
# 544 "data/maps/LilycoveCity/scripts.pory"
	.string "a bit more, I should be stronger than\l"
# 545 "data/maps/LilycoveCity/scripts.pory"
	.string "you, {PLAYER}.\p"
# 546 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 547 "data/maps/LilycoveCity/scripts.pory"

# 548 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToBattleFrontier: @ 81E39E3
# 549 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 550 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the Battle Frontier\n"
# 551 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 552 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 553 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokédex?\p"
# 554 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, you should\n"
# 555 "data/maps/LilycoveCity/scripts.pory"
	.string "consider the Battle Frontier.\p"
# 556 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, if I train my Pokémon a bit more,\n"
# 557 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll get stronger than you, {PLAYER}.\p"
# 558 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I should go to the Battle\n"
# 559 "data/maps/LilycoveCity/scripts.pory"
	.string "Frontier.\p"
# 560 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 561 "data/maps/LilycoveCity/scripts.pory"

# 562 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday: @ 81E3B2C
# 563 "data/maps/LilycoveCity/scripts.pory"
	.string "Fufufu…\p"
# 564 "data/maps/LilycoveCity/scripts.pory"
	.string "We moved more loot into our secret\n"
# 565 "data/maps/LilycoveCity/scripts.pory"
	.string "Hideout today…\p"
# 566 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 567 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 568 "data/maps/LilycoveCity/scripts.pory"

# 569 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings: @ 81E3B95
# 570 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm just a Grunt, so I don't know what\n"
# 571 "data/maps/LilycoveCity/scripts.pory"
	.string "the Boss is thinking…\p"
# 572 "data/maps/LilycoveCity/scripts.pory"
	.string "But being on Team Aqua, I know I'll get\n"
# 573 "data/maps/LilycoveCity/scripts.pory"
	.string "the chance to do big things!\p"
# 574 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 575 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 576 "data/maps/LilycoveCity/scripts.pory"

# 577 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove: @ 81E3C46
# 578 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you!\p"
# 579 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't go near the cave in the cove!\p"
# 580 "data/maps/LilycoveCity/scripts.pory"
	.string "Why? You don't need a reason why!\n"
# 581 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an adult, so you just listen to me!$"
# 582 "data/maps/LilycoveCity/scripts.pory"

# 583 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs: @ 81E3CBE
# 584 "data/maps/LilycoveCity/scripts.pory"
	.string "If this whole wide world becomes ours,\n"
# 585 "data/maps/LilycoveCity/scripts.pory"
	.string "Team Aqua's, it will be a happier\l"
# 586 "data/maps/LilycoveCity/scripts.pory"
	.string "place for Pokémon, too.$"
# 587 "data/maps/LilycoveCity/scripts.pory"

# 588 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater: @ 81E3D1F
# 589 "data/maps/LilycoveCity/scripts.pory"
	.string "There! Wailmer!\n"
# 590 "data/maps/LilycoveCity/scripts.pory"
	.string "Leap out of the water now!$"
# 591 "data/maps/LilycoveCity/scripts.pory"

# 592 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining: @ 81E3D4A
# 593 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? What do you want?\p"
# 594 "data/maps/LilycoveCity/scripts.pory"
	.string "You're messing up our training,\n"
# 595 "data/maps/LilycoveCity/scripts.pory"
	.string "so can you, like, get lost?$"
# 596 "data/maps/LilycoveCity/scripts.pory"

# 597 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown: @ 81E3D9E
# 598 "data/maps/LilycoveCity/scripts.pory"
	.string "There's a Pokémon Contest Hall\n"
# 599 "data/maps/LilycoveCity/scripts.pory"
	.string "right in this here town. \p"
# 600 "data/maps/LilycoveCity/scripts.pory"
	.string "That means well-raised Pokémon will\n"
# 601 "data/maps/LilycoveCity/scripts.pory"
	.string "come from all over the country.\p"
# 602 "data/maps/LilycoveCity/scripts.pory"
	.string "My heart swells with excitement!$"
# 603 "data/maps/LilycoveCity/scripts.pory"

# 604 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs: @ 81E3E7D
# 605 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going to teach my Pokémon some new\n"
# 606 "data/maps/LilycoveCity/scripts.pory"
	.string "moves for entering a Contest.\p"
# 607 "data/maps/LilycoveCity/scripts.pory"
	.string "So, I'm going to see the Move Deleter\n"
# 608 "data/maps/LilycoveCity/scripts.pory"
	.string "and make it forget HM moves.$"
# 609 "data/maps/LilycoveCity/scripts.pory"

# 610 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto: @ 81E3F05
# 611 "data/maps/LilycoveCity/scripts.pory"
	.string "I came from Kanto.\p"
# 612 "data/maps/LilycoveCity/scripts.pory"
	.string "The Hoenn region is beautiful with\n"
# 613 "data/maps/LilycoveCity/scripts.pory"
	.string "all its water and verdant nature.\p"
# 614 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? Wait a second…\p"
# 615 "data/maps/LilycoveCity/scripts.pory"
	.string "Could there be rare Pokémon that live\n"
# 616 "data/maps/LilycoveCity/scripts.pory"
	.string "only in this area?$"
# 617 "data/maps/LilycoveCity/scripts.pory"

# 618 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer: @ 81E3FAB
# 619 "data/maps/LilycoveCity/scripts.pory"
	.string "Team Aqua's been training their\n"
# 620 "data/maps/LilycoveCity/scripts.pory"
	.string "Wailmer in the cove.\p"
# 621 "data/maps/LilycoveCity/scripts.pory"
	.string "We Sailors can't get our boats out\n"
# 622 "data/maps/LilycoveCity/scripts.pory"
	.string "to sea with them in the way!$"
# 623 "data/maps/LilycoveCity/scripts.pory"

# 624 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon: @ 81E40AD
# 625 "data/maps/LilycoveCity/scripts.pory"
	.string "I was taking a relaxing snooze at the\n"
# 626 "data/maps/LilycoveCity/scripts.pory"
	.string "seaside inn to the sound of waves…\p"
# 627 "data/maps/LilycoveCity/scripts.pory"
	.string "When someone stole my Pokémon!\p"
# 628 "data/maps/LilycoveCity/scripts.pory"
	.string "Who's the abductor?\n"
# 629 "data/maps/LilycoveCity/scripts.pory"
	.string "Team Aqua? Is it Team Aqua?$"
# 630 "data/maps/LilycoveCity/scripts.pory"

# 631 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack: @ 81E4145
# 632 "data/maps/LilycoveCity/scripts.pory"
	.string "My missing Pokémon…\n"
# 633 "data/maps/LilycoveCity/scripts.pory"
	.string "It came back without me noticing!$"
# 634 "data/maps/LilycoveCity/scripts.pory"

# 635 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer: @ 81E417B
# 636 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an Art Dealer.\p"
# 637 "data/maps/LilycoveCity/scripts.pory"
	.string "I am a buyer and seller of fine art,\n"
# 638 "data/maps/LilycoveCity/scripts.pory"
	.string "especially paintings.\p"
# 639 "data/maps/LilycoveCity/scripts.pory"
	.string "I've heard that the Museum here has\n"
# 640 "data/maps/LilycoveCity/scripts.pory"
	.string "magnificent works on exhibit…$"
# 641 "data/maps/LilycoveCity/scripts.pory"

# 642 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung: @ 81E420B
# 643 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
# 644 "data/maps/LilycoveCity/scripts.pory"
	.string "the sea remains forever young with\l"
# 645 "data/maps/LilycoveCity/scripts.pory"
	.string "the vivid brilliance of life…\p"
# 646 "data/maps/LilycoveCity/scripts.pory"
	.string "Fwohoho fwohohohoho…$"
# 647 "data/maps/LilycoveCity/scripts.pory"

# 648 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed: @ 81E4283
# 649 "data/maps/LilycoveCity/scripts.pory"
	.string "It was sixty years ago that my husband\n"
# 650 "data/maps/LilycoveCity/scripts.pory"
	.string "proposed to me here.\l"
# 651 "data/maps/LilycoveCity/scripts.pory"
	.string "The sea remains as beautiful as ever.\p"
# 652 "data/maps/LilycoveCity/scripts.pory"
	.string "Mufufufu mufufufufufu…$"
# 653 "data/maps/LilycoveCity/scripts.pory"

# 654 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign: @ 81E448B
# 655 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove City\p"
# 656 "data/maps/LilycoveCity/scripts.pory"
	.string "“Where the land ends and the\n"
# 657 "data/maps/LilycoveCity/scripts.pory"
	.string "sea begins.”$"
# 658 "data/maps/LilycoveCity/scripts.pory"

# 659 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign: @ 81E44C3
# 660 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon Contest Hall\n"
# 661 "data/maps/LilycoveCity/scripts.pory"
	.string "“The gathering place for Trainers!”$"
# 662 "data/maps/LilycoveCity/scripts.pory"

# 663 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign: @ 81E44FC
# 664 "data/maps/LilycoveCity/scripts.pory"
	.string "Cove Lily Motel\p"
# 665 "data/maps/LilycoveCity/scripts.pory"
	.string "“Remember us as Cove Lily of\n"
# 666 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove.”$"
# 667 "data/maps/LilycoveCity/scripts.pory"

# 668 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign: @ 81E4534
# 669 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove Museum\p"
# 670 "data/maps/LilycoveCity/scripts.pory"
	.string "“Pokémon Masterpiece Collection\n"
# 671 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 672 "data/maps/LilycoveCity/scripts.pory"

# 673 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit: @ 81E4571
# 674 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove Museum\p"
# 675 "data/maps/LilycoveCity/scripts.pory"
	.string "“{PLAYER}'s Pokémon Collection\n"
# 676 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 677 "data/maps/LilycoveCity/scripts.pory"

# 678 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction: @ 81E45A7
# 679 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove City Harbor\p"
# 680 "data/maps/LilycoveCity/scripts.pory"
	.string "“The ferry S.S. Tidal is under\n"
# 681 "data/maps/LilycoveCity/scripts.pory"
	.string "construction in Slateport City.\p"
# 682 "data/maps/LilycoveCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 683 "data/maps/LilycoveCity/scripts.pory"
	.string "shortly.”$"
# 684 "data/maps/LilycoveCity/scripts.pory"

# 685 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign: @ 81E4624
# 686 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove City Harbor\p"
# 687 "data/maps/LilycoveCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 688 "data/maps/LilycoveCity/scripts.pory"
	.string "the ferry S.S. Tidal.”$"
# 689 "data/maps/LilycoveCity/scripts.pory"

# 690 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign: @ 81E466E
# 691 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon Trainer Fan Club\p"
# 692 "data/maps/LilycoveCity/scripts.pory"
	.string "The names of Trainers are scribbled\n"
# 693 "data/maps/LilycoveCity/scripts.pory"
	.string "all over the sign…$"
# 694 "data/maps/LilycoveCity/scripts.pory"

# 695 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign: @ 81E46BE
# 696 "data/maps/LilycoveCity/scripts.pory"
	.string "Lilycove Department Store\p"
# 697 "data/maps/LilycoveCity/scripts.pory"
	.string "“Overflowing with great merchandise\n"
# 698 "data/maps/LilycoveCity/scripts.pory"
	.string "and excitement!\p"
# 699 "data/maps/LilycoveCity/scripts.pory"
	.string "“A great place to find that something\n"
# 700 "data/maps/LilycoveCity/scripts.pory"
	.string "you need!”$"
# 701 "data/maps/LilycoveCity/scripts.pory"

# 702 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign: @ 81E473D
# 703 "data/maps/LilycoveCity/scripts.pory"
	.string "Move Deleter's House\p"
# 704 "data/maps/LilycoveCity/scripts.pory"
	.string "“Unwanted Pokémon moves deleted.”$"
# 705 "data/maps/LilycoveCity/scripts.pory"

# 706 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender: @ 81E4774
# 707 "data/maps/LilycoveCity/scripts.pory"
	.string "Do you know about the machine\n"
# 708 "data/maps/LilycoveCity/scripts.pory"
	.string "Berry Blender?$"
# 709 "data/maps/LilycoveCity/scripts.pory"

# 710 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks: @ 81E47A1
# 711 "data/maps/LilycoveCity/scripts.pory"
	.string "People have to work together to get it\n"
# 712 "data/maps/LilycoveCity/scripts.pory"
	.string "to spin faster.\p"
# 713 "data/maps/LilycoveCity/scripts.pory"
	.string "The faster you can make it spin, the\n"
# 714 "data/maps/LilycoveCity/scripts.pory"
	.string "better {POKEBLOCK}s you can get, I've heard.$"
# 715 "data/maps/LilycoveCity/scripts.pory"

# 716 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender: @ 81E4824
# 717 "data/maps/LilycoveCity/scripts.pory"
	.string "It's used for making a kind of candy\n"
# 718 "data/maps/LilycoveCity/scripts.pory"
	.string "called a {POKEBLOCK}.\p"
# 719 "data/maps/LilycoveCity/scripts.pory"
	.string "If you give a good {POKEBLOCK} to a Pokémon,\n"
# 720 "data/maps/LilycoveCity/scripts.pory"
	.string "its condition will improve by a lot.$"
# 721 "data/maps/LilycoveCity/scripts.pory"

# 722 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar: @ 81E48A5
# 723 "data/maps/LilycoveCity/scripts.pory"
	.string "I heard there's a tower somewhere out\n"
# 724 "data/maps/LilycoveCity/scripts.pory"
	.string "on the sea routes.\p"
# 725 "data/maps/LilycoveCity/scripts.pory"
	.string "It's called the Sky Pillar, I hear.$"
# 726 "data/maps/LilycoveCity/scripts.pory"

# 727 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131: @ 81E4902
# 728 "data/maps/LilycoveCity/scripts.pory"
	.string "I saw this tall tower somewhere\n"
# 729 "data/maps/LilycoveCity/scripts.pory"
	.string "around Route 131.\p"
# 730 "data/maps/LilycoveCity/scripts.pory"
	.string "Could that possibly be…?$"
# 731 "data/maps/LilycoveCity/scripts.pory"

# 732 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon: @ 81E494D
# 733 "data/maps/LilycoveCity/scripts.pory"
	.string "We just arrived here on our\n"
# 734 "data/maps/LilycoveCity/scripts.pory"
	.string "honeymoon vacation.\p"
# 735 "data/maps/LilycoveCity/scripts.pory"
	.string "We happened to see a Dragon-type\n"
# 736 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon flying way up in the sky.\p"
# 737 "data/maps/LilycoveCity/scripts.pory"
	.string "Do cool Pokémon like that live in\n"
# 738 "data/maps/LilycoveCity/scripts.pory"
	.string "the Hoenn region?$"
# 739 "data/maps/LilycoveCity/scripts.pory"

# 740 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon: @ 81E49F4
# 741 "data/maps/LilycoveCity/scripts.pory"
	.string "On our honeymoon, we vowed to see as\n"
# 742 "data/maps/LilycoveCity/scripts.pory"
	.string "many rare Pokémon as we can.\p"
# 743 "data/maps/LilycoveCity/scripts.pory"
	.string "So we were delighted to see a rare\n"
# 744 "data/maps/LilycoveCity/scripts.pory"
	.string "Pokémon as soon as we arrived.\p"
# 745 "data/maps/LilycoveCity/scripts.pory"
	.string "I mean, we are totally happy!$"

LilycoveCity_Text_StrangeCaveInCove::
# 749 "data/maps/LilycoveCity/scripts.pory"
	.string "There used to be an strange cave in the\n"
	.string "cove at the edge of town but it got\l"
	.string "destroyed some time ago$"

LilycoveCity_Text_TeamAquaLotGoneForGood::
# 753 "data/maps/LilycoveCity/scripts.pory"
	.string "Using the ferry here you can go and\n"
	.string "visit the sevii Islands in Kanto, they\l"
	.string "say there are 8 new gyms there.$"

LilycoveCity_Text_TeamAquaRenovatedCavern::
# 757 "data/maps/LilycoveCity/scripts.pory"
	.string "Did you know that the island next to\n"
	.string "Lilycove became really cold after an\l"
	.string "strong Pokémon made it's nest inside of\l"
	.string "shoal cave?$"

LilycoveCity_Text_SomeonePuntedTeamAquaOut::
# 761 "data/maps/LilycoveCity/scripts.pory"
	.string "I just came back from a trip to Sevii, I\n"
	.string "found some strange Pokémon that look\l"
	.string "like tentacools there!$"
