# 1 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 2 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
.set LOCALID_SUDOWOODO, 14
# 3 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 4 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_MapScripts:: @ 8242C04
# 5 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_OutsideEast_OnResume
# 6 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideEast_OnTransition
# 7 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 9 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_OnResume: @ 8242C0F
# 10 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo
# 11 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 12 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 13 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo:: @ 8242C19
# 14 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 16 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_ne Common_EventScript_NopReturn
# 17 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	removeobject VAR_LAST_TALKED
# 18 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	return
# 19 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 20 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_OnTransition: @ 8242C2D
# 21 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
# 22 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
# 23 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	call_if_unset FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_ShowSudowoodo
# 24 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	call EventScript_SetSudowoodoFamilyGfx
# 25 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 26 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 27 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_ShowSudowoodo:: @ 8242C3F
# 28 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
# 29 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	return
# 30 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 31 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattleTowerSign:: @ 8242C43
# 32 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleTowerSign, MSGBOX_SIGN
# 33 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 34 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 35 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattlePalaceSign:: @ 8242C4C
# 36 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattlePalaceSign, MSGBOX_SIGN
# 37 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 38 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 39 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattleArenaSign:: @ 8242C55
# 40 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleArenaSign, MSGBOX_SIGN
# 41 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 42 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 43 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BattlePyramidSign:: @ 8242C5E
# 44 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattlePyramidSign, MSGBOX_SIGN
# 45 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 46 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 47 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_NinjaBoy:: @ 8242C67
# 48 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BattleTowerFeelsSpecial, MSGBOX_NPC
# 49 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 50 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 51 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Man1:: @ 8242C70
# 52 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ConquerLeagueAndFrontier, MSGBOX_NPC
# 53 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 54 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 55 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Hiker:: @ 8242C79
# 56 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PyramidTooHarsh, MSGBOX_NPC
# 57 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 58 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 59 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_HexManiac:: @ 8242C82
# 60 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ThriveInDarkness, MSGBOX_NPC
# 61 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 62 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 63 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BlackBelt1:: @ 8242C8B
# 64 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam, MSGBOX_NPC
# 65 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 66 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 67 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Cook:: @ 8242C94
# 68 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 69 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BelieveInYouBuddy, MSGBOX_DEFAULT
# 70 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 71 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 72 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 73 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Zigzagoon:: @ 8242C9F
# 74 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 75 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 76 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitse
# 77 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, 0
# 78 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ZigzagoonLooksVacant, MSGBOX_DEFAULT
# 79 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	waitmoncry
# 80 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 81 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 82 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 83 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_RichBoy:: @ 8242CB2
# 84 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PeopleCallMeBusybody, MSGBOX_NPC
# 85 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 86 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 87 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_ExpertF:: @ 8242CBB
# 88 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OnceBeatGymLeader, MSGBOX_NPC
# 89 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 90 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 91 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_TriathleteF:: @ 8242CC4
# 92 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_FastOnBikeAndBattles, MSGBOX_NPC
# 93 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 94 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 95 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Twin:: @ 8242CCD
# 96 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_BetterThanDaddyAtPokemon, MSGBOX_NPC
# 97 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 98 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 99 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Man2:: @ 8242CD6
# 100 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 101 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_GoRackUpSomeWinsForDaddy, MSGBOX_DEFAULT
# 102 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 103 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 104 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 105 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_TriathleteM:: @ 8242CE1
# 106 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_DidScottBringYouHere, MSGBOX_NPC
# 107 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 108 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 109 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Maniac1:: @ 8242D79
# 110 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_HeardPrettyGirlAtBattleArena, MSGBOX_NPC
# 111 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 112 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 113 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Girl:: @ 8242D82
# 114 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_SometimesImportantOldManInThere, MSGBOX_NPC
# 115 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 116 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 117 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_PsychicM:: @ 8242D8B
# 118 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid, MSGBOX_NPC
# 119 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 120 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 121 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Man3:: @ 8242D94
# 122 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_GotWipedOut, MSGBOX_NPC
# 123 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 124 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 125 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Woman1:: @ 8242D9D
# 126 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower, MSGBOX_NPC
# 127 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 128 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 129 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Woman2:: @ 8242DA6
# 130 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_EnoughBattlePointsForDoll, MSGBOX_NPC
# 131 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 132 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 133 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_BlackBelt2:: @ 8242DAF
# 134 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere, MSGBOX_NPC
# 135 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 136 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 137 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Maniac2:: @ 8242DB8
# 138 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 139 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_CanDoAnythingWithYou, MSGBOX_DEFAULT
# 140 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 141 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 142 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 143 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Woman3:: @ 8242DC3
# 144 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 145 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_PowerOfOurLoveWillOvercome, MSGBOX_DEFAULT
# 146 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 147 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 148 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 149 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_RankingHallSign:: @ 8242DCE
# 150 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_RankingHallSign, MSGBOX_SIGN
# 151 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 152 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 153 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_ExchangeCornerSign:: @ 8242DD7
# 154 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_ExchangeCornerSign, MSGBOX_SIGN
# 155 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 156 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 157 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Gentleman:: @ 8242DE0
# 158 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_FrontierNotExclusivelyForToughTrainers, MSGBOX_NPC
# 159 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 160 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 161 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_OldWoman:: @ 8242DE9
# 162 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	lock
# 163 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	faceplayer
# 164 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	goto_if_set FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_OldWomanSudowoodoGone
# 165 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle, MSGBOX_DEFAULT
# 166 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 167 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 168 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 169 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_OldWomanSudowoodoGone:: @ 8242DFE
# 170 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere, MSGBOX_DEFAULT
# 171 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	release
# 172 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 173 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 174 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_EventScript_Camper:: @ 8242E08
# 175 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	msgbox BattleFrontier_OutsideEast_Text_StickyMonWithLongTail, MSGBOX_NPC
# 176 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	end
# 177 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 178 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattleTowerSign: @ 8242E11
# 179 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "This is the Battle Tower!\n"
# 180 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Keep the win streak as the toughest\l"
# 181 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Trainer!$"
# 182 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 183 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattlePalaceSign: @ 8242E58
# 184 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "This is the Battle Palace!\n"
# 185 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Keep your eyes on Pokémon battles!$"
# 186 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 187 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattleArenaSign: @ 8242E96
# 188 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "This is the Battle Arena!\n"
# 189 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Let the toughest teams gather!$"
# 190 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 191 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattlePyramidSign: @ 8242ECF
# 192 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "This is the Battle Pyramid!\n"
# 193 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Advance through the Battle Quest!$"
# 194 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 195 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_RankingHallSign: @ 8242F0D
# 196 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Battle Frontier Ranking Hall\n"
# 197 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Set your sights on new records!$"
# 198 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 199 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ExchangeCornerSign: @ 8242F4A
# 200 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Battle Point Exchange Service Corner\n"
# 201 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Exchange your Battle Points!$"
# 202 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 203 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BattleTowerFeelsSpecial: @ 8242F8C
# 204 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Wow!\n"
# 205 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "It's huge!\p"
# 206 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "The Battle Tower feels special.\n"
# 207 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "It's different from the others.$"
# 208 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 209 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ConquerLeagueAndFrontier: @ 8242FDC
# 210 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "My grand ambition is to conquer both\n"
# 211 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "the Battle Frontier and the Pokémon\l"
# 212 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "League.\p"
# 213 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "And if my dream comes true…\p"
# 214 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I… I'm going to ask Mimi next door\n"
# 215 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "if she will be friends with me!$"
# 216 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 217 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PyramidTooHarsh: @ 824308C
# 218 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "The Battle Pyramid's too harsh!\n"
# 219 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I just can't make it to the top!\p"
# 220 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Since I'm out of options, maybe I can\n"
# 221 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "climb the outside…$"
# 222 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 223 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ThriveInDarkness: @ 8243106
# 224 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I thrive in darkness…\n"
# 225 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Yes… What is worthy of me?\l"
# 226 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "None other than the Battle Pyramid…\p"
# 227 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "What say you to wandering in darkness\n"
# 228 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "and in utter and total desperation?$"
# 229 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 230 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam: @ 82431A5
# 231 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I didn't sleep for a week, but then\n"
# 232 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I put together the ultimate team!\p"
# 233 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I can't see myself losing, no joke.\n"
# 234 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "We're storming the Battle Arena!$"
# 235 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 236 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_DidScottBringYouHere: @ 8243230
# 237 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Did Scott bring you here, too?\n"
# 238 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "What is it with that guy?\p"
# 239 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "It sounds like he really does know\n"
# 240 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "how to spot talented Trainers, but…\p"
# 241 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I've never seen him battling in person\n"
# 242 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "ever.$"
# 243 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 244 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BelieveInYouBuddy: @ 82432DD
# 245 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Zigg!\n"
# 246 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I believe in you, little buddy!\p"
# 247 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I'll make my little Zigg any favorite\n"
# 248 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "tasty treats you like if you win!$"
# 249 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 250 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ZigzagoonLooksVacant: @ 824334B
# 251 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Zigzagoon looks vacant…$"
# 252 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 253 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PeopleCallMeBusybody: @ 8243363
# 254 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "People call me a busybody,\n"
# 255 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "but I can't help it.\p"
# 256 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Your hat's on crooked!\n"
# 257 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Oh, no, trash on the ground!\l"
# 258 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Oops, it's almost dinnertime!\p"
# 259 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I don't know if I can stand to just\n"
# 260 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "watch at the Battle Palace…$"
# 261 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 262 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_OnceBeatGymLeader: @ 8243425
# 263 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I may not look that impressive now,\n"
# 264 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "but I once beat a Gym Leader.\p"
# 265 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Who knows, maybe I should give it\n"
# 266 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "another shot at glory.$"
# 267 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 268 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_FastOnBikeAndBattles: @ 82434A0
# 269 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I'm fast on my Bike, and that goes for\n"
# 270 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "the way I battle, too.\p"
# 271 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I win matches in the blink of\n"
# 272 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "an eye!$"
# 273 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 274 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_BetterThanDaddyAtPokemon: @ 8243504
# 275 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I'm better than my daddy\n"
# 276 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "at Pokémon.$"
# 277 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 278 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_GoRackUpSomeWinsForDaddy: @ 8243529
# 279 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Go on, my baby sweetie!\n"
# 280 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Go rack up some wins for Daddy!\p"
# 281 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "You're just like your mother,\n"
# 282 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "so you'll be dominating!$"
# 283 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 284 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_HeardPrettyGirlAtBattleArena: @ 8243598
# 285 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "It wasn't easy getting here,\n"
# 286 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "but I'd heard about this knockout\l"
# 287 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "pretty girl at the Battle Arena.\p"
# 288 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Instead of her, do you know what\n"
# 289 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I found?\p"
# 290 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "A whole teeming mob of sweaty,\n"
# 291 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "stinky, and primitive martial artists!$"
# 292 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 293 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_SometimesImportantOldManInThere: @ 8243668
# 294 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I sometimes see this really important-\n"
# 295 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "looking old man going in there.\p"
# 296 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "He has these really awesome Pokémon.\n"
# 297 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "He seems really nice, though.$"
# 298 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 299 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid: @ 82436F2
# 300 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Do you know it?\n"
# 301 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "The legend of the Battle Pyramid?\p"
# 302 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "When there comes a confident Trainer\n"
# 303 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "reaching for the golden pinnacle,\l"
# 304 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "there shall appear a man among men.\p"
# 305 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Don't know that legend?\n"
# 306 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Well, of course not!\l"
# 307 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I just made it up!\p"
# 308 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "What's it supposed to mean?\n"
# 309 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "That, my friend, I can't say!$"
# 310 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 311 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_GotWipedOut: @ 8243809
# 312 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Man! Oh man!\n"
# 313 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I've never lost once before!\p"
# 314 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "But I got wiped out with no saving\n"
# 315 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "grace at all!\p"
# 316 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "And then I'm told I don't have any\n"
# 317 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "talent?! Man!$"
# 318 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 319 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower: @ 8243895
# 320 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "This guy ran into a horribly tough\n"
# 321 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Trainer while he was on the Battle\l"
# 322 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Tower challenge.\p"
# 323 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Now look at him…\p"
# 324 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "You need to be cautious if you ever\n"
# 325 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "decide to go to the Battle Tower.$"
# 326 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 327 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_EnoughBattlePointsForDoll: @ 8243943
# 328 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Yes!\n"
# 329 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I've finally got enough Battle Points!\p"
# 330 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I guess I'll trade for another giant\n"
# 331 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "plush Doll!$"
# 332 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 333 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere: @ 82439A0
# 334 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Oh, yeah, okay!\n"
# 335 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "So this is the Ranking Hall!\p"
# 336 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I'd like to go down in history as\n"
# 337 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "a super champ and have my name\l"
# 338 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "recorded here for posterity.$"
# 339 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 340 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_CanDoAnythingWithYou: @ 8243A2B
# 341 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "With you by my side, I can do anything.$"
# 342 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 343 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_PowerOfOurLoveWillOvercome: @ 8243A53
# 344 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ooh, darling, you are so wonderful!\p"
# 345 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Ooh, I just can't wait anymore!\p"
# 346 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Let's go to a Multi Battle Room\n"
# 347 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "right this instant!\p"
# 348 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "If we get together in the Battle Salon,\n"
# 349 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "the power of our love will overcome\l"
# 350 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "everyone we meet.\p"
# 351 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Why, before us, darling, everything\n"
# 352 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "will topple like dominoes!$"
# 353 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 354 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_FrontierNotExclusivelyForToughTrainers: @ 8243B68
# 355 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "The Battle Frontier isn't exclusively\n"
# 356 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "for tough Trainers.\p"
# 357 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Many people with special abilities\n"
# 358 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "have been invited, it seems.\p"
# 359 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "That man Scott…\p"
# 360 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "He may have built this place to serve\n"
# 361 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "a bigger objective…$"
# 362 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 363 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle: @ 8243C2C
# 364 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Excuse me, young one.\n"
# 365 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Have you good eyesight?\p"
# 366 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "There is an odd tree past here, and to\n"
# 367 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "my tired eyes it seems to wiggle.$"
# 368 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 369 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere: @ 8243CA3
# 370 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Excuse me, young one.\n"
# 371 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "Have you a good memory?\p"
# 372 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I have this feeling there once was\n"
# 373 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "an odd tree past here.$"
# 374 "data/maps/BattleFrontier_OutsideEast/scripts.pory"

# 375 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
BattleFrontier_OutsideEast_Text_StickyMonWithLongTail: @ 8243D0B
# 376 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I…\n"
# 377 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "I saw it!\p"
# 378 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "There was a sticky sort of a Pokémon\n"
# 379 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "with a long tail up ahead!\p"
# 380 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "It was hiding under a boulder, and\n"
# 381 "data/maps/BattleFrontier_OutsideEast/scripts.pory"
	.string "it kept staring at me!$"
