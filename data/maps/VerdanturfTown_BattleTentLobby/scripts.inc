# 1 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 2 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 4 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_MapScripts:: @ 82016D0
# 5 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VerdanturfTown_BattleTentLobby_OnFrame
# 6 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, VerdanturfTown_BattleTentLobby_OnWarp
# 7 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.byte 0
# 8 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 9 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_OnWarp: @ 82016DB
# 10 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, VerdanturfTown_BattleTentLobby_EventScript_TurnPlayerNorth
# 11 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.2byte 0
# 12 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 13 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_TurnPlayerNorth:: @ 82016E5
# 14 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_1, 1
# 15 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 16 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 17 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 18 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_OnFrame: @ 82016EF
# 19 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, VerdanturfTown_BattleTentLobby_EventScript_GetChallengeStatus
# 20 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_0, CHALLENGE_STATUS_SAVING, VerdanturfTown_BattleTentLobby_EventScript_QuitWithoutSaving
# 21 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_0, CHALLENGE_STATUS_PAUSED, VerdanturfTown_BattleTentLobby_EventScript_ResumeChallenge
# 22 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_0, CHALLENGE_STATUS_WON, VerdanturfTown_BattleTentLobby_EventScript_WonChallenge
# 23 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	map_script_2 VAR_TEMP_0, CHALLENGE_STATUS_LOST, VerdanturfTown_BattleTentLobby_EventScript_LostChallenge
# 24 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.2byte 0
# 25 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 26 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_GetChallengeStatus:: @ 8201719
# 27 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_getstatus
# 28 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 29 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 30 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_QuitWithoutSaving:: @ 8201722
# 31 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 32 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_FailedToSaveBeforeEndingChallenge, MSGBOX_DEFAULT
# 33 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 34 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 35 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_0, 255
# 36 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 37 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 38 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 39 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 40 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_WonChallenge:: @ 8201757
# 41 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 42 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak, MSGBOX_DEFAULT
# 43 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message VerdanturfTown_BattleTentLobby_Text_FeatWillBeRecorded
# 44 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 45 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_setrandomprize
# 46 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 47 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_save 0
# 48 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 49 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitse
# 50 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 51 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_GivePrize:: @ 8201791
# 52 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_PresentYouWithPrize, MSGBOX_DEFAULT
# 53 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_giveprize
# 54 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 55 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case FALSE, VerdanturfTown_BattleTentLobby_EventScript_NoRoomForPrize
# 56 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 57 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattleDomeLobby_Text_ReceivedPrize  @ Odd that it used Dome's copy instead of Palace's
# 58 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 59 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 60 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitfanfare
# 61 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ReturnFortified, MSGBOX_DEFAULT
# 62 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 63 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_0, 255
# 64 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 65 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 66 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 67 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NoRoomForPrize:: @ 82017DD
# 68 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_NoSpaceForPrize, MSGBOX_DEFAULT
# 69 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 70 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 71 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_0, 255
# 72 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 73 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 74 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 75 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_PrizeWaiting:: @ 82017EE
# 76 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 77 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak, MSGBOX_DEFAULT
# 78 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_GivePrize
# 79 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 80 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 81 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_LostChallenge:: @ 82017FD
# 82 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 83 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message VerdanturfTown_BattleTentLobby_Text_ResultsWillBeRecorded
# 84 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 85 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_50
# 86 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_save 0
# 87 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 88 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitse
# 89 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ReturnFortified, MSGBOX_DEFAULT
# 90 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 91 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_0, 255
# 92 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 93 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 94 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 95 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ResumeChallenge:: @ 8201837
# 96 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 97 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_WeHaveBeenWaiting, MSGBOX_DEFAULT
# 98 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_MustSaveBeforeChallenge
# 99 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 100 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_save CHALLENGE_STATUS_SAVING
# 101 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	playse SE_SAVE
# 102 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitse
# 103 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 104 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_0, 255
# 105 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge
# 106 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 107 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Attendant:: @ 8201873
# 108 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 109 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	faceplayer
# 110 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_getprize
# 111 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, ITEM_NONE
# 112 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_ne VerdanturfTown_BattleTentLobby_EventScript_PrizeWaiting
# 113 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 114 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_WelcomeToBattleTent, MSGBOX_DEFAULT
# 115 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge:: @ 8201893
# 116 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message VerdanturfTown_BattleTentLobby_Text_TakeChallenge
# 117 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 118 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	multichoice 17, 6, MULTI_CHALLENGEINFO, 0
# 119 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 120 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 0, VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge
# 121 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 1, VerdanturfTown_BattleTentLobby_EventScript_ExplainChallenge
# 122 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 2, VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge
# 123 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge
# 124 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 125 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_TryEnterChallenge:: @ 82018CF
# 126 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_PALACE
# 127 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 128 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_RESULT, 2
# 129 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_checkineligible
# 130 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	compare VAR_0x8004, TRUE
# 131 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_eq VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMons
# 132 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_LVL_MODE, FRONTIER_LVL_TENT
# 133 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_SelectThreeMons, MSGBOX_DEFAULT
# 134 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	fadescreen FADE_TO_BLACK
# 135 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8004, 1
# 136 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 137 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special ChoosePartyForBattleFrontier
# 138 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitstate
# 139 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, 0
# 140 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_eq VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 141 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_SaveBeforeChallenge, MSGBOX_YESNO
# 142 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 143 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case NO, VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 144 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case YES, VerdanturfTown_BattleTentLobby_EventScript_SaveBeforeChallenge
# 145 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge
# 146 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 147 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_SaveBeforeChallenge:: @ 8201954
# 148 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_0, 0
# 149 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_SELECTED_MON_ORDER
# 150 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	verdanturftent_init
# 151 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, CHALLENGE_STATUS_SAVING
# 152 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_PAUSED, FALSE
# 153 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 154 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 155 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	delay 2
# 156 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	call Common_EventScript_SaveGame
# 157 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_0, 255
# 158 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, 0
# 159 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_eq VerdanturfTown_BattleTentLobby_EventScript_CancelChallengeSaveFailed
# 160 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_EnterChallenge:: @ 82019AE
# 161 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special SavePlayerParty
# 162 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_setpartyorder FRONTIER_PARTY_SIZE
# 163 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_NowFollowMe, MSGBOX_DEFAULT
# 164 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closemessage
# 165 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	call VerdanturfTown_BattleTentLobby_EventScript_WalkToDoor
# 166 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	warp MAP_VERDANTURF_TOWN_BATTLE_TENT_CORRIDOR, 255, 2, 7
# 167 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_TEMP_0, 0
# 168 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitstate
# 169 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 170 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 171 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ExplainChallenge:: @ 82019DB
# 172 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ExplainVerdanturfTent, MSGBOX_DEFAULT
# 173 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_AskEnterChallenge
# 174 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 175 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMons:: @ 82019E8
# 176 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 177 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case FRONTIER_LVL_50, VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMonsLv50
# 178 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case FRONTIER_LVL_OPEN, VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMonsLvOpen
# 179 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 180 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMonsLv50:: @ 8201A03
# 181 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLv50, MSGBOX_DEFAULT
# 182 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_EndCancelChallenge
# 183 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 184 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_NotEnoughValidMonsLvOpen:: @ 8201A10
# 185 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen, MSGBOX_DEFAULT
# 186 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_EndCancelChallenge
# 187 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 188 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_CancelChallengeSaveFailed:: @ 8201A1D
# 189 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	frontier_set FRONTIER_DATA_CHALLENGE_STATUS, 0
# 190 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge
# 191 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 192 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_LoadPartyCancelChallenge:: @ 8201A34
# 193 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special LoadPlayerParty
# 194 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_CancelChallenge:: @ 8201A37
# 195 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ReturnFortified, MSGBOX_DEFAULT
# 196 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_EndCancelChallenge:: @ 8201A3F
# 197 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 198 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 199 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 200 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_WalkToDoor:: @ 8201A41
# 201 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, VerdanturfTown_BattleTentLobby_Movement_WalkToDoor
# 202 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VerdanturfTown_BattleTentLobby_Movement_WalkToDoor
# 203 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmovement 0
# 204 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	opendoor 6, 1
# 205 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitdooranim
# 206 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement LOCALID_ATTENDANT, VerdanturfTown_BattleTentLobby_Movement_AttendantEnterDoor
# 207 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VerdanturfTown_BattleTentLobby_Movement_PlayerEnterDoor
# 208 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmovement 0
# 209 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	closedoor 6, 1
# 210 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitdooranim
# 211 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	return
# 212 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 213 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Movement_WalkToDoor: @ 8201A70
# 214 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 215 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 216 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 217 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	step_end
# 218 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 219 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Movement_AttendantEnterDoor: @ 8201A74
# 220 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 221 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	set_invisible
# 222 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	step_end
# 223 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 224 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Movement_PlayerEnterDoor: @ 8201A77
# 225 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 226 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	walk_up
# 227 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	set_invisible
# 228 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	step_end
# 229 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 230 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_AttractGiver:: @ 8201A7B
# 231 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 232 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	faceplayer
# 233 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM45, VerdanturfTown_BattleTentLobby_EventScript_ReceivedAttract
# 234 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AttractionRunsDeep, MSGBOX_DEFAULT
# 235 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	giveitem ITEM_TM45
# 236 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	compare VAR_RESULT, 0
# 237 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_eq Common_EventScript_ShowBagIsFull
# 238 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setflag FLAG_RECEIVED_TM45
# 239 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AttractionMutual, MSGBOX_DEFAULT
# 240 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 241 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 242 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 243 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ReceivedAttract:: @ 8201AB2
# 244 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_AttractionMutual, MSGBOX_DEFAULT
# 245 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 246 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 247 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 248 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Boy1:: @ 8201ABC
# 249 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_TaughtWhatKindsOfMoves, MSGBOX_NPC
# 250 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 251 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 252 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Boy2:: @ 8201AC5
# 253 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 254 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_MonsReluctantToUseDislikedMoves, MSGBOX_DEFAULT
# 255 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 256 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 257 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 258 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_Scott:: @ 8201AD0
# 259 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 260 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	faceplayer
# 261 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_IN_VERDANTURF, VerdanturfTown_BattleTentLobby_EventScript_ScottAlreadySpokenTo
# 262 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ScottCanMeetToughTrainers, MSGBOX_DEFAULT
# 263 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 264 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setflag FLAG_MET_SCOTT_IN_VERDANTURF
# 265 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 266 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 267 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 268 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ScottAlreadySpokenTo:: @ 8201AED
# 269 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_ScottVisitRegularly, MSGBOX_DEFAULT
# 270 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 271 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 272 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 273 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_LittleBoy:: @ 8201AF7
# 274 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lock
# 275 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_GentleMonsScaryIfAngry, MSGBOX_DEFAULT
# 276 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	release
# 277 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 278 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 279 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesBoard:: @ 8201B02
# 280 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	lockall
# 281 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox VerdanturfTown_BattleTentLobby_Text_RulesAreListed, MSGBOX_DEFAULT
# 282 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 283 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 284 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 285 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard:: @ 8201B11
# 286 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	message BattleFrontier_BattlePalaceLobby_Text_ReadWhichHeading
# 287 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitmessage
# 288 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BATTLE_TENT_RULES
# 289 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	special ShowScrollableMultichoice
# 290 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	waitstate
# 291 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	switch VAR_RESULT
# 292 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 0, VerdanturfTown_BattleTentLobby_EventScript_RulesLevel
# 293 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 1, VerdanturfTown_BattleTentLobby_EventScript_RulesBasics
# 294 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 2, VerdanturfTown_BattleTentLobby_EventScript_RulesNature
# 295 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 3, VerdanturfTown_BattleTentLobby_EventScript_RulesMoves
# 296 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 4, VerdanturfTown_BattleTentLobby_EventScript_RulesUnderpowered
# 297 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 5, VerdanturfTown_BattleTentLobby_EventScript_RulesWhenInDanger
# 298 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case 6, VerdanturfTown_BattleTentLobby_EventScript_ExitRules
# 299 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	case MULTI_B_PRESSED, VerdanturfTown_BattleTentLobby_EventScript_ExitRules
# 300 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 301 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 302 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesLevel:: @ 8201B7E
# 303 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleTentLobby_Text_ExplainLevelRules, MSGBOX_DEFAULT
# 304 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 305 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 306 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 307 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesBasics:: @ 8201B8C
# 308 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesBasics, MSGBOX_DEFAULT
# 309 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 310 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 311 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 312 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesNature:: @ 8201B9A
# 313 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesNature, MSGBOX_DEFAULT
# 314 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 315 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 316 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 317 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesMoves:: @ 8201BA8
# 318 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesMoves, MSGBOX_DEFAULT
# 319 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 320 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 321 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 322 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesUnderpowered:: @ 8201BB6
# 323 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesUnderpowered, MSGBOX_DEFAULT
# 324 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 325 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 326 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 327 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_RulesWhenInDanger:: @ 8201BC4
# 328 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	msgbox BattleFrontier_BattlePalaceLobby_Text_ExplainRulesWhenInDanger, MSGBOX_DEFAULT
# 329 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	goto VerdanturfTown_BattleTentLobby_EventScript_ReadRulesBoard
# 330 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 331 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 332 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_EventScript_ExitRules:: @ 8201BD2
# 333 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	releaseall
# 334 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	end
# 335 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 336 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_MonsReluctantToUseDislikedMoves: @ 8201BD4
# 337 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "If it doesn't like a certain move,\n"
# 338 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "a Pokémon will be reluctant to use it.\p"
# 339 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "It doesn't matter how strong it is,\n"
# 340 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "either.\p"
# 341 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "For example, a Pokémon with a Gentle\n"
# 342 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "nature probably won't enjoy hurting\l"
# 343 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "its opponents.\p"
# 344 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "If it can't seem to live up to its\n"
# 345 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "potential, it's probably failing at\l"
# 346 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "using a disliked move against its will.$"
# 347 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 348 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_GentleMonsScaryIfAngry: @ 8201D11
# 349 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "My big sister is gentle usually.\n"
# 350 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "But when she gets angry,\l"
# 351 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "she's really, really scary!\p"
# 352 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "I bet a gentle Pokémon will be scary\n"
# 353 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "if it gets angry!$"
# 354 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 355 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_AttractionRunsDeep: @ 8201D9E
# 356 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "My feelings toward my Pokémon…\n"
# 357 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "The attraction runs deep…\p"
# 358 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "Oh, hi, you didn't see that, did you?\n"
# 359 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "Well, it doesn't matter.\p"
# 360 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "How would you like this TM for\n"
# 361 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "your Pokémon?$"
# 362 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 363 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_AttractionMutual: @ 8201E43
# 364 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "My feelings toward my Pokémon…\n"
# 365 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "I'm sure the attraction is mutual!\p"
# 366 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "They battle exactly the way I want\n"
# 367 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "them to!$"
# 368 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 369 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_TaughtWhatKindsOfMoves: @ 8201EB1
# 370 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "What kind of moves have you taught\n"
# 371 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "your Pokémon?\p"
# 372 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "I think you would give yourself\n"
# 373 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "an advantage if they knew how to\l"
# 374 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "heal or protect themselves.$"
# 375 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 376 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_ScottCanMeetToughTrainers: @ 8201F3F
# 377 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "Scott: Hey there, {PLAYER}{KUN}!\n"
# 378 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "I thought I might see you here.\p"
# 379 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "A Battle Tent's a place where\n"
# 380 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "you can meet tough Trainers.\p"
# 381 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "It doesn't matter what the rules are,\n"
# 382 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "or how battles are waged, either.\p"
# 383 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "{PLAYER}{KUN}, I expect you to do\n"
# 384 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "the best you can!$"
# 385 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"

# 386 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
VerdanturfTown_BattleTentLobby_Text_ScottVisitRegularly: @ 8202025
# 387 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "Scott: I visit here regularly in hopes\n"
# 388 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "of seeing tough Trainers in action\l"
# 389 "data/maps/VerdanturfTown_BattleTentLobby/scripts.pory"
	.string "in whatever the situation.$"
