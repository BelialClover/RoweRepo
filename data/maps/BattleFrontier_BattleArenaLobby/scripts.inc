# 1 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 2 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 4 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_MapScripts:: @ 8255C36
# 5 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BattleFrontier_BattleArenaLobby_OnFrame
# 6 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BattleFrontier_BattleArenaLobby_OnWarp
# 7 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.byte 0
# 8 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 9 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_OnWarp: @ 8255C41
# 10 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth
# 11 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.2byte 0
# 12 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 13 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TurnPlayerNorth:: @ 8255C4B
# 14 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 16 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 17 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 18 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_OnFrame: @ 8255C55
# 19 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus
# 20 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_0, CHALLENGE_STATUS_SAVING, BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving
# 21 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_0, CHALLENGE_STATUS_PAUSED, BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge
# 22 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_0, CHALLENGE_STATUS_WON, BattleFrontier_BattleArenaLobby_EventScript_WonChallenge
# 23 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	map_script_2 VAR_TEMP_0, CHALLENGE_STATUS_LOST, BattleFrontier_BattleArenaLobby_EventScript_LostChallenge
# 24 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.2byte 0
# 25 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 26 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_GetChallengeStatus:: @ 8255C7F
# 27 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_getstatus
# 28 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 29 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 30 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_QuitWithoutSaving:: @ 8255C88
# 31 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 32 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown, MSGBOX_DEFAULT
# 33 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 34 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK, 0
# 35 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
# 36 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 37 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_0, 255
# 38 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 39 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 40 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 41 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WonChallenge:: @ 8255CCF
# 42 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 43 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_isbrain
# 44 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 45 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon
# 46 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins, MSGBOX_DEFAULT
# 47 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints
# 48 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 49 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_DefeatedTycoon:: @ 8255CF0
# 50 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon, MSGBOX_DEFAULT
# 51 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_GiveBattlePoints:: @ 8255CF8
# 52 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints, MSGBOX_DEFAULT
# 53 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_givepoints
# 54 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_Text_ObtainedXBattlePoints, MSGBOX_GETPOINTS
# 55 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_RecordAchievement
# 56 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 57 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
# 58 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 59 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 60 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_0, 255
# 61 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 62 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 63 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 64 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_LostChallenge:: @ 8255D2B
# 65 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 66 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave
# 67 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 68 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, FALSE
# 69 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge
# 70 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2, MSGBOX_DEFAULT
# 71 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 72 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_0, 255
# 73 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 74 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 75 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 76 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveAfterChallenge:: @ 8255D59
# 77 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_checkairshow
# 78 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 79 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special HealPlayerParty
# 80 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_save 0
# 81 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	playse SE_SAVE
# 82 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitse
# 83 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_GetCantRecordBattle
# 84 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, TRUE
# 85 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 86 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_RecordLastMatch
# 87 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 88 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoicedefault 20, 8, MULTI_YESNO, 1, 0
# 89 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 91 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_RecordMatch
# 92 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge
# 93 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 94 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_RecordMatch:: @ 8255DBA
# 95 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_SaveBattle
# 96 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EndSaveAfterChallenge:: @ 8255DBF
# 97 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 98 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 99 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ResumeChallenge:: @ 8255DC0
# 100 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 101 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame
# 102 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 103 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_save CHALLENGE_STATUS_SAVING
# 104 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	playse SE_SAVE
# 105 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitse
# 106 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 107 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_0, 255
# 108 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge
# 109 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 110 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Attendant:: @ 8255DF4
# 111 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lock
# 112 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	faceplayer
# 113 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_ARENA
# 114 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 115 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special SavePlayerParty
# 116 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena, MSGBOX_DEFAULT
# 117 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge:: @ 8255E0B
# 118 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge
# 119 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 120 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, 0
# 121 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 122 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge
# 123 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge
# 124 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 2, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 125 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 126 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 127 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_TryEnterChallenge:: @ 8255E47
# 128 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_WhichLevelMode
# 129 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 130 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 6, MULTI_LEVEL_MODE, 0
# 131 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 132 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_TENT, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 133 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 134 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_checkineligible
# 135 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_0x8004, TRUE
# 136 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons
# 137 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, VAR_RESULT
# 138 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 139 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 140 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 141 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 142 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 143 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 144 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitstate
# 145 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, 0
# 146 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 147 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OkayToSave, MSGBOX_YESNO
# 148 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 149 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case NO, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 150 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case YES, BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge
# 151 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge
# 152 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 153 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SaveBeforeChallenge:: @ 8255EE8
# 154 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_0, 0
# 155 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 156 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_init
# 157 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	arena_set ARENA_DATA_WIN_STREAK_ACTIVE, TRUE
# 158 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 159 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 160 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 161 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 162 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	delay 2
# 163 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 164 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_0, 255
# 165 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, 0
# 166 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto_if_eq BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed
# 167 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EnterChallenge:: @ 8255F54
# 168 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special SavePlayerParty
# 169 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 170 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_GuideYouToArena, MSGBOX_DEFAULT
# 171 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closemessage
# 172 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_get FRONTIER_DATA_LVL_MODE
# 173 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_50
# 174 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call_if_eq BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50
# 175 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	compare VAR_RESULT, FRONTIER_LVL_OPEN
# 176 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	call_if_eq BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen
# 177 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_ARENA_CORRIDOR, 255, 9, 13
# 178 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	setvar VAR_TEMP_0, 0
# 179 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitstate
# 180 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 181 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 182 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ExplainChallenge:: @ 8255F9F
# 183 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainChallenge, MSGBOX_DEFAULT
# 184 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_AskTakeChallenge
# 185 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 186 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMons:: @ 8255FAC
# 187 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 188 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_50, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50
# 189 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen
# 190 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 191 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLv50:: @ 8255FC7
# 192 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 193 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge
# 194 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 195 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_NotEnoughValidMonsLvOpen:: @ 8255FD4
# 196 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 197 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge
# 198 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 199 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_CancelChallengeSaveFailed:: @ 8255FE1
# 200 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 201 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge
# 202 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 203 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_LoadPartyAndCancelChallenge:: @ 8255FF8
# 204 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special LoadPlayerParty
# 205 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_CancelChallenge:: @ 8255FFB
# 206 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge, MSGBOX_DEFAULT
# 207 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_EndCancelChallenge:: @ 8256003
# 208 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	release
# 209 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 210 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 211 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLv50:: @ 8256005
# 212 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor
# 213 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor
# 214 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 215 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	opendoor 2, 2
# 216 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 217 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
# 218 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
# 219 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 220 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closedoor 2, 2
# 221 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 222 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 223 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 224 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToLeftDoor: @ 8256034
# 225 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 226 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 227 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 228 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 229 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 230 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 231 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 232 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 233 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 234 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 235 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 236 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor: @ 825603E
# 237 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 238 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	set_invisible
# 239 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 240 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 241 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToLeftDoor: @ 8256041
# 242 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 243 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 244 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 245 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 246 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 247 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 248 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 249 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 250 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_left
# 251 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_in_place_fastest_up
# 252 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 253 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 254 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor: @ 825604C
# 255 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 256 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 257 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	set_invisible
# 258 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 259 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 260 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_WalkToDoorLvOpen:: @ 8256050
# 261 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor
# 262 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor
# 263 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 264 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	opendoor 11, 2
# 265 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 266 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, BattleFrontier_BattleArenaLobby_Movement_AttendantEnterDoor
# 267 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, BattleFrontier_BattleArenaLobby_Movement_PlayerEnterDoor
# 268 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmovement 0
# 269 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	closedoor 11, 2
# 270 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitdooranim
# 271 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	return
# 272 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 273 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_AttendantWalkToRightDoor: @ 825607F
# 274 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 275 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 276 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 277 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 278 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 279 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 280 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 281 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 282 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 283 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 284 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Movement_PlayerWalkToRightDoor: @ 8256088
# 285 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 286 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 287 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 288 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_up
# 289 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 290 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 291 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 292 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_right
# 293 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	walk_in_place_fastest_up
# 294 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	step_end
# 295 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 296 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ShowResults:: @ 8256092
# 297 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 298 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	frontier_results FRONTIER_FACILITY_ARENA
# 299 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitbuttonpress
# 300 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	special RemoveRecordsWindow
# 301 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 302 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 303 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 304 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Youngster:: @ 82560A6
# 305 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack, MSGBOX_NPC
# 306 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 307 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 308 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Man:: @ 82560AF
# 309 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked, MSGBOX_NPC
# 310 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 311 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 312 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Camper:: @ 82560B8
# 313 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw, MSGBOX_NPC
# 314 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 315 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 316 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Woman:: @ 82560C1
# 317 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant, MSGBOX_NPC
# 318 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 319 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 320 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_RulesBoard:: @ 82560CA
# 321 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lockall
# 322 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 323 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 324 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 325 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 326 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard:: @ 82560D9
# 327 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	message BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading
# 328 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	waitmessage
# 329 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	multichoice 17, 2, MULTI_BATTLE_ARENA_RULES, 0
# 330 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	switch VAR_RESULT
# 331 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 0, BattleFrontier_BattleArenaLobby_EventScript_BattleRules
# 332 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 1, BattleFrontier_BattleArenaLobby_EventScript_MindRules
# 333 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 2, BattleFrontier_BattleArenaLobby_EventScript_SkillRules
# 334 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 3, BattleFrontier_BattleArenaLobby_EventScript_BodyRules
# 335 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case 4, BattleFrontier_BattleArenaLobby_EventScript_ExitRules
# 336 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_BattleArenaLobby_EventScript_ExitRules
# 337 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 338 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 339 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_BattleRules:: @ 825612C
# 340 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules, MSGBOX_DEFAULT
# 341 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 342 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 343 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 344 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_MindRules:: @ 825613A
# 345 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainMindRules, MSGBOX_DEFAULT
# 346 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 347 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 348 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 349 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_SkillRules:: @ 8256148
# 350 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules, MSGBOX_DEFAULT
# 351 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 352 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 353 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 354 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_BodyRules:: @ 8256156
# 355 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules, MSGBOX_DEFAULT
# 356 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	goto BattleFrontier_BattleArenaLobby_EventScript_ReadRulesBoard
# 357 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 358 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 359 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_ExitRules:: @ 8256164
# 360 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	releaseall
# 361 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 362 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	
# 363 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_EventScript_Attendant_notWorking:: @ 8255DF4
# 364 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	lock
# 365 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	faceplayer
# 366 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	msgbox BattleFrontier_BattleArenaLobby_Text_BattleArenaProject, MSGBOX_DEFAULT
# 367 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	release
# 368 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	end
# 369 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	
# 370 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_BattleArenaProject:
# 371 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Sorry, but the Battle Arena is being\n"
# 372 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "maintained right now.$"
# 373 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 374 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WelcomeToBattleArena: @ 8256166
# 375 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Where the battling spirit of Trainers\n"
# 376 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "is put to the test!\p"
# 377 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I welcome you to the Battle Arena!\p"
# 378 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I am your guide to the Set KO Tourney!$"
# 379 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 380 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WishToTakeChallenge: @ 82561EA
# 381 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Now, do you wish to take\n"
# 382 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the Battle Arena challenge?$"
# 383 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 384 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge: @ 825621F
# 385 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We await your challenge on\n"
# 386 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "another occasion!$"
# 387 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 388 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainChallenge: @ 825624C
# 389 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "In the Battle Arena, we undertake\n"
# 390 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the Set KO Tourney.\p"
# 391 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "All participants enter with a team of\n"
# 392 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "three Pokémon.\p"
# 393 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The three Pokémon must be lined up in\n"
# 394 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the order in which they are to appear.\p"
# 395 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "During battle, the Pokémon will appear\n"
# 396 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "one at a time in the preset order.\p"
# 397 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Once a Pokémon enters battle, it must\n"
# 398 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "remain out until the match is decided.\p"
# 399 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If a match remains undecided in\n"
# 400 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "three turns, it goes to judging.\p"
# 401 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If you wish to interrupt your challenge,\n"
# 402 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "please save the game.\p"
# 403 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If you don't save, you will not be able\n"
# 404 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "to continue with your challenge.\p"
# 405 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If you pull off the feat of beating\n"
# 406 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "seven Trainers in succession,\l"
# 407 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "we will present you with Battle Points.$"
# 408 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 409 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_OkayToSave: @ 82564CE
# 410 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Before showing you to the Battle\n"
# 411 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Arena, you must save. Is that okay?$"
# 412 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 413 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_WhichLevelMode: @ 8256513
# 414 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The Battle Arena offers two levels\n"
# 415 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "of challenge, Level 50 and Open Level.\l"
# 416 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Which is your choice?$"
# 417 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 418 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_SelectThreeMons: @ 8256573
# 419 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Very well, now select your\n"
# 420 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "three Pokémon, please.$"
# 421 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 422 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLvOpen: @ 82565A5
# 423 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger!\p"
# 424 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "You do not have the three Pokémon\n"
# 425 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "required for entry.\p"
# 426 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "To qualify, you must bring three\n"
# 427 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "different kinds of Pokémon.\p"
# 428 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "They also must not hold the same\n"
# 429 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "kinds of items.\p"
# 430 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Eggs{STR_VAR_1} ineligible.\p"
# 431 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "When you have made your preparations,\n"
# 432 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "please do return.$"
# 433 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 434 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_NotEnoughValidMonsLv50: @ 82566A8
# 435 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger!\p"
# 436 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "You do not have the three Pokémon\n"
# 437 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "required for entry.\p"
# 438 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "To qualify, you must bring three\n"
# 439 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "different kinds of Pokémon.\p"
# 440 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The three different Pokémon\n"
# 441 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "must all be Level 50 or lower.\p"
# 442 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "They also must not hold the same\n"
# 443 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "kinds of items.\p"
# 444 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "eggs{STR_VAR_1} ineligible.\p"
# 445 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "When you have made your preparations,\n"
# 446 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "please do return.$"
# 447 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 448 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_GuideYouToArena: @ 82567E6
# 449 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I shall now guide you to\n"
# 450 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the Battle Arena.$"
# 451 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 452 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown: @ 8256811
# 453 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger!\p"
# 454 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "You did not save the game before\n"
# 455 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "shutting down, did you?\p"
# 456 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "It is unfortunate, but that has\n"
# 457 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "resulted in your disqualification\l"
# 458 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "from your challenge.\p"
# 459 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "You may, of course, start with a fresh\n"
# 460 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "challenge.$"
# 461 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 462 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins: @ 82568E7
# 463 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We congratulate you for your splendid\n"
# 464 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "string of wins over seven Trainers!$"
# 465 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 466 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RecordAchievement: @ 8256931
# 467 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Your achievement will be recorded.\n"
# 468 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Please wait while I save the game.$"
# 469 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 470 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
@ Unused
# 471 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize: @ 8256977
# 472 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "In commemoration of your 7-win streak,\n"
# 473 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "we present you with this prize.$"
# 474 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 475 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
@ Unused
# 476 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ReceivedPrize: @ 82569BE
# 477 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "{PLAYER} received the prize\n"
# 478 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "{STR_VAR_1}.$"
# 479 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 480 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
@ Unused
# 481 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize: @ 82569D8
# 482 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Oh?\n"
# 483 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Your Bag seems to be full.\p"
# 484 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I urge you to clear space and\n"
# 485 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "return for your prize.$"
# 486 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 487 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave: @ 8256A2C
# 488 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Thank you so much for participating!\p"
# 489 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Please wait while I save the game.$"
# 490 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 491 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge2: @ 8256A74
# 492 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We await your challenge on\n"
# 493 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "another occasion!$"
# 494 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 495 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_LookingForwardToArrivalSaveGame: @ 8256AA1
# 496 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We have been looking forward to\n"
# 497 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "your arrival.\p"
# 498 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Before I show you to the Battle\n"
# 499 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Arena, I must save the game.\l"
# 500 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Please wait.$"
# 501 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 502 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RecordLastMatch: @ 8256B19
# 503 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Shall I record your last Battle Arena\n"
# 504 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "match on your Frontier Pass?$"
# 505 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 506 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_BadIdeaToNotAttack: @ 8256B5C
# 507 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I lost on the Referee's decision…\p"
# 508 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I don't think it was a good idea to only\n"
# 509 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "use defensive moves and not attack…$"
# 510 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 511 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_LandingHitsWorked: @ 8256BCB
# 512 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I won in judging!\p"
# 513 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Landing hits consistently on\n"
# 514 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the opponent's Pokémon worked!$"
# 515 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 516 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_MatchWasDeclaredDraw: @ 8256C19
# 517 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Our match was declared a draw.\p"
# 518 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "When we ran out of time, both my\n"
# 519 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Pokémon and the opponent's had about\l"
# 520 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the same amount of HP left.$"
# 521 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 522 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_OrderOfMonsImportant: @ 8256C9A
# 523 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "In the Battle Arena, the order of\n"
# 524 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Pokémon is totally important.\p"
# 525 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "For example, if your first Pokémon\n"
# 526 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "has certain type disadvantages,\l"
# 527 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "try making your second Pokémon one\l"
# 528 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "with moves that are super effective\l"
# 529 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "against the first one.\p"
# 530 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "I think that will be a good way of\n"
# 531 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "making an effective team.$"
# 532 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 533 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_RulesAreListed: @ 8256DB8
# 534 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The Set KO Tourney's rules are listed.$"
# 535 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 536 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading: @ 8256DDF
# 537 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Which heading do you want to read?$"
# 538 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 539 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules: @ 8256E02
# 540 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The Set KO Tourney has special rules,\n"
# 541 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "unlike standard battles.\p"
# 542 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "First, one battle lasts only\n"
# 543 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "three turns.\p"
# 544 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If the outcome is not decided after\n"
# 545 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "three turns, it goes to judging.\p"
# 546 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The Referee will choose the winner\n"
# 547 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "based on how the Pokémon battled.\p"
# 548 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Also, a Pokémon cannot be switched out\n"
# 549 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "until its battle's outcome is decided.$"
# 550 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 551 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainMindRules: @ 8256F43
# 552 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The first judging factor is “Mind.”\n"
# 553 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "This factor evaluates how aggressive\l"
# 554 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the battlers were.\p"
# 555 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The judging is based on how often\n"
# 556 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the Trainers ordered the use of\l"
# 557 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "offensive moves.$"
# 558 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 559 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainSkillRules: @ 8256FF2
# 560 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The second judging factor is “Skill.”\n"
# 561 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "This factor evaluates how effectively\l"
# 562 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Pokémon moves were used.\p"
# 563 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If a move worked successfully,\n"
# 564 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "the Skill rating goes up.\p"
# 565 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If a move failed, the Skill rating\n"
# 566 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "is lowered.\p"
# 567 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If it was an offensive move, the Skill\n"
# 568 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "rating goes up if the move was “super\l"
# 569 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "effective” and goes down if it was\l"
# 570 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "“not very effective.”\p"
# 571 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The Skill rating will not go up for\n"
# 572 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "moves such as Protect and Detect.\p"
# 573 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "If the opponent used Protect or\n"
# 574 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Detect, and your Pokémon failed to\l"
# 575 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "hit with a move, its Skill rating will not\l"
# 576 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "go down.$"
# 577 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 578 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_ExplainBodyRules: @ 8257202
# 579 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The third judging factor is “Body.”\n"
# 580 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "This factor is based on how much HP\l"
# 581 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "remained at the end of a battle.\p"
# 582 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "The rating takes into account how much\n"
# 583 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "HP a Pokémon had at the start of\l"
# 584 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "battle, and what remained at the end.$"
# 585 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 586 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_CongratsOnDefeatingTycoon: @ 82572D9
# 587 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "A victory snatched from the Arena\n"
# 588 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "Tycoon, and a seven-Trainer sweep!\p"
# 589 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "We congratulate you on your most\n"
# 590 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "splendid challenge!$"
# 591 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"

# 592 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
BattleFrontier_BattleArenaLobby_Text_PleaseAcceptBattlePoints: @ 8257353
# 593 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "My dear challenger, in recognition of\n"
# 594 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "your indefatigable spirit, please\l"
# 595 "data/maps/BattleFrontier_BattleArenaLobby/scripts.pory"
	.string "accept these Battle Point(s).$"
